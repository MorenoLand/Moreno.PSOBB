#include "protos.h"

void f_006e50f4(void) /* sub_6E50F4 */
{
    FN_ENTER(0x006e50f4);
    /* 006e50f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e50f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e50f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e50f7: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e50fa: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e50fc: movzx esi, byte ptr [ebx + 0x44] */ r_esi = (u32)R8((u32)(r_ebx+0x44u));
    /* 006e5100: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5102: je 0x6e540b */ if (fZ) goto L_006e540b;
L_006e5108:; BB(0x006e5108);
    /* 006e5108: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e510b: je 0x6e5401 */ if (fZ) goto L_006e5401;
L_006e5111:; BB(0x006e5111);
    /* 006e5111: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5114: je 0x6e53f7 */ if (fZ) goto L_006e53f7;
L_006e511a:; BB(0x006e511a);
    /* 006e511a: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e511d: je 0x6e513b */ if (fZ) goto L_006e513b;
L_006e511f:; BB(0x006e511f);
    /* 006e511f: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5122: jne 0x6e512b */ if (!fZ) goto L_006e512b;
L_006e5124:; BB(0x006e5124);
    /* 006e5124: mov ebp, 1 */ r_ebp = 0x1u;
    /* 006e5129: jmp 0x6e513d */ goto L_006e513d;
L_006e512b:; BB(0x006e512b);
    /* 006e512b: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e512e: jne 0x6e5137 */ if (!fZ) goto L_006e5137;
L_006e5130:; BB(0x006e5130);
    /* 006e5130: mov ebp, 2 */ r_ebp = 0x2u;
    /* 006e5135: jmp 0x6e513d */ goto L_006e513d;
L_006e5137:; BB(0x006e5137);
    /* 006e5137: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006e5139: jmp 0x6e513d */ goto L_006e513d;
L_006e513b:; BB(0x006e513b);
    /* 006e513b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_006e513d:; BB(0x006e513d);
    /* 006e513d: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 006e5140: movzx eax, byte ptr [ebx + 0x46] */ r_eax = (u32)R8((u32)(r_ebx+0x46u));
    /* 006e5144: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 006e5147: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 006e514a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e514c: je 0x6e51ec */ if (fZ) goto L_006e51ec;
L_006e5152:; BB(0x006e5152);
    /* 006e5152: fld dword ptr [0x96d370] */ FPUSH(R_F32((u32)(0x96d370u)));
    /* 006e5158: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 006e515b: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006e515e: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 006e5161: add ecx, 0x1c71 */ {  u32 a = r_ecx; u32 b = 0x1c71u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e5167: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 006e516a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6e516fu); f_0082ddd8();
    /* 006e516f: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 006e5172: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006e5174: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006e5177: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006e517a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6e517fu); f_0082dcbc();
    /* 006e517f: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 006e5182: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006e5184: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006e5188: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e518d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006e5195: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e519au); f_0082d990();
    /* 006e519a: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 006e519d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e519f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e51a4u); f_0082d8bc();
    /* 006e51a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e51a6: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 006e51ab: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6e51b0u); f_0082e9e4();
    /* 006e51b0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006e51b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e51b4: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006e51b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e51ba: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6e51bfu); f_0082eab8();
    /* 006e51bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6e51c4u); f_0082da80();
    /* 006e51c4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006e51c7: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 006e51ca: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006e51ce: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 006e51d1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006e51d5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e51d7: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 006e51da: fstp dword ptr [ebx + 0x30] */ W_F32((u32)(r_ebx+0x30u), ST(0)); FPOP();
    /* 006e51dd: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 006e51e0: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 006e51e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e51e4: fst dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0));
    /* 006e51e7: jmp 0x6e52b2 */ goto L_006e52b2;
L_006e51ec:; BB(0x006e51ec);
    /* 006e51ec: fld dword ptr [0x96d37c] */ FPUSH(R_F32((u32)(0x96d37cu)));
    /* 006e51f2: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 006e51f5: fld dword ptr [0x96d378] */ FPUSH(R_F32((u32)(0x96d378u)));
    /* 006e51fb: fld dword ptr [0x96d374] */ FPUSH(R_F32((u32)(0x96d374u)));
    /* 006e5201: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e5203: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 006e5206: add esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e5209: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 006e520d: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 006e5211: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 006e5213: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 006e5215: lea edx, [edx + edx + 2] */ r_edx = (u32)(r_edx+r_edx+0x2u);
    /* 006e5219: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 006e521d: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 006e5222: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e5227: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006e522b: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 006e522f: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006e5233: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 006e5237: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 006e523b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e523d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e523f: add dword ptr [ebx + 0x3c], esi */ { u32 ad = (u32)(r_ebx+0x3cu);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e5242: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e5244: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e5246: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006e524a: fild dword ptr [esp + 0x44] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x44u)));
    /* 006e524e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006e5250: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006e5252: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 006e5256: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 006e525b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e5260: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006e5264: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 006e5268: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006e526c: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 006e5270: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 006e5274: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6e5279u); f_0082dcbc();
    /* 006e5279: fld dword ptr [ebp*4 + 0x96d340] */ FPUSH(R_F32((u32)(r_ebp*4+0x96d340u)));
    /* 006e5280: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006e5282: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 006e5285: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006e5288: fstp dword ptr [ebx + 0x30] */ W_F32((u32)(r_ebx+0x30u), ST(0)); FPOP();
    /* 006e528b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6e5290u); f_0082ddd8();
    /* 006e5290: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 006e5293: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006e5295: fadd dword ptr [ebx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x20u));
    /* 006e5298: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 006e529b: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 006e529e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6e52a3u); f_0082dcbc();
    /* 006e52a3: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 006e52a6: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 006e52a9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006e52ab: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 006e52ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e52af: fst dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0));
L_006e52b2:; BB(0x006e52b2);
    /* 006e52b2: movzx eax, byte ptr [ebx + 0x47] */ r_eax = (u32)R8((u32)(r_ebx+0x47u));
    /* 006e52b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e52b8: jne 0x6e5365 */ if (!fZ) goto L_006e5365;
L_006e52be:; BB(0x006e52be);
    /* 006e52be: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006e52c0: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 006e52c3: fsub dword ptr [ebx + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x20u));
    /* 006e52c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e52c8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006e52ca: fmul qword ptr [0x96d358] */ ST(0) = ST(0) * R_F64((u32)(0x96d358u));
    /* 006e52d0: fdiv qword ptr [0x96d350] */ ST(0) = ST(0) / R_F64((u32)(0x96d350u));
    /* 006e52d6: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 006e52da: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 006e52df: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e52e4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006e52e8: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 006e52ec: fistp dword ptr [esp + 0x3c] */ W32((u32)(r_esp+0x3cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006e52f0: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 006e52f4: movzx eax, byte ptr [ebx + 0x44] */ r_eax = (u32)R8((u32)(r_ebx+0x44u));
    /* 006e52f8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006e52fa: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 006e52fe: mov eax, dword ptr [eax*8 + 0x96d3f8] */ r_eax = R32((u32)(r_eax*8+0x96d3f8u));
    /* 006e5305: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006e5309: add edx, 0xffff8000 */ {  u32 a = r_edx; u32 b = 0xffff8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e530f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e5311: jbe 0x6e53f0 */ if ((fC||fZ)) goto L_006e53f0;
L_006e5317:; BB(0x006e5317);
    /* 006e5317: mov dword ptr [esp + 0x14], 0x4000 */ W32((u32)(r_esp+0x14u), 0x4000u);
    /* 006e531f: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006e5323: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_006e532b:; BB(0x006e532b);
    /* 006e532b: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006e532e: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 006e5331: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5333: je 0x6e5359 */ if (fZ) goto L_006e5359;
L_006e5335:; BB(0x006e5335);
    /* 006e5335: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 006e5338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5339: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6e533eu); f_00508db8();
    /* 006e533e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006e5342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5343: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006e5346: mov ecx, dword ptr [edx + ebp*4] */ r_ecx = R32((u32)(r_edx+r_ebp*4));
    /* 006e5349: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x6e534eu); f_00508dd0();
    /* 006e534e: movzx eax, byte ptr [ebx + 0x44] */ r_eax = (u32)R8((u32)(r_ebx+0x44u));
    /* 006e5352: mov eax, dword ptr [eax*8 + 0x96d3f8] */ r_eax = R32((u32)(r_eax*8+0x96d3f8u));
L_006e5359:; BB(0x006e5359);
    /* 006e5359: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e535c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e535e: jb 0x6e532b */ if (fC) goto L_006e532b;
L_006e5360:; BB(0x006e5360);
    /* 006e5360: jmp 0x6e53f0 */ goto L_006e53f0;
L_006e5365:; BB(0x006e5365);
    /* 006e5365: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006e5367: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e5369: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 006e5371: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e5376: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 006e537e: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 006e5386: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e538bu); f_0082d990();
    /* 006e538b: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 006e538e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e5390: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e5395u); f_0082d8bc();
    /* 006e5395: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006e5399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e539a: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006e539e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e53a0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6e53a5u); f_0082eab8();
    /* 006e53a5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6e53aau); f_0082da80();
    /* 006e53aa: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 006e53ae: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 006e53b2: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 006e53b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e53b8: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006e53bc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006e53c0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006e53c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e53c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e53c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e53c7: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x6e53ccu); f_007a8d98();
    /* 006e53cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e53cf: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006e53d2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006e53d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e53d6: je 0x6e53f0 */ if (fZ) goto L_006e53f0;
L_006e53d8:; BB(0x006e53d8);
    /* 006e53d8: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 006e53db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e53dc: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6e53e1u); f_00508db8();
    /* 006e53e1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006e53e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e53e6: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 006e53e9: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006e53eb: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x6e53f0u); f_00508dd0();
L_006e53f0:; BB(0x006e53f0);
    /* 006e53f0: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e53f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e53f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e53f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e53f6: ret  */ FN_RET(0x006e50f4); r_esp += 4; return;
L_006e53f7:; BB(0x006e53f7);
    /* 006e53f7: mov ebp, 2 */ r_ebp = 0x2u;
    /* 006e53fc: jmp 0x6e513d */ goto L_006e513d;
L_006e5401:; BB(0x006e5401);
    /* 006e5401: mov ebp, 1 */ r_ebp = 0x1u;
    /* 006e5406: jmp 0x6e513d */ goto L_006e513d;
L_006e540b:; BB(0x006e540b);
    /* 006e540b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006e540d: jmp 0x6e513d */ goto L_006e513d;
}

void f_006e5414(void) /* sub_6E5414 */
{
    FN_ENTER(0x006e5414);
    /* 006e5414: mov dword ptr [0xa966e8], 0x3f800000 */ W32((u32)(0xa966e8u), 0x3f800000u);
    /* 006e541e: mov dword ptr [0xa966ec], 0x41000000 */ W32((u32)(0xa966ecu), 0x41000000u);
    /* 006e5428: mov dword ptr [0xa966f0], 0x3fc00000 */ W32((u32)(0xa966f0u), 0x3fc00000u);
    /* 006e5432: ret  */ FN_RET(0x006e5414); r_esp += 4; return;
}

void f_006e5434(void) /* sub_6E5434 */
{
    FN_ENTER(0x006e5434);
    /* 006e5434: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5435: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e5437: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e5439: call 0x6e5458 */ r_esp -= 4; W32(r_esp, 0x6e543eu); f_006e5458();
    /* 006e543e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e5442: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e5444: jne 0x6e544a */ if (!fZ) goto L_006e544a;
L_006e5446:; BB(0x006e5446);
    /* 006e5446: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e5447: ret 4 */ FN_RET(0x006e5434); r_esp += 8; return;
L_006e544a:; BB(0x006e544a);
    /* 006e544a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e544b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e5450u); f_005c2f74();
    /* 006e5450: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5451: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e5452: ret 4 */ FN_RET(0x006e5434); r_esp += 8; return;
}

void f_006e5458(void) /* sub_6E5458 */
{
    FN_ENTER(0x006e5458);
    /* 006e5458: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e5459: mov ebp, esp */ r_ebp = r_esp;
    /* 006e545b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e545d: push 0x8eec30 */ { u32 v = 0x8eec30u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5462: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e5468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5469: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e5470: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e5473: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e5476: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e5479: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e547c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e547f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e5482: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5485: mov dword ptr [ecx], 0xb3d5a0 */ W32((u32)(r_ecx), 0xb3d5a0u);
    /* 006e548b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5492: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6e5497u); f_006efddc();
    /* 006e5497: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e549a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e54a1: mov esp, ebp */ r_esp = r_ebp;
    /* 006e54a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e54a4: ret  */ FN_RET(0x006e5458); r_esp += 4; return;
}

void f_006e54a8(void) /* sub_6E54A8 */
{
    FN_ENTER(0x006e54a8);
    /* 006e54a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e54a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006e54ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e54ad: push 0x8eec58 */ { u32 v = 0x8eec58u; r_esp -= 4; W32(r_esp, v); }
    /* 006e54b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e54b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e54b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e54c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e54c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e54c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e54c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e54cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e54cf: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e54d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e54db: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e54e0u); f_005caba4();
    /* 006e54e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e54e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e54e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e54e6: je 0x6e5511 */ if (fZ) goto L_006e5511;
L_006e54e8:; BB(0x006e54e8);
    /* 006e54e8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e54ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e54f6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e54f9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e54fc: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e54ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5502: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5505: call 0x6e5520 */ r_esp -= 4; W32(r_esp, 0x6e550au); f_006e5520();
    /* 006e550a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e5511:; BB(0x006e5511);
    /* 006e5511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e5514: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e551b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e551d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e551e: ret  */ FN_RET(0x006e54a8); r_esp += 4; return;
}

void f_006e5520(void) /* sub_6E5520 */
{
    FN_ENTER(0x006e5520);
    /* 006e5520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e5521: mov ebp, esp */ r_ebp = r_esp;
    /* 006e5523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e5525: push 0x8eec74 */ { u32 v = 0x8eec74u; r_esp -= 4; W32(r_esp, v); }
    /* 006e552a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e5530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e5538: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e553b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e553e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e5541: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e5544: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e5547: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 006e554a: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e554d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e5550: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e5553: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5555: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5558: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e555b: call 0x6efe50 */ r_esp -= 4; W32(r_esp, 0x6e5560u); f_006efe50();
    /* 006e5560: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e5567: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e556a: mov dword ptr [edi], 0xb3d5a0 */ W32((u32)(r_edi), 0xb3d5a0u);
    /* 006e5570: lea ebx, [edi + 0x134] */ r_ebx = (u32)(r_edi+0x134u);
    /* 006e5576: mov esi, 0xb */ r_esi = 0xbu;
    /* 006e557b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006e557d:; BB(0x006e557d);
    /* 006e557d: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e5582: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 006e5585: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e5587: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 006e558b: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 006e558e: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5591: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006e5594: jne 0x6e557d */ if (!fZ) goto L_006e557d;
L_006e5596:; BB(0x006e5596);
    /* 006e5596: mov dword ptr [edi + 0x130], 0 */ W32((u32)(r_edi+0x130u), 0x0u);
    /* 006e55a0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e55a3: mov eax, dword ptr [0x9cf8a8] */ r_eax = R32((u32)(0x9cf8a8u));
    /* 006e55a8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e55ab: call 0x6e578c */ r_esp -= 4; W32(r_esp, 0x6e55b0u); f_006e578c();
    /* 006e55b0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e55b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e55b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006e55b8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006e55bb: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006e55be: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006e55c1: add edx, 0x130 */ {  u32 a = r_edx; u32 b = 0x130u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e55c7: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 006e55c9: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 006e55cc: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 006e55cf: mov dword ptr [edx + 8], esi */ W32((u32)(r_edx+0x8u), r_esi);
    /* 006e55d2: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 006e55d5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 006e55d8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006e55db: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006e55de: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006e55e1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 006e55e4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e55e7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006e55ea: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006e55ed: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 006e55f0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006e55f3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006e55f6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 006e55f9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 006e55fc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 006e55ff: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 006e5602: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 006e5605: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 006e5608: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 006e560b: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 006e560e: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006e5611: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006e5614: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006e5617: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006e561a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 006e561d: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 006e5620: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 006e5623: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006e5626: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 006e5629: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006e562c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 006e562f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 006e5632: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 006e5635: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 006e5638: mov ecx, dword ptr [eax + 0x54] */ r_ecx = R32((u32)(r_eax+0x54u));
    /* 006e563b: mov eax, dword ptr [eax + 0x58] */ r_eax = R32((u32)(r_eax+0x58u));
    /* 006e563e: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006e5641: mov dword ptr [edx + 0x58], eax */ W32((u32)(r_edx+0x58u), r_eax);
    /* 006e5644: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e5647: movsx edx, word ptr [eax + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e564e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5650: je 0x6e5753 */ if (fZ) goto L_006e5753;
L_006e5656:; BB(0x006e5656);
    /* 006e5656: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5659: je 0x6e5739 */ if (fZ) goto L_006e5739;
L_006e565f:; BB(0x006e565f);
    /* 006e565f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e5662: jl 0x6e56d6 */ if ((fS!=fO)) goto L_006e56d6;
L_006e5664:; BB(0x006e5664);
    /* 006e5664: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e5667: jle 0x6e56a5 */ if ((fZ||fS!=fO)) goto L_006e56a5;
L_006e5669:; BB(0x006e5669);
    /* 006e5669: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e566c: jne 0x6e5701 */ if (!fZ) goto L_006e5701;
L_006e5672:; BB(0x006e5672);
    /* 006e5672: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e5675: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e5677: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e567a: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006e567f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e5684u); f_00814298();
    /* 006e5684: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5687: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e5689: jl 0x6e56a0 */ if ((fS!=fO)) goto L_006e56a0;
L_006e568b:; BB(0x006e568b);
    /* 006e568b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e568d: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5693: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e5698u); f_00814664();
    /* 006e5698: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e569b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e569e: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e56a0:; BB(0x006e56a0);
    /* 006e56a0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e56a3: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e56a5:; BB(0x006e56a5);
    /* 006e56a5: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e56a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e56aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e56ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e56ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e56ad: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006e56b2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e56b7u); f_00814298();
    /* 006e56b7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e56ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e56bc: jl 0x6e56d3 */ if ((fS!=fO)) goto L_006e56d3;
L_006e56be:; BB(0x006e56be);
    /* 006e56be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e56c0: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e56c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e56c6: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e56cbu); f_00814664();
    /* 006e56cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e56ce: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e56d1: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e56d3:; BB(0x006e56d3);
    /* 006e56d3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_006e56d6:; BB(0x006e56d6);
    /* 006e56d6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e56d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e56db: je 0x6e56e8 */ if (fZ) goto L_006e56e8;
L_006e56dd:; BB(0x006e56dd);
    /* 006e56dd: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006e56e1: mov word ptr [eax + 0xc8], dx */ W16((u32)(r_eax+0xc8u), (u16)r_edx);
L_006e56e8:; BB(0x006e56e8);
    /* 006e56e8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e56eb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e56ee: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e56f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e56f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e56fb: mov esp, ebp */ r_esp = r_ebp;
    /* 006e56fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e56fe: ret 0x10 */ FN_RET(0x006e5520); r_esp += 20; return;
L_006e5701:; BB(0x006e5701);
    /* 006e5701: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5704: jne 0x6e56d6 */ if (!fZ) goto L_006e56d6;
L_006e5706:; BB(0x006e5706);
    /* 006e5706: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e5709: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e570b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e570c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e570d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e570e: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5713: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e5718u); f_00814298();
    /* 006e5718: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e571b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e571d: jl 0x6e5734 */ if ((fS!=fO)) goto L_006e5734;
L_006e571f:; BB(0x006e571f);
    /* 006e571f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5721: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5726: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5727: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e572cu); f_00814664();
    /* 006e572c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e572f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e5732: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e5734:; BB(0x006e5734);
    /* 006e5734: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e5737: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e5739:; BB(0x006e5739);
    /* 006e5739: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e573c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e573e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e573f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5741: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5746: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e574bu); f_00814298();
    /* 006e574b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e574e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e5751: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e5753:; BB(0x006e5753);
    /* 006e5753: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e5756: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e5758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5759: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e575a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e575b: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5760: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e5765u); f_00814298();
    /* 006e5765: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006e576a: jl 0x6e5784 */ if ((fS!=fO)) goto L_006e5784;
L_006e576c:; BB(0x006e576c);
    /* 006e576c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e576e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5773: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5774: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e5779u); f_00814664();
    /* 006e5779: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e577c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e577f: jmp 0x6e56d6 */ goto L_006e56d6;
L_006e5784:; BB(0x006e5784);
    /* 006e5784: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e5787: jmp 0x6e56d6 */ goto L_006e56d6;
}

void f_006e578c(void) /* sub_6E578C */
{
    FN_ENTER(0x006e578c);
    /* 006e578c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e578d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e5790: mov edi, ecx */ r_edi = r_ecx;
    /* 006e5792: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e5799: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e579e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e579f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006e57a1: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e57a6u); f_006ded14();
    /* 006e57a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e57a9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e57ab: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 006e57b1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e57b4: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 006e57ba: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e57bd: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 006e57c3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e57c6: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 006e57cc: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e57cf: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 006e57d5: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e57d8: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 006e57de: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e57e1: mov dword ptr [edi + 0xe4], edx */ W32((u32)(r_edi+0xe4u), r_edx);
    /* 006e57e7: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e57ea: mov dword ptr [edi + 0xe8], edx */ W32((u32)(r_edi+0xe8u), r_edx);
    /* 006e57f0: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e57f3: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 006e57f9: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e57fc: mov dword ptr [edi + 0xf0], edx */ W32((u32)(r_edi+0xf0u), r_edx);
    /* 006e5802: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e5805: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 006e580b: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e5812: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e5815: jl 0x6e5852 */ if ((fS!=fO)) goto L_006e5852;
L_006e5817:; BB(0x006e5817);
    /* 006e5817: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e581cu); f_00687c48();
    /* 006e581c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e581e: jne 0x6e584b */ if (!fZ) goto L_006e584b;
L_006e5820:; BB(0x006e5820);
    /* 006e5820: movsx ecx, word ptr [0x9cf73c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf73cu));
    /* 006e5827: movsx edx, word ptr [0x9cf73e] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf73eu));
    /* 006e582e: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e5835: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e5838: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e583a: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006e583d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e5840: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e5846: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e5849: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e584a: ret  */ FN_RET(0x006e578c); r_esp += 4; return;
L_006e584b:; BB(0x006e584b);
    /* 006e584b: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
L_006e5852:; BB(0x006e5852);
    /* 006e5852: movsx edx, word ptr [edi + 0xf0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xf0u));
    /* 006e5859: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e585c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e5860: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e5864: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 006e586a: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e5870: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e5875u); f_00687c48();
    /* 006e5875: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5877: je 0x6e588b */ if (fZ) goto L_006e588b;
L_006e5879:; BB(0x006e5879);
    /* 006e5879: fld dword ptr [edi + 0xcc] */ FPUSH(R_F32((u32)(r_edi+0xccu)));
    /* 006e587f: fmul dword ptr [0x9cf7b8] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7b8u));
    /* 006e5885: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
L_006e588b:; BB(0x006e588b);
    /* 006e588b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e588e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e588f: ret  */ FN_RET(0x006e578c); r_esp += 4; return;
}

void f_006e5890(void) /* sub_6E5890 */
{
    FN_ENTER(0x006e5890);
    /* 006e5890: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e5891: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e5894: mov edi, ecx */ r_edi = r_ecx;
    /* 006e5896: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 006e589d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e589e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e58a3u); f_007b4d18();
    /* 006e58a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e58a4: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006e58a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e58a9: je 0x6e5942 */ if (fZ) goto L_006e5942;
L_006e58af:; BB(0x006e58af);
    /* 006e58af: mov eax, dword ptr [edi + 0x130] */ r_eax = R32((u32)(r_edi+0x130u));
    /* 006e58b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e58b7: jne 0x6e58cb */ if (!fZ) goto L_006e58cb;
L_006e58b9:; BB(0x006e58b9);
    /* 006e58b9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e58bd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e58c2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e58c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e58c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e58ca: ret  */ FN_RET(0x006e5890); r_esp += 4; return;
L_006e58cb:; BB(0x006e58cb);
    /* 006e58cb: mov ecx, edi */ r_ecx = r_edi;
    /* 006e58cd: call 0x6e5954 */ r_esp -= 4; W32(r_esp, 0x6e58d2u); f_006e5954();
    /* 006e58d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e58d5: je 0x6e58e9 */ if (fZ) goto L_006e58e9;
L_006e58d7:; BB(0x006e58d7);
    /* 006e58d7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e58db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e58e0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e58e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e58e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e58e8: ret  */ FN_RET(0x006e5890); r_esp += 4; return;
L_006e58e9:; BB(0x006e58e9);
    /* 006e58e9: mov edx, dword ptr [edi + 0x130] */ r_edx = R32((u32)(r_edi+0x130u));
    /* 006e58ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e58f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e58f3: jle 0x6e58d7 */ if ((fZ||fS!=fO)) goto L_006e58d7;
L_006e58f5:; BB(0x006e58f5);
    /* 006e58f5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e58f9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e58fc: mov esi, eax */ r_esi = r_eax;
L_006e58fe:; BB(0x006e58fe);
    /* 006e58fe: movzx edx, word ptr [edi + esi*8 + 0x134] */ r_edx = (u32)R16((u32)(r_edi+r_esi*8+0x134u));
    /* 006e5906: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5907: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e590cu); f_007b4d18();
    /* 006e590c: mov ebx, eax */ r_ebx = r_eax;
    /* 006e590e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e590f: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e5914u); f_006ea700();
    /* 006e5914: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5917: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5919: je 0x6e592e */ if (fZ) goto L_006e592e;
L_006e591b:; BB(0x006e591b);
    /* 006e591b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e591c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e5921u); f_006ea71c();
    /* 006e5921: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5924: je 0x6e592e */ if (fZ) goto L_006e592e;
L_006e5926:; BB(0x006e5926);
    /* 006e5926: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5927: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006e5929: mov ecx, edi */ r_ecx = r_edi;
    /* 006e592b: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x6e592eu); call_ind(t); }
L_006e592e:; BB(0x006e592e);
    /* 006e592e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e5931: cmp esi, dword ptr [edi + 0x130] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x130u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e5937: jl 0x6e58fe */ if ((fS!=fO)) goto L_006e58fe;
L_006e5939:; BB(0x006e5939);
    /* 006e5939: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006e593d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006e5940: jmp 0x6e58d7 */ goto L_006e58d7;
L_006e5942:; BB(0x006e5942);
    /* 006e5942: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e5946: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e594b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e594f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e5952: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e5953: ret  */ FN_RET(0x006e5890); r_esp += 4; return;
}

void f_006e5954(void) /* sub_6E5954 */
{
    FN_ENTER(0x006e5954);
    /* 006e5954: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e5955: mov ebp, esp */ r_ebp = r_esp;
    /* 006e5957: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e5959: push 0x8eef72 */ { u32 v = 0x8eef72u; r_esp -= 4; W32(r_esp, v); }
    /* 006e595e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e5964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5965: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e596c: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e5972: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e5975: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006e5978: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006e597b: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006e597e: movzx eax, word ptr [ecx + 0x134] */ r_eax = (u32)R16((u32)(r_ecx+0x134u));
    /* 006e5985: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e5988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5989: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e598eu); f_007b4d18();
    /* 006e598e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e5991: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5992: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e5997u); f_006ea700();
    /* 006e5997: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e599a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e599c: jne 0x6e59ae */ if (!fZ) goto L_006e59ae;
L_006e599e:; BB(0x006e599e);
    /* 006e599e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e59a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e59a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e59aa: mov esp, ebp */ r_esp = r_ebp;
    /* 006e59ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e59ad: ret  */ FN_RET(0x006e5954); r_esp += 4; return;
L_006e59ae:; BB(0x006e59ae);
    /* 006e59ae: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e59b1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e59b4: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 006e59ba: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e59c1: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 006e59c7: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006e59ca: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e59cc: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e59ce: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e59d0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e59d2: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006e59d4: fld dword ptr [ebx + esi*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_esi*4+0x1cu)));
    /* 006e59d8: fsub dword ptr [edi + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x20u));
    /* 006e59db: fld dword ptr [ebx + esi*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_esi*4+0x20u)));
    /* 006e59df: fsub dword ptr [edi + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x24u));
    /* 006e59e2: fld dword ptr [ebx + esi*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_esi*4+0x24u)));
    /* 006e59e6: fsub dword ptr [edi + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x28u));
    /* 006e59e9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e59eb: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 006e59f1: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 006e59f7: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 006e59fd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e5a02u); f_0083173c();
    /* 006e5a02: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e5a05: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e5a08: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e5a0e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e5a10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e5a11: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e5a17:; BB(0x006e5a17);
    /* 006e5a17: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 006e5a1d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e5a22u); f_0082df08();
    /* 006e5a22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e5a24: mov eax, edi */ r_eax = r_edi;
    /* 006e5a26: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e5a2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5a2f: je 0x6e68c0 */ if (fZ) goto L_006e68c0;
L_006e5a35:; BB(0x006e5a35);
    /* 006e5a35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5a38: je 0x6e67c6 */ if (fZ) goto L_006e67c6;
L_006e5a3e:; BB(0x006e5a3e);
    /* 006e5a3e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5a41: je 0x6e66cc */ if (fZ) goto L_006e66cc;
L_006e5a47:; BB(0x006e5a47);
    /* 006e5a47: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5a4a: je 0x6e5e88 */ if (fZ) goto L_006e5e88;
L_006e5a50:; BB(0x006e5a50);
    /* 006e5a50: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5a53: jne 0x6e5be3 */ if (!fZ) goto L_006e5be3;
L_006e5a59:; BB(0x006e5a59);
    /* 006e5a59: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 006e5a63: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5a68: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5a6du); f_005caba4();
    /* 006e5a6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5a6e: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e5a74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5a76: je 0x6e5adb */ if (fZ) goto L_006e5adb;
L_006e5a78:; BB(0x006e5a78);
    /* 006e5a78: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 006e5a82: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006e5a89: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e5a8e: mov edx, edi */ r_edx = r_edi;
    /* 006e5a90: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e5a93: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e5a99: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5a9c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e5aa0: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e5aa8: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e5aab: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e5ab3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e5ab6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e5aba: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e5ac2: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e5ac8: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e5acc: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e5ad1u); f_006f3ba4();
    /* 006e5ad1: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
L_006e5adb:; BB(0x006e5adb);
    /* 006e5adb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5ae2: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 006e5aec: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5aee: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5af3u); f_005caba4();
    /* 006e5af3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5af4: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e5afa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5afc: je 0x6e5b59 */ if (fZ) goto L_006e5b59;
L_006e5afe:; BB(0x006e5afe);
    /* 006e5afe: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 006e5b08: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006e5b0f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5b12: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e5b17: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e5b1e: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e5b24: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5b2a: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e5b2d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b2f: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b31: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b33: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b35: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b37: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b39: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5b3b: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e5b3f: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e5b42: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5b43: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e5b49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5b4a: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e5b4fu); f_006f4554();
    /* 006e5b4f: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_006e5b59:; BB(0x006e5b59);
    /* 006e5b59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5b60: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 006e5b6a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5b6c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5b71u); f_005caba4();
    /* 006e5b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5b72: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e5b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5b7a: je 0x6e5bd7 */ if (fZ) goto L_006e5bd7;
L_006e5b7c:; BB(0x006e5b7c);
    /* 006e5b7c: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 006e5b86: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 006e5b8d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5b90: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5b95: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e5b9c: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e5ba2: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5ba8: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e5bab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5bad: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5baf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5bb1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5bb3: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5bb5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5bb7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5bb9: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e5bbd: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e5bc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5bc1: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e5bc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5bc8: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e5bcdu); f_006f4554();
    /* 006e5bcd: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_006e5bd7:; BB(0x006e5bd7);
    /* 006e5bd7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5bde: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e5be3:; BB(0x006e5be3);
    /* 006e5be3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5be6: jne 0x6e5ffb */ if (!fZ) goto L_006e5ffb;
L_006e5bec:; BB(0x006e5bec);
    /* 006e5bec: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 006e5bf6: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5bfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5c00u); f_005caba4();
    /* 006e5c00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5c01: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e5c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5c09: je 0x6e5c6e */ if (fZ) goto L_006e5c6e;
L_006e5c0b:; BB(0x006e5c0b);
    /* 006e5c0b: mov dword ptr [ebp - 0xac], 1 */ W32((u32)(r_ebp+0xffffff54u), 0x1u);
    /* 006e5c15: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e5c1c: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e5c21: mov edx, edi */ r_edx = r_edi;
    /* 006e5c23: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e5c26: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e5c2c: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5c2f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e5c33: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e5c3b: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e5c3e: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e5c46: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e5c49: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e5c4d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e5c55: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e5c5b: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e5c5f: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e5c64u); f_006f3ba4();
    /* 006e5c64: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
L_006e5c6e:; BB(0x006e5c6e);
    /* 006e5c6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5c75: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 006e5c7f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5c84: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5c89u); f_005caba4();
    /* 006e5c89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5c8a: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e5c90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5c92: je 0x6e5cf7 */ if (fZ) goto L_006e5cf7;
L_006e5c94:; BB(0x006e5c94);
    /* 006e5c94: mov dword ptr [ebp - 0xa4], 1 */ W32((u32)(r_ebp+0xffffff5cu), 0x1u);
    /* 006e5c9e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e5ca5: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e5caa: mov edx, edi */ r_edx = r_edi;
    /* 006e5cac: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e5caf: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e5cb5: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5cb8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e5cbc: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e5cc4: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e5cc7: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e5ccf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e5cd2: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e5cd6: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e5cde: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e5ce4: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e5ce8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e5cedu); f_006f3ba4();
    /* 006e5ced: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
L_006e5cf7:; BB(0x006e5cf7);
    /* 006e5cf7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5cfe: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 006e5d08: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5d0d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5d12u); f_005caba4();
    /* 006e5d12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5d13: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e5d19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5d1b: je 0x6e5d80 */ if (fZ) goto L_006e5d80;
L_006e5d1d:; BB(0x006e5d1d);
    /* 006e5d1d: mov dword ptr [ebp - 0xa0], 1 */ W32((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 006e5d27: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006e5d2e: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e5d33: mov edx, edi */ r_edx = r_edi;
    /* 006e5d35: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e5d38: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e5d3e: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5d41: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e5d45: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e5d4d: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e5d50: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e5d58: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e5d5b: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e5d5f: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e5d67: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e5d6d: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e5d71: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e5d76u); f_006f3ba4();
    /* 006e5d76: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
L_006e5d80:; BB(0x006e5d80);
    /* 006e5d80: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5d87: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 006e5d91: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5d93: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5d98u); f_005caba4();
    /* 006e5d98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5d99: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e5d9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5da1: je 0x6e5dfe */ if (fZ) goto L_006e5dfe;
L_006e5da3:; BB(0x006e5da3);
    /* 006e5da3: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 006e5dad: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006e5db4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5db7: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e5dbc: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e5dc3: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e5dc9: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5dcf: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e5dd2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5dd4: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5dd6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5dd8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5dda: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5ddc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5dde: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5de0: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e5de4: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e5de7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5de8: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e5dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5def: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e5df4u); f_006f4554();
    /* 006e5df4: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
L_006e5dfe:; BB(0x006e5dfe);
    /* 006e5dfe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5e05: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
    /* 006e5e0f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5e11: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5e16u); f_005caba4();
    /* 006e5e16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5e17: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e5e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5e1f: je 0x6e5e7c */ if (fZ) goto L_006e5e7c;
L_006e5e21:; BB(0x006e5e21);
    /* 006e5e21: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 006e5e2b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006e5e32: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5e35: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5e3a: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e5e41: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e5e47: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5e4d: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e5e50: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e52: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e54: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e56: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e58: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e5a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e5c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5e5e: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e5e62: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e5e65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5e66: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e5e6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5e6d: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e5e72u); f_006f4554();
    /* 006e5e72: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_006e5e7c:; BB(0x006e5e7c);
    /* 006e5e7c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5e83: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e5e88:; BB(0x006e5e88);
    /* 006e5e88: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 006e5e92: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5e97: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5e9cu); f_005caba4();
    /* 006e5e9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5e9d: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e5ea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5ea5: je 0x6e5f0a */ if (fZ) goto L_006e5f0a;
L_006e5ea7:; BB(0x006e5ea7);
    /* 006e5ea7: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 006e5eb1: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 006e5eb8: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e5ebd: mov edx, edi */ r_edx = r_edi;
    /* 006e5ebf: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e5ec2: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e5ec8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e5ecb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e5ecf: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e5ed7: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e5eda: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e5ee2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e5ee5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e5ee9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e5ef1: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e5ef7: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e5efb: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e5f00u); f_006f3ba4();
    /* 006e5f00: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_006e5f0a:; BB(0x006e5f0a);
    /* 006e5f0a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5f11: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006e5f18: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5f1a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5f1fu); f_005caba4();
    /* 006e5f1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5f20: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e5f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5f28: je 0x6e5f7f */ if (fZ) goto L_006e5f7f;
L_006e5f2a:; BB(0x006e5f2a);
    /* 006e5f2a: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006e5f31: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 006e5f38: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5f3b: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e5f40: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e5f47: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e5f4d: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5f53: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e5f56: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f58: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f5a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f5c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f5e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f60: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f62: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5f64: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e5f68: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e5f6b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5f6c: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e5f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5f73: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e5f78u); f_006f4554();
    /* 006e5f78: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_006e5f7f:; BB(0x006e5f7f);
    /* 006e5f7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e5f86: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 006e5f8d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5f8f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e5f94u); f_005caba4();
    /* 006e5f94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e5f95: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e5f9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e5f9d: je 0x6e5ff4 */ if (fZ) goto L_006e5ff4;
L_006e5f9f:; BB(0x006e5f9f);
    /* 006e5f9f: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 006e5fa6: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 006e5fad: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e5fb0: push 0x188 */ { u32 v = 0x188u; r_esp -= 4; W32(r_esp, v); }
    /* 006e5fb5: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e5fbc: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e5fc2: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e5fc8: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e5fcb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fcd: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fcf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fd1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fd3: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fd5: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fd7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e5fd9: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e5fdd: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e5fe0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e5fe1: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e5fe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e5fe8: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e5fedu); f_006f4554();
    /* 006e5fed: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_006e5ff4:; BB(0x006e5ff4);
    /* 006e5ff4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e5ffb:; BB(0x006e5ffb);
    /* 006e5ffb: mov eax, edi */ r_eax = r_edi;
    /* 006e5ffd: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e6003: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6006: je 0x6e69ba */ if (fZ) goto L_006e69ba;
L_006e600c:; BB(0x006e600c);
    /* 006e600c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e600e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_006e6011:; BB(0x006e6011);
    /* 006e6011: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e6014: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e6017: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e6019: jge 0x6e69ba */ if ((fS==fO)) goto L_006e69ba;
L_006e601f:; BB(0x006e601f);
    /* 006e601f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e6021: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6024: movzx ebx, word ptr [edx + ecx*8 + 0x134] */ r_ebx = (u32)R16((u32)(r_edx+r_ecx*8+0x134u));
    /* 006e602c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e602d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006e6030: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e6033: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e6038u); f_007b4d18();
    /* 006e6038: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e603b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e603e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e6041: movzx ecx, word ptr [eax + edx*8 + 0x13c] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*8+0x13cu));
    /* 006e6049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e604a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e604fu); f_007b4d18();
    /* 006e604f: mov ebx, eax */ r_ebx = r_eax;
    /* 006e6051: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6054: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6055: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e605au); f_006ea700();
    /* 006e605a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e605d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e605f: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6065:; BB(0x006e6065);
    /* 006e6065: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6066: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e606bu); f_006ea700();
    /* 006e606b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e606c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e606e: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e6074:; BB(0x006e6074);
    /* 006e6074: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6077: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 006e607a: test esi, 0x20000000 */ {  u32 a = r_esi; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6080: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e6082:; BB(0x006e6082);
    /* 006e6082: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 006e6085: test edx, 0x20000000 */ {  u32 a = r_edx; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e608b: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e608d:; BB(0x006e608d);
    /* 006e608d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e6091: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e6096u); f_006ea71c();
    /* 006e6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6097: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6099: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e609b:; BB(0x006e609b);
    /* 006e609b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e609c: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x6e60a1u); f_006ea71c();
    /* 006e60a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e60a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60a4: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60a6:; BB(0x006e60a6);
    /* 006e60a6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e60a9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006e60ab: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60b1u); call_ind(t); }
    /* 006e60b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60b3: je 0x6e60c7 */ if (fZ) goto L_006e60c7;
L_006e60b5:; BB(0x006e60b5);
    /* 006e60b5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e60b7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e60b9: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6e60bfu); call_ind(t); }
    /* 006e60bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e60c1: jne 0x6e66b3 */ if (!fZ) goto L_006e66b3;
L_006e60c7:; BB(0x006e60c7);
    /* 006e60c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e60ca: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e60cd: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e60d0: movsx esi, word ptr [edi + eax*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x136u));
    /* 006e60d8: mov ebx, dword ptr [ebx + 0xa4] */ r_ebx = R32((u32)(r_ebx+0xa4u));
    /* 006e60de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e60e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e3: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e60e9: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e60eb: movsx esi, word ptr [edi + eax*4 + 0x13e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*4+0x13eu));
    /* 006e60f3: fld dword ptr [ebx + edx*4 + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x1cu)));
    /* 006e60f7: fld dword ptr [ebx + edx*4 + 0x20] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x20u)));
    /* 006e60fb: fld dword ptr [ebx + edx*4 + 0x24] */ FPUSH(R_F32((u32)(r_ebx+r_edx*4+0x24u)));
    /* 006e60ff: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e6102: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6104: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e6106: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e6108: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e610a: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006e610c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e610f: mov esi, dword ptr [esi + 0xa4] */ r_esi = R32((u32)(r_esi+0xa4u));
    /* 006e6115: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6117: fsub dword ptr [esi + eax*4 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x1cu));
    /* 006e611b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e611d: fsub dword ptr [esi + eax*4 + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x20u));
    /* 006e6121: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e6123: fsub dword ptr [esi + eax*4 + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax*4+0x24u));
    /* 006e6127: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e6129: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 006e612c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e612e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006e6131: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006e6134: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e6139u); f_0083173c();
    /* 006e6139: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 006e613c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e613f: fcomp dword ptr [0x96d480] */ fx_compare(ST(0), R_F32((u32)(0x96d480u))); FPOP();
    /* 006e6145: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e6147: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e6148: je 0x6e66b3 */ if (fZ) goto L_006e66b3;
L_006e614e:; BB(0x006e614e);
    /* 006e614e: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 006e6151: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6e6156u); f_0082df08();
    /* 006e6156: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e6158: mov eax, edi */ r_eax = r_edi;
    /* 006e615a: movsx eax, word ptr [eax + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xc6u));
    /* 006e6161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6163: je 0x6e6611 */ if (fZ) goto L_006e6611;
L_006e6169:; BB(0x006e6169);
    /* 006e6169: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e616c: je 0x6e656f */ if (fZ) goto L_006e656f;
L_006e6172:; BB(0x006e6172);
    /* 006e6172: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6175: je 0x6e64cd */ if (fZ) goto L_006e64cd;
L_006e617b:; BB(0x006e617b);
    /* 006e617b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e617e: je 0x6e641e */ if (fZ) goto L_006e641e;
L_006e6184:; BB(0x006e6184);
    /* 006e6184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6187: jne 0x6e622f */ if (!fZ) goto L_006e622f;
L_006e618d:; BB(0x006e618d);
    /* 006e618d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006e6194: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6199: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e619eu); f_005caba4();
    /* 006e619e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e619f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e61a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e61a4: je 0x6e6223 */ if (fZ) goto L_006e6223;
L_006e61a6:; BB(0x006e61a6);
    /* 006e61a6: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006e61ad: mov dword ptr [ebp - 4], 0x14 */ W32((u32)(r_ebp+0xfffffffcu), 0x14u);
    /* 006e61b4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e61b9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e61bc: mov edx, edi */ r_edx = r_edi;
    /* 006e61be: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e61c1: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e61c9: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e61cc: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e61cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e61d3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e61d6: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e61dc: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e61e4: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e61e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61e9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61eb: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e61f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f7: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e61f9: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6201: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6203: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6205: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6209: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e620c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6210: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6213: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6217: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e621cu); f_006f3ba4();
    /* 006e621c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_006e6223:; BB(0x006e6223);
    /* 006e6223: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e622a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e622f:; BB(0x006e622f);
    /* 006e622f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6232: jne 0x6e64bb */ if (!fZ) goto L_006e64bb;
L_006e6238:; BB(0x006e6238);
    /* 006e6238: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006e623f: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6244: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6249u); f_005caba4();
    /* 006e6249: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e624a: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e624d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e624f: je 0x6e62ce */ if (fZ) goto L_006e62ce;
L_006e6251:; BB(0x006e6251);
    /* 006e6251: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006e6258: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 006e625f: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6264: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6267: mov edx, edi */ r_edx = r_edi;
    /* 006e6269: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e626c: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6274: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6277: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e627a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e627e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6281: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6287: mov dword ptr [esp + 0x10], 0x40a00000 */ W32((u32)(r_esp+0x10u), 0x40a00000u);
    /* 006e628f: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6292: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6294: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6296: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e629e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62a4: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e62ac: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62ae: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e62b0: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e62b4: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e62b7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e62bb: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e62be: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e62c2: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e62c7u); f_006f3ba4();
    /* 006e62c7: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006e62ce:; BB(0x006e62ce);
    /* 006e62ce: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e62d5: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006e62dc: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e62e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e62e6u); f_005caba4();
    /* 006e62e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e62e7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e62ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e62ec: je 0x6e6370 */ if (fZ) goto L_006e6370;
L_006e62f2:; BB(0x006e62f2);
    /* 006e62f2: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006e62f9: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 006e6300: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e6305: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6308: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e630b: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e630e: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6316: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6319: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e631c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6320: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6323: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6329: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6331: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6334: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6336: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6338: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6340: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6342: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6344: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6346: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e634e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6350: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6352: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6356: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6359: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e635d: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6360: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6364: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6369u); f_006f3ba4();
    /* 006e6369: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006e6370:; BB(0x006e6370);
    /* 006e6370: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6377: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006e637e: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6383: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6388u); f_005caba4();
    /* 006e6388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6389: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e638c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e638e: je 0x6e6412 */ if (fZ) goto L_006e6412;
L_006e6394:; BB(0x006e6394);
    /* 006e6394: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006e639b: mov dword ptr [ebp - 4], 0x13 */ W32((u32)(r_ebp+0xfffffffcu), 0x13u);
    /* 006e63a2: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e63a7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e63aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e63ad: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e63b0: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e63b8: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e63bb: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e63be: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e63c2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e63c5: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e63cb: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e63d3: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e63d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63d8: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63da: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e63e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63e8: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e63f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e63f4: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e63f8: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e63fb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e63ff: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6402: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6406: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e640bu); f_006f3ba4();
    /* 006e640b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006e6412:; BB(0x006e6412);
    /* 006e6412: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6419: jmp 0x6e64bb */ goto L_006e64bb;
L_006e641e:; BB(0x006e641e);
    /* 006e641e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006e6425: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e642a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e642fu); f_005caba4();
    /* 006e642f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6430: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6435: je 0x6e64b4 */ if (fZ) goto L_006e64b4;
L_006e6437:; BB(0x006e6437);
    /* 006e6437: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006e643e: mov dword ptr [ebp - 4], 0x15 */ W32((u32)(r_ebp+0xfffffffcu), 0x15u);
    /* 006e6445: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e644a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e644d: mov edx, edi */ r_edx = r_edi;
    /* 006e644f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6452: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e645a: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e645d: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6460: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6464: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6467: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e646d: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e6475: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6478: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647a: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e647c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6484: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6486: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6488: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e648a: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6492: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6494: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6496: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e649a: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e649d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e64a1: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e64a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e64a8: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e64adu); f_006f3ba4();
    /* 006e64ad: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006e64b4:; BB(0x006e64b4);
    /* 006e64b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e64bb:; BB(0x006e64bb);
    /* 006e64bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e64be: mov edx, dword ptr [eax + 0x130] */ r_edx = R32((u32)(r_eax+0x130u));
    /* 006e64c4: add dword ptr [ebp - 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e64c8: jmp 0x6e6011 */ goto L_006e6011;
L_006e64cd:; BB(0x006e64cd);
    /* 006e64cd: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e64d4: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e64d9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e64deu); f_005caba4();
    /* 006e64de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e64df: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e64e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e64e4: je 0x6e6563 */ if (fZ) goto L_006e6563;
L_006e64e6:; BB(0x006e64e6);
    /* 006e64e6: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e64ed: mov dword ptr [ebp - 4], 0x16 */ W32((u32)(r_ebp+0xfffffffcu), 0x16u);
    /* 006e64f4: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e64f9: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e64fc: mov edx, edi */ r_edx = r_edi;
    /* 006e64fe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6501: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e6509: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e650c: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e650f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6513: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6516: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e651c: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6524: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e6527: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6529: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e652b: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6533: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6535: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6537: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6539: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6541: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6543: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6545: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e6549: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e654c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6550: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6553: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e6557: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e655cu); f_006f3ba4();
    /* 006e655c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e6563:; BB(0x006e6563);
    /* 006e6563: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e656a: jmp 0x6e64bb */ goto L_006e64bb;
L_006e656f:; BB(0x006e656f);
    /* 006e656f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006e6576: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e657b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6580u); f_005caba4();
    /* 006e6580: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6581: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6586: je 0x6e6605 */ if (fZ) goto L_006e6605;
L_006e6588:; BB(0x006e6588);
    /* 006e6588: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006e658f: mov dword ptr [ebp - 4], 0x17 */ W32((u32)(r_ebp+0xfffffffcu), 0x17u);
    /* 006e6596: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e659b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e659e: mov edx, edi */ r_edx = r_edi;
    /* 006e65a0: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e65a3: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e65ab: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e65ae: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e65b1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e65b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e65b8: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e65be: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e65c6: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e65c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cb: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65cd: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e65d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65db: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e65e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e65e7: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e65eb: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e65ee: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e65f2: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e65f5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e65f9: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e65feu); f_006f3ba4();
    /* 006e65fe: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006e6605:; BB(0x006e6605);
    /* 006e6605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e660c: jmp 0x6e64bb */ goto L_006e64bb;
L_006e6611:; BB(0x006e6611);
    /* 006e6611: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e6618: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e661d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6622u); f_005caba4();
    /* 006e6622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6623: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006e6626: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6628: je 0x6e66a7 */ if (fZ) goto L_006e66a7;
L_006e662a:; BB(0x006e662a);
    /* 006e662a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e6631: mov dword ptr [ebp - 4], 0x18 */ W32((u32)(r_ebp+0xfffffffcu), 0x18u);
    /* 006e6638: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e663d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6640: mov edx, edi */ r_edx = r_edi;
    /* 006e6642: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e6645: movsx esi, word ptr [edx + ebx*4 + 0x136] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+r_ebx*4+0x136u));
    /* 006e664d: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6650: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6653: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6657: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e665a: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006e6660: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6668: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006e666b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e666f: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6677: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6679: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667b: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e667d: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6685: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6687: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e6689: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 006e668d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 006e6690: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006e6694: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 006e6697: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006e669b: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e66a0u); f_006f3ba4();
    /* 006e66a0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e66a7:; BB(0x006e66a7);
    /* 006e66a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e66ae: jmp 0x6e64bb */ goto L_006e64bb;
L_006e66b3:; BB(0x006e66b3);
    /* 006e66b3: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e66b6: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e66b9: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e66bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e66be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e66c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e66c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006e66ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e66cb: ret  */ FN_RET(0x006e5954); r_esp += 4; return;
L_006e66cc:; BB(0x006e66cc);
    /* 006e66cc: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 006e66d3: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e66d8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e66ddu); f_005caba4();
    /* 006e66dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e66de: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e66e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e66e6: je 0x6e6745 */ if (fZ) goto L_006e6745;
L_006e66e8:; BB(0x006e66e8);
    /* 006e66e8: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 006e66ef: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006e66f6: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e66fb: mov edx, edi */ r_edx = r_edi;
    /* 006e66fd: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e6700: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e6706: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6709: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e670d: mov dword ptr [esp + 0x10], 0x3f333333 */ W32((u32)(r_esp+0x10u), 0x3f333333u);
    /* 006e6715: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e6718: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6720: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6723: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e6727: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e672f: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e6735: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e6739: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e673eu); f_006f3ba4();
    /* 006e673e: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_006e6745:; BB(0x006e6745);
    /* 006e6745: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e674c: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 006e6753: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6755: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e675au); f_005caba4();
    /* 006e675a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e675b: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e6761: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6763: je 0x6e67ba */ if (fZ) goto L_006e67ba;
L_006e6765:; BB(0x006e6765);
    /* 006e6765: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 006e676c: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 006e6773: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6776: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e677b: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e6782: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e6788: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e678e: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6791: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6793: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6795: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6797: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6799: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e679b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e679d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e679f: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e67a3: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e67a6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e67a7: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e67ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e67ae: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e67b3u); f_006f4554();
    /* 006e67b3: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_006e67ba:; BB(0x006e67ba);
    /* 006e67ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e67c1: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e67c6:; BB(0x006e67c6);
    /* 006e67c6: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 006e67cd: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e67d2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e67d7u); f_005caba4();
    /* 006e67d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e67d8: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e67de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e67e0: je 0x6e683f */ if (fZ) goto L_006e683f;
L_006e67e2:; BB(0x006e67e2);
    /* 006e67e2: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 006e67e9: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 006e67f0: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e67f5: mov edx, edi */ r_edx = r_edi;
    /* 006e67f7: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e67fa: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e6800: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e6803: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6807: mov dword ptr [esp + 0x10], 0x3f19999a */ W32((u32)(r_esp+0x10u), 0x3f19999au);
    /* 006e680f: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e6812: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e681a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e681d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e6821: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6829: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e682f: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e6833: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6838u); f_006f3ba4();
    /* 006e6838: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_006e683f:; BB(0x006e683f);
    /* 006e683f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6846: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006e684d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e684f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e6854u); f_005caba4();
    /* 006e6854: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e6855: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e685b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e685d: je 0x6e68b4 */ if (fZ) goto L_006e68b4;
L_006e685f:; BB(0x006e685f);
    /* 006e685f: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 006e6866: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 006e686d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e6870: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e6875: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e687c: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e6882: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6888: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e688b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e688d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e688f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6891: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6893: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6895: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6897: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6899: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e689d: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e68a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e68a1: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e68a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e68a8: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e68adu); f_006f4554();
    /* 006e68ad: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006e68b4:; BB(0x006e68b4);
    /* 006e68b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e68bb: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e68c0:; BB(0x006e68c0);
    /* 006e68c0: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 006e68c7: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 006e68cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e68d1u); f_005caba4();
    /* 006e68d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e68d2: mov dword ptr [ebp - 0xa8], eax */ W32((u32)(r_ebp+0xffffff58u), r_eax);
    /* 006e68d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e68da: je 0x6e6939 */ if (fZ) goto L_006e6939;
L_006e68dc:; BB(0x006e68dc);
    /* 006e68dc: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 006e68e3: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 006e68ea: mov eax, dword ptr [0xaca344] */ r_eax = R32((u32)(0xaca344u));
    /* 006e68ef: mov edx, edi */ r_edx = r_edi;
    /* 006e68f1: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 006e68f4: mov ecx, dword ptr [ebp - 0xa8] */ r_ecx = R32((u32)(r_ebp+0xffffff58u));
    /* 006e68fa: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e68fd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006e6901: mov dword ptr [esp + 0x10], 0x3f000000 */ W32((u32)(r_esp+0x10u), 0x3f000000u);
    /* 006e6909: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
    /* 006e690c: mov dword ptr [esp + 0x14], 0x14000000 */ W32((u32)(r_esp+0x14u), 0x14000000u);
    /* 006e6914: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e6917: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e691b: mov dword ptr [esp + 0x18], 0x14 */ W32((u32)(r_esp+0x18u), 0x14u);
    /* 006e6923: lea esi, [ebp - 0xb8] */ r_esi = (u32)(r_ebp+0xffffff48u);
    /* 006e6929: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006e692d: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x6e6932u); f_006f3ba4();
    /* 006e6932: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_006e6939:; BB(0x006e6939);
    /* 006e6939: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e6940: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006e6947: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e6949: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e694eu); f_005caba4();
    /* 006e694e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e694f: mov dword ptr [ebp - 0x98], eax */ W32((u32)(r_ebp+0xffffff68u), r_eax);
    /* 006e6955: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e6957: je 0x6e69ae */ if (fZ) goto L_006e69ae;
L_006e6959:; BB(0x006e6959);
    /* 006e6959: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 006e6960: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 006e6967: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e696a: push 0x19f */ { u32 v = 0x19fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e696f: movsx eax, word ptr [edi + 0x136] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x136u));
    /* 006e6976: mov esi, dword ptr [edx + 0xa4] */ r_esi = R32((u32)(r_edx+0xa4u));
    /* 006e697c: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e6982: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006e6985: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6987: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6989: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698d: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006e698f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6991: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e6993: lea eax, [ebx + esi + 0x1c] */ r_eax = (u32)(r_ebx+r_esi+0x1cu);
    /* 006e6997: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 006e699a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e699b: mov ecx, dword ptr [ebp - 0x98] */ r_ecx = R32((u32)(r_ebp+0xffffff68u));
    /* 006e69a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e69a2: call 0x6f4554 */ r_esp -= 4; W32(r_esp, 0x6e69a7u); f_006f4554();
    /* 006e69a7: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_006e69ae:; BB(0x006e69ae);
    /* 006e69ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e69b5: jmp 0x6e5ffb */ goto L_006e5ffb;
L_006e69ba:; BB(0x006e69ba);
    /* 006e69ba: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 006e69bd: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e69c0: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e69c3: mov eax, 1 */ r_eax = 0x1u;
    /* 006e69c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e69cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e69d2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e69d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e69d5: ret  */ FN_RET(0x006e5954); r_esp += 4; return;
}

