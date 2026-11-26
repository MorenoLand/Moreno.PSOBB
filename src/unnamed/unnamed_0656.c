#include "protos.h"

void f_0065600c(void) /* sub_65600C */
{
    FN_ENTER(0x0065600c);
    /* 0065600c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065600d: mov ebp, esp */ r_ebp = r_esp;
    /* 0065600f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00656011: push 0x8e6e18 */ { u32 v = 0x8e6e18u; r_esp -= 4; W32(r_esp, v); }
    /* 00656016: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065601c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065601d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00656024: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656027: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0065602a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0065602d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00656030: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00656033: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00656038: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0065603f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x656044u); f_008581c5();
    /* 00656044: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00656045: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00656048: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065604a: je 0x65609c */ if (fZ) goto L_0065609c;
L_0065604c:; BB(0x0065604c);
    /* 0065604c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00656053: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065605a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065605d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065605f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656061: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656062: push 0x9c7aa0 */ { u32 v = 0x9c7aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656067: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00656069: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65606eu); f_005b7a84();
    /* 0065606e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00656071: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00656078:; BB(0x00656078);
    /* 00656078: mov dword ptr [0xa8f710], eax */ W32((u32)(0xa8f710u), r_eax);
    /* 0065607d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00656084: call 0x671000 */ r_esp -= 4; W32(r_esp, 0x656089u); f_00671000();
    /* 00656089: mov dword ptr [0xa8f70c], eax */ W32((u32)(0xa8f70cu), r_eax);
    /* 0065608e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00656091: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656098: mov esp, ebp */ r_esp = r_ebp;
    /* 0065609a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065609b: ret  */ FN_RET(0x0065600c); r_esp += 4; return;
L_0065609c:; BB(0x0065609c);
    /* 0065609c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065609e: jmp 0x656078 */ goto L_00656078;
}

void f_006560a0(void) /* sub_6560A0 */
{
    FN_ENTER(0x006560a0);
    /* 006560a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006560a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006560a2: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006560a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006560a7: fld dword ptr [0x937558] */ FPUSH(R_F32((u32)(0x937558u)));
    /* 006560ad: mov ebp, dword ptr [ebx + 0x98] */ r_ebp = R32((u32)(r_ebx+0x98u));
    /* 006560b3: mov ecx, dword ptr [ebx + 0xa0] */ r_ecx = R32((u32)(r_ebx+0xa0u));
    /* 006560b9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006560bb: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 006560c1: mov dword ptr [ebx + 0xbc], edx */ W32((u32)(r_ebx+0xbcu), r_edx);
    /* 006560c7: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 006560cd: mov dword ptr [ebx + 0xc4], edx */ W32((u32)(r_ebx+0xc4u), r_edx);
    /* 006560d3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006560d6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006560d9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006560dc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006560df: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006560e2: fadd dword ptr [eax*4 + 0x9373b0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9373b0u));
    /* 006560e9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006560eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006560ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006560ee: jae 0x6560f2 */ if (!fC) goto L_006560f2;
L_006560f0:; BB(0x006560f0);
    /* 006560f0: fst st(1) */ ST(1) = ST(0);
L_006560f2:; BB(0x006560f2);
    /* 006560f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006560f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006560f5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006560f8: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6560fdu); f_008304c8();
    /* 006560fd: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00656101: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00656105: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00656109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065610a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065610b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065610c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0065610e: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00656112: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x656117u); f_0082facc();
    /* 00656117: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0065611b: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0065611f: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00656123: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 00656129: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 0065612f: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 00656135: mov dword ptr [ebx + 0xb4], ebp */ W32((u32)(r_ebx+0xb4u), r_ebp);
    /* 0065613b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0065613e: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00656142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656143: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656145: push dword ptr [edx*4 + 0x9374d8] */ { u32 v = R32((u32)(r_edx*4+0x9374d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065614c: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656152: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656158: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x65615du); f_00653fc4();
    /* 0065615d: mov ebp, eax */ r_ebp = r_eax;
    /* 0065615f: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00656163: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00656167: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0065616b: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0065616f: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00656173: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00656177: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065617b: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0065617f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x656184u); f_0082f9c4();
    /* 00656184: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00656188: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 0065618c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065618d: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656194: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656195: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65619au); f_007a8d98();
    /* 0065619a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065619d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 006561a1: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 006561a5: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 006561a9: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 006561ad: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006561af: fmul qword ptr [0x9373c0] */ ST(0) = ST(0) * R_F64((u32)(0x9373c0u));
    /* 006561b5: fdiv qword ptr [0x9373b8] */ ST(0) = ST(0) / R_F64((u32)(0x9373b8u));
    /* 006561bb: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006561bf: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006561c4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006561c9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006561cd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006561d1: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006561d7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006561db: mov eax, ebp */ r_eax = r_ebp;
    /* 006561dd: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006561e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006561e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006561e2: ret  */ FN_RET(0x006560a0); r_esp += 4; return;
}

void f_006561e4(void) /* sub_6561E4 */
{
    FN_ENTER(0x006561e4);
    /* 006561e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006561e5: mov ebp, esp */ r_ebp = r_esp;
    /* 006561e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006561e9: push 0x8e6e40 */ { u32 v = 0x8e6e40u; r_esp -= 4; W32(r_esp, v); }
    /* 006561ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006561f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006561f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006561fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006561ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00656202: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00656205: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00656208: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0065620b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00656210: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00656217: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x65621cu); f_008581c5();
    /* 0065621c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065621d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00656220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656222: je 0x65627a */ if (fZ) goto L_0065627a;
L_00656224:; BB(0x00656224);
    /* 00656224: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065622b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00656232: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00656235: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656237: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065623a: push 0x9c7a70 */ { u32 v = 0x9c7a70u; r_esp -= 4; W32(r_esp, v); }
    /* 0065623f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00656241: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x656246u); f_005b7a84();
    /* 00656246: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00656249: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00656250:; BB(0x00656250);
    /* 00656250: mov dword ptr [0xa8f718], eax */ W32((u32)(0xa8f718u), r_eax);
    /* 00656255: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065625c: push 0x937908 */ { u32 v = 0x937908u; r_esp -= 4; W32(r_esp, v); }
    /* 00656261: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x656266u); f_008009dc();
    /* 00656266: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00656267: mov dword ptr [0xa8f714], eax */ W32((u32)(0xa8f714u), r_eax);
    /* 0065626c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065626f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656276: mov esp, ebp */ r_esp = r_ebp;
    /* 00656278: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656279: ret  */ FN_RET(0x006561e4); r_esp += 4; return;
L_0065627a:; BB(0x0065627a);
    /* 0065627a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065627c: jmp 0x656250 */ goto L_00656250;
}

void f_00656280(void) /* sub_656280 */
{
    FN_ENTER(0x00656280);
    /* 00656280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656281: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656282: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656285: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656287: fld dword ptr [0x937554] */ FPUSH(R_F32((u32)(0x937554u)));
    /* 0065628d: mov ebp, dword ptr [ebx + 0x98] */ r_ebp = R32((u32)(r_ebx+0x98u));
    /* 00656293: mov ecx, dword ptr [ebx + 0xa0] */ r_ecx = R32((u32)(r_ebx+0xa0u));
    /* 00656299: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065629b: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 006562a1: mov dword ptr [ebx + 0xbc], edx */ W32((u32)(r_ebx+0xbcu), r_edx);
    /* 006562a7: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 006562ad: mov dword ptr [ebx + 0xc4], edx */ W32((u32)(r_ebx+0xc4u), r_edx);
    /* 006562b3: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006562b6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006562b9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006562bc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006562bf: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006562c2: fadd dword ptr [eax*4 + 0x937398] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937398u));
    /* 006562c9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006562cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006562cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006562ce: jae 0x6562d2 */ if (!fC) goto L_006562d2;
L_006562d0:; BB(0x006562d0);
    /* 006562d0: fst st(1) */ ST(1) = ST(0);
L_006562d2:; BB(0x006562d2);
    /* 006562d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006562d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006562d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006562d8: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6562ddu); f_008304c8();
    /* 006562dd: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 006562e1: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006562e5: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006562e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006562ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006562eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006562ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006562ee: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 006562f2: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x6562f7u); f_0082facc();
    /* 006562f7: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006562fb: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006562ff: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00656303: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 00656309: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 0065630f: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 00656315: mov dword ptr [ebx + 0xb4], ebp */ W32((u32)(r_ebx+0xb4u), r_ebp);
    /* 0065631b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0065631e: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00656322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656323: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656325: push dword ptr [edx*4 + 0x93749c] */ { u32 v = R32((u32)(r_edx*4+0x93749cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0065632c: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656332: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656338: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x65633du); f_00653fc4();
    /* 0065633d: mov ebp, eax */ r_ebp = r_eax;
    /* 0065633f: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00656343: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00656347: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0065634b: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0065634f: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00656353: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00656357: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065635b: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 0065635f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x656364u); f_0082f9c4();
    /* 00656364: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00656368: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 0065636c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065636d: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656375: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65637au); f_007a8d98();
    /* 0065637a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065637d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656381: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656385: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00656389: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 0065638d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065638f: fmul qword ptr [0x9373a8] */ ST(0) = ST(0) * R_F64((u32)(0x9373a8u));
    /* 00656395: fdiv qword ptr [0x9373a0] */ ST(0) = ST(0) / R_F64((u32)(0x9373a0u));
    /* 0065639b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0065639f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006563a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006563a9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006563ad: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006563b1: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006563b7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006563bb: mov eax, ebp */ r_eax = r_ebp;
    /* 006563bd: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006563c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006563c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006563c2: ret  */ FN_RET(0x00656280); r_esp += 4; return;
}

void f_00656361(void)
{
    FN_ENTER(0x00656361);
    /* 00656361: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 00656362: sbb eax, 0x244c8d00 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x244c8d00u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00656367: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00656368: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 0065636c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065636d: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656375: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65637au); f_007a8d98();
    /* 0065637a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065637d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656381: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656385: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00656389: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 0065638d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065638f: fmul qword ptr [0x9373a8] */ ST(0) = ST(0) * R_F64((u32)(0x9373a8u));
    /* 00656395: fdiv qword ptr [0x9373a0] */ ST(0) = ST(0) / R_F64((u32)(0x9373a0u));
    /* 0065639b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0065639f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006563a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006563a9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006563ad: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006563b1: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006563b7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006563bb: mov eax, ebp */ r_eax = r_ebp;
    /* 006563bd: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006563c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006563c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006563c2: ret  */ FN_RET(0x00656361); r_esp += 4; return;
}

void f_00656369(void)
{
    FN_ENTER(0x00656369);
    /* 00656369: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0065636a: and al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0065636c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065636d: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656374: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656375: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65637au); f_007a8d98();
    /* 0065637a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065637d: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656381: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656385: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00656389: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 0065638d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0065638f: fmul qword ptr [0x9373a8] */ ST(0) = ST(0) * R_F64((u32)(0x9373a8u));
    /* 00656395: fdiv qword ptr [0x9373a0] */ ST(0) = ST(0) / R_F64((u32)(0x9373a0u));
    /* 0065639b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0065639f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006563a4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006563a9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006563ad: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006563b1: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006563b7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006563bb: mov eax, ebp */ r_eax = r_ebp;
    /* 006563bd: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006563c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006563c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006563c2: ret  */ FN_RET(0x00656369); r_esp += 4; return;
}

void f_006563c4(void) /* sub_6563C4 */
{
    FN_ENTER(0x006563c4);
    /* 006563c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006563c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006563c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006563c9: push 0x8e6e68 */ { u32 v = 0x8e6e68u; r_esp -= 4; W32(r_esp, v); }
    /* 006563ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006563d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006563d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006563dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006563df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006563e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006563e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006563e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006563eb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006563f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006563f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6563fcu); f_008581c5();
    /* 006563fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006563fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00656400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656402: je 0x65645a */ if (fZ) goto L_0065645a;
L_00656404:; BB(0x00656404);
    /* 00656404: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0065640b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00656412: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00656415: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656419: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065641a: push 0x9c7a44 */ { u32 v = 0x9c7a44u; r_esp -= 4; W32(r_esp, v); }
    /* 0065641f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00656421: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x656426u); f_005b7a84();
    /* 00656426: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00656429: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00656430:; BB(0x00656430);
    /* 00656430: mov dword ptr [0xa8f720], eax */ W32((u32)(0xa8f720u), r_eax);
    /* 00656435: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065643c: push 0x9378f4 */ { u32 v = 0x9378f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00656441: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x656446u); f_008009dc();
    /* 00656446: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00656447: mov dword ptr [0xa8f71c], eax */ W32((u32)(0xa8f71cu), r_eax);
    /* 0065644c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065644f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656456: mov esp, ebp */ r_esp = r_ebp;
    /* 00656458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656459: ret  */ FN_RET(0x006563c4); r_esp += 4; return;
L_0065645a:; BB(0x0065645a);
    /* 0065645a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065645c: jmp 0x656430 */ goto L_00656430;
}

void f_00656460(void) /* sub_656460 */
{
    FN_ENTER(0x00656460);
    /* 00656460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656461: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656462: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656465: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656467: fld dword ptr [0x937550] */ FPUSH(R_F32((u32)(0x937550u)));
    /* 0065646d: mov ebp, dword ptr [ebx + 0x98] */ r_ebp = R32((u32)(r_ebx+0x98u));
    /* 00656473: mov ecx, dword ptr [ebx + 0xa0] */ r_ecx = R32((u32)(r_ebx+0xa0u));
    /* 00656479: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065647b: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 00656481: mov dword ptr [ebx + 0xbc], edx */ W32((u32)(r_ebx+0xbcu), r_edx);
    /* 00656487: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 0065648d: mov dword ptr [ebx + 0xc4], edx */ W32((u32)(r_ebx+0xc4u), r_edx);
    /* 00656493: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00656496: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656499: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065649c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0065649f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006564a2: fadd dword ptr [eax*4 + 0x937380] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937380u));
    /* 006564a9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006564ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006564ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006564ae: jae 0x6564b2 */ if (!fC) goto L_006564b2;
L_006564b0:; BB(0x006564b0);
    /* 006564b0: fst st(1) */ ST(1) = ST(0);
L_006564b2:; BB(0x006564b2);
    /* 006564b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006564b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006564b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006564b8: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6564bdu); f_008304c8();
    /* 006564bd: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 006564c1: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006564c5: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006564c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006564ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006564cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006564cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006564ce: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 006564d2: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x6564d7u); f_0082facc();
    /* 006564d7: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006564db: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006564df: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 006564e3: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 006564e9: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006564ef: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 006564f5: mov dword ptr [ebx + 0xb4], ebp */ W32((u32)(r_ebx+0xb4u), r_ebp);
    /* 006564fb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006564fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656500: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00656502: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656504: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00656508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656509: push dword ptr [edx*8 + 0x93732c] */ { u32 v = R32((u32)(r_edx*8+0x93732cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00656510: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656516: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065651c: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x656521u); f_00653fc4();
    /* 00656521: mov ebp, eax */ r_ebp = r_eax;
    /* 00656523: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00656527: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0065652b: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0065652f: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00656533: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00656537: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0065653b: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065653f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00656543: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x656548u); f_0082f9c4();
    /* 00656548: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065654c: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00656550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656551: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656558: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656559: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65655eu); f_007a8d98();
    /* 0065655e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656561: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656565: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656569: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0065656d: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 00656571: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00656573: fmul qword ptr [0x937390] */ ST(0) = ST(0) * R_F64((u32)(0x937390u));
    /* 00656579: fdiv qword ptr [0x937388] */ ST(0) = ST(0) / R_F64((u32)(0x937388u));
    /* 0065657f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00656583: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00656588: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065658d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00656591: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656595: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065659b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065659f: mov eax, ebp */ r_eax = r_ebp;
    /* 006565a1: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006565a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006565a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006565a6: ret  */ FN_RET(0x00656460); r_esp += 4; return;
}

void f_0065646f(void)
{
    FN_ENTER(0x0065646f);
    /* 0065646f: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 00656470: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656472: add byte ptr [ebx + 0xa08b], cl */ { u32 ad = (u32)(r_ebx+0xa08bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656478: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0065647a: ror byte ptr [ecx + 0xb893], cl */ { u32 ad = (u32)(r_ecx+0xb893u); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00656480: add byte ptr [ecx + 0xbc93], cl */ { u32 ad = (u32)(r_ecx+0xbc93u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656486: add byte ptr [ecx + 0xc093], cl */ { u32 ad = (u32)(r_ecx+0xc093u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065648c: add byte ptr [ecx + 0xc493], cl */ { u32 ad = (u32)(r_ecx+0xc493u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656492: add byte ptr [ebx - 0x3f7cfbbf], cl */ { u32 ad = (u32)(r_ebx+0xc0830441u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656498: dec dword ptr [ecx + 0x4db2404] */ { u32 ad = (u32)(r_ecx+0x4db2404u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0065649e: and al, 0xc1 */ {  u32 a = (u8)r_eax; u32 b = 0xc1u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006564a0: call 0x856a3cc4 */ r_esp -= 4; W32(r_esp, 0x6564a5u); f_856a3cc4();
    /* 006564a5: xor byte ptr [ebx - 0x6d], 0 */ { u32 ad = (u32)(r_ebx+0xffffff93u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 006564a9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006564ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006564ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006564ae: jae 0x6564b2 */ if (!fC) goto L_006564b2;
L_006564b0:; BB(0x006564b0);
    /* 006564b0: fst st(1) */ ST(1) = ST(0);
L_006564b2:; BB(0x006564b2);
    /* 006564b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006564b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006564b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006564b8: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6564bdu); f_008304c8();
    /* 006564bd: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 006564c1: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006564c5: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006564c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006564ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006564cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006564cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006564ce: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 006564d2: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x6564d7u); f_0082facc();
    /* 006564d7: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006564db: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006564df: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 006564e3: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 006564e9: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006564ef: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 006564f5: mov dword ptr [ebx + 0xb4], ebp */ W32((u32)(r_ebx+0xb4u), r_ebp);
    /* 006564fb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006564fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00656500: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00656502: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656504: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 00656508: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656509: push dword ptr [edx*8 + 0x93732c] */ { u32 v = R32((u32)(r_edx*8+0x93732cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00656510: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656516: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0065651c: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x656521u); f_00653fc4();
    /* 00656521: mov ebp, eax */ r_ebp = r_eax;
    /* 00656523: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00656527: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0065652b: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0065652f: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00656533: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00656537: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0065653b: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065653f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00656543: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x656548u); f_0082f9c4();
    /* 00656548: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065654c: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00656550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656551: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656558: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656559: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65655eu); f_007a8d98();
    /* 0065655e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656561: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656565: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656569: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0065656d: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 00656571: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00656573: fmul qword ptr [0x937390] */ ST(0) = ST(0) * R_F64((u32)(0x937390u));
    /* 00656579: fdiv qword ptr [0x937388] */ ST(0) = ST(0) / R_F64((u32)(0x937388u));
    /* 0065657f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00656583: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00656588: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065658d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00656591: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656595: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065659b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065659f: mov eax, ebp */ r_eax = r_ebp;
    /* 006565a1: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006565a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006565a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006565a6: ret  */ FN_RET(0x0065646f); r_esp += 4; return;
}

void f_00656547(void)
{
    FN_ENTER(0x00656547);
    /* 00656547: add byte ptr [ebp - 0x72abdbb4], cl */ { u32 ad = (u32)(r_ebp+0x8d54244cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0065654d: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0065654e: and al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00656550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656551: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656557: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656558: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656559: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65655eu); f_007a8d98();
    /* 0065655e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656561: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656565: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656569: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0065656d: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 00656571: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00656573: fmul qword ptr [0x937390] */ ST(0) = ST(0) * R_F64((u32)(0x937390u));
    /* 00656579: fdiv qword ptr [0x937388] */ ST(0) = ST(0) / R_F64((u32)(0x937388u));
    /* 0065657f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00656583: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00656588: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065658d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00656591: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656595: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065659b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065659f: mov eax, ebp */ r_eax = r_ebp;
    /* 006565a1: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006565a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006565a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006565a6: ret  */ FN_RET(0x00656547); r_esp += 4; return;
}

void f_00656572(void)
{
    FN_ENTER(0x00656572);
    /* 00656572: fmul qword ptr [0x937390] */ ST(0) = ST(0) * R_F64((u32)(0x937390u));
    /* 00656579: fdiv qword ptr [0x937388] */ ST(0) = ST(0) / R_F64((u32)(0x937388u));
    /* 0065657f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00656583: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00656588: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065658d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00656591: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656595: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065659b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065659f: mov eax, ebp */ r_eax = r_ebp;
    /* 006565a1: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006565a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006565a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006565a6: ret  */ FN_RET(0x00656572); r_esp += 4; return;
}

void f_006565a8(void) /* sub_6565A8 */
{
    FN_ENTER(0x006565a8);
    /* 006565a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006565a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006565ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006565ad: push 0x8e6e90 */ { u32 v = 0x8e6e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006565b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006565b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006565b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006565c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006565c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006565c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006565c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006565cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006565cf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006565d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006565db: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6565e0u); f_008581c5();
    /* 006565e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006565e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006565e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006565e6: je 0x65663e */ if (fZ) goto L_0065663e;
L_006565e8:; BB(0x006565e8);
    /* 006565e8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006565ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006565f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006565f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006565fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006565fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006565fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006565fe: push 0x9c7a18 */ { u32 v = 0x9c7a18u; r_esp -= 4; W32(r_esp, v); }
    /* 00656603: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00656605: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x65660au); f_005b7a84();
    /* 0065660a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065660d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00656614:; BB(0x00656614);
    /* 00656614: mov dword ptr [0xa8f728], eax */ W32((u32)(0xa8f728u), r_eax);
    /* 00656619: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00656620: push 0x9378e0 */ { u32 v = 0x9378e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656625: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65662au); f_008009dc();
    /* 0065662a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065662b: mov dword ptr [0xa8f724], eax */ W32((u32)(0xa8f724u), r_eax);
    /* 00656630: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00656633: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065663a: mov esp, ebp */ r_esp = r_ebp;
    /* 0065663c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065663d: ret  */ FN_RET(0x006565a8); r_esp += 4; return;
L_0065663e:; BB(0x0065663e);
    /* 0065663e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656640: jmp 0x656614 */ goto L_00656614;
}

void f_00656644(void) /* sub_656644 */
{
    FN_ENTER(0x00656644);
    /* 00656644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656645: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656646: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656649: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0065664b: fld dword ptr [0x93754c] */ FPUSH(R_F32((u32)(0x93754cu)));
    /* 00656651: mov ebp, dword ptr [ebx + 0x98] */ r_ebp = R32((u32)(r_ebx+0x98u));
    /* 00656657: mov ecx, dword ptr [ebx + 0xa0] */ r_ecx = R32((u32)(r_ebx+0xa0u));
    /* 0065665d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0065665f: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 00656665: mov dword ptr [ebx + 0xbc], edx */ W32((u32)(r_ebx+0xbcu), r_edx);
    /* 0065666b: mov dword ptr [ebx + 0xc0], edx */ W32((u32)(r_ebx+0xc0u), r_edx);
    /* 00656671: mov dword ptr [ebx + 0xc4], edx */ W32((u32)(r_ebx+0xc4u), r_edx);
    /* 00656677: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0065667a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065667d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656680: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00656683: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00656686: fadd dword ptr [eax*4 + 0x937368] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937368u));
    /* 0065668d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0065668f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656691: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656692: jae 0x656696 */ if (!fC) goto L_00656696;
L_00656694:; BB(0x00656694);
    /* 00656694: fst st(1) */ ST(1) = ST(0);
L_00656696:; BB(0x00656696);
    /* 00656696: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00656698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00656699: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0065669c: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x6566a1u); f_008304c8();
    /* 006566a1: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 006566a5: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006566a9: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006566ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006566ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006566af: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006566b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006566b2: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 006566b6: call 0x82facc */ r_esp -= 4; W32(r_esp, 0x6566bbu); f_0082facc();
    /* 006566bb: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 006566bf: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 006566c3: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 006566c7: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 006566cd: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006566d3: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 006566d9: mov dword ptr [ebx + 0xb4], ebp */ W32((u32)(r_ebx+0xb4u), r_ebp);
    /* 006566df: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006566e2: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 006566e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006566e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006566e9: push dword ptr [edx*4 + 0x9372ac] */ { u32 v = R32((u32)(r_edx*4+0x9372acu)); r_esp -= 4; W32(r_esp, v); }
    /* 006566f0: push dword ptr [ebx + 0xa0] */ { u32 v = R32((u32)(r_ebx+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006566f6: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006566fc: call 0x653fc4 */ r_esp -= 4; W32(r_esp, 0x656701u); f_00653fc4();
    /* 00656701: mov ebp, eax */ r_ebp = r_eax;
    /* 00656703: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00656707: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0065670b: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0065670f: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00656713: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00656717: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0065671b: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065671f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00656723: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x656728u); f_0082f9c4();
    /* 00656728: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0065672c: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 00656730: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656731: lea eax, [ebx + 0xbc] */ r_eax = (u32)(r_ebx+0xbcu);
    /* 00656737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656738: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656739: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x65673eu); f_007a8d98();
    /* 0065673e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656741: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00656745: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 00656749: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0065674d: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 00656751: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00656753: fmul qword ptr [0x937378] */ ST(0) = ST(0) * R_F64((u32)(0x937378u));
    /* 00656759: fdiv qword ptr [0x937370] */ ST(0) = ST(0) / R_F64((u32)(0x937370u));
    /* 0065675f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00656763: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00656768: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065676d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00656771: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656775: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065677b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065677f: mov eax, ebp */ r_eax = r_ebp;
    /* 00656781: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656784: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656786: ret  */ FN_RET(0x00656644); r_esp += 4; return;
}

void f_00656761(void)
{
    FN_ENTER(0x00656761);
    /* 00656761: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00656763: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00656768: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0065676d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00656771: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656775: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065677b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065677f: mov eax, ebp */ r_eax = r_ebp;
    /* 00656781: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656784: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656786: ret  */ FN_RET(0x00656761); r_esp += 4; return;
}

void f_0065676e(void)
{
    FN_ENTER(0x0065676e);
    /* 0065676e: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065676f: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00656771: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00656775: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065677b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065677f: mov eax, ebp */ r_eax = r_ebp;
    /* 00656781: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656784: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656786: ret  */ FN_RET(0x0065676e); r_esp += 4; return;
}

void f_00656773(void)
{
    FN_ENTER(0x00656773);
    /* 00656773: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00656775: fistp dword ptr [ebx + 0xb8] */ W32((u32)(r_ebx+0xb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0065677b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0065677f: mov eax, ebp */ r_eax = r_ebp;
    /* 00656781: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656784: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656786: ret  */ FN_RET(0x00656773); r_esp += 4; return;
}

void f_00656788(void) /* sub_656788 */
{
    FN_ENTER(0x00656788);
    /* 00656788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00656789: mov ebp, esp */ r_ebp = r_esp;
    /* 0065678b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065678d: push 0x8e6eb8 */ { u32 v = 0x8e6eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656792: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00656798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656799: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006567a0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006567a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006567a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006567a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006567ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006567af: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006567b4: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006567bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6567c0u); f_008581c5();
    /* 006567c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006567c1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006567c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006567c6: je 0x656889 */ if (fZ) goto L_00656889;
L_006567cc:; BB(0x006567cc);
    /* 006567cc: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006567d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006567da: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 006567dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006567df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006567e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006567e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006567e2: push 0x9c79ec */ { u32 v = 0x9c79ecu; r_esp -= 4; W32(r_esp, v); }
    /* 006567e7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006567e9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6567eeu); f_005b7a84();
    /* 006567ee: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 006567f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006567f8:; BB(0x006567f8);
    /* 006567f8: mov dword ptr [0xa8f730], eax */ W32((u32)(0xa8f730u), r_eax);
    /* 006567fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00656804: push 0x9378c8 */ { u32 v = 0x9378c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00656809: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x65680eu); f_008009dc();
    /* 0065680e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065680f: movzx edx, word ptr [0x937280] */ r_edx = (u32)R16((u32)(0x937280u));
    /* 00656816: movzx ebx, word ptr [0x937282] */ r_ebx = (u32)R16((u32)(0x937282u));
    /* 0065681d: movzx esi, word ptr [0x937284] */ r_esi = (u32)R16((u32)(0x937284u));
    /* 00656824: mov ecx, dword ptr [0xa8f730] */ r_ecx = R32((u32)(0xa8f730u));
    /* 0065682a: mov edi, dword ptr [ecx + 0x430] */ r_edi = R32((u32)(r_ecx+0x430u));
    /* 00656830: mov dword ptr [0xa8f72c], eax */ W32((u32)(0xa8f72cu), r_eax);
    /* 00656835: mov eax, dword ptr [0x93727c] */ r_eax = R32((u32)(0x93727cu));
    /* 0065683a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065683d: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00656841: mov word ptr [ebp - 0x22], bx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ebx);
    /* 00656845: mov word ptr [ebp - 0x20], si */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_esi);
    /* 00656849: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0065684c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065684e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x656853u); f_005b8610();
    /* 00656853: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 00656856: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656857: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0065685c: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00656861: push dword ptr [0xa8f72c] */ { u32 v = R32((u32)(0xa8f72cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00656867: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656868: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0065686a: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x65686fu); f_00608470();
    /* 0065686f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656872: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00656875: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00656878: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065687b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065687e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656885: mov esp, ebp */ r_esp = r_ebp;
    /* 00656887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656888: ret  */ FN_RET(0x00656788); r_esp += 4; return;
L_00656889:; BB(0x00656889);
    /* 00656889: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065688b: jmp 0x6567f8 */ goto L_006567f8;
}

void f_00656890(void) /* sub_656890 */
{
    FN_ENTER(0x00656890);
    /* 00656890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656891: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656895: call 0x6568b4 */ r_esp -= 4; W32(r_esp, 0x65689au); f_006568b4();
    /* 0065689a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0065689e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006568a0: jne 0x6568a6 */ if (!fZ) goto L_006568a6;
L_006568a2:; BB(0x006568a2);
    /* 006568a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006568a3: ret 4 */ FN_RET(0x00656890); r_esp += 8; return;
L_006568a6:; BB(0x006568a6);
    /* 006568a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006568a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6568acu); f_005c2f74();
    /* 006568ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006568ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006568ae: ret 4 */ FN_RET(0x00656890); r_esp += 8; return;
}

void f_006568b4(void) /* sub_6568B4 */
{
    FN_ENTER(0x006568b4);
    /* 006568b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006568b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006568b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006568b9: push 0x8e6ed4 */ { u32 v = 0x8e6ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 006568be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006568c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006568c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006568cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006568cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006568d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006568d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006568d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006568db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006568de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006568e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006568e8: mov dword ptr [eax], 0xb32168 */ W32((u32)(r_eax), 0xb32168u);
    /* 006568ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006568ef: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6568f4u); f_007b4e84();
    /* 006568f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006568f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006568f8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6568fdu); f_007b9c8c();
    /* 006568fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00656904: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00656907: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x65690cu); f_007b4aec();
    /* 0065690c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065690f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00656916: mov esp, ebp */ r_esp = r_ebp;
    /* 00656918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00656919: ret  */ FN_RET(0x006568b4); r_esp += 4; return;
}

void f_0065691c(void) /* sub_65691C */
{
    FN_ENTER(0x0065691c);
    /* 0065691c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065691d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656920: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656922: fld dword ptr [0x937990] */ FPUSH(R_F32((u32)(0x937990u)));
    /* 00656928: fadd dword ptr [ebx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb8u));
    /* 0065692e: mov edx, dword ptr [0xa8f764] */ r_edx = R32((u32)(0xa8f764u));
    /* 00656934: fst dword ptr [ebx + 0xb8] */ W_F32((u32)(r_ebx+0xb8u), ST(0));
    /* 0065693a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0065693d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656940: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656943: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00656946: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00656949: fadd dword ptr [eax*4 + 0x937930] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937930u));
    /* 00656950: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00656952: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656954: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656955: jae 0x656961 */ if (!fC) goto L_00656961;
L_00656957:; BB(0x00656957);
    /* 00656957: mov dword ptr [ebx + 0xb8], 0 */ W32((u32)(r_ebx+0xb8u), 0x0u);
L_00656961:; BB(0x00656961);
    /* 00656961: mov ecx, dword ptr [ebx + 0xc8] */ r_ecx = R32((u32)(r_ebx+0xc8u));
    /* 00656967: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065696d: mov dword ptr [ebx + 0xc8], ecx */ W32((u32)(r_ebx+0xc8u), r_ecx);
    /* 00656973: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x656978u); f_0082dcbc();
    /* 00656978: fmul dword ptr [0x937994] */ ST(0) = ST(0) * R_F32((u32)(0x937994u));
    /* 0065697e: fadd dword ptr [0x937998] */ ST(0) = ST(0) + R_F32((u32)(0x937998u));
    /* 00656984: fstp dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0)); FPOP();
    /* 0065698a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065698d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065698e: ret  */ FN_RET(0x0065691c); r_esp += 4; return;
}

void f_00656990(void) /* sub_656990 */
{
    FN_ENTER(0x00656990);
    /* 00656990: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00656991: mov edi, ecx */ r_edi = r_ecx;
    /* 00656993: mov ecx, dword ptr [edi + 0xc8] */ r_ecx = R32((u32)(r_edi+0xc8u));
    /* 00656999: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065699f: mov dword ptr [edi + 0xc8], ecx */ W32((u32)(r_edi+0xc8u), r_ecx);
    /* 006569a5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6569aau); f_0082dcbc();
    /* 006569aa: fmul dword ptr [0x937988] */ ST(0) = ST(0) * R_F32((u32)(0x937988u));
    /* 006569b0: fadd dword ptr [0x93798c] */ ST(0) = ST(0) + R_F32((u32)(0x93798cu));
    /* 006569b6: fstp dword ptr [edi + 0xc4] */ W_F32((u32)(r_edi+0xc4u), ST(0)); FPOP();
    /* 006569bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006569bd: ret  */ FN_RET(0x00656990); r_esp += 4; return;
}

void f_006569c0(void) /* sub_6569C0 */
{
    FN_ENTER(0x006569c0);
    /* 006569c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006569c3: fld dword ptr [0x937978] */ FPUSH(R_F32((u32)(0x937978u)));
    /* 006569c9: fadd dword ptr [ecx + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb4u));
    /* 006569cf: mov edx, dword ptr [0xa8f760] */ r_edx = R32((u32)(0xa8f760u));
    /* 006569d5: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 006569db: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006569de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006569e1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006569e4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006569e7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006569ea: fadd dword ptr [eax*4 + 0x937928] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937928u));
    /* 006569f1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006569f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006569f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006569f6: jae 0x656a02 */ if (!fC) goto L_00656a02;
L_006569f8:; BB(0x006569f8);
    /* 006569f8: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
L_00656a02:; BB(0x00656a02);
    /* 00656a02: fld dword ptr [0x937980] */ FPUSH(R_F32((u32)(0x937980u)));
    /* 00656a08: fadd dword ptr [ecx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc4u));
    /* 00656a0e: fld dword ptr [0x93797c] */ FPUSH(R_F32((u32)(0x93797cu)));
    /* 00656a14: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00656a16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656a18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656a19: ja 0x656a1d */ if ((!fC&&!fZ)) goto L_00656a1d;
L_00656a1b:; BB(0x00656a1b);
    /* 00656a1b: fst st(1) */ ST(1) = ST(0);
L_00656a1d:; BB(0x00656a1d);
    /* 00656a1d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00656a1f: fstp dword ptr [ecx + 0xc4] */ W_F32((u32)(r_ecx+0xc4u), ST(0)); FPOP();
    /* 00656a25: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656a28: ret  */ FN_RET(0x006569c0); r_esp += 4; return;
}

void f_00656a2c(void) /* sub_656A2C */
{
    FN_ENTER(0x00656a2c);
    /* 00656a2c: fld dword ptr [0x937974] */ FPUSH(R_F32((u32)(0x937974u)));
    /* 00656a32: fadd dword ptr [ecx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc4u));
    /* 00656a38: fld dword ptr [0x937970] */ FPUSH(R_F32((u32)(0x937970u)));
    /* 00656a3e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00656a40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656a42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656a43: jb 0x656a47 */ if (fC) goto L_00656a47;
L_00656a45:; BB(0x00656a45);
    /* 00656a45: fst st(1) */ ST(1) = ST(0);
L_00656a47:; BB(0x00656a47);
    /* 00656a47: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00656a49: fstp dword ptr [ecx + 0xc4] */ W_F32((u32)(r_ecx+0xc4u), ST(0)); FPOP();
    /* 00656a4f: ret  */ FN_RET(0x00656a2c); r_esp += 4; return;
}

void f_00656a50(void) /* sub_656A50 */
{
    FN_ENTER(0x00656a50);
    /* 00656a50: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 00656a56: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656a59: jge 0x656a61 */ if ((fS==fO)) goto L_00656a61;
L_00656a5b:; BB(0x00656a5b);
    /* 00656a5b: call 0x656b84 */ r_esp -= 4; W32(r_esp, 0x656a60u); f_00656b84();
    /* 00656a60: ret  */ FN_RET(0x00656a50); r_esp += 4; return;
L_00656a61:; BB(0x00656a61);
    /* 00656a61: call 0x656a68 */ r_esp -= 4; W32(r_esp, 0x656a66u); f_00656a68();
    /* 00656a66: ret  */ FN_RET(0x00656a50); r_esp += 4; return;
}

void f_00656a68(void) /* sub_656A68 */
{
    FN_ENTER(0x00656a68);
    /* 00656a68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656a69: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656a6c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656a6e: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x656a73u); f_00835068();
    /* 00656a73: mov ecx, dword ptr [0xa8f768] */ r_ecx = R32((u32)(0xa8f768u));
    /* 00656a79: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x656a7eu); f_00829cc8();
    /* 00656a7e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x656a83u); f_0082d7b0();
    /* 00656a83: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00656a86: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x656a8bu); f_0082d838();
    /* 00656a8b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00656a8e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00656a90: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x656a95u); f_0082d8bc();
    /* 00656a95: mov ecx, dword ptr [0xa8f74c] */ r_ecx = R32((u32)(0xa8f74cu));
    /* 00656a9b: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656aa0u); f_00835090();
    /* 00656aa0: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x656aa5u); f_0082dbac();
    /* 00656aa5: push dword ptr [ebx + 0xb8] */ { u32 v = R32((u32)(r_ebx+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656aab: mov ecx, dword ptr [0xa8f750] */ r_ecx = R32((u32)(0xa8f750u));
    /* 00656ab1: mov edx, dword ptr [0xa8f764] */ r_edx = R32((u32)(0xa8f764u));
    /* 00656ab7: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x656abcu); f_00835574();
    /* 00656abc: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00656ac1: mov ecx, dword ptr [ebx + 0xd0] */ r_ecx = R32((u32)(r_ebx+0xd0u));
    /* 00656ac7: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00656acc: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00656acf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656ad1: mov edx, dword ptr [ecx*8 + 0x9c7b04] */ r_edx = R32((u32)(r_ecx*8+0x9c7b04u));
    /* 00656ad8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656add: mov eax, dword ptr [ecx*8 + 0x9c7b08] */ r_eax = R32((u32)(r_ecx*8+0x9c7b08u));
    /* 00656ae4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00656ae8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00656aec: mov eax, dword ptr [ecx*8 + 0x9c7b0c] */ r_eax = R32((u32)(r_ecx*8+0x9c7b0cu));
    /* 00656af3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00656af7: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00656afd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656b00: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00656b03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656b04: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x656b09u); f_0082d710();
    /* 00656b09: mov eax, dword ptr [0xa8f754] */ r_eax = R32((u32)(0xa8f754u));
    /* 00656b0e: movzx ebx, word ptr [ebx + 0xd0] */ r_ebx = (u32)R16((u32)(r_ebx+0xd0u));
    /* 00656b15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656b16: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656b19: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656b1eu); f_0081a588();
    /* 00656b1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656b21: mov ecx, dword ptr [0xa8f754] */ r_ecx = R32((u32)(0xa8f754u));
    /* 00656b27: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x656b2cu); f_00831758();
    /* 00656b2c: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00656b31: mov edx, dword ptr [0xa8f758] */ r_edx = R32((u32)(0xa8f758u));
    /* 00656b37: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656b3c: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b3e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656b41: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656b46u); f_0081a588();
    /* 00656b46: mov eax, dword ptr [0xa8f75c] */ r_eax = R32((u32)(0xa8f75cu));
    /* 00656b4b: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00656b4d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656b50: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656b55u); f_0081a588();
    /* 00656b55: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656b58: mov ecx, dword ptr [0xa8f758] */ r_ecx = R32((u32)(0xa8f758u));
    /* 00656b5e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656b63u); f_00835090();
    /* 00656b63: mov ecx, dword ptr [0xa8f75c] */ r_ecx = R32((u32)(0xa8f75cu));
    /* 00656b69: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656b6eu); f_00835090();
    /* 00656b6e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656b73u); f_0082dab0();
    /* 00656b73: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656b78u); f_0082da80();
    /* 00656b78: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656b7du); f_00835078();
    /* 00656b7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656b80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656b81: ret  */ FN_RET(0x00656a68); r_esp += 4; return;
}

void f_00656b84(void) /* sub_656B84 */
{
    FN_ENTER(0x00656b84);
    /* 00656b84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656b85: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656b88: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656b8a: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x656b8fu); f_00835068();
    /* 00656b8f: mov ecx, dword ptr [0xa8f768] */ r_ecx = R32((u32)(0xa8f768u));
    /* 00656b95: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x656b9au); f_00829cc8();
    /* 00656b9a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x656b9fu); f_0082d7b0();
    /* 00656b9f: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00656ba2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x656ba7u); f_0082d838();
    /* 00656ba7: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00656baa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00656bac: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x656bb1u); f_0082d8bc();
    /* 00656bb1: mov ecx, dword ptr [0xa8f74c] */ r_ecx = R32((u32)(0xa8f74cu));
    /* 00656bb7: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656bbcu); f_00835090();
    /* 00656bbc: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x656bc1u); f_0082dbac();
    /* 00656bc1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00656bc6: mov ecx, dword ptr [ebx + 0xd0] */ r_ecx = R32((u32)(r_ebx+0xd0u));
    /* 00656bcc: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00656bd1: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00656bd4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656bd6: mov edx, dword ptr [ecx*8 + 0x9c7b04] */ r_edx = R32((u32)(r_ecx*8+0x9c7b04u));
    /* 00656bdd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656be2: mov eax, dword ptr [ecx*8 + 0x9c7b08] */ r_eax = R32((u32)(r_ecx*8+0x9c7b08u));
    /* 00656be9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00656bed: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00656bf1: mov eax, dword ptr [ecx*8 + 0x9c7b0c] */ r_eax = R32((u32)(r_ecx*8+0x9c7b0cu));
    /* 00656bf8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00656bfc: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00656c02: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656c05: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00656c08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656c09: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x656c0eu); f_0082d710();
    /* 00656c0e: mov eax, dword ptr [0xa8f754] */ r_eax = R32((u32)(0xa8f754u));
    /* 00656c13: movzx ebx, word ptr [ebx + 0xd0] */ r_ebx = (u32)R16((u32)(r_ebx+0xd0u));
    /* 00656c1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656c1b: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656c1e: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656c23u); f_0081a588();
    /* 00656c23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656c26: mov ecx, dword ptr [0xa8f754] */ r_ecx = R32((u32)(0xa8f754u));
    /* 00656c2c: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x656c31u); f_00831758();
    /* 00656c31: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00656c36: mov edx, dword ptr [0xa8f758] */ r_edx = R32((u32)(0xa8f758u));
    /* 00656c3c: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656c41: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c43: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656c46: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656c4bu); f_0081a588();
    /* 00656c4b: mov eax, dword ptr [0xa8f75c] */ r_eax = R32((u32)(0xa8f75cu));
    /* 00656c50: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656c52: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656c55: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656c5au); f_0081a588();
    /* 00656c5a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656c5d: mov ecx, dword ptr [0xa8f758] */ r_ecx = R32((u32)(0xa8f758u));
    /* 00656c63: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656c68u); f_00835090();
    /* 00656c68: mov ecx, dword ptr [0xa8f75c] */ r_ecx = R32((u32)(0xa8f75cu));
    /* 00656c6e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656c73u); f_00835090();
    /* 00656c73: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656c78u); f_0082dab0();
    /* 00656c78: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656c7du); f_0082da80();
    /* 00656c7d: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656c82u); f_00835078();
    /* 00656c82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656c85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656c86: ret  */ FN_RET(0x00656b84); r_esp += 4; return;
}

void f_00656c69(void)
{
    FN_ENTER(0x00656c69);
    /* 00656c69: or eax, 0xa8f75c */ {  u32 a = r_eax; u32 b = 0xa8f75cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00656c6e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656c73u); f_00835090();
    /* 00656c73: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656c78u); f_0082dab0();
    /* 00656c78: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656c7du); f_0082da80();
    /* 00656c7d: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656c82u); f_00835078();
    /* 00656c82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656c85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656c86: ret  */ FN_RET(0x00656c69); r_esp += 4; return;
}

void f_00656c6b(void)
{
    FN_ENTER(0x00656c6b);
    /* 00656c6b: imul dword ptr [eax - 0x1be21800] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_eax+0xe41de800u)); r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00656c71: sbb eax, 0x6e38e800 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x6e38e800u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00656c76: sbb eax, 0x6e03e800 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x6e03e800u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00656c7b: sbb eax, 0xe3f6e800 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xe3f6e800u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fC = ((u64)a < (u64)b + c); }
    /* 00656c80: sbb eax, 0x10c48300 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x10c48300u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 00656c85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656c86: ret  */ FN_RET(0x00656c6b); r_esp += 4; return;
}

void f_00656c74(void)
{
    FN_ENTER(0x00656c74);
    /* 00656c74: cmp byte ptr [esi + 0x1d], ch */ {  u32 a = R8((u32)(r_esi+0x1du)); u32 b = (u8)(r_ecx>>8); u32 r = (a - b) & 0xffu;   }
    /* 00656c77: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00656c79: add ebp, dword ptr [esi + 0x1d] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x1du)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00656c7c: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00656c7e: mul bl */ { u32 t = (r_eax & 0xffu) * (u8)r_ebx; r_eax = (r_eax & 0xffff0000u) | t; fC = fO = ((t >> 8) != 0); }
    /* 00656c80: sbb eax, 0x10c48300 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x10c48300u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 00656c85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656c86: ret  */ FN_RET(0x00656c74); r_esp += 4; return;
}

void f_00656c88(void) /* sub_656C88 */
{
    FN_ENTER(0x00656c88);
    /* 00656c88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00656c89: mov edi, ecx */ r_edi = r_ecx;
    /* 00656c8b: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x656c90u); f_00835068();
    /* 00656c90: mov ecx, dword ptr [0xa8f768] */ r_ecx = R32((u32)(0xa8f768u));
    /* 00656c96: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x656c9bu); f_00829cc8();
    /* 00656c9b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x656ca0u); f_0082d7b0();
    /* 00656ca0: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00656ca3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x656ca8u); f_0082d838();
    /* 00656ca8: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00656cab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00656cad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x656cb2u); f_0082d8bc();
    /* 00656cb2: push dword ptr [edi + 0xb4] */ { u32 v = R32((u32)(r_edi+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656cb8: mov ecx, dword ptr [0xa8f74c] */ r_ecx = R32((u32)(0xa8f74cu));
    /* 00656cbe: mov edx, dword ptr [0xa8f760] */ r_edx = R32((u32)(0xa8f760u));
    /* 00656cc4: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x656cc9u); f_00835574();
    /* 00656cc9: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x656cceu); f_0082dbac();
    /* 00656cce: mov eax, dword ptr [0xa8f758] */ r_eax = R32((u32)(0xa8f758u));
    /* 00656cd3: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656cd5: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656cd8: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656cddu); f_0081a588();
    /* 00656cdd: mov eax, dword ptr [0xa8f75c] */ r_eax = R32((u32)(0xa8f75cu));
    /* 00656ce2: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ce4: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656ce7: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656cecu); f_0081a588();
    /* 00656cec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656cef: mov ecx, dword ptr [0xa8f758] */ r_ecx = R32((u32)(0xa8f758u));
    /* 00656cf5: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656cfau); f_00835090();
    /* 00656cfa: mov ecx, dword ptr [0xa8f75c] */ r_ecx = R32((u32)(0xa8f75cu));
    /* 00656d00: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656d05u); f_00835090();
    /* 00656d05: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656d0au); f_0082dab0();
    /* 00656d0a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656d0fu); f_0082da80();
    /* 00656d0f: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656d14u); f_00835078();
    /* 00656d14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00656d15: ret  */ FN_RET(0x00656c88); r_esp += 4; return;
}

void f_00656d18(void) /* sub_656D18 */
{
    FN_ENTER(0x00656d18);
    /* 00656d18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656d19: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656d1c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656d1e: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x656d23u); f_00835068();
    /* 00656d23: mov ecx, dword ptr [0xa8f768] */ r_ecx = R32((u32)(0xa8f768u));
    /* 00656d29: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x656d2eu); f_00829cc8();
    /* 00656d2e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x656d33u); f_0082d7b0();
    /* 00656d33: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00656d36: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x656d3bu); f_0082d838();
    /* 00656d3b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00656d3e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00656d40: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x656d45u); f_0082d8bc();
    /* 00656d45: push dword ptr [ebx + 0xb4] */ { u32 v = R32((u32)(r_ebx+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656d4b: mov ecx, dword ptr [0xa8f74c] */ r_ecx = R32((u32)(0xa8f74cu));
    /* 00656d51: mov edx, dword ptr [0xa8f760] */ r_edx = R32((u32)(0xa8f760u));
    /* 00656d57: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x656d5cu); f_00835574();
    /* 00656d5c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x656d61u); f_0082dbac();
    /* 00656d61: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00656d66: mov ecx, dword ptr [ebx + 0xd0] */ r_ecx = R32((u32)(r_ebx+0xd0u));
    /* 00656d6c: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00656d71: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00656d74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656d76: mov edx, dword ptr [ecx*8 + 0x9c7b04] */ r_edx = R32((u32)(r_ecx*8+0x9c7b04u));
    /* 00656d7d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656d82: mov eax, dword ptr [ecx*8 + 0x9c7b08] */ r_eax = R32((u32)(r_ecx*8+0x9c7b08u));
    /* 00656d89: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00656d8d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00656d91: mov eax, dword ptr [ecx*8 + 0x9c7b0c] */ r_eax = R32((u32)(r_ecx*8+0x9c7b0cu));
    /* 00656d98: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00656d9c: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00656da2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656da5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00656da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656da9: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x656daeu); f_0082d710();
    /* 00656dae: mov eax, dword ptr [0xa8f754] */ r_eax = R32((u32)(0xa8f754u));
    /* 00656db3: movzx ebx, word ptr [ebx + 0xd0] */ r_ebx = (u32)R16((u32)(r_ebx+0xd0u));
    /* 00656dba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656dbb: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656dbe: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656dc3u); f_0081a588();
    /* 00656dc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656dc6: mov ecx, dword ptr [0xa8f754] */ r_ecx = R32((u32)(0xa8f754u));
    /* 00656dcc: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x656dd1u); f_00831758();
    /* 00656dd1: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00656dd6: mov edx, dword ptr [0xa8f758] */ r_edx = R32((u32)(0xa8f758u));
    /* 00656ddc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656de1: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656de3: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656de6: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656debu); f_0081a588();
    /* 00656deb: mov eax, dword ptr [0xa8f75c] */ r_eax = R32((u32)(0xa8f75cu));
    /* 00656df0: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656df2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656df5: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656dfau); f_0081a588();
    /* 00656dfa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656dfd: mov ecx, dword ptr [0xa8f758] */ r_ecx = R32((u32)(0xa8f758u));
    /* 00656e03: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656e08u); f_00835090();
    /* 00656e08: mov ecx, dword ptr [0xa8f75c] */ r_ecx = R32((u32)(0xa8f75cu));
    /* 00656e0e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656e13u); f_00835090();
    /* 00656e13: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656e18u); f_0082dab0();
    /* 00656e18: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656e1du); f_0082da80();
    /* 00656e1d: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656e22u); f_00835078();
    /* 00656e22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656e25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656e26: ret  */ FN_RET(0x00656d18); r_esp += 4; return;
}

void f_00656d61(void)
{
    FN_ENTER(0x00656d61);
    /* 00656d61: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00656d66: mov ecx, dword ptr [ebx + 0xd0] */ r_ecx = R32((u32)(r_ebx+0xd0u));
    /* 00656d6c: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00656d71: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00656d74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656d76: mov edx, dword ptr [ecx*8 + 0x9c7b04] */ r_edx = R32((u32)(r_ecx*8+0x9c7b04u));
    /* 00656d7d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656d82: mov eax, dword ptr [ecx*8 + 0x9c7b08] */ r_eax = R32((u32)(r_ecx*8+0x9c7b08u));
    /* 00656d89: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00656d8d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00656d91: mov eax, dword ptr [ecx*8 + 0x9c7b0c] */ r_eax = R32((u32)(r_ecx*8+0x9c7b0cu));
    /* 00656d98: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00656d9c: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00656da2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656da5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00656da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656da9: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x656daeu); f_0082d710();
    /* 00656dae: mov eax, dword ptr [0xa8f754] */ r_eax = R32((u32)(0xa8f754u));
    /* 00656db3: movzx ebx, word ptr [ebx + 0xd0] */ r_ebx = (u32)R16((u32)(r_ebx+0xd0u));
    /* 00656dba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656dbb: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656dbe: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656dc3u); f_0081a588();
    /* 00656dc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656dc6: mov ecx, dword ptr [0xa8f754] */ r_ecx = R32((u32)(0xa8f754u));
    /* 00656dcc: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x656dd1u); f_00831758();
    /* 00656dd1: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00656dd6: mov edx, dword ptr [0xa8f758] */ r_edx = R32((u32)(0xa8f758u));
    /* 00656ddc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656de1: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656de3: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656de6: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656debu); f_0081a588();
    /* 00656deb: mov eax, dword ptr [0xa8f75c] */ r_eax = R32((u32)(0xa8f75cu));
    /* 00656df0: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656df2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656df5: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656dfau); f_0081a588();
    /* 00656dfa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656dfd: mov ecx, dword ptr [0xa8f758] */ r_ecx = R32((u32)(0xa8f758u));
    /* 00656e03: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656e08u); f_00835090();
    /* 00656e08: mov ecx, dword ptr [0xa8f75c] */ r_ecx = R32((u32)(0xa8f75cu));
    /* 00656e0e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656e13u); f_00835090();
    /* 00656e13: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656e18u); f_0082dab0();
    /* 00656e18: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656e1du); f_0082da80();
    /* 00656e1d: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656e22u); f_00835078();
    /* 00656e22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656e25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656e26: ret  */ FN_RET(0x00656d61); r_esp += 4; return;
}

void f_00656d69(void)
{
    FN_ENTER(0x00656d69);
    /* 00656d69: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656d6b: add byte ptr [ebx + 0xaab518], ah */ { u32 ad = (u32)(r_ebx+0xaab518u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00656d71: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00656d74: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00656d76: mov edx, dword ptr [ecx*8 + 0x9c7b04] */ r_edx = R32((u32)(r_ecx*8+0x9c7b04u));
    /* 00656d7d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656d82: mov eax, dword ptr [ecx*8 + 0x9c7b08] */ r_eax = R32((u32)(r_ecx*8+0x9c7b08u));
    /* 00656d89: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00656d8d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00656d91: mov eax, dword ptr [ecx*8 + 0x9c7b0c] */ r_eax = R32((u32)(r_ecx*8+0x9c7b0cu));
    /* 00656d98: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00656d9c: mov eax, dword ptr [ebx + 0xc4] */ r_eax = R32((u32)(r_ebx+0xc4u));
    /* 00656da2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00656da5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00656da8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656da9: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x656daeu); f_0082d710();
    /* 00656dae: mov eax, dword ptr [0xa8f754] */ r_eax = R32((u32)(0xa8f754u));
    /* 00656db3: movzx ebx, word ptr [ebx + 0xd0] */ r_ebx = (u32)R16((u32)(r_ebx+0xd0u));
    /* 00656dba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656dbb: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656dbe: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656dc3u); f_0081a588();
    /* 00656dc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656dc6: mov ecx, dword ptr [0xa8f754] */ r_ecx = R32((u32)(0xa8f754u));
    /* 00656dcc: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x656dd1u); f_00831758();
    /* 00656dd1: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00656dd6: mov edx, dword ptr [0xa8f758] */ r_edx = R32((u32)(0xa8f758u));
    /* 00656ddc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00656de1: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656de3: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656de6: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656debu); f_0081a588();
    /* 00656deb: mov eax, dword ptr [0xa8f75c] */ r_eax = R32((u32)(0xa8f75cu));
    /* 00656df0: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00656df2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00656df5: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x656dfau); f_0081a588();
    /* 00656dfa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656dfd: mov ecx, dword ptr [0xa8f758] */ r_ecx = R32((u32)(0xa8f758u));
    /* 00656e03: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656e08u); f_00835090();
    /* 00656e08: mov ecx, dword ptr [0xa8f75c] */ r_ecx = R32((u32)(0xa8f75cu));
    /* 00656e0e: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x656e13u); f_00835090();
    /* 00656e13: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x656e18u); f_0082dab0();
    /* 00656e18: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x656e1du); f_0082da80();
    /* 00656e1d: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x656e22u); f_00835078();
    /* 00656e22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00656e25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00656e26: ret  */ FN_RET(0x00656d69); r_esp += 4; return;
}

void f_00656e28(void) /* sub_656E28 */
{
    FN_ENTER(0x00656e28);
    /* 00656e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00656e29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00656e2a: mov edi, ecx */ r_edi = r_ecx;
    /* 00656e2c: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 00656e31: mov esi, dword ptr [edi + 0xac] */ r_esi = R32((u32)(r_edi+0xacu));
    /* 00656e37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656e39: je 0x656e4f */ if (fZ) goto L_00656e4f;
L_00656e3b:; BB(0x00656e3b);
    /* 00656e3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e40: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00656e46: mov ecx, edi */ r_ecx = r_edi;
    /* 00656e48: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x656e4du); f_007b52c4();
    /* 00656e4d: jmp 0x656e56 */ goto L_00656e56;
L_00656e4f:; BB(0x00656e4f);
    /* 00656e4f: mov ecx, edi */ r_ecx = r_edi;
    /* 00656e51: call 0x656eb4 */ r_esp -= 4; W32(r_esp, 0x656e56u); f_00656eb4();
L_00656e56:; BB(0x00656e56);
    /* 00656e56: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00656e5c: mov ecx, edi */ r_ecx = r_edi;
    /* 00656e5e: call dword ptr [eax*4 + 0x9c7ac0] */ { u32 t = R32((u32)(r_eax*4+0x9c7ac0u)); r_esp -= 4; W32(r_esp, 0x656e65u); call_ind(t); }
    /* 00656e65: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00656e6b: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00656e6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656e70: jne 0x656e8b */ if (!fZ) goto L_00656e8b;
L_00656e72:; BB(0x00656e72);
    /* 00656e72: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00656e76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00656e78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e7b: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e81: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x656e86u); f_008056b0();
    /* 00656e86: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656e89: jmp 0x656ea2 */ goto L_00656ea2;
L_00656e8b:; BB(0x00656e8b);
    /* 00656e8b: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00656e8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00656e91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e94: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e9a: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x656e9fu); f_008056b0();
    /* 00656e9f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656ea2:; BB(0x00656ea2);
    /* 00656ea2: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 00656ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00656ea9: je 0x656eb1 */ if (fZ) goto L_00656eb1;
L_00656eab:; BB(0x00656eab);
    /* 00656eab: mov dword ptr [edi + 0xac], esi */ W32((u32)(r_edi+0xacu), r_esi);
L_00656eb1:; BB(0x00656eb1);
    /* 00656eb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00656eb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00656eb3: ret  */ FN_RET(0x00656e28); r_esp += 4; return;
}

void f_00656e61(void)
{
    FN_ENTER(0x00656e61);
    /* 00656e61: sar byte ptr [edx - 0x64], 0 */ { u32 ad = (u32)(r_edx+0xffffff9cu); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 00656e65: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00656e6b: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00656e6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656e70: jne 0x656e8b */ if (!fZ) goto L_00656e8b;
L_00656e72:; BB(0x00656e72);
    /* 00656e72: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00656e76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00656e78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e7b: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e81: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x656e86u); f_008056b0();
    /* 00656e86: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656e89: jmp 0x656ea2 */ goto L_00656ea2;
L_00656e8b:; BB(0x00656e8b);
    /* 00656e8b: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00656e8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00656e91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e94: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e9a: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x656e9fu); f_008056b0();
    /* 00656e9f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656ea2:; BB(0x00656ea2);
    /* 00656ea2: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 00656ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00656ea9: je 0x656eb1 */ if (fZ) goto L_00656eb1;
L_00656eab:; BB(0x00656eab);
    /* 00656eab: mov dword ptr [edi + 0xac], esi */ W32((u32)(r_edi+0xacu), r_esi);
L_00656eb1:; BB(0x00656eb1);
    /* 00656eb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00656eb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00656eb3: ret  */ FN_RET(0x00656e61); r_esp += 4; return;
}

void f_00656e65(void)
{
    FN_ENTER(0x00656e65);
    /* 00656e65: mov edx, dword ptr [edi + 0xac] */ r_edx = R32((u32)(r_edi+0xacu));
    /* 00656e6b: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00656e6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656e70: jne 0x656e8b */ if (!fZ) goto L_00656e8b;
L_00656e72:; BB(0x00656e72);
    /* 00656e72: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00656e76: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00656e78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e7a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e7b: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e81: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x656e86u); f_008056b0();
    /* 00656e86: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656e89: jmp 0x656ea2 */ goto L_00656ea2;
L_00656e8b:; BB(0x00656e8b);
    /* 00656e8b: movzx ecx, word ptr [edi + 0x60] */ r_ecx = (u32)R16((u32)(r_edi+0x60u));
    /* 00656e8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00656e91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00656e94: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00656e99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656e9a: call 0x8056b0 */ r_esp -= 4; W32(r_esp, 0x656e9fu); f_008056b0();
    /* 00656e9f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00656ea2:; BB(0x00656ea2);
    /* 00656ea2: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 00656ea7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00656ea9: je 0x656eb1 */ if (fZ) goto L_00656eb1;
L_00656eab:; BB(0x00656eab);
    /* 00656eab: mov dword ptr [edi + 0xac], esi */ W32((u32)(r_edi+0xacu), r_esi);
L_00656eb1:; BB(0x00656eb1);
    /* 00656eb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00656eb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00656eb3: ret  */ FN_RET(0x00656e65); r_esp += 4; return;
}

void f_00656eb4(void) /* sub_656EB4 */
{
    FN_ENTER(0x00656eb4);
    /* 00656eb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656eb5: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00656eb8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00656eba: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 00656ec0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656ec2: je 0x657191 */ if (fZ) goto L_00657191;
L_00656ec8:; BB(0x00656ec8);
    /* 00656ec8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656ecb: je 0x65709b */ if (fZ) goto L_0065709b;
L_00656ed1:; BB(0x00656ed1);
    /* 00656ed1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656ed4: je 0x65701e */ if (fZ) goto L_0065701e;
L_00656eda:; BB(0x00656eda);
    /* 00656eda: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656edd: je 0x656fb0 */ if (fZ) goto L_00656fb0;
L_00656ee3:; BB(0x00656ee3);
    /* 00656ee3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656ee6: jne 0x656f39 */ if (!fZ) goto L_00656f39;
L_00656ee8:; BB(0x00656ee8);
    /* 00656ee8: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00656eeb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656eed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656eee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656eef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656ef0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656ef1: push 0x429 */ { u32 v = 0x429u; r_esp -= 4; W32(r_esp, v); }
    /* 00656ef6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x656efbu); f_008144b0();
    /* 00656efb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656efe: fld dword ptr [ebx + 0xb4] */ FPUSH(R_F32((u32)(r_ebx+0xb4u)));
    /* 00656f04: fsub dword ptr [0x937960] */ ST(0) = ST(0) - R_F32((u32)(0x937960u));
    /* 00656f0a: fcom dword ptr [0x937968] */ fx_compare(ST(0), R_F32((u32)(0x937968u))); 
    /* 00656f10: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656f12: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656f13: jae 0x656f2e */ if (!fC) goto L_00656f2e;
L_00656f15:; BB(0x00656f15);
    /* 00656f15: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00656f17: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 00656f21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656f23: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 00656f29: jmp 0x657013 */ goto L_00657013;
L_00656f2e:; BB(0x00656f2e);
    /* 00656f2e: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 00656f34: jmp 0x657013 */ goto L_00657013;
L_00656f39:; BB(0x00656f39);
    /* 00656f39: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656f3c: jne 0x657013 */ if (!fZ) goto L_00657013;
L_00656f42:; BB(0x00656f42);
    /* 00656f42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656f46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656f48: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x656f4du); f_007b52ec();
    /* 00656f4d: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00656f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656f53: mov esi, eax */ r_esi = r_eax;
L_00656f55:; BB(0x00656f55);
    /* 00656f55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00656f56: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x656f5bu); f_0068d5a8();
    /* 00656f5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00656f5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656f5e: je 0x656f8d */ if (fZ) goto L_00656f8d;
L_00656f60:; BB(0x00656f60);
    /* 00656f60: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00656f66: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00656f6c: jne 0x656f8d */ if (!fZ) goto L_00656f8d;
L_00656f6e:; BB(0x00656f6e);
    /* 00656f6e: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00656f71: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656f75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656f76: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x656f7bu); f_00836208();
    /* 00656f7b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656f7e: fcomp dword ptr [0x93796c] */ fx_compare(ST(0), R_F32((u32)(0x93796cu))); FPOP();
    /* 00656f84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656f86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656f87: jb 0x657018 */ if (fC) goto L_00657018;
L_00656f8d:; BB(0x00656f8d);
    /* 00656f8d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00656f90: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00656f93: jl 0x656f55 */ if ((fS!=fO)) goto L_00656f55;
L_00656f95:; BB(0x00656f95);
    /* 00656f95: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00656f99: mov dword ptr [ebx + 0xac], 3 */ W32((u32)(r_ebx+0xacu), 0x3u);
    /* 00656fa3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00656fa5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fa9: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x656faeu); f_007b52c4();
    /* 00656fae: jmp 0x657013 */ goto L_00657013;
L_00656fb0:; BB(0x00656fb0);
    /* 00656fb0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00656fb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00656fb5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656fb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00656fb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00656fb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00656fb9: push 0x429 */ { u32 v = 0x429u; r_esp -= 4; W32(r_esp, v); }
    /* 00656fbe: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x656fc3u); f_008144b0();
    /* 00656fc3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00656fc6: fld dword ptr [0x93795c] */ FPUSH(R_F32((u32)(0x93795cu)));
    /* 00656fcc: fadd dword ptr [ebx + 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb4u));
    /* 00656fd2: mov edx, dword ptr [0xa8f760] */ r_edx = R32((u32)(0xa8f760u));
    /* 00656fd8: fst dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0));
    /* 00656fde: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00656fe1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00656fe4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00656fe8: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00656fec: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00656fef: fadd dword ptr [eax*4 + 0x937920] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937920u));
    /* 00656ff6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00656ff8: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00656ffa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00656ffc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00656ffd: jbe 0x6571ed */ if ((fC||fZ)) goto L_006571ed;
L_00657003:; BB(0x00657003);
    /* 00657003: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 00657009: mov dword ptr [ebx + 0xac], 5 */ W32((u32)(r_ebx+0xacu), 0x5u);
L_00657013:; BB(0x00657013);
    /* 00657013: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00657016: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00657017: ret  */ FN_RET(0x00656eb4); r_esp += 4; return;
L_00657018:; BB(0x00657018);
    /* 00657018: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0065701c: jmp 0x657013 */ goto L_00657013;
L_0065701e:; BB(0x0065701e);
    /* 0065701e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00657020: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657022: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00657024: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x657029u); f_007b52c4();
    /* 00657029: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0065702d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065702f: mov esi, eax */ r_esi = r_eax;
L_00657031:; BB(0x00657031);
    /* 00657031: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00657032: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x657037u); f_0068d5a8();
    /* 00657037: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065703a: je 0x657065 */ if (fZ) goto L_00657065;
L_0065703c:; BB(0x0065703c);
    /* 0065703c: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00657042: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657048: jne 0x657065 */ if (!fZ) goto L_00657065;
L_0065704a:; BB(0x0065704a);
    /* 0065704a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0065704d: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00657050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657051: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657052: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x657057u); f_00836208();
    /* 00657057: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065705a: fcomp dword ptr [0x937964] */ fx_compare(ST(0), R_F32((u32)(0x937964u))); FPOP();
    /* 00657060: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00657062: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00657063: jb 0x657073 */ if (fC) goto L_00657073;
L_00657065:; BB(0x00657065);
    /* 00657065: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00657068: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065706b: jl 0x657031 */ if ((fS!=fO)) goto L_00657031;
L_0065706d:; BB(0x0065706d);
    /* 0065706d: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00657071: jmp 0x657013 */ goto L_00657013;
L_00657073:; BB(0x00657073);
    /* 00657073: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00657077: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 00657081: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00657083: mov dword ptr [ebx + 0xac], 4 */ W32((u32)(r_ebx+0xacu), 0x4u);
    /* 0065708d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065708f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00657091: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x657096u); f_007b52ec();
    /* 00657096: jmp 0x657013 */ goto L_00657013;
L_0065709b:; BB(0x0065709b);
    /* 0065709b: movsx eax, byte ptr [ebx + 0xbc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0xbcu));
    /* 006570a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006570a5: je 0x65712e */ if (fZ) goto L_0065712e;
L_006570ab:; BB(0x006570ab);
    /* 006570ab: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006570ae: je 0x657109 */ if (fZ) goto L_00657109;
L_006570b0:; BB(0x006570b0);
    /* 006570b0: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
L_006570b6:; BB(0x006570b6);
    /* 006570b6: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006570b9: jle 0x657013 */ if ((fZ||fS!=fO)) goto L_00657013;
L_006570bf:; BB(0x006570bf);
    /* 006570bf: fld dword ptr [0x937990] */ FPUSH(R_F32((u32)(0x937990u)));
    /* 006570c5: fadd dword ptr [ebx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xb8u));
    /* 006570cb: mov edx, dword ptr [0xa8f764] */ r_edx = R32((u32)(0xa8f764u));
    /* 006570d1: fst dword ptr [ebx + 0xb8] */ W_F32((u32)(r_ebx+0xb8u), ST(0));
    /* 006570d7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006570da: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006570dd: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006570e1: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 006570e5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006570e8: fadd dword ptr [eax*4 + 0x937920] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x937920u));
    /* 006570ef: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006570f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006570f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006570f4: jae 0x657013 */ if (!fC) goto L_00657013;
L_006570fa:; BB(0x006570fa);
    /* 006570fa: mov dword ptr [ebx + 0xb8], 0 */ W32((u32)(r_ebx+0xb8u), 0x0u);
    /* 00657104: jmp 0x657013 */ goto L_00657013;
L_00657109:; BB(0x00657109);
    /* 00657109: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 0065710f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00657112: mov dword ptr [ebx + 0xc0], eax */ W32((u32)(r_ebx+0xc0u), r_eax);
    /* 00657118: jne 0x6570b6 */ if (!fZ) goto L_006570b6;
L_0065711a:; BB(0x0065711a);
    /* 0065711a: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x65711fu); f_004d3250();
    /* 0065711f: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 00657129: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0065712c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065712d: ret  */ FN_RET(0x00656eb4); r_esp += 4; return;
L_0065712e:; BB(0x0065712e);
    /* 0065712e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00657130: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x657135u); f_004d31f4();
    /* 00657135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00657136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00657138: jne 0x657146 */ if (!fZ) goto L_00657146;
L_0065713a:; BB(0x0065713a);
    /* 0065713a: movsx eax, byte ptr [ebx + 0xbc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0xbcu));
    /* 00657141: jmp 0x6570ab */ goto L_006570ab;
L_00657146:; BB(0x00657146);
    /* 00657146: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00657149: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0065714c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0065714f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00657152: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00657156: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0065715a: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0065715e: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 00657161: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00657165: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 00657168: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0065716c: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 0065716f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00657173: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00657176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657177: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00657178: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x65717du); f_004d33c0();
    /* 0065717d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00657180: mov byte ptr [ebx + 0xbc], 2 */ W8((u32)(r_ebx+0xbcu), 0x2u);
    /* 00657187: mov eax, 2 */ r_eax = 0x2u;
    /* 0065718c: jmp 0x6570ab */ goto L_006570ab;
L_00657191:; BB(0x00657191);
    /* 00657191: movzx eax, word ptr [ebx + 0xcc] */ r_eax = (u32)R16((u32)(r_ebx+0xccu));
    /* 00657198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00657199: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x65719eu); f_00816eec();
    /* 0065719e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065719f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006571a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006571a5: je 0x6571b7 */ if (fZ) goto L_006571b7;
L_006571a7:; BB(0x006571a7);
    /* 006571a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006571a9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006571ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006571ad: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6571b2u); f_007b52c4();
    /* 006571b2: jmp 0x657013 */ goto L_00657013;
L_006571b7:; BB(0x006571b7);
    /* 006571b7: mov eax, dword ptr [0xa8f744] */ r_eax = R32((u32)(0xa8f744u));
    /* 006571bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006571be: jne 0x6571ca */ if (!fZ) goto L_006571ca;
L_006571c0:; BB(0x006571c0);
    /* 006571c0: mov dword ptr [ebx + 0xb8], 0 */ W32((u32)(r_ebx+0xb8u), 0x0u);
L_006571ca:; BB(0x006571ca);
    /* 006571ca: movsx eax, byte ptr [ebx + 0xbc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0xbcu));
    /* 006571d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006571d3: jne 0x6571e1 */ if (!fZ) goto L_006571e1;
L_006571d5:; BB(0x006571d5);
    /* 006571d5: mov dword ptr [ebx + 0xac], 2 */ W32((u32)(r_ebx+0xacu), 0x2u);
    /* 006571df: jmp 0x6571a7 */ goto L_006571a7;
L_006571e1:; BB(0x006571e1);
    /* 006571e1: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 006571eb: jmp 0x6571a7 */ goto L_006571a7;
L_006571ed:; BB(0x006571ed);
    /* 006571ed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006571ef: jmp 0x657013 */ goto L_00657013;
}

