#include "protos.h"

void f_005661f8(void) /* sub_5661F8 */
{
    FN_ENTER(0x005661f8);
    /* 005661f8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005661fb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005661ff: fld dword ptr [0x925f7c] */ FPUSH(R_F32((u32)(0x925f7cu)));
    /* 00566205: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00566208: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0056620b: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0056620e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00566212: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00566215: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00566219: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0056621b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0056621d: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00566220: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00566223: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00566226: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00566228: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056622b: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0056622f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00566233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566234: call 0x5648a0 */ r_esp -= 4; W32(r_esp, 0x566239u); f_005648a0();
    /* 00566239: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056623c: ret 4 */ FN_RET(0x005661f8); r_esp += 8; return;
}

void f_00566240(void) /* sub_566240 */
{
    FN_ENTER(0x00566240);
    /* 00566240: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566243: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 00566249: mov edx, dword ptr [edx + 0x74] */ r_edx = R32((u32)(r_edx+0x74u));
    /* 0056624c: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 00566252: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00566256: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00566259: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056625c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0056625f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00566262: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00566265: fadd dword ptr [eax*4 + 0x925d20] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x925d20u));
    /* 0056626c: fdiv dword ptr [esp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xcu));
    /* 00566270: fdivr dword ptr [0x925f80] */ ST(0) = R_F32((u32)(0x925f80u)) / ST(0);
    /* 00566276: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566279: ret 4 */ FN_RET(0x00566240); r_esp += 8; return;
}

void f_0056627c(void) /* sub_56627C */
{
    FN_ENTER(0x0056627c);
    /* 0056627c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056627d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566280: mov edi, ecx */ r_edi = r_ecx;
    /* 00566282: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00566286: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566289: je 0x5663ed */ if (fZ) goto L_005663ed;
L_0056628f:; BB(0x0056628f);
    /* 0056628f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566292: je 0x5663a4 */ if (fZ) goto L_005663a4;
L_00566298:; BB(0x00566298);
    /* 00566298: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056629a: jne 0x56638a */ if (!fZ) goto L_0056638a;
L_005662a0:; BB(0x005662a0);
    /* 005662a0: mov ecx, edi */ r_ecx = r_edi;
    /* 005662a2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5662a7u); f_007aa094();
    /* 005662a7: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 005662ad: mov edx, dword ptr [edi + 0x310] */ r_edx = R32((u32)(r_edi+0x310u));
    /* 005662b3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005662b6: mov eax, dword ptr [edi + 0x314] */ r_eax = R32((u32)(r_edi+0x314u));
    /* 005662bc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005662c0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005662c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005662c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005662c8: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x5662cdu); f_007828e4();
    /* 005662cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005662ce: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005662d1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005662d5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005662d9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005662dd: mov ecx, edi */ r_ecx = r_edi;
    /* 005662df: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005662e2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005662e6: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5662ebu); f_005207c4();
    /* 005662eb: mov eax, dword ptr [edi + 0x520] */ r_eax = R32((u32)(r_edi+0x520u));
    /* 005662f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005662f3: jne 0x566319 */ if (!fZ) goto L_00566319;
L_005662f5:; BB(0x005662f5);
    /* 005662f5: fld dword ptr [0x925f70] */ FPUSH(R_F32((u32)(0x925f70u)));
    /* 005662fb: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00566301: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00566303: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 00566309: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0056630b: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 00566311: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 00566317: jmp 0x566372 */ goto L_00566372;
L_00566319:; BB(0x00566319);
    /* 00566319: fld dword ptr [0x925f78] */ FPUSH(R_F32((u32)(0x925f78u)));
    /* 0056631f: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 00566324: push dword ptr [edi + 0x530] */ { u32 v = R32((u32)(r_edi+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056632a: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00566330: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00566332: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566335: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0056633b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0056633d: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 00566343: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
    /* 00566349: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x56634eu); f_007a8c74();
    /* 0056634e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566351: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566356: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00566359: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0056635c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056635e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x566363u); f_007aaa30();
    /* 00566363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566365: je 0x566372 */ if (fZ) goto L_00566372;
L_00566367:; BB(0x00566367);
    /* 00566367: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0056636a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056636b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056636d: call 0x5661f8 */ r_esp -= 4; W32(r_esp, 0x566372u); f_005661f8();
L_00566372:; BB(0x00566372);
    /* 00566372: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00566374: mov ecx, edi */ r_ecx = r_edi;
    /* 00566376: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x56637cu); call_ind(t); }
    /* 0056637c: mov ecx, edi */ r_ecx = r_edi;
    /* 0056637e: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x566383u); f_007b7e9c();
    /* 00566383: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566386: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566387: ret 4 */ FN_RET(0x0056627c); r_esp += 8; return;
L_0056638a:; BB(0x0056638a);
    /* 0056638a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056638d: jne 0x5663e6 */ if (!fZ) goto L_005663e6;
L_0056638f:; BB(0x0056638f);
    /* 0056638f: mov ecx, edi */ r_ecx = r_edi;
    /* 00566391: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x566396u); f_0051f81c();
    /* 00566396: mov ecx, edi */ r_ecx = r_edi;
    /* 00566398: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x56639du); f_00520be8();
    /* 0056639d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005663a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005663a1: ret 4 */ FN_RET(0x0056627c); r_esp += 8; return;
L_005663a4:; BB(0x005663a4);
    /* 005663a4: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005663aa: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005663ac: je 0x5663e6 */ if (fZ) goto L_005663e6;
L_005663ae:; BB(0x005663ae);
    /* 005663ae: mov eax, dword ptr [edi + 0x380] */ r_eax = R32((u32)(r_edi+0x380u));
    /* 005663b4: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005663b7: jne 0x5663c9 */ if (!fZ) goto L_005663c9;
L_005663b9:; BB(0x005663b9);
    /* 005663b9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005663bb: mov ecx, edi */ r_ecx = r_edi;
    /* 005663bd: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5663c2u); f_0051f62c();
    /* 005663c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005663c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005663c6: ret 4 */ FN_RET(0x0056627c); r_esp += 8; return;
L_005663c9:; BB(0x005663c9);
    /* 005663c9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005663cc: jne 0x5663de */ if (!fZ) goto L_005663de;
L_005663ce:; BB(0x005663ce);
    /* 005663ce: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005663d0: mov ecx, edi */ r_ecx = r_edi;
    /* 005663d2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5663d7u); f_0051f62c();
    /* 005663d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005663da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005663db: ret 4 */ FN_RET(0x0056627c); r_esp += 8; return;
L_005663de:; BB(0x005663de);
    /* 005663de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005663df: mov ecx, edi */ r_ecx = r_edi;
    /* 005663e1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5663e6u); f_0051f62c();
L_005663e6:; BB(0x005663e6);
    /* 005663e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005663e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005663ea: ret 4 */ FN_RET(0x0056627c); r_esp += 8; return;
L_005663ed:; BB(0x005663ed);
    /* 005663ed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005663ef: mov ecx, edi */ r_ecx = r_edi;
    /* 005663f1: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5663f7u); call_ind(t); }
    /* 005663f7: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 005663fc: mov ecx, edi */ r_ecx = r_edi;
    /* 005663fe: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x566403u); f_00779df0();
    /* 00566403: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00566405: mov dword ptr [edi + 0x524], edx */ W32((u32)(r_edi+0x524u), r_edx);
    /* 0056640b: mov dword ptr [edi + 0x530], edx */ W32((u32)(r_edi+0x530u), r_edx);
    /* 00566411: mov eax, 6 */ r_eax = 0x6u;
    /* 00566416: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0056641d: movsx eax, word ptr [edi + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 00566424: mov dword ptr [edi + 0x520], edx */ W32((u32)(r_edi+0x520u), r_edx);
    /* 0056642a: movsx edx, word ptr [edi + 0x346] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 00566431: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00566433: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566436: jge 0x566457 */ if ((fS==fO)) goto L_00566457;
L_00566438:; BB(0x00566438);
    /* 00566438: push 0x231 */ { u32 v = 0x231u; r_esp -= 4; W32(r_esp, v); }
    /* 0056643d: mov ecx, edi */ r_ecx = r_edi;
    /* 0056643f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x566444u); f_007879b8();
    /* 00566444: mov ecx, eax */ r_ecx = r_eax;
    /* 00566446: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00566449: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056644b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056644c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056644d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056644e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056644f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x566454u); f_00814298();
    /* 00566454: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566457:; BB(0x00566457);
    /* 00566457: mov ecx, edi */ r_ecx = r_edi;
    /* 00566459: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x56645eu); f_00520bdc();
    /* 0056645e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566461: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566462: ret 4 */ FN_RET(0x0056627c); r_esp += 8; return;
}

void f_00566468(void) /* sub_566468 */
{
    FN_ENTER(0x00566468);
    /* 00566468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00566469: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0056646a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056646c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00566470: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566473: je 0x56651c */ if (fZ) goto L_0056651c;
L_00566479:; BB(0x00566479);
    /* 00566479: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056647c: je 0x5664f2 */ if (fZ) goto L_005664f2;
L_0056647e:; BB(0x0056647e);
    /* 0056647e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00566480: jne 0x566505 */ if (!fZ) goto L_00566505;
L_00566486:; BB(0x00566486);
    /* 00566486: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566488: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56648du); f_007aa094();
    /* 0056648d: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566490: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566492: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x566497u); f_00564800();
    /* 00566497: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056649c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056649e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5664a3u); f_007aaa30();
    /* 005664a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005664a5: je 0x5664c6 */ if (fZ) goto L_005664c6;
L_005664a7:; BB(0x005664a7);
    /* 005664a7: push 0x22f */ { u32 v = 0x22fu; r_esp -= 4; W32(r_esp, v); }
    /* 005664ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005664ae: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5664b3u); f_007879b8();
    /* 005664b3: mov ecx, eax */ r_ecx = r_eax;
    /* 005664b5: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005664b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005664ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005664bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005664bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005664bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005664be: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5664c3u); f_00814298();
    /* 005664c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005664c6:; BB(0x005664c6);
    /* 005664c6: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 005664cc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005664cf: mov dword ptr [ebx + 0x520], eax */ W32((u32)(r_ebx+0x520u), r_eax);
    /* 005664d5: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005664d8: je 0x566513 */ if (fZ) goto L_00566513;
L_005664da:; BB(0x005664da);
    /* 005664da: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005664dd: je 0x56650a */ if (fZ) goto L_0056650a;
L_005664df:; BB(0x005664df);
    /* 005664df: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005664e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005664e3: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5664e9u); call_ind(t); }
    /* 005664e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005664eb: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5664f0u); f_007b7e9c();
    /* 005664f0: jmp 0x566505 */ goto L_00566505;
L_005664f2:; BB(0x005664f2);
    /* 005664f2: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 005664f8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005664fa: je 0x566505 */ if (fZ) goto L_00566505;
L_005664fc:; BB(0x005664fc);
    /* 005664fc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005664fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566500: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x566505u); f_0051f62c();
L_00566505:; BB(0x00566505);
    /* 00566505: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00566506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00566507: ret 4 */ FN_RET(0x00566468); r_esp += 8; return;
L_0056650a:; BB(0x0056650a);
    /* 0056650a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056650c: call 0x566584 */ r_esp -= 4; W32(r_esp, 0x566511u); f_00566584();
    /* 00566511: jmp 0x5664df */ goto L_005664df;
L_00566513:; BB(0x00566513);
    /* 00566513: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566515: call 0x5665d0 */ r_esp -= 4; W32(r_esp, 0x56651au); f_005665d0();
    /* 0056651a: jmp 0x5664df */ goto L_005664df;
L_0056651c:; BB(0x0056651c);
    /* 0056651c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0056651e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566520: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x566526u); call_ind(t); }
    /* 00566526: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00566528: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056652a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x56652fu); f_0051f664();
    /* 0056652f: mov dword ptr [ebx + 0x520], 0 */ W32((u32)(r_ebx+0x520u), 0x0u);
    /* 00566539: mov eax, 9 */ r_eax = 0x9u;
    /* 0056653e: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00566545: mov eax, dword ptr [ebx + 0x474] */ r_eax = R32((u32)(r_ebx+0x474u));
    /* 0056654b: mov ebx, dword ptr [0xa73d60] */ r_ebx = R32((u32)(0xa73d60u));
    /* 00566551: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00566553: je 0x566505 */ if (fZ) goto L_00566505;
L_00566555:; BB(0x00566555);
    /* 00566555: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00566558: mov esi, eax */ r_esi = r_eax;
L_0056655a:; BB(0x0056655a);
    /* 0056655a: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0056655e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056655f: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x566564u); f_007b4d18();
    /* 00566564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00566565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566567: je 0x566571 */ if (fZ) goto L_00566571;
L_00566569:; BB(0x00566569);
    /* 00566569: cmp esi, dword ptr [eax + 0x474] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x474u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056656f: je 0x56657a */ if (fZ) goto L_0056657a;
L_00566571:; BB(0x00566571);
    /* 00566571: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00566574: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00566576: jne 0x56655a */ if (!fZ) goto L_0056655a;
L_00566578:; BB(0x00566578);
    /* 00566578: jmp 0x56657f */ goto L_0056657f;
L_0056657a:; BB(0x0056657a);
    /* 0056657a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0056657d: jmp 0x566505 */ goto L_00566505;
L_0056657f:; BB(0x0056657f);
    /* 0056657f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00566582: jmp 0x566505 */ goto L_00566505;
}

void f_00566584(void) /* sub_566584 */
{
    FN_ENTER(0x00566584);
    /* 00566584: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00566585: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566588: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056658a: movzx eax, word ptr [ebx + 0x47c] */ r_eax = (u32)R16((u32)(r_ebx+0x47cu));
    /* 00566591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566592: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x566597u); f_007b4d18();
    /* 00566597: mov ecx, eax */ r_ecx = r_eax;
    /* 00566599: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056659c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056659e: je 0x5665c9 */ if (fZ) goto L_005665c9;
L_005665a0:; BB(0x005665a0);
    /* 005665a0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005665a2: mov dword ptr [esp], 9 */ W32((u32)(r_esp), 0x9u);
    /* 005665a9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005665ae: mov dword ptr [esp + 4], 0x3fc00000 */ W32((u32)(r_esp+0x4u), 0x3fc00000u);
    /* 005665b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005665b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005665b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005665ba: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005665bf: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005665c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005665c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005665c4: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5665c7u); call_ind(t); }
    /* 005665c7: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005665c9:; BB(0x005665c9);
    /* 005665c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005665cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005665cd: ret  */ FN_RET(0x00566584); r_esp += 4; return;
}

void f_005665d0(void) /* sub_5665D0 */
{
    FN_ENTER(0x005665d0);
    /* 005665d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005665d1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005665d4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005665d6: movzx eax, word ptr [ebx + 0x47c] */ r_eax = (u32)R16((u32)(r_ebx+0x47cu));
    /* 005665dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005665de: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5665e3u); f_007b4d18();
    /* 005665e3: mov ecx, eax */ r_ecx = r_eax;
    /* 005665e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005665e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005665ea: je 0x566615 */ if (fZ) goto L_00566615;
L_005665ec:; BB(0x005665ec);
    /* 005665ec: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005665ee: mov dword ptr [esp], 0xa */ W32((u32)(r_esp), 0xau);
    /* 005665f5: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005665fa: mov dword ptr [esp + 4], 0x3fc00000 */ W32((u32)(r_esp+0x4u), 0x3fc00000u);
    /* 00566602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00566606: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056660b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056660d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056660e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566610: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x566613u); call_ind(t); }
    /* 00566613: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00566615:; BB(0x00566615);
    /* 00566615: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566618: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00566619: ret  */ FN_RET(0x005665d0); r_esp += 4; return;
}

void f_00566600(void)
{
    FN_ENTER(0x00566600);
    /* 00566600: sar byte ptr [edi], 0x50 */ { u32 ad = (u32)(r_edi); u32 c = (16u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 00566603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566604: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00566606: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056660b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0056660d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056660e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566610: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x566613u); call_ind(t); }
    /* 00566613: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566615: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566618: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00566619: ret  */ FN_RET(0x00566600); r_esp += 4; return;
}

void f_0056661c(void) /* sub_56661C */
{
    FN_ENTER(0x0056661c);
    /* 0056661c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056661d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566620: mov edi, ecx */ r_edi = r_ecx;
    /* 00566622: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00566626: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566629: je 0x5668d6 */ if (fZ) goto L_005668d6;
L_0056662f:; BB(0x0056662f);
    /* 0056662f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566632: je 0x5667fe */ if (fZ) goto L_005667fe;
L_00566638:; BB(0x00566638);
    /* 00566638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056663a: jne 0x56680d */ if (!fZ) goto L_0056680d;
L_00566640:; BB(0x00566640);
    /* 00566640: mov ecx, edi */ r_ecx = r_edi;
    /* 00566642: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x566647u); f_007aa094();
    /* 00566647: mov eax, dword ptr [edi + 0x520] */ r_eax = R32((u32)(r_edi+0x520u));
    /* 0056664d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056664f: jne 0x56677d */ if (!fZ) goto L_0056677d;
L_00566655:; BB(0x00566655);
    /* 00566655: mov edx, dword ptr [edi + 0x524] */ r_edx = R32((u32)(r_edi+0x524u));
    /* 0056665b: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 00566661: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00566663: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00566666: add edx, 0x1800 */ {  u32 a = r_edx; u32 b = 0x1800u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0056666c: mov dword ptr [edi + 0x530], edx */ W32((u32)(r_edi+0x530u), r_edx);
    /* 00566672: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00566674: je 0x56667e */ if (fZ) goto L_0056667e;
L_00566676:; BB(0x00566676);
    /* 00566676: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00566678: mov dword ptr [edi + 0x530], edx */ W32((u32)(r_edi+0x530u), r_edx);
L_0056667e:; BB(0x0056667e);
    /* 0056667e: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00566682: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00566684: jne 0x56668e */ if (!fZ) goto L_0056668e;
L_00566686:; BB(0x00566686);
    /* 00566686: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00566688: mov dword ptr [edi + 0x530], edx */ W32((u32)(r_edi+0x530u), r_edx);
L_0056668e:; BB(0x0056668e);
    /* 0056668e: add edx, dword ptr [edi + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00566691: mov eax, dword ptr [edi + 0x524] */ r_eax = R32((u32)(r_edi+0x524u));
    /* 00566697: mov dword ptr [edi + 0x530], edx */ W32((u32)(r_edi+0x530u), r_edx);
    /* 0056669d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005666a0: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 005666a6: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005666a9: jle 0x5666b5 */ if ((fZ||fS!=fO)) goto L_005666b5;
L_005666ab:; BB(0x005666ab);
    /* 005666ab: mov dword ptr [edi + 0x520], 2 */ W32((u32)(r_edi+0x520u), 0x2u);
L_005666b5:; BB(0x005666b5);
    /* 005666b5: mov ecx, dword ptr [edi + 0x530] */ r_ecx = R32((u32)(r_edi+0x530u));
    /* 005666bb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5666c0u); f_0082dcbc();
    /* 005666c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005666c4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005666c8: fmul dword ptr [0xa73d00] */ ST(0) = ST(0) * R_F32((u32)(0xa73d00u));
    /* 005666ce: mov ecx, dword ptr [edi + 0x530] */ r_ecx = R32((u32)(r_edi+0x530u));
    /* 005666d4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005666d8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5666ddu); f_0082ddd8();
    /* 005666dd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005666e0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005666e3: fmul dword ptr [0xa73d00] */ ST(0) = ST(0) * R_F32((u32)(0xa73d00u));
    /* 005666e9: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 005666ec: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005666f0: mov eax, dword ptr [edi + 0x514] */ r_eax = R32((u32)(r_edi+0x514u));
    /* 005666f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005666f8: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005666fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005666fd: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 00566700: mov eax, dword ptr [edi + 0x514] */ r_eax = R32((u32)(r_edi+0x514u));
    /* 00566706: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00566709: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0056670c: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0056670f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00566711: mov eax, dword ptr [edi + 0x514] */ r_eax = R32((u32)(r_edi+0x514u));
    /* 00566717: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 0056671a: mov ecx, dword ptr [edi + 0x514] */ r_ecx = R32((u32)(r_edi+0x514u));
    /* 00566720: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x566725u); f_007b6880();
    /* 00566725: mov eax, dword ptr [edi + 0x514] */ r_eax = R32((u32)(r_edi+0x514u));
    /* 0056672b: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 00566731: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00566734: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566739: jne 0x56680d */ if (!fZ) goto L_0056680d;
L_0056673f:; BB(0x0056673f);
    /* 0056673f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00566743: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00566745: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00566748: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056674a: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0056674e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566750: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00566752: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00566755: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566758: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056675a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056675d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00566761: mov ecx, edi */ r_ecx = r_edi;
    /* 00566763: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0056676b: call 0x520940 */ r_esp -= 4; W32(r_esp, 0x566770u); f_00520940();
    /* 00566770: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566772: jne 0x56680d */ if (!fZ) goto L_0056680d;
L_00566778:; BB(0x00566778);
    /* 00566778: jmp 0x566814 */ goto L_00566814;
L_0056677d:; BB(0x0056677d);
    /* 0056677d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566780: jne 0x56680d */ if (!fZ) goto L_0056680d;
L_00566786:; BB(0x00566786);
    /* 00566786: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0056678c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0056678e: je 0x5667a1 */ if (fZ) goto L_005667a1;
L_00566790:; BB(0x00566790);
    /* 00566790: mov ecx, edi */ r_ecx = r_edi;
    /* 00566792: call 0x565eac */ r_esp -= 4; W32(r_esp, 0x566797u); f_00565eac();
    /* 00566797: mov dword ptr [edi + 0x520], 2 */ W32((u32)(r_edi+0x520u), 0x2u);
L_005667a1:; BB(0x005667a1);
    /* 005667a1: mov ecx, edi */ r_ecx = r_edi;
    /* 005667a3: call 0x566910 */ r_esp -= 4; W32(r_esp, 0x5667a8u); f_00566910();
    /* 005667a8: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 005667ad: push dword ptr [edi + 0x3b0] */ { u32 v = R32((u32)(r_edi+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005667b3: mov ecx, edi */ r_ecx = r_edi;
    /* 005667b5: push dword ptr [edi + 0x3a8] */ { u32 v = R32((u32)(r_edi+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005667bb: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5667c0u); f_005207c4();
    /* 005667c0: push 0xf00 */ { u32 v = 0xf00u; r_esp -= 4; W32(r_esp, v); }
    /* 005667c5: push dword ptr [edi + 0x530] */ { u32 v = R32((u32)(r_edi+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 005667cb: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005667ce: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5667d3u); f_007a8c74();
    /* 005667d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005667d6: push dword ptr [edi + 0x530] */ { u32 v = R32((u32)(r_edi+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 005667dc: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 005667df: mov ecx, edi */ r_ecx = r_edi;
    /* 005667e1: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x5667e6u); f_00564800();
    /* 005667e6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005667e8: mov ecx, edi */ r_ecx = r_edi;
    /* 005667ea: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5667f0u); call_ind(t); }
    /* 005667f0: mov ecx, edi */ r_ecx = r_edi;
    /* 005667f2: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5667f7u); f_007b7e9c();
    /* 005667f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005667fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005667fb: ret 4 */ FN_RET(0x0056661c); r_esp += 8; return;
L_005667fe:; BB(0x005667fe);
    /* 005667fe: mov eax, dword ptr [edi + 0x520] */ r_eax = R32((u32)(r_edi+0x520u));
    /* 00566804: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566807: je 0x5668ac */ if (fZ) goto L_005668ac;
L_0056680d:; BB(0x0056680d);
    /* 0056680d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566810: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566811: ret 4 */ FN_RET(0x0056661c); r_esp += 8; return;
L_00566814:; BB(0x00566814);
    /* 00566814: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0056681a: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00566820: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00566824: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00566828: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0056682c: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00566832: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00566836: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0056683a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0056683e: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 00566844: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00566848: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0056684b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0056684f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00566853: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00566855: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566856: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566857: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x56685cu); f_007806dc();
    /* 0056685c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056685f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566861: je 0x56680d */ if (fZ) goto L_0056680d;
L_00566863:; BB(0x00566863);
    /* 00566863: mov ecx, dword ptr [edi + 0x530] */ r_ecx = R32((u32)(r_edi+0x530u));
    /* 00566869: mov dword ptr [edi + 0x520], 1 */ W32((u32)(r_edi+0x520u), 0x1u);
    /* 00566873: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00566878: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0056687f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x566884u); f_0082dcbc();
    /* 00566884: mov ecx, dword ptr [edi + 0x530] */ r_ecx = R32((u32)(r_edi+0x530u));
    /* 0056688a: fstp dword ptr [edi + 0x3a8] */ W_F32((u32)(r_edi+0x3a8u), ST(0)); FPOP();
    /* 00566890: mov dword ptr [edi + 0x3ac], 0 */ W32((u32)(r_edi+0x3acu), 0x0u);
    /* 0056689a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x56689fu); f_0082ddd8();
    /* 0056689f: fstp dword ptr [edi + 0x3b0] */ W_F32((u32)(r_edi+0x3b0u), ST(0)); FPOP();
    /* 005668a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005668a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005668a9: ret 4 */ FN_RET(0x0056661c); r_esp += 8; return;
L_005668ac:; BB(0x005668ac);
    /* 005668ac: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005668b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005668b4: je 0x5668c6 */ if (fZ) goto L_005668c6;
L_005668b6:; BB(0x005668b6);
    /* 005668b6: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005668b8: mov ecx, edi */ r_ecx = r_edi;
    /* 005668ba: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5668bfu); f_0051f62c();
    /* 005668bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005668c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005668c3: ret 4 */ FN_RET(0x0056661c); r_esp += 8; return;
L_005668c6:; BB(0x005668c6);
    /* 005668c6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005668c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005668ca: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5668cfu); f_0051f62c();
    /* 005668cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005668d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005668d3: ret 4 */ FN_RET(0x0056661c); r_esp += 8; return;
L_005668d6:; BB(0x005668d6);
    /* 005668d6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005668d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005668da: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005668e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005668e3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5668e8u); f_0051f664();
    /* 005668e8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005668ea: mov ecx, edi */ r_ecx = r_edi;
    /* 005668ec: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5668f2u); call_ind(t); }
    /* 005668f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005668f4: mov dword ptr [edi + 0x520], eax */ W32((u32)(r_edi+0x520u), r_eax);
    /* 005668fa: mov dword ptr [edi + 0x530], eax */ W32((u32)(r_edi+0x530u), r_eax);
    /* 00566900: mov dword ptr [edi + 0x524], eax */ W32((u32)(r_edi+0x524u), r_eax);
    /* 00566906: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566909: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056690a: ret 4 */ FN_RET(0x0056661c); r_esp += 8; return;
}

void f_00566910(void) /* sub_566910 */
{
    FN_ENTER(0x00566910);
    /* 00566910: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00566911: mov esi, ecx */ r_esi = r_ecx;
    /* 00566913: mov ecx, esi */ r_ecx = r_esi;
    /* 00566915: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056691a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56691fu); f_007aaa30();
    /* 0056691f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00566921: je 0x56692e */ if (fZ) goto L_0056692e;
L_00566923:; BB(0x00566923);
    /* 00566923: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00566926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566927: mov ecx, esi */ r_ecx = r_esi;
    /* 00566929: call 0x5648a0 */ r_esp -= 4; W32(r_esp, 0x56692eu); f_005648a0();
L_0056692e:; BB(0x0056692e);
    /* 0056692e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056692f: ret  */ FN_RET(0x00566910); r_esp += 4; return;
}

void f_00566930(void) /* sub_566930 */
{
    FN_ENTER(0x00566930);
    /* 00566930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00566931: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566934: mov edi, ecx */ r_edi = r_ecx;
    /* 00566936: fld dword ptr [edi + 0x538] */ FPUSH(R_F32((u32)(r_edi+0x538u)));
    /* 0056693c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00566940: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566943: je 0x566a73 */ if (fZ) goto L_00566a73;
L_00566949:; BB(0x00566949);
    /* 00566949: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056694c: je 0x566a2f */ if (fZ) goto L_00566a2f;
L_00566952:; BB(0x00566952);
    /* 00566952: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566956: jne 0x566a6c */ if (!fZ) goto L_00566a6c;
L_0056695c:; BB(0x0056695c);
    /* 0056695c: add dword ptr [edi + 0x520], 1 */ { u32 ad = (u32)(r_edi+0x520u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00566963: mov ecx, edi */ r_ecx = r_edi;
    /* 00566965: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x56696au); f_007aa094();
    /* 0056696a: mov ecx, edi */ r_ecx = r_edi;
    /* 0056696c: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x566971u); f_00521238();
    /* 00566971: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566973: je 0x566a6c */ if (fZ) goto L_00566a6c;
L_00566979:; BB(0x00566979);
    /* 00566979: mov ecx, edi */ r_ecx = r_edi;
    /* 0056697b: call 0x5680fc */ r_esp -= 4; W32(r_esp, 0x566980u); f_005680fc();
    /* 00566980: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00566985: push dword ptr [edi + 0x534] */ { u32 v = R32((u32)(r_edi+0x534u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056698b: push dword ptr [edi + 0x530] */ { u32 v = R32((u32)(r_edi+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566991: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x566996u); f_007a8c74();
    /* 00566996: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566999: mov dword ptr [edi + 0x530], eax */ W32((u32)(r_edi+0x530u), r_eax);
    /* 0056699f: mov ecx, eax */ r_ecx = r_eax;
    /* 005669a1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5669a6u); f_0082dcbc();
    /* 005669a6: fld dword ptr [0x925f44] */ FPUSH(R_F32((u32)(0x925f44u)));
    /* 005669ac: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005669ae: fadd dword ptr [edi + 0x554] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x554u));
    /* 005669b4: mov ecx, dword ptr [edi + 0x530] */ r_ecx = R32((u32)(r_edi+0x530u));
    /* 005669ba: fstp dword ptr [edi + 0x39c] */ W_F32((u32)(r_edi+0x39cu), ST(0)); FPOP();
    /* 005669c0: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5669c5u); f_0082ddd8();
    /* 005669c5: fld dword ptr [0x925f44] */ FPUSH(R_F32((u32)(0x925f44u)));
    /* 005669cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005669cd: fadd dword ptr [edi + 0x55c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x55cu));
    /* 005669d3: fstp dword ptr [edi + 0x3a4] */ W_F32((u32)(r_edi+0x3a4u), ST(0)); FPOP();
    /* 005669d9: mov ecx, edi */ r_ecx = r_edi;
    /* 005669db: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5669e0u); f_00521410();
    /* 005669e0: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005669e5: mov ecx, edi */ r_ecx = r_edi;
    /* 005669e7: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x5669ecu); f_005675fc();
    /* 005669ec: push dword ptr [edi + 0x4a0] */ { u32 v = R32((u32)(r_edi+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005669f2: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 005669f7: fld dword ptr [edi + 0x4a0] */ FPUSH(R_F32((u32)(r_edi+0x4a0u)));
    /* 005669fd: fmul dword ptr [0x925f40] */ ST(0) = ST(0) * R_F32((u32)(0x925f40u));
    /* 00566a03: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 00566a09: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a0b: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x566a10u); f_00521528();
    /* 00566a10: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a12: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x566a17u); f_00564780();
    /* 00566a17: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00566a19: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a1b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x566a21u); call_ind(t); }
    /* 00566a21: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a23: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x566a28u); f_007b7e9c();
    /* 00566a28: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566a2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566a2c: ret 4 */ FN_RET(0x00566930); r_esp += 8; return;
L_00566a2f:; BB(0x00566a2f);
    /* 00566a2f: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00566a35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566a37: je 0x566a61 */ if (fZ) goto L_00566a61;
L_00566a39:; BB(0x00566a39);
    /* 00566a39: mov eax, dword ptr [edi + 0x520] */ r_eax = R32((u32)(r_edi+0x520u));
    /* 00566a3f: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00566a44: jg 0x566a61 */ if ((!fZ&&fS==fO)) goto L_00566a61;
L_00566a46:; BB(0x00566a46);
    /* 00566a46: fcomp dword ptr [edi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3b4u))); FPOP();
    /* 00566a4c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00566a4e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00566a4f: jbe 0x566a6c */ if ((fC||fZ)) goto L_00566a6c;
L_00566a51:; BB(0x00566a51);
    /* 00566a51: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00566a53: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a55: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x566a5au); f_0051f62c();
    /* 00566a5a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566a5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566a5e: ret 4 */ FN_RET(0x00566930); r_esp += 8; return;
L_00566a61:; BB(0x00566a61);
    /* 00566a61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566a63: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00566a65: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a67: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x566a6cu); f_0051f62c();
L_00566a6c:; BB(0x00566a6c);
    /* 00566a6c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566a6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566a70: ret 4 */ FN_RET(0x00566930); r_esp += 8; return;
L_00566a73:; BB(0x00566a73);
    /* 00566a73: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566a75: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00566a77: mov eax, 1 */ r_eax = 0x1u;
    /* 00566a7c: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00566a83: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a85: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x566a8au); f_0051f664();
    /* 00566a8a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00566a8c: mov ecx, edi */ r_ecx = r_edi;
    /* 00566a8e: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x566a94u); call_ind(t); }
    /* 00566a94: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00566a97: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 00566a9a: mov dword ptr [edi + 0x49c], 0x3fcccccd */ W32((u32)(r_edi+0x49cu), 0x3fcccccdu);
    /* 00566aa4: mov dword ptr [edi + 0x554], edx */ W32((u32)(r_edi+0x554u), r_edx);
    /* 00566aaa: mov dword ptr [edi + 0x520], 0 */ W32((u32)(r_edi+0x520u), 0x0u);
    /* 00566ab4: mov dword ptr [edi + 0x558], eax */ W32((u32)(r_edi+0x558u), r_eax);
    /* 00566aba: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00566abd: mov dword ptr [edi + 0x55c], eax */ W32((u32)(r_edi+0x55cu), r_eax);
    /* 00566ac3: push 0x3fcccccd */ { u32 v = 0x3fcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00566ac8: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00566acd: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x566ad2u); f_00782a34();
    /* 00566ad2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566ad4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566ad7: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 00566ada: mov dword ptr [edi + 0x534], eax */ W32((u32)(r_edi+0x534u), r_eax);
    /* 00566ae0: mov ecx, edi */ r_ecx = r_edi;
    /* 00566ae2: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x566ae7u); f_00520f04();
    /* 00566ae7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566ae9: je 0x566b55 */ if (fZ) goto L_00566b55;
L_00566aeb:; BB(0x00566aeb);
    /* 00566aeb: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00566aee: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x566af3u); f_0082dcbc();
    /* 00566af3: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00566af6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00566af9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x566afeu); f_0082ddd8();
    /* 00566afe: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00566b04: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00566b07: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 00566b0a: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00566b0d: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00566b10: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00566b12: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00566b16: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00566b1a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00566b1e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00566b21: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00566b25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566b27: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x566b2cu); f_007829cc();
    /* 00566b2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566b31: je 0x566b44 */ if (fZ) goto L_00566b44;
L_00566b33:; BB(0x00566b33);
    /* 00566b33: mov dword ptr [edi + 0x530], 0x5000 */ W32((u32)(r_edi+0x530u), 0x5000u);
    /* 00566b3d: mov eax, 0x5000 */ r_eax = 0x5000u;
    /* 00566b42: jmp 0x566b87 */ goto L_00566b87;
L_00566b44:; BB(0x00566b44);
    /* 00566b44: mov dword ptr [edi + 0x530], 0xffffb000 */ W32((u32)(r_edi+0x530u), 0xffffb000u);
    /* 00566b4e: mov eax, 0xffffb000 */ r_eax = 0xffffb000u;
    /* 00566b53: jmp 0x566b87 */ goto L_00566b87;
L_00566b55:; BB(0x00566b55);
    /* 00566b55: mov ecx, edi */ r_ecx = r_edi;
    /* 00566b57: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x566b5cu); f_007751b0();
    /* 00566b5c: fcomp dword ptr [0x925f48] */ fx_compare(ST(0), R_F32((u32)(0x925f48u))); FPOP();
    /* 00566b62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00566b64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00566b65: jae 0x566b78 */ if (!fC) goto L_00566b78;
L_00566b67:; BB(0x00566b67);
    /* 00566b67: mov dword ptr [edi + 0x530], 0x5000 */ W32((u32)(r_edi+0x530u), 0x5000u);
    /* 00566b71: mov eax, 0x5000 */ r_eax = 0x5000u;
    /* 00566b76: jmp 0x566b87 */ goto L_00566b87;
L_00566b78:; BB(0x00566b78);
    /* 00566b78: mov dword ptr [edi + 0x530], 0xffffb000 */ W32((u32)(r_edi+0x530u), 0xffffb000u);
    /* 00566b82: mov eax, 0xffffb000 */ r_eax = 0xffffb000u;
L_00566b87:; BB(0x00566b87);
    /* 00566b87: add eax, dword ptr [edi + 0x534] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x534u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00566b8d: mov dword ptr [edi + 0x530], eax */ W32((u32)(r_edi+0x530u), r_eax);
    /* 00566b93: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566b96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00566b97: ret 4 */ FN_RET(0x00566930); r_esp += 8; return;
}

void f_00566b9c(void) /* sub_566B9C */
{
    FN_ENTER(0x00566b9c);
    /* 00566b9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566b9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00566b9f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00566ba3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566ba6: je 0x566df5 */ if (fZ) goto L_00566df5;
L_00566bac:; BB(0x00566bac);
    /* 00566bac: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566baf: je 0x566ddd */ if (fZ) goto L_00566ddd;
L_00566bb5:; BB(0x00566bb5);
    /* 00566bb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00566bb7: jne 0x566df1 */ if (!fZ) goto L_00566df1;
L_00566bbd:; BB(0x00566bbd);
    /* 00566bbd: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00566bc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566bc5: jne 0x566dc7 */ if (!fZ) goto L_00566dc7;
L_00566bcb:; BB(0x00566bcb);
    /* 00566bcb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566bcd: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x566bd2u); f_007aa094();
    /* 00566bd2: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00566bd8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00566bda: je 0x566be6 */ if (fZ) goto L_00566be6;
L_00566bdc:; BB(0x00566bdc);
    /* 00566bdc: mov dword ptr [ebp + 0x520], 1 */ W32((u32)(r_ebp+0x520u), 0x1u);
L_00566be6:; BB(0x00566be6);
    /* 00566be6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566be8: call 0x565e7c */ r_esp -= 4; W32(r_esp, 0x566bedu); f_00565e7c();
    /* 00566bed: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566bf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566bf4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x566bf9u); f_007aaa30();
    /* 00566bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566bfb: je 0x566c1c */ if (fZ) goto L_00566c1c;
L_00566bfd:; BB(0x00566bfd);
    /* 00566bfd: push 0x235 */ { u32 v = 0x235u; r_esp -= 4; W32(r_esp, v); }
    /* 00566c02: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566c04: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x566c09u); f_007879b8();
    /* 00566c09: mov ecx, eax */ r_ecx = r_eax;
    /* 00566c0b: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00566c0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00566c10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566c13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c14: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x566c19u); f_00814298();
    /* 00566c19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566c1c:; BB(0x00566c1c);
    /* 00566c1c: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566c21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566c23: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x566c28u); f_007aaa30();
    /* 00566c28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566c2a: je 0x566c4b */ if (fZ) goto L_00566c4b;
L_00566c2c:; BB(0x00566c2c);
    /* 00566c2c: push 0x236 */ { u32 v = 0x236u; r_esp -= 4; W32(r_esp, v); }
    /* 00566c31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566c33: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x566c38u); f_007879b8();
    /* 00566c38: mov ecx, eax */ r_ecx = r_eax;
    /* 00566c3a: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00566c3d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00566c3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566c42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00566c43: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x566c48u); f_00814298();
    /* 00566c48: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00566c4b:; BB(0x00566c4b);
    /* 00566c4b: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566c50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566c52: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x566c57u); f_007aaa30();
    /* 00566c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566c59: jne 0x566c66 */ if (!fZ) goto L_00566c66;
L_00566c5b:; BB(0x00566c5b);
    /* 00566c5b: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
    /* 00566c61: jmp 0x566d2f */ goto L_00566d2f;
L_00566c66:; BB(0x00566c66);
    /* 00566c66: mov dword ptr [ebp + 0x56c], 0 */ W32((u32)(r_ebp+0x56cu), 0x0u);
    /* 00566c70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566c72: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x566c77u); f_0052126c();
    /* 00566c77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566c79: jne 0x566c86 */ if (!fZ) goto L_00566c86;
L_00566c7b:; BB(0x00566c7b);
    /* 00566c7b: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
    /* 00566c81: jmp 0x566d2f */ goto L_00566d2f;
L_00566c86:; BB(0x00566c86);
    /* 00566c86: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566c8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566c8c: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 00566c92: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00566c94: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x566c97u); call_ind(t); }
    /* 00566c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566c99: jne 0x566ca6 */ if (!fZ) goto L_00566ca6;
L_00566c9b:; BB(0x00566c9b);
    /* 00566c9b: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
    /* 00566ca1: jmp 0x566d2f */ goto L_00566d2f;
L_00566ca6:; BB(0x00566ca6);
    /* 00566ca6: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566cab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566cac: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 00566cb2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00566cb4: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x566cb7u); call_ind(t); }
    /* 00566cb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566cb9: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566cbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566cbf: mov ecx, dword ptr [ebp + 0x398] */ r_ecx = R32((u32)(r_ebp+0x398u));
    /* 00566cc5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00566cc7: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x566ccau); call_ind(t); }
    /* 00566cca: mov dword ptr [ebp + 0x56c], 1 */ W32((u32)(r_ebp+0x56cu), 0x1u);
    /* 00566cd4: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x566cd9u); f_00520e6c();
    /* 00566cd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566cdb: jne 0x566ce5 */ if (!fZ) goto L_00566ce5;
L_00566cdd:; BB(0x00566cdd);
    /* 00566cdd: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
    /* 00566ce3: jmp 0x566d2f */ goto L_00566d2f;
L_00566ce5:; BB(0x00566ce5);
    /* 00566ce5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566ce7: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x566cecu); f_007751b0();
    /* 00566cec: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
    /* 00566cf2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566cf4: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00566cf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00566cf8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00566cf9: ja 0x566d2f */ if ((!fC&&!fZ)) goto L_00566d2f;
L_00566cfb:; BB(0x00566cfb);
    /* 00566cfb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566cfd: mov eax, dword ptr [ebp + 0x46c] */ r_eax = R32((u32)(r_ebp+0x46cu));
    /* 00566d03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566d05: je 0x566d1c */ if (fZ) goto L_00566d1c;
L_00566d07:; BB(0x00566d07);
    /* 00566d07: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566d0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566d0f: call 0x51fec4 */ r_esp -= 4; W32(r_esp, 0x566d14u); f_0051fec4();
    /* 00566d14: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
    /* 00566d1a: jmp 0x566d2f */ goto L_00566d2f;
L_00566d1c:; BB(0x00566d1c);
    /* 00566d1c: push dword ptr [ebp + 0x398] */ { u32 v = R32((u32)(r_ebp+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566d22: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566d24: call 0x51ff00 */ r_esp -= 4; W32(r_esp, 0x566d29u); f_0051ff00();
    /* 00566d29: fld dword ptr [0x925f28] */ FPUSH(R_F32((u32)(0x925f28u)));
L_00566d2f:; BB(0x00566d2f);
    /* 00566d2f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00566d30: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00566d33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566d35: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x566d3au); f_005675fc();
    /* 00566d3a: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00566d3f: push dword ptr [ebp + 0x530] */ { u32 v = R32((u32)(r_ebp+0x530u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566d45: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566d48: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x566d4du); f_007a8c74();
    /* 00566d4d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566d50: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00566d53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00566d54: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00566d57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566d59: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x566d5eu); f_00564800();
    /* 00566d5e: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00566d64: fcomp dword ptr [0x925f20] */ fx_compare(ST(0), R_F32((u32)(0x925f20u))); FPOP();
    /* 00566d6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00566d6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00566d6d: jbe 0x566dae */ if ((fC||fZ)) goto L_00566dae;
L_00566d6f:; BB(0x00566d6f);
    /* 00566d6f: mov eax, dword ptr [ebp + 0x56c] */ r_eax = R32((u32)(r_ebp+0x56cu));
    /* 00566d75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566d77: jne 0x566dc7 */ if (!fZ) goto L_00566dc7;
L_00566d79:; BB(0x00566d79);
    /* 00566d79: fld dword ptr [ebp + 0x4a0] */ FPUSH(R_F32((u32)(r_ebp+0x4a0u)));
    /* 00566d7f: fmul dword ptr [0x925f1c] */ ST(0) = ST(0) * R_F32((u32)(0x925f1cu));
    /* 00566d85: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 00566d8b: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 00566d91: fst dword ptr [ebp + 0x4a0] */ W_F32((u32)(r_ebp+0x4a0u), ST(0));
    /* 00566d97: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00566d9a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00566d9e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566da0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00566da3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00566da7: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x566dacu); f_005207c4();
    /* 00566dac: jmp 0x566dc7 */ goto L_00566dc7;
L_00566dae:; BB(0x00566dae);
    /* 00566dae: push dword ptr [ebp + 0x4a0] */ { u32 v = R32((u32)(r_ebp+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566db4: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566dba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566dbc: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566dc2: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x566dc7u); f_005207c4();
L_00566dc7:; BB(0x00566dc7);
    /* 00566dc7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00566dca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566dcc: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x566dd2u); call_ind(t); }
    /* 00566dd2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566dd4: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x566dd9u); f_007b7e9c();
    /* 00566dd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566dda: ret 4 */ FN_RET(0x00566b9c); r_esp += 8; return;
L_00566ddd:; BB(0x00566ddd);
    /* 00566ddd: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00566de3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00566de6: jne 0x566df1 */ if (!fZ) goto L_00566df1;
L_00566de8:; BB(0x00566de8);
    /* 00566de8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00566dea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566dec: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x566df1u); f_0051f62c();
L_00566df1:; BB(0x00566df1);
    /* 00566df1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566df2: ret 4 */ FN_RET(0x00566b9c); r_esp += 8; return;
L_00566df5:; BB(0x00566df5);
    /* 00566df5: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00566df7: mov eax, 0xa */ r_eax = 0xau;
    /* 00566dfc: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00566e03: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566e05: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x566e0au); f_0051f664();
    /* 00566e0a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00566e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566e0f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x566e15u); call_ind(t); }
    /* 00566e15: mov eax, dword ptr [ebp + 0x4b4] */ r_eax = R32((u32)(r_ebp+0x4b4u));
    /* 00566e1b: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00566e1e: mov dword ptr [ebp + 0x4b4], eax */ W32((u32)(r_ebp+0x4b4u), r_eax);
    /* 00566e24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00566e26: mov dword ptr [ebp + 0x520], edx */ W32((u32)(r_ebp+0x520u), r_edx);
    /* 00566e2c: mov dword ptr [ebp + 0x524], edx */ W32((u32)(r_ebp+0x524u), r_edx);
    /* 00566e32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00566e34: call 0x566e88 */ r_esp -= 4; W32(r_esp, 0x566e39u); f_00566e88();
    /* 00566e39: fld dword ptr [0x925f18] */ FPUSH(R_F32((u32)(0x925f18u)));
    /* 00566e3f: fld dword ptr [0x925f24] */ FPUSH(R_F32((u32)(0x925f24u)));
    /* 00566e45: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00566e4b: mov dword ptr [ebp + 0x530], eax */ W32((u32)(r_ebp+0x530u), r_eax);
    /* 00566e51: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00566e53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00566e55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00566e57: mov dword ptr [ebp + 0x534], edx */ W32((u32)(r_ebp+0x534u), r_edx);
    /* 00566e5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00566e5e: mov dword ptr [ebp + 0x56c], edx */ W32((u32)(r_ebp+0x56cu), r_edx);
    /* 00566e64: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00566e66: jb 0x566e6a */ if (fC) goto L_00566e6a;
L_00566e68:; BB(0x00566e68);
    /* 00566e68: fst st(2) */ ST(2) = ST(0);
L_00566e6a:; BB(0x00566e6a);
    /* 00566e6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00566e6c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566e6e: fst dword ptr [ebp + 0x3b4] */ W_F32((u32)(r_ebp+0x3b4u), ST(0));
    /* 00566e74: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00566e76: fst dword ptr [ebp + 0x49c] */ W_F32((u32)(r_ebp+0x49cu), ST(0));
    /* 00566e7c: fstp dword ptr [ebp + 0x4a0] */ W_F32((u32)(r_ebp+0x4a0u), ST(0)); FPOP();
    /* 00566e82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00566e83: ret 4 */ FN_RET(0x00566b9c); r_esp += 8; return;
}

void f_00566e88(void) /* sub_566E88 */
{
    FN_ENTER(0x00566e88);
    /* 00566e88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00566e89: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566e8c: mov esi, ecx */ r_esi = r_ecx;
    /* 00566e8e: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00566e94: mov ecx, esi */ r_ecx = r_esi;
    /* 00566e96: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x566e9bu); f_005212c8();
    /* 00566e9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566e9d: je 0x566f54 */ if (fZ) goto L_00566f54;
L_00566ea3:; BB(0x00566ea3);
    /* 00566ea3: mov ecx, esi */ r_ecx = r_esi;
    /* 00566ea5: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x566eaau); f_005213d8();
    /* 00566eaa: mov ecx, esi */ r_ecx = r_esi;
    /* 00566eac: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x566eb1u); f_00521410();
    /* 00566eb1: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00566eb5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00566eb7: je 0x566ec1 */ if (fZ) goto L_00566ec1;
L_00566eb9:; BB(0x00566eb9);
    /* 00566eb9: fld dword ptr [0x925f0c] */ FPUSH(R_F32((u32)(0x925f0cu)));
    /* 00566ebf: jmp 0x566ec7 */ goto L_00566ec7;
L_00566ec1:; BB(0x00566ec1);
    /* 00566ec1: fld dword ptr [0x925f10] */ FPUSH(R_F32((u32)(0x925f10u)));
L_00566ec7:; BB(0x00566ec7);
    /* 00566ec7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00566ec9: fld dword ptr [0x925f04] */ FPUSH(R_F32((u32)(0x925f04u)));
    /* 00566ecf: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00566ed5: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00566edb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00566edd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00566edf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566ee1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00566ee3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566ee5: fsubr dword ptr [esi + 0x3a4] */ ST(0) = R_F32((u32)(r_esi+0x3a4u)) - ST(0);
    /* 00566eeb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00566eed: fadd dword ptr [esi + 0x39c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x39cu));
    /* 00566ef3: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00566ef9: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00566efb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00566efd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00566eff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566f01: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 00566f07: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00566f09: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 00566f0f: mov ecx, esi */ r_ecx = r_esi;
    /* 00566f11: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x566f16u); f_00521410();
    /* 00566f16: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00566f1c: fld dword ptr [esi + 0x3b0] */ FPUSH(R_F32((u32)(r_esi+0x3b0u)));
    /* 00566f22: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00566f24: fmul qword ptr [0x925d18] */ ST(0) = ST(0) * R_F64((u32)(0x925d18u));
    /* 00566f2a: fdiv qword ptr [0x925d10] */ ST(0) = ST(0) / R_F64((u32)(0x925d10u));
    /* 00566f30: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00566f33: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00566f37: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00566f3c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00566f40: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00566f44: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00566f48: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00566f4b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00566f4f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566f52: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00566f53: ret  */ FN_RET(0x00566e88); r_esp += 4; return;
L_00566f54:; BB(0x00566f54);
    /* 00566f54: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00566f57: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x566f5cu); f_0082dcbc();
    /* 00566f5c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00566f5f: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 00566f65: mov dword ptr [esi + 0x3ac], 0 */ W32((u32)(r_esi+0x3acu), 0x0u);
    /* 00566f6f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x566f74u); f_0082ddd8();
    /* 00566f74: fld dword ptr [0x925f08] */ FPUSH(R_F32((u32)(0x925f08u)));
    /* 00566f7a: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00566f7d: fld dword ptr [esi + 0x3a8] */ FPUSH(R_F32((u32)(r_esi+0x3a8u)));
    /* 00566f83: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00566f85: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 00566f88: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00566f8a: fst dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0));
    /* 00566f90: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00566f92: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00566f95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00566f97: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 00566f9d: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 00566fa3: mov dword ptr [esi + 0x3b4], 0x41f00000 */ W32((u32)(r_esi+0x3b4u), 0x41f00000u);
    /* 00566fad: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 00566fb3: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 00566fb6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00566fb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00566fba: ret  */ FN_RET(0x00566e88); r_esp += 4; return;
}

void f_00566fbc(void) /* sub_566FBC */
{
    FN_ENTER(0x00566fbc);
    /* 00566fbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00566fbd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00566fbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00566fbf: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00566fc2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00566fc4: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 00566fc8: lea edi, [ebx + 0x548] */ r_edi = (u32)(r_ebx+0x548u);
    /* 00566fce: lea ebp, [ebx + 0x554] */ r_ebp = (u32)(r_ebx+0x554u);
    /* 00566fd4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566fd7: je 0x567552 */ if (fZ) goto L_00567552;
L_00566fdd:; BB(0x00566fdd);
    /* 00566fdd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566fe0: je 0x567356 */ if (fZ) goto L_00567356;
L_00566fe6:; BB(0x00566fe6);
    /* 00566fe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566fe8: jne 0x56733d */ if (!fZ) goto L_0056733d;
L_00566fee:; BB(0x00566fee);
    /* 00566fee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566ff0: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x566ff5u); f_007aa094();
    /* 00566ff5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00566ff7: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x566ffcu); f_00521238();
    /* 00566ffc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00566ffe: je 0x5674ba */ if (fZ) goto L_005674ba;
L_00567004:; BB(0x00567004);
    /* 00567004: mov eax, dword ptr [ebx + 0x528] */ r_eax = R32((u32)(r_ebx+0x528u));
    /* 0056700a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056700c: jne 0x5670d1 */ if (!fZ) goto L_005670d1;
L_00567012:; BB(0x00567012);
    /* 00567012: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00567018: mov dword ptr [ebx + 0x528], 1 */ W32((u32)(r_ebx+0x528u), 0x1u);
    /* 00567022: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00567025: mov dword ptr [ebx + 0x548], eax */ W32((u32)(r_ebx+0x548u), r_eax);
    /* 0056702b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056702c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056702d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00567030: mov dword ptr [ebx + 0x54c], edx */ W32((u32)(r_ebx+0x54cu), r_edx);
    /* 00567036: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 00567039: mov dword ptr [ebx + 0x550], eax */ W32((u32)(r_ebx+0x550u), r_eax);
    /* 0056703f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567041: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x567046u); f_005b0844();
    /* 00567046: fstp dword ptr [ebx + 0x538] */ W_F32((u32)(r_ebx+0x538u), ST(0)); FPOP();
    /* 0056704c: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567051: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567053: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567058: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x56705du); f_00520c08();
    /* 0056705d: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00567060: fstp dword ptr [ebx + 0x53c] */ W_F32((u32)(r_ebx+0x53cu), ST(0)); FPOP();
    /* 00567066: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x56706bu); f_0082dcbc();
    /* 0056706b: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0056706e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00567071: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00567079: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x56707eu); f_0082ddd8();
    /* 0056707e: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 00567084: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00567087: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 0056708a: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0056708d: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 00567090: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00567092: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00567096: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0056709a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0056709e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005670a1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005670a9: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005670ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005670ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005670af: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x5670b4u); f_007829cc();
    /* 005670b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005670b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005670b9: je 0x5670c7 */ if (fZ) goto L_005670c7;
L_005670bb:; BB(0x005670bb);
    /* 005670bb: mov dword ptr [ebx + 0x530], 0xffffffff */ W32((u32)(r_ebx+0x530u), 0xffffffffu);
    /* 005670c5: jmp 0x5670d1 */ goto L_005670d1;
L_005670c7:; BB(0x005670c7);
    /* 005670c7: mov dword ptr [ebx + 0x530], 1 */ W32((u32)(r_ebx+0x530u), 0x1u);
L_005670d1:; BB(0x005670d1);
    /* 005670d1: add dword ptr [ebx + 0x520], 1 */ { u32 ad = (u32)(r_ebx+0x520u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005670d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005670da: call 0x5680fc */ r_esp -= 4; W32(r_esp, 0x5670dfu); f_005680fc();
    /* 005670df: mov eax, dword ptr [ebx + 0x52c] */ r_eax = R32((u32)(r_ebx+0x52cu));
    /* 005670e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005670e7: jle 0x5674e9 */ if ((fZ||fS!=fO)) goto L_005674e9;
L_005670ed:; BB(0x005670ed);
    /* 005670ed: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005670f0: mov dword ptr [ebx + 0x52c], eax */ W32((u32)(r_ebx+0x52cu), r_eax);
    /* 005670f6: mov eax, dword ptr [ebx + 0x530] */ r_eax = R32((u32)(r_ebx+0x530u));
    /* 005670fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005670fe: jle 0x5674d2 */ if ((fZ||fS!=fO)) goto L_005674d2;
L_00567104:; BB(0x00567104);
    /* 00567104: fld dword ptr [ebx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+0x538u)));
    /* 0056710a: fsub dword ptr [0x925ee4] */ ST(0) = ST(0) - R_F32((u32)(0x925ee4u));
    /* 00567110: fstp dword ptr [ebx + 0x538] */ W_F32((u32)(r_ebx+0x538u), ST(0)); FPOP();
L_00567116:; BB(0x00567116);
    /* 00567116: mov eax, dword ptr [ebx + 0x528] */ r_eax = R32((u32)(r_ebx+0x528u));
    /* 0056711c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056711f: jne 0x5671e0 */ if (!fZ) goto L_005671e0;
L_00567125:; BB(0x00567125);
    /* 00567125: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056712a: mov dword ptr [ebx + 0x49c], 0x3f333333 */ W32((u32)(r_ebx+0x49cu), 0x3f333333u);
    /* 00567134: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567136: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x56713bu); f_005675fc();
    /* 0056713b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056713c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056713d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056713f: call 0x5b0844 */ r_esp -= 4; W32(r_esp, 0x567144u); f_005b0844();
    /* 00567144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567146: fld dword ptr [ebx + 0x55c] */ FPUSH(R_F32((u32)(r_ebx+0x55cu)));
    /* 0056714c: fld dword ptr [ebx + 0x554] */ FPUSH(R_F32((u32)(r_ebx+0x554u)));
    /* 00567152: mov eax, dword ptr [ebx + 0x530] */ r_eax = R32((u32)(r_ebx+0x530u));
    /* 00567158: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0056715a: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0056715e: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00567162: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00567164: jl 0x5674c3 */ if ((fS!=fO)) goto L_005674c3;
L_0056716a:; BB(0x0056716a);
    /* 0056716a: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0056716e: fchs  */ ST(0) = -ST(0);
    /* 00567170: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_00567174:; BB(0x00567174);
    /* 00567174: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00567176: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567178: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x56717du); f_00520bb8();
    /* 0056717d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056717f: je 0x56718a */ if (fZ) goto L_0056718a;
L_00567181:; BB(0x00567181);
    /* 00567181: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567183: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x567188u); f_00520bdc();
    /* 00567188: jmp 0x567191 */ goto L_00567191;
L_0056718a:; BB(0x0056718a);
    /* 0056718a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056718c: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x567191u); f_00520be8();
L_00567191:; BB(0x00567191);
    /* 00567191: mov eax, dword ptr [ebx + 0x4a0] */ r_eax = R32((u32)(r_ebx+0x4a0u));
    /* 00567197: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056719a: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0056719e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005671a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005671a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005671a7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005671ab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005671af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005671b1: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x5671b6u); f_005207c4();
    /* 005671b6: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005671b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005671ba: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x5671bfu); f_00520bb8();
    /* 005671bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005671c1: je 0x567298 */ if (fZ) goto L_00567298;
L_005671c7:; BB(0x005671c7);
    /* 005671c7: mov dword ptr [ebx + 0x524], 0 */ W32((u32)(r_ebx+0x524u), 0x0u);
    /* 005671d1: mov dword ptr [ebx + 0x528], 2 */ W32((u32)(r_ebx+0x528u), 0x2u);
    /* 005671db: jmp 0x567298 */ goto L_00567298;
L_005671e0:; BB(0x005671e0);
    /* 005671e0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005671e3: jne 0x567298 */ if (!fZ) goto L_00567298;
L_005671e9:; BB(0x005671e9);
    /* 005671e9: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 005671ee: mov dword ptr [ebx + 0x49c], 0x3f000000 */ W32((u32)(r_ebx+0x49cu), 0x3f000000u);
    /* 005671f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005671fa: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x5671ffu); f_005675fc();
    /* 005671ff: mov eax, dword ptr [ebx + 0x524] */ r_eax = R32((u32)(r_ebx+0x524u));
    /* 00567205: mov ebp, dword ptr [ebx + 0x60] */ r_ebp = R32((u32)(r_ebx+0x60u));
    /* 00567208: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056720b: mov dword ptr [ebx + 0x524], eax */ W32((u32)(r_ebx+0x524u), r_eax);
    /* 00567211: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00567214: jge 0x567221 */ if ((fS==fO)) goto L_00567221;
L_00567216:; BB(0x00567216);
    /* 00567216: mov eax, dword ptr [ebx + 0x530] */ r_eax = R32((u32)(r_ebx+0x530u));
    /* 0056721c: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0056721f: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00567221:; BB(0x00567221);
    /* 00567221: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567223: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x567228u); f_0082dcbc();
    /* 00567228: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0056722c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0056722e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x567233u); f_0082ddd8();
    /* 00567233: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00567237: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00567239: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056723b: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x567240u); f_00520bb8();
    /* 00567240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567242: je 0x567257 */ if (fZ) goto L_00567257;
L_00567244:; BB(0x00567244);
    /* 00567244: mov dword ptr [ebx + 0x524], 0 */ W32((u32)(r_ebx+0x524u), 0x0u);
    /* 0056724e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567250: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x567255u); f_00520bdc();
    /* 00567255: jmp 0x56725e */ goto L_0056725e;
L_00567257:; BB(0x00567257);
    /* 00567257: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567259: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x56725eu); f_00520be8();
L_0056725e:; BB(0x0056725e);
    /* 0056725e: mov eax, dword ptr [ebx + 0x4a0] */ r_eax = R32((u32)(r_ebx+0x4a0u));
    /* 00567264: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567267: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0056726b: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0056726f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567271: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00567274: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00567278: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0056727c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056727e: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x567283u); f_005207c4();
    /* 00567283: mov eax, dword ptr [ebx + 0x524] */ r_eax = R32((u32)(r_ebx+0x524u));
    /* 00567289: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056728c: jl 0x567298 */ if ((fS!=fO)) goto L_00567298;
L_0056728e:; BB(0x0056728e);
    /* 0056728e: mov dword ptr [ebx + 0x528], 0 */ W32((u32)(r_ebx+0x528u), 0x0u);
L_00567298:; BB(0x00567298);
    /* 00567298: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0056729b: fsub dword ptr [ebx + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x44u));
    /* 0056729e: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005672a1: fsub dword ptr [ebx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x4cu));
    /* 005672a4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005672a6: fmul qword ptr [0x925d08] */ ST(0) = ST(0) * R_F64((u32)(0x925d08u));
    /* 005672ac: fdiv qword ptr [0x925d00] */ ST(0) = ST(0) / R_F64((u32)(0x925d00u));
    /* 005672b2: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005672b6: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005672bb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005672c0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005672c4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005672c8: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005672cc: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005672d0: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005672d4: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 005672d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005672da: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005672dd: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5672e2u); f_007a8c74();
    /* 005672e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005672e5: fld dword ptr [ebx + 0x4a0] */ FPUSH(R_F32((u32)(r_ebx+0x4a0u)));
    /* 005672eb: fmul dword ptr [0x925f40] */ ST(0) = ST(0) * R_F32((u32)(0x925f40u));
    /* 005672f1: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 005672f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005672fa: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005672fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005672ff: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x567304u); f_00564780();
    /* 00567304: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00567306: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567308: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x56730eu); call_ind(t); }
    /* 0056730e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567310: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x567315u); f_007b7e9c();
    /* 00567315: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 0056731b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0056731e: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567324: je 0x5674ba */ if (fZ) goto L_005674ba;
L_0056732a:; BB(0x0056732a);
    /* 0056732a: mov dword ptr [ebx + 0x52c], 0x14 */ W32((u32)(r_ebx+0x52cu), 0x14u);
    /* 00567334: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567337: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00567338: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567339: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056733a: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_0056733d:; BB(0x0056733d);
    /* 0056733d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567340: jne 0x5674ba */ if (!fZ) goto L_005674ba;
L_00567346:; BB(0x00567346);
    /* 00567346: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567348: call 0x520be8 */ r_esp -= 4; W32(r_esp, 0x56734du); f_00520be8();
    /* 0056734d: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567350: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00567351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567352: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00567353: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_00567356:; BB(0x00567356);
    /* 00567356: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 0056735c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056735e: je 0x567540 */ if (fZ) goto L_00567540;
L_00567364:; BB(0x00567364);
    /* 00567364: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 0056736a: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056736f: jg 0x567471 */ if ((!fZ&&fS==fO)) goto L_00567471;
L_00567375:; BB(0x00567375);
    /* 00567375: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00567378: jle 0x5674ba */ if ((fZ||fS!=fO)) goto L_005674ba;
L_0056737e:; BB(0x0056737e);
    /* 0056737e: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00567381: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 00567384: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00567386: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00567389: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 0056738c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0056738e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567390: fcom dword ptr [0xa73d04] */ fx_compare(ST(0), R_F32((u32)(0xa73d04u))); 
    /* 00567396: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567398: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567399: jae 0x56745f */ if (!fC) goto L_0056745f;
L_0056739f:; BB(0x0056739f);
    /* 0056739f: fcomp dword ptr [0xa73d08] */ fx_compare(ST(0), R_F32((u32)(0xa73d08u))); FPOP();
    /* 005673a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005673a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005673a8: jae 0x5673e0 */ if (!fC) goto L_005673e0;
L_005673aa:; BB(0x005673aa);
    /* 005673aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005673ac: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5673b1u); f_007751b0();
    /* 005673b1: fcomp dword ptr [ebx + 0x4a8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4a8u))); FPOP();
    /* 005673b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005673b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005673ba: jae 0x5673ce */ if (!fC) goto L_005673ce;
L_005673bc:; BB(0x005673bc);
    /* 005673bc: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005673be: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005673c0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5673c5u); f_0051f62c();
    /* 005673c5: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005673c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005673c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005673ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005673cb: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_005673ce:; BB(0x005673ce);
    /* 005673ce: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005673d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005673d2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5673d7u); f_0051f62c();
    /* 005673d7: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005673da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005673db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005673dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005673dd: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_005673e0:; BB(0x005673e0);
    /* 005673e0: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 005673e3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5673e8u); f_0082dcbc();
    /* 005673e8: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005673ec: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005673f2: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005673f5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5673fau); f_0082ddd8();
    /* 005673fa: fmul dword ptr [ebx + 0x55c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x55cu));
    /* 00567400: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00567404: fmul dword ptr [ebx + 0x554] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x554u));
    /* 0056740a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0056740c: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00567410: mov ecx, 0x6aaa */ r_ecx = 0x6aaau;
    /* 00567415: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x56741au); f_0082ddd8();
    /* 0056741a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0056741e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00567420: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567422: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567423: jae 0x5674ba */ if (!fC) goto L_005674ba;
L_00567429:; BB(0x00567429);
    /* 00567429: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056742b: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x567430u); f_007751b0();
    /* 00567430: fcomp dword ptr [ebx + 0x4a8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4a8u))); FPOP();
    /* 00567436: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567438: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567439: jae 0x56744d */ if (!fC) goto L_0056744d;
L_0056743b:; BB(0x0056743b);
    /* 0056743b: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0056743d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056743f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567444u); f_0051f62c();
    /* 00567444: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567447: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00567448: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567449: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056744a: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_0056744d:; BB(0x0056744d);
    /* 0056744d: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0056744f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567451: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567456u); f_0051f62c();
    /* 00567456: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567459: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056745a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056745b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056745c: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_0056745f:; BB(0x0056745f);
    /* 0056745f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567461: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567463: call 0x567668 */ r_esp -= 4; W32(r_esp, 0x567468u); f_00567668();
    /* 00567468: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056746b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056746c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056746d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056746e: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_00567471:; BB(0x00567471);
    /* 00567471: mov dword ptr [ebx + 0x520], 0 */ W32((u32)(r_ebx+0x520u), 0x0u);
    /* 0056747b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056747d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x567482u); f_007751b0();
    /* 00567482: fcomp dword ptr [0x925eec] */ fx_compare(ST(0), R_F32((u32)(0x925eecu))); FPOP();
    /* 00567488: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056748a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056748b: jae 0x5674ba */ if (!fC) goto L_005674ba;
L_0056748d:; BB(0x0056748d);
    /* 0056748d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056748f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x567494u); f_007751b0();
    /* 00567494: fcomp dword ptr [ebx + 0x4a8] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4a8u))); FPOP();
    /* 0056749a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056749c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056749d: jae 0x5674b1 */ if (!fC) goto L_005674b1;
L_0056749f:; BB(0x0056749f);
    /* 0056749f: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 005674a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005674a3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5674a8u); f_0051f62c();
    /* 005674a8: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005674ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005674ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005674ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005674ae: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_005674b1:; BB(0x005674b1);
    /* 005674b1: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005674b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005674b5: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5674bau); f_0051f62c();
L_005674ba:; BB(0x005674ba);
    /* 005674ba: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005674bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005674be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005674bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005674c0: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_005674c3:; BB(0x005674c3);
    /* 005674c3: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005674c7: fchs  */ ST(0) = -ST(0);
    /* 005674c9: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005674cd: jmp 0x567174 */ goto L_00567174;
L_005674d2:; BB(0x005674d2);
    /* 005674d2: fld dword ptr [0x925ee4] */ FPUSH(R_F32((u32)(0x925ee4u)));
    /* 005674d8: fadd dword ptr [ebx + 0x538] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x538u));
    /* 005674de: fstp dword ptr [ebx + 0x538] */ W_F32((u32)(r_ebx+0x538u), ST(0)); FPOP();
    /* 005674e4: jmp 0x567116 */ goto L_00567116;
L_005674e9:; BB(0x005674e9);
    /* 005674e9: fld dword ptr [0x925ee8] */ FPUSH(R_F32((u32)(0x925ee8u)));
    /* 005674ef: fld dword ptr [ebx + 0x538] */ FPUSH(R_F32((u32)(r_ebx+0x538u)));
    /* 005674f5: fld dword ptr [ebx + 0x53c] */ FPUSH(R_F32((u32)(r_ebx+0x53cu)));
    /* 005674fb: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 005674fd: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005674ff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567501: mov edx, dword ptr [ebx + 0x53c] */ r_edx = R32((u32)(r_ebx+0x53cu));
    /* 00567507: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567508: jbe 0x567519 */ if ((fC||fZ)) goto L_00567519;
L_0056750a:; BB(0x0056750a);
    /* 0056750a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056750c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0056750e: fstp dword ptr [ebx + 0x538] */ W_F32((u32)(r_ebx+0x538u), ST(0)); FPOP();
    /* 00567514: jmp 0x567116 */ goto L_00567116;
L_00567519:; BB(0x00567519);
    /* 00567519: fcomp dword ptr [0x925ef4] */ fx_compare(ST(0), R_F32((u32)(0x925ef4u))); FPOP();
    /* 0056751f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567521: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567522: jae 0x567531 */ if (!fC) goto L_00567531;
L_00567524:; BB(0x00567524);
    /* 00567524: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567526: fstp dword ptr [ebx + 0x538] */ W_F32((u32)(r_ebx+0x538u), ST(0)); FPOP();
    /* 0056752c: jmp 0x567116 */ goto L_00567116;
L_00567531:; BB(0x00567531);
    /* 00567531: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00567533: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567535: mov dword ptr [ebx + 0x538], edx */ W32((u32)(r_ebx+0x538u), r_edx);
    /* 0056753b: jmp 0x567116 */ goto L_00567116;
L_00567540:; BB(0x00567540);
    /* 00567540: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00567542: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567544: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567549u); f_0051f62c();
    /* 00567549: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056754c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056754d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056754e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056754f: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
L_00567552:; BB(0x00567552);
    /* 00567552: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00567554: mov eax, 1 */ r_eax = 0x1u;
    /* 00567559: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00567560: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567562: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x567567u); f_0051f664();
    /* 00567567: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00567569: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056756b: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x567571u); call_ind(t); }
    /* 00567571: mov dword ptr [ebx + 0x49c], 0x3f333333 */ W32((u32)(r_ebx+0x49cu), 0x3f333333u);
    /* 0056757b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056757d: mov dword ptr [ebx + 0x520], eax */ W32((u32)(r_ebx+0x520u), r_eax);
    /* 00567583: mov dword ptr [ebx + 0x524], eax */ W32((u32)(r_ebx+0x524u), r_eax);
    /* 00567589: mov dword ptr [ebx + 0x538], 0 */ W32((u32)(r_ebx+0x538u), 0x0u);
    /* 00567593: mov dword ptr [ebx + 0x528], eax */ W32((u32)(r_ebx+0x528u), r_eax);
    /* 00567599: mov dword ptr [ebx + 0x52c], eax */ W32((u32)(r_ebx+0x52cu), r_eax);
    /* 0056759f: mov dword ptr [ebx + 0x530], eax */ W32((u32)(r_ebx+0x530u), r_eax);
    /* 005675a5: mov dword ptr [ebx + 0x53c], 0 */ W32((u32)(r_ebx+0x53cu), 0x0u);
    /* 005675af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005675b1: mov dword ptr [ebx + 0x548], 0 */ W32((u32)(r_ebx+0x548u), 0x0u);
    /* 005675bb: mov dword ptr [ebx + 0x54c], 0 */ W32((u32)(r_ebx+0x54cu), 0x0u);
    /* 005675c5: mov dword ptr [ebx + 0x550], 0 */ W32((u32)(r_ebx+0x550u), 0x0u);
    /* 005675cf: mov dword ptr [ebx + 0x554], 0 */ W32((u32)(r_ebx+0x554u), 0x0u);
    /* 005675d9: mov dword ptr [ebx + 0x558], 0 */ W32((u32)(r_ebx+0x558u), 0x0u);
    /* 005675e3: mov dword ptr [ebx + 0x55c], 0 */ W32((u32)(r_ebx+0x55cu), 0x0u);
    /* 005675ed: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x5675f2u); f_00520bdc();
    /* 005675f2: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005675f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005675f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005675f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005675f8: ret 4 */ FN_RET(0x00566fbc); r_esp += 8; return;
}

