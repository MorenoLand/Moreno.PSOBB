#include "protos.h"

void f_008490d8(void) /* sub_8490D8 */
{
    FN_ENTER(0x008490d8);
    /* 008490d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008490d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008490da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008490db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008490dc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008490df: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 008490e3: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008490e7: mov edx, ecx */ r_edx = r_ecx;
    /* 008490e9: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 008490ee: mov edi, dword ptr [0xae7780] */ r_edi = R32((u32)(0xae7780u));
    /* 008490f4: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008490fa: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008490fe: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00849101: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849104: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00849107: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0084910b: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0084910f: mov ebx, eax */ r_ebx = r_eax;
L_00849111:; BB(0x00849111);
    /* 00849111: fld dword ptr [0x98c5e8] */ FPUSH(R_F32((u32)(0x98c5e8u)));
    /* 00849117: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084911b: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084911f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00849120: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849122: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849124: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00849127: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849129: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084912b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084912f: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00849134: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00849137: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00849139: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 0084913d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00849140: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00849144: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00849147: mov ecx, dword ptr [ebx + esi*8 + 0xc] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 0084914b: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0084914e: mov ecx, dword ptr [ebx + esi*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 00849152: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00849155: mov ecx, dword ptr [ebx + esi*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 00849159: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0084915c: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 0084915f: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849163: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00849166: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849169: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084916b: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084916e: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849172: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849176: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084917a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084917c: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0084917f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00849183: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849185: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849187: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 0084918a: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 0084918d: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00849191: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00849194: mov esi, dword ptr [ebx + ecx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00849198: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 0084919b: mov esi, dword ptr [ebx + ecx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0xcu));
    /* 0084919f: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 008491a2: mov esi, dword ptr [ebx + ecx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x10u));
    /* 008491a6: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 008491a9: mov ecx, dword ptr [ebx + ecx*8 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x14u));
    /* 008491ad: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 008491b0: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 008491b3: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 008491b7: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008491bb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008491bf: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008491c2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008491c4: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 008491c7: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 008491cb: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008491cf: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008491d3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008491d7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008491d9: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 008491dc: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008491df: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 008491e2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008491e6: jmp 0x8491eb */ goto L_008491eb;
L_008491e8:; BB(0x008491e8);
    /* 008491e8: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008491eb:; BB(0x008491eb);
    /* 008491eb: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008491ef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008491f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008491f3: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 008491f6: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008491f8: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 008491fc: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008491ff: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00849203: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00849206: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 0084920a: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 0084920d: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00849211: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00849214: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00849218: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0084921b: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 0084921e: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849222: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849226: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084922a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084922c: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084922f: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849233: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849237: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084923b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084923f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849241: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849245: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849248: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084924b: jne 0x8491e8 */ if (!fZ) goto L_008491e8;
L_0084924d:; BB(0x0084924d);
    /* 0084924d: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00849250: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00849252: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849256: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0084925c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0084925e: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00849260: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849263: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849269: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084926a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084926c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084926d: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849273u); call_ind(t); }
    /* 00849273: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849277: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084927a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084927e: jne 0x849111 */ if (!fZ) goto L_00849111;
L_00849284:; BB(0x00849284);
    /* 00849284: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849287: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849288: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849289: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084928a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084928b: ret  */ FN_RET(0x008490d8); r_esp += 4; return;
}

void f_0084928c(void) /* sub_84928C */
{
    FN_ENTER(0x0084928c);
    /* 0084928c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084928d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084928e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084928f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849290: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849293: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00849297: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084929b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084929d: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 008492a3: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 008492a8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008492ac: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008492b2: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008492b5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008492b8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008492bb: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 008492be: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 008492c2: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_008492c6:; BB(0x008492c6);
    /* 008492c6: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008492ca: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008492ce: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008492cf: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 008492d2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008492d4: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008492d6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008492d8: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 008492de: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008492e2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008492e4: mov ebx, dword ptr [edi + esi*8] */ r_ebx = R32((u32)(r_edi+r_esi*8));
    /* 008492e7: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 008492e9: mov ebx, dword ptr [edi + esi*8 + 4] */ r_ebx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 008492ed: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 008492f0: mov ebx, dword ptr [edi + esi*8 + 8] */ r_ebx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 008492f4: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 008492f7: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008492fb: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 008492fe: movsx ecx, word ptr [ecx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 00849302: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849305: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849307: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849309: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 0084930c: mov dword ptr [edx + 0x10], esi */ W32((u32)(r_edx+0x10u), r_esi);
    /* 0084930f: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849313: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 00849316: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 0084931a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0084931d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0084931f: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 00849322: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849325: lea ebx, [eax - 2] */ r_ebx = (u32)(r_eax+0xfffffffeu);
L_00849328:; BB(0x00849328);
    /* 00849328: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084932c: add ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849330: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849332: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849334: mov esi, dword ptr [edi + eax*8] */ r_esi = R32((u32)(r_edi+r_eax*8));
    /* 00849337: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 00849339: mov esi, dword ptr [edi + eax*8 + 4] */ r_esi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 0084933d: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00849340: mov eax, dword ptr [edi + eax*8 + 8] */ r_eax = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 00849344: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00849347: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0084934a: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084934d: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00849350: jne 0x849328 */ if (!fZ) goto L_00849328;
L_00849352:; BB(0x00849352);
    /* 00849352: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00849356: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0084935c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0084935e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00849360: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849363: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084936a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084936c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084936d: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x849373u); call_ind(t); }
    /* 00849373: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00849376: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00849379: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0084937c: jne 0x8492c6 */ if (!fZ) goto L_008492c6;
L_00849382:; BB(0x00849382);
    /* 00849382: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849385: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849386: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849387: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849388: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849389: ret  */ FN_RET(0x0084928c); r_esp += 4; return;
}

void f_0084938c(void) /* sub_84938C */
{
    FN_ENTER(0x0084938c);
    /* 0084938c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084938d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084938e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084938f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849390: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849393: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00849397: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084939b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084939d: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 008493a2: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 008493a8: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008493ae: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008493b2: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008493b5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008493b8: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 008493bb: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 008493bf: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008493c3: mov ebx, eax */ r_ebx = r_eax;
L_008493c5:; BB(0x008493c5);
    /* 008493c5: fld dword ptr [0x98c5e4] */ FPUSH(R_F32((u32)(0x98c5e4u)));
    /* 008493cb: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008493cf: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008493d3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008493d4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008493d6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008493d8: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 008493db: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008493dd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008493df: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008493e3: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 008493e8: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 008493eb: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008493ed: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 008493f1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008493f4: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 008493f8: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008493fb: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 008493fe: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849402: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00849405: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849408: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084940a: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0084940d: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849411: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849415: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849419: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084941b: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 0084941e: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00849422: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849424: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849426: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 00849429: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 0084942c: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849430: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00849433: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849437: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 0084943a: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 0084943d: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00849441: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849445: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849449: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084944c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084944e: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00849451: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00849455: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849459: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084945d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849461: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849463: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00849466: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849469: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 0084946c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00849470: jmp 0x849475 */ goto L_00849475;
L_00849472:; BB(0x00849472);
    /* 00849472: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00849475:; BB(0x00849475);
    /* 00849475: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849479: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084947b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084947d: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 00849480: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00849482: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 00849486: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849489: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 0084948d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00849490: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849493: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849497: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0084949b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084949f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008494a1: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 008494a4: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008494a8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008494ac: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008494b0: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008494b4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008494b6: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 008494ba: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008494bd: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008494c0: jne 0x849472 */ if (!fZ) goto L_00849472;
L_008494c2:; BB(0x008494c2);
    /* 008494c2: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 008494c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008494c7: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008494cb: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008494d1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008494d3: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008494d5: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008494d8: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008494de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008494df: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008494e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008494e2: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x8494e8u); call_ind(t); }
    /* 008494e8: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008494ec: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008494ef: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008494f3: jne 0x8493c5 */ if (!fZ) goto L_008493c5;
L_008494f9:; BB(0x008494f9);
    /* 008494f9: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008494fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008494fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008494fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008494ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849500: ret  */ FN_RET(0x0084938c); r_esp += 4; return;
}

void f_00849504(void) /* sub_849504 */
{
    FN_ENTER(0x00849504);
    /* 00849504: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00849505: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00849506: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00849507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849508: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084950b: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0084950f: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849513: mov edx, ecx */ r_edx = r_ecx;
    /* 00849515: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 0084951a: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00849520: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00849526: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084952a: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084952d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849530: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00849533: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00849537: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0084953b: mov ebx, eax */ r_ebx = r_eax;
L_0084953d:; BB(0x0084953d);
    /* 0084953d: fld dword ptr [0x98c5e0] */ FPUSH(R_F32((u32)(0x98c5e0u)));
    /* 00849543: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849547: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084954b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0084954c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084954e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849550: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 00849553: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849555: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00849557: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084955b: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00849560: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00849563: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00849565: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 00849569: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0084956c: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 00849570: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00849573: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849576: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084957a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0084957d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849580: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849582: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00849585: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849589: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084958d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849591: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849593: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00849596: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0084959a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084959c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084959e: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 008495a1: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 008495a4: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 008495a8: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 008495ab: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 008495af: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 008495b2: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 008495b5: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 008495b9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008495bd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008495c1: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008495c4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008495c6: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 008495c9: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 008495cd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008495d1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008495d5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008495d9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008495db: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 008495de: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008495e1: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 008495e4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008495e8: jmp 0x8495ed */ goto L_008495ed;
L_008495ea:; BB(0x008495ea);
    /* 008495ea: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008495ed:; BB(0x008495ed);
    /* 008495ed: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008495f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008495f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008495f5: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 008495f8: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008495fa: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 008495fe: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849601: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 00849605: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00849608: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 0084960b: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084960f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849613: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849617: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849619: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0084961c: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849620: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849624: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849628: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084962c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084962e: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849632: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849635: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00849638: jne 0x8495ea */ if (!fZ) goto L_008495ea;
L_0084963a:; BB(0x0084963a);
    /* 0084963a: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 0084963d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084963f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849643: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00849649: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0084964b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0084964d: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849650: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849656: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849657: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849659: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084965a: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849660u); call_ind(t); }
    /* 00849660: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849664: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00849667: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084966b: jne 0x84953d */ if (!fZ) goto L_0084953d;
L_00849671:; BB(0x00849671);
    /* 00849671: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849674: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849675: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849676: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849677: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849678: ret  */ FN_RET(0x00849504); r_esp += 4; return;
}

void f_008495c0(void)
{
    FN_ENTER(0x008495c0);
    goto L_008495c0;
L_0084953d:; BB(0x0084953d);
    /* 0084953d: fld dword ptr [0x98c5e0] */ FPUSH(R_F32((u32)(0x98c5e0u)));
    /* 00849543: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849547: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084954b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0084954c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084954e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849550: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 00849553: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849555: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00849557: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084955b: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00849560: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00849563: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00849565: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 00849569: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0084956c: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 00849570: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00849573: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849576: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084957a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0084957d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849580: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849582: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00849585: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849589: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084958d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849591: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849593: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00849596: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0084959a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084959c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084959e: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 008495a1: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 008495a4: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 008495a8: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 008495ab: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 008495af: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 008495b2: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 008495b5: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 008495b9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008495bd: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
L_008495c0:; BB(0x008495c0);
    /* 008495c0: or byte ptr [ebx - 0x3627f13b], al */ { u32 ad = (u32)(r_ebx+0xc9d80ec5u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008495c1: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008495c4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008495c6: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 008495c9: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 008495cd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008495d1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008495d5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008495d9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008495db: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 008495de: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008495e1: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 008495e4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008495e8: jmp 0x8495ed */ goto L_008495ed;
L_008495ea:; BB(0x008495ea);
    /* 008495ea: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008495ed:; BB(0x008495ed);
    /* 008495ed: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008495f1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008495f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008495f5: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 008495f8: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008495fa: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 008495fe: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849601: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 00849605: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00849608: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 0084960b: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084960f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849613: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849617: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849619: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0084961c: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849620: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849624: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849628: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084962c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084962e: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849632: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849635: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00849638: jne 0x8495ea */ if (!fZ) goto L_008495ea;
L_0084963a:; BB(0x0084963a);
    /* 0084963a: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 0084963d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084963f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849643: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00849649: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0084964b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0084964d: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849650: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849656: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849657: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849659: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084965a: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849660u); call_ind(t); }
    /* 00849660: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849664: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00849667: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084966b: jne 0x84953d */ if (!fZ) goto L_0084953d;
L_00849671:; BB(0x00849671);
    /* 00849671: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849674: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849675: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849676: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849677: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849678: ret  */ FN_RET(0x008495c0); r_esp += 4; return;
}

void f_0084967c(void) /* sub_84967C */
{
    FN_ENTER(0x0084967c);
    /* 0084967c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084967d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084967e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084967f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849680: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849683: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00849687: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084968b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084968d: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 00849692: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00849698: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084969e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008496a1: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008496a4: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008496a7: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 008496aa: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 008496ae: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008496b2: mov ebx, eax */ r_ebx = r_eax;
L_008496b4:; BB(0x008496b4);
    /* 008496b4: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008496b8: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008496bc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008496bd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008496bf: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008496c1: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 008496c4: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008496c6: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008496c8: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 008496cb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008496cf: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 008496d4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008496d6: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 008496da: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008496dd: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 008496e1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008496e4: mov ecx, dword ptr [edi + esi*8 + 0xc] */ r_ecx = R32((u32)(r_edi+r_esi*8+0xcu));
    /* 008496e8: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008496eb: mov ecx, dword ptr [edi + esi*8 + 0x10] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x10u));
    /* 008496ef: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008496f2: mov ecx, dword ptr [edi + esi*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x14u));
    /* 008496f6: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008496f9: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008496fc: movsx ecx, word ptr [edx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00849700: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849703: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849705: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849707: mov edx, dword ptr [edi + ecx*8] */ r_edx = R32((u32)(r_edi+r_ecx*8));
    /* 0084970a: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0084970d: mov edx, dword ptr [edi + ecx*8 + 4] */ r_edx = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849711: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00849714: mov edx, dword ptr [edi + ecx*8 + 8] */ r_edx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849718: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0084971b: mov edx, dword ptr [edi + ecx*8 + 0xc] */ r_edx = R32((u32)(r_edi+r_ecx*8+0xcu));
    /* 0084971f: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00849722: mov edx, dword ptr [edi + ecx*8 + 0x10] */ r_edx = R32((u32)(r_edi+r_ecx*8+0x10u));
    /* 00849726: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00849729: mov edx, dword ptr [edi + ecx*8 + 0x14] */ r_edx = R32((u32)(r_edi+r_ecx*8+0x14u));
    /* 0084972d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00849730: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00849734: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00849738: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 0084973b: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084973e: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
L_00849741:; BB(0x00849741);
    /* 00849741: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849745: add ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849749: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084974b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084974d: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 00849750: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00849752: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 00849756: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849759: mov esi, dword ptr [edi + edx*8 + 8] */ r_esi = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 0084975d: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00849760: mov esi, dword ptr [edi + edx*8 + 0xc] */ r_esi = R32((u32)(r_edi+r_edx*8+0xcu));
    /* 00849764: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00849767: mov esi, dword ptr [edi + edx*8 + 0x10] */ r_esi = R32((u32)(r_edi+r_edx*8+0x10u));
    /* 0084976b: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 0084976e: mov edx, dword ptr [edi + edx*8 + 0x14] */ r_edx = R32((u32)(r_edi+r_edx*8+0x14u));
    /* 00849772: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00849775: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 00849778: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084977b: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084977e: jne 0x849741 */ if (!fZ) goto L_00849741;
L_00849780:; BB(0x00849780);
    /* 00849780: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00849784: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0084978a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0084978c: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0084978e: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849791: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849797: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849798: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084979a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084979b: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x8497a1u); call_ind(t); }
    /* 008497a1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008497a4: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008497a7: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008497aa: jne 0x8496b4 */ if (!fZ) goto L_008496b4;
L_008497b0:; BB(0x008497b0);
    /* 008497b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008497b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008497b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008497b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008497b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008497b7: ret  */ FN_RET(0x0084967c); r_esp += 4; return;
}

void f_008497b8(void) /* sub_8497B8 */
{
    FN_ENTER(0x008497b8);
    /* 008497b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008497b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008497ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008497bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008497bc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008497bf: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 008497c3: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008497c7: mov edx, ecx */ r_edx = r_ecx;
    /* 008497c9: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 008497ce: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 008497d4: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008497da: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008497de: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008497e1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008497e4: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 008497e7: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 008497eb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008497ef: mov ebx, eax */ r_ebx = r_eax;
L_008497f1:; BB(0x008497f1);
    /* 008497f1: fld dword ptr [0x98c5dc] */ FPUSH(R_F32((u32)(0x98c5dcu)));
    /* 008497f7: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008497fb: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008497ff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00849800: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849802: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849804: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 00849807: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849809: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084980b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084980f: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00849814: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00849817: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00849819: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 0084981d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00849820: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 00849824: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00849827: mov ecx, dword ptr [edi + esi*8 + 0xc] */ r_ecx = R32((u32)(r_edi+r_esi*8+0xcu));
    /* 0084982b: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0084982e: mov ecx, dword ptr [edi + esi*8 + 0x10] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x10u));
    /* 00849832: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00849835: mov ecx, dword ptr [edi + esi*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x14u));
    /* 00849839: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0084983c: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 0084983f: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849843: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00849846: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849849: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084984b: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084984e: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849852: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849856: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084985a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084985c: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0084985f: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00849863: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849865: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849867: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 0084986a: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 0084986d: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849871: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00849874: mov esi, dword ptr [edi + ecx*8 + 8] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849878: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 0084987b: mov esi, dword ptr [edi + ecx*8 + 0xc] */ r_esi = R32((u32)(r_edi+r_ecx*8+0xcu));
    /* 0084987f: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00849882: mov esi, dword ptr [edi + ecx*8 + 0x10] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x10u));
    /* 00849886: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00849889: mov ecx, dword ptr [edi + ecx*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x14u));
    /* 0084988d: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00849890: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 00849893: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00849897: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084989b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084989f: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008498a2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008498a4: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 008498a7: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 008498ab: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008498af: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 008498b3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008498b7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008498b9: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 008498bc: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008498bf: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 008498c2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 008498c6: jmp 0x8498cb */ goto L_008498cb;
L_008498c8:; BB(0x008498c8);
    /* 008498c8: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_008498cb:; BB(0x008498cb);
    /* 008498cb: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008498cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008498d1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008498d3: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 008498d6: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008498d8: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 008498dc: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008498df: mov esi, dword ptr [edi + edx*8 + 8] */ r_esi = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 008498e3: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 008498e6: mov esi, dword ptr [edi + edx*8 + 0xc] */ r_esi = R32((u32)(r_edi+r_edx*8+0xcu));
    /* 008498ea: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 008498ed: mov esi, dword ptr [edi + edx*8 + 0x10] */ r_esi = R32((u32)(r_edi+r_edx*8+0x10u));
    /* 008498f1: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 008498f4: mov edx, dword ptr [edi + edx*8 + 0x14] */ r_edx = R32((u32)(r_edi+r_edx*8+0x14u));
    /* 008498f8: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008498fb: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008498fe: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849902: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849906: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084990a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084990c: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0084990f: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849913: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849917: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084991b: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0084991f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849921: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849925: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849928: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0084992b: jne 0x8498c8 */ if (!fZ) goto L_008498c8;
L_0084992d:; BB(0x0084992d);
    /* 0084992d: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00849930: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00849932: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849936: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 0084993c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0084993e: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00849940: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849943: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849949: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084994a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084994c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084994d: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849953u); call_ind(t); }
    /* 00849953: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849957: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084995a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084995e: jne 0x8497f1 */ if (!fZ) goto L_008497f1;
L_00849964:; BB(0x00849964);
    /* 00849964: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849967: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849969: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084996a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084996b: ret  */ FN_RET(0x008497b8); r_esp += 4; return;
}

void f_0084996c(void) /* sub_84996C */
{
    FN_ENTER(0x0084996c);
    /* 0084996c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084996d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084996e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084996f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849970: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849973: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00849977: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084997b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084997d: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 00849982: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00849988: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084998e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00849992: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00849995: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849998: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 0084999b: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0084999f: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008499a3: mov ebx, eax */ r_ebx = r_eax;
L_008499a5:; BB(0x008499a5);
    /* 008499a5: fld dword ptr [0x98c5d8] */ FPUSH(R_F32((u32)(0x98c5d8u)));
    /* 008499ab: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 008499af: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008499b3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008499b4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008499b6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008499b8: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 008499bb: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008499bd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008499bf: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008499c3: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 008499c8: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 008499cb: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008499cd: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 008499d1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008499d4: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 008499d8: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008499db: mov ecx, dword ptr [edi + esi*8 + 0xc] */ r_ecx = R32((u32)(r_edi+r_esi*8+0xcu));
    /* 008499df: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008499e2: mov ecx, dword ptr [edi + esi*8 + 0x10] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x10u));
    /* 008499e6: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008499e9: mov ecx, dword ptr [edi + esi*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x14u));
    /* 008499ed: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008499f0: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008499f3: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 008499f7: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008499fa: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008499fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008499ff: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00849a02: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849a06: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849a0a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849a0e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849a10: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 00849a13: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00849a17: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849a19: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849a1b: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 00849a1e: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 00849a21: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849a25: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 00849a28: mov esi, dword ptr [edi + ecx*8 + 8] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849a2c: mov dword ptr [eax + 0x2c], esi */ W32((u32)(r_eax+0x2cu), r_esi);
    /* 00849a2f: mov esi, dword ptr [edi + ecx*8 + 0xc] */ r_esi = R32((u32)(r_edi+r_ecx*8+0xcu));
    /* 00849a33: mov dword ptr [eax + 0x30], esi */ W32((u32)(r_eax+0x30u), r_esi);
    /* 00849a36: mov esi, dword ptr [edi + ecx*8 + 0x10] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x10u));
    /* 00849a3a: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 00849a3d: mov ecx, dword ptr [edi + ecx*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x14u));
    /* 00849a41: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 00849a44: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 00849a47: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00849a4b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849a4f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849a53: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849a56: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849a58: fstp dword ptr [eax + 0x40] */ W_F32((u32)(r_eax+0x40u), ST(0)); FPOP();
    /* 00849a5b: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00849a5f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849a63: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849a67: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849a6b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849a6d: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00849a70: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849a73: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 00849a76: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00849a7a: jmp 0x849a7f */ goto L_00849a7f;
L_00849a7c:; BB(0x00849a7c);
    /* 00849a7c: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00849a7f:; BB(0x00849a7f);
    /* 00849a7f: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849a83: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849a85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849a87: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 00849a8a: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00849a8c: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 00849a90: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849a93: mov esi, dword ptr [edi + edx*8 + 8] */ r_esi = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 00849a97: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00849a9a: mov esi, dword ptr [edi + edx*8 + 0xc] */ r_esi = R32((u32)(r_edi+r_edx*8+0xcu));
    /* 00849a9e: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00849aa1: mov esi, dword ptr [edi + edx*8 + 0x10] */ r_esi = R32((u32)(r_edi+r_edx*8+0x10u));
    /* 00849aa5: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00849aa8: mov edx, dword ptr [edi + edx*8 + 0x14] */ r_edx = R32((u32)(r_edi+r_edx*8+0x14u));
    /* 00849aac: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00849aaf: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 00849ab2: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849ab6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849aba: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849abe: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849ac0: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00849ac3: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849ac7: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849acb: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849acf: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00849ad3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849ad5: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849ad9: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849adc: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00849adf: jne 0x849a7c */ if (!fZ) goto L_00849a7c;
L_00849ae1:; BB(0x00849ae1);
    /* 00849ae1: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00849ae4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00849ae6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849aea: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00849af0: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00849af2: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00849af4: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849af7: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849afe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849b00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00849b01: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849b07u); call_ind(t); }
    /* 00849b07: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849b0b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00849b0e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00849b12: jne 0x8499a5 */ if (!fZ) goto L_008499a5;
L_00849b18:; BB(0x00849b18);
    /* 00849b18: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849b1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849b1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849b1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849b1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849b1f: ret  */ FN_RET(0x0084996c); r_esp += 4; return;
}

void f_00849b20(void) /* sub_849B20 */
{
    FN_ENTER(0x00849b20);
    /* 00849b20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00849b21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00849b22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00849b23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849b24: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849b27: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00849b2b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849b2f: mov edx, ecx */ r_edx = r_ecx;
    /* 00849b31: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 00849b36: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00849b3c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00849b40: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00849b46: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00849b49: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849b4c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00849b4f: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00849b52: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00849b56: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_00849b5a:; BB(0x00849b5a);
    /* 00849b5a: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849b5e: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849b62: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00849b63: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 00849b66: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849b68: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849b6a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00849b6c: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00849b72: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00849b76: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849b78: mov ebx, dword ptr [edi + esi*8] */ r_ebx = R32((u32)(r_edi+r_esi*8));
    /* 00849b7b: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00849b7d: mov ebx, dword ptr [edi + esi*8 + 4] */ r_ebx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 00849b81: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 00849b84: mov ebx, dword ptr [edi + esi*8 + 8] */ r_ebx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 00849b88: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 00849b8b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00849b8f: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 00849b92: movsx ecx, word ptr [ecx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 00849b96: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849b99: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849b9b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849b9d: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 00849ba0: mov dword ptr [edx + 0x10], esi */ W32((u32)(r_edx+0x10u), r_esi);
    /* 00849ba3: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849ba7: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 00849baa: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849bae: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00849bb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00849bb3: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 00849bb6: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849bb9: lea ebx, [eax - 2] */ r_ebx = (u32)(r_eax+0xfffffffeu);
L_00849bbc:; BB(0x00849bbc);
    /* 00849bbc: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849bc0: add ebp, dword ptr [esp + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849bc4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849bc6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849bc8: mov esi, dword ptr [edi + eax*8] */ r_esi = R32((u32)(r_edi+r_eax*8));
    /* 00849bcb: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 00849bcd: mov esi, dword ptr [edi + eax*8 + 4] */ r_esi = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 00849bd1: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 00849bd4: mov eax, dword ptr [edi + eax*8 + 8] */ r_eax = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 00849bd8: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00849bdb: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00849bde: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849be1: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00849be4: jne 0x849bbc */ if (!fZ) goto L_00849bbc;
L_00849be6:; BB(0x00849be6);
    /* 00849be6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00849bea: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00849bf0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00849bf2: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00849bf4: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849bf7: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849bfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00849bfe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849c00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849c01: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x849c07u); call_ind(t); }
    /* 00849c07: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00849c0a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00849c0d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00849c10: jne 0x849b5a */ if (!fZ) goto L_00849b5a;
L_00849c16:; BB(0x00849c16);
    /* 00849c16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849c19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849c1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849c1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849c1d: ret  */ FN_RET(0x00849b20); r_esp += 4; return;
}

void f_00849c20(void) /* sub_849C20 */
{
    FN_ENTER(0x00849c20);
    /* 00849c20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00849c21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00849c22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00849c23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849c24: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849c27: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00849c2b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849c2f: mov edx, ecx */ r_edx = r_ecx;
    /* 00849c31: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 00849c36: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00849c3c: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00849c42: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00849c46: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00849c49: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849c4c: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00849c4f: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00849c53: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00849c57: mov ebx, eax */ r_ebx = r_eax;
L_00849c59:; BB(0x00849c59);
    /* 00849c59: fld dword ptr [0x98c5d4] */ FPUSH(R_F32((u32)(0x98c5d4u)));
    /* 00849c5f: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849c63: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849c67: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00849c68: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849c6a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849c6c: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 00849c6f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849c71: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00849c73: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00849c77: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00849c7c: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00849c7f: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00849c81: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 00849c85: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00849c88: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 00849c8c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00849c8f: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849c92: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849c96: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00849c99: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849c9c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849c9e: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00849ca1: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849ca5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849ca9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849cad: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849caf: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00849cb2: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00849cb6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849cb8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849cba: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 00849cbd: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 00849cc0: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849cc4: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00849cc7: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849ccb: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00849cce: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00849cd1: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00849cd5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849cd9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849cdd: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849ce0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849ce2: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00849ce5: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00849ce9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849ced: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849cf1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849cf5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849cf7: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00849cfa: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849cfd: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 00849d00: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00849d04: jmp 0x849d09 */ goto L_00849d09;
L_00849d06:; BB(0x00849d06);
    /* 00849d06: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00849d09:; BB(0x00849d09);
    /* 00849d09: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849d0d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849d0f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849d11: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 00849d14: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00849d16: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 00849d1a: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849d1d: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 00849d21: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00849d24: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849d27: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849d2b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849d2f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849d33: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849d35: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00849d38: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849d3c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849d40: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849d44: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00849d48: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849d4a: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849d4e: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849d51: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00849d54: jne 0x849d06 */ if (!fZ) goto L_00849d06;
L_00849d56:; BB(0x00849d56);
    /* 00849d56: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00849d59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00849d5b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849d5f: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00849d65: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00849d67: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00849d69: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849d6c: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849d72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849d73: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849d75: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00849d76: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849d7cu); call_ind(t); }
    /* 00849d7c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849d80: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00849d83: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00849d87: jne 0x849c59 */ if (!fZ) goto L_00849c59;
L_00849d8d:; BB(0x00849d8d);
    /* 00849d8d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849d90: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849d91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849d92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849d93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849d94: ret  */ FN_RET(0x00849c20); r_esp += 4; return;
}

void f_00849d98(void) /* sub_849D98 */
{
    FN_ENTER(0x00849d98);
    /* 00849d98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00849d99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00849d9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00849d9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849d9c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849d9f: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00849da3: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849da7: mov edx, ecx */ r_edx = r_ecx;
    /* 00849da9: mov eax, dword ptr [0xae7780] */ r_eax = R32((u32)(0xae7780u));
    /* 00849dae: mov edi, dword ptr [0xacd534] */ r_edi = R32((u32)(0xacd534u));
    /* 00849db4: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00849dba: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00849dbe: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00849dc1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849dc4: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00849dc7: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00849dcb: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 00849dcf: mov ebx, eax */ r_ebx = r_eax;
L_00849dd1:; BB(0x00849dd1);
    /* 00849dd1: fld dword ptr [0x98c5d0] */ FPUSH(R_F32((u32)(0x98c5d0u)));
    /* 00849dd7: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849ddb: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849ddf: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00849de0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849de2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849de4: mov ecx, dword ptr [edi + esi*8] */ r_ecx = R32((u32)(r_edi+r_esi*8));
    /* 00849de7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849de9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00849deb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00849def: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00849df4: lea edx, [ebp + 2] */ r_edx = (u32)(r_ebp+0x2u);
    /* 00849df7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00849df9: mov ecx, dword ptr [edi + esi*8 + 4] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x4u));
    /* 00849dfd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00849e00: mov ecx, dword ptr [edi + esi*8 + 8] */ r_ecx = R32((u32)(r_edi+r_esi*8+0x8u));
    /* 00849e04: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00849e07: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849e0a: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849e0e: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00849e11: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00849e14: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849e16: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00849e19: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 00849e1d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849e21: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849e25: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849e27: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00849e2a: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00849e2e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849e30: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849e32: mov esi, dword ptr [edi + ecx*8] */ r_esi = R32((u32)(r_edi+r_ecx*8));
    /* 00849e35: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 00849e38: mov esi, dword ptr [edi + ecx*8 + 4] */ r_esi = R32((u32)(r_edi+r_ecx*8+0x4u));
    /* 00849e3c: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00849e3f: mov ecx, dword ptr [edi + ecx*8 + 8] */ r_ecx = R32((u32)(r_edi+r_ecx*8+0x8u));
    /* 00849e43: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00849e46: mov dword ptr [eax + 0x24], ebx */ W32((u32)(r_eax+0x24u), r_ebx);
    /* 00849e49: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 00849e4d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849e51: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849e55: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849e58: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849e5a: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00849e5d: movsx edx, word ptr [edx + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 00849e61: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849e65: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849e69: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849e6d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849e6f: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00849e72: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849e75: lea ecx, [edx - 2] */ r_ecx = (u32)(r_edx+0xfffffffeu);
    /* 00849e78: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00849e7c: jmp 0x849e81 */ goto L_00849e81;
L_00849e7e:; BB(0x00849e7e);
    /* 00849e7e: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
L_00849e81:; BB(0x00849e81);
    /* 00849e81: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849e85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849e87: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849e89: mov esi, dword ptr [edi + edx*8] */ r_esi = R32((u32)(r_edi+r_edx*8));
    /* 00849e8c: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00849e8e: mov esi, dword ptr [edi + edx*8 + 4] */ r_esi = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 00849e92: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00849e95: mov edx, dword ptr [edi + edx*8 + 8] */ r_edx = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 00849e99: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00849e9c: mov dword ptr [eax + 0xc], ebx */ W32((u32)(r_eax+0xcu), r_ebx);
    /* 00849e9f: movsx edx, word ptr [ebp + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849ea3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849ea7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849eab: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849ead: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00849eb0: movsx edx, word ptr [ebp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849eb4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00849eb8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00849ebc: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00849ec0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00849ec2: lea ebp, [edx + ebp + 4] */ r_ebp = (u32)(r_edx+r_ebp+0x4u);
    /* 00849ec6: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849ec9: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00849ecc: jne 0x849e7e */ if (!fZ) goto L_00849e7e;
L_00849ece:; BB(0x00849ece);
    /* 00849ece: fstp dword ptr [eax - 4] */ W_F32((u32)(r_eax+0xfffffffcu), ST(0)); FPOP();
    /* 00849ed1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00849ed3: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00849ed7: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00849edd: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00849edf: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00849ee1: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849ee4: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849eea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849eeb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849eed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00849eee: call dword ptr [esi + 0x120] */ { u32 t = R32((u32)(r_esi+0x120u)); r_esp -= 4; W32(r_esp, 0x849ef4u); call_ind(t); }
    /* 00849ef4: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00849ef8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00849efb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00849eff: jne 0x849dd1 */ if (!fZ) goto L_00849dd1;
L_00849f05:; BB(0x00849f05);
    /* 00849f05: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849f08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849f09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849f0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849f0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849f0c: ret  */ FN_RET(0x00849d98); r_esp += 4; return;
}

void f_00849f10(void) /* sub_849F10 */
{
    FN_ENTER(0x00849f10);
    /* 00849f10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00849f11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00849f12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00849f13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00849f14: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00849f17: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00849f1b: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 00849f1f: mov edx, ecx */ r_edx = r_ecx;
    /* 00849f21: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 00849f26: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00849f2c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00849f2f: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00849f32: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00849f35: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 00849f38: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00849f3c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00849f40: mov ebx, eax */ r_ebx = r_eax;
L_00849f42:; BB(0x00849f42);
    /* 00849f42: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849f46: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 00849f4a: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00849f4b: lea esi, [ebp + 2] */ r_esi = (u32)(r_ebp+0x2u);
    /* 00849f4e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849f50: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00849f52: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00849f54: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00849f5a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00849f5e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849f60: mov edi, dword ptr [ebx + ecx*8] */ r_edi = R32((u32)(r_ebx+r_ecx*8));
    /* 00849f63: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 00849f65: mov edi, dword ptr [ebx + ecx*8 + 4] */ r_edi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00849f69: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00849f6c: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00849f70: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00849f73: movsx esi, word ptr [esi + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 00849f77: add ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849f7a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849f7c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00849f7e: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 00849f81: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00849f84: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00849f88: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00849f8b: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 00849f8f: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00849f93: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00849f96: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849f99: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
L_00849f9c:; BB(0x00849f9c);
    /* 00849f9c: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 00849fa0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849fa2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00849fa4: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 00849fa7: add ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00849fa9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00849fab: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00849faf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00849fb2: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00849fb6: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00849fb9: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00849fbc: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00849fbf: jne 0x849f9c */ if (!fZ) goto L_00849f9c;
L_00849fc1:; BB(0x00849fc1);
    /* 00849fc1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00849fc5: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00849fcb: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00849fcd: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00849fcf: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00849fd2: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00849fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00849fd9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00849fdb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00849fdc: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x849fe2u); call_ind(t); }
    /* 00849fe2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00849fe5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00849fe8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00849feb: jne 0x849f42 */ if (!fZ) goto L_00849f42;
L_00849ff1:; BB(0x00849ff1);
    /* 00849ff1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00849ff4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00849ff5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00849ff6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00849ff7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00849ff8: ret  */ FN_RET(0x00849f10); r_esp += 4; return;
}

void f_00849ffc(void) /* sub_849FFC */
{
    FN_ENTER(0x00849ffc);
    /* 00849ffc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00849ffd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00849ffe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00849fff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084a000: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084a003: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0084a007: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084a00b: mov edx, ecx */ r_edx = r_ecx;
    /* 0084a00d: mov eax, dword ptr [0xacd534] */ r_eax = R32((u32)(0xacd534u));
    /* 0084a012: and edx, 0x3fff */ {  u32 a = r_edx; u32 b = 0x3fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0084a018: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084a01c: sar ecx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0084a01f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a022: lea ebp, [ebp + 6] */ r_ebp = (u32)(r_ebp+0x6u);
    /* 0084a025: lea ecx, [ecx + ecx + 2] */ r_ecx = (u32)(r_ecx+r_ecx+0x2u);
    /* 0084a029: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0084a02d: mov ebx, eax */ r_ebx = r_eax;
L_0084a02f:; BB(0x0084a02f);
    /* 0084a02f: fld dword ptr [0x98c5cc] */ FPUSH(R_F32((u32)(0x98c5ccu)));
    /* 0084a035: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084a039: movsx esi, word ptr [ebp + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084a03d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0084a03e: lea edi, [ebp + 2] */ r_edi = (u32)(r_ebp+0x2u);
    /* 0084a041: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084a043: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084a045: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0084a047: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 0084a04d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0084a051: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084a053: mov ecx, dword ptr [ebx + esi*8] */ r_ecx = R32((u32)(r_ebx+r_esi*8));
    /* 0084a056: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0084a058: mov ecx, dword ptr [ebx + esi*8 + 4] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 0084a05c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0084a05f: mov ecx, dword ptr [ebx + esi*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 0084a063: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0084a066: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084a06a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0084a06d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0084a070: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a072: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0084a075: movsx ecx, word ptr [ebp + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x6u));
    /* 0084a079: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a07d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a081: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a083: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 0084a086: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0084a08a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a08c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a08e: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 0084a091: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 0084a094: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084a098: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 0084a09b: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 0084a09f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0084a0a3: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0084a0a6: movsx ecx, word ptr [ebp + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0xau));
    /* 0084a0aa: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a0ae: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a0b2: add ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084a0b5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a0b7: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 0084a0ba: movsx ecx, word ptr [edi + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 0084a0be: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a0c2: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a0c6: lea edi, [eax - 2] */ r_edi = (u32)(r_eax+0xfffffffeu);
    /* 0084a0c9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a0cb: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 0084a0ce: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084a0d1: jmp 0x84a0d6 */ goto L_0084a0d6;
L_0084a0d3:; BB(0x0084a0d3);
    /* 0084a0d3: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
L_0084a0d6:; BB(0x0084a0d6);
    /* 0084a0d6: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0084a0da: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a0dc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084a0de: mov eax, dword ptr [ebx + ecx*8] */ r_eax = R32((u32)(r_ebx+r_ecx*8));
    /* 0084a0e1: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0084a0e3: mov eax, dword ptr [ebx + ecx*8 + 4] */ r_eax = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 0084a0e7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0084a0ea: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 0084a0ee: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0084a0f1: movsx ecx, word ptr [ebp + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 0084a0f5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a0f9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a0fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a0ff: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0084a102: movsx ecx, word ptr [ebp + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4u));
    /* 0084a106: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0084a10a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0084a10e: lea ebp, [esi + ebp + 4] */ r_ebp = (u32)(r_esi+r_ebp+0x4u);
    /* 0084a112: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0084a114: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084a117: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0084a11a: jne 0x84a0d3 */ if (!fZ) goto L_0084a0d3;
L_0084a11c:; BB(0x0084a11c);
    /* 0084a11c: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0084a11f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0084a121: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0084a125: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 0084a12b: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0084a12d: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0084a12f: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084a132: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084a138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084a139: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0084a13b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084a13c: call dword ptr [ecx + 0x120] */ { u32 t = R32((u32)(r_ecx+0x120u)); r_esp -= 4; W32(r_esp, 0x84a142u); call_ind(t); }
    /* 0084a142: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0084a146: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084a149: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084a14d: jne 0x84a02f */ if (!fZ) goto L_0084a02f;
L_0084a153:; BB(0x0084a153);
    /* 0084a153: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084a156: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084a157: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084a158: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084a159: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084a15a: ret  */ FN_RET(0x00849ffc); r_esp += 4; return;
}

