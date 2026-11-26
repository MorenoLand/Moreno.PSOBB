#include "protos.h"

void f_00533078(void) /* sub_533078 */
{
    FN_ENTER(0x00533078);
    /* 00533078: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0053307e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533080: jne 0x53309d */ if (!fZ) goto L_0053309d;
L_00533082:; BB(0x00533082);
    /* 00533082: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00533089: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053308b: je 0x53309d */ if (fZ) goto L_0053309d;
L_0053308d:; BB(0x0053308d);
    /* 0053308d: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 00533097: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0053309d:; BB(0x0053309d);
    /* 0053309d: ret  */ FN_RET(0x00533078); r_esp += 4; return;
}

void f_005330a0(void) /* sub_5330A0 */
{
    FN_ENTER(0x005330a0);
    /* 005330a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005330a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005330a2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005330a5: mov esi, ecx */ r_esi = r_ecx;
    /* 005330a7: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 005330ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005330af: je 0x5331af */ if (fZ) goto L_005331af;
L_005330b5:; BB(0x005330b5);
    /* 005330b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005330b8: jne 0x533200 */ if (!fZ) goto L_00533200;
L_005330be:; BB(0x005330be);
    /* 005330be: mov edi, dword ptr [esi + 0x300] */ r_edi = R32((u32)(r_esi+0x300u));
    /* 005330c4: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005330ca: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005330d0: mov ecx, dword ptr [esi + 0x358] */ r_ecx = R32((u32)(r_esi+0x358u));
    /* 005330d6: mov dword ptr [esi + 0x298], edi */ W32((u32)(r_esi+0x298u), r_edi);
    /* 005330dc: mov dword ptr [esi + 0x29c], edx */ W32((u32)(r_esi+0x29cu), r_edx);
    /* 005330e2: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 005330ec: mov dword ptr [esi + 0x2a0], eax */ W32((u32)(r_esi+0x2a0u), r_eax);
    /* 005330f2: push dword ptr [esi + 0x2ac] */ { u32 v = R32((u32)(r_esi+0x2acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005330f8: push dword ptr [esi + 0x2a8] */ { u32 v = R32((u32)(r_esi+0x2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005330fe: push dword ptr [esi + 0x2a4] */ { u32 v = R32((u32)(r_esi+0x2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533106: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00533107: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053310a: mov ecx, esi */ r_ecx = r_esi;
    /* 0053310c: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x533111u); f_00771f5c();
    /* 00533111: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00533117: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 0053311d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053311e: mov ecx, esi */ r_ecx = r_esi;
    /* 00533120: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533123: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x533128u); f_00771858();
    /* 00533128: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0053312e: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00533134: mov edi, dword ptr [esi + 0x308] */ r_edi = R32((u32)(r_esi+0x308u));
    /* 0053313a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053313d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00533140: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00533146: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00533149: mov ecx, esi */ r_ecx = r_esi;
    /* 0053314b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0053314f: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00533153: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00533157: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 0053315d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00533161: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00533164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533165: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x53316au); f_00771e14();
    /* 0053316a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053316c: jne 0x533175 */ if (!fZ) goto L_00533175;
L_0053316e:; BB(0x0053316e);
    /* 0053316e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00533170: mov ecx, esi */ r_ecx = r_esi;
    /* 00533172: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x533175u); call_ind(t); }
L_00533175:; BB(0x00533175);
    /* 00533175: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00533178: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 0053317b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053317c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053317d: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x533182u); f_0078ea50();
    /* 00533182: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533185: fcomp dword ptr [0x922a20] */ fx_compare(ST(0), R_F32((u32)(0x922a20u))); FPOP();
    /* 0053318b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053318d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053318e: jae 0x533197 */ if (!fC) goto L_00533197;
L_00533190:; BB(0x00533190);
    /* 00533190: mov ecx, esi */ r_ecx = r_esi;
    /* 00533192: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x533197u); f_00533078();
L_00533197:; BB(0x00533197);
    /* 00533197: mov ecx, esi */ r_ecx = r_esi;
    /* 00533199: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x53319eu); f_007aa094();
    /* 0053319e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005331a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005331a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005331a4: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5331a9u); f_00772b44();
    /* 005331a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005331ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005331ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005331ae: ret  */ FN_RET(0x005330a0); r_esp += 4; return;
L_005331af:; BB(0x005331af);
    /* 005331af: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005331b2: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 005331b8: and eax, 0xfffbfeff */ {  u32 a = r_eax; u32 b = 0xfffbfeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005331bd: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005331c3: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005331c6: je 0x5331cf */ if (fZ) goto L_005331cf;
L_005331c8:; BB(0x005331c8);
    /* 005331c8: mov eax, 1 */ r_eax = 0x1u;
    /* 005331cd: jmp 0x5331d4 */ goto L_005331d4;
L_005331cf:; BB(0x005331cf);
    /* 005331cf: mov eax, 6 */ r_eax = 0x6u;
L_005331d4:; BB(0x005331d4);
    /* 005331d4: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 005331d7: mov edi, dword ptr [esi + 0x58] */ r_edi = R32((u32)(r_esi+0x58u));
    /* 005331da: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 005331e4: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005331eb: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 005331ee: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 005331f4: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 005331fa: mov dword ptr [esi + 0x2ac], edi */ W32((u32)(r_esi+0x2acu), r_edi);
L_00533200:; BB(0x00533200);
    /* 00533200: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00533203: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00533204: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533205: ret  */ FN_RET(0x005330a0); r_esp += 4; return;
}

void f_00533208(void) /* sub_533208 */
{
    FN_ENTER(0x00533208);
    /* 00533208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00533209: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053320a: mov edi, ecx */ r_edi = r_ecx;
    /* 0053320c: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 00533212: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533214: je 0x53324a */ if (fZ) goto L_0053324a;
L_00533216:; BB(0x00533216);
    /* 00533216: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533219: je 0x533242 */ if (fZ) goto L_00533242;
L_0053321b:; BB(0x0053321b);
    /* 0053321b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053321e: jne 0x5332db */ if (!fZ) goto L_005332db;
L_00533224:; BB(0x00533224);
    /* 00533224: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0053322a: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0053322d: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00533230: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00533236: and edx, 0xfbffffff */ {  u32 a = r_edx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053323c: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0053323f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533240: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533241: ret  */ FN_RET(0x00533208); r_esp += 4; return;
L_00533242:; BB(0x00533242);
    /* 00533242: lea ebx, [edi + 0x398] */ r_ebx = (u32)(r_edi+0x398u);
    /* 00533248: jmp 0x53329d */ goto L_0053329d;
L_0053324a:; BB(0x0053324a);
    /* 0053324a: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 00533250: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00533253: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00533258: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053325b: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 00533261: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533267: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0053326a: je 0x533270 */ if (fZ) goto L_00533270;
L_0053326c:; BB(0x0053326c);
    /* 0053326c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053326e: jmp 0x533275 */ goto L_00533275;
L_00533270:; BB(0x00533270);
    /* 00533270: mov eax, 5 */ r_eax = 0x5u;
L_00533275:; BB(0x00533275);
    /* 00533275: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0053327c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0053327f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533280: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x533285u); f_00578a20();
    /* 00533285: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00533286: lea ebx, [edi + 0x398] */ r_ebx = (u32)(r_edi+0x398u);
    /* 0053328c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053328e: call 0x512494 */ r_esp -= 4; W32(r_esp, 0x533293u); f_00512494();
    /* 00533293: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
L_0053329d:; BB(0x0053329d);
    /* 0053329d: mov ecx, edi */ r_ecx = r_edi;
    /* 0053329f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5332a4u); f_007aa094();
    /* 005332a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005332a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005332a8: mov ecx, edi */ r_ecx = r_edi;
    /* 005332aa: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5332afu); f_00772b44();
    /* 005332af: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005332b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005332b3: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5332b6u); call_ind(t); }
    /* 005332b6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005332b9: jne 0x5332db */ if (!fZ) goto L_005332db;
L_005332bb:; BB(0x005332bb);
    /* 005332bb: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005332c1: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 005332cb: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005332ce: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005332d4: mov ecx, edi */ r_ecx = r_edi;
    /* 005332d6: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5332dbu); f_00533078();
L_005332db:; BB(0x005332db);
    /* 005332db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005332dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005332dd: ret  */ FN_RET(0x00533208); r_esp += 4; return;
}

void f_005332e0(void) /* sub_5332E0 */
{
    FN_ENTER(0x005332e0);
    /* 005332e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005332e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005332e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005332e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005332e4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005332e7: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005332e9: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 005332ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005332f1: je 0x5332fe */ if (fZ) goto L_005332fe;
L_005332f3:; BB(0x005332f3);
    /* 005332f3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005332f6: jne 0x5334c8 */ if (!fZ) goto L_005334c8;
L_005332fc:; BB(0x005332fc);
    /* 005332fc: jmp 0x533341 */ goto L_00533341;
L_005332fe:; BB(0x005332fe);
    /* 005332fe: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00533301: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00533307: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053330c: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533312: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00533315: je 0x53331e */ if (fZ) goto L_0053331e;
L_00533317:; BB(0x00533317);
    /* 00533317: mov eax, 1 */ r_eax = 0x1u;
    /* 0053331c: jmp 0x533320 */ goto L_00533320;
L_0053331e:; BB(0x0053331e);
    /* 0053331e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00533320:; BB(0x00533320);
    /* 00533320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533322: je 0x53332b */ if (fZ) goto L_0053332b;
L_00533324:; BB(0x00533324);
    /* 00533324: mov eax, 3 */ r_eax = 0x3u;
    /* 00533329: jmp 0x533330 */ goto L_00533330;
L_0053332b:; BB(0x0053332b);
    /* 0053332b: mov eax, 8 */ r_eax = 0x8u;
L_00533330:; BB(0x00533330);
    /* 00533330: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0053333a: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_00533341:; BB(0x00533341);
    /* 00533341: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00533343: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x533348u); f_007aa094();
    /* 00533348: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0053334e: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00533354: mov ebp, dword ptr [ebx + 0x308] */ r_ebp = R32((u32)(r_ebx+0x308u));
    /* 0053335a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053335d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00533360: fadd dword ptr [ebx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30cu));
    /* 00533366: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00533369: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053336b: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 00533375: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00533379: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0053337d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00533381: fadd dword ptr [ebx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x314u));
    /* 00533387: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053338b: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 0053338e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053338f: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x533394u); f_00771e14();
    /* 00533394: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533396: je 0x5333ae */ if (fZ) goto L_005333ae;
L_00533398:; BB(0x00533398);
    /* 00533398: fld dword ptr [0x922a18] */ FPUSH(R_F32((u32)(0x922a18u)));
    /* 0053339e: fld dword ptr [0x922a18] */ FPUSH(R_F32((u32)(0x922a18u)));
    /* 005333a4: fld dword ptr [0x922a18] */ FPUSH(R_F32((u32)(0x922a18u)));
    /* 005333aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005333ac: jmp 0x5333c7 */ goto L_005333c7;
L_005333ae:; BB(0x005333ae);
    /* 005333ae: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005333b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005333b2: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5333b5u); call_ind(t); }
    /* 005333b5: fld dword ptr [0x922a18] */ FPUSH(R_F32((u32)(0x922a18u)));
    /* 005333bb: fld dword ptr [ebx + 0x30c] */ FPUSH(R_F32((u32)(r_ebx+0x30cu)));
    /* 005333c1: fld dword ptr [ebx + 0x314] */ FPUSH(R_F32((u32)(r_ebx+0x314u)));
L_005333c7:; BB(0x005333c7);
    /* 005333c7: fld dword ptr [0x922a14] */ FPUSH(R_F32((u32)(0x922a14u)));
    /* 005333cd: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005333cf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005333d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005333d3: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 005333d9: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
    /* 005333df: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005333e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005333e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005333e7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005333ef: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5333f4u); f_00772b44();
    /* 005333f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005333f6: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5333fbu); f_007b6880();
    /* 005333fb: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 00533401: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533404: je 0x5334c8 */ if (fZ) goto L_005334c8;
L_0053340a:; BB(0x0053340a);
    /* 0053340a: movsx edi, word ptr [ebx + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00533411: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00533414: mov esi, dword ptr [ebx + 0x390] */ r_esi = R32((u32)(r_ebx+0x390u));
    /* 0053341a: mov word ptr [ebx + 0x346], di */ W16((u32)(r_ebx+0x346u), (u16)r_edi);
    /* 00533421: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00533426: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00533429: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0053342c: test esi, 0x1000000 */ {  u32 a = r_esi; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533432: mov dword ptr [ebx + 0x390], esi */ W32((u32)(r_ebx+0x390u), r_esi);
    /* 00533438: mov ebp, 0 */ r_ebp = 0x0u;
    /* 0053343d: je 0x533446 */ if (fZ) goto L_00533446;
L_0053343f:; BB(0x0053343f);
    /* 0053343f: mov eax, 1 */ r_eax = 0x1u;
    /* 00533444: jmp 0x533448 */ goto L_00533448;
L_00533446:; BB(0x00533446);
    /* 00533446: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00533448:; BB(0x00533448);
    /* 00533448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053344a: jne 0x5334a9 */ if (!fZ) goto L_005334a9;
L_0053344c:; BB(0x0053344c);
    /* 0053344c: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00533452: mov edx, dword ptr [eax*4 + 0xa734ac] */ r_edx = R32((u32)(r_eax*4+0xa734acu));
    /* 00533459: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0053345c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053345e: jg 0x533465 */ if ((!fZ&&fS==fO)) goto L_00533465;
L_00533460:; BB(0x00533460);
    /* 00533460: mov ecx, 0xa */ r_ecx = 0xau;
L_00533465:; BB(0x00533465);
    /* 00533465: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0053346c: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0053346f: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00533474: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00533476: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00533479: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0053347c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053347e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533480: jg 0x5334a9 */ if ((!fZ&&fS==fO)) goto L_005334a9;
L_00533482:; BB(0x00533482);
    /* 00533482: test esi, 0x2000000 */ {  u32 a = r_esi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533488: jne 0x5334a4 */ if (!fZ) goto L_005334a4;
L_0053348a:; BB(0x0053348a);
    /* 0053348a: or esi, 0x2000000 */ {  u32 a = r_esi; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00533490: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 00533497: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0053349e: mov dword ptr [ebx + 0x390], esi */ W32((u32)(r_ebx+0x390u), r_esi);
L_005334a4:; BB(0x005334a4);
    /* 005334a4: mov ebp, 2 */ r_ebp = 0x2u;
L_005334a9:; BB(0x005334a9);
    /* 005334a9: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005334af: jne 0x5334c8 */ if (!fZ) goto L_005334c8;
L_005334b1:; BB(0x005334b1);
    /* 005334b1: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005334b8: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005334ba: je 0x5334c8 */ if (fZ) goto L_005334c8;
L_005334bc:; BB(0x005334bc);
    /* 005334bc: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 005334c2: mov dword ptr [ebx + 0x37c], ebp */ W32((u32)(r_ebx+0x37cu), r_ebp);
L_005334c8:; BB(0x005334c8);
    /* 005334c8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005334cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005334cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005334cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005334ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005334cf: ret  */ FN_RET(0x005332e0); r_esp += 4; return;
}

void f_005334d0(void) /* sub_5334D0 */
{
    FN_ENTER(0x005334d0);
    /* 005334d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005334d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005334d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005334d3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005334d6: mov edi, ecx */ r_edi = r_ecx;
    /* 005334d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005334da: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5334dfu); f_00770738();
    /* 005334df: mov ebp, eax */ r_ebp = r_eax;
    /* 005334e1: mov edx, dword ptr [edi + 0x384] */ r_edx = R32((u32)(r_edi+0x384u));
    /* 005334e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005334e9: je 0x53392d */ if (fZ) goto L_0053392d;
L_005334ef:; BB(0x005334ef);
    /* 005334ef: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005334f2: je 0x5337bc */ if (fZ) goto L_005337bc;
L_005334f8:; BB(0x005334f8);
    /* 005334f8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005334fb: jne 0x53375b */ if (!fZ) goto L_0053375b;
L_00533501:; BB(0x00533501);
    /* 00533501: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533503: je 0x53391b */ if (fZ) goto L_0053391b;
L_00533509:; BB(0x00533509);
    /* 00533509: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0053350e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x533513u); f_0082d990();
    /* 00533513: lea ecx, [edi + 0x300] */ r_ecx = (u32)(r_edi+0x300u);
    /* 00533519: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x53351eu); f_0082d838();
    /* 0053351e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00533521: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00533523: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x533528u); f_0082d8bc();
    /* 00533528: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053352e: mov ecx, edi */ r_ecx = r_edi;
    /* 00533530: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x533535u); f_007aaab8();
    /* 00533535: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53353au); f_0082da80();
    /* 0053353a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053353c: lea esi, [edi + 0x3f4] */ r_esi = (u32)(r_edi+0x3f4u);
    /* 00533542: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00533543: mov ecx, edi */ r_ecx = r_edi;
    /* 00533545: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00533547: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x53354du); call_ind(t); }
    /* 0053354d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00533550: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00533556: fcom dword ptr [0x922a10] */ fx_compare(ST(0), R_F32((u32)(0x922a10u))); 
    /* 0053355c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053355e: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00533564: mov dword ptr [edi + 0x404], edx */ W32((u32)(r_edi+0x404u), r_edx);
    /* 0053356a: mov dword ptr [edi + 0x400], 0 */ W32((u32)(r_edi+0x400u), 0x0u);
    /* 00533574: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533575: mov dword ptr [edi + 0x408], 0xffffc000 */ W32((u32)(r_edi+0x408u), 0xffffc000u);
    /* 0053357f: jb 0x5335b8 */ if (fC) goto L_005335b8;
L_00533581:; BB(0x00533581);
    /* 00533581: fcom dword ptr [0x922a0c] */ fx_compare(ST(0), R_F32((u32)(0x922a0cu))); 
    /* 00533587: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533589: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053358a: jae 0x5335b8 */ if (!fC) goto L_005335b8;
L_0053358c:; BB(0x0053358c);
    /* 0053358c: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 00533592: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533594: je 0x5335cf */ if (fZ) goto L_005335cf;
L_00533596:; BB(0x00533596);
    /* 00533596: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00533598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00533599: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x53359eu); f_00508db8();
    /* 0053359e: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 005335a4: lea edx, [edi + 0x400] */ r_edx = (u32)(r_edi+0x400u);
    /* 005335aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005335ab: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x5335b0u); f_00508dd0();
    /* 005335b0: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005335b6: jmp 0x5335cf */ goto L_005335cf;
L_005335b8:; BB(0x005335b8);
    /* 005335b8: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 005335be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005335c0: je 0x5335cf */ if (fZ) goto L_005335cf;
L_005335c2:; BB(0x005335c2);
    /* 005335c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005335c4: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5335c9u); f_00508f48();
    /* 005335c9: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
L_005335cf:; BB(0x005335cf);
    /* 005335cf: fcom dword ptr [0x922a08] */ fx_compare(ST(0), R_F32((u32)(0x922a08u))); 
    /* 005335d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005335d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005335d8: jb 0x53360b */ if (fC) goto L_0053360b;
L_005335da:; BB(0x005335da);
    /* 005335da: fcom dword ptr [0x922a0c] */ fx_compare(ST(0), R_F32((u32)(0x922a0cu))); 
    /* 005335e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005335e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005335e3: jae 0x53360b */ if (!fC) goto L_0053360b;
L_005335e5:; BB(0x005335e5);
    /* 005335e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005335e7: mov ecx, dword ptr [edi + 0x3f0] */ r_ecx = R32((u32)(r_edi+0x3f0u));
    /* 005335ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005335ef: je 0x53361c */ if (fZ) goto L_0053361c;
L_005335f1:; BB(0x005335f1);
    /* 005335f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005335f2: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5335f7u); f_00508db8();
    /* 005335f7: mov ecx, dword ptr [edi + 0x3f0] */ r_ecx = R32((u32)(r_edi+0x3f0u));
    /* 005335fd: lea edx, [edi + 0x400] */ r_edx = (u32)(r_edi+0x400u);
    /* 00533603: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533604: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x533609u); f_00508dd0();
    /* 00533609: jmp 0x53361c */ goto L_0053361c;
L_0053360b:; BB(0x0053360b);
    /* 0053360b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053360d: mov ecx, dword ptr [edi + 0x3f0] */ r_ecx = R32((u32)(r_edi+0x3f0u));
    /* 00533613: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533615: je 0x53361c */ if (fZ) goto L_0053361c;
L_00533617:; BB(0x00533617);
    /* 00533617: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x53361cu); f_00508f48();
L_0053361c:; BB(0x0053361c);
    /* 0053361c: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 00533626: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053362c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053362e: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533634: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053363a: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533640: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533646: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053364c: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00533651: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x533656u); f_00771f5c();
    /* 00533656: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0053365c: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 00533662: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00533665: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00533668: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 0053366e: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00533674: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00533677: mov ecx, edi */ r_ecx = r_edi;
    /* 00533679: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0053367d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00533681: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00533685: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 0053368b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053368f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00533692: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533693: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x533698u); f_00771e14();
    /* 00533698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053369a: jne 0x5336a3 */ if (!fZ) goto L_005336a3;
L_0053369c:; BB(0x0053369c);
    /* 0053369c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053369e: mov ecx, edi */ r_ecx = r_edi;
    /* 005336a0: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x5336a3u); call_ind(t); }
L_005336a3:; BB(0x005336a3);
    /* 005336a3: mov esi, dword ptr [edi + 0x358] */ r_esi = R32((u32)(r_edi+0x358u));
    /* 005336a9: lea edx, [edi + 0x30c] */ r_edx = (u32)(r_edi+0x30cu);
    /* 005336af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005336b0: mov ecx, edi */ r_ecx = r_edi;
    /* 005336b2: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005336b5: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x5336bau); f_00771858();
    /* 005336ba: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005336bf: mov ecx, edi */ r_ecx = r_edi;
    /* 005336c1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5336c6u); f_007aaa30();
    /* 005336c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005336c8: je 0x53373c */ if (fZ) goto L_0053373c;
L_005336ca:; BB(0x005336ca);
    /* 005336ca: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 005336cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005336cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005336d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005336d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005336d2: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005336d7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5336dcu); f_00814298();
    /* 005336dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005336df: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005336e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005336e5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005336e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005336ea: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5336edu); call_ind(t); }
    /* 005336ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005336ef: je 0x53373c */ if (fZ) goto L_0053373c;
L_005336f1:; BB(0x005336f1);
    /* 005336f1: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005336f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005336f7: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005336fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005336fc: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x5336ffu); call_ind(t); }
    /* 005336ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00533701: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00533706: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00533707: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0053370a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0053370c: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x53370fu); call_ind(t); }
    /* 0053370f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00533712: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533718: jne 0x53373c */ if (!fZ) goto L_0053373c;
L_0053371a:; BB(0x0053371a);
    /* 0053371a: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00533721: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00533723: jle 0x53373c */ if ((fZ||fS!=fO)) goto L_0053373c;
L_00533725:; BB(0x00533725);
    /* 00533725: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00533727: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0053372b: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 00533732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533733: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533734: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x533739u); f_00693348();
    /* 00533739: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0053373c:; BB(0x0053373c);
    /* 0053373c: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00533742: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533745: je 0x5338f4 */ if (fZ) goto L_005338f4;
L_0053374b:; BB(0x0053374b);
    /* 0053374b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0053374e: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00533753: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00533756: jmp 0x5338f4 */ goto L_005338f4;
L_0053375b:; BB(0x0053375b);
    /* 0053375b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053375e: jne 0x5338f4 */ if (!fZ) goto L_005338f4;
L_00533764:; BB(0x00533764);
    /* 00533764: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0053376a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053376c: je 0x533785 */ if (fZ) goto L_00533785;
L_0053376e:; BB(0x0053376e);
    /* 0053376e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00533772: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00533777: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053377b: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
L_00533785:; BB(0x00533785);
    /* 00533785: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0053378b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053378d: je 0x5337a6 */ if (fZ) goto L_005337a6;
L_0053378f:; BB(0x0053378f);
    /* 0053378f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00533793: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00533798: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0053379c: mov dword ptr [edi + 0x3f0], 0 */ W32((u32)(r_edi+0x3f0u), 0x0u);
L_005337a6:; BB(0x005337a6);
    /* 005337a6: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005337ac: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005337b1: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005337b7: jmp 0x5338f4 */ goto L_005338f4;
L_005337bc:; BB(0x005337bc);
    /* 005337bc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005337be: je 0x533924 */ if (fZ) goto L_00533924;
L_005337c4:; BB(0x005337c4);
    /* 005337c4: mov dword ptr [edi + 0x310], 0 */ W32((u32)(r_edi+0x310u), 0x0u);
    /* 005337ce: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005337d4: mov ecx, edi */ r_ecx = r_edi;
    /* 005337d6: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005337dc: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005337e2: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005337e8: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005337ee: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005337f4: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005337f9: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x5337feu); f_00771f5c();
    /* 005337fe: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 00533804: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 0053380a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0053380e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00533812: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 00533818: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 0053381e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00533822: mov ecx, edi */ r_ecx = r_edi;
    /* 00533824: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00533828: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0053382c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00533830: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 00533836: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0053383a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0053383e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053383f: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x533844u); f_00771e14();
    /* 00533844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533846: jne 0x53384f */ if (!fZ) goto L_0053384f;
L_00533848:; BB(0x00533848);
    /* 00533848: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053384a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053384c: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x53384fu); call_ind(t); }
L_0053384f:; BB(0x0053384f);
    /* 0053384f: mov esi, dword ptr [edi + 0x358] */ r_esi = R32((u32)(r_edi+0x358u));
    /* 00533855: lea edx, [edi + 0x30c] */ r_edx = (u32)(r_edi+0x30cu);
    /* 0053385b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053385c: mov ecx, edi */ r_ecx = r_edi;
    /* 0053385e: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533861: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x533866u); f_00771858();
    /* 00533866: lea esi, [edi + 0x300] */ r_esi = (u32)(r_edi+0x300u);
    /* 0053386c: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00533872: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533873: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00533874: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x533879u); f_0078ea50();
    /* 00533879: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053387c: mov edx, dword ptr [edi + 0x31c] */ r_edx = R32((u32)(r_edi+0x31cu));
    /* 00533882: fst dword ptr [edi + 0x3c8] */ W_F32((u32)(r_edi+0x3c8u), ST(0));
    /* 00533888: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0053388b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0053388d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0053388f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533891: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533892: jb 0x5338f4 */ if (fC) goto L_005338f4;
L_00533894:; BB(0x00533894);
    /* 00533894: mov ebp, 7 */ r_ebp = 0x7u;
    /* 00533899: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 005338a0: mov eax, 2 */ r_eax = 0x2u;
    /* 005338a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005338a6: mov dword ptr [edi + 0x384], eax */ W32((u32)(r_edi+0x384u), r_eax);
    /* 005338ac: push 0x12b */ { u32 v = 0x12bu; r_esp -= 4; W32(r_esp, v); }
    /* 005338b1: lea ebp, [edi + 0x400] */ r_ebp = (u32)(r_edi+0x400u);
    /* 005338b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005338b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005338b9: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5338beu); f_00509dc4();
    /* 005338be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005338c1: mov dword ptr [edi + 0x3ec], eax */ W32((u32)(r_edi+0x3ecu), r_eax);
    /* 005338c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005338c9: je 0x5338d2 */ if (fZ) goto L_005338d2;
L_005338cb:; BB(0x005338cb);
    /* 005338cb: mov ecx, eax */ r_ecx = r_eax;
    /* 005338cd: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5338d2u); f_00508f48();
L_005338d2:; BB(0x005338d2);
    /* 005338d2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005338d4: push 0x12c */ { u32 v = 0x12cu; r_esp -= 4; W32(r_esp, v); }
    /* 005338d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005338da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005338db: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x5338e0u); f_00509dc4();
    /* 005338e0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005338e3: mov dword ptr [edi + 0x3f0], eax */ W32((u32)(r_edi+0x3f0u), r_eax);
    /* 005338e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005338eb: je 0x5338f4 */ if (fZ) goto L_005338f4;
L_005338ed:; BB(0x005338ed);
    /* 005338ed: mov ecx, eax */ r_ecx = r_eax;
    /* 005338ef: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5338f4u); f_00508f48();
L_005338f4:; BB(0x005338f4);
    /* 005338f4: mov ecx, edi */ r_ecx = r_edi;
    /* 005338f6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5338fbu); f_007aa094();
    /* 005338fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005338fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005338ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00533901: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x533906u); f_00772b44();
    /* 00533906: mov ecx, edi */ r_ecx = r_edi;
    /* 00533908: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x53390du); f_007b6894();
    /* 0053390d: mov ecx, edi */ r_ecx = r_edi;
    /* 0053390f: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x533914u); f_007b798c();
    /* 00533914: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00533917: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00533918: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00533919: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053391a: ret  */ FN_RET(0x005334d0); r_esp += 4; return;
L_0053391b:; BB(0x0053391b);
    /* 0053391b: mov ecx, edi */ r_ecx = r_edi;
    /* 0053391d: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x533922u); f_00533078();
    /* 00533922: jmp 0x5338f4 */ goto L_005338f4;
L_00533924:; BB(0x00533924);
    /* 00533924: mov ecx, edi */ r_ecx = r_edi;
    /* 00533926: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x53392bu); f_00533078();
    /* 0053392b: jmp 0x5338f4 */ goto L_005338f4;
L_0053392d:; BB(0x0053392d);
    /* 0053392d: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533933: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533938: je 0x533941 */ if (fZ) goto L_00533941;
L_0053393a:; BB(0x0053393a);
    /* 0053393a: mov eax, 1 */ r_eax = 0x1u;
    /* 0053393f: jmp 0x533943 */ goto L_00533943;
L_00533941:; BB(0x00533941);
    /* 00533941: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00533943:; BB(0x00533943);
    /* 00533943: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533945: jne 0x5339e1 */ if (!fZ) goto L_005339e1;
L_0053394b:; BB(0x0053394b);
    /* 0053394b: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 00533952: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533957: jge 0x53399b */ if ((fS==fO)) goto L_0053399b;
L_00533959:; BB(0x00533959);
    /* 00533959: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053395a: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00533961: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x533966u); f_00578c74();
    /* 00533966: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00533967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533968: mov ecx, edi */ r_ecx = r_edi;
    /* 0053396a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x53396fu); f_007706b0();
    /* 0053396f: mov ecx, edi */ r_ecx = r_edi;
    /* 00533971: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x533976u); f_00770738();
    /* 00533976: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533978: je 0x5339a7 */ if (fZ) goto L_005339a7;
L_0053397a:; BB(0x0053397a);
    /* 0053397a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0053397d: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533982: je 0x5339a7 */ if (fZ) goto L_005339a7;
L_00533984:; BB(0x00533984);
    /* 00533984: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00533989: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053398b: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 00533992: mov ecx, edi */ r_ecx = r_edi;
    /* 00533994: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x533999u); f_007706b0();
    /* 00533999: jmp 0x5339a7 */ goto L_005339a7;
L_0053399b:; BB(0x0053399b);
    /* 0053399b: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005339a0: mov ecx, edi */ r_ecx = r_edi;
    /* 005339a2: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x5339a7u); f_0052ccd8();
L_005339a7:; BB(0x005339a7);
    /* 005339a7: movzx eax, word ptr [edi + 0x340] */ r_eax = (u32)R16((u32)(r_edi+0x340u));
    /* 005339ae: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005339b3: je 0x5339ef */ if (fZ) goto L_005339ef;
L_005339b5:; BB(0x005339b5);
    /* 005339b5: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 005339bb: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 005339c5: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005339ca: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 005339d0: mov edx, 6 */ r_edx = 0x6u;
    /* 005339d5: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 005339dc: jmp 0x5338f4 */ goto L_005338f4;
L_005339e1:; BB(0x005339e1);
    /* 005339e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005339e3: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x5339e8u); f_00533078();
    /* 005339e8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005339eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005339ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005339ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005339ee: ret  */ FN_RET(0x005334d0); r_esp += 4; return;
L_005339ef:; BB(0x005339ef);
    /* 005339ef: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005339f1: mov ecx, edi */ r_ecx = r_edi;
    /* 005339f3: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5339f9u); call_ind(t); }
    /* 005339f9: jmp 0x5338f4 */ goto L_005338f4;
}

void f_00533a00(void) /* sub_533A00 */
{
    FN_ENTER(0x00533a00);
    /* 00533a00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00533a01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00533a02: mov esi, ecx */ r_esi = r_ecx;
    /* 00533a04: mov ecx, esi */ r_ecx = r_esi;
    /* 00533a06: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x533a0bu); f_00770738();
    /* 00533a0b: mov ebx, eax */ r_ebx = r_eax;
    /* 00533a0d: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 00533a13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533a15: je 0x533aa5 */ if (fZ) goto L_00533aa5;
L_00533a1b:; BB(0x00533a1b);
    /* 00533a1b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533a1e: jne 0x533b04 */ if (!fZ) goto L_00533b04;
L_00533a24:; BB(0x00533a24);
    /* 00533a24: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533a26: je 0x533b07 */ if (fZ) goto L_00533b07;
L_00533a2c:; BB(0x00533a2c);
    /* 00533a2c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00533a2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00533a31: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533a32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533a33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533a34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00533a35: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00533a3a: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x533a3fu); f_008144b0();
    /* 00533a3f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533a42: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00533a48: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 00533a52: mov ecx, esi */ r_ecx = r_esi;
    /* 00533a54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00533a56: push dword ptr [ebx + 0x308] */ { u32 v = R32((u32)(r_ebx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533a5c: push dword ptr [ebx + 0x304] */ { u32 v = R32((u32)(r_ebx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533a62: push dword ptr [ebx + 0x300] */ { u32 v = R32((u32)(r_ebx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533a68: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533a6b: call 0x771bf4 */ r_esp -= 4; W32(r_esp, 0x533a70u); f_00771bf4();
    /* 00533a70: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00533a72: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00533a78: lea eax, [esi + 0x30c] */ r_eax = (u32)(r_esi+0x30cu);
    /* 00533a7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533a7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00533a81: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533a84: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x533a89u); f_00771858();
    /* 00533a89: mov ecx, esi */ r_ecx = r_esi;
    /* 00533a8b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x533a90u); f_007aa094();
    /* 00533a90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533a92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533a94: mov ecx, esi */ r_ecx = r_esi;
    /* 00533a96: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x533a9bu); f_00772b44();
    /* 00533a9b: mov ecx, esi */ r_ecx = r_esi;
    /* 00533a9d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x533aa2u); f_007b6880();
    /* 00533aa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533aa3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00533aa4: ret  */ FN_RET(0x00533a00); r_esp += 4; return;
L_00533aa5:; BB(0x00533aa5);
    /* 00533aa5: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00533aa8: and edx, 0xfbfbfeff */ {  u32 a = r_edx; u32 b = 0xfbfbfeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00533aae: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00533ab1: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 00533ab7: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533abd: je 0x533ac6 */ if (fZ) goto L_00533ac6;
L_00533abf:; BB(0x00533abf);
    /* 00533abf: mov edx, 1 */ r_edx = 0x1u;
    /* 00533ac4: jmp 0x533acb */ goto L_00533acb;
L_00533ac6:; BB(0x00533ac6);
    /* 00533ac6: mov edx, 6 */ r_edx = 0x6u;
L_00533acb:; BB(0x00533acb);
    /* 00533acb: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00533ad5: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00533adc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533ade: je 0x533b04 */ if (fZ) goto L_00533b04;
L_00533ae0:; BB(0x00533ae0);
    /* 00533ae0: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 00533ae6: mov dword ptr [esi + 0x2a4], edx */ W32((u32)(r_esi+0x2a4u), r_edx);
    /* 00533aec: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 00533af2: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00533af8: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 00533afe: mov dword ptr [esi + 0x2ac], eax */ W32((u32)(r_esi+0x2acu), r_eax);
L_00533b04:; BB(0x00533b04);
    /* 00533b04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533b05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00533b06: ret  */ FN_RET(0x00533a00); r_esp += 4; return;
L_00533b07:; BB(0x00533b07);
    /* 00533b07: mov ecx, esi */ r_ecx = r_esi;
    /* 00533b09: call 0x533078 */ r_esp -= 4; W32(r_esp, 0x533b0eu); f_00533078();
    /* 00533b0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533b0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00533b10: ret  */ FN_RET(0x00533a00); r_esp += 4; return;
}

void f_00533b14(void) /* sub_533B14 */
{
    FN_ENTER(0x00533b14);
    /* 00533b14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00533b15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00533b17: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 00533b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533b1f: je 0x533b38 */ if (fZ) goto L_00533b38;
L_00533b21:; BB(0x00533b21);
    /* 00533b21: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533b24: je 0x533b6b */ if (fZ) goto L_00533b6b;
L_00533b26:; BB(0x00533b26);
    /* 00533b26: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533b29: jne 0x533b7d */ if (!fZ) goto L_00533b7d;
L_00533b2b:; BB(0x00533b2b);
    /* 00533b2b: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00533b2e: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533b33: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00533b36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533b37: ret  */ FN_RET(0x00533b14); r_esp += 4; return;
L_00533b38:; BB(0x00533b38);
    /* 00533b38: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00533b3b: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00533b40: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 00533b46: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00533b49: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533b4f: je 0x533b55 */ if (fZ) goto L_00533b55;
L_00533b51:; BB(0x00533b51);
    /* 00533b51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00533b53: jmp 0x533b5a */ goto L_00533b5a;
L_00533b55:; BB(0x00533b55);
    /* 00533b55: mov eax, 5 */ r_eax = 0x5u;
L_00533b5a:; BB(0x00533b5a);
    /* 00533b5a: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 00533b64: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_00533b6b:; BB(0x00533b6b);
    /* 00533b6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00533b6d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x533b72u); f_007aa094();
    /* 00533b72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533b74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00533b76: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00533b78: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x533b7du); f_00772b44();
L_00533b7d:; BB(0x00533b7d);
    /* 00533b7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533b7e: ret  */ FN_RET(0x00533b14); r_esp += 4; return;
}

void f_00533b80(void) /* sub_533B80 */
{
    FN_ENTER(0x00533b80);
    /* 00533b80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00533b81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00533b82: mov edi, ecx */ r_edi = r_ecx;
    /* 00533b84: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533b8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533b8d: je 0x533b9b */ if (fZ) goto L_00533b9b;
L_00533b8f:; BB(0x00533b8f);
    /* 00533b8f: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533b92: je 0x533b9b */ if (fZ) goto L_00533b9b;
L_00533b94:; BB(0x00533b94);
    /* 00533b94: add dword ptr [edi + 0x3dc], 1 */ { u32 ad = (u32)(r_edi+0x3dcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00533b9b:; BB(0x00533b9b);
    /* 00533b9b: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533ba1: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533ba6: je 0x533baf */ if (fZ) goto L_00533baf;
L_00533ba8:; BB(0x00533ba8);
    /* 00533ba8: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00533bad: jmp 0x533bb1 */ goto L_00533bb1;
L_00533baf:; BB(0x00533baf);
    /* 00533baf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00533bb1:; BB(0x00533bb1);
    /* 00533bb1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533bb3: je 0x533d7f */ if (fZ) goto L_00533d7f;
L_00533bb9:; BB(0x00533bb9);
    /* 00533bb9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00533bbb: jl 0x533bf8 */ if ((fS!=fO)) goto L_00533bf8;
L_00533bbd:; BB(0x00533bbd);
    /* 00533bbd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533bc0: jg 0x533bf8 */ if ((!fZ&&fS==fO)) goto L_00533bf8;
L_00533bc2:; BB(0x00533bc2);
    /* 00533bc2: mov ebx, dword ptr [edi + 0x3dc] */ r_ebx = R32((u32)(r_edi+0x3dcu));
    /* 00533bc8: cmp ebx, 0x708 */ {  u32 a = r_ebx; u32 b = 0x708u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533bce: jg 0x533bdc */ if ((!fZ&&fS==fO)) goto L_00533bdc;
L_00533bd0:; BB(0x00533bd0);
    /* 00533bd0: movsx ebx, word ptr [edi + 0x3e2] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x3e2u));
    /* 00533bd7: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533bda: jl 0x533bf8 */ if ((fS!=fO)) goto L_00533bf8;
L_00533bdc:; BB(0x00533bdc);
    /* 00533bdc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533bde: jne 0x533bf5 */ if (!fZ) goto L_00533bf5;
L_00533be0:; BB(0x00533be0);
    /* 00533be0: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533be3: je 0x533bf5 */ if (fZ) goto L_00533bf5;
L_00533be5:; BB(0x00533be5);
    /* 00533be5: mov dword ptr [edi + 0x37c], 0xb */ W32((u32)(r_edi+0x37cu), 0xbu);
    /* 00533bef: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
L_00533bf5:; BB(0x00533bf5);
    /* 00533bf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533bf6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533bf7: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533bf8:; BB(0x00533bf8);
    /* 00533bf8: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00533bfa: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00533bfc: mov ecx, edi */ r_ecx = r_edi;
    /* 00533bfe: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x533c01u); call_ind(t); }
    /* 00533c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c03: je 0x533c11 */ if (fZ) goto L_00533c11;
L_00533c05:; BB(0x00533c05);
    /* 00533c05: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00533c0a: mov ecx, edi */ r_ecx = r_edi;
    /* 00533c0c: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x533c11u); f_0052ccd8();
L_00533c11:; BB(0x00533c11);
    /* 00533c11: mov ecx, edi */ r_ecx = r_edi;
    /* 00533c13: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x533c18u); f_00770738();
    /* 00533c18: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533c1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c21: je 0x533d4b */ if (fZ) goto L_00533d4b;
L_00533c27:; BB(0x00533c27);
    /* 00533c27: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c2a: je 0x533d4b */ if (fZ) goto L_00533d4b;
L_00533c30:; BB(0x00533c30);
    /* 00533c30: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533c33: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533c39:; BB(0x00533c39);
    /* 00533c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c3b: je 0x533e58 */ if (fZ) goto L_00533e58;
L_00533c41:; BB(0x00533c41);
    /* 00533c41: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00533c44: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00533c47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533c48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533c49: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x533c4eu); f_0078ea50();
    /* 00533c4e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533c51: mov ebx, dword ptr [edi + 0x394] */ r_ebx = R32((u32)(r_edi+0x394u));
    /* 00533c57: mov edx, ebx */ r_edx = r_ebx;
    /* 00533c59: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c5b: je 0x533cba */ if (fZ) goto L_00533cba;
L_00533c5d:; BB(0x00533c5d);
    /* 00533c5d: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c60: jne 0x533c99 */ if (!fZ) goto L_00533c99;
L_00533c62:; BB(0x00533c62);
    /* 00533c62: fcom dword ptr [0x9229dc] */ fx_compare(ST(0), R_F32((u32)(0x9229dcu))); 
    /* 00533c68: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533c6a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533c6b: jae 0x533c7d */ if (!fC) goto L_00533c7d;
L_00533c6d:; BB(0x00533c6d);
    /* 00533c6d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00533c6f: mov dword ptr [edi + 0x394], 0 */ W32((u32)(r_edi+0x394u), 0x0u);
    /* 00533c79: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00533c7b: jmp 0x533cd8 */ goto L_00533cd8;
L_00533c7d:; BB(0x00533c7d);
    /* 00533c7d: fcomp dword ptr [0x9229d8] */ fx_compare(ST(0), R_F32((u32)(0x9229d8u))); FPOP();
    /* 00533c83: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533c85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533c86: jbe 0x533cd8 */ if ((fC||fZ)) goto L_00533cd8;
L_00533c88:; BB(0x00533c88);
    /* 00533c88: mov dword ptr [edi + 0x394], 2 */ W32((u32)(r_edi+0x394u), 0x2u);
    /* 00533c92: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00533c97: jmp 0x533cd8 */ goto L_00533cd8;
L_00533c99:; BB(0x00533c99);
    /* 00533c99: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533c9c: jne 0x533cd6 */ if (!fZ) goto L_00533cd6;
L_00533c9e:; BB(0x00533c9e);
    /* 00533c9e: fcomp dword ptr [0x9229e0] */ fx_compare(ST(0), R_F32((u32)(0x9229e0u))); FPOP();
    /* 00533ca4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533ca6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533ca7: jae 0x533cd8 */ if (!fC) goto L_00533cd8;
L_00533ca9:; BB(0x00533ca9);
    /* 00533ca9: mov dword ptr [edi + 0x394], 1 */ W32((u32)(r_edi+0x394u), 0x1u);
    /* 00533cb3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00533cb8: jmp 0x533cd8 */ goto L_00533cd8;
L_00533cba:; BB(0x00533cba);
    /* 00533cba: fcomp dword ptr [0x9229d4] */ fx_compare(ST(0), R_F32((u32)(0x9229d4u))); FPOP();
    /* 00533cc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533cc2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533cc3: jbe 0x533cd8 */ if ((fC||fZ)) goto L_00533cd8;
L_00533cc5:; BB(0x00533cc5);
    /* 00533cc5: mov dword ptr [edi + 0x394], 1 */ W32((u32)(r_edi+0x394u), 0x1u);
    /* 00533ccf: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00533cd4: jmp 0x533cd8 */ goto L_00533cd8;
L_00533cd6:; BB(0x00533cd6);
    /* 00533cd6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00533cd8:; BB(0x00533cd8);
    /* 00533cd8: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533cda: je 0x533e55 */ if (fZ) goto L_00533e55;
L_00533ce0:; BB(0x00533ce0);
    /* 00533ce0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533ce2: je 0x533d1a */ if (fZ) goto L_00533d1a;
L_00533ce4:; BB(0x00533ce4);
    /* 00533ce4: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533ce7: jne 0x533cfd */ if (!fZ) goto L_00533cfd;
L_00533ce9:; BB(0x00533ce9);
    /* 00533ce9: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533cef: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533cf4: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00533cfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533cfb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533cfc: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533cfd:; BB(0x00533cfd);
    /* 00533cfd: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533d00: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533d06:; BB(0x00533d06);
    /* 00533d06: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533d0c: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533d11: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00533d17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533d18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533d19: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533d1a:; BB(0x00533d1a);
    /* 00533d1a: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533d20: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533d22: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533d28:; BB(0x00533d28);
    /* 00533d28: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533d2f: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533d32: je 0x533e55 */ if (fZ) goto L_00533e55;
L_00533d38:; BB(0x00533d38);
    /* 00533d38: mov dword ptr [edi + 0x37c], 9 */ W32((u32)(r_edi+0x37cu), 0x9u);
    /* 00533d42: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00533d48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533d49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533d4a: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533d4b:; BB(0x00533d4b);
    /* 00533d4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533d4d: je 0x533e7a */ if (fZ) goto L_00533e7a;
L_00533d53:; BB(0x00533d53);
    /* 00533d53: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533d59: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533d5b: jne 0x533d72 */ if (!fZ) goto L_00533d72;
L_00533d5d:; BB(0x00533d5d);
    /* 00533d5d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533d60: je 0x533d72 */ if (fZ) goto L_00533d72;
L_00533d62:; BB(0x00533d62);
    /* 00533d62: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 00533d6c: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
L_00533d72:; BB(0x00533d72);
    /* 00533d72: mov dword ptr [edi + 0x394], 2 */ W32((u32)(r_edi+0x394u), 0x2u);
    /* 00533d7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533d7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533d7e: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533d7f:; BB(0x00533d7f);
    /* 00533d7f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00533d81: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00533d83: mov ecx, edi */ r_ecx = r_edi;
    /* 00533d85: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x533d88u); call_ind(t); }
    /* 00533d88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533d8a: je 0x533da4 */ if (fZ) goto L_00533da4;
L_00533d8c:; BB(0x00533d8c);
    /* 00533d8c: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533d93: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533d96: je 0x533da4 */ if (fZ) goto L_00533da4;
L_00533d98:; BB(0x00533d98);
    /* 00533d98: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00533d9d: mov ecx, edi */ r_ecx = r_edi;
    /* 00533d9f: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x533da4u); f_0052ccd8();
L_00533da4:; BB(0x00533da4);
    /* 00533da4: mov ecx, edi */ r_ecx = r_edi;
    /* 00533da6: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x533dabu); f_00770738();
    /* 00533dab: mov ebx, eax */ r_ebx = r_eax;
    /* 00533dad: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533db4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533db6: je 0x533df1 */ if (fZ) goto L_00533df1;
L_00533db8:; BB(0x00533db8);
    /* 00533db8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533dbb: je 0x533dc2 */ if (fZ) goto L_00533dc2;
L_00533dbd:; BB(0x00533dbd);
    /* 00533dbd: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533dc0: jne 0x533e16 */ if (!fZ) goto L_00533e16;
L_00533dc2:; BB(0x00533dc2);
    /* 00533dc2: mov eax, dword ptr [edi + 0x3dc] */ r_eax = R32((u32)(r_edi+0x3dcu));
    /* 00533dc8: cmp eax, 0x708 */ {  u32 a = r_eax; u32 b = 0x708u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00533dcd: jle 0x533e16 */ if ((fZ||fS!=fO)) goto L_00533e16;
L_00533dcf:; BB(0x00533dcf);
    /* 00533dcf: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533dd5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533dd7: jne 0x533dee */ if (!fZ) goto L_00533dee;
L_00533dd9:; BB(0x00533dd9);
    /* 00533dd9: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533ddc: je 0x533dee */ if (fZ) goto L_00533dee;
L_00533dde:; BB(0x00533dde);
    /* 00533dde: mov dword ptr [edi + 0x37c], 0xa */ W32((u32)(r_edi+0x37cu), 0xau);
    /* 00533de8: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
L_00533dee:; BB(0x00533dee);
    /* 00533dee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533def: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533df0: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533df1:; BB(0x00533df1);
    /* 00533df1: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00533df3: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00533df5: mov ecx, edi */ r_ecx = r_edi;
    /* 00533df7: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x533dfau); call_ind(t); }
    /* 00533dfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533dfc: je 0x533e0f */ if (fZ) goto L_00533e0f;
L_00533dfe:; BB(0x00533dfe);
    /* 00533dfe: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533e00: je 0x533e84 */ if (fZ) goto L_00533e84;
L_00533e06:; BB(0x00533e06);
    /* 00533e06: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533e0d: jmp 0x533e16 */ goto L_00533e16;
L_00533e0f:; BB(0x00533e0f);
    /* 00533e0f: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
L_00533e16:; BB(0x00533e16);
    /* 00533e16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533e18: je 0x533e2e */ if (fZ) goto L_00533e2e;
L_00533e1a:; BB(0x00533e1a);
    /* 00533e1a: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533e1d: je 0x533e2e */ if (fZ) goto L_00533e2e;
L_00533e1f:; BB(0x00533e1f);
    /* 00533e1f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533e22: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533e24:; BB(0x00533e24);
    /* 00533e24: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533e26: je 0x533ead */ if (fZ) goto L_00533ead;
L_00533e2c:; BB(0x00533e2c);
    /* 00533e2c: jmp 0x533e55 */ goto L_00533e55;
L_00533e2e:; BB(0x00533e2e);
    /* 00533e2e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533e30: je 0x533ecf */ if (fZ) goto L_00533ecf;
L_00533e36:; BB(0x00533e36);
    /* 00533e36: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533e3c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533e3e: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533e40:; BB(0x00533e40);
    /* 00533e40: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533e43: je 0x533e55 */ if (fZ) goto L_00533e55;
L_00533e45:; BB(0x00533e45);
    /* 00533e45: mov dword ptr [edi + 0x37c], 0xc */ W32((u32)(r_edi+0x37cu), 0xcu);
    /* 00533e4f: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
L_00533e55:; BB(0x00533e55);
    /* 00533e55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533e56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533e57: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533e58:; BB(0x00533e58);
    /* 00533e58: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533e5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533e60: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533e62:; BB(0x00533e62);
    /* 00533e62: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533e65: je 0x533e55 */ if (fZ) goto L_00533e55;
L_00533e67:; BB(0x00533e67);
    /* 00533e67: mov dword ptr [edi + 0x37c], 8 */ W32((u32)(r_edi+0x37cu), 0x8u);
    /* 00533e71: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
    /* 00533e77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533e78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533e79: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533e7a:; BB(0x00533e7a);
    /* 00533e7a: mov ecx, edi */ r_ecx = r_edi;
    /* 00533e7c: call 0x52ca6c */ r_esp -= 4; W32(r_esp, 0x533e81u); f_0052ca6c();
    /* 00533e81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533e82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533e83: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533e84:; BB(0x00533e84);
    /* 00533e84: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533e8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533e8c: jne 0x533eaa */ if (!fZ) goto L_00533eaa;
L_00533e8e:; BB(0x00533e8e);
    /* 00533e8e: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533e95: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533e98: je 0x533eaa */ if (fZ) goto L_00533eaa;
L_00533e9a:; BB(0x00533e9a);
    /* 00533e9a: mov dword ptr [edi + 0x37c], 0xa */ W32((u32)(r_edi+0x37cu), 0xau);
    /* 00533ea4: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_00533eaa:; BB(0x00533eaa);
    /* 00533eaa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533eab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533eac: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533ead:; BB(0x00533ead);
    /* 00533ead: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533eb3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533eb5: jne 0x533e55 */ if (!fZ) goto L_00533e55;
L_00533eb7:; BB(0x00533eb7);
    /* 00533eb7: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533eba: je 0x533e55 */ if (fZ) goto L_00533e55;
L_00533ebc:; BB(0x00533ebc);
    /* 00533ebc: mov dword ptr [edi + 0x37c], 8 */ W32((u32)(r_edi+0x37cu), 0x8u);
    /* 00533ec6: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
    /* 00533ecc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533ecd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533ece: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
L_00533ecf:; BB(0x00533ecf);
    /* 00533ecf: mov ecx, edi */ r_ecx = r_edi;
    /* 00533ed1: call 0x52ca6c */ r_esp -= 4; W32(r_esp, 0x533ed6u); f_0052ca6c();
    /* 00533ed6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00533ed7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533ed8: ret  */ FN_RET(0x00533b80); r_esp += 4; return;
}

void f_00533edc(void) /* sub_533EDC */
{
    FN_ENTER(0x00533edc);
    /* 00533edc: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00533ee2: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533ee8: je 0x533ef1 */ if (fZ) goto L_00533ef1;
L_00533eea:; BB(0x00533eea);
    /* 00533eea: mov eax, 1 */ r_eax = 0x1u;
    /* 00533eef: jmp 0x533ef3 */ goto L_00533ef3;
L_00533ef1:; BB(0x00533ef1);
    /* 00533ef1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00533ef3:; BB(0x00533ef3);
    /* 00533ef3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533ef5: je 0x533efe */ if (fZ) goto L_00533efe;
L_00533ef7:; BB(0x00533ef7);
    /* 00533ef7: mov eax, 9 */ r_eax = 0x9u;
    /* 00533efc: jmp 0x533f03 */ goto L_00533f03;
L_00533efe:; BB(0x00533efe);
    /* 00533efe: mov eax, 2 */ r_eax = 0x2u;
L_00533f03:; BB(0x00533f03);
    /* 00533f03: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533f06: jne 0x533f1f */ if (!fZ) goto L_00533f1f;
L_00533f08:; BB(0x00533f08);
    /* 00533f08: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00533f0f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533f11: je 0x533f1f */ if (fZ) goto L_00533f1f;
L_00533f13:; BB(0x00533f13);
    /* 00533f13: mov dword ptr [ecx + 0x388], edx */ W32((u32)(r_ecx+0x388u), r_edx);
    /* 00533f19: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
L_00533f1f:; BB(0x00533f1f);
    /* 00533f1f: ret  */ FN_RET(0x00533edc); r_esp += 4; return;
}

void f_00533f20(void) /* sub_533F20 */
{
    FN_ENTER(0x00533f20);
    /* 00533f20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00533f21: mov edi, ecx */ r_edi = r_ecx;
    /* 00533f23: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00533f26: lea eax, [edi + 0x50] */ r_eax = (u32)(r_edi+0x50u);
    /* 00533f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533f2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00533f2b: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x533f30u); f_0078ea50();
    /* 00533f30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533f33: fcomp dword ptr [0x9229d0] */ fx_compare(ST(0), R_F32((u32)(0x9229d0u))); FPOP();
    /* 00533f39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00533f3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00533f3c: jbe 0x533f66 */ if ((fC||fZ)) goto L_00533f66;
L_00533f3e:; BB(0x00533f3e);
    /* 00533f3e: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533f44: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533f46: jne 0x533f8b */ if (!fZ) goto L_00533f8b;
L_00533f48:; BB(0x00533f48);
    /* 00533f48: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533f4f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00533f52: je 0x533f8b */ if (fZ) goto L_00533f8b;
L_00533f54:; BB(0x00533f54);
    /* 00533f54: mov dword ptr [edi + 0x37c], 8 */ W32((u32)(r_edi+0x37cu), 0x8u);
    /* 00533f5e: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00533f64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533f65: ret  */ FN_RET(0x00533f20); r_esp += 4; return;
L_00533f66:; BB(0x00533f66);
    /* 00533f66: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00533f6c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533f6e: jne 0x533f8b */ if (!fZ) goto L_00533f8b;
L_00533f70:; BB(0x00533f70);
    /* 00533f70: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00533f77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00533f79: je 0x533f8b */ if (fZ) goto L_00533f8b;
L_00533f7b:; BB(0x00533f7b);
    /* 00533f7b: mov dword ptr [edi + 0x37c], 0 */ W32((u32)(r_edi+0x37cu), 0x0u);
    /* 00533f85: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
L_00533f8b:; BB(0x00533f8b);
    /* 00533f8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00533f8c: ret  */ FN_RET(0x00533f20); r_esp += 4; return;
}

void f_00533f90(void)
{
    FN_ENTER(0x00533f90);
    /* 00533f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00533f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00533f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00533f95: push 0x8d4db6 */ { u32 v = 0x8d4db6u; r_esp -= 4; W32(r_esp, v); }
    /* 00533f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00533fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00533fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00533fa8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00533fab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00533fae: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00533fb1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00533fb4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00533fb7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00533fb9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00533fc0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x533fc5u); f_005caba4();
    /* 00533fc5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00533fc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00533fcb: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00533fce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00533fd0: je 0x5341fc */ if (fZ) goto L_005341fc;
L_00533fd6:; BB(0x00533fd6);
    /* 00533fd6: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00533fdd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00533fe4: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00533fea: mov ecx, eax */ r_ecx = r_eax;
    /* 00533fec: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x533ff1u); f_00787a4c();
    /* 00533ff1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00533ff8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533fff: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00534006: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053400b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x534010u); f_005caba4();
    /* 00534010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00534013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534016: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00534019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053401b: je 0x5341f5 */ if (fZ) goto L_005341f5;
L_00534021:; BB(0x00534021);
    /* 00534021: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00534028: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053402f: mov ecx, eax */ r_ecx = r_eax;
    /* 00534031: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00534034: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00534037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534038: call 0x5316a4 */ r_esp -= 4; W32(r_esp, 0x53403du); f_005316a4();
    /* 0053403d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00534044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534047: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053404a: mov dword ptr [ecx], 0xb01b40 */ W32((u32)(r_ecx), 0xb01b40u);
    /* 00534050: mov eax, dword ptr [0x9bc740] */ r_eax = R32((u32)(0x9bc740u));
    /* 00534055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00534056: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00534059: call dword ptr [0xb01c8c] */ { u32 t = R32((u32)(0xb01c8cu)); r_esp -= 4; W32(r_esp, 0x53405fu); call_ind(t); }
    /* 0053405f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534062: mov esi, dword ptr [0xa73480] */ r_esi = R32((u32)(0xa73480u));
    /* 00534068: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053406a: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0053406d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00534070: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00534073: push 0x9bc77c */ { u32 v = 0x9bc77cu; r_esp -= 4; W32(r_esp, v); }
    /* 00534078: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 0053407e: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 00534084: mov dword ptr [ecx + 0x2ac], ebx */ W32((u32)(r_ecx+0x2acu), r_ebx);
    /* 0053408a: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 00534090: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
    /* 00534096: mov dword ptr [ecx + 0x2a0], ebx */ W32((u32)(r_ecx+0x2a0u), r_ebx);
    /* 0053409c: mov edi, dword ptr [esi + 0x430] */ r_edi = R32((u32)(r_esi+0x430u));
    /* 005340a2: mov dword ptr [ecx + 0xdc], edi */ W32((u32)(r_ecx+0xdcu), r_edi);
    /* 005340a8: mov dword ptr [ecx + 0xd8], 0x9bc680 */ W32((u32)(r_ecx+0xd8u), 0x9bc680u);
    /* 005340b2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5340b7u); f_007b9a88();
    /* 005340b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005340ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005340bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005340bd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005340c4: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5340c9u); f_007aa4c8();
    /* 005340c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005340cc: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005340d3: movsx ebx, word ptr [ecx + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005340da: movzx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)R16((u32)(r_ecx+0x2beu));
    /* 005340e1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005340e8: mov word ptr [ecx + 0x334], bx */ W16((u32)(r_ecx+0x334u), (u16)r_ebx);
    /* 005340ef: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 005340f6: mov word ptr [ecx + 0x346], bx */ W16((u32)(r_ecx+0x346u), (u16)r_ebx);
    /* 005340fd: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x534102u); f_0078730c();
    /* 00534102: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534105: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x53410au); f_00786bbc();
    /* 0053410a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053410d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00534110: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 00534116: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053411b: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 00534121: mov dword ptr [edx + 0x3c0], 0 */ W32((u32)(r_edx+0x3c0u), 0x0u);
    /* 0053412b: mov dword ptr [edx + 0x3c4], 0 */ W32((u32)(r_edx+0x3c4u), 0x0u);
    /* 00534135: movsx ebx, word ptr [ecx + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 00534139: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053413b: je 0x534144 */ if (fZ) goto L_00534144;
L_0053413d:; BB(0x0053413d);
    /* 0053413d: mov ecx, edx */ r_ecx = r_edx;
    /* 0053413f: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x534144u); f_0052ca40();
L_00534144:; BB(0x00534144);
    /* 00534144: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534147: mov dword ptr [ecx + 0x3b4], 0x41c80000 */ W32((u32)(r_ecx+0x3b4u), 0x41c80000u);
    /* 00534151: mov eax, 4 */ r_eax = 0x4u;
    /* 00534156: mov word ptr [ecx + 0x3e0], ax */ W16((u32)(r_ecx+0x3e0u), (u16)r_eax);
    /* 0053415d: mov dword ptr [ecx + 0x3b8], 0x42200000 */ W32((u32)(r_ecx+0x3b8u), 0x42200000u);
    /* 00534167: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0053416c: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 00534172: mov dword ptr [ecx + 0x3bc], 0x41c80000 */ W32((u32)(r_ecx+0x3bcu), 0x41c80000u);
    /* 0053417c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053417e: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 00534184: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
    /* 0053418a: mov dword ptr [ecx + 0x3d8], edx */ W32((u32)(r_ecx+0x3d8u), r_edx);
    /* 00534190: call 0x532960 */ r_esp -= 4; W32(r_esp, 0x534195u); f_00532960();
    /* 00534195: push dword ptr [0xa734b4] */ { u32 v = R32((u32)(0xa734b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053419b: push dword ptr [0xa734bc] */ { u32 v = R32((u32)(0xa734bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005341a1: push dword ptr [0xa734c4] */ { u32 v = R32((u32)(0xa734c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005341a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005341aa: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5341afu); f_007868f8();
    /* 005341af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005341b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005341b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005341b6: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 005341bc: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 005341c2: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 005341c8: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 005341ce: call dword ptr [edx + 0x150] */ { u32 t = R32((u32)(r_edx+0x150u)); r_esp -= 4; W32(r_esp, 0x5341d4u); call_ind(t); }
    /* 005341d4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005341db:; BB(0x005341db);
    /* 005341db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005341de: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005341e1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005341e4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005341e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005341ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005341f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005341f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005341f4: ret  */ FN_RET(0x00533f90); r_esp += 4; return;
L_005341f5:; BB(0x005341f5);
    /* 005341f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005341f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005341fa: jmp 0x5341db */ goto L_005341db;
L_005341fc:; BB(0x005341fc);
    /* 005341fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005341fe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00534201: jmp 0x533ff8 */ f_00533ff8(); return;
}

