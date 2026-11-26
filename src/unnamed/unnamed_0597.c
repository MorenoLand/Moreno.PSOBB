#include "protos.h"

void f_00597094(void) /* sub_597094 */
{
    FN_ENTER(0x00597094);
    /* 00597094: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597095: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597096: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597099: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0059709b: fld dword ptr [0x929524] */ FPUSH(R_F32((u32)(0x929524u)));
    /* 005970a1: fld dword ptr [0x929520] */ FPUSH(R_F32((u32)(0x929520u)));
    /* 005970a7: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005970ad: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005970b2: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005970b9: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005970c1: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005970c9: je 0x5970e7 */ if (fZ) goto L_005970e7;
L_005970cb:; BB(0x005970cb);
    /* 005970cb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005970cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005970cf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005970d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005970d3: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 005970d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005970d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005970d9: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x5970deu); f_007713d4();
    /* 005970de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005970e0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005970e3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_005970e7:; BB(0x005970e7);
    /* 005970e7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005970e9: fmul qword ptr [0x9293a0] */ ST(0) = ST(0) * R_F64((u32)(0x9293a0u));
    /* 005970ef: fdiv qword ptr [0x929398] */ ST(0) = ST(0) / R_F64((u32)(0x929398u));
    /* 005970f5: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005970f9: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005970fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597103: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00597107: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0059710b: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0059710f: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00597113: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00597117: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0059711c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059711d: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00597120: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x597125u); f_007a8c74();
    /* 00597125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597126: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597127: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0059712a: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x59712fu); f_007a9018();
    /* 0059712f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597132: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597137: jge 0x597143 */ if ((fS==fO)) goto L_00597143;
L_00597139:; BB(0x00597139);
    /* 00597139: mov dword ptr [ebp + 0x398], 0 */ W32((u32)(r_ebp+0x398u), 0x0u);
L_00597143:; BB(0x00597143);
    /* 00597143: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00597146: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00597149: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0059714c: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 0059714f: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00597152: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 00597155: mov dword ptr [ebp + 0x4c], esi */ W32((u32)(r_ebp+0x4cu), r_esi);
    /* 00597158: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x59715du); f_0083173c();
    /* 0059715d: fcomp dword ptr [0x92951c] */ fx_compare(ST(0), R_F32((u32)(0x92951cu))); FPOP();
    /* 00597163: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597165: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597166: ja 0x59717e */ if ((!fC&&!fZ)) goto L_0059717e;
L_00597168:; BB(0x00597168);
    /* 00597168: fld dword ptr [0x929524] */ FPUSH(R_F32((u32)(0x929524u)));
    /* 0059716e: fld dword ptr [0x929520] */ FPUSH(R_F32((u32)(0x929520u)));
    /* 00597174: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0059717c: jmp 0x59718f */ goto L_0059718f;
L_0059717e:; BB(0x0059717e);
    /* 0059717e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00597181: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x597186u); f_0082df08();
    /* 00597186: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00597188: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0059718b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_0059718f:; BB(0x0059718f);
    /* 0059718f: fld dword ptr [0x9292f4] */ FPUSH(R_F32((u32)(0x9292f4u)));
    /* 00597195: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00597197: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00597199: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059719b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0059719e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005971a2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005971a4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005971a8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005971ac: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005971af: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005971b2: mov ecx, esi */ r_ecx = r_esi;
    /* 005971b4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5971b9u); f_0082ebac();
    /* 005971b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005971bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005971bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005971be: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5971c3u); f_007b4c58();
    /* 005971c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005971c5: je 0x5971d8 */ if (fZ) goto L_005971d8;
L_005971c7:; BB(0x005971c7);
    /* 005971c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005971c8: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 005971cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005971cc: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5971d1u); f_00780d3c();
    /* 005971d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005971d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005971d6: je 0x5971ea */ if (fZ) goto L_005971ea;
L_005971d8:; BB(0x005971d8);
    /* 005971d8: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 005971db: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 005971de: mov esi, dword ptr [ebp + 0x4c] */ r_esi = R32((u32)(r_ebp+0x4cu));
    /* 005971e1: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 005971e4: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 005971e7: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
L_005971ea:; BB(0x005971ea);
    /* 005971ea: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005971f0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005971f3: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 005971f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005971fb: jg 0x59726b */ if ((!fZ&&fS==fO)) goto L_0059726b;
L_005971fd:; BB(0x005971fd);
    /* 005971fd: movzx eax, byte ptr [0xa74550] */ r_eax = (u32)R8((u32)(0xa74550u));
    /* 00597204: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00597206: jne 0x59721c */ if (!fZ) goto L_0059721c;
L_00597208:; BB(0x00597208);
    /* 00597208: mov dword ptr [0xa74554], 0x42480000 */ W32((u32)(0xa74554u), 0x42480000u);
    /* 00597212: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597217: mov byte ptr [0xa74550], al */ W8((u32)(0xa74550u), (u8)r_eax);
L_0059721c:; BB(0x0059721c);
    /* 0059721c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0059721f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x597224u); f_0083173c();
    /* 00597224: fcomp dword ptr [0xa74554] */ fx_compare(ST(0), R_F32((u32)(0xa74554u))); FPOP();
    /* 0059722a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059722c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059722d: ja 0x597241 */ if ((!fC&&!fZ)) goto L_00597241;
L_0059722f:; BB(0x0059722f);
    /* 0059722f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597231: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597236u); f_007751b0();
    /* 00597236: fcomp dword ptr [0x9292f0] */ fx_compare(ST(0), R_F32((u32)(0x9292f0u))); FPOP();
    /* 0059723c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059723e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059723f: jae 0x597259 */ if (!fC) goto L_00597259;
L_00597241:; BB(0x00597241);
    /* 00597241: mov dword ptr [ebp + 0x38c], 9 */ W32((u32)(r_ebp+0x38cu), 0x9u);
    /* 0059724b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059724d: call dword ptr [0x9bfc48] */ { u32 t = R32((u32)(0x9bfc48u)); r_esp -= 4; W32(r_esp, 0x597253u); call_ind(t); }
    /* 00597253: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597256: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597257: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597258: ret  */ FN_RET(0x00597094); r_esp += 4; return;
L_00597259:; BB(0x00597259);
    /* 00597259: mov dword ptr [ebp + 0x38c], 0xa */ W32((u32)(r_ebp+0x38cu), 0xau);
    /* 00597263: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597265: call dword ptr [0x9bfc50] */ { u32 t = R32((u32)(0x9bfc50u)); r_esp -= 4; W32(r_esp, 0x59726bu); call_ind(t); }
L_0059726b:; BB(0x0059726b);
    /* 0059726b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059726e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059726f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597270: ret  */ FN_RET(0x00597094); r_esp += 4; return;
}

void f_00597274(void) /* sub_597274 */
{
    FN_ENTER(0x00597274);
    /* 00597274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597275: mov esi, ecx */ r_esi = r_ecx;
    /* 00597277: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 0059727d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597280: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 00597286: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00597288: jle 0x5972a0 */ if ((fZ||fS!=fO)) goto L_005972a0;
L_0059728a:; BB(0x0059728a);
    /* 0059728a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0059728f: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00597295: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597296: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59729bu); f_0050b510();
    /* 0059729b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0059729e: jmp 0x5972cf */ goto L_005972cf;
L_005972a0:; BB(0x005972a0);
    /* 005972a0: jne 0x5972cf */ if (!fZ) goto L_005972cf;
L_005972a2:; BB(0x005972a2);
    /* 005972a2: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005972a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005972a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005972a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005972a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005972aa: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005972af: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5972b4u); f_00814298();
    /* 005972b4: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 005972b9: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005972bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005972c0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5972c5u); f_0050b510();
    /* 005972c5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005972c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005972c7: call 0x597314 */ r_esp -= 4; W32(r_esp, 0x5972ccu); f_00597314();
    /* 005972cc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005972cf:; BB(0x005972cf);
    /* 005972cf: mov eax, dword ptr [esi + 0x398] */ r_eax = R32((u32)(r_esi+0x398u));
    /* 005972d5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005972d8: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 005972de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005972e0: jle 0x5972e4 */ if ((fZ||fS!=fO)) goto L_005972e4;
L_005972e2:; BB(0x005972e2);
    /* 005972e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005972e3: ret  */ FN_RET(0x00597274); r_esp += 4; return;
L_005972e4:; BB(0x005972e4);
    /* 005972e4: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005972e7: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005972e9: je 0x5972ff */ if (fZ) goto L_005972ff;
L_005972eb:; BB(0x005972eb);
    /* 005972eb: mov dword ptr [esi + 0x38c], 7 */ W32((u32)(r_esi+0x38cu), 0x7u);
    /* 005972f5: mov ecx, esi */ r_ecx = r_esi;
    /* 005972f7: call dword ptr [0x9bfc38] */ { u32 t = R32((u32)(0x9bfc38u)); r_esp -= 4; W32(r_esp, 0x5972fdu); call_ind(t); }
    /* 005972fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005972fe: ret  */ FN_RET(0x00597274); r_esp += 4; return;
L_005972ff:; BB(0x005972ff);
    /* 005972ff: mov dword ptr [esi + 0x38c], 5 */ W32((u32)(r_esi+0x38cu), 0x5u);
    /* 00597309: mov ecx, esi */ r_ecx = r_esi;
    /* 0059730b: call dword ptr [0x9bfc28] */ { u32 t = R32((u32)(0x9bfc28u)); r_esp -= 4; W32(r_esp, 0x597311u); call_ind(t); }
    /* 00597311: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597312: ret  */ FN_RET(0x00597274); r_esp += 4; return;
}

void f_00597314(void) /* sub_597314 */
{
    FN_ENTER(0x00597314);
    /* 00597314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597315: mov ebp, esp */ r_ebp = r_esp;
    /* 00597317: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597319: push 0x8d8450 */ { u32 v = 0x8d8450u; r_esp -= 4; W32(r_esp, v); }
    /* 0059731e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00597324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597325: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0059732c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059732f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00597332: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00597335: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00597338: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0059733b: push 0x3a0 */ { u32 v = 0x3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597340: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00597347: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x59734cu); f_005caba4();
    /* 0059734c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059734d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00597350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597352: je 0x597388 */ if (fZ) goto L_00597388;
L_00597354:; BB(0x00597354);
    /* 00597354: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0059735b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00597362: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00597365: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00597368: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0059736b: call 0x59738c */ r_esp -= 4; W32(r_esp, 0x597370u); f_0059738c();
    /* 00597370: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00597373: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0059737a:; BB(0x0059737a);
    /* 0059737a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059737d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00597384: mov esp, ebp */ r_esp = r_ebp;
    /* 00597386: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597387: ret  */ FN_RET(0x00597314); r_esp += 4; return;
L_00597388:; BB(0x00597388);
    /* 00597388: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0059738a: jmp 0x59737a */ goto L_0059737a;
}

void f_0059738c(void) /* sub_59738C */
{
    FN_ENTER(0x0059738c);
    /* 0059738c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0059738d: mov ebp, esp */ r_ebp = r_esp;
    /* 0059738f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00597391: push 0x8d846c */ { u32 v = 0x8d846cu; r_esp -= 4; W32(r_esp, v); }
    /* 00597396: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0059739c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059739d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005973a4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005973a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005973aa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005973ad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005973b0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005973b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005973b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005973b9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005973bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005973bf: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x5973c4u); f_007865e8();
    /* 005973c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005973cb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005973ce: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005973d1: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005973d4: mov dword ptr [eax + 0x394], ebx */ W32((u32)(r_eax+0x394u), r_ebx);
    /* 005973da: mov dword ptr [eax], 0xb09640 */ W32((u32)(r_eax), 0xb09640u);
    /* 005973e0: mov edx, dword ptr [0x9bfd60] */ r_edx = R32((u32)(0x9bfd60u));
    /* 005973e6: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005973e9: mov ebx, dword ptr [ecx + 0x60] */ r_ebx = R32((u32)(r_ecx+0x60u));
    /* 005973ec: mov dword ptr [eax + 0x60], ebx */ W32((u32)(r_eax+0x60u), r_ebx);
    /* 005973ef: mov esi, dword ptr [ecx + 0x38] */ r_esi = R32((u32)(r_ecx+0x38u));
    /* 005973f2: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 005973f5: mov edi, dword ptr [ecx + 0x3c] */ r_edi = R32((u32)(r_ecx+0x3cu));
    /* 005973f8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 005973fb: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005973fe: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00597401: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00597403: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x597408u); f_0082dcbc();
    /* 00597408: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0059740b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0059740e: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00597411: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x597416u); f_0082ddd8();
    /* 00597416: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00597419: fld dword ptr [0x9292fc] */ FPUSH(R_F32((u32)(0x9292fcu)));
    /* 0059741f: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00597422: fld dword ptr [0x929510] */ FPUSH(R_F32((u32)(0x929510u)));
    /* 00597428: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 0059742b: fadd dword ptr [0x9292f8] */ ST(0) = ST(0) + R_F32((u32)(0x9292f8u));
    /* 00597431: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00597434: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00597437: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00597439: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0059743b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059743d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0059743f: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00597442: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00597444: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00597446: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 00597449: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059744b: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0059744d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0059744f: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00597452: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00597454: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00597457: fstp dword ptr [eax + 0x37c] */ W_F32((u32)(r_eax+0x37cu), ST(0)); FPOP();
    /* 0059745d: fstp dword ptr [eax + 0x384] */ W_F32((u32)(r_eax+0x384u), ST(0)); FPOP();
    /* 00597463: mov dword ptr [eax + 0x380], 0 */ W32((u32)(r_eax+0x380u), 0x0u);
    /* 0059746d: mov dword ptr [eax + 0x38c], 0 */ W32((u32)(r_eax+0x38cu), 0x0u);
    /* 00597477: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0059747c: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0059747f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597480: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x597485u); f_00509590();
    /* 00597485: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00597488: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 0059748e: mov eax, dword ptr [edx + 0x394] */ r_eax = R32((u32)(r_edx+0x394u));
    /* 00597494: mov ecx, dword ptr [eax + 0x3fc] */ r_ecx = R32((u32)(r_eax+0x3fcu));
    /* 0059749a: push dword ptr [ecx*4 + 0x9bfbd8] */ { u32 v = R32((u32)(r_ecx*4+0x9bfbd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005974a1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5974a6u); f_0077a6cc();
    /* 005974a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005974a9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005974ac: fld dword ptr [0x929514] */ FPUSH(R_F32((u32)(0x929514u)));
    /* 005974b2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005974b5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005974b8: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 005974ba: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005974bd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005974bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005974c1: mov dword ptr [edx + 0x39c], 0 */ W32((u32)(r_edx+0x39cu), 0x0u);
    /* 005974cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005974cc: mov eax, edx */ r_eax = r_edx;
    /* 005974ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005974d0: ja 0x5974d4 */ if ((!fC&&!fZ)) goto L_005974d4;
L_005974d2:; BB(0x005974d2);
    /* 005974d2: fst st(1) */ ST(1) = ST(0);
L_005974d4:; BB(0x005974d4);
    /* 005974d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005974d6: fstp dword ptr [edx + 0x398] */ W_F32((u32)(r_edx+0x398u), ST(0)); FPOP();
    /* 005974dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005974df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005974e6: mov esp, ebp */ r_esp = r_ebp;
    /* 005974e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005974e9: ret 8 */ FN_RET(0x0059738c); r_esp += 12; return;
}

void f_005974ec(void) /* sub_5974EC */
{
    FN_ENTER(0x005974ec);
    /* 005974ec: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 005974f2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005974f5: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 005974fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005974fd: jle 0x597500 */ if ((fZ||fS!=fO)) goto L_00597500;
L_005974ff:; BB(0x005974ff);
    /* 005974ff: ret  */ FN_RET(0x005974ec); r_esp += 4; return;
L_00597500:; BB(0x00597500);
    /* 00597500: mov dword ptr [ecx + 0x38c], 5 */ W32((u32)(r_ecx+0x38cu), 0x5u);
    /* 0059750a: call dword ptr [0x9bfc28] */ { u32 t = R32((u32)(0x9bfc28u)); r_esp -= 4; W32(r_esp, 0x597510u); call_ind(t); }
    /* 00597510: ret  */ FN_RET(0x005974ec); r_esp += 4; return;
}

void f_00597514(void) /* sub_597514 */
{
    FN_ENTER(0x00597514);
    /* 00597514: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597515: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00597517: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 0059751d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597520: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 00597526: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00597528: jne 0x59753e */ if (!fZ) goto L_0059753e;
L_0059752a:; BB(0x0059752a);
    /* 0059752a: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059752f: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 00597535: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597536: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x59753bu); f_0050b510();
    /* 0059753b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0059753e:; BB(0x0059753e);
    /* 0059753e: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00597544: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00597546: je 0x597575 */ if (fZ) goto L_00597575;
L_00597548:; BB(0x00597548);
    /* 00597548: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0059754b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0059754d: je 0x597563 */ if (fZ) goto L_00597563;
L_0059754f:; BB(0x0059754f);
    /* 0059754f: mov dword ptr [ebp + 0x38c], 7 */ W32((u32)(r_ebp+0x38cu), 0x7u);
    /* 00597559: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059755b: call dword ptr [0x9bfc38] */ { u32 t = R32((u32)(0x9bfc38u)); r_esp -= 4; W32(r_esp, 0x597561u); call_ind(t); }
    /* 00597561: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597562: ret  */ FN_RET(0x00597514); r_esp += 4; return;
L_00597563:; BB(0x00597563);
    /* 00597563: mov dword ptr [ebp + 0x38c], 6 */ W32((u32)(r_ebp+0x38cu), 0x6u);
    /* 0059756d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059756f: call dword ptr [0x9bfc30] */ { u32 t = R32((u32)(0x9bfc30u)); r_esp -= 4; W32(r_esp, 0x597575u); call_ind(t); }
L_00597575:; BB(0x00597575);
    /* 00597575: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597576: ret  */ FN_RET(0x00597514); r_esp += 4; return;
}

void f_00597578(void) /* sub_597578 */
{
    FN_ENTER(0x00597578);
    /* 00597578: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0059757e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00597580: je 0x597592 */ if (fZ) goto L_00597592;
L_00597582:; BB(0x00597582);
    /* 00597582: mov dword ptr [ecx + 0x38c], 5 */ W32((u32)(r_ecx+0x38cu), 0x5u);
    /* 0059758c: call dword ptr [0x9bfc28] */ { u32 t = R32((u32)(0x9bfc28u)); r_esp -= 4; W32(r_esp, 0x597592u); call_ind(t); }
L_00597592:; BB(0x00597592);
    /* 00597592: ret  */ FN_RET(0x00597578); r_esp += 4; return;
}

void f_00597594(void) /* sub_597594 */
{
    FN_ENTER(0x00597594);
    /* 00597594: fld dword ptr [0x929300] */ FPUSH(R_F32((u32)(0x929300u)));
    /* 0059759a: fadd dword ptr [ecx + 0x3a8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3a8u));
    /* 005975a0: fcom dword ptr [0x92950c] */ fx_compare(ST(0), R_F32((u32)(0x92950cu))); 
    /* 005975a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005975a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005975a9: jae 0x5975b7 */ if (!fC) goto L_005975b7;
L_005975ab:; BB(0x005975ab);
    /* 005975ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005975ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005975af: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 005975b5: jmp 0x5975bd */ goto L_005975bd;
L_005975b7:; BB(0x005975b7);
    /* 005975b7: fstp dword ptr [ecx + 0x3a8] */ W_F32((u32)(r_ecx+0x3a8u), ST(0)); FPOP();
L_005975bd:; BB(0x005975bd);
    /* 005975bd: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 005975c3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005975c6: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 005975cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005975ce: jle 0x5975d1 */ if ((fZ||fS!=fO)) goto L_005975d1;
L_005975d0:; BB(0x005975d0);
    /* 005975d0: ret  */ FN_RET(0x00597594); r_esp += 4; return;
L_005975d1:; BB(0x005975d1);
    /* 005975d1: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005975d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005975da: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005975de: ret  */ FN_RET(0x00597594); r_esp += 4; return;
}

void f_005975e0(void) /* sub_5975E0 */
{
    FN_ENTER(0x005975e0);
    /* 005975e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005975e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005975e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005975e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005975e4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005975e7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005975e9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005975eb: mov eax, 4 */ r_eax = 0x4u;
    /* 005975f0: fld dword ptr [0x929308] */ FPUSH(R_F32((u32)(0x929308u)));
    /* 005975f6: fadd dword ptr [ebp + 0x3e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3e8u));
    /* 005975fc: fstp dword ptr [ebp + 0x3e8] */ W_F32((u32)(r_ebp+0x3e8u), ST(0)); FPOP();
    /* 00597602: lea edx, [ebp + 0x3e4] */ r_edx = (u32)(r_ebp+0x3e4u);
    /* 00597608: mov ebx, eax */ r_ebx = r_eax;
    /* 0059760a: mov esi, edx */ r_esi = r_edx;
    /* 0059760c: jmp 0x59761d */ goto L_0059761d;
L_0059760e:; BB(0x0059760e);
    /* 0059760e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00597611: fstp dword ptr [ebp + 0x3ec] */ W_F32((u32)(r_ebp+0x3ecu), ST(0)); FPOP();
    /* 00597617: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
L_0059761d:; BB(0x0059761d);
    /* 0059761d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00597621: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00597624: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00597628: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 0059762b: mov edx, esi */ r_edx = r_esi;
    /* 0059762d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00597631: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00597634: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00597638: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x59763du); f_0082ebac();
    /* 0059763d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00597641: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00597645: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00597649: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0059764d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00597651: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00597655: push dword ptr [ebp + 0x3e8] */ { u32 v = R32((u32)(r_ebp+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059765b: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x597660u); f_0082e900();
    /* 00597660: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00597664: fadd dword ptr [0x929304] */ ST(0) = ST(0) + R_F32((u32)(0x929304u));
    /* 0059766a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059766c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00597670: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00597674: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597676: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597678: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597679: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x59767eu); f_007b4c58();
    /* 0059767e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597680: jne 0x597866 */ if (!fZ) goto L_00597866;
L_00597686:; BB(0x00597686);
    /* 00597686: mov ecx, 0x4000 */ r_ecx = 0x4000u;
    /* 0059768b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x597690u); f_0082dcbc();
    /* 00597690: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00597693: mov ecx, 0x4000 */ r_ecx = 0x4000u;
    /* 00597698: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x59769du); f_0082ddd8();
    /* 0059769d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005976a0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005976a3: fld dword ptr [ebp + 0x3ec] */ FPUSH(R_F32((u32)(r_ebp+0x3ecu)));
    /* 005976a9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005976ab: fld dword ptr [ebp + 0x3e4] */ FPUSH(R_F32((u32)(r_ebp+0x3e4u)));
    /* 005976b1: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005976b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005976b5: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005976b7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005976b9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005976bb: fchs  */ ST(0) = -ST(0);
    /* 005976bd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005976bf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005976c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005976c3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005976c6: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005976c9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005976cb: jg 0x59760e */ if ((!fZ&&fS==fO)) goto L_0059760e;
L_005976d1:; BB(0x005976d1);
    /* 005976d1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005976d4: mov eax, ebx */ r_eax = r_ebx;
    /* 005976d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005976d8: jne 0x597755 */ if (!fZ) goto L_00597755;
L_005976da:; BB(0x005976da);
    /* 005976da: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005976dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005976de: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005976e1: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005976e4: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 005976ee: mov dword ptr [ebp + 0x3e4], 0 */ W32((u32)(r_ebp+0x3e4u), 0x0u);
    /* 005976f8: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005976fc: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005976ff: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00597703: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00597707: push dword ptr [ebp + 0x3e8] */ { u32 v = R32((u32)(r_ebp+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059770d: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x597712u); f_0082e900();
    /* 00597712: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00597716: fadd dword ptr [0x929304] */ ST(0) = ST(0) + R_F32((u32)(0x929304u));
    /* 0059771c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0059771e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00597722: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00597726: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00597728: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0059772a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059772b: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x597730u); f_007b4c58();
    /* 00597730: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597732: je 0x59774e */ if (fZ) goto L_0059774e;
L_00597734:; BB(0x00597734);
    /* 00597734: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00597738: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0059773b: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 0059773f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597741: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597742: ja 0x597761 */ if ((!fC&&!fZ)) goto L_00597761;
L_00597744:; BB(0x00597744);
    /* 00597744: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00597747: mov edi, 1 */ r_edi = 0x1u;
    /* 0059774c: jmp 0x597761 */ goto L_00597761;
L_0059774e:; BB(0x0059774e);
    /* 0059774e: mov edi, 1 */ r_edi = 0x1u;
    /* 00597753: jmp 0x597761 */ goto L_00597761;
L_00597755:; BB(0x00597755);
    /* 00597755: fstp dword ptr [ebp + 0x3ec] */ W_F32((u32)(r_ebp+0x3ecu), ST(0)); FPOP();
    /* 0059775b: fstp dword ptr [ebp + 0x3e4] */ W_F32((u32)(r_ebp+0x3e4u), ST(0)); FPOP();
L_00597761:; BB(0x00597761);
    /* 00597761: mov ecx, dword ptr [ebp + 0x3f0] */ r_ecx = R32((u32)(r_ebp+0x3f0u));
    /* 00597767: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597769: je 0x597774 */ if (fZ) goto L_00597774;
L_0059776b:; BB(0x0059776b);
    /* 0059776b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0059776e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059776f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x597774u); f_00508db8();
L_00597774:; BB(0x00597774);
    /* 00597774: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597776: je 0x59785e */ if (fZ) goto L_0059785e;
L_0059777c:; BB(0x0059777c);
    /* 0059777c: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 00597782: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597784: je 0x597797 */ if (fZ) goto L_00597797;
L_00597786:; BB(0x00597786);
    /* 00597786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597787: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x59778cu); f_005cdcc0();
    /* 0059778c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059778d: mov dword ptr [ebp + 0x3f0], 0 */ W32((u32)(r_ebp+0x3f0u), 0x0u);
L_00597797:; BB(0x00597797);
    /* 00597797: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00597799:; BB(0x00597799);
    /* 00597799: movzx eax, byte ptr [0xa74558] */ r_eax = (u32)R8((u32)(0xa74558u));
    /* 005977a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005977a2: jne 0x5977b6 */ if (!fZ) goto L_005977b6;
L_005977a4:; BB(0x005977a4);
    /* 005977a4: mov dword ptr [0xa7455c], 0x41480000 */ W32((u32)(0xa7455cu), 0x41480000u);
    /* 005977ae: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005977b1: mov byte ptr [0xa74558], al */ W8((u32)(0xa74558u), (u8)r_eax);
L_005977b6:; BB(0x005977b6);
    /* 005977b6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005977b8: jne 0x5977ce */ if (!fZ) goto L_005977ce;
L_005977ba:; BB(0x005977ba);
    /* 005977ba: mov dword ptr [0xa74560], 0xc0200000 */ W32((u32)(0xa74560u), 0xc0200000u);
    /* 005977c4: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005977c9: mov byte ptr [0xa74558], al */ W8((u32)(0xa74558u), (u8)r_eax);
L_005977ce:; BB(0x005977ce);
    /* 005977ce: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005977d1: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005977d4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005977d8: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005977db: mov ecx, edi */ r_ecx = r_edi;
    /* 005977dd: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005977e1: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005977e5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5977eau); f_0082dcbc();
    /* 005977ea: fld dword ptr [0xa7455c] */ FPUSH(R_F32((u32)(0xa7455cu)));
    /* 005977f0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005977f2: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 005977f6: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005977fa: fadd dword ptr [0xa74560] */ ST(0) = ST(0) + R_F32((u32)(0xa74560u));
    /* 00597800: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00597802: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00597806: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0059780a: mov ecx, edi */ r_ecx = r_edi;
    /* 0059780c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x597811u); f_0082ddd8();
    /* 00597811: fld dword ptr [0xa7455c] */ FPUSH(R_F32((u32)(0xa7455cu)));
    /* 00597817: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597819: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 0059781d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00597821: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 00597825: push 0xe2 */ { u32 v = 0xe2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059782a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059782b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x597830u); f_0050b510();
    /* 00597830: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597833: add edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00597839: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059783f: jl 0x597799 */ if ((fS!=fO)) goto L_00597799;
L_00597845:; BB(0x00597845);
    /* 00597845: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597847: call 0x5978a0 */ r_esp -= 4; W32(r_esp, 0x59784cu); f_005978a0();
    /* 0059784c: mov dword ptr [ebp + 0x38c], 1 */ W32((u32)(r_ebp+0x38cu), 0x1u);
    /* 00597856: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597858: call dword ptr [0x9bfc08] */ { u32 t = R32((u32)(0x9bfc08u)); r_esp -= 4; W32(r_esp, 0x59785eu); call_ind(t); }
L_0059785e:; BB(0x0059785e);
    /* 0059785e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597861: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597862: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597863: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597864: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00597865: ret  */ FN_RET(0x005975e0); r_esp += 4; return;
L_00597866:; BB(0x00597866);
    /* 00597866: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0059786a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0059786e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00597872: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00597876: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 00597879: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0059787d: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00597880: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 00597884: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597886: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597887: jbe 0x597891 */ if ((fC||fZ)) goto L_00597891;
L_00597889:; BB(0x00597889);
    /* 00597889: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0059788c: jmp 0x597761 */ goto L_00597761;
L_00597891:; BB(0x00597891);
    /* 00597891: mov dword ptr [ebp + 0x3c], ecx */ W32((u32)(r_ebp+0x3cu), r_ecx);
    /* 00597894: mov edi, 1 */ r_edi = 0x1u;
    /* 00597899: jmp 0x597761 */ goto L_00597761;
}

void f_005978a0(void) /* sub_5978A0 */
{
    FN_ENTER(0x005978a0);
    /* 005978a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005978a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005978a4: mov edi, ecx */ r_edi = r_ecx;
    /* 005978a6: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005978a9: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005978ac: fadd dword ptr [0x9294fc] */ ST(0) = ST(0) + R_F32((u32)(0x9294fcu));
    /* 005978b2: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 005978b5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005978b9: mov ecx, edi */ r_ecx = r_edi;
    /* 005978bb: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005978be: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005978c2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005978c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005978c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005978c8: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5978cdu); f_007b4c58();
    /* 005978cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005978cf: je 0x5978f1 */ if (fZ) goto L_005978f1;
L_005978d1:; BB(0x005978d1);
    /* 005978d1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005978d5: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 005978d8: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 005978da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005978dc: fmul dword ptr [0x92930c] */ ST(0) = ST(0) * R_F32((u32)(0x92930cu));
    /* 005978e2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005978e4: mov eax, 1 */ r_eax = 0x1u;
    /* 005978e9: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 005978ec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005978ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005978f0: ret  */ FN_RET(0x005978a0); r_esp += 4; return;
L_005978f1:; BB(0x005978f1);
    /* 005978f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005978f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005978f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005978f7: ret  */ FN_RET(0x005978a0); r_esp += 4; return;
}

void f_005978f8(void) /* sub_5978F8 */
{
    FN_ENTER(0x005978f8);
    /* 005978f8: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 005978fe: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00597901: je 0x597913 */ if (fZ) goto L_00597913;
L_00597903:; BB(0x00597903);
    /* 00597903: mov dword ptr [ecx + 0x38c], 0xd */ W32((u32)(r_ecx+0x38cu), 0xdu);
    /* 0059790d: call dword ptr [0x9bfc68] */ { u32 t = R32((u32)(0x9bfc68u)); r_esp -= 4; W32(r_esp, 0x597913u); call_ind(t); }
L_00597913:; BB(0x00597913);
    /* 00597913: ret  */ FN_RET(0x005978f8); r_esp += 4; return;
}

void f_00597914(void) /* sub_597914 */
{
    FN_ENTER(0x00597914);
    /* 00597914: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00597915: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597916: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597917: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597918: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0059791b: mov esi, ecx */ r_esi = r_ecx;
    /* 0059791d: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00597923: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597926: je 0x597973 */ if (fZ) goto L_00597973;
L_00597928:; BB(0x00597928);
    /* 00597928: movzx eax, word ptr [esi + 0x2d8] */ r_eax = (u32)R16((u32)(r_esi+0x2d8u));
    /* 0059792f: cmp eax, dword ptr [0xaae168] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597935: jge 0x597956 */ if ((fS==fO)) goto L_00597956;
L_00597937:; BB(0x00597937);
    /* 00597937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597938: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x59793du); f_0068d5a8();
    /* 0059793d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0059793e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597940: je 0x597956 */ if (fZ) goto L_00597956;
L_00597942:; BB(0x00597942);
    /* 00597942: add eax, 0x8a4 */ {  u32 a = r_eax; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597947: mov ecx, eax */ r_ecx = r_eax;
    /* 00597949: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x59794eu); f_006a3250();
    /* 0059794e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00597951: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597954: je 0x59797b */ if (fZ) goto L_0059797b;
L_00597956:; BB(0x00597956);
    /* 00597956: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00597959: mov dword ptr [esi + 0x38c], 0xc */ W32((u32)(r_esi+0x38cu), 0xcu);
    /* 00597963: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597968: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0059796b: mov ecx, esi */ r_ecx = r_esi;
    /* 0059796d: call dword ptr [0x9bfc60] */ { u32 t = R32((u32)(0x9bfc60u)); r_esp -= 4; W32(r_esp, 0x597973u); call_ind(t); }
L_00597973:; BB(0x00597973);
    /* 00597973: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597976: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597978: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597979: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0059797a: ret  */ FN_RET(0x00597914); r_esp += 4; return;
L_0059797b:; BB(0x0059797b);
    /* 0059797b: mov ecx, dword ptr [esi + 0x3f8] */ r_ecx = R32((u32)(r_esi+0x3f8u));
    /* 00597981: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597983: je 0x597956 */ if (fZ) goto L_00597956;
L_00597985:; BB(0x00597985);
    /* 00597985: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x59798au); f_008173b4();
    /* 0059798a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0059798c: je 0x597956 */ if (fZ) goto L_00597956;
L_0059798e:; BB(0x0059798e);
    /* 0059798e: mov ebp, dword ptr [esi + 0x3f8] */ r_ebp = R32((u32)(r_esi+0x3f8u));
    /* 00597994: mov eax, dword ptr [ebp + 0x3bc] */ r_eax = R32((u32)(r_ebp+0x3bcu));
    /* 0059799a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0059799c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0059799e: jle 0x597a04 */ if ((fZ||fS!=fO)) goto L_00597a04;
L_005979a0:; BB(0x005979a0);
    /* 005979a0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005979a3: jl 0x5979f2 */ if ((fS!=fO)) goto L_005979f2;
L_005979a5:; BB(0x005979a5);
    /* 005979a5: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 005979ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005979ae: je 0x597a04 */ if (fZ) goto L_00597a04;
L_005979b0:; BB(0x005979b0);
    /* 005979b0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005979b3: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 005979ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005979bc: je 0x597a04 */ if (fZ) goto L_00597a04;
L_005979be:; BB(0x005979be);
    /* 005979be: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005979c1: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 005979c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005979ca: je 0x597a04 */ if (fZ) goto L_00597a04;
L_005979cc:; BB(0x005979cc);
    /* 005979cc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005979cf: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 005979d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005979d8: je 0x597a04 */ if (fZ) goto L_00597a04;
L_005979da:; BB(0x005979da);
    /* 005979da: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005979dd: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 005979e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005979e6: je 0x597a04 */ if (fZ) goto L_00597a04;
L_005979e8:; BB(0x005979e8);
    /* 005979e8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005979eb: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 005979ee: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005979f0: jle 0x5979a5 */ if ((fZ||fS!=fO)) goto L_005979a5;
L_005979f2:; BB(0x005979f2);
    /* 005979f2: mov edx, dword ptr [ebp + ebx*8 + 0x3c0] */ r_edx = R32((u32)(r_ebp+r_ebx*8+0x3c0u));
    /* 005979f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005979fb: je 0x597a04 */ if (fZ) goto L_00597a04;
L_005979fd:; BB(0x005979fd);
    /* 005979fd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00597a00: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00597a02: jl 0x5979f2 */ if ((fS!=fO)) goto L_005979f2;
L_00597a04:; BB(0x00597a04);
    /* 00597a04: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597a06: je 0x597956 */ if (fZ) goto L_00597956;
L_00597a0c:; BB(0x00597a0c);
    /* 00597a0c: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00597a0f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00597a12: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00597a15: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597a17: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00597a1b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00597a1f: fadd dword ptr [0x929310] */ ST(0) = ST(0) + R_F32((u32)(0x929310u));
    /* 00597a25: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00597a28: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00597a2c: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00597a30: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597a35u); f_007751b0();
    /* 00597a35: fld dword ptr [0x9294f8] */ FPUSH(R_F32((u32)(0x9294f8u)));
    /* 00597a3b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597a3d: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00597a41: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00597a46: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597a4b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00597a4f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00597a53: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00597a57: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00597a5b: movsx edi, word ptr [esp + 0x28] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 00597a60: mov ecx, edi */ r_ecx = r_edi;
    /* 00597a62: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x597a67u); f_0082dcbc();
    /* 00597a67: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00597a6b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00597a73: mov ecx, edi */ r_ecx = r_edi;
    /* 00597a75: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x597a7au); f_0082ddd8();
    /* 00597a7a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00597a7e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00597a82: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x597a87u); f_0083173c();
    /* 00597a87: fcomp dword ptr [0x9294f0] */ fx_compare(ST(0), R_F32((u32)(0x9294f0u))); FPOP();
    /* 00597a8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597a8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597a90: ja 0x597aac */ if ((!fC&&!fZ)) goto L_00597aac;
L_00597a92:; BB(0x00597a92);
    /* 00597a92: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00597a9a: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00597aa2: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00597aaa: jmp 0x597ab7 */ goto L_00597ab7;
L_00597aac:; BB(0x00597aac);
    /* 00597aac: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00597ab0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x597ab5u); f_0082df08();
    /* 00597ab5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00597ab7:; BB(0x00597ab7);
    /* 00597ab7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00597aba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597abd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597abe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597abf: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00597ac4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x597ac9u); f_00814298();
    /* 00597ac9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597acc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00597acf: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00597ad3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597ad4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597ad6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597ad7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597ad8: call 0x595bc8 */ r_esp -= 4; W32(r_esp, 0x597addu); f_00595bc8();
    /* 00597add: jmp 0x597956 */ goto L_00597956;
}

void f_00597ae4(void) /* sub_597AE4 */
{
    FN_ENTER(0x00597ae4);
    /* 00597ae4: mov eax, dword ptr [ecx + 0x38c] */ r_eax = R32((u32)(r_ecx+0x38cu));
    /* 00597aea: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00597aed: je 0x597b0a */ if (fZ) goto L_00597b0a;
L_00597aef:; BB(0x00597aef);
    /* 00597aef: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00597af2: mov dword ptr [ecx + 0x38c], 0xb */ W32((u32)(r_ecx+0x38cu), 0xbu);
    /* 00597afc: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597b01: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00597b04: call dword ptr [0x9bfc58] */ { u32 t = R32((u32)(0x9bfc58u)); r_esp -= 4; W32(r_esp, 0x597b0au); call_ind(t); }
L_00597b0a:; BB(0x00597b0a);
    /* 00597b0a: ret  */ FN_RET(0x00597ae4); r_esp += 4; return;
}

void f_00597b0c(void) /* sub_597B0C */
{
    FN_ENTER(0x00597b0c);
    /* 00597b0c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597b0d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00597b0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00597b11: call 0x5978a0 */ r_esp -= 4; W32(r_esp, 0x597b16u); f_005978a0();
    /* 00597b16: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00597b1c: mov dword ptr [ebx + 0x3ac], 0xc0200000 */ W32((u32)(r_ebx+0x3acu), 0xc0200000u);
    /* 00597b26: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00597b28: mov dword ptr [ebx + 0x3b8], 0 */ W32((u32)(r_ebx+0x3b8u), 0x0u);
    /* 00597b32: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00597b3c: mov dword ptr [ebx + 0x3b0], 0 */ W32((u32)(r_ebx+0x3b0u), 0x0u);
    /* 00597b46: mov dword ptr [ebx + 0x3a8], 0 */ W32((u32)(r_ebx+0x3a8u), 0x0u);
    /* 00597b50: mov dword ptr [ebx + 0x3d0], 0 */ W32((u32)(r_ebx+0x3d0u), 0x0u);
    /* 00597b5a: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597b5fu); f_00599c7c();
    /* 00597b5f: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 00597b65: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597b68: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597b6d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597b70: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 00597b76: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597b79: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597b7e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597b81: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00597b84: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00597b86: mov dword ptr [ebx + 0x3f4], 0 */ W32((u32)(r_ebx+0x3f4u), 0x0u);
    /* 00597b90: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597b95: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00597b98: call 0x5966cc */ r_esp -= 4; W32(r_esp, 0x597b9du); f_005966cc();
    /* 00597b9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597b9e: ret  */ FN_RET(0x00597b0c); r_esp += 4; return;
}

void f_00597ba0(void) /* sub_597BA0 */
{
    FN_ENTER(0x00597ba0);
    /* 00597ba0: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00597ba6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597ba9: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597bae: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597bb1: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00597bb7: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597bba: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597bbf: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597bc2: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00597bc5: mov dword ptr [ecx + 0x3f4], 0 */ W32((u32)(r_ecx+0x3f4u), 0x0u);
    /* 00597bcf: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00597bd4: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00597bd7: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
    /* 00597be1: mov dword ptr [ecx + 0x3ac], 0xc0200000 */ W32((u32)(r_ecx+0x3acu), 0xc0200000u);
    /* 00597beb: ret  */ FN_RET(0x00597ba0); r_esp += 4; return;
}

void f_00597bec(void) /* sub_597BEC */
{
    FN_ENTER(0x00597bec);
    /* 00597bec: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00597bf2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00597bf4: mov dword ptr [ecx + 0x3a0], 0x3f800000 */ W32((u32)(r_ecx+0x3a0u), 0x3f800000u);
    /* 00597bfe: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 00597c08: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597c0b: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597c10: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597c13: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00597c19: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597c1c: or eax, 0xa000528 */ {  u32 a = r_eax; u32 b = 0xa000528u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597c21: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597c24: mov dword ptr [ecx + 0x3f4], 0 */ W32((u32)(r_ecx+0x3f4u), 0x0u);
    /* 00597c2e: mov ecx, dword ptr [ecx + 0x390] */ r_ecx = R32((u32)(r_ecx+0x390u));
    /* 00597c34: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597c39u); f_00599c7c();
    /* 00597c39: ret  */ FN_RET(0x00597bec); r_esp += 4; return;
}

void f_00597c3c(void) /* sub_597C3C */
{
    FN_ENTER(0x00597c3c);
    /* 00597c3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597c3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597c3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597c3f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597c42: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00597c44: mov dword ptr [ebp + 0x3bc], 0 */ W32((u32)(r_ebp+0x3bcu), 0x0u);
    /* 00597c4e: lea ebx, [ebp + 0x3c0] */ r_ebx = (u32)(r_ebp+0x3c0u);
    /* 00597c54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597c55: push dword ptr [0xa745dc] */ { u32 v = R32((u32)(0xa745dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00597c5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597c5d: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x597c62u); f_007714cc();
    /* 00597c62: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00597c65: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00597c6a: je 0x597da3 */ if (fZ) goto L_00597da3;
L_00597c70:; BB(0x00597c70);
    /* 00597c70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597c72: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597c77u); f_007751b0();
    /* 00597c77: fld dword ptr [0x9294d4] */ FPUSH(R_F32((u32)(0x9294d4u)));
    /* 00597c7d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597c7f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00597c82: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00597c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597c8b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00597c8f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00597c93: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00597c97: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00597c9a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00597c9e: mov ecx, esi */ r_ecx = r_esi;
    /* 00597ca0: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x597ca5u); f_0082dcbc();
    /* 00597ca5: fld dword ptr [0xa745e4] */ FPUSH(R_F32((u32)(0xa745e4u)));
    /* 00597cab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597cad: fadd dword ptr [ebp + 0x3c0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c0u));
    /* 00597cb3: fstp dword ptr [ebp + 0x3c0] */ W_F32((u32)(r_ebp+0x3c0u), ST(0)); FPOP();
    /* 00597cb9: mov ecx, esi */ r_ecx = r_esi;
    /* 00597cbb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x597cc0u); f_0082ddd8();
    /* 00597cc0: fld dword ptr [0xa745e4] */ FPUSH(R_F32((u32)(0xa745e4u)));
    /* 00597cc6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597cc8: fadd dword ptr [ebp + 0x3c8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3c8u));
    /* 00597cce: fstp dword ptr [ebp + 0x3c8] */ W_F32((u32)(r_ebp+0x3c8u), ST(0)); FPOP();
    /* 00597cd4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00597cd6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x597cdbu); f_0083173c();
    /* 00597cdb: fcomp dword ptr [0x9294d0] */ fx_compare(ST(0), R_F32((u32)(0x9294d0u))); FPOP();
    /* 00597ce1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597ce3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597ce4: ja 0x597cff */ if ((!fC&&!fZ)) goto L_00597cff;
L_00597ce6:; BB(0x00597ce6);
    /* 00597ce6: mov dword ptr [ebp + 0x38c], 2 */ W32((u32)(r_ebp+0x38cu), 0x2u);
    /* 00597cf0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597cf2: call dword ptr [0x9bfc10] */ { u32 t = R32((u32)(0x9bfc10u)); r_esp -= 4; W32(r_esp, 0x597cf8u); call_ind(t); }
    /* 00597cf8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597cfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597cfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597cfe: ret  */ FN_RET(0x00597c3c); r_esp += 4; return;
L_00597cff:; BB(0x00597cff);
    /* 00597cff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00597d01: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x597d06u); f_0082df08();
    /* 00597d06: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00597d08: movzx eax, byte ptr [0xa74564] */ r_eax = (u32)R8((u32)(0xa74564u));
    /* 00597d0f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00597d11: jne 0x597d25 */ if (!fZ) goto L_00597d25;
L_00597d13:; BB(0x00597d13);
    /* 00597d13: mov dword ptr [0xa74568], 0x42480000 */ W32((u32)(0xa74568u), 0x42480000u);
    /* 00597d1d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597d20: mov byte ptr [0xa74564], al */ W8((u32)(0xa74564u), (u8)r_eax);
L_00597d25:; BB(0x00597d25);
    /* 00597d25: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00597d27: jne 0x597d3d */ if (!fZ) goto L_00597d3d;
L_00597d29:; BB(0x00597d29);
    /* 00597d29: mov dword ptr [0xa7456c], 0x41a00000 */ W32((u32)(0xa7456cu), 0x41a00000u);
    /* 00597d33: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597d38: mov byte ptr [0xa74564], al */ W8((u32)(0xa74564u), (u8)r_eax);
L_00597d3d:; BB(0x00597d3d);
    /* 00597d3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597d3f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597d44u); f_007751b0();
    /* 00597d44: fld dword ptr [0xa7456c] */ FPUSH(R_F32((u32)(0xa7456cu)));
    /* 00597d4a: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 00597d50: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597d52: fadd dword ptr [0xa74568] */ ST(0) = ST(0) + R_F32((u32)(0xa74568u));
    /* 00597d58: fstp dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0)); FPOP();
    /* 00597d5e: mov dword ptr [ebp + 0x3a8], 0x3f800000 */ W32((u32)(r_ebp+0x3a8u), 0x3f800000u);
    /* 00597d68: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00597d6a: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597d6fu); f_00599c7c();
    /* 00597d6f: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 00597d75: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597d78: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597d7d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597d80: mov esi, dword ptr [ebp + 0x394] */ r_esi = R32((u32)(r_ebp+0x394u));
    /* 00597d86: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 00597d89: or ebx, 0xa000028 */ {  u32 a = r_ebx; u32 b = 0xa000028u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00597d8f: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 00597d92: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
    /* 00597d9c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597d9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597da0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597da1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597da2: ret  */ FN_RET(0x00597c3c); r_esp += 4; return;
L_00597da3:; BB(0x00597da3);
    /* 00597da3: mov dword ptr [ebp + 0x38c], 2 */ W32((u32)(r_ebp+0x38cu), 0x2u);
    /* 00597dad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00597daf: call dword ptr [0x9bfc10] */ { u32 t = R32((u32)(0x9bfc10u)); r_esp -= 4; W32(r_esp, 0x597db5u); call_ind(t); }
    /* 00597db5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597db8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00597db9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597dba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597dbb: ret  */ FN_RET(0x00597c3c); r_esp += 4; return;
}

void f_00597dbc(void) /* sub_597DBC */
{
    FN_ENTER(0x00597dbc);
    /* 00597dbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597dbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00597dbf: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 00597dc5: mov dword ptr [ebp + 0x39c], 8 */ W32((u32)(r_ebp+0x39cu), 0x8u);
    /* 00597dcf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00597dd1: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597dd6u); f_00599c7c();
    /* 00597dd6: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00597dd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597ddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597dde: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 00597de3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x597de8u); f_00814298();
    /* 00597de8: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 00597dee: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597df1: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597df6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597df9: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 00597dff: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597e02: or eax, 0xa000028 */ {  u32 a = r_eax; u32 b = 0xa000028u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597e07: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597e0a: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
    /* 00597e14: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597e17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597e18: ret  */ FN_RET(0x00597dbc); r_esp += 4; return;
}

void f_00597e1c(void) /* sub_597E1C */
{
    FN_ENTER(0x00597e1c);
    /* 00597e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00597e1d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00597e1f: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00597e22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00597e24: mov dword ptr [ebp + 0x39c], 0x14 */ W32((u32)(r_ebp+0x39cu), 0x14u);
    /* 00597e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00597e30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00597e31: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 00597e36: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x597e3bu); f_00814298();
    /* 00597e3b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00597e3e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00597e40: mov ecx, dword ptr [ebp + 0x390] */ r_ecx = R32((u32)(r_ebp+0x390u));
    /* 00597e46: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597e4bu); f_00599c7c();
    /* 00597e4b: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 00597e51: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597e54: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597e59: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597e5c: mov edx, dword ptr [ebp + 0x394] */ r_edx = R32((u32)(r_ebp+0x394u));
    /* 00597e62: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597e65: or eax, 0xa000028 */ {  u32 a = r_eax; u32 b = 0xa000028u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00597e6a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597e6d: mov dword ptr [ebp + 0x3f4], 0 */ W32((u32)(r_ebp+0x3f4u), 0x0u);
    /* 00597e77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00597e78: ret  */ FN_RET(0x00597e1c); r_esp += 4; return;
}

void f_00597e7c(void) /* sub_597E7C */
{
    FN_ENTER(0x00597e7c);
    /* 00597e7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597e7d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597e80: mov esi, ecx */ r_esi = r_ecx;
    /* 00597e82: mov ecx, esi */ r_ecx = r_esi;
    /* 00597e84: mov dword ptr [esi + 0x3d4], 0xffff */ W32((u32)(r_esi+0x3d4u), 0xffffu);
    /* 00597e8e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597e93u); f_007751b0();
    /* 00597e93: fld dword ptr [0x9294c0] */ FPUSH(R_F32((u32)(0x9294c0u)));
    /* 00597e99: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597e9b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00597e9e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00597ea2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597ea7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00597eab: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00597eaf: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00597eb3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00597eb6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00597eba: mov dword ptr [esi + 0x398], 0x7fffffff */ W32((u32)(r_esi+0x398u), 0x7fffffffu);
    /* 00597ec4: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00597ec7: mov dword ptr [esi + 0x3cc], 0x400 */ W32((u32)(r_esi+0x3ccu), 0x400u);
    /* 00597ed1: add eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597ed6: mov dword ptr [esi + 0x3a4], eax */ W32((u32)(r_esi+0x3a4u), r_eax);
    /* 00597edc: mov ecx, esi */ r_ecx = r_esi;
    /* 00597ede: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597ee3u); f_007751b0();
    /* 00597ee3: fcomp dword ptr [0x9294bc] */ fx_compare(ST(0), R_F32((u32)(0x9294bcu))); FPOP();
    /* 00597ee9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597eeb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597eec: jbe 0x597efc */ if ((fC||fZ)) goto L_00597efc;
L_00597eee:; BB(0x00597eee);
    /* 00597eee: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00597ef4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00597ef6: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
L_00597efc:; BB(0x00597efc);
    /* 00597efc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597efe: mov ecx, dword ptr [esi + 0x390] */ r_ecx = R32((u32)(r_esi+0x390u));
    /* 00597f04: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597f09u); f_00599c7c();
    /* 00597f09: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 00597f0f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597f12: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597f17: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597f1a: mov dword ptr [esi + 0x3f4], 1 */ W32((u32)(r_esi+0x3f4u), 0x1u);
    /* 00597f24: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597f27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597f28: ret  */ FN_RET(0x00597e7c); r_esp += 4; return;
}

void f_00597f2c(void) /* sub_597F2C */
{
    FN_ENTER(0x00597f2c);
    /* 00597f2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00597f2d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597f30: mov esi, ecx */ r_esi = r_ecx;
    /* 00597f32: mov ecx, esi */ r_ecx = r_esi;
    /* 00597f34: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597f39u); f_007751b0();
    /* 00597f39: fld dword ptr [0x9294b8] */ FPUSH(R_F32((u32)(0x9294b8u)));
    /* 00597f3f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597f41: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00597f44: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00597f48: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597f4d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00597f51: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00597f55: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00597f59: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00597f5c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00597f60: mov dword ptr [esi + 0x3cc], 0x888 */ W32((u32)(r_esi+0x3ccu), 0x888u);
    /* 00597f6a: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597f6d: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00597f73: mov ecx, esi */ r_ecx = r_esi;
    /* 00597f75: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597f7au); f_007751b0();
    /* 00597f7a: fcomp dword ptr [0x9294b4] */ fx_compare(ST(0), R_F32((u32)(0x9294b4u))); FPOP();
    /* 00597f80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00597f82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00597f83: jbe 0x597f93 */ if ((fC||fZ)) goto L_00597f93;
L_00597f85:; BB(0x00597f85);
    /* 00597f85: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 00597f8b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00597f8d: mov dword ptr [esi + 0x3cc], eax */ W32((u32)(r_esi+0x3ccu), r_eax);
L_00597f93:; BB(0x00597f93);
    /* 00597f93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00597f95: mov ecx, dword ptr [esi + 0x390] */ r_ecx = R32((u32)(r_esi+0x390u));
    /* 00597f9b: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x597fa0u); f_00599c7c();
    /* 00597fa0: mov edx, dword ptr [esi + 0x394] */ r_edx = R32((u32)(r_esi+0x394u));
    /* 00597fa6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00597fa9: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00597fae: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00597fb1: mov dword ptr [esi + 0x3f4], 1 */ W32((u32)(r_esi+0x3f4u), 0x1u);
    /* 00597fbb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00597fbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00597fbf: ret  */ FN_RET(0x00597f2c); r_esp += 4; return;
}

void f_00597fc0(void) /* sub_597FC0 */
{
    FN_ENTER(0x00597fc0);
    /* 00597fc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00597fc1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00597fc4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00597fc6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00597fc8: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x597fcdu); f_007751b0();
    /* 00597fcd: fld dword ptr [0x9294b0] */ FPUSH(R_F32((u32)(0x9294b0u)));
    /* 00597fd3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00597fd5: mov ecx, dword ptr [ebx + 0x390] */ r_ecx = R32((u32)(r_ebx+0x390u));
    /* 00597fdb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00597fde: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00597fe2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00597fe7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00597feb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00597fef: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00597ff3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00597ff6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00597ffa: add eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00597ffd: mov dword ptr [ebx + 0x398], eax */ W32((u32)(r_ebx+0x398u), r_eax);
    /* 00598003: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00598005: call 0x599c7c */ r_esp -= 4; W32(r_esp, 0x59800au); f_00599c7c();
    /* 0059800a: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 00598010: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00598013: and eax, 0xf5fff297 */ {  u32 a = r_eax; u32 b = 0xf5fff297u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00598018: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0059801b: mov dword ptr [ebx + 0x3f4], 1 */ W32((u32)(r_ebx+0x3f4u), 0x1u);
    /* 00598025: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00598028: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00598029: ret  */ FN_RET(0x00597fc0); r_esp += 4; return;
}

