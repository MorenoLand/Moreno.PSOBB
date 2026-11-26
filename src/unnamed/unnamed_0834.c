#include "protos.h"

void f_00834044(void) /* sub_834044 */
{
    FN_ENTER(0x00834044);
    /* 00834044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834045: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834046: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834047: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834048: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834049: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0083404d: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00834051: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00834056: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00834058: jne 0x834061 */ if (!fZ) goto L_00834061;
L_0083405a:; BB(0x0083405a);
    /* 0083405a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083405c: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x834061u); f_00839a28();
L_00834061:; BB(0x00834061);
    /* 00834061: mov ecx, dword ptr [0xacc180] */ r_ecx = R32((u32)(0xacc180u));
    /* 00834067: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0083406b: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0083406f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834071: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00834074: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834076: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834078: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083407a: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 0083407f: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00834082: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00834085:; BB(0x00834085);
    /* 00834085: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00834088: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0083408b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083408d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083408f: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00834092: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00834094: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00834098: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0083409b: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 0083409f: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 008340a2: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 008340a6: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 008340a9: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 008340ad: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 008340b0: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 008340b4: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008340b7: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008340ba: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008340bd: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008340c0: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008340c3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008340c5: jne 0x834085 */ if (!fZ) goto L_00834085;
L_008340c7:; BB(0x008340c7);
    /* 008340c7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008340ca: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 008340cf: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008340d5: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 008340d7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008340d9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008340db: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008340e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008340e3: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008340e6: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 008340e8: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008340eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008340ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008340ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008340ef: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x8340f5u); call_ind(t); }
    /* 008340f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008340f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008340f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008340f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008340f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008340fa: ret  */ FN_RET(0x00834044); r_esp += 4; return;
}

void f_008340fc(void) /* sub_8340FC */
{
    FN_ENTER(0x008340fc);
    /* 008340fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008340fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008340fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008340ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834100: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834101: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00834105: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00834109: mov ecx, dword ptr [0xacc180] */ r_ecx = R32((u32)(0xacc180u));
    /* 0083410f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00834113: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00834117: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834119: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 0083411c: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0083411f: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00834124: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00834127:; BB(0x00834127);
    /* 00834127: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 0083412a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083412c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083412e: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00834131: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00834133: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00834137: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0083413a: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 0083413e: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00834141: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00834145: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00834148: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 0083414c: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 0083414f: mov esi, dword ptr [ebx + edx*8 + 0x14] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00834153: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 00834156: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00834159: mov esi, dword ptr [ebx + edx*8 + 0x18] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x18u));
    /* 0083415d: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00834160: mov edx, dword ptr [ebx + edx*8 + 0x1c] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x1cu));
    /* 00834164: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00834167: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083416a: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083416d: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834170: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834172: jne 0x834127 */ if (!fZ) goto L_00834127;
L_00834174:; BB(0x00834174);
    /* 00834174: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00834177: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 0083417c: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00834182: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00834184: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834186: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00834188: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083418e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834190: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00834192: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00834195: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834198: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834199: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083419b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083419c: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x8341a2u); call_ind(t); }
    /* 008341a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008341a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008341a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008341a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008341a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008341a7: ret  */ FN_RET(0x008340fc); r_esp += 4; return;
}

void f_008341a8(void) /* sub_8341A8 */
{
    FN_ENTER(0x008341a8);
    /* 008341a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008341a9: mov ebx, esp */ r_ebx = r_esp;
    /* 008341ab: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008341ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008341af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008341b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008341b1: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008341b4: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008341b7: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008341ba: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008341bf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008341c1: jne 0x8341ca */ if (!fZ) goto L_008341ca;
L_008341c3:; BB(0x008341c3);
    /* 008341c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008341c5: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x8341cau); f_00839a28();
L_008341ca:; BB(0x008341ca);
    /* 008341ca: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 008341d0: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 008341d6: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 008341dc: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 008341e2: mov ecx, dword ptr [0xacd52c] */ r_ecx = R32((u32)(0xacd52cu));
    /* 008341e8: fld dword ptr [0x98a57c] */ FPUSH(R_F32((u32)(0x98a57cu)));
    /* 008341ee: fld dword ptr [0x98a578] */ FPUSH(R_F32((u32)(0x98a578u)));
    /* 008341f4: fld dword ptr [0x98a574] */ FPUSH(R_F32((u32)(0x98a574u)));
    /* 008341fa: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008341fd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008341ff: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00834203: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834205: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00834209: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083420b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0083420f: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00834213: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00834217: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834219: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083421b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083421d: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834220: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
L_00834224:; BB(0x00834224);
    /* 00834224: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00834227: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00834229: mov ebp, dword ptr [edx + esi*8 + 0xc] */ r_ebp = R32((u32)(r_edx+r_esi*8+0xcu));
    /* 0083422d: mov eax, ebp */ r_eax = r_ebp;
    /* 0083422f: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834232: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00834235: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00834238: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0083423b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083423e: fadd dword ptr [eax*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a540u));
    /* 00834245: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00834247: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 0083424b: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083424e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834250: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834252: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834253: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834255: jae 0x834259 */ if (!fC) goto L_00834259;
L_00834257:; BB(0x00834257);
    /* 00834257: fst st(2) */ ST(2) = ST(0);
L_00834259:; BB(0x00834259);
    /* 00834259: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083425b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0083425d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083425f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834260: jae 0x834264 */ if (!fC) goto L_00834264;
L_00834262:; BB(0x00834262);
    /* 00834262: fst st(2) */ ST(2) = ST(0);
L_00834264:; BB(0x00834264);
    /* 00834264: mov eax, ebp */ r_eax = r_ebp;
    /* 00834266: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834269: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0083426c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00834270: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834274: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834277: fadd dword ptr [eax*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a540u));
    /* 0083427e: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00834280: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 00834284: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834286: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834288: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834289: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083428b: jae 0x83428f */ if (!fC) goto L_0083428f;
L_0083428d:; BB(0x0083428d);
    /* 0083428d: fst st(2) */ ST(2) = ST(0);
L_0083428f:; BB(0x0083428f);
    /* 0083428f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834291: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834293: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834296: jae 0x83429a */ if (!fC) goto L_0083429a;
L_00834298:; BB(0x00834298);
    /* 00834298: fst st(2) */ ST(2) = ST(0);
L_0083429a:; BB(0x0083429a);
    /* 0083429a: mov eax, ebp */ r_eax = r_ebp;
    /* 0083429c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008342a1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008342a5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008342a9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008342ac: fadd dword ptr [eax*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a540u));
    /* 008342b3: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 008342b5: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 008342b9: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 008342bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008342bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008342be: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008342c0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008342c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008342c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008342c6: jae 0x8342ca */ if (!fC) goto L_008342ca;
L_008342c8:; BB(0x008342c8);
    /* 008342c8: fst st(4) */ ST(4) = ST(0);
L_008342ca:; BB(0x008342ca);
    /* 008342ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008342cb: jbe 0x8342d7 */ if ((fC||fZ)) goto L_008342d7;
L_008342cd:; BB(0x008342cd);
    /* 008342cd: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 008342cf: fld dword ptr [0x98a574] */ FPUSH(R_F32((u32)(0x98a574u)));
    /* 008342d5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_008342d7:; BB(0x008342d7);
    /* 008342d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008342d9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008342db: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008342dd: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008342df: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008342e1: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008342e3: shr ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008342e6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008342ea: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008342ee: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008342f1: fadd dword ptr [ebp*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98a540u));
    /* 008342f8: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 008342fa: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 008342fc: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 008342fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834300: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834301: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834303: jae 0x834307 */ if (!fC) goto L_00834307;
L_00834305:; BB(0x00834305);
    /* 00834305: fst st(3) */ ST(3) = ST(0);
L_00834307:; BB(0x00834307);
    /* 00834307: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834309: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0083430b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083430d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083430e: mov eax, dword ptr [edx + esi*8] */ r_eax = R32((u32)(r_edx+r_esi*8));
    /* 00834311: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00834313: mov eax, dword ptr [edx + esi*8 + 4] */ r_eax = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 00834317: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0083431a: mov esi, dword ptr [edx + esi*8 + 8] */ r_esi = R32((u32)(r_edx+r_esi*8+0x8u));
    /* 0083431e: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 00834321: jae 0x834325 */ if (!fC) goto L_00834325;
L_00834323:; BB(0x00834323);
    /* 00834323: fst st(3) */ ST(3) = ST(0);
L_00834325:; BB(0x00834325);
    /* 00834325: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834327: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00834329: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0083432d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834332: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834337: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083433b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0083433f: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834343: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834347: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0083434b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083434d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834351: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834356: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083435b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083435f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834363: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834367: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083436b: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00834370: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00834373: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00834376: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00834378: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083437a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0083437e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834383: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834388: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083438c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834390: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834394: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834398: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0083439d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008343a0: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008343a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008343a4: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 008343a8: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 008343ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008343b2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008343b6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008343ba: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 008343be: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008343c2: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 008343c7: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008343c9: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008343cd: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 008343d0: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008343d3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008343d6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 008343da: jne 0x834224 */ if (!fZ) goto L_00834224;
L_008343e0:; BB(0x008343e0);
    /* 008343e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 008343ec: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008343f2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008343f4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008343f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008343f8: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008343fe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834400: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834403: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834406: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834407: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00834409: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083440a: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x834410u); call_ind(t); }
    /* 00834410: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00834413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834414: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834416: mov esp, ebx */ r_esp = r_ebx;
    /* 00834418: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00834419: ret  */ FN_RET(0x008341a8); r_esp += 4; return;
}

void f_00834301(void)
{
    FN_ENTER(0x00834301);
    goto L_00834301;
L_00834224:; BB(0x00834224);
    /* 00834224: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00834227: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00834229: mov ebp, dword ptr [edx + esi*8 + 0xc] */ r_ebp = R32((u32)(r_edx+r_esi*8+0xcu));
    /* 0083422d: mov eax, ebp */ r_eax = r_ebp;
    /* 0083422f: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834232: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00834235: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00834238: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0083423b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083423e: fadd dword ptr [eax*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a540u));
    /* 00834245: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00834247: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 0083424b: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083424e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834250: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834252: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834253: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834255: jae 0x834259 */ if (!fC) goto L_00834259;
L_00834257:; BB(0x00834257);
    /* 00834257: fst st(2) */ ST(2) = ST(0);
L_00834259:; BB(0x00834259);
    /* 00834259: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083425b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0083425d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083425f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834260: jae 0x834264 */ if (!fC) goto L_00834264;
L_00834262:; BB(0x00834262);
    /* 00834262: fst st(2) */ ST(2) = ST(0);
L_00834264:; BB(0x00834264);
    /* 00834264: mov eax, ebp */ r_eax = r_ebp;
    /* 00834266: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834269: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0083426c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00834270: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834274: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834277: fadd dword ptr [eax*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a540u));
    /* 0083427e: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00834280: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 00834284: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834286: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834288: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834289: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083428b: jae 0x83428f */ if (!fC) goto L_0083428f;
L_0083428d:; BB(0x0083428d);
    /* 0083428d: fst st(2) */ ST(2) = ST(0);
L_0083428f:; BB(0x0083428f);
    /* 0083428f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834291: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834293: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834296: jae 0x83429a */ if (!fC) goto L_0083429a;
L_00834298:; BB(0x00834298);
    /* 00834298: fst st(2) */ ST(2) = ST(0);
L_0083429a:; BB(0x0083429a);
    /* 0083429a: mov eax, ebp */ r_eax = r_ebp;
    /* 0083429c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008342a1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008342a5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008342a9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008342ac: fadd dword ptr [eax*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a540u));
    /* 008342b3: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 008342b5: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 008342b9: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 008342bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008342bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008342be: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008342c0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008342c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008342c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008342c6: jae 0x8342ca */ if (!fC) goto L_008342ca;
L_008342c8:; BB(0x008342c8);
    /* 008342c8: fst st(4) */ ST(4) = ST(0);
L_008342ca:; BB(0x008342ca);
    /* 008342ca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008342cb: jbe 0x8342d7 */ if ((fC||fZ)) goto L_008342d7;
L_008342cd:; BB(0x008342cd);
    /* 008342cd: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 008342cf: fld dword ptr [0x98a574] */ FPUSH(R_F32((u32)(0x98a574u)));
    /* 008342d5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_008342d7:; BB(0x008342d7);
    /* 008342d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008342d9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008342db: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008342dd: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008342df: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008342e1: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008342e3: shr ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008342e6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008342ea: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008342ee: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008342f1: fadd dword ptr [ebp*4 + 0x98a540] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98a540u));
    /* 008342f8: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 008342fa: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 008342fc: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 008342fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834300: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
L_00834301:; BB(0x00834301);
    /* 00834301: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834303: jae 0x834307 */ if (!fC) goto L_00834307;
L_00834305:; BB(0x00834305);
    /* 00834305: fst st(3) */ ST(3) = ST(0);
L_00834307:; BB(0x00834307);
    /* 00834307: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834309: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0083430b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083430d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083430e: mov eax, dword ptr [edx + esi*8] */ r_eax = R32((u32)(r_edx+r_esi*8));
    /* 00834311: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00834313: mov eax, dword ptr [edx + esi*8 + 4] */ r_eax = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 00834317: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0083431a: mov esi, dword ptr [edx + esi*8 + 8] */ r_esi = R32((u32)(r_edx+r_esi*8+0x8u));
    /* 0083431e: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 00834321: jae 0x834325 */ if (!fC) goto L_00834325;
L_00834323:; BB(0x00834323);
    /* 00834323: fst st(3) */ ST(3) = ST(0);
L_00834325:; BB(0x00834325);
    /* 00834325: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834327: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00834329: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0083432d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834332: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834337: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083433b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0083433f: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834343: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834347: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0083434b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083434d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834351: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834356: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083435b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083435f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834363: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834367: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083436b: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00834370: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00834373: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00834376: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00834378: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083437a: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0083437e: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834383: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834388: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083438c: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834390: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834394: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834398: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0083439d: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008343a0: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008343a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008343a4: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 008343a8: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 008343ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008343b2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008343b6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008343ba: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 008343be: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008343c2: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 008343c7: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008343c9: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008343cd: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 008343d0: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008343d3: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008343d6: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 008343da: jne 0x834224 */ if (!fZ) goto L_00834224;
L_008343e0:; BB(0x008343e0);
    /* 008343e0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008343e8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 008343ec: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 008343f2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008343f4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008343f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008343f8: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008343fe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834400: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834403: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00834406: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834407: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00834409: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083440a: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x834410u); call_ind(t); }
    /* 00834410: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00834413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834414: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834415: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834416: mov esp, ebx */ r_esp = r_ebx;
    /* 00834418: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00834419: ret  */ FN_RET(0x00834301); r_esp += 4; return;
}

void f_0083441c(void) /* sub_83441C */
{
    FN_ENTER(0x0083441c);
    /* 0083441c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083441d: mov ebx, esp */ r_ebx = r_esp;
    /* 0083441f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00834422: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834423: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834425: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00834428: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0083442b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0083442e: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00834434: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 0083443a: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00834440: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00834446: mov ecx, dword ptr [0xacd52c] */ r_ecx = R32((u32)(0xacd52cu));
    /* 0083444c: fld dword ptr [0x98a570] */ FPUSH(R_F32((u32)(0x98a570u)));
    /* 00834452: fld dword ptr [0x98a56c] */ FPUSH(R_F32((u32)(0x98a56cu)));
    /* 00834458: fld dword ptr [0x98a568] */ FPUSH(R_F32((u32)(0x98a568u)));
    /* 0083445e: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 00834461: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834463: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00834467: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834469: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0083446d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083446f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00834473: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00834477: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083447a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083447c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083447e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834480: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834482: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834484: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00834487: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_0083448b:; BB(0x0083448b);
    /* 0083448b: movzx edi, word ptr [ebp] */ r_edi = (u32)R16((u32)(r_ebp));
    /* 0083448f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00834492: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834494: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00834496: mov edi, dword ptr [esi + edx*8 + 0xc] */ r_edi = R32((u32)(r_esi+r_edx*8+0xcu));
    /* 0083449a: mov eax, edi */ r_eax = r_edi;
    /* 0083449c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083449f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008344a2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008344a5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008344a8: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008344ab: fadd dword ptr [eax*4 + 0x98a538] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a538u));
    /* 008344b2: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 008344b4: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 008344b8: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008344bb: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 008344bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008344bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008344c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008344c2: jae 0x8344c6 */ if (!fC) goto L_008344c6;
L_008344c4:; BB(0x008344c4);
    /* 008344c4: fst st(2) */ ST(2) = ST(0);
L_008344c6:; BB(0x008344c6);
    /* 008344c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008344c8: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 008344ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008344cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008344cd: jae 0x8344d1 */ if (!fC) goto L_008344d1;
L_008344cf:; BB(0x008344cf);
    /* 008344cf: fst st(2) */ ST(2) = ST(0);
L_008344d1:; BB(0x008344d1);
    /* 008344d1: mov eax, edi */ r_eax = r_edi;
    /* 008344d3: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008344d6: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008344d9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008344dd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008344e1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008344e4: fadd dword ptr [eax*4 + 0x98a538] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a538u));
    /* 008344eb: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 008344ed: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 008344f1: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 008344f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008344f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008344f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008344f8: jae 0x8344fc */ if (!fC) goto L_008344fc;
L_008344fa:; BB(0x008344fa);
    /* 008344fa: fst st(2) */ ST(2) = ST(0);
L_008344fc:; BB(0x008344fc);
    /* 008344fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008344fe: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834500: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834502: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834503: jae 0x834507 */ if (!fC) goto L_00834507;
L_00834505:; BB(0x00834505);
    /* 00834505: fst st(2) */ ST(2) = ST(0);
L_00834507:; BB(0x00834507);
    /* 00834507: mov eax, edi */ r_eax = r_edi;
    /* 00834509: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083450e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00834512: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834516: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834519: fadd dword ptr [eax*4 + 0x98a538] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a538u));
    /* 00834520: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 00834522: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 00834526: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834528: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083452a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083452b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083452d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0083452f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834531: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834533: jae 0x834537 */ if (!fC) goto L_00834537;
L_00834535:; BB(0x00834535);
    /* 00834535: fst st(4) */ ST(4) = ST(0);
L_00834537:; BB(0x00834537);
    /* 00834537: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834538: jbe 0x834544 */ if ((fC||fZ)) goto L_00834544;
L_0083453a:; BB(0x0083453a);
    /* 0083453a: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0083453c: fld dword ptr [0x98a568] */ FPUSH(R_F32((u32)(0x98a568u)));
    /* 00834542: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_00834544:; BB(0x00834544);
    /* 00834544: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834546: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00834548: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083454a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083454c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083454e: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00834550: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00834553: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00834557: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0083455b: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0083455e: fadd dword ptr [edi*4 + 0x98a538] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x98a538u));
    /* 00834565: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 00834567: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00834569: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0083456b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083456d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083456e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834570: jae 0x834574 */ if (!fC) goto L_00834574;
L_00834572:; BB(0x00834572);
    /* 00834572: fst st(3) */ ST(3) = ST(0);
L_00834574:; BB(0x00834574);
    /* 00834574: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834576: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00834578: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083457a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083457b: mov eax, dword ptr [esi + edx*8] */ r_eax = R32((u32)(r_esi+r_edx*8));
    /* 0083457e: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00834580: mov eax, dword ptr [esi + edx*8 + 4] */ r_eax = R32((u32)(r_esi+r_edx*8+0x4u));
    /* 00834584: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00834587: mov eax, dword ptr [esi + edx*8 + 8] */ r_eax = R32((u32)(r_esi+r_edx*8+0x8u));
    /* 0083458b: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0083458e: jae 0x834592 */ if (!fC) goto L_00834592;
L_00834590:; BB(0x00834590);
    /* 00834590: fst st(3) */ ST(3) = ST(0);
L_00834592:; BB(0x00834592);
    /* 00834592: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834594: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00834596: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0083459a: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0083459f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008345a4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008345a8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008345ac: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 008345b0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008345b4: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 008345b8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008345ba: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 008345be: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 008345c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008345c8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008345cc: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008345d0: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 008345d4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008345d8: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 008345dd: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008345e0: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008345e3: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008345e5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008345e7: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 008345eb: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 008345f0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008345f5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008345f9: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008345fd: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834601: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834605: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0083460a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0083460d: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0083460f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834611: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834615: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0083461a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083461f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834623: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834627: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0083462b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0083462f: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00834634: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00834636: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 00834639: mov eax, dword ptr [esi + edx*8 + 0x10] */ r_eax = R32((u32)(r_esi+r_edx*8+0x10u));
    /* 0083463d: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00834640: mov edx, dword ptr [esi + edx*8 + 0x14] */ r_edx = R32((u32)(r_esi+r_edx*8+0x14u));
    /* 00834644: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00834648: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0083464b: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083464e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00834651: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00834655: jne 0x83448b */ if (!fZ) goto L_0083448b;
L_0083465b:; BB(0x0083465b);
    /* 0083465b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083465d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083465f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834661: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834663: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00834667: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0083466d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0083466f: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00834671: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834673: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00834679: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083467b: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 00834680: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00834682: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00834685: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834688: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834689: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083468b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083468c: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x834692u); call_ind(t); }
    /* 00834692: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00834695: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834697: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834698: mov esp, ebx */ r_esp = r_ebx;
    /* 0083469a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083469b: ret  */ FN_RET(0x0083441c); r_esp += 4; return;
}

void f_0083469c(void) /* sub_83469C */
{
    FN_ENTER(0x0083469c);
    /* 0083469c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083469d: mov ebx, esp */ r_ebx = r_esp;
    /* 0083469f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008346a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008346a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008346a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008346a5: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008346a8: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 008346ab: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008346ae: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008346b3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008346b5: jne 0x8346be */ if (!fZ) goto L_008346be;
L_008346b7:; BB(0x008346b7);
    /* 008346b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008346b9: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x8346beu); f_00839a28();
L_008346be:; BB(0x008346be);
    /* 008346be: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 008346c4: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 008346ca: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 008346d0: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 008346d6: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 008346dc: fld dword ptr [0x98a564] */ FPUSH(R_F32((u32)(0x98a564u)));
    /* 008346e2: fld dword ptr [0x98a560] */ FPUSH(R_F32((u32)(0x98a560u)));
    /* 008346e8: fld dword ptr [0x98a55c] */ FPUSH(R_F32((u32)(0x98a55cu)));
    /* 008346ee: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008346f0: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 008346f4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008346f6: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 008346fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008346fc: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00834700: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00834704: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00834708: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083470a: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0083470d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083470f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00834711: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00834713: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00834716: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0083471a: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
L_0083471d:; BB(0x0083471d);
    /* 0083471d: movzx ebp, word ptr [edi] */ r_ebp = (u32)R16((u32)(r_edi));
    /* 00834720: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00834722: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00834724: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 00834728: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083472a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083472c: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0083472e: mov ebp, dword ptr [esi + ecx + 0x18] */ r_ebp = R32((u32)(r_esi+r_ecx+0x18u));
    /* 00834732: mov eax, ebp */ r_eax = r_ebp;
    /* 00834734: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834737: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0083473a: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083473d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00834740: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00834743: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834746: fadd dword ptr [eax*4 + 0x98a530] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a530u));
    /* 0083474d: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0083474f: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 00834753: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834755: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834757: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834758: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083475a: jae 0x83475e */ if (!fC) goto L_0083475e;
L_0083475c:; BB(0x0083475c);
    /* 0083475c: fst st(2) */ ST(2) = ST(0);
L_0083475e:; BB(0x0083475e);
    /* 0083475e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834760: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834762: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834764: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834765: jae 0x834769 */ if (!fC) goto L_00834769;
L_00834767:; BB(0x00834767);
    /* 00834767: fst st(2) */ ST(2) = ST(0);
L_00834769:; BB(0x00834769);
    /* 00834769: mov eax, ebp */ r_eax = r_ebp;
    /* 0083476b: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083476e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00834771: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00834775: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834779: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0083477c: fadd dword ptr [eax*4 + 0x98a530] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a530u));
    /* 00834783: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00834785: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 00834789: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0083478b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083478d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083478e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834790: jae 0x834794 */ if (!fC) goto L_00834794;
L_00834792:; BB(0x00834792);
    /* 00834792: fst st(2) */ ST(2) = ST(0);
L_00834794:; BB(0x00834794);
    /* 00834794: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834796: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834798: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083479a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083479b: jae 0x83479f */ if (!fC) goto L_0083479f;
L_0083479d:; BB(0x0083479d);
    /* 0083479d: fst st(2) */ ST(2) = ST(0);
L_0083479f:; BB(0x0083479f);
    /* 0083479f: mov eax, ebp */ r_eax = r_ebp;
    /* 008347a1: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008347a6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008347aa: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008347ae: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008347b1: fadd dword ptr [eax*4 + 0x98a530] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a530u));
    /* 008347b8: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 008347ba: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 008347be: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 008347c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008347c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008347c3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008347c5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008347c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008347c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008347cb: jae 0x8347cf */ if (!fC) goto L_008347cf;
L_008347cd:; BB(0x008347cd);
    /* 008347cd: fst st(4) */ ST(4) = ST(0);
L_008347cf:; BB(0x008347cf);
    /* 008347cf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008347d0: jbe 0x8347dc */ if ((fC||fZ)) goto L_008347dc;
L_008347d2:; BB(0x008347d2);
    /* 008347d2: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 008347d4: fld dword ptr [0x98a55c] */ FPUSH(R_F32((u32)(0x98a55cu)));
    /* 008347da: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_008347dc:; BB(0x008347dc);
    /* 008347dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008347de: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008347e0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008347e2: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008347e4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008347e6: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008347e8: shr ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008347eb: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008347ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008347f3: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008347f6: fadd dword ptr [ebp*4 + 0x98a530] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x98a530u));
    /* 008347fd: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 008347ff: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00834801: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00834803: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834805: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834806: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834808: jae 0x83480c */ if (!fC) goto L_0083480c;
L_0083480a:; BB(0x0083480a);
    /* 0083480a: fst st(3) */ ST(3) = ST(0);
L_0083480c:; BB(0x0083480c);
    /* 0083480c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083480e: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00834810: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834812: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834813: mov eax, dword ptr [esi + ecx] */ r_eax = R32((u32)(r_esi+r_ecx));
    /* 00834816: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00834818: mov eax, dword ptr [esi + ecx + 4] */ r_eax = R32((u32)(r_esi+r_ecx+0x4u));
    /* 0083481c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0083481f: mov eax, dword ptr [esi + ecx + 8] */ r_eax = R32((u32)(r_esi+r_ecx+0x8u));
    /* 00834823: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00834826: mov eax, dword ptr [esi + ecx + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx+0xcu));
    /* 0083482a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0083482d: mov eax, dword ptr [esi + ecx + 0x10] */ r_eax = R32((u32)(r_esi+r_ecx+0x10u));
    /* 00834831: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00834834: mov esi, dword ptr [esi + ecx + 0x14] */ r_esi = R32((u32)(r_esi+r_ecx+0x14u));
    /* 00834838: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 0083483b: jae 0x83483f */ if (!fC) goto L_0083483f;
L_0083483d:; BB(0x0083483d);
    /* 0083483d: fst st(3) */ ST(3) = ST(0);
L_0083483f:; BB(0x0083483f);
    /* 0083483f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834841: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00834843: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834847: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0083484c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834851: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834855: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834859: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 0083485d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834861: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00834865: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834867: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0083486b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834870: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834875: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834879: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0083487d: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834881: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834885: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 0083488a: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0083488d: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00834890: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00834892: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834894: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834898: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0083489d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008348a2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008348a6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008348aa: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 008348ae: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008348b2: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 008348b7: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008348ba: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008348bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008348be: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 008348c2: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 008348c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008348cc: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008348d0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008348d4: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 008348d8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 008348dc: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 008348e1: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008348e3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008348e7: mov dword ptr [edx + 0x18], ebp */ W32((u32)(r_edx+0x18u), r_ebp);
    /* 008348ea: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008348ed: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008348f0: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 008348f4: jne 0x83471d */ if (!fZ) goto L_0083471d;
L_008348fa:; BB(0x008348fa);
    /* 008348fa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008348fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008348fe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834900: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834902: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00834906: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 0083490b: mov ebp, dword ptr [0xacd528] */ r_ebp = R32((u32)(0xacd528u));
    /* 00834911: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00834914: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00834916: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00834918: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083491e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00834920: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00834923: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00834925: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834928: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834929: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083492b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083492c: call dword ptr [edi + 0x120] */ { u32 t = R32((u32)(r_edi+0x120u)); r_esp -= 4; W32(r_esp, 0x834932u); call_ind(t); }
    /* 00834932: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00834935: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834936: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834937: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834938: mov esp, ebx */ r_esp = r_ebx;
    /* 0083493a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083493b: ret  */ FN_RET(0x0083469c); r_esp += 4; return;
}

void f_0083493c(void) /* sub_83493C */
{
    FN_ENTER(0x0083493c);
    /* 0083493c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083493d: mov ebx, esp */ r_ebx = r_esp;
    /* 0083493f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00834942: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834943: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834945: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00834948: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0083494b: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0083494e: fld dword ptr [0xaf0370] */ FPUSH(R_F32((u32)(0xaf0370u)));
    /* 00834954: fld dword ptr [0xaf0374] */ FPUSH(R_F32((u32)(0xaf0374u)));
    /* 0083495a: fld dword ptr [0xaf0378] */ FPUSH(R_F32((u32)(0xaf0378u)));
    /* 00834960: fld dword ptr [0xaf037c] */ FPUSH(R_F32((u32)(0xaf037cu)));
    /* 00834966: mov ecx, dword ptr [0xacd52c] */ r_ecx = R32((u32)(0xacd52cu));
    /* 0083496c: fld dword ptr [0x98a558] */ FPUSH(R_F32((u32)(0x98a558u)));
    /* 00834972: fld dword ptr [0x98a554] */ FPUSH(R_F32((u32)(0x98a554u)));
    /* 00834978: fld dword ptr [0x98a550] */ FPUSH(R_F32((u32)(0x98a550u)));
    /* 0083497e: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 00834981: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834983: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00834987: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834989: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0083498d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083498f: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00834993: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00834997: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083499a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083499c: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 0083499f: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008349a2: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_008349a6:; BB(0x008349a6);
    /* 008349a6: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 008349aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008349ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008349ae: lea edx, [edx + edx*8] */ r_edx = (u32)(r_edx+r_edx*8);
    /* 008349b1: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 008349b4: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 008349b6: mov eax, dword ptr [edx + esi + 4] */ r_eax = R32((u32)(r_edx+r_esi+0x4u));
    /* 008349ba: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 008349bd: mov eax, dword ptr [edx + esi + 8] */ r_eax = R32((u32)(r_edx+r_esi+0x8u));
    /* 008349c1: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008349c4: mov eax, dword ptr [edx + esi + 0xc] */ r_eax = R32((u32)(r_edx+r_esi+0xcu));
    /* 008349c8: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 008349cb: mov eax, dword ptr [edx + esi + 0x10] */ r_eax = R32((u32)(r_edx+r_esi+0x10u));
    /* 008349cf: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008349d2: mov eax, dword ptr [edx + esi + 0x14] */ r_eax = R32((u32)(r_edx+r_esi+0x14u));
    /* 008349d6: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 008349d9: mov edi, dword ptr [edx + esi + 0x18] */ r_edi = R32((u32)(r_edx+r_esi+0x18u));
    /* 008349dd: mov eax, edi */ r_eax = r_edi;
    /* 008349df: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008349e2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008349e5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008349e8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008349eb: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008349ee: fadd dword ptr [eax*4 + 0x98a528] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a528u));
    /* 008349f5: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 008349f7: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 008349fb: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008349fe: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834a00: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834a02: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834a03: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834a05: jae 0x834a09 */ if (!fC) goto L_00834a09;
L_00834a07:; BB(0x00834a07);
    /* 00834a07: fst st(2) */ ST(2) = ST(0);
L_00834a09:; BB(0x00834a09);
    /* 00834a09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834a0b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834a0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834a0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834a10: jae 0x834a14 */ if (!fC) goto L_00834a14;
L_00834a12:; BB(0x00834a12);
    /* 00834a12: fst st(2) */ ST(2) = ST(0);
L_00834a14:; BB(0x00834a14);
    /* 00834a14: mov eax, edi */ r_eax = r_edi;
    /* 00834a16: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834a19: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00834a1c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00834a20: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834a24: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834a27: fadd dword ptr [eax*4 + 0x98a528] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a528u));
    /* 00834a2e: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 00834a30: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 00834a34: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834a36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834a38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834a39: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834a3b: jae 0x834a3f */ if (!fC) goto L_00834a3f;
L_00834a3d:; BB(0x00834a3d);
    /* 00834a3d: fst st(2) */ ST(2) = ST(0);
L_00834a3f:; BB(0x00834a3f);
    /* 00834a3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834a41: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834a43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834a45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834a46: jae 0x834a4a */ if (!fC) goto L_00834a4a;
L_00834a48:; BB(0x00834a48);
    /* 00834a48: fst st(2) */ ST(2) = ST(0);
L_00834a4a:; BB(0x00834a4a);
    /* 00834a4a: mov eax, edi */ r_eax = r_edi;
    /* 00834a4c: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00834a51: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00834a55: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834a59: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00834a5c: fadd dword ptr [eax*4 + 0x98a528] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x98a528u));
    /* 00834a63: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 00834a65: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 00834a69: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00834a6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834a6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834a6e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00834a70: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00834a72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834a74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834a76: jae 0x834a7a */ if (!fC) goto L_00834a7a;
L_00834a78:; BB(0x00834a78);
    /* 00834a78: fst st(4) */ ST(4) = ST(0);
L_00834a7a:; BB(0x00834a7a);
    /* 00834a7a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834a7b: jbe 0x834a87 */ if ((fC||fZ)) goto L_00834a87;
L_00834a7d:; BB(0x00834a7d);
    /* 00834a7d: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00834a7f: fld dword ptr [0x98a550] */ FPUSH(R_F32((u32)(0x98a550u)));
    /* 00834a85: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_00834a87:; BB(0x00834a87);
    /* 00834a87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834a89: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00834a8b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834a8d: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00834a8f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00834a91: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00834a93: shr edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00834a96: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00834a9a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00834a9e: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00834aa1: fadd dword ptr [edi*4 + 0x98a528] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x98a528u));
    /* 00834aa8: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 00834aaa: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 00834aac: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00834aae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834ab0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834ab1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834ab3: jae 0x834ab7 */ if (!fC) goto L_00834ab7;
L_00834ab5:; BB(0x00834ab5);
    /* 00834ab5: fst st(3) */ ST(3) = ST(0);
L_00834ab7:; BB(0x00834ab7);
    /* 00834ab7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00834ab9: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00834abb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00834abd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00834abe: jae 0x834ac2 */ if (!fC) goto L_00834ac2;
L_00834ac0:; BB(0x00834ac0);
    /* 00834ac0: fst st(3) */ ST(3) = ST(0);
L_00834ac2:; BB(0x00834ac2);
    /* 00834ac2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834ac4: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00834ac6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834aca: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834acf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834ad4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834ad8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834adc: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834ae0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834ae4: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00834ae8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834aea: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834aee: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834af3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834af8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834afc: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834b00: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834b04: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834b08: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00834b0d: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00834b10: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00834b13: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00834b15: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00834b17: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834b1b: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834b20: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834b25: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834b29: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834b2d: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834b31: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834b35: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00834b3a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00834b3d: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00834b3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00834b41: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00834b45: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00834b4a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00834b4f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00834b53: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00834b57: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00834b5b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00834b5f: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00834b64: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00834b66: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 00834b69: mov eax, dword ptr [edx + esi + 0x1c] */ r_eax = R32((u32)(r_edx+r_esi+0x1cu));
    /* 00834b6d: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00834b70: mov edx, dword ptr [edx + esi + 0x20] */ r_edx = R32((u32)(r_edx+r_esi+0x20u));
    /* 00834b74: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00834b78: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00834b7b: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00834b7e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00834b81: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00834b85: jne 0x8349a6 */ if (!fZ) goto L_008349a6;
L_00834b8b:; BB(0x00834b8b);
    /* 00834b8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834b8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834b8f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834b91: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00834b93: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00834b97: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00834b9c: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00834ba2: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00834ba4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834ba6: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00834ba8: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00834bae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834bb0: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00834bb2: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00834bb5: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834bb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834bb9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00834bbb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834bbc: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x834bc2u); call_ind(t); }
    /* 00834bc2: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00834bc5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834bc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834bc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834bc8: mov esp, ebx */ r_esp = r_ebx;
    /* 00834bca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00834bcb: ret  */ FN_RET(0x0083493c); r_esp += 4; return;
}

void f_00834bcc(void) /* sub_834BCC */
{
    FN_ENTER(0x00834bcc);
    /* 00834bcc: mov dword ptr [0xa21934], 0x832a50 */ W32((u32)(0xa21934u), 0x832a50u);
    /* 00834bd6: mov eax, 0x832974 */ r_eax = 0x832974u;
    /* 00834bdb: mov dword ptr [0xa21938], 0x61cdb0 */ W32((u32)(0xa21938u), 0x61cdb0u);
    /* 00834be5: mov dword ptr [0xa2192c], eax */ W32((u32)(0xa2192cu), r_eax);
    /* 00834bea: mov dword ptr [0xa21930], eax */ W32((u32)(0xa21930u), r_eax);
    /* 00834bef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00834bf1: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00834bf4: mov dword ptr [0xacc170], edx */ W32((u32)(0xacc170u), r_edx);
    /* 00834bfa: mov dword ptr [0xacc164], 1 */ W32((u32)(0xacc164u), 0x1u);
    /* 00834c04: mov dword ptr [0xacc174], eax */ W32((u32)(0xacc174u), r_eax);
    /* 00834c09: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00834c0c: mov dword ptr [0xacc178], eax */ W32((u32)(0xacc178u), r_eax);
    /* 00834c11: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00834c14: mov dword ptr [0xacc17c], eax */ W32((u32)(0xacc17cu), r_eax);
    /* 00834c19: ret  */ FN_RET(0x00834bcc); r_esp += 4; return;
}

void f_00834c50(void) /* sub_834C50 */
{
    FN_ENTER(0x00834c50);
    /* 00834c50: mov dword ptr [0xacc1a0], ecx */ W32((u32)(0xacc1a0u), r_ecx);
    /* 00834c56: ret  */ FN_RET(0x00834c50); r_esp += 4; return;
}

void f_00834c58(void) /* sub_834C58 */
{
    FN_ENTER(0x00834c58);
    /* 00834c58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834c59: mov eax, ecx */ r_eax = r_ecx;
    /* 00834c5b: mov edx, dword ptr [0xacc1a0] */ r_edx = R32((u32)(0xacc1a0u));
    /* 00834c61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834c63: jne 0x834c67 */ if (!fZ) goto L_00834c67;
L_00834c65:; BB(0x00834c65);
    /* 00834c65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00834c66: ret  */ FN_RET(0x00834c58); r_esp += 4; return;
L_00834c67:; BB(0x00834c67);
    /* 00834c67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834c69: je 0x834c92 */ if (fZ) goto L_00834c92;
L_00834c6b:; BB(0x00834c6b);
    /* 00834c6b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00834c6e: mov ebx, eax */ r_ebx = r_eax;
L_00834c70:; BB(0x00834c70);
    /* 00834c70: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00834c73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834c75: je 0x834c7c */ if (fZ) goto L_00834c7c;
L_00834c77:; BB(0x00834c77);
    /* 00834c77: call 0x834c94 */ r_esp -= 4; W32(r_esp, 0x834c7cu); f_00834c94();
L_00834c7c:; BB(0x00834c7c);
    /* 00834c7c: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00834c7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834c81: je 0x834c88 */ if (fZ) goto L_00834c88;
L_00834c83:; BB(0x00834c83);
    /* 00834c83: call 0x834f34 */ r_esp -= 4; W32(r_esp, 0x834c88u); f_00834f34();
L_00834c88:; BB(0x00834c88);
    /* 00834c88: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00834c8b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834c8d: jne 0x834c70 */ if (!fZ) goto L_00834c70;
L_00834c8f:; BB(0x00834c8f);
    /* 00834c8f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00834c92:; BB(0x00834c92);
    /* 00834c92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00834c93: ret  */ FN_RET(0x00834c58); r_esp += 4; return;
}

void f_00834c94(void) /* sub_834C94 */
{
    FN_ENTER(0x00834c94);
    /* 00834c94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834c95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834c96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834c97: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00834c9a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00834c9c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834c9e: je 0x834ea1 */ if (fZ) goto L_00834ea1;
L_00834ca4:; BB(0x00834ca4);
    /* 00834ca4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00834ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834ca9: jne 0x834ea1 */ if (!fZ) goto L_00834ea1;
L_00834caf:; BB(0x00834caf);
    /* 00834caf: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 00834cb2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00834cb5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834cb7: je 0x834cde */ if (fZ) goto L_00834cde;
L_00834cb9:; BB(0x00834cb9);
    /* 00834cb9: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00834cbc: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00834cbf: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 00834cc2: call dword ptr [eax*4 + 0xa21980] */ { u32 t = R32((u32)(r_eax*4+0xa21980u)); r_esp -= 4; W32(r_esp, 0x834cc9u); call_ind(t); }
    /* 00834cc9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00834ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834cce: je 0x834cd6 */ if (fZ) goto L_00834cd6;
L_00834cd0:; BB(0x00834cd0);
    /* 00834cd0: or dword ptr [edi], 0x10000 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00834cd6:; BB(0x00834cd6);
    /* 00834cd6: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00834cd9: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00834cdc: jne 0x834cb9 */ if (!fZ) goto L_00834cb9;
L_00834cde:; BB(0x00834cde);
    /* 00834cde: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00834ce3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834ce5: je 0x834d13 */ if (fZ) goto L_00834d13;
L_00834ce7:; BB(0x00834ce7);
    /* 00834ce7: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00834cea: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00834ced: mov edx, esi */ r_edx = r_esi;
    /* 00834cef: mov eax, edi */ r_eax = r_edi;
    /* 00834cf1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834cf3: je 0x834d13 */ if (fZ) goto L_00834d13;
L_00834cf5:; BB(0x00834cf5);
    /* 00834cf5: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00834cf9:; BB(0x00834cf9);
    /* 00834cf9: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 00834cfc: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00834cff: jae 0x834d03 */ if (!fC) goto L_00834d03;
L_00834d01:; BB(0x00834d01);
    /* 00834d01: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00834d03:; BB(0x00834d03);
    /* 00834d03: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834d06: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00834d09: jne 0x834cf9 */ if (!fZ) goto L_00834cf9;
L_00834d0b:; BB(0x00834d0b);
    /* 00834d0b: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00834d0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d11: je 0x834d7d */ if (fZ) goto L_00834d7d;
L_00834d13:; BB(0x00834d13);
    /* 00834d13: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00834d16: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00834d19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d1b: je 0x834d43 */ if (fZ) goto L_00834d43;
L_00834d1d:; BB(0x00834d1d);
    /* 00834d1d: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00834d1f: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00834d22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d24: je 0x834d3b */ if (fZ) goto L_00834d3b;
L_00834d26:; BB(0x00834d26);
    /* 00834d26: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00834d28: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d2b: jne 0x834d33 */ if (!fZ) goto L_00834d33;
L_00834d2d:; BB(0x00834d2d);
    /* 00834d2d: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00834d33:; BB(0x00834d33);
    /* 00834d33: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00834d36: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00834d39: jne 0x834d26 */ if (!fZ) goto L_00834d26;
L_00834d3b:; BB(0x00834d3b);
    /* 00834d3b: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834d3e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00834d41: jne 0x834d1d */ if (!fZ) goto L_00834d1d;
L_00834d43:; BB(0x00834d43);
    /* 00834d43: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00834d46: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00834d49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d4b: je 0x834f29 */ if (fZ) goto L_00834f29;
L_00834d51:; BB(0x00834d51);
    /* 00834d51: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00834d53: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00834d56: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d58: je 0x834d6f */ if (fZ) goto L_00834d6f;
L_00834d5a:; BB(0x00834d5a);
    /* 00834d5a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00834d5c: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d5f: jne 0x834d67 */ if (!fZ) goto L_00834d67;
L_00834d61:; BB(0x00834d61);
    /* 00834d61: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00834d67:; BB(0x00834d67);
    /* 00834d67: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00834d6a: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00834d6d: jne 0x834d5a */ if (!fZ) goto L_00834d5a;
L_00834d6f:; BB(0x00834d6f);
    /* 00834d6f: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834d72: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00834d75: jne 0x834d51 */ if (!fZ) goto L_00834d51;
L_00834d77:; BB(0x00834d77);
    /* 00834d77: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00834d7a: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_00834d7d:; BB(0x00834d7d);
    /* 00834d7d: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
    /* 00834d84: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834d86: je 0x834df7 */ if (fZ) goto L_00834df7;
L_00834d88:; BB(0x00834d88);
    /* 00834d88: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00834d8c: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00834d90:; BB(0x00834d90);
    /* 00834d90: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00834d96: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00834d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834d9a: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00834d9d: imul ebx, dword ptr [esi + 0xc] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_esi+0xcu)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00834da1: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00834da3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00834da5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834da6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834da7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00834da9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834daa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834dab: call dword ptr [ebp + 0x5c] */ { u32 t = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, 0x834daeu); call_ind(t); }
    /* 00834dae: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00834db1: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00834db5: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00834db7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00834db9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834dba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834dbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834dbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834dbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834dbe: call dword ptr [ebp + 0x2c] */ { u32 t = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, 0x834dc1u); call_ind(t); }
    /* 00834dc1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834dc2: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00834dc5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00834dc9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x834dceu); f_0086b6b8();
    /* 00834dce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00834dd1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00834dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834dd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00834dd7: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x834ddau); call_ind(t); }
    /* 00834dda: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00834ddd: add dword ptr [0xacc1a4], 1 */ { u32 ad = (u32)(0xacc1a4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00834de4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00834de7: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00834dea: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00834ded: jne 0x834d90 */ if (!fZ) goto L_00834d90;
L_00834def:; BB(0x00834def);
    /* 00834def: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00834df3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00834df7:; BB(0x00834df7);
    /* 00834df7: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00834dfa: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00834dfd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834dff: je 0x834e52 */ if (fZ) goto L_00834e52;
L_00834e01:; BB(0x00834e01);
    /* 00834e01: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00834e05: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00834e09:; BB(0x00834e09);
    /* 00834e09: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00834e0f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00834e13: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 00834e16: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00834e1a: mov ebx, dword ptr [edi + 0xc] */ r_ebx = R32((u32)(r_edi+0xcu));
    /* 00834e1d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00834e1f: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00834e23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834e24: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00834e26: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00834e28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834e29: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00834e2b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00834e2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834e2e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834e2f: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00834e33: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x834e36u); call_ind(t); }
    /* 00834e36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00834e3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834e3c: jne 0x834ee5 */ if (!fZ) goto L_00834ee5;
L_00834e42:; BB(0x00834e42);
    /* 00834e42: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00834e45: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00834e48: jne 0x834e09 */ if (!fZ) goto L_00834e09;
L_00834e4a:; BB(0x00834e4a);
    /* 00834e4a: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00834e4e: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00834e52:; BB(0x00834e52);
    /* 00834e52: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00834e55: mov ebp, dword ptr [ebp + 0x18] */ r_ebp = R32((u32)(r_ebp+0x18u));
    /* 00834e58: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834e5a: je 0x834ea1 */ if (fZ) goto L_00834ea1;
L_00834e5c:; BB(0x00834e5c);
    /* 00834e5c: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00834e60:; BB(0x00834e60);
    /* 00834e60: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00834e66: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00834e6a: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 00834e6d: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00834e71: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 00834e74: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00834e76: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00834e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834e7b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00834e7d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00834e7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834e80: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 00834e82: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00834e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834e85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834e86: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 00834e8a: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x834e8du); call_ind(t); }
    /* 00834e8d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00834e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834e93: jne 0x834ea8 */ if (!fZ) goto L_00834ea8;
L_00834e95:; BB(0x00834e95);
    /* 00834e95: add esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00834e98: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00834e9b: jne 0x834e60 */ if (!fZ) goto L_00834e60;
L_00834e9d:; BB(0x00834e9d);
    /* 00834e9d: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00834ea1:; BB(0x00834ea1);
    /* 00834ea1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00834ea4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834ea5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834ea6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834ea7: ret  */ FN_RET(0x00834c94); r_esp += 4; return;
L_00834ea8:; BB(0x00834ea8);
    /* 00834ea8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00834eaa: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00834eae: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00834eb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834eb1: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00834eb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834eb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834eb7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834eb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834eb9: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00834ebd: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x834ec0u); call_ind(t); }
    /* 00834ec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834ec2: jne 0x834e95 */ if (!fZ) goto L_00834e95;
L_00834ec4:; BB(0x00834ec4);
    /* 00834ec4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834ec5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00834ec6: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00834eca: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x834ecfu); f_0086b6b8();
    /* 00834ecf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00834ed2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00834ed6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834ed7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00834ed9: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x834edcu); call_ind(t); }
    /* 00834edc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00834ee0: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00834ee3: jmp 0x834e95 */ goto L_00834e95;
L_00834ee5:; BB(0x00834ee5);
    /* 00834ee5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00834ee7: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00834eeb: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00834eed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834eee: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00834ef2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834ef3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834ef5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834ef6: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00834efa: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x834efdu); call_ind(t); }
    /* 00834efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834eff: jne 0x834e42 */ if (!fZ) goto L_00834e42;
L_00834f05:; BB(0x00834f05);
    /* 00834f05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834f06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834f07: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00834f0b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x834f10u); f_0086b6b8();
    /* 00834f10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00834f13: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00834f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834f18: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00834f1a: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x834f1du); call_ind(t); }
    /* 00834f1d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00834f21: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 00834f24: jmp 0x834e42 */ goto L_00834e42;
L_00834f29:; BB(0x00834f29);
    /* 00834f29: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00834f2c: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00834f2f: jmp 0x834d7d */ goto L_00834d7d;
}

void f_00834f34(void) /* sub_834F34 */
{
    FN_ENTER(0x00834f34);
    /* 00834f34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00834f35: mov eax, ecx */ r_eax = r_ecx;
    /* 00834f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834f39: je 0x834f62 */ if (fZ) goto L_00834f62;
L_00834f3b:; BB(0x00834f3b);
    /* 00834f3b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00834f3e: mov ebx, eax */ r_ebx = r_eax;
L_00834f40:; BB(0x00834f40);
    /* 00834f40: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00834f43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834f45: je 0x834f4c */ if (fZ) goto L_00834f4c;
L_00834f47:; BB(0x00834f47);
    /* 00834f47: call 0x834c94 */ r_esp -= 4; W32(r_esp, 0x834f4cu); f_00834c94();
L_00834f4c:; BB(0x00834f4c);
    /* 00834f4c: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00834f4f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834f51: je 0x834f58 */ if (fZ) goto L_00834f58;
L_00834f53:; BB(0x00834f53);
    /* 00834f53: call 0x834f34 */ r_esp -= 4; W32(r_esp, 0x834f58u); f_00834f34();
L_00834f58:; BB(0x00834f58);
    /* 00834f58: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00834f5b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834f5d: jne 0x834f40 */ if (!fZ) goto L_00834f40;
L_00834f5f:; BB(0x00834f5f);
    /* 00834f5f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00834f62:; BB(0x00834f62);
    /* 00834f62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00834f63: ret  */ FN_RET(0x00834f34); r_esp += 4; return;
}

void f_00834f64(void) /* sub_834F64 */
{
    FN_ENTER(0x00834f64);
    /* 00834f64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00834f65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00834f67: mov eax, dword ptr [0xacc1a0] */ r_eax = R32((u32)(0xacc1a0u));
    /* 00834f6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834f6e: jne 0x834f72 */ if (!fZ) goto L_00834f72;
L_00834f70:; BB(0x00834f70);
    /* 00834f70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00834f71: ret  */ FN_RET(0x00834f64); r_esp += 4; return;
L_00834f72:; BB(0x00834f72);
    /* 00834f72: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00834f78: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00834f7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00834f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834f7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834f7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00834f7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834f80: call dword ptr [ecx + 0x14c] */ { u32 t = R32((u32)(r_ecx+0x14cu)); r_esp -= 4; W32(r_esp, 0x834f86u); call_ind(t); }
    /* 00834f86: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834f88: je 0x834fa1 */ if (fZ) goto L_00834fa1;
L_00834f8a:; BB(0x00834f8a);
    /* 00834f8a: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00834f8d: call 0x834fa4 */ r_esp -= 4; W32(r_esp, 0x834f92u); f_00834fa4();
    /* 00834f92: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00834f95: call 0x834f64 */ r_esp -= 4; W32(r_esp, 0x834f9au); f_00834f64();
    /* 00834f9a: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00834f9d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834f9f: jne 0x834f8a */ if (!fZ) goto L_00834f8a;
L_00834fa1:; BB(0x00834fa1);
    /* 00834fa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00834fa2: ret  */ FN_RET(0x00834f64); r_esp += 4; return;
}

void f_00834fa4(void) /* sub_834FA4 */
{
    FN_ENTER(0x00834fa4);
    /* 00834fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00834fa5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00834fa7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00834fa9: je 0x834fdc */ if (fZ) goto L_00834fdc;
L_00834fab:; BB(0x00834fab);
    /* 00834fab: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 00834faf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00834fb2: jne 0x834fdc */ if (!fZ) goto L_00834fdc;
L_00834fb4:; BB(0x00834fb4);
    /* 00834fb4: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00834fb7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00834fba: call 0x835014 */ r_esp -= 4; W32(r_esp, 0x834fbfu); f_00835014();
    /* 00834fbf: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00834fc2: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00834fc5: call 0x834fe0 */ r_esp -= 4; W32(r_esp, 0x834fcau); f_00834fe0();
    /* 00834fca: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00834fcd: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00834fd0: call 0x834fe0 */ r_esp -= 4; W32(r_esp, 0x834fd5u); f_00834fe0();
    /* 00834fd5: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
L_00834fdc:; BB(0x00834fdc);
    /* 00834fdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834fdd: ret  */ FN_RET(0x00834fa4); r_esp += 4; return;
}

void f_00834fe0(void) /* sub_834FE0 */
{
    FN_ENTER(0x00834fe0);
    /* 00834fe0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00834fe3: mov eax, edx */ r_eax = r_edx;
    /* 00834fe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834fe7: je 0x835010 */ if (fZ) goto L_00835010;
L_00834fe9:; BB(0x00834fe9);
    /* 00834fe9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00834fed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00834fef: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00834ff2: mov esi, eax */ r_esi = r_eax;
L_00834ff4:; BB(0x00834ff4);
    /* 00834ff4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00834ff7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00834ff9: je 0x835001 */ if (fZ) goto L_00835001;
L_00834ffb:; BB(0x00834ffb);
    /* 00834ffb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834ffc: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00834ffe: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x835001u); call_ind(t); }
L_00835001:; BB(0x00835001);
    /* 00835001: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00835004: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00835007: jne 0x834ff4 */ if (!fZ) goto L_00834ff4;
L_00835009:; BB(0x00835009);
    /* 00835009: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0083500d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00835010:; BB(0x00835010);
    /* 00835010: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00835013: ret  */ FN_RET(0x00834fe0); r_esp += 4; return;
}

