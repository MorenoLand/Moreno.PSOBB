#include "protos.h"

void f_005a4158(void) /* sub_5A4158 */
{
    FN_ENTER(0x005a4158);
    /* 005a4158: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a415b: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 005a4161: fcom dword ptr [0x929f78] */ fx_compare(ST(0), R_F32((u32)(0x929f78u))); 
    /* 005a4167: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a4169: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a416a: je 0x5a417e */ if (fZ) goto L_005a417e;
L_005a416c:; BB(0x005a416c);
    /* 005a416c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a416e: fld dword ptr [0x929f74] */ FPUSH(R_F32((u32)(0x929f74u)));
    /* 005a4174: mov dword ptr [ecx + 0x35c], 0x40000000 */ W32((u32)(r_ecx+0x35cu), 0x40000000u);
L_005a417e:; BB(0x005a417e);
    /* 005a417e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005a4181: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005a4185: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a418a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a418e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a4192: fistp dword ptr [ecx + 0x37c] */ W32((u32)(r_ecx+0x37cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a4198: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005a419b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a419e: ret  */ FN_RET(0x005a4158); r_esp += 4; return;
}

void f_005a4160(void)
{
    FN_ENTER(0x005a4160);
    /* 005a4160: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 005a4162: adc eax, 0x929f78 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x929f78u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 005a4167: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a4169: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a416a: je 0x5a417e */ if (fZ) goto L_005a417e;
L_005a416c:; BB(0x005a416c);
    /* 005a416c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a416e: fld dword ptr [0x929f74] */ FPUSH(R_F32((u32)(0x929f74u)));
    /* 005a4174: mov dword ptr [ecx + 0x35c], 0x40000000 */ W32((u32)(r_ecx+0x35cu), 0x40000000u);
L_005a417e:; BB(0x005a417e);
    /* 005a417e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005a4181: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005a4185: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a418a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a418e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005a4192: fistp dword ptr [ecx + 0x37c] */ W32((u32)(r_ecx+0x37cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a4198: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005a419b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a419e: ret  */ FN_RET(0x005a4160); r_esp += 4; return;
}

void f_005a41a0(void) /* sub_5A41A0 */
{
    FN_ENTER(0x005a41a0);
    /* 005a41a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a41a1: mov esi, ecx */ r_esi = r_ecx;
    /* 005a41a3: mov ecx, esi */ r_ecx = r_esi;
    /* 005a41a5: mov dword ptr [esi + 0x370], 0 */ W32((u32)(r_esi+0x370u), 0x0u);
    /* 005a41af: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 005a41b1: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5a41b6u); f_00787550();
    /* 005a41b6: mov ecx, dword ptr [0xa747ac] */ r_ecx = R32((u32)(0xa747acu));
    /* 005a41bc: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005a41c2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005a41c5: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 005a41c8: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005a41ce: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005a41d1: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 005a41d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a41d5: ret  */ FN_RET(0x005a41a0); r_esp += 4; return;
}

void f_005a41d8(void) /* sub_5A41D8 */
{
    FN_ENTER(0x005a41d8);
    /* 005a41d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a41d9: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a41dc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a41de: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 005a41e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a41e6: jne 0x5a43fb */ if (!fZ) goto L_005a43fb;
L_005a41ec:; BB(0x005a41ec);
    /* 005a41ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a41ee: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a41f3u); f_00770738();
    /* 005a41f3: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005a41fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a41fc: je 0x5a4202 */ if (fZ) goto L_005a4202;
L_005a41fe:; BB(0x005a41fe);
    /* 005a41fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4200: je 0x5a4213 */ if (fZ) goto L_005a4213;
L_005a4202:; BB(0x005a4202);
    /* 005a4202: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4204: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a4206: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a4208: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x5a420bu); call_ind(t); }
    /* 005a420b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a420d: je 0x5a43e1 */ if (fZ) goto L_005a43e1;
L_005a4213:; BB(0x005a4213);
    /* 005a4213: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005a4216: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a4218: je 0x5a4370 */ if (fZ) goto L_005a4370;
L_005a421e:; BB(0x005a421e);
    /* 005a421e: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 005a4224: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a422a: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 005a4230: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a4232: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005a4239: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005a423e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005a4246: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005a424e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005a4250: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a4252: mov edx, 0 */ r_edx = 0x0u;
    /* 005a4257: jle 0x5a4428 */ if ((fZ||fS!=fO)) goto L_005a4428;
L_005a425d:; BB(0x005a425d);
    /* 005a425d: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005a4261: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005a4265: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 005a4269: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005a426d: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 005a4271: mov ebp, edx */ r_ebp = r_edx;
    /* 005a4273: mov edx, ecx */ r_edx = r_ecx;
L_005a4275:; BB(0x005a4275);
    /* 005a4275: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 005a427c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a427e: je 0x5a4413 */ if (fZ) goto L_005a4413;
L_005a4284:; BB(0x005a4284);
    /* 005a4284: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 005a4288: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a428e: jge 0x5a434c */ if ((fS==fO)) goto L_005a434c;
L_005a4294:; BB(0x005a4294);
    /* 005a4294: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 005a4298: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a429a: je 0x5a434c */ if (fZ) goto L_005a434c;
L_005a42a0:; BB(0x005a42a0);
    /* 005a42a0: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a42a3: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a42a8: jne 0x5a434c */ if (!fZ) goto L_005a434c;
L_005a42ae:; BB(0x005a42ae);
    /* 005a42ae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a42b1: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a42b7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a42ba: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 005a42c0: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 005a42c6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005a42ca: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a42d0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005a42d4: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005a42d8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5a42ddu); f_0082f9c4();
    /* 005a42dd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a42e0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a42e2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005a42e6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a42e8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a42ea: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 005a42ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a42f0: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005a42f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a42f5: jb 0x5a4305 */ if (fC) goto L_005a4305;
L_005a42f7:; BB(0x005a42f7);
    /* 005a42f7: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005a42fd: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a4303: jmp 0x5a434c */ goto L_005a434c;
L_005a4305:; BB(0x005a4305);
    /* 005a4305: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a430b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a430c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a430e: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5a4313u); f_00771e14();
    /* 005a4313: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4316: je 0x5a4340 */ if (fZ) goto L_005a4340;
L_005a4318:; BB(0x005a4318);
    /* 005a4318: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a431a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a431b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005a431f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4320: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5a4325u); f_0077fffc();
    /* 005a4325: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4328: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005a432e: mov esi, dword ptr [0xaae164] */ r_esi = R32((u32)(0xaae164u));
    /* 005a4334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4336: je 0x5a4400 */ if (fZ) goto L_005a4400;
L_005a433c:; BB(0x005a433c);
    /* 005a433c: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a433e: jmp 0x5a434c */ goto L_005a434c;
L_005a4340:; BB(0x005a4340);
    /* 005a4340: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 005a4346: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_005a434c:; BB(0x005a434c);
    /* 005a434c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a434f: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4351: jl 0x5a4275 */ if ((fS!=fO)) goto L_005a4275;
L_005a4357:; BB(0x005a4357);
    /* 005a4357: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005a435b: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005a435f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005a4363: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_005a4367:; BB(0x005a4367);
    /* 005a4367: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 005a436e: jmp 0x5a4388 */ goto L_005a4388;
L_005a4370:; BB(0x005a4370);
    /* 005a4370: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4372: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 005a4378: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005a437a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a437c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x5a4381u); f_007714cc();
    /* 005a4381: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
L_005a4388:; BB(0x005a4388);
    /* 005a4388: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 005a438b: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4391: jl 0x5a43b5 */ if ((fS!=fO)) goto L_005a43b5;
L_005a4393:; BB(0x005a4393);
    /* 005a4393: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4399: jge 0x5a43ac */ if ((fS==fO)) goto L_005a43ac;
L_005a439b:; BB(0x005a439b);
    /* 005a439b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a439c: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x5a43a1u); f_00786b3c();
    /* 005a43a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a43a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a43a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43a5: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a43aau); f_007706b0();
    /* 005a43aa: jmp 0x5a43e1 */ goto L_005a43e1;
L_005a43ac:; BB(0x005a43ac);
    /* 005a43ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43ae: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a43b3u); f_007865cc();
    /* 005a43b3: jmp 0x5a43e1 */ goto L_005a43e1;
L_005a43b5:; BB(0x005a43b5);
    /* 005a43b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a43b6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5a43bbu); f_0068d5a8();
    /* 005a43bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a43bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a43be: je 0x5a43d8 */ if (fZ) goto L_005a43d8;
L_005a43c0:; BB(0x005a43c0);
    /* 005a43c0: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 005a43c6: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a43cc: jne 0x5a43d8 */ if (!fZ) goto L_005a43d8;
L_005a43ce:; BB(0x005a43ce);
    /* 005a43ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a43cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43d1: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a43d6u); f_007706b0();
    /* 005a43d6: jmp 0x5a43e1 */ goto L_005a43e1;
L_005a43d8:; BB(0x005a43d8);
    /* 005a43d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a43da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43dc: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5a43e1u); f_007706b0();
L_005a43e1:; BB(0x005a43e1);
    /* 005a43e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43e3: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a43e8u); f_00770738();
    /* 005a43e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a43e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43eb: call 0x786598 */ r_esp -= 4; W32(r_esp, 0x5a43f0u); f_00786598();
    /* 005a43f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a43f2: jne 0x5a43fb */ if (!fZ) goto L_005a43fb;
L_005a43f4:; BB(0x005a43f4);
    /* 005a43f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a43f6: call 0x7865cc */ r_esp -= 4; W32(r_esp, 0x5a43fbu); f_007865cc();
L_005a43fb:; BB(0x005a43fb);
    /* 005a43fb: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a43fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a43ff: ret  */ FN_RET(0x005a41d8); r_esp += 4; return;
L_005a4400:; BB(0x005a4400);
    /* 005a4400: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005a4404: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005a4408: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a440a: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 005a440e: jmp 0x5a434c */ goto L_005a434c;
L_005a4413:; BB(0x005a4413);
    /* 005a4413: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005a4417: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005a441b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005a441f: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005a4423: jmp 0x5a4367 */ goto L_005a4367;
L_005a4428:; BB(0x005a4428);
    /* 005a4428: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a442a: jmp 0x5a4367 */ goto L_005a4367;
}

void f_005a4430(void) /* sub_5A4430 */
{
    FN_ENTER(0x005a4430);
    /* 005a4430: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4431: mov esi, ecx */ r_esi = r_ecx;
    /* 005a4433: mov ecx, esi */ r_ecx = r_esi;
    /* 005a4435: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x5a443au); f_00777d10();
    /* 005a443a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a443c: je 0x5a44b1 */ if (fZ) goto L_005a44b1;
L_005a443e:; BB(0x005a443e);
    /* 005a443e: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a4445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a4447: jl 0x5a44aa */ if ((fS!=fO)) goto L_005a44aa;
L_005a4449:; BB(0x005a4449);
    /* 005a4449: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a444c: jle 0x5a4453 */ if ((fZ||fS!=fO)) goto L_005a4453;
L_005a444e:; BB(0x005a444e);
    /* 005a444e: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a4451: jne 0x5a44aa */ if (!fZ) goto L_005a44aa;
L_005a4453:; BB(0x005a4453);
    /* 005a4453: mov dword ptr [esi + 0x390], 1 */ W32((u32)(r_esi+0x390u), 0x1u);
    /* 005a445d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a445f: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005a4466: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a446d: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a4477: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a447e: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 005a4484: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a4487: mov edx, 2 */ r_edx = 0x2u;
    /* 005a448c: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 005a4493: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a4498: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a449b: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 005a44a1: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 005a44a4: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a44a7: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
L_005a44aa:; BB(0x005a44aa);
    /* 005a44aa: mov eax, 1 */ r_eax = 0x1u;
    /* 005a44af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a44b0: ret  */ FN_RET(0x005a4430); r_esp += 4; return;
L_005a44b1:; BB(0x005a44b1);
    /* 005a44b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a44b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a44b4: ret  */ FN_RET(0x005a4430); r_esp += 4; return;
}

void f_005a44b8(void) /* sub_5A44B8 */
{
    FN_ENTER(0x005a44b8);
    /* 005a44b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a44b9: mov esi, ecx */ r_esi = r_ecx;
    /* 005a44bb: mov ecx, esi */ r_ecx = r_esi;
    /* 005a44bd: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x5a44c2u); f_007780a8();
    /* 005a44c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a44c4: je 0x5a4539 */ if (fZ) goto L_005a4539;
L_005a44c6:; BB(0x005a44c6);
    /* 005a44c6: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a44cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a44cf: jl 0x5a4532 */ if ((fS!=fO)) goto L_005a4532;
L_005a44d1:; BB(0x005a44d1);
    /* 005a44d1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a44d4: jle 0x5a44db */ if ((fZ||fS!=fO)) goto L_005a44db;
L_005a44d6:; BB(0x005a44d6);
    /* 005a44d6: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a44d9: jne 0x5a4532 */ if (!fZ) goto L_005a4532;
L_005a44db:; BB(0x005a44db);
    /* 005a44db: mov dword ptr [esi + 0x390], 1 */ W32((u32)(r_esi+0x390u), 0x1u);
    /* 005a44e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a44e7: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 005a44ee: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005a44f5: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a44ff: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a4506: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 005a450c: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005a450f: mov edx, 2 */ r_edx = 0x2u;
    /* 005a4514: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 005a451b: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a4520: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005a4523: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 005a4529: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 005a452c: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a452f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
L_005a4532:; BB(0x005a4532);
    /* 005a4532: mov eax, 1 */ r_eax = 0x1u;
    /* 005a4537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a4538: ret  */ FN_RET(0x005a44b8); r_esp += 4; return;
L_005a4539:; BB(0x005a4539);
    /* 005a4539: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a453b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a453c: ret  */ FN_RET(0x005a44b8); r_esp += 4; return;
}

void f_005a4540(void) /* sub_5A4540 */
{
    FN_ENTER(0x005a4540);
    /* 005a4540: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005a4547: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005a4549: jl 0x5a4555 */ if ((fS!=fO)) goto L_005a4555;
L_005a454b:; BB(0x005a454b);
    /* 005a454b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a454e: jle 0x5a4574 */ if ((fZ||fS!=fO)) goto L_005a4574;
L_005a4550:; BB(0x005a4550);
    /* 005a4550: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4553: je 0x5a4574 */ if (fZ) goto L_005a4574;
L_005a4555:; BB(0x005a4555);
    /* 005a4555: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005a4558: mov dword ptr [ecx + 0x390], 1 */ W32((u32)(r_ecx+0x390u), 0x1u);
    /* 005a4562: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a4564: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005a456b: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a4571: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_005a4574:; BB(0x005a4574);
    /* 005a4574: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 005a457a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a457c: je 0x5a45cb */ if (fZ) goto L_005a45cb;
L_005a457e:; BB(0x005a457e);
    /* 005a457e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a4581: jne 0x5a459c */ if (!fZ) goto L_005a459c;
L_005a4583:; BB(0x005a4583);
    /* 005a4583: mov eax, 1 */ r_eax = 0x1u;
    /* 005a4588: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005a458f: mov edx, 5 */ r_edx = 0x5u;
    /* 005a4594: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005a459b: ret  */ FN_RET(0x005a4540); r_esp += 4; return;
L_005a459c:; BB(0x005a459c);
    /* 005a459c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a459f: jne 0x5a45ba */ if (!fZ) goto L_005a45ba;
L_005a45a1:; BB(0x005a45a1);
    /* 005a45a1: mov eax, 0xa */ r_eax = 0xau;
    /* 005a45a6: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005a45ad: mov edx, 5 */ r_edx = 0x5u;
    /* 005a45b2: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005a45b9: ret  */ FN_RET(0x005a4540); r_esp += 4; return;
L_005a45ba:; BB(0x005a45ba);
    /* 005a45ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a45bc: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005a45c3: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a45ca: ret  */ FN_RET(0x005a4540); r_esp += 4; return;
L_005a45cb:; BB(0x005a45cb);
    /* 005a45cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a45cd: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005a45d4: mov edx, 2 */ r_edx = 0x2u;
    /* 005a45d9: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 005a45e0: ret  */ FN_RET(0x005a4540); r_esp += 4; return;
}

void f_005a45e4(void) /* sub_5A45E4 */
{
    FN_ENTER(0x005a45e4);
    /* 005a45e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a45e8: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a45eb: mov edi, ecx */ r_edi = r_ecx;
    /* 005a45ed: mov ecx, edi */ r_ecx = r_edi;
    /* 005a45ef: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a45f4u); f_00770738();
    /* 005a45f4: mov ebx, eax */ r_ebx = r_eax;
    /* 005a45f6: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005a45fd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4600: jle 0x5a482d */ if ((fZ||fS!=fO)) goto L_005a482d;
L_005a4606:; BB(0x005a4606);
    /* 005a4606: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4608: je 0x5a482d */ if (fZ) goto L_005a482d;
L_005a460e:; BB(0x005a460e);
    /* 005a460e: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 005a4614: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4616: je 0x5a482d */ if (fZ) goto L_005a482d;
L_005a461c:; BB(0x005a461c);
    /* 005a461c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a461f: je 0x5a482d */ if (fZ) goto L_005a482d;
L_005a4625:; BB(0x005a4625);
    /* 005a4625: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 005a4628: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a462e: jne 0x5a482d */ if (!fZ) goto L_005a482d;
L_005a4634:; BB(0x005a4634);
    /* 005a4634: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a4637: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4639: mov ecx, edi */ r_ecx = r_edi;
    /* 005a463b: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a4640u); f_00771458();
    /* 005a4640: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005a4644: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a4647: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005a464b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a464d: fmul qword ptr [0x929ed0] */ ST(0) = ST(0) * R_F64((u32)(0x929ed0u));
    /* 005a4653: fdiv qword ptr [0x929ec8] */ ST(0) = ST(0) / R_F64((u32)(0x929ec8u));
    /* 005a4659: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005a465d: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005a4662: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a4667: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a466b: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005a466f: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a4673: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005a4677: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005a467b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a467c: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a467f: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5a4684u); f_007a9018();
    /* 005a4684: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4687: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005a468d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a468f: je 0x5a4837 */ if (fZ) goto L_005a4837;
L_005a4695:; BB(0x005a4695);
    /* 005a4695: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
L_005a4698:; BB(0x005a4698);
    /* 005a4698: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005a469c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a469e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a46a0: mov ebx, eax */ r_ebx = r_eax;
    /* 005a46a2: mov ebp, edx */ r_ebp = r_edx;
    /* 005a46a4: mov esi, ecx */ r_esi = r_ecx;
L_005a46a6:; BB(0x005a46a6);
    /* 005a46a6: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005a46aa: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005a46ae: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 005a46b4: mov ecx, esi */ r_ecx = r_esi;
    /* 005a46b6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a46b8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a46ba: add ecx, dword ptr [0xa747b8] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa747b8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a46c0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a46c3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a46c5: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 005a46c8: mov dword ptr [edi + 0x31c], eax */ W32((u32)(r_edi+0x31cu), r_eax);
    /* 005a46ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a46d0: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 005a46d3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005a46d6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005a46d8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005a46da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a46dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a46dd: jb 0x5a481e */ if (fC) goto L_005a481e;
L_005a46e3:; BB(0x005a46e3);
    /* 005a46e3: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a46e5: jg 0x5a481e */ if ((!fZ&&fS==fO)) goto L_005a481e;
L_005a46eb:; BB(0x005a46eb);
    /* 005a46eb: mov dword ptr [edi + 0x388], ebp */ W32((u32)(r_edi+0x388u), r_ebp);
    /* 005a46f1: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a46f4: je 0x5a47fc */ if (fZ) goto L_005a47fc;
L_005a46fa:; BB(0x005a46fa);
    /* 005a46fa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a46fc: jne 0x5a477f */ if (!fZ) goto L_005a477f;
L_005a4702:; BB(0x005a4702);
    /* 005a4702: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005a4708: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a470b: je 0x5a481e */ if (fZ) goto L_005a481e;
L_005a4711:; BB(0x005a4711);
    /* 005a4711: fld dword ptr [edi + 0x398] */ FPUSH(R_F32((u32)(r_edi+0x398u)));
    /* 005a4717: fcomp dword ptr [0x929f6c] */ fx_compare(ST(0), R_F32((u32)(0x929f6cu))); FPOP();
    /* 005a471d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a471f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a4720: jb 0x5a481e */ if (fC) goto L_005a481e;
L_005a4726:; BB(0x005a4726);
    /* 005a4726: mov ecx, edi */ r_ecx = r_edi;
    /* 005a4728: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a472du); f_007751b0();
    /* 005a472d: fcomp dword ptr [edi + 0x398] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x398u))); FPOP();
    /* 005a4733: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a4735: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a4736: jb 0x5a484f */ if (fC) goto L_005a484f;
L_005a473c:; BB(0x005a473c);
    /* 005a473c: mov dword ptr [edi + 0x38c], 0xffffffff */ W32((u32)(r_edi+0x38cu), 0xffffffffu);
    /* 005a4746: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4748: mov ecx, edi */ r_ecx = r_edi;
    /* 005a474a: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4750: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4756: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a475c: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a4761u); f_00771c8c();
    /* 005a4761: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4767: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a476d: mov ecx, edi */ r_ecx = r_edi;
    /* 005a476f: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4775: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5a477au); f_00771f1c();
    /* 005a477a: jmp 0x5a481e */ goto L_005a481e;
L_005a477f:; BB(0x005a477f);
    /* 005a477f: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4782: jne 0x5a481e */ if (!fZ) goto L_005a481e;
L_005a4788:; BB(0x005a4788);
    /* 005a4788: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005a478e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4791: je 0x5a481e */ if (fZ) goto L_005a481e;
L_005a4797:; BB(0x005a4797);
    /* 005a4797: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005a479b: fcomp dword ptr [0x929f68] */ fx_compare(ST(0), R_F32((u32)(0x929f68u))); FPOP();
    /* 005a47a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a47a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a47a4: jbe 0x5a47bc */ if ((fC||fZ)) goto L_005a47bc;
L_005a47a6:; BB(0x005a47a6);
    /* 005a47a6: mov ecx, edi */ r_ecx = r_edi;
    /* 005a47a8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a47adu); f_007751b0();
    /* 005a47ad: fcomp dword ptr [edi + 0x39c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x39cu))); FPOP();
    /* 005a47b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a47b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a47b6: jb 0x5a4842 */ if (fC) goto L_005a4842;
L_005a47bc:; BB(0x005a47bc);
    /* 005a47bc: mov dword ptr [edi + 0x38c], 0xffffffff */ W32((u32)(r_edi+0x38cu), 0xffffffffu);
    /* 005a47c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a47c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005a47ca: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a47d0: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a47d6: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a47dc: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5a47e1u); f_00771c8c();
    /* 005a47e1: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a47e7: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a47ed: mov ecx, edi */ r_ecx = r_edi;
    /* 005a47ef: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a47f5: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x5a47fau); f_00771f1c();
    /* 005a47fa: jmp 0x5a481e */ goto L_005a481e;
L_005a47fc:; BB(0x005a47fc);
    /* 005a47fc: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 005a4802: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4805: jne 0x5a4811 */ if (!fZ) goto L_005a4811;
L_005a4807:; BB(0x005a4807);
    /* 005a4807: mov dword ptr [edi + 0x38c], 0 */ W32((u32)(r_edi+0x38cu), 0x0u);
L_005a4811:; BB(0x005a4811);
    /* 005a4811: mov eax, 1 */ r_eax = 0x1u;
    /* 005a4816: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a4819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a481a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a481b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a481c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a481d: ret  */ FN_RET(0x005a45e4); r_esp += 4; return;
L_005a481e:; BB(0x005a481e);
    /* 005a481e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a4821: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005a4824: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a4827: jl 0x5a46a6 */ if ((fS!=fO)) goto L_005a46a6;
L_005a482d:; BB(0x005a482d);
    /* 005a482d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a482f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a4832: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a4833: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4834: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a4835: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a4836: ret  */ FN_RET(0x005a45e4); r_esp += 4; return;
L_005a4837:; BB(0x005a4837);
    /* 005a4837: fld dword ptr [0x929f70] */ FPUSH(R_F32((u32)(0x929f70u)));
    /* 005a483d: jmp 0x5a4698 */ goto L_005a4698;
L_005a4842:; BB(0x005a4842);
    /* 005a4842: mov eax, 1 */ r_eax = 0x1u;
    /* 005a4847: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a484a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a484b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a484c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a484d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a484e: ret  */ FN_RET(0x005a45e4); r_esp += 4; return;
L_005a484f:; BB(0x005a484f);
    /* 005a484f: mov eax, 1 */ r_eax = 0x1u;
    /* 005a4854: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a4857: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a4858: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4859: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a485a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a485b: ret  */ FN_RET(0x005a45e4); r_esp += 4; return;
}

void f_005a485c(void) /* sub_5A485C */
{
    FN_ENTER(0x005a485c);
    /* 005a485c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005a485d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a485e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a485f: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a4862: mov edi, ecx */ r_edi = r_ecx;
    /* 005a4864: mov eax, dword ptr [edi + 0x388] */ r_eax = R32((u32)(r_edi+0x388u));
    /* 005a486a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a486d: jne 0x5a488c */ if (!fZ) goto L_005a488c;
L_005a486f:; BB(0x005a486f);
    /* 005a486f: mov eax, 6 */ r_eax = 0x6u;
    /* 005a4874: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005a487b: mov edx, 5 */ r_edx = 0x5u;
    /* 005a4880: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005a4887: jmp 0x5a49a6 */ goto L_005a49a6;
L_005a488c:; BB(0x005a488c);
    /* 005a488c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a488e: jne 0x5a48ad */ if (!fZ) goto L_005a48ad;
L_005a4890:; BB(0x005a4890);
    /* 005a4890: mov eax, 5 */ r_eax = 0x5u;
    /* 005a4895: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005a489c: mov edx, 2 */ r_edx = 0x2u;
    /* 005a48a1: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005a48a8: jmp 0x5a49a6 */ goto L_005a49a6;
L_005a48ad:; BB(0x005a48ad);
    /* 005a48ad: mov byte ptr [edi + 0x3a0], 0 */ W8((u32)(r_edi+0x3a0u), 0x0u);
    /* 005a48b4: mov eax, 4 */ r_eax = 0x4u;
    /* 005a48b9: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 005a48c0: mov ecx, edi */ r_ecx = r_edi;
    /* 005a48c2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a48c7u); f_007751b0();
    /* 005a48c7: fcomp dword ptr [0x929f64] */ fx_compare(ST(0), R_F32((u32)(0x929f64u))); FPOP();
    /* 005a48cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a48cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a48d0: jae 0x5a48e0 */ if (!fC) goto L_005a48e0;
L_005a48d2:; BB(0x005a48d2);
    /* 005a48d2: mov eax, 3 */ r_eax = 0x3u;
    /* 005a48d7: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a48de: jmp 0x5a48ec */ goto L_005a48ec;
L_005a48e0:; BB(0x005a48e0);
    /* 005a48e0: mov eax, 9 */ r_eax = 0x9u;
    /* 005a48e5: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
L_005a48ec:; BB(0x005a48ec);
    /* 005a48ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005a48ee: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a48f3u); f_00770738();
    /* 005a48f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a48f5: je 0x5a49a6 */ if (fZ) goto L_005a49a6;
L_005a48fb:; BB(0x005a48fb);
    /* 005a48fb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005a48fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a48ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4900: mov ecx, edi */ r_ecx = r_edi;
    /* 005a4902: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x5a4907u); f_00771458();
    /* 005a4907: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a4909: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005a490c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005a4910: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005a4912: fmul qword ptr [0x929ec0] */ ST(0) = ST(0) * R_F64((u32)(0x929ec0u));
    /* 005a4918: fdiv qword ptr [0x929eb8] */ ST(0) = ST(0) / R_F64((u32)(0x929eb8u));
    /* 005a491e: mov edx, dword ptr [edi + 0x370] */ r_edx = R32((u32)(r_edi+0x370u));
    /* 005a4924: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005a4928: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005a492d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a4932: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005a4936: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005a493a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005a493e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005a4942: mov eax, dword ptr [0xa747b0] */ r_eax = R32((u32)(0xa747b0u));
    /* 005a4947: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 005a494a: mov ebx, dword ptr [ebx + 0x18] */ r_ebx = R32((u32)(r_ebx+0x18u));
    /* 005a494d: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005a4951: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4952: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4955: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5a495au); f_007a9018();
    /* 005a495a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a495d: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a495f: jge 0x5a497f */ if ((fS==fO)) goto L_005a497f;
L_005a4961:; BB(0x005a4961);
    /* 005a4961: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4962: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4965: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5a496au); f_007a900c();
    /* 005a496a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a496d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005a496f: jl 0x5a49db */ if ((fS!=fO)) goto L_005a49db;
L_005a4971:; BB(0x005a4971);
    /* 005a4971: mov eax, 3 */ r_eax = 0x3u;
    /* 005a4976: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a497d: jmp 0x5a49a6 */ goto L_005a49a6;
L_005a497f:; BB(0x005a497f);
    /* 005a497f: mov ecx, edi */ r_ecx = r_edi;
    /* 005a4981: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a4986u); f_007751b0();
    /* 005a4986: mov edx, dword ptr [0xa747b0] */ r_edx = R32((u32)(0xa747b0u));
    /* 005a498c: mov ebx, dword ptr [edi + 0x370] */ r_ebx = R32((u32)(r_edi+0x370u));
    /* 005a4992: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 005a4995: fcomp dword ptr [edx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x10u))); FPOP();
    /* 005a4998: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a499a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a499b: jae 0x5a49a6 */ if (!fC) goto L_005a49a6;
L_005a499d:; BB(0x005a499d);
    /* 005a499d: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005a49a0: mov byte ptr [edi + 0x3a0], al */ W8((u32)(r_edi+0x3a0u), (u8)r_eax);
L_005a49a6:; BB(0x005a49a6);
    /* 005a49a6: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005a49a9: or eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a49ae: mov ebx, dword ptr [edi + 0xa4] */ r_ebx = R32((u32)(r_edi+0xa4u));
    /* 005a49b4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005a49b6: mov word ptr [edi + 0x330], si */ W16((u32)(r_edi+0x330u), (u16)r_esi);
    /* 005a49bd: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a49c2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005a49c5: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 005a49c8: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005a49cb: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 005a49ce: mov dword ptr [edi + 0x37c], esi */ W32((u32)(r_edi+0x37cu), r_esi);
    /* 005a49d4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a49d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a49d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a49d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005a49da: ret  */ FN_RET(0x005a485c); r_esp += 4; return;
L_005a49db:; BB(0x005a49db);
    /* 005a49db: mov eax, 9 */ r_eax = 0x9u;
    /* 005a49e0: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005a49e7: jmp 0x5a49a6 */ goto L_005a49a6;
}

void f_005a49ec(void) /* sub_5A49EC */
{
    FN_ENTER(0x005a49ec);
    /* 005a49ec: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005a49f3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a49f6: jne 0x5a4a2f */ if (!fZ) goto L_005a4a2f;
L_005a49f8:; BB(0x005a49f8);
    /* 005a49f8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005a49fb: and eax, 0xf9fff9ff */ {  u32 a = r_eax; u32 b = 0xf9fff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a4a00: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005a4a03: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005a4a09: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005a4a0c: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a4a12: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 005a4a15: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 005a4a1c: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
    /* 005a4a26: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 005a4a2d: jmp 0x5a4a58 */ goto L_005a4a58;
L_005a4a2f:; BB(0x005a4a2f);
    /* 005a4a2f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4a32: je 0x5a4a40 */ if (fZ) goto L_005a4a40;
L_005a4a34:; BB(0x005a4a34);
    /* 005a4a34: mov eax, 8 */ r_eax = 0x8u;
    /* 005a4a39: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
L_005a4a40:; BB(0x005a4a40);
    /* 005a4a40: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005a4a43: mov eax, 6 */ r_eax = 0x6u;
    /* 005a4a48: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005a4a4f: and edx, 0xffdbffff */ {  u32 a = r_edx; u32 b = 0xffdbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a4a55: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
L_005a4a58:; BB(0x005a4a58);
    /* 005a4a58: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 005a4a62: ret  */ FN_RET(0x005a49ec); r_esp += 4; return;
}

void f_005a4a64(void) /* sub_5A4A64 */
{
    FN_ENTER(0x005a4a64);
    /* 005a4a64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4a65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a4a67: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005a4a6e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a4a71: je 0x5a4ac8 */ if (fZ) goto L_005a4ac8;
L_005a4a73:; BB(0x005a4a73);
    /* 005a4a73: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4a78: mov eax, 9 */ r_eax = 0x9u;
    /* 005a4a7d: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 005a4a84: mov edx, 7 */ r_edx = 0x7u;
    /* 005a4a89: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 005a4a90: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 005a4a96: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005a4a99: and eax, 0xffff7ffe */ {  u32 a = r_eax; u32 b = 0xffff7ffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a4a9e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005a4aa1: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 005a4aa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4aa8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a4aadu); f_0050b510();
    /* 005a4aad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a4ab0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a4ab2: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x5a4ab7u); f_00787534();
    /* 005a4ab7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ab8: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5a4abdu); f_008113e4();
    /* 005a4abd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4abe: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
L_005a4ac8:; BB(0x005a4ac8);
    /* 005a4ac8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a4ac9: ret  */ FN_RET(0x005a4a64); r_esp += 4; return;
}

void f_005a4acc(void) /* sub_5A4ACC */
{
    FN_ENTER(0x005a4acc);
    /* 005a4acc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4acd: mov esi, ecx */ r_esi = r_ecx;
    /* 005a4acf: movsx eax, byte ptr [esi + 0x94] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x94u));
    /* 005a4ad6: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 005a4ad9: mov byte ptr [esi + 0x94], dl */ W8((u32)(r_esi+0x94u), (u8)r_edx);
    /* 005a4adf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a4ae1: jle 0x5a4b36 */ if ((fZ||fS!=fO)) goto L_005a4b36;
L_005a4ae3:; BB(0x005a4ae3);
    /* 005a4ae3: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 005a4ae6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4ae9: je 0x5a4b0c */ if (fZ) goto L_005a4b0c;
L_005a4aeb:; BB(0x005a4aeb);
    /* 005a4aeb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4aee: jne 0x5a4afc */ if (!fZ) goto L_005a4afc;
L_005a4af0:; BB(0x005a4af0);
    /* 005a4af0: mov dword ptr [esi + 0x98], 0x3f000000 */ W32((u32)(r_esi+0x98u), 0x3f000000u);
    /* 005a4afa: jmp 0x5a4b16 */ goto L_005a4b16;
L_005a4afc:; BB(0x005a4afc);
    /* 005a4afc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4afe: jne 0x5a4b16 */ if (!fZ) goto L_005a4b16;
L_005a4b00:; BB(0x005a4b00);
    /* 005a4b00: mov dword ptr [esi + 0x98], 0x3e800000 */ W32((u32)(r_esi+0x98u), 0x3e800000u);
    /* 005a4b0a: jmp 0x5a4b16 */ goto L_005a4b16;
L_005a4b0c:; BB(0x005a4b0c);
    /* 005a4b0c: mov dword ptr [esi + 0x98], 0x3f400000 */ W32((u32)(r_esi+0x98u), 0x3f400000u);
L_005a4b16:; BB(0x005a4b16);
    /* 005a4b16: push dword ptr [esi + 0x90] */ { u32 v = R32((u32)(r_esi+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4b1c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a4b1e: call 0x5a3040 */ r_esp -= 4; W32(r_esp, 0x5a4b23u); f_005a3040();
    /* 005a4b23: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b28: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a4b2b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b2c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a4b31u); f_0050b510();
    /* 005a4b31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a4b34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a4b35: ret  */ FN_RET(0x005a4acc); r_esp += 4; return;
L_005a4b36:; BB(0x005a4b36);
    /* 005a4b36: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005a4b3a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a4b3f: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005a4b43: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a4b44: ret  */ FN_RET(0x005a4acc); r_esp += 4; return;
}

void f_005a4b48(void) /* sub_5A4B48 */
{
    FN_ENTER(0x005a4b48);
    /* 005a4b48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b49: mov esi, ecx */ r_esi = r_ecx;
    /* 005a4b4b: lea edx, [esi + 0x98] */ r_edx = (u32)(r_esi+0x98u);
    /* 005a4b51: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005a4b56: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005a4b5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b5c: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a4b5f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005a4b64: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5a4b69u); f_0082d710();
    /* 005a4b69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4b6a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5a4b6fu); f_0082d7b0();
    /* 005a4b6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b71: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a4b78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4b7a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5a4b7fu); f_00830b74();
    /* 005a4b7f: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 005a4b82: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5a4b87u); f_0082d838();
    /* 005a4b87: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 005a4b8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a4b8c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5a4b91u); f_00830c04();
    /* 005a4b91: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 005a4b94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a4b96: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5a4b9bu); f_0082e9e4();
    /* 005a4b9b: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005a4b9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a4ba0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a4ba5u); f_0082d8bc();
    /* 005a4ba5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4baa: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4baf: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4bb4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a4bb6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5a4bbbu); f_0082fa0c();
    /* 005a4bbb: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005a4bbe: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5a4bc3u); f_00829cc8();
    /* 005a4bc3: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4bc6: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5a4bcbu); f_0082e1e8();
    /* 005a4bcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4bcc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a4bd1u); f_0082da80();
    /* 005a4bd1: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4bd6: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5a4bdbu); f_0082d710();
    /* 005a4bdb: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005a4be0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005a4be5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4be6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a4be7: ret  */ FN_RET(0x005a4b48); r_esp += 4; return;
}

void f_005a4c3c(void) /* sub_5A4C3C */
{
    FN_ENTER(0x005a4c3c);
    /* 005a4c3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4c3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c41: push 0x8d893a */ { u32 v = 0x8d893au; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a4c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a4c54: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a4c57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a4c5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005a4c5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005a4c60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005a4c63: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c68: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005a4c6f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4c74u); f_008581c5();
    /* 005a4c74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4c75: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 005a4c78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4c7a: je 0x5a4f1f */ if (fZ) goto L_005a4f1f;
L_005a4c80:; BB(0x005a4c80);
    /* 005a4c80: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 005a4c87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a4c8e: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a4c91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a4c93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c96: push 0x9c0414 */ { u32 v = 0x9c0414u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4c9d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5a4ca2u); f_005b7a84();
    /* 005a4ca2: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 005a4ca5: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_005a4cac:; BB(0x005a4cac);
    /* 005a4cac: mov dword ptr [0xa747ac], eax */ W32((u32)(0xa747acu), r_eax);
    /* 005a4cb1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a4cb8: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005a4cbf: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4cc1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4cc6u); f_008581c5();
    /* 005a4cc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4cc7: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a4cca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4ccc: je 0x5a4f18 */ if (fZ) goto L_005a4f18;
L_005a4cd2:; BB(0x005a4cd2);
    /* 005a4cd2: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005a4cd9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a4ce0: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a4ce3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ce5: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4cea: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4cef: push dword ptr [0xa74798] */ { u32 v = R32((u32)(0xa74798u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4cf5: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5a4cfau); f_005795a0();
    /* 005a4cfa: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005a4cfd: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005a4d04:; BB(0x005a4d04);
    /* 005a4d04: mov dword ptr [0xa747c0], eax */ W32((u32)(0xa747c0u), r_eax);
    /* 005a4d09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a4d10: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005a4d17: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d19: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4d1eu); f_008581c5();
    /* 005a4d1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a4d1f: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a4d22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4d24: je 0x5a4f11 */ if (fZ) goto L_005a4f11;
L_005a4d2a:; BB(0x005a4d2a);
    /* 005a4d2a: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005a4d31: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a4d38: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 005a4d3b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d3d: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d42: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d47: push dword ptr [0xa74798] */ { u32 v = R32((u32)(0xa74798u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4d4d: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5a4d52u); f_005795a0();
    /* 005a4d52: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 005a4d55: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005a4d5c:; BB(0x005a4d5c);
    /* 005a4d5c: mov dword ptr [0xa747c4], eax */ W32((u32)(0xa747c4u), r_eax);
    /* 005a4d61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a4d68: mov eax, dword ptr [0xa747ac] */ r_eax = R32((u32)(0xa747acu));
    /* 005a4d6d: mov edi, dword ptr [0x9c0194] */ r_edi = R32((u32)(0x9c0194u));
    /* 005a4d73: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005a4d79: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005a4d7f: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 005a4d82: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005a4d89: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005a4d8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d8d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005a4d94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d95: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005a4d9c: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4d9e: mov dword ptr [ebp - 0x40], 0xc1a00000 */ W32((u32)(r_ebp+0xffffffc0u), 0xc1a00000u);
    /* 005a4da5: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005a4dac: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005a4db3: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4db7: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4dba: mov ecx, dword ptr [0xa747c0] */ r_ecx = R32((u32)(0xa747c0u));
    /* 005a4dc0: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x5a4dc5u); f_00579be8();
    /* 005a4dc5: mov eax, dword ptr [0xa747ac] */ r_eax = R32((u32)(0xa747acu));
    /* 005a4dca: mov edi, dword ptr [0x9c01f4] */ r_edi = R32((u32)(0x9c01f4u));
    /* 005a4dd0: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 005a4dd3: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005a4dd6: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005a4ddc: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005a4de2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4de3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4de4: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4de6: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4dea: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4ded: mov ecx, dword ptr [0xa747c4] */ r_ecx = R32((u32)(0xa747c4u));
    /* 005a4df3: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x5a4df8u); f_00579be8();
    /* 005a4df8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4dfa: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4dffu); f_008581c5();
    /* 005a4dff: mov dword ptr [0xa747bc], eax */ W32((u32)(0xa747bcu), r_eax);
    /* 005a4e04: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e06: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4e0bu); f_008581c5();
    /* 005a4e0b: mov dword ptr [0xa747b8], eax */ W32((u32)(0xa747b8u), r_eax);
    /* 005a4e10: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e12: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4e17u); f_008581c5();
    /* 005a4e17: mov dword ptr [0xa747b4], eax */ W32((u32)(0xa747b4u), r_eax);
    /* 005a4e1c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e1e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a4e23u); f_008581c5();
    /* 005a4e23: mov dword ptr [0xa747b0], eax */ W32((u32)(0xa747b0u), r_eax);
    /* 005a4e28: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e2a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a4e2fu); f_0077a684();
    /* 005a4e2f: mov edx, dword ptr [0xa747bc] */ r_edx = R32((u32)(0xa747bcu));
    /* 005a4e35: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e37: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e39: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a4e3eu); f_0077a698();
    /* 005a4e3e: mov edx, dword ptr [0xa747b8] */ r_edx = R32((u32)(0xa747b8u));
    /* 005a4e44: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e46: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005a4e49: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a4e4eu); f_0077a698();
    /* 005a4e4e: mov edx, dword ptr [0xa747b8] */ r_edx = R32((u32)(0xa747b8u));
    /* 005a4e54: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e56: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e58: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a4e5du); f_0077a698();
    /* 005a4e5d: mov edx, dword ptr [0xa747b8] */ r_edx = R32((u32)(0xa747b8u));
    /* 005a4e63: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e65: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005a4e68: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a4e6du); f_0077a6b4();
    /* 005a4e6d: mov edx, dword ptr [0xa747b4] */ r_edx = R32((u32)(0xa747b4u));
    /* 005a4e73: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e75: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e77: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a4e7cu); f_0077a6cc();
    /* 005a4e7c: mov edx, dword ptr [0xa747b0] */ r_edx = R32((u32)(0xa747b0u));
    /* 005a4e82: mov esi, dword ptr [0x929eac] */ r_esi = R32((u32)(0x929eacu));
    /* 005a4e88: movzx edi, word ptr [0x929eb0] */ r_edi = (u32)R16((u32)(0x929eb0u));
    /* 005a4e8f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e91: mov edx, dword ptr [0xa747ac] */ r_edx = R32((u32)(0xa747acu));
    /* 005a4e97: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005a4e9a: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005a4e9e: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005a4ea3: mov ecx, 0x33 */ r_ecx = 0x33u;
    /* 005a4ea8: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005a4eac: movzx eax, word ptr [0x929eb2] */ r_eax = (u32)R16((u32)(0x929eb2u));
    /* 005a4eb3: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005a4eb7: mov ebx, 0x34 */ r_ebx = 0x34u;
    /* 005a4ebc: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005a4ec0: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005a4ec4: movzx eax, word ptr [0x929eb4] */ r_eax = (u32)R16((u32)(0x929eb4u));
    /* 005a4ecb: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005a4ecf: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005a4ed5: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005a4edb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a4ede: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005a4ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ee2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ee4: push dword ptr [0x9c046c] */ { u32 v = R32((u32)(0x9c046cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4eea: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4eed: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4ef0: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ef2: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5a4ef7u); f_00608470();
    /* 005a4ef7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a4efa: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a4efd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a4f00: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a4f03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4f06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a4f0d: mov esp, ebp */ r_esp = r_ebp;
    /* 005a4f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4f10: ret  */ FN_RET(0x005a4c3c); r_esp += 4; return;
L_005a4f11:; BB(0x005a4f11);
    /* 005a4f11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a4f13: jmp 0x5a4d5c */ goto L_005a4d5c;
L_005a4f18:; BB(0x005a4f18);
    /* 005a4f18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a4f1a: jmp 0x5a4d04 */ goto L_005a4d04;
L_005a4f1f:; BB(0x005a4f1f);
    /* 005a4f1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a4f21: jmp 0x5a4cac */ goto L_005a4cac;
}

void f_005a4e45(void)
{
    FN_ENTER(0x005a4e45);
    /* 005a4e45: or ecx, dword ptr [ecx + 0x4ae80442] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ecx+0x4ae80442u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 005a4e4b: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 005a4e4c: sbb eax, 0xb8158b00 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xb8158b00u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 005a4e51: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005a4e52: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 005a4e53: add byte ptr [edx + 0xc], ch */ { u32 ad = (u32)(r_edx+0xcu);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a4e56: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e58: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a4e5du); f_0077a698();
    /* 005a4e5d: mov edx, dword ptr [0xa747b8] */ r_edx = R32((u32)(0xa747b8u));
    /* 005a4e63: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e65: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005a4e68: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a4e6du); f_0077a6b4();
    /* 005a4e6d: mov edx, dword ptr [0xa747b4] */ r_edx = R32((u32)(0xa747b4u));
    /* 005a4e73: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4e75: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e77: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a4e7cu); f_0077a6cc();
    /* 005a4e7c: mov edx, dword ptr [0xa747b0] */ r_edx = R32((u32)(0xa747b0u));
    /* 005a4e82: mov esi, dword ptr [0x929eac] */ r_esi = R32((u32)(0x929eacu));
    /* 005a4e88: movzx edi, word ptr [0x929eb0] */ r_edi = (u32)R16((u32)(0x929eb0u));
    /* 005a4e8f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005a4e91: mov edx, dword ptr [0xa747ac] */ r_edx = R32((u32)(0xa747acu));
    /* 005a4e97: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005a4e9a: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005a4e9e: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005a4ea3: mov ecx, 0x33 */ r_ecx = 0x33u;
    /* 005a4ea8: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005a4eac: movzx eax, word ptr [0x929eb2] */ r_eax = (u32)R16((u32)(0x929eb2u));
    /* 005a4eb3: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005a4eb7: mov ebx, 0x34 */ r_ebx = 0x34u;
    /* 005a4ebc: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005a4ec0: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005a4ec4: movzx eax, word ptr [0x929eb4] */ r_eax = (u32)R16((u32)(0x929eb4u));
    /* 005a4ecb: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005a4ecf: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005a4ed5: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 005a4edb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005a4ede: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005a4ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ee2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ee4: push dword ptr [0x9c046c] */ { u32 v = R32((u32)(0x9c046cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4eea: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4eed: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a4ef0: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4ef2: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5a4ef7u); f_00608470();
    /* 005a4ef7: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a4efa: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a4efd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a4f00: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a4f03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4f06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a4f0d: mov esp, ebp */ r_esp = r_ebp;
    /* 005a4f0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4f10: ret  */ FN_RET(0x005a4e45); r_esp += 4; return;
}

void f_005a4f28(void) /* sub_5A4F28 */
{
    FN_ENTER(0x005a4f28);
    /* 005a4f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a4f29: mov ebp, esp */ r_ebp = r_esp;
    /* 005a4f2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4f2d: push 0x8d8982 */ { u32 v = 0x8d8982u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4f32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a4f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a4f39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a4f40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a4f43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a4f46: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a4f49: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a4f4c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a4f4f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a4f52: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a4f55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a4f5c: mov eax, ecx */ r_eax = r_ecx;
    /* 005a4f5e: mov edx, dword ptr [eax + 0x3b0] */ r_edx = R32((u32)(r_eax+0x3b0u));
    /* 005a4f64: mov dword ptr [eax], 0xb0a680 */ W32((u32)(r_eax), 0xb0a680u);
    /* 005a4f6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4f6c: je 0x5a4f87 */ if (fZ) goto L_005a4f87;
L_005a4f6e:; BB(0x005a4f6e);
    /* 005a4f6e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a4f72: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a4f77: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a4f7b: mov edx, ecx */ r_edx = r_ecx;
    /* 005a4f7d: mov dword ptr [edx + 0x3b0], 0 */ W32((u32)(r_edx+0x3b0u), 0x0u);
L_005a4f87:; BB(0x005a4f87);
    /* 005a4f87: mov eax, ecx */ r_eax = r_ecx;
    /* 005a4f89: mov edx, dword ptr [eax + 0x3b4] */ r_edx = R32((u32)(r_eax+0x3b4u));
    /* 005a4f8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a4f91: je 0x5a4fac */ if (fZ) goto L_005a4fac;
L_005a4f93:; BB(0x005a4f93);
    /* 005a4f93: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a4f97: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a4f9c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a4fa0: mov edx, ecx */ r_edx = r_ecx;
    /* 005a4fa2: mov dword ptr [edx + 0x3b4], 0 */ W32((u32)(r_edx+0x3b4u), 0x0u);
L_005a4fac:; BB(0x005a4fac);
    /* 005a4fac: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x5a4fb1u); f_00786f64();
    /* 005a4fb1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a4fb4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5a4fb9u); f_007b9c8c();
    /* 005a4fb9: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a4fc0: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4fc5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a4fc8: lea edx, [eax + 0x3b8] */ r_edx = (u32)(r_eax+0x3b8u);
    /* 005a4fce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a4fd0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a4fd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a4fd3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5a4fd8u); f_008586d6();
    /* 005a4fd8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a4fdf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a4fe2: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x5a4fe7u); f_0052a684();
    /* 005a4fe7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a4fea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a4fec: jne 0x5a4ffe */ if (!fZ) goto L_005a4ffe;
L_005a4fee:; BB(0x005a4fee);
    /* 005a4fee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a4ff1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a4ff8: mov esp, ebp */ r_esp = r_ebp;
    /* 005a4ffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a4ffb: ret 4 */ FN_RET(0x005a4f28); r_esp += 8; return;
L_005a4ffe:; BB(0x005a4ffe);
    /* 005a4ffe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a5001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a5002: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5a5007u); f_005c2f74();
    /* 005a5007: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a5008: jmp 0x5a4fee */ goto L_005a4fee;
}

