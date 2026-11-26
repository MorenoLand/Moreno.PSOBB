#include "protos.h"

void f_008370b0(void) /* sub_8370B0 */
{
    FN_ENTER(0x008370b0);
    /* 008370b0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008370b2: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 008370b5: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 008370b8: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008370bb: jl 0x8370cc */ if ((fS!=fO)) goto L_008370cc;
L_008370bd:; BB(0x008370bd);
    /* 008370bd: je 0x8370d2 */ if (fZ) goto L_008370d2;
L_008370bf:; BB(0x008370bf);
    /* 008370bf: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 008370c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008370c5: lea eax, [edx + eax + 4] */ r_eax = (u32)(r_edx+r_eax+0x4u);
    /* 008370c9: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008370cb: ret  */ FN_RET(0x008370b0); r_esp += 4; return;
L_008370cc:; BB(0x008370cc);
    /* 008370cc: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008370cf: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008370d1: ret  */ FN_RET(0x008370b0); r_esp += 4; return;
L_008370d2:; BB(0x008370d2);
    /* 008370d2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008370d5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008370d7: ret  */ FN_RET(0x008370b0); r_esp += 4; return;
}

void f_008370d8(void) /* sub_8370D8 */
{
    FN_ENTER(0x008370d8);
    /* 008370d8: mov edx, 0x837714 */ r_edx = 0x837714u;
    /* 008370dd: call 0x8370e4 */ r_esp -= 4; W32(r_esp, 0x8370e2u); f_008370e4();
    /* 008370e2: ret  */ FN_RET(0x008370d8); r_esp += 4; return;
}

void f_008370e4(void) /* sub_8370E4 */
{
    FN_ENTER(0x008370e4);
    /* 008370e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008370e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008370e6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008370e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008370e8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008370eb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008370ef: mov edx, dword ptr [0xacd4a4] */ r_edx = R32((u32)(0xacd4a4u));
    /* 008370f5: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 008370fc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00837101: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00837105: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00837109: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 0083710e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00837112: mov eax, dword ptr [0xacd4a8] */ r_eax = R32((u32)(0xacd4a8u));
    /* 00837117: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0083711b: and edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0083711e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00837122: mov eax, dword ptr [0xacd4ac] */ r_eax = R32((u32)(0xacd4acu));
    /* 00837127: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083712b: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0083712f: je 0x837136 */ if (fZ) goto L_00837136;
L_00837131:; BB(0x00837131);
    /* 00837131: call 0x847bac */ r_esp -= 4; W32(r_esp, 0x837136u); f_00847bac();
L_00837136:; BB(0x00837136);
    /* 00837136: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083713a: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0083713d: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 00837140: mov ebp, edx */ r_ebp = r_edx;
L_00837142:; BB(0x00837142);
    /* 00837142: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837148: je 0x837445 */ if (fZ) goto L_00837445;
L_0083714e:; BB(0x0083714e);
    /* 0083714e: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00837151: jae 0x837263 */ if (!fC) goto L_00837263;
L_00837157:; BB(0x00837157);
    /* 00837157: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0083715a: jae 0x83723f */ if (!fC) goto L_0083723f;
L_00837160:; BB(0x00837160);
    /* 00837160: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837163: je 0x8371b7 */ if (fZ) goto L_008371b7;
L_00837165:; BB(0x00837165);
    /* 00837165: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837168: jne 0x83718c */ if (!fZ) goto L_0083718c;
L_0083716a:; BB(0x0083716a);
    /* 0083716a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0083716e: call 0x8370b0 */ r_esp -= 4; W32(r_esp, 0x837173u); f_008370b0();
    /* 00837173: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00837177: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0083717a: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0083717d: mov dword ptr [ebx*4 + 0xaccac0], eax */ W32((u32)(r_ebx*4+0xaccac0u), r_eax);
    /* 00837184: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00837187: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00837188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00837189: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083718a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083718b: ret  */ FN_RET(0x008370e4); r_esp += 4; return;
L_0083718c:; BB(0x0083718c);
    /* 0083718c: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083718f: jne 0x837410 */ if (!fZ) goto L_00837410;
L_00837195:; BB(0x00837195);
    /* 00837195: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00837199: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0083719c: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0083719f: mov ecx, dword ptr [ebx*4 + 0xaccac0] */ r_ecx = R32((u32)(r_ebx*4+0xaccac0u));
    /* 008371a6: call 0x8370e4 */ r_esp -= 4; W32(r_esp, 0x8371abu); f_008370e4();
    /* 008371ab: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008371af: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008371b2: jmp 0x837410 */ goto L_00837410;
L_008371b7:; BB(0x008371b7);
    /* 008371b7: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 008371bb: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008371c1: jne 0x837410 */ if (!fZ) goto L_00837410;
L_008371c7:; BB(0x008371c7);
    /* 008371c7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008371cc: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008371ce: mov ebp, ebx */ r_ebp = r_ebx;
    /* 008371d0: shr ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008371d3: and ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008371d6: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008371d9: push dword ptr [ebp*4 + 0xa21a60] */ { u32 v = R32((u32)(r_ebp*4+0xa21a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 008371e0: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008371e2: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008371e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008371e6: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8371ecu); call_ind(t); }
    /* 008371ec: push dword ptr [ebx*4 + 0xa21a60] */ { u32 v = R32((u32)(r_ebx*4+0xa21a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 008371f3: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008371f8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008371fa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008371fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008371fd: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x837203u); call_ind(t); }
    /* 00837203: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837206: mov edx, 0 */ r_edx = 0x0u;
    /* 0083720b: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0083720e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837211: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00837216: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00837219: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083721c: mov eax, 0 */ r_eax = 0x0u;
    /* 00837221: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00837224: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00837229: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0083722b: test ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083722d: sete bl */ r_ebx = (r_ebx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00837230: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00837234: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00837237: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0083723a: jmp 0x837410 */ goto L_00837410;
L_0083723f:; BB(0x0083723f);
    /* 0083723f: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00837243: and edx, 0x1fff */ {  u32 a = r_edx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00837249: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083724b: call 0x839838 */ r_esp -= 4; W32(r_esp, 0x837250u); f_00839838();
    /* 00837250: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00837252: call 0x839a60 */ r_esp -= 4; W32(r_esp, 0x837257u); f_00839a60();
    /* 00837257: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083725b: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0083725e: jmp 0x837410 */ goto L_00837410;
L_00837263:; BB(0x00837263);
    /* 00837263: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00837266: jae 0x837309 */ if (!fC) goto L_00837309;
L_0083726c:; BB(0x0083726c);
    /* 0083726c: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00837270: test ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837276: jne 0x8372e8 */ if (!fZ) goto L_008372e8;
L_00837278:; BB(0x00837278);
    /* 00837278: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083727d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0083727f: mov esi, ebx */ r_esi = r_ebx;
    /* 00837281: shr esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00837284: and esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00837287: shr ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0083728a: push dword ptr [esi*4 + 0xa21a60] */ { u32 v = R32((u32)(r_esi*4+0xa21a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837291: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00837293: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00837296: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837297: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83729du); call_ind(t); }
    /* 0083729d: push dword ptr [ebx*4 + 0xa21a60] */ { u32 v = R32((u32)(r_ebx*4+0xa21a60u)); r_esp -= 4; W32(r_esp, v); }
    /* 008372a4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008372a9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008372ab: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008372ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008372ae: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8372b4u); call_ind(t); }
    /* 008372b4: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008372b7: mov edx, 0 */ r_edx = 0x0u;
    /* 008372bc: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008372bf: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008372c2: mov eax, 0 */ r_eax = 0x0u;
    /* 008372c7: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008372ca: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008372cd: mov ecx, 0 */ r_ecx = 0x0u;
    /* 008372d2: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008372d5: mov ebx, 0 */ r_ebx = 0x0u;
    /* 008372da: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008372dc: test eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008372de: sete bl */ r_ebx = (r_ebx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008372e1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008372e5: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_008372e8:; BB(0x008372e8);
    /* 008372e8: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008372eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008372ec: call dword ptr [ebp*4 + 0xa2305c] */ { u32 t = R32((u32)(r_ebp*4+0xa2305cu)); r_esp -= 4; W32(r_esp, 0x8372f3u); call_ind(t); }
    /* 008372f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008372f4: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 008372f9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008372fd: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00837301: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00837304: jmp 0x837410 */ goto L_00837410;
L_00837309:; BB(0x00837309);
    /* 00837309: and ebx, dword ptr [esp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0083730d: or ebx, dword ptr [esp + 8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00837311: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00837314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837315: add ebp, -0x40 */ {  u32 a = r_ebp; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00837318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00837319: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0083731d: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x83731fu); call_ind(t); }
    /* 0083731f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00837322: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837324: jne 0x837332 */ if (!fZ) goto L_00837332;
L_00837326:; BB(0x00837326);
    /* 00837326: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083732a: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0083732d: jmp 0x837410 */ goto L_00837410;
L_00837332:; BB(0x00837332);
    /* 00837332: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837338: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0083733a: test ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837340: mov eax, 0 */ r_eax = 0x0u;
    /* 00837345: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00837348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837349: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 0083734e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083734f: call dword ptr [esi + 0xc8] */ { u32 t = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, 0x837355u); call_ind(t); }
    /* 00837355: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00837359: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0083735d: test esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837363: mov eax, 0 */ r_eax = 0x0u;
    /* 00837368: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0083736b: test esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837371: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00837376: setne cl */ r_ecx = (r_ecx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00837379: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083737b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083737d: mov esi, dword ptr [eax*4 + 0xa23080] */ r_esi = R32((u32)(r_eax*4+0xa23080u));
    /* 00837384: mov eax, dword ptr [esi + ebp*8 + 4] */ r_eax = R32((u32)(r_esi+r_ebp*8+0x4u));
    /* 00837388: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083738a: je 0x8373a0 */ if (fZ) goto L_008373a0;
L_0083738c:; BB(0x0083738c);
    /* 0083738c: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837392: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00837394: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00837398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837399: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083739a: call dword ptr [edi + 0x130] */ { u32 t = R32((u32)(r_edi+0x130u)); r_esp -= 4; W32(r_esp, 0x8373a0u); call_ind(t); }
L_008373a0:; BB(0x008373a0);
    /* 008373a0: test ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008373a6: jne 0x8373d5 */ if (!fZ) goto L_008373d5;
L_008373a8:; BB(0x008373a8);
    /* 008373a8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008373aa: jne 0x8373c4 */ if (!fZ) goto L_008373c4;
L_008373ac:; BB(0x008373ac);
    /* 008373ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008373ae: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x8373b3u); f_00839a28();
    /* 008373b3: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008373b7: call dword ptr [esi + ebp*8] */ { u32 t = R32((u32)(r_esi+r_ebp*8)); r_esp -= 4; W32(r_esp, 0x8373bau); call_ind(t); }
    /* 008373ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008373bb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008373bf: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008373c2: jmp 0x837410 */ goto L_00837410;
L_008373c4:; BB(0x008373c4);
    /* 008373c4: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008373c8: call dword ptr [esi + ebp*8] */ { u32 t = R32((u32)(r_esi+r_ebp*8)); r_esp -= 4; W32(r_esp, 0x8373cbu); call_ind(t); }
    /* 008373cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008373cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008373d0: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 008373d3: jmp 0x837410 */ goto L_00837410;
L_008373d5:; BB(0x008373d5);
    /* 008373d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008373d7: mov edx, 0xa21a20 */ r_edx = 0xa21a20u;
    /* 008373dc: call 0x835db4 */ r_esp -= 4; W32(r_esp, 0x8373e1u); f_00835db4();
    /* 008373e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008373e3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008373e5: mov edx, 2 */ r_edx = 0x2u;
    /* 008373ea: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x8373efu); f_00835e1c();
    /* 008373ef: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008373f3: call dword ptr [esi + ebp*8] */ { u32 t = R32((u32)(r_esi+r_ebp*8)); r_esp -= 4; W32(r_esp, 0x8373f6u); call_ind(t); }
    /* 008373f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008373f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008373f9: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x8373feu); f_00835de8();
    /* 008373fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00837402: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00837404: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x837409u); f_00835e1c();
    /* 00837409: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083740d: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
L_00837410:; BB(0x00837410);
    /* 00837410: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 00837413: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00837416: jl 0x83742a */ if ((fS!=fO)) goto L_0083742a;
L_00837418:; BB(0x00837418);
    /* 00837418: je 0x83743c */ if (fZ) goto L_0083743c;
L_0083741a:; BB(0x0083741a);
    /* 0083741a: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 0083741e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00837420: lea eax, [eax + edx + 4] */ r_eax = (u32)(r_eax+r_edx+0x4u);
    /* 00837424: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00837428: jmp 0x837431 */ goto L_00837431;
L_0083742a:; BB(0x0083742a);
    /* 0083742a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083742d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_00837431:; BB(0x00837431);
    /* 00837431: movsx ebx, word ptr [eax] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00837434: movzx ebp, bl */ r_ebp = (u32)(u8)r_ebx;
    /* 00837437: jmp 0x837142 */ goto L_00837142;
L_0083743c:; BB(0x0083743c);
    /* 0083743c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083743f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00837443: jmp 0x837431 */ goto L_00837431;
L_00837445:; BB(0x00837445);
    /* 00837445: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00837449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083744b: je 0x837452 */ if (fZ) goto L_00837452;
L_0083744d:; BB(0x0083744d);
    /* 0083744d: call 0x847c98 */ r_esp -= 4; W32(r_esp, 0x837452u); f_00847c98();
L_00837452:; BB(0x00837452);
    /* 00837452: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00837455: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00837456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00837457: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00837458: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00837459: ret  */ FN_RET(0x008370e4); r_esp += 4; return;
}

void f_0083745c(void) /* sub_83745C */
{
    FN_ENTER(0x0083745c);
    /* 0083745c: mov edx, 0x837768 */ r_edx = 0x837768u;
    /* 00837461: call 0x8370e4 */ r_esp -= 4; W32(r_esp, 0x837466u); f_008370e4();
    /* 00837466: ret  */ FN_RET(0x0083745c); r_esp += 4; return;
}

void f_00837468(void) /* sub_837468 */
{
    FN_ENTER(0x00837468);
    /* 00837468: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083746b: ja 0x83750c */ if ((!fC&&!fZ)) goto L_0083750c;
L_00837471:; BB(0x00837471);
    /* 00837471: mov eax, dword ptr [edx*4 + 0x98a6d8] */ r_eax = R32((u32)(r_edx*4+0x98a6d8u));
    /* 00837478: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0083750c:; BB(0x0083750c);
    /* 0083750c: ret  */ FN_RET(0x00837468); r_esp += 4; return;
}

void f_0083747a(void)
{
    FN_ENTER(0x0083747a);
    /* 0083747a: mov eax, 1 */ r_eax = 0x1u;
    /* 0083747f: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x0083747a); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x0083747a); r_esp += 4; return;
}

void f_00837481(void)
{
    FN_ENTER(0x00837481);
    /* 00837481: mov eax, 2 */ r_eax = 0x2u;
    /* 00837486: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x00837481); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x00837481); r_esp += 4; return;
}

void f_00837488(void)
{
    FN_ENTER(0x00837488);
    /* 00837488: mov eax, 3 */ r_eax = 0x3u;
    /* 0083748d: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x00837488); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x00837488); r_esp += 4; return;
}

void f_0083748f(void)
{
    FN_ENTER(0x0083748f);
    /* 0083748f: mov eax, 5 */ r_eax = 0x5u;
    /* 00837494: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x0083748f); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x0083748f); r_esp += 4; return;
}

void f_00837496(void)
{
    FN_ENTER(0x00837496);
    /* 00837496: mov eax, 4 */ r_eax = 0x4u;
    /* 0083749b: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x00837496); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x00837496); r_esp += 4; return;
}

void f_0083749d(void)
{
    FN_ENTER(0x0083749d);
    /* 0083749d: mov eax, 6 */ r_eax = 0x6u;
    /* 008374a2: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x0083749d); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x0083749d); r_esp += 4; return;
}

void f_008374a4(void)
{
    FN_ENTER(0x008374a4);
    /* 008374a4: mov eax, 0xa */ r_eax = 0xau;
    /* 008374a9: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x008374a4); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x008374a4); r_esp += 4; return;
}

void f_008374ab(void)
{
    FN_ENTER(0x008374ab);
    /* 008374ab: mov eax, 8 */ r_eax = 0x8u;
    /* 008374b0: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x008374ab); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x008374ab); r_esp += 4; return;
}

void f_008374b2(void)
{
    FN_ENTER(0x008374b2);
    /* 008374b2: mov eax, 9 */ r_eax = 0x9u;
    /* 008374b7: jmp 0x8374be */ goto L_008374be;
L_008374be:; BB(0x008374be);
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x008374b2); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x008374b2); r_esp += 4; return;
}

void f_008374b9(void)
{
    FN_ENTER(0x008374b9);
    /* 008374b9: mov eax, 7 */ r_eax = 0x7u;
    /* 008374be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008374c0: jne 0x8374d5 */ if (!fZ) goto L_008374d5;
L_008374c2:; BB(0x008374c2);
    /* 008374c2: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374c9: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374cb: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374ce: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374d4u); call_ind(t); }
    /* 008374d4: ret  */ FN_RET(0x008374b9); r_esp += 4; return;
L_008374d5:; BB(0x008374d5);
    /* 008374d5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008374db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374dc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 008374de: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008374e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008374e1: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374e7u); call_ind(t); }
    /* 008374e7: ret  */ FN_RET(0x008374b9); r_esp += 4; return;
}

void f_008374e8(void)
{
    FN_ENTER(0x008374e8);
    /* 008374e8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008374ed: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008374ef: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 008374f1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008374f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008374f4: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8374fau); call_ind(t); }
    /* 008374fa: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008374ff: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00837501: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00837503: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837505: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837506: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83750cu); call_ind(t); }
    /* 0083750c: ret  */ FN_RET(0x008374e8); r_esp += 4; return;
}

void f_0083750d(void)
{
    FN_ENTER(0x0083750d);
    /* 0083750d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837512: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00837514: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 00837516: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837518: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837519: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83751fu); call_ind(t); }
    /* 0083751f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837524: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00837526: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00837528: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083752a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083752b: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x837531u); call_ind(t); }
    /* 00837531: ret  */ FN_RET(0x0083750d); r_esp += 4; return;
}

void f_00837534(void) /* sub_837534 */
{
    FN_ENTER(0x00837534);
    /* 00837534: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00837537: mov eax, dword ptr [0xacd4d8] */ r_eax = R32((u32)(0xacd4d8u));
    /* 0083753c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083753f: jne 0x837684 */ if (!fZ) goto L_00837684;
L_00837545:; BB(0x00837545);
    /* 00837545: fild dword ptr [0xacd4c0] */ FPUSH((long double)(i32)R32((u32)(0xacd4c0u)));
    /* 0083754b: fild dword ptr [0xacd4c4] */ FPUSH((long double)(i32)R32((u32)(0xacd4c4u)));
    /* 00837551: mov eax, dword ptr [0xacd460] */ r_eax = R32((u32)(0xacd460u));
    /* 00837556: mov edx, dword ptr [0xacd464] */ r_edx = R32((u32)(0xacd464u));
    /* 0083755c: mov ecx, dword ptr [0xacd468] */ r_ecx = R32((u32)(0xacd468u));
    /* 00837562: mov dword ptr [0xacd4d8], 0 */ W32((u32)(0xacd4d8u), 0x0u);
    /* 0083756c: mov dword ptr [0xacccc0], eax */ W32((u32)(0xacccc0u), r_eax);
    /* 00837571: mov eax, dword ptr [0xacd46c] */ r_eax = R32((u32)(0xacd46cu));
    /* 00837576: mov dword ptr [0xacccc4], edx */ W32((u32)(0xacccc4u), r_edx);
    /* 0083757c: mov dword ptr [0xacccc8], ecx */ W32((u32)(0xacccc8u), r_ecx);
    /* 00837582: mov dword ptr [0xaccccc], eax */ W32((u32)(0xacccccu), r_eax);
    /* 00837587: mov eax, dword ptr [0xacd470] */ r_eax = R32((u32)(0xacd470u));
    /* 0083758c: mov dword ptr [0xacccd0], eax */ W32((u32)(0xacccd0u), r_eax);
    /* 00837591: mov eax, dword ptr [0xacd474] */ r_eax = R32((u32)(0xacd474u));
    /* 00837596: mov dword ptr [0xacccd4], eax */ W32((u32)(0xacccd4u), r_eax);
    /* 0083759b: mov eax, dword ptr [0xacd478] */ r_eax = R32((u32)(0xacd478u));
    /* 008375a0: mov dword ptr [0xacccd8], eax */ W32((u32)(0xacccd8u), r_eax);
    /* 008375a5: mov eax, dword ptr [0xacd47c] */ r_eax = R32((u32)(0xacd47cu));
    /* 008375aa: mov dword ptr [0xacccdc], eax */ W32((u32)(0xacccdcu), r_eax);
    /* 008375af: mov eax, dword ptr [0xacd480] */ r_eax = R32((u32)(0xacd480u));
    /* 008375b4: mov dword ptr [0xaccce0], eax */ W32((u32)(0xaccce0u), r_eax);
    /* 008375b9: mov eax, dword ptr [0xacd484] */ r_eax = R32((u32)(0xacd484u));
    /* 008375be: mov dword ptr [0xaccce4], eax */ W32((u32)(0xaccce4u), r_eax);
    /* 008375c3: mov eax, dword ptr [0xacd488] */ r_eax = R32((u32)(0xacd488u));
    /* 008375c8: mov dword ptr [0xaccce8], eax */ W32((u32)(0xaccce8u), r_eax);
    /* 008375cd: mov eax, dword ptr [0xacd48c] */ r_eax = R32((u32)(0xacd48cu));
    /* 008375d2: mov dword ptr [0xacccec], eax */ W32((u32)(0xacccecu), r_eax);
    /* 008375d7: mov eax, dword ptr [0xacd490] */ r_eax = R32((u32)(0xacd490u));
    /* 008375dc: mov dword ptr [0xacccf0], eax */ W32((u32)(0xacccf0u), r_eax);
    /* 008375e1: mov eax, dword ptr [0xacd494] */ r_eax = R32((u32)(0xacd494u));
    /* 008375e6: mov dword ptr [0xacccf4], eax */ W32((u32)(0xacccf4u), r_eax);
    /* 008375eb: mov eax, dword ptr [0xacd498] */ r_eax = R32((u32)(0xacd498u));
    /* 008375f0: mov dword ptr [0xacccf8], eax */ W32((u32)(0xacccf8u), r_eax);
    /* 008375f5: mov eax, dword ptr [0xacd49c] */ r_eax = R32((u32)(0xacd49cu));
    /* 008375fa: mov dword ptr [0xacccfc], eax */ W32((u32)(0xacccfcu), r_eax);
    /* 008375ff: mov eax, dword ptr [0xacd4c0] */ r_eax = R32((u32)(0xacd4c0u));
    /* 00837604: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00837607: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00837609: fadd dword ptr [eax*4 + 0x98a838] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a838u));
    /* 00837610: mov eax, dword ptr [0xacd4c4] */ r_eax = R32((u32)(0xacd4c4u));
    /* 00837615: fst dword ptr [0xacd4b0] */ W_F32((u32)(0xacd4b0u), ST(0));
    /* 0083761b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083761e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00837620: fadd dword ptr [eax*4 + 0x98a838] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a838u));
    /* 00837627: mov eax, dword ptr [0xacd4c8] */ r_eax = R32((u32)(0xacd4c8u));
    /* 0083762c: fst dword ptr [0xacd4b4] */ W_F32((u32)(0xacd4b4u), ST(0));
    /* 00837632: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00837635: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00837638: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0083763b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083763e: fadd dword ptr [eax*4 + 0x98a838] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a838u));
    /* 00837645: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00837647: mov eax, dword ptr [0xacd4cc] */ r_eax = R32((u32)(0xacd4ccu));
    /* 0083764c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083764e: fstp dword ptr [0xacd4b8] */ W_F32((u32)(0xacd4b8u), ST(0)); FPOP();
    /* 00837654: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00837657: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083765b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0083765f: push 0xacd4c0 */ { u32 v = 0xacd4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837664: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00837667: fadd dword ptr [eax*4 + 0x98a838] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a838u));
    /* 0083766e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00837670: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837675: fstp dword ptr [0xacd4bc] */ W_F32((u32)(0xacd4bcu), ST(0)); FPOP();
    /* 0083767b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083767c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083767e: call dword ptr [edx + 0xa0] */ { u32 t = R32((u32)(r_edx+0xa0u)); r_esp -= 4; W32(r_esp, 0x837684u); call_ind(t); }
L_00837684:; BB(0x00837684);
    /* 00837684: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00837687: ret  */ FN_RET(0x00837534); r_esp += 4; return;
}

void f_00837688(void) /* sub_837688 */
{
    FN_ENTER(0x00837688);
    /* 00837688: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0083768a: mov eax, 0xacd3e0 */ r_eax = 0xacd3e0u;
    /* 0083768f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00837691: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00837694: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00837697: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0083769a: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0083769d: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 008376a0: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 008376a3: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 008376a6: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 008376a9: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 008376ac: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008376af: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 008376b2: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008376b5: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 008376b8: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 008376bb: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 008376be: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 008376c1: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 008376c4: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 008376c7: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 008376ca: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 008376cd: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 008376d0: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 008376d3: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 008376d6: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 008376d9: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 008376dc: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 008376df: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 008376e2: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 008376e5: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 008376e8: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 008376eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008376ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008376ee: push 0xacd420 */ { u32 v = 0xacd420u; r_esp -= 4; W32(r_esp, v); }
    /* 008376f3: call 0x891a42 */ r_esp -= 4; W32(r_esp, 0x8376f8u); f_00891a42();
    /* 008376f8: ret  */ FN_RET(0x00837688); r_esp += 4; return;
}

void f_008376fc(void) /* sub_8376FC */
{
    FN_ENTER(0x008376fc);
    /* 008376fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00837700: mov dword ptr [0xacd4a4], ecx */ W32((u32)(0xacd4a4u), r_ecx);
    /* 00837706: mov dword ptr [0xacd4a8], edx */ W32((u32)(0xacd4a8u), r_edx);
    /* 0083770c: mov dword ptr [0xacd4ac], eax */ W32((u32)(0xacd4acu), r_eax);
    /* 00837711: ret 4 */ FN_RET(0x008376fc); r_esp += 8; return;
}

void f_00837714(void) /* sub_837714 */
{
    FN_ENTER(0x00837714);
    /* 00837714: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00837718: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083771d: je 0x837763 */ if (fZ) goto L_00837763;
L_0083771f:; BB(0x0083771f);
    /* 0083771f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00837723: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00837725: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00837728: je 0x83775d */ if (fZ) goto L_0083775d;
L_0083772a:; BB(0x0083772a);
    /* 0083772a: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00837730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837731: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00837733: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00837735: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00837736: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83773cu); call_ind(t); }
    /* 0083773c: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837741: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837743: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00837745: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837748: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x83774eu); call_ind(t); }
    /* 0083774e: call 0x839ad0 */ r_esp -= 4; W32(r_esp, 0x837753u); f_00839ad0();
    /* 00837753: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00837757: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
L_0083775d:; BB(0x0083775d);
    /* 0083775d: mov eax, 1 */ r_eax = 0x1u;
    /* 00837762: ret  */ FN_RET(0x00837714); r_esp += 4; return;
L_00837763:; BB(0x00837763);
    /* 00837763: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00837765: ret  */ FN_RET(0x00837714); r_esp += 4; return;
}

void f_00837768(void)
{
    FN_ENTER(0x00837768);
    /* 00837768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00837769: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0083776d: mov eax, dword ptr [0xae7788] */ r_eax = R32((u32)(0xae7788u));
    /* 00837772: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837777: je 0x837808 */ if (fZ) goto L_00837808;
L_0083777d:; BB(0x0083777d);
    /* 0083777d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00837781: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837786: je 0x8377d2 */ if (fZ) goto L_008377d2;
L_00837788:; BB(0x00837788);
    /* 00837788: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0083778a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083778d: jne 0x8377a3 */ if (!fZ) goto L_008377a3;
L_0083778f:; BB(0x0083778f);
    /* 0083778f: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837794: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837796: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00837798: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083779a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083779b: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8377a1u); call_ind(t); }
    /* 008377a1: jmp 0x8377b9 */ goto L_008377b9;
L_008377a3:; BB(0x008377a3);
    /* 008377a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008377a5: jne 0x8377b9 */ if (!fZ) goto L_008377b9;
L_008377a7:; BB(0x008377a7);
    /* 008377a7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008377ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008377ae: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008377b0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008377b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008377b3: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8377b9u); call_ind(t); }
L_008377b9:; BB(0x008377b9);
    /* 008377b9: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008377be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008377c0: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008377c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008377c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008377c5: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8377cbu); call_ind(t); }
    /* 008377cb: call 0x839ad0 */ r_esp -= 4; W32(r_esp, 0x8377d0u); f_00839ad0();
    /* 008377d0: jmp 0x8377fb */ goto L_008377fb;
L_008377d2:; BB(0x008377d2);
    /* 008377d2: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008377d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008377d9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008377db: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008377dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008377de: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8377e4u); call_ind(t); }
    /* 008377e4: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008377e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008377eb: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 008377ed: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008377ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008377f0: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x8377f6u); call_ind(t); }
    /* 008377f6: call 0x839ad0 */ r_esp -= 4; W32(r_esp, 0x8377fbu); f_00839ad0();
L_008377fb:; BB(0x008377fb);
    /* 008377fb: mov dword ptr [edi], 2 */ W32((u32)(r_edi), 0x2u);
    /* 00837801: mov eax, 1 */ r_eax = 0x1u;
    /* 00837806: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00837807: ret  */ FN_RET(0x00837768); r_esp += 4; return;
L_00837808:; BB(0x00837808);
    /* 00837808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083780a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083780b: ret  */ FN_RET(0x00837768); r_esp += 4; return;
}

void f_0083780c(void) /* sub_83780C */
{
    FN_ENTER(0x0083780c);
    /* 0083780c: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0083780f: mov dword ptr [0xacd520], ecx */ W32((u32)(0xacd520u), r_ecx);
    /* 00837815: ret  */ FN_RET(0x0083780c); r_esp += 4; return;
}

void f_00837818(void) /* sub_837818 */
{
    FN_ENTER(0x00837818);
    /* 00837818: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00837819: mov ebx, esp */ r_ebx = r_esp;
    /* 0083781b: and esp, 0xffffffc0 */ {  u32 a = r_esp; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0083781e: sub esp, 0x680 */ {  u32 a = r_esp; u32 b = 0x680u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00837824: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00837827: fcom dword ptr [0x98a854] */ fx_compare(ST(0), R_F32((u32)(0x98a854u))); 
    /* 0083782d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083782f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00837830: ja 0x83783a */ if ((!fC&&!fZ)) goto L_0083783a;
L_00837832:; BB(0x00837832);
    /* 00837832: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00837834: mov esp, ebx */ r_esp = r_ebx;
    /* 00837836: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00837837: ret 4 */ FN_RET(0x00837818); r_esp += 8; return;
L_0083783a:; BB(0x0083783a);
    /* 0083783a: fld qword ptr [0x98a830] */ FPUSH(R_F64((u32)(0x98a830u)));
    /* 00837840: mov eax, dword ptr [0xacd520] */ r_eax = R32((u32)(0xacd520u));
    /* 00837845: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00837847: fstp qword ptr [esp + 0x40] */ W_F64((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0083784b: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0083784f: mov esi, eax */ r_esi = r_eax;
    /* 00837851: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00837855: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00837857: mov edi, edx */ r_edi = r_edx;
L_00837859:; BB(0x00837859);
    /* 00837859: movzx ecx, word ptr [edi*2 + 0xaccde0] */ r_ecx = (u32)R16((u32)(r_edi*2+0xaccde0u));
    /* 00837861: fld qword ptr [esp + 0x40] */ FPUSH(R_F64((u32)(r_esp+0x40u)));
    /* 00837865: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00837869: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0083786d: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00837871: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00837874: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x837879u); f_0084d1d4();
    /* 00837879: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0083787d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00837882: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00837887: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0083788b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0083788f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00837893: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00837897: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0083789b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083789d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0083789f: jl 0x8378b0 */ if ((fS!=fO)) goto L_008378b0;
L_008378a1:; BB(0x008378a1);
    /* 008378a1: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008378a7: jle 0x8378b2 */ if ((fZ||fS!=fO)) goto L_008378b2;
L_008378a9:; BB(0x008378a9);
    /* 008378a9: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 008378ae: jmp 0x8378b2 */ goto L_008378b2;
L_008378b0:; BB(0x008378b0);
    /* 008378b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_008378b2:; BB(0x008378b2);
    /* 008378b2: fld qword ptr [esp + 0x40] */ FPUSH(R_F64((u32)(r_esp+0x40u)));
    /* 008378b6: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008378ba: mov word ptr [esp + edi*2 + 0x48], cx */ W16((u32)(r_esp+r_edi*2+0x48u), (u16)r_ecx);
    /* 008378bf: movzx ecx, word ptr [edi*2 + 0xaccfe0] */ r_ecx = (u32)R16((u32)(r_edi*2+0xaccfe0u));
    /* 008378c7: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 008378cb: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008378cf: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008378d2: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x8378d7u); f_0084d1d4();
    /* 008378d7: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 008378db: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008378e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008378e5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008378e9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008378ed: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 008378f1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008378f5: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008378f9: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008378fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008378fd: jl 0x83790e */ if ((fS!=fO)) goto L_0083790e;
L_008378ff:; BB(0x008378ff);
    /* 008378ff: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00837905: jle 0x837910 */ if ((fZ||fS!=fO)) goto L_00837910;
L_00837907:; BB(0x00837907);
    /* 00837907: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0083790c: jmp 0x837910 */ goto L_00837910;
L_0083790e:; BB(0x0083790e);
    /* 0083790e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00837910:; BB(0x00837910);
    /* 00837910: fld qword ptr [esp + 0x40] */ FPUSH(R_F64((u32)(r_esp+0x40u)));
    /* 00837914: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00837918: mov word ptr [esp + edi*2 + 0x248], cx */ W16((u32)(r_esp+r_edi*2+0x248u), (u16)r_ecx);
    /* 00837920: movzx ecx, word ptr [edi*2 + 0xacd1e0] */ r_ecx = (u32)R16((u32)(r_edi*2+0xacd1e0u));
    /* 00837928: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0083792c: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00837930: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00837933: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x837938u); f_0084d1d4();
    /* 00837938: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0083793c: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00837941: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00837946: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0083794a: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0083794e: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00837952: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00837956: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0083795a: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083795c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0083795e: jl 0x83796f */ if ((fS!=fO)) goto L_0083796f;
L_00837960:; BB(0x00837960);
    /* 00837960: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00837966: jle 0x837971 */ if ((fZ||fS!=fO)) goto L_00837971;
L_00837968:; BB(0x00837968);
    /* 00837968: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 0083796d: jmp 0x837971 */ goto L_00837971;
L_0083796f:; BB(0x0083796f);
    /* 0083796f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00837971:; BB(0x00837971);
    /* 00837971: mov word ptr [esp + edi*2 + 0x448], cx */ W16((u32)(r_esp+r_edi*2+0x448u), (u16)r_ecx);
    /* 00837979: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083797c: cmp edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00837982: jl 0x837859 */ if ((fS!=fO)) goto L_00837859;
L_00837988:; BB(0x00837988);
    /* 00837988: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0083798c: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00837990: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00837996: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 0083799a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083799c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083799d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083799f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008379a0: call dword ptr [ecx + 0x48] */ { u32 t = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, 0x8379a3u); call_ind(t); }
    /* 008379a3: mov esp, ebx */ r_esp = r_ebx;
    /* 008379a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008379a6: ret 4 */ FN_RET(0x00837818); r_esp += 8; return;
}

void f_008379ac(void) /* sub_8379AC */
{
    FN_ENTER(0x008379ac);
    /* 008379ac: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008379b1: ret  */ FN_RET(0x008379ac); r_esp += 4; return;
}

void f_008379b4(void) /* sub_8379B4 */
{
    FN_ENTER(0x008379b4);
    /* 008379b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008379b5: mov eax, dword ptr [0xaf0344] */ r_eax = R32((u32)(0xaf0344u));
    /* 008379ba: call 0x8379c4 */ r_esp -= 4; W32(r_esp, 0x8379bfu); f_008379c4();
    /* 008379bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008379c0: ret  */ FN_RET(0x008379b4); r_esp += 4; return;
}

void f_008379c4(void) /* sub_8379C4 */
{
    FN_ENTER(0x008379c4);
    /* 008379c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008379c6: je 0x8379f1 */ if (fZ) goto L_008379f1;
L_008379c8:; BB(0x008379c8);
    /* 008379c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008379cb: je 0x8379f7 */ if (fZ) goto L_008379f7;
L_008379cd:; BB(0x008379cd);
    /* 008379cd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008379d0: je 0x8379eb */ if (fZ) goto L_008379eb;
L_008379d2:; BB(0x008379d2);
    /* 008379d2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008379d5: jne 0x8379dd */ if (!fZ) goto L_008379dd;
L_008379d7:; BB(0x008379d7);
    /* 008379d7: mov eax, 0x16 */ r_eax = 0x16u;
    /* 008379dc: ret  */ FN_RET(0x008379c4); r_esp += 4; return;
L_008379dd:; BB(0x008379dd);
    /* 008379dd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008379e0: jne 0x8379e8 */ if (!fZ) goto L_008379e8;
L_008379e2:; BB(0x008379e2);
    /* 008379e2: mov eax, 0x15 */ r_eax = 0x15u;
    /* 008379e7: ret  */ FN_RET(0x008379c4); r_esp += 4; return;
L_008379e8:; BB(0x008379e8);
    /* 008379e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008379ea: ret  */ FN_RET(0x008379c4); r_esp += 4; return;
L_008379eb:; BB(0x008379eb);
    /* 008379eb: mov eax, 0x19 */ r_eax = 0x19u;
    /* 008379f0: ret  */ FN_RET(0x008379c4); r_esp += 4; return;
L_008379f1:; BB(0x008379f1);
    /* 008379f1: mov eax, 0x17 */ r_eax = 0x17u;
    /* 008379f6: ret  */ FN_RET(0x008379c4); r_esp += 4; return;
L_008379f7:; BB(0x008379f7);
    /* 008379f7: mov eax, 0x18 */ r_eax = 0x18u;
    /* 008379fc: ret  */ FN_RET(0x008379c4); r_esp += 4; return;
}

void f_00837a00(void) /* sub_837A00 */
{
    FN_ENTER(0x00837a00);
    /* 00837a00: mov eax, 0xacd4e0 */ r_eax = 0xacd4e0u;
    /* 00837a05: ret  */ FN_RET(0x00837a00); r_esp += 4; return;
}

void f_00837a08(void) /* sub_837A08 */
{
    FN_ENTER(0x00837a08);
    /* 00837a08: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837a0b: je 0x837a39 */ if (fZ) goto L_00837a39;
L_00837a0d:; BB(0x00837a0d);
    /* 00837a0d: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00837a10: je 0x837a3c */ if (fZ) goto L_00837a3c;
L_00837a12:; BB(0x00837a12);
    /* 00837a12: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00837a15: je 0x837a33 */ if (fZ) goto L_00837a33;
L_00837a17:; BB(0x00837a17);
    /* 00837a17: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00837a1a: jne 0x837a22 */ if (!fZ) goto L_00837a22;
L_00837a1c:; BB(0x00837a1c);
    /* 00837a1c: mov eax, 4 */ r_eax = 0x4u;
    /* 00837a21: ret  */ FN_RET(0x00837a08); r_esp += 4; return;
L_00837a22:; BB(0x00837a22);
    /* 00837a22: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00837a25: jne 0x837a2d */ if (!fZ) goto L_00837a2d;
L_00837a27:; BB(0x00837a27);
    /* 00837a27: mov eax, 5 */ r_eax = 0x5u;
    /* 00837a2c: ret  */ FN_RET(0x00837a08); r_esp += 4; return;
L_00837a2d:; BB(0x00837a2d);
    /* 00837a2d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00837a32: ret  */ FN_RET(0x00837a08); r_esp += 4; return;
L_00837a33:; BB(0x00837a33);
    /* 00837a33: mov eax, 3 */ r_eax = 0x3u;
    /* 00837a38: ret  */ FN_RET(0x00837a08); r_esp += 4; return;
L_00837a39:; BB(0x00837a39);
    /* 00837a39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00837a3b: ret  */ FN_RET(0x00837a08); r_esp += 4; return;
L_00837a3c:; BB(0x00837a3c);
    /* 00837a3c: mov eax, 1 */ r_eax = 0x1u;
    /* 00837a41: ret  */ FN_RET(0x00837a08); r_esp += 4; return;
}

void f_00837a44(void) /* sub_837A44 */
{
    FN_ENTER(0x00837a44);
    /* 00837a44: sub esp, 0x620 */ {  u32 a = r_esp; u32 b = 0x620u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00837a4a: mov dword ptr [esp + 0xc], 0x49 */ W32((u32)(r_esp+0xcu), 0x49u);
    /* 00837a52: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00837a56: mov dword ptr [esp + 0x10], 0x4b */ W32((u32)(r_esp+0x10u), 0x4bu);
    /* 00837a5e: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00837a62: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00837a66: mov dword ptr [esp + 0x14], 0x4f */ W32((u32)(r_esp+0x14u), 0x4fu);
    /* 00837a6e: call 0x838740 */ r_esp -= 4; W32(r_esp, 0x837a73u); f_00838740();
    /* 00837a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837a75: jne 0x837a8f */ if (!fZ) goto L_00837a8f;
L_00837a77:; BB(0x00837a77);
    /* 00837a77: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00837a7c: mov edx, 0x98a894 */ r_edx = 0x98a894u;
    /* 00837a81: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x837a86u); f_0083bf84();
    /* 00837a86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00837a88: add esp, 0x620 */ {  u32 a = r_esp; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00837a8e: ret  */ FN_RET(0x00837a44); r_esp += 4; return;
L_00837a8f:; BB(0x00837a8f);
    /* 00837a8f: mov edx, 0xacd4e0 */ r_edx = 0xacd4e0u;
    /* 00837a94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00837a96: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00837a98: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00837a9b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00837a9e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00837aa1: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00837aa4: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00837aa7: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00837aaa: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00837aad: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00837ab0: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00837ab3: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00837ab6: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00837ab9: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00837abc: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 00837ac1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837ac3: je 0x837ad6 */ if (fZ) goto L_00837ad6;
L_00837ac5:; BB(0x00837ac5);
    /* 00837ac5: mov dword ptr [0xacd4fc], 1 */ W32((u32)(0xacd4fcu), 0x1u);
    /* 00837acf: mov edx, 1 */ r_edx = 0x1u;
    /* 00837ad4: jmp 0x837ae2 */ goto L_00837ae2;
L_00837ad6:; BB(0x00837ad6);
    /* 00837ad6: mov dword ptr [0xacd4fc], 0 */ W32((u32)(0xacd4fcu), 0x0u);
    /* 00837ae0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00837ae2:; BB(0x00837ae2);
    /* 00837ae2: mov ecx, dword ptr [0xaf0350] */ r_ecx = R32((u32)(0xaf0350u));
    /* 00837ae8: mov eax, dword ptr [0xaf0354] */ r_eax = R32((u32)(0xaf0354u));
    /* 00837aed: mov dword ptr [0xacd4e0], ecx */ W32((u32)(0xacd4e0u), r_ecx);
    /* 00837af3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00837af7: mov dword ptr [0xacd4e4], eax */ W32((u32)(0xacd4e4u), r_eax);
    /* 00837afc: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00837b00: mov dword ptr [0xacd4e8], eax */ W32((u32)(0xacd4e8u), r_eax);
    /* 00837b05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837b07: mov eax, 1 */ r_eax = 0x1u;
    /* 00837b0c: mov dword ptr [0xacd4ec], eax */ W32((u32)(0xacd4ecu), r_eax);
    /* 00837b11: mov dword ptr [0xacd500], eax */ W32((u32)(0xacd500u), r_eax);
    /* 00837b16: mov dword ptr [0xacd504], ecx */ W32((u32)(0xacd504u), r_ecx);
    /* 00837b1c: mov ecx, dword ptr [0xacbed8] */ r_ecx = R32((u32)(0xacbed8u));
    /* 00837b22: mov dword ptr [0xacd4f4], eax */ W32((u32)(0xacd4f4u), r_eax);
    /* 00837b27: mov dword ptr [0xacd4f8], ecx */ W32((u32)(0xacd4f8u), r_ecx);
    /* 00837b2d: mov dword ptr [0xacd508], eax */ W32((u32)(0xacd508u), r_eax);
    /* 00837b32: jne 0x837b40 */ if (!fZ) goto L_00837b40;
L_00837b34:; BB(0x00837b34);
    /* 00837b34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00837b36: mov dword ptr [0xacd50c], eax */ W32((u32)(0xacd50cu), r_eax);
    /* 00837b3b: mov dword ptr [0xacd510], eax */ W32((u32)(0xacd510u), r_eax);
L_00837b40:; BB(0x00837b40);
    /* 00837b40: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837b46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837b48: je 0x837bb9 */ if (fZ) goto L_00837bb9;
L_00837b4a:; BB(0x00837b4a);
    /* 00837b4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837b4c: je 0x837b97 */ if (fZ) goto L_00837b97;
L_00837b4e:; BB(0x00837b4e);
    /* 00837b4e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00837b52: cmp edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837b56: jne 0x837b65 */ if (!fZ) goto L_00837b65;
L_00837b58:; BB(0x00837b58);
    /* 00837b58: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00837b5d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00837b60: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
L_00837b65:; BB(0x00837b65);
    /* 00837b65: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837b69: jne 0x837b78 */ if (!fZ) goto L_00837b78;
L_00837b6b:; BB(0x00837b6b);
    /* 00837b6b: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00837b70: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00837b73: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
L_00837b78:; BB(0x00837b78);
    /* 00837b78: cmp edx, dword ptr [esp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837b7c: jne 0x837b8b */ if (!fZ) goto L_00837b8b;
L_00837b7e:; BB(0x00837b7e);
    /* 00837b7e: mov eax, dword ptr [0xacd538] */ r_eax = R32((u32)(0xacd538u));
    /* 00837b83: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00837b86: mov dword ptr [0xacd538], eax */ W32((u32)(0xacd538u), r_eax);
L_00837b8b:; BB(0x00837b8b);
    /* 00837b8b: mov eax, 1 */ r_eax = 0x1u;
    /* 00837b90: add esp, 0x620 */ {  u32 a = r_esp; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00837b96: ret  */ FN_RET(0x00837a44); r_esp += 4; return;
L_00837b97:; BB(0x00837b97);
    /* 00837b97: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00837b9c: call 0x83c084 */ r_esp -= 4; W32(r_esp, 0x837ba1u); f_0083c084();
    /* 00837ba1: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00837ba6: mov edx, 0x98a8b4 */ r_edx = 0x98a8b4u;
    /* 00837bab: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x837bb0u); f_0083bf84();
    /* 00837bb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00837bb2: add esp, 0x620 */ {  u32 a = r_esp; u32 b = 0x620u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00837bb8: ret  */ FN_RET(0x00837a44); r_esp += 4; return;
L_00837bb9:; BB(0x00837bb9);
    /* 00837bb9: mov edx, dword ptr [0xacd4a0] */ r_edx = R32((u32)(0xacd4a0u));
    /* 00837bbf: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00837bc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837bc4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00837bc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837bc8: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837bce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00837bcf: call dword ptr [ecx + 0x34] */ { u32 t = R32((u32)(r_ecx+0x34u)); r_esp -= 4; W32(r_esp, 0x837bd2u); call_ind(t); }
    /* 00837bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837bd4: jne 0x837c0e */ if (!fZ) goto L_00837c0e;
L_00837bd6:; BB(0x00837bd6);
    /* 00837bd6: mov eax, dword ptr [0xa21a80] */ r_eax = R32((u32)(0xa21a80u));
    /* 00837bdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837bdd: jne 0x837be7 */ if (!fZ) goto L_00837be7;
L_00837bdf:; BB(0x00837bdf);
    /* 00837bdf: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837be5: jmp 0x837bfd */ goto L_00837bfd;
L_00837be7:; BB(0x00837be7);
    /* 00837be7: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837bed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837bef: je 0x838560 */ if (fZ) goto L_00838560;
L_00837bf5:; BB(0x00837bf5);
    /* 00837bf5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837bf7: je 0x83838f */ if (fZ) goto L_0083838f;
L_00837bfd:; BB(0x00837bfd);
    /* 00837bfd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837bff: je 0x8381c4 */ if (fZ) goto L_008381c4;
L_00837c05:; BB(0x00837c05);
    /* 00837c05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837c07: je 0x837c19 */ if (fZ) goto L_00837c19;
L_00837c09:; BB(0x00837c09);
    /* 00837c09: jmp 0x837b4a */ goto L_00837b4a;
L_00837c0e:; BB(0x00837c0e);
    /* 00837c0e: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837c14: jmp 0x837b4a */ goto L_00837b4a;
L_00837c19:; BB(0x00837c19);
    /* 00837c19: mov edx, dword ptr [0xa21a80] */ r_edx = R32((u32)(0xa21a80u));
    /* 00837c1f: mov eax, 0x50 */ r_eax = 0x50u;
    /* 00837c24: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00837c28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837c2a: mov dword ptr [0xacd504], eax */ W32((u32)(0xacd504u), r_eax);
    /* 00837c2f: je 0x837c41 */ if (fZ) goto L_00837c41;
L_00837c31:; BB(0x00837c31);
    /* 00837c31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837c33: je 0x837fe5 */ if (fZ) goto L_00837fe5;
L_00837c39:; BB(0x00837c39);
    /* 00837c39: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837c3b: je 0x837e14 */ if (fZ) goto L_00837e14;
L_00837c41:; BB(0x00837c41);
    /* 00837c41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837c43: jne 0x837b4a */ if (!fZ) goto L_00837b4a;
L_00837c49:; BB(0x00837c49);
    /* 00837c49: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00837c4e: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837c53: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00837c58: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00837c5a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837c5c: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837c62: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837c64: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837c6b: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x837c6eu); call_ind(t); }
    /* 00837c6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00837c70: jge 0x837c83 */ if ((fS==fO)) goto L_00837c83;
L_00837c72:; BB(0x00837c72);
    /* 00837c72: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00837c7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00837c7e: jmp 0x837b4a */ goto L_00837b4a;
L_00837c83:; BB(0x00837c83);
    /* 00837c83: mov eax, 0x98a708 */ r_eax = 0x98a708u;
    /* 00837c88: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837c8a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00837c8d: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 00837c94: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00837c97: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 00837c9e: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 00837ca5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00837ca8: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 00837caf: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00837cb2: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 00837cb9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00837cbc: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 00837cc3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00837cc6: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 00837ccd: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00837cd0: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 00837cd7: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00837cda: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 00837ce1: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00837ce4: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00837ceb: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00837cee: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00837cf1: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 00837cf8: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 00837cff: mov eax, dword ptr [0xacd4fc] */ r_eax = R32((u32)(0xacd4fcu));
    /* 00837d04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837d06: je 0x837d30 */ if (fZ) goto L_00837d30;
L_00837d08:; BB(0x00837d08);
    /* 00837d08: mov ecx, dword ptr [esp + 0x10c] */ r_ecx = R32((u32)(r_esp+0x10cu));
    /* 00837d0f: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x837d14u); f_0083c070();
    /* 00837d14: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 00837d1b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00837d20: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x837d25u); f_0083bf84();
    /* 00837d25: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837d2b: jmp 0x837b4a */ goto L_00837b4a;
L_00837d30:; BB(0x00837d30);
    /* 00837d30: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00837d36: lea eax, [esp + 0x54c] */ r_eax = (u32)(r_esp+0x54cu);
    /* 00837d3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837d3e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00837d40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00837d41: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x837d44u); call_ind(t); }
    /* 00837d44: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837d4a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837d4c: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x837d4fu); call_ind(t); }
    /* 00837d4f: mov eax, dword ptr [0xacd514] */ r_eax = R32((u32)(0xacd514u));
    /* 00837d54: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00837d5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837d60: je 0x837da8 */ if (fZ) goto L_00837da8;
L_00837d62:; BB(0x00837d62);
    /* 00837d62: mov eax, dword ptr [esp + 0x560] */ r_eax = R32((u32)(r_esp+0x560u));
    /* 00837d69: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00837d6b: je 0x837d79 */ if (fZ) goto L_00837d79;
L_00837d6d:; BB(0x00837d6d);
    /* 00837d6d: mov dword ptr [0xacd510], 2 */ W32((u32)(0xacd510u), 0x2u);
    /* 00837d77: jmp 0x837db2 */ goto L_00837db2;
L_00837d79:; BB(0x00837d79);
    /* 00837d79: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00837d7b: je 0x837d89 */ if (fZ) goto L_00837d89;
L_00837d7d:; BB(0x00837d7d);
    /* 00837d7d: mov dword ptr [0xacd510], 1 */ W32((u32)(0xacd510u), 0x1u);
    /* 00837d87: jmp 0x837db2 */ goto L_00837db2;
L_00837d89:; BB(0x00837d89);
    /* 00837d89: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837d8e: je 0x837d9c */ if (fZ) goto L_00837d9c;
L_00837d90:; BB(0x00837d90);
    /* 00837d90: mov dword ptr [0xacd510], 0x80000000 */ W32((u32)(0xacd510u), 0x80000000u);
    /* 00837d9a: jmp 0x837db2 */ goto L_00837db2;
L_00837d9c:; BB(0x00837d9c);
    /* 00837d9c: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
    /* 00837da6: jmp 0x837db2 */ goto L_00837db2;
L_00837da8:; BB(0x00837da8);
    /* 00837da8: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
L_00837db2:; BB(0x00837db2);
    /* 00837db2: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00837db7: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837dbc: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00837dc1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00837dc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837dc5: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837dcb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837dcd: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837dd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837dd4: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x837dd7u); call_ind(t); }
    /* 00837dd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00837dd9: jl 0x837e03 */ if ((fS!=fO)) goto L_00837e03;
L_00837ddb:; BB(0x00837ddb);
    /* 00837ddb: mov ecx, dword ptr [esp + 0x10c] */ r_ecx = R32((u32)(r_esp+0x10cu));
    /* 00837de2: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x837de7u); f_0083c070();
    /* 00837de7: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 00837dee: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00837df3: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x837df8u); f_0083bf84();
    /* 00837df8: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837dfe: jmp 0x837b4a */ goto L_00837b4a;
L_00837e03:; BB(0x00837e03);
    /* 00837e03: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00837e0d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00837e0f: jmp 0x837b4a */ goto L_00837b4a;
L_00837e14:; BB(0x00837e14);
    /* 00837e14: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00837e19: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837e1e: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00837e23: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00837e28: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837e2a: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837e30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837e32: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837e38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837e39: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x837e3cu); call_ind(t); }
    /* 00837e3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00837e3e: jge 0x837e51 */ if ((fS==fO)) goto L_00837e51;
L_00837e40:; BB(0x00837e40);
    /* 00837e40: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00837e4a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00837e4c: jmp 0x837c41 */ goto L_00837c41;
L_00837e51:; BB(0x00837e51);
    /* 00837e51: mov eax, 0x98a738 */ r_eax = 0x98a738u;
    /* 00837e56: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837e58: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00837e5b: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 00837e62: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00837e65: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 00837e6c: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 00837e73: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00837e76: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 00837e7d: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00837e80: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 00837e87: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00837e8a: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 00837e91: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00837e94: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 00837e9b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00837e9e: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 00837ea5: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00837ea8: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 00837eaf: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00837eb2: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00837eb9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00837ebc: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00837ebf: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 00837ec6: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 00837ecd: mov eax, dword ptr [0xacd4fc] */ r_eax = R32((u32)(0xacd4fcu));
    /* 00837ed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837ed4: je 0x837efe */ if (fZ) goto L_00837efe;
L_00837ed6:; BB(0x00837ed6);
    /* 00837ed6: mov ecx, dword ptr [esp + 0x108] */ r_ecx = R32((u32)(r_esp+0x108u));
    /* 00837edd: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x837ee2u); f_0083c070();
    /* 00837ee2: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 00837ee9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00837eee: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x837ef3u); f_0083bf84();
    /* 00837ef3: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837ef9: jmp 0x837c41 */ goto L_00837c41;
L_00837efe:; BB(0x00837efe);
    /* 00837efe: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00837f04: lea eax, [esp + 0x478] */ r_eax = (u32)(r_esp+0x478u);
    /* 00837f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837f0c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00837f0e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00837f0f: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x837f12u); call_ind(t); }
    /* 00837f12: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00837f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837f18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837f1a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x837f1du); call_ind(t); }
    /* 00837f1d: mov eax, dword ptr [0xacd514] */ r_eax = R32((u32)(0xacd514u));
    /* 00837f22: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00837f2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837f2e: je 0x837f76 */ if (fZ) goto L_00837f76;
L_00837f30:; BB(0x00837f30);
    /* 00837f30: mov eax, dword ptr [esp + 0x48c] */ r_eax = R32((u32)(r_esp+0x48cu));
    /* 00837f37: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00837f39: je 0x837f47 */ if (fZ) goto L_00837f47;
L_00837f3b:; BB(0x00837f3b);
    /* 00837f3b: mov dword ptr [0xacd510], 2 */ W32((u32)(0xacd510u), 0x2u);
    /* 00837f45: jmp 0x837f80 */ goto L_00837f80;
L_00837f47:; BB(0x00837f47);
    /* 00837f47: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00837f49: je 0x837f57 */ if (fZ) goto L_00837f57;
L_00837f4b:; BB(0x00837f4b);
    /* 00837f4b: mov dword ptr [0xacd510], 1 */ W32((u32)(0xacd510u), 0x1u);
    /* 00837f55: jmp 0x837f80 */ goto L_00837f80;
L_00837f57:; BB(0x00837f57);
    /* 00837f57: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00837f5c: je 0x837f6a */ if (fZ) goto L_00837f6a;
L_00837f5e:; BB(0x00837f5e);
    /* 00837f5e: mov dword ptr [0xacd510], 0x80000000 */ W32((u32)(0xacd510u), 0x80000000u);
    /* 00837f68: jmp 0x837f80 */ goto L_00837f80;
L_00837f6a:; BB(0x00837f6a);
    /* 00837f6a: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
    /* 00837f74: jmp 0x837f80 */ goto L_00837f80;
L_00837f76:; BB(0x00837f76);
    /* 00837f76: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
L_00837f80:; BB(0x00837f80);
    /* 00837f80: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00837f85: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837f8a: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00837f8f: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00837f94: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837f96: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837f9c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00837f9e: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837fa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00837fa5: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x837fa8u); call_ind(t); }
    /* 00837fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00837faa: jl 0x837fd4 */ if ((fS!=fO)) goto L_00837fd4;
L_00837fac:; BB(0x00837fac);
    /* 00837fac: mov ecx, dword ptr [esp + 0x108] */ r_ecx = R32((u32)(r_esp+0x108u));
    /* 00837fb3: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x837fb8u); f_0083c070();
    /* 00837fb8: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 00837fbf: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00837fc4: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x837fc9u); f_0083bf84();
    /* 00837fc9: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00837fcf: jmp 0x837c41 */ goto L_00837c41;
L_00837fd4:; BB(0x00837fd4);
    /* 00837fd4: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00837fde: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00837fe0: jmp 0x837c41 */ goto L_00837c41;
L_00837fe5:; BB(0x00837fe5);
    /* 00837fe5: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00837fea: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00837fef: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00837ff4: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00837ff6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00837ff8: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00837ffe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838000: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838007: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x83800au); call_ind(t); }
    /* 0083800a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0083800c: jge 0x83801f */ if ((fS==fO)) goto L_0083801f;
L_0083800e:; BB(0x0083800e);
    /* 0083800e: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083801a: jmp 0x837c39 */ goto L_00837c39;
L_0083801f:; BB(0x0083801f);
    /* 0083801f: mov eax, 0x98a768 */ r_eax = 0x98a768u;
    /* 00838024: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838026: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00838029: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 00838030: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00838033: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 0083803a: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 00838041: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00838044: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 0083804b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083804e: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 00838055: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00838058: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 0083805f: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00838062: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 00838069: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0083806c: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 00838073: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00838076: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 0083807d: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00838080: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00838087: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0083808a: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0083808d: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 00838094: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 0083809b: mov eax, dword ptr [0xacd4fc] */ r_eax = R32((u32)(0xacd4fcu));
    /* 008380a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008380a2: je 0x8380d6 */ if (fZ) goto L_008380d6;
L_008380a4:; BB(0x008380a4);
    /* 008380a4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008380a9: call 0x834c50 */ r_esp -= 4; W32(r_esp, 0x8380aeu); f_00834c50();
    /* 008380ae: mov ecx, dword ptr [esp + 0x104] */ r_ecx = R32((u32)(r_esp+0x104u));
    /* 008380b5: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x8380bau); f_0083c070();
    /* 008380ba: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 008380c1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008380c6: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8380cbu); f_0083bf84();
    /* 008380cb: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008380d1: jmp 0x837c39 */ goto L_00837c39;
L_008380d6:; BB(0x008380d6);
    /* 008380d6: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008380dc: lea eax, [esp + 0x3a4] */ r_eax = (u32)(r_esp+0x3a4u);
    /* 008380e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008380e4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008380e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008380e7: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x8380eau); call_ind(t); }
    /* 008380ea: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008380ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008380f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008380f2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x8380f5u); call_ind(t); }
    /* 008380f5: mov eax, dword ptr [0xacd514] */ r_eax = R32((u32)(0xacd514u));
    /* 008380fa: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838104: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838106: je 0x83814e */ if (fZ) goto L_0083814e;
L_00838108:; BB(0x00838108);
    /* 00838108: mov eax, dword ptr [esp + 0x3b8] */ r_eax = R32((u32)(r_esp+0x3b8u));
    /* 0083810f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00838111: je 0x83811f */ if (fZ) goto L_0083811f;
L_00838113:; BB(0x00838113);
    /* 00838113: mov dword ptr [0xacd510], 2 */ W32((u32)(0xacd510u), 0x2u);
    /* 0083811d: jmp 0x838158 */ goto L_00838158;
L_0083811f:; BB(0x0083811f);
    /* 0083811f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00838121: je 0x83812f */ if (fZ) goto L_0083812f;
L_00838123:; BB(0x00838123);
    /* 00838123: mov dword ptr [0xacd510], 1 */ W32((u32)(0xacd510u), 0x1u);
    /* 0083812d: jmp 0x838158 */ goto L_00838158;
L_0083812f:; BB(0x0083812f);
    /* 0083812f: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838134: je 0x838142 */ if (fZ) goto L_00838142;
L_00838136:; BB(0x00838136);
    /* 00838136: mov dword ptr [0xacd510], 0x80000000 */ W32((u32)(0xacd510u), 0x80000000u);
    /* 00838140: jmp 0x838158 */ goto L_00838158;
L_00838142:; BB(0x00838142);
    /* 00838142: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
    /* 0083814c: jmp 0x838158 */ goto L_00838158;
L_0083814e:; BB(0x0083814e);
    /* 0083814e: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
L_00838158:; BB(0x00838158);
    /* 00838158: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 0083815d: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838162: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 00838167: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00838169: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083816b: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838171: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838173: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083817a: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x83817du); call_ind(t); }
    /* 0083817d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0083817f: jl 0x8381b3 */ if ((fS!=fO)) goto L_008381b3;
L_00838181:; BB(0x00838181);
    /* 00838181: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838186: call 0x834c50 */ r_esp -= 4; W32(r_esp, 0x83818bu); f_00834c50();
    /* 0083818b: mov ecx, dword ptr [esp + 0x104] */ r_ecx = R32((u32)(r_esp+0x104u));
    /* 00838192: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838197u); f_0083c070();
    /* 00838197: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 0083819e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008381a3: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8381a8u); f_0083bf84();
    /* 008381a8: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008381ae: jmp 0x837c39 */ goto L_00837c39;
L_008381b3:; BB(0x008381b3);
    /* 008381b3: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 008381bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008381bf: jmp 0x837c39 */ goto L_00837c39;
L_008381c4:; BB(0x008381c4);
    /* 008381c4: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 008381c9: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008381ce: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 008381d3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008381d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008381d7: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008381dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008381df: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008381e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008381e6: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8381e9u); call_ind(t); }
    /* 008381e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008381eb: jge 0x8381fe */ if ((fS==fO)) goto L_008381fe;
L_008381ed:; BB(0x008381ed);
    /* 008381ed: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 008381f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008381f9: jmp 0x837c05 */ goto L_00837c05;
L_008381fe:; BB(0x008381fe);
    /* 008381fe: mov eax, 0x98a798 */ r_eax = 0x98a798u;
    /* 00838203: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838205: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00838208: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 0083820f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00838212: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 00838219: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 00838220: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00838223: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 0083822a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0083822d: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 00838234: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00838237: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 0083823e: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00838241: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 00838248: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0083824b: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 00838252: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00838255: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 0083825c: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0083825f: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00838266: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00838269: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0083826c: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 00838273: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 0083827a: mov eax, dword ptr [0xacd4fc] */ r_eax = R32((u32)(0xacd4fcu));
    /* 0083827f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838281: je 0x8382ab */ if (fZ) goto L_008382ab;
L_00838283:; BB(0x00838283);
    /* 00838283: mov ecx, dword ptr [esp + 0x10c] */ r_ecx = R32((u32)(r_esp+0x10cu));
    /* 0083828a: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x83828fu); f_0083c070();
    /* 0083828f: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 00838296: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083829b: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x8382a0u); f_0083bf84();
    /* 008382a0: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008382a6: jmp 0x837c05 */ goto L_00837c05;
L_008382ab:; BB(0x008382ab);
    /* 008382ab: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008382b1: lea eax, [esp + 0x2d0] */ r_eax = (u32)(r_esp+0x2d0u);
    /* 008382b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008382b9: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008382bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008382bc: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x8382bfu); call_ind(t); }
    /* 008382bf: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008382c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008382c5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008382c7: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x8382cau); call_ind(t); }
    /* 008382ca: mov eax, dword ptr [0xacd514] */ r_eax = R32((u32)(0xacd514u));
    /* 008382cf: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 008382d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008382db: je 0x838323 */ if (fZ) goto L_00838323;
L_008382dd:; BB(0x008382dd);
    /* 008382dd: mov eax, dword ptr [esp + 0x2e4] */ r_eax = R32((u32)(r_esp+0x2e4u));
    /* 008382e4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008382e6: je 0x8382f4 */ if (fZ) goto L_008382f4;
L_008382e8:; BB(0x008382e8);
    /* 008382e8: mov dword ptr [0xacd510], 2 */ W32((u32)(0xacd510u), 0x2u);
    /* 008382f2: jmp 0x83832d */ goto L_0083832d;
L_008382f4:; BB(0x008382f4);
    /* 008382f4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008382f6: je 0x838304 */ if (fZ) goto L_00838304;
L_008382f8:; BB(0x008382f8);
    /* 008382f8: mov dword ptr [0xacd510], 1 */ W32((u32)(0xacd510u), 0x1u);
    /* 00838302: jmp 0x83832d */ goto L_0083832d;
L_00838304:; BB(0x00838304);
    /* 00838304: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838309: je 0x838317 */ if (fZ) goto L_00838317;
L_0083830b:; BB(0x0083830b);
    /* 0083830b: mov dword ptr [0xacd510], 0x80000000 */ W32((u32)(0xacd510u), 0x80000000u);
    /* 00838315: jmp 0x83832d */ goto L_0083832d;
L_00838317:; BB(0x00838317);
    /* 00838317: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
    /* 00838321: jmp 0x83832d */ goto L_0083832d;
L_00838323:; BB(0x00838323);
    /* 00838323: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
L_0083832d:; BB(0x0083832d);
    /* 0083832d: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00838332: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838337: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 0083833c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0083833e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838340: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838346: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838348: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083834e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083834f: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x838352u); call_ind(t); }
    /* 00838352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00838354: jl 0x83837e */ if ((fS!=fO)) goto L_0083837e;
L_00838356:; BB(0x00838356);
    /* 00838356: mov ecx, dword ptr [esp + 0x10c] */ r_ecx = R32((u32)(r_esp+0x10cu));
    /* 0083835d: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838362u); f_0083c070();
    /* 00838362: mov edx, dword ptr [esp + 0x10c] */ r_edx = R32((u32)(r_esp+0x10cu));
    /* 00838369: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083836e: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838373u); f_0083bf84();
    /* 00838373: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00838379: jmp 0x837c05 */ goto L_00837c05;
L_0083837e:; BB(0x0083837e);
    /* 0083837e: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838388: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083838a: jmp 0x837c05 */ goto L_00837c05;
L_0083838f:; BB(0x0083838f);
    /* 0083838f: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00838394: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838399: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 0083839e: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008383a3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008383a5: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008383ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008383ad: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008383b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008383b4: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8383b7u); call_ind(t); }
    /* 008383b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008383b9: jge 0x8383cc */ if ((fS==fO)) goto L_008383cc;
L_008383bb:; BB(0x008383bb);
    /* 008383bb: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 008383c5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008383c7: jmp 0x837bfd */ goto L_00837bfd;
L_008383cc:; BB(0x008383cc);
    /* 008383cc: mov eax, 0x98a7c8 */ r_eax = 0x98a7c8u;
    /* 008383d1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008383d3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008383d6: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 008383dd: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008383e0: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 008383e7: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 008383ee: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008383f1: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 008383f8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008383fb: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 00838402: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00838405: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 0083840c: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0083840f: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 00838416: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00838419: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 00838420: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00838423: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 0083842a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0083842d: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00838434: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00838437: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0083843a: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 00838441: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 00838448: mov eax, dword ptr [0xacd4fc] */ r_eax = R32((u32)(0xacd4fcu));
    /* 0083844d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083844f: je 0x838479 */ if (fZ) goto L_00838479;
L_00838451:; BB(0x00838451);
    /* 00838451: mov ecx, dword ptr [esp + 0x108] */ r_ecx = R32((u32)(r_esp+0x108u));
    /* 00838458: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x83845du); f_0083c070();
    /* 0083845d: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 00838464: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838469: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x83846eu); f_0083bf84();
    /* 0083846e: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00838474: jmp 0x837bfd */ goto L_00837bfd;
L_00838479:; BB(0x00838479);
    /* 00838479: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0083847f: lea eax, [esp + 0x1fc] */ r_eax = (u32)(r_esp+0x1fcu);
    /* 00838486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838487: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00838489: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083848a: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x83848du); call_ind(t); }
    /* 0083848d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00838492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838493: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838495: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x838498u); call_ind(t); }
    /* 00838498: mov eax, dword ptr [0xacd514] */ r_eax = R32((u32)(0xacd514u));
    /* 0083849d: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 008384a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008384a9: je 0x8384f1 */ if (fZ) goto L_008384f1;
L_008384ab:; BB(0x008384ab);
    /* 008384ab: mov eax, dword ptr [esp + 0x210] */ r_eax = R32((u32)(r_esp+0x210u));
    /* 008384b2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008384b4: je 0x8384c2 */ if (fZ) goto L_008384c2;
L_008384b6:; BB(0x008384b6);
    /* 008384b6: mov dword ptr [0xacd510], 2 */ W32((u32)(0xacd510u), 0x2u);
    /* 008384c0: jmp 0x8384fb */ goto L_008384fb;
L_008384c2:; BB(0x008384c2);
    /* 008384c2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008384c4: je 0x8384d2 */ if (fZ) goto L_008384d2;
L_008384c6:; BB(0x008384c6);
    /* 008384c6: mov dword ptr [0xacd510], 1 */ W32((u32)(0xacd510u), 0x1u);
    /* 008384d0: jmp 0x8384fb */ goto L_008384fb;
L_008384d2:; BB(0x008384d2);
    /* 008384d2: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008384d7: je 0x8384e5 */ if (fZ) goto L_008384e5;
L_008384d9:; BB(0x008384d9);
    /* 008384d9: mov dword ptr [0xacd510], 0x80000000 */ W32((u32)(0xacd510u), 0x80000000u);
    /* 008384e3: jmp 0x8384fb */ goto L_008384fb;
L_008384e5:; BB(0x008384e5);
    /* 008384e5: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
    /* 008384ef: jmp 0x8384fb */ goto L_008384fb;
L_008384f1:; BB(0x008384f1);
    /* 008384f1: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
L_008384fb:; BB(0x008384fb);
    /* 008384fb: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00838500: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00838505: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 0083850a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0083850f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838511: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838517: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00838519: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083851f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838520: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x838523u); call_ind(t); }
    /* 00838523: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00838525: jl 0x83854f */ if ((fS!=fO)) goto L_0083854f;
L_00838527:; BB(0x00838527);
    /* 00838527: mov ecx, dword ptr [esp + 0x108] */ r_ecx = R32((u32)(r_esp+0x108u));
    /* 0083852e: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838533u); f_0083c070();
    /* 00838533: mov edx, dword ptr [esp + 0x108] */ r_edx = R32((u32)(r_esp+0x108u));
    /* 0083853a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083853f: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838544u); f_0083bf84();
    /* 00838544: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0083854a: jmp 0x837bfd */ goto L_00837bfd;
L_0083854f:; BB(0x0083854f);
    /* 0083854f: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838559: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083855b: jmp 0x837bfd */ goto L_00837bfd;
L_00838560:; BB(0x00838560);
    /* 00838560: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 00838565: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083856a: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 0083856f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00838571: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00838573: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838579: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0083857b: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 00838581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00838582: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x838585u); call_ind(t); }
    /* 00838585: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00838587: jge 0x83859a */ if ((fS==fO)) goto L_0083859a;
L_00838589:; BB(0x00838589);
    /* 00838589: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838593: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00838595: jmp 0x837bf5 */ goto L_00837bf5;
L_0083859a:; BB(0x0083859a);
    /* 0083859a: mov eax, 0x98a7f8 */ r_eax = 0x98a7f8u;
    /* 0083859f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008385a1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008385a4: mov dword ptr [esp + 0xf8], edx */ W32((u32)(r_esp+0xf8u), r_edx);
    /* 008385ab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008385ae: mov dword ptr [esp + 0xfc], ecx */ W32((u32)(r_esp+0xfcu), r_ecx);
    /* 008385b5: mov dword ptr [esp + 0x100], edx */ W32((u32)(r_esp+0x100u), r_edx);
    /* 008385bc: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008385bf: mov dword ptr [esp + 0x104], edx */ W32((u32)(r_esp+0x104u), r_edx);
    /* 008385c6: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008385c9: mov dword ptr [esp + 0x108], edx */ W32((u32)(r_esp+0x108u), r_edx);
    /* 008385d0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 008385d3: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 008385da: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 008385dd: mov dword ptr [esp + 0x110], edx */ W32((u32)(r_esp+0x110u), r_edx);
    /* 008385e4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 008385e7: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 008385ee: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 008385f1: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 008385f8: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 008385fb: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00838602: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00838605: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00838608: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 0083860f: mov dword ptr [esp + 0x124], eax */ W32((u32)(r_esp+0x124u), r_eax);
    /* 00838616: mov eax, dword ptr [0xacd4fc] */ r_eax = R32((u32)(0xacd4fcu));
    /* 0083861b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083861d: je 0x838651 */ if (fZ) goto L_00838651;
L_0083861f:; BB(0x0083861f);
    /* 0083861f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838624: call 0x834c50 */ r_esp -= 4; W32(r_esp, 0x838629u); f_00834c50();
    /* 00838629: mov ecx, dword ptr [esp + 0x104] */ r_ecx = R32((u32)(r_esp+0x104u));
    /* 00838630: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838635u); f_0083c070();
    /* 00838635: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 0083863c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838641: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838646u); f_0083bf84();
    /* 00838646: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0083864c: jmp 0x837bf5 */ goto L_00837bf5;
L_00838651:; BB(0x00838651);
    /* 00838651: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00838657: lea eax, [esp + 0x128] */ r_eax = (u32)(r_esp+0x128u);
    /* 0083865e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083865f: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00838661: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00838662: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x838665u); call_ind(t); }
    /* 00838665: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0083866a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083866b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083866d: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x838670u); call_ind(t); }
    /* 00838670: mov eax, dword ptr [0xacd514] */ r_eax = R32((u32)(0xacd514u));
    /* 00838675: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 0083867f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00838681: je 0x8386c9 */ if (fZ) goto L_008386c9;
L_00838683:; BB(0x00838683);
    /* 00838683: mov eax, dword ptr [esp + 0x13c] */ r_eax = R32((u32)(r_esp+0x13cu));
    /* 0083868a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083868c: je 0x83869a */ if (fZ) goto L_0083869a;
L_0083868e:; BB(0x0083868e);
    /* 0083868e: mov dword ptr [0xacd510], 2 */ W32((u32)(0xacd510u), 0x2u);
    /* 00838698: jmp 0x8386d3 */ goto L_008386d3;
L_0083869a:; BB(0x0083869a);
    /* 0083869a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083869c: je 0x8386aa */ if (fZ) goto L_008386aa;
L_0083869e:; BB(0x0083869e);
    /* 0083869e: mov dword ptr [0xacd510], 1 */ W32((u32)(0xacd510u), 0x1u);
    /* 008386a8: jmp 0x8386d3 */ goto L_008386d3;
L_008386aa:; BB(0x008386aa);
    /* 008386aa: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008386af: je 0x8386bd */ if (fZ) goto L_008386bd;
L_008386b1:; BB(0x008386b1);
    /* 008386b1: mov dword ptr [0xacd510], 0x80000000 */ W32((u32)(0xacd510u), 0x80000000u);
    /* 008386bb: jmp 0x8386d3 */ goto L_008386d3;
L_008386bd:; BB(0x008386bd);
    /* 008386bd: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
    /* 008386c7: jmp 0x8386d3 */ goto L_008386d3;
L_008386c9:; BB(0x008386c9);
    /* 008386c9: mov dword ptr [0xacd510], 0 */ W32((u32)(0xacd510u), 0x0u);
L_008386d3:; BB(0x008386d3);
    /* 008386d3: push 0xacd528 */ { u32 v = 0xacd528u; r_esp -= 4; W32(r_esp, v); }
    /* 008386d8: push 0xacd4e0 */ { u32 v = 0xacd4e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008386dd: mov eax, dword ptr [0xacd4a0] */ r_eax = R32((u32)(0xacd4a0u));
    /* 008386e2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008386e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008386e6: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008386ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008386ee: push dword ptr [0xacd524] */ { u32 v = R32((u32)(0xacd524u)); r_esp -= 4; W32(r_esp, v); }
    /* 008386f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008386f5: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8386f8u); call_ind(t); }
    /* 008386f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008386fa: jl 0x83872e */ if ((fS!=fO)) goto L_0083872e;
L_008386fc:; BB(0x008386fc);
    /* 008386fc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00838701: call 0x834c50 */ r_esp -= 4; W32(r_esp, 0x838706u); f_00834c50();
    /* 00838706: mov ecx, dword ptr [esp + 0x104] */ r_ecx = R32((u32)(r_esp+0x104u));
    /* 0083870d: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x838712u); f_0083c070();
    /* 00838712: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 00838719: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083871e: call 0x83bf84 */ r_esp -= 4; W32(r_esp, 0x838723u); f_0083bf84();
    /* 00838723: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00838729: jmp 0x837bf5 */ goto L_00837bf5;
L_0083872e:; BB(0x0083872e);
    /* 0083872e: mov dword ptr [0xacd528], 0 */ W32((u32)(0xacd528u), 0x0u);
    /* 00838738: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083873a: jmp 0x837bf5 */ goto L_00837bf5;
}

