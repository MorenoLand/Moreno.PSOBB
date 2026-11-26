#include "protos.h"

void f_00453030(void) /* sub_453030 */
{
    FN_ENTER(0x00453030);
    /* 00453030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453031: mov ebp, esp */ r_ebp = r_esp;
    /* 00453033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00453035: push 0x8cf1d2 */ { u32 v = 0x8cf1d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045303a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00453040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00453048: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045304b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045304e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00453051: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00453054: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00453057: push 0x388 */ { u32 v = 0x388u; r_esp -= 4; W32(r_esp, v); }
    /* 0045305c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00453063: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x453068u); f_005caba4();
    /* 00453068: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0045306b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045306e: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00453071: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453073: je 0x4532d4 */ if (fZ) goto L_004532d4;
L_00453079:; BB(0x00453079);
    /* 00453079: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00453080: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453087: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045308a: mov ecx, eax */ r_ecx = r_eax;
    /* 0045308c: mov dword ptr [ebp - 0x5c], ecx */ W32((u32)(r_ebp+0xffffffa4u), r_ecx);
    /* 0045308f: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x453094u); f_00770748();
    /* 00453094: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0045309b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045309e: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 004530a2: mov dword ptr [ecx], 0xaf72c0 */ W32((u32)(r_ecx), 0xaf72c0u);
    /* 004530a8: mov eax, dword ptr [0x9a5d10] */ r_eax = R32((u32)(0x9a5d10u));
    /* 004530ad: mov ebx, dword ptr [0xa9cd68] */ r_ebx = R32((u32)(0xa9cd68u));
    /* 004530b3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004530b6: mov word ptr [ecx + 0x33c], dx */ W16((u32)(r_ecx+0x33cu), (u16)r_edx);
    /* 004530bd: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004530c0: je 0x4532c3 */ if (fZ) goto L_004532c3;
L_004530c6:; BB(0x004530c6);
    /* 004530c6: mov eax, ecx */ r_eax = r_ecx;
    /* 004530c8: mov dword ptr [eax + 0x340], 0x96 */ W32((u32)(r_eax+0x340u), 0x96u);
L_004530d2:; BB(0x004530d2);
    /* 004530d2: push 0x3f8a3d71 */ { u32 v = 0x3f8a3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 004530d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004530da: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004530dc: mov esi, ecx */ r_esi = r_ecx;
    /* 004530de: mov dword ptr [esi + 0x344], edx */ W32((u32)(r_esi+0x344u), r_edx);
    /* 004530e4: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004530e7: mov dword ptr [esi + 0x348], ecx */ W32((u32)(r_esi+0x348u), r_ecx);
    /* 004530ed: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 004530f0: mov dword ptr [esi + 0x34c], ebx */ W32((u32)(r_esi+0x34cu), r_ebx);
    /* 004530f6: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004530f9: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 004530fc: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 004530ff: mov dword ptr [esi + 0x300], edx */ W32((u32)(r_esi+0x300u), r_edx);
    /* 00453105: mov dword ptr [esi + 0x304], ecx */ W32((u32)(r_esi+0x304u), r_ecx);
    /* 0045310b: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 00453111: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x453116u); f_0082dc9c();
    /* 00453116: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 00453119: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x45311eu); f_008587a5();
    /* 0045311e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00453121: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 00453124: fdiv dword ptr [0x8ffaa8] */ ST(0) = ST(0) / R_F32((u32)(0x8ffaa8u));
    /* 0045312a: fadd dword ptr [0x8ffaac] */ ST(0) = ST(0) + R_F32((u32)(0x8ffaacu));
    /* 00453130: fmul dword ptr [0x8ffab0] */ ST(0) = ST(0) * R_F32((u32)(0x8ffab0u));
    /* 00453136: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 00453139: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0045313d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00453142: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00453145: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00453148: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045314b: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0045314e: mov eax, esi */ r_eax = r_esi;
    /* 00453150: movzx edx, word ptr [eax + 0x33c] */ r_edx = (u32)R16((u32)(r_eax+0x33cu));
    /* 00453157: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0045315a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045315b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453160u); f_0068d5a8();
    /* 00453160: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453163: je 0x453281 */ if (fZ) goto L_00453281;
L_00453169:; BB(0x00453169);
    /* 00453169: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0045316b:; BB(0x0045316b);
    /* 0045316b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045316d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x453172u); f_0082dcbc();
    /* 00453172: fmul dword ptr [0x8ffaa4] */ ST(0) = ST(0) * R_F32((u32)(0x8ffaa4u));
    /* 00453178: fdiv dword ptr [ebp - 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0045317b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045317e: fstp dword ptr [eax + 0x350] */ W_F32((u32)(r_eax+0x350u), ST(0)); FPOP();
    /* 00453184: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00453186: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45318bu); f_0082ddd8();
    /* 0045318b: fmul dword ptr [0x8ffaa4] */ ST(0) = ST(0) * R_F32((u32)(0x8ffaa4u));
    /* 00453191: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 00453194: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00453196: fdivr dword ptr [0x8ffaa0] */ ST(0) = R_F32((u32)(0x8ffaa0u)) / ST(0);
    /* 0045319c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045319f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004531a1: fstp dword ptr [eax + 0x358] */ W_F32((u32)(r_eax+0x358u), ST(0)); FPOP();
    /* 004531a7: fstp dword ptr [eax + 0x354] */ W_F32((u32)(r_eax+0x354u), ST(0)); FPOP();
    /* 004531ad: mov dword ptr [eax + 0x35c], 0x40c00000 */ W32((u32)(r_eax+0x35cu), 0x40c00000u);
    /* 004531b7: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004531b9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4531beu); f_0077a6cc();
    /* 004531be: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004531c1: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004531c3: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 004531c6: mov dword ptr [edx + 0x368], eax */ W32((u32)(r_edx+0x368u), r_eax);
    /* 004531cc: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4531d1u); f_0077a6cc();
    /* 004531d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004531d4: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004531d6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004531d8: fcom dword ptr [0x8ffa9c] */ fx_compare(ST(0), R_F32((u32)(0x8ffa9cu))); 
    /* 004531de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004531e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004531e1: jb 0x4531ee */ if (fC) goto L_004531ee;
L_004531e3:; BB(0x004531e3);
    /* 004531e3: fcom dword ptr [0x8ffa98] */ fx_compare(ST(0), R_F32((u32)(0x8ffa98u))); 
    /* 004531e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004531eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004531ec: jbe 0x453205 */ if ((fC||fZ)) goto L_00453205;
L_004531ee:; BB(0x004531ee);
    /* 004531ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004531f0: fld dword ptr [0x8ffa94] */ FPUSH(R_F32((u32)(0x8ffa94u)));
    /* 004531f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004531f9: mov dword ptr [eax + 0x36c], 0x3f000000 */ W32((u32)(r_eax+0x36cu), 0x3f000000u);
    /* 00453203: jmp 0x45320e */ goto L_0045320e;
L_00453205:; BB(0x00453205);
    /* 00453205: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00453208: mov dword ptr [eax + 0x36c], edx */ W32((u32)(r_eax+0x36cu), r_edx);
L_0045320e:; BB(0x0045320e);
    /* 0045320e: fmul dword ptr [0x8ffa90] */ ST(0) = ST(0) * R_F32((u32)(0x8ffa90u));
    /* 00453214: fadd dword ptr [0x8ffa20] */ ST(0) = ST(0) + R_F32((u32)(0x8ffa20u));
    /* 0045321a: fstp dword ptr [eax + 0x380] */ W_F32((u32)(r_eax+0x380u), ST(0)); FPOP();
    /* 00453220: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00453222: lea esi, [eax + 0x300] */ r_esi = (u32)(r_eax+0x300u);
L_00453228:; BB(0x00453228);
    /* 00453228: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0045322b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0045322e: push dword ptr [eax + 0x9a5d28] */ { u32 v = R32((u32)(r_eax+0x9a5d28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00453234: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453235: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x45323au); f_00509590();
    /* 0045323a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045323d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00453240: mov dword ptr [edx + ebx*2 + 0x360], eax */ W32((u32)(r_edx+r_ebx*2+0x360u), r_eax);
    /* 00453247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453249: je 0x453254 */ if (fZ) goto L_00453254;
L_0045324b:; BB(0x0045324b);
    /* 0045324b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045324d: mov ecx, eax */ r_ecx = r_eax;
    /* 0045324f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x453254u); f_00508efc();
L_00453254:; BB(0x00453254);
    /* 00453254: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00453257: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045325a: jl 0x453228 */ if ((fS!=fO)) goto L_00453228;
L_0045325c:; BB(0x0045325c);
    /* 0045325c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045325f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453261: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00453264: mov dword ptr [eax + 0x370], edx */ W32((u32)(r_eax+0x370u), r_edx);
L_0045326a:; BB(0x0045326a);
    /* 0045326a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045326d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00453270: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00453273: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453276: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045327d: mov esp, ebp */ r_esp = r_ebp;
    /* 0045327f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453280: ret  */ FN_RET(0x00453030); r_esp += 4; return;
L_00453281:; BB(0x00453281);
    /* 00453281: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00453284: fsub dword ptr [0x8ffa28] */ ST(0) = ST(0) - R_F32((u32)(0x8ffa28u));
    /* 0045328a: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 0045328d: fsub dword ptr [0x8ffa2c] */ ST(0) = ST(0) - R_F32((u32)(0x8ffa2cu));
    /* 00453293: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00453295: fmul qword ptr [0x8ffa38] */ ST(0) = ST(0) * R_F64((u32)(0x8ffa38u));
    /* 0045329b: fdiv qword ptr [0x8ffa30] */ ST(0) = ST(0) / R_F64((u32)(0x8ffa30u));
    /* 004532a1: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 004532a4: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 004532a8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004532ad: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004532b0: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 004532b3: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 004532b6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 004532b9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004532bc: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004532be: jmp 0x45316b */ goto L_0045316b;
L_004532c3:; BB(0x004532c3);
    /* 004532c3: mov eax, ecx */ r_eax = r_ecx;
    /* 004532c5: mov dword ptr [eax + 0x340], 0x12c */ W32((u32)(r_eax+0x340u), 0x12cu);
    /* 004532cf: jmp 0x4530d2 */ goto L_004530d2;
L_004532d4:; BB(0x004532d4);
    /* 004532d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004532d6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004532d9: jmp 0x45326a */ goto L_0045326a;
}

void f_004532dc(void) /* sub_4532DC */
{
    FN_ENTER(0x004532dc);
    /* 004532dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004532dd: mov edi, ecx */ r_edi = r_ecx;
    /* 004532df: movzx eax, word ptr [edi + 0x20] */ r_eax = (u32)R16((u32)(r_edi+0x20u));
    /* 004532e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004532e4: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x4532e9u); f_00453ab8();
    /* 004532e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004532ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004532ec: je 0x453340 */ if (fZ) goto L_00453340;
L_004532ee:; BB(0x004532ee);
    /* 004532ee: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004532f1: fadd dword ptr [edi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x28u));
    /* 004532f4: fcom dword ptr [0x8ffa8c] */ fx_compare(ST(0), R_F32((u32)(0x8ffa8cu))); 
    /* 004532fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004532fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004532fd: jbe 0x453329 */ if ((fC||fZ)) goto L_00453329;
L_004532ff:; BB(0x004532ff);
    /* 004532ff: fcom dword ptr [0x8ffa88] */ fx_compare(ST(0), R_F32((u32)(0x8ffa88u))); 
    /* 00453305: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453307: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453308: jb 0x453324 */ if (fC) goto L_00453324;
L_0045330a:; BB(0x0045330a);
    /* 0045330a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045330c: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00453311: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00453315: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00453318: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045331e: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 00453322: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453323: ret  */ FN_RET(0x004532dc); r_esp += 4; return;
L_00453324:; BB(0x00453324);
    /* 00453324: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 00453327: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453328: ret  */ FN_RET(0x004532dc); r_esp += 4; return;
L_00453329:; BB(0x00453329);
    /* 00453329: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045332b: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 0045332f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453331: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00453334: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045333a: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 0045333e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045333f: ret  */ FN_RET(0x004532dc); r_esp += 4; return;
L_00453340:; BB(0x00453340);
    /* 00453340: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00453344: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453349: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0045334d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045334e: ret  */ FN_RET(0x004532dc); r_esp += 4; return;
}

void f_00453350(void) /* sub_453350 */
{
    FN_ENTER(0x00453350);
    /* 00453350: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453351: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453352: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453355: mov esi, ecx */ r_esi = r_ecx;
    /* 00453357: movzx eax, word ptr [esi + 0x20] */ r_eax = (u32)R16((u32)(r_esi+0x20u));
    /* 0045335b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045335c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453361u); f_0068d5a8();
    /* 00453361: mov ebp, eax */ r_ebp = r_eax;
    /* 00453363: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453366: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453368: je 0x453456 */ if (fZ) goto L_00453456;
L_0045336e:; BB(0x0045336e);
    /* 0045336e: movzx edx, word ptr [esi + 0x20] */ r_edx = (u32)R16((u32)(r_esi+0x20u));
    /* 00453372: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453373: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x453378u); f_00453ab8();
    /* 00453378: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453379: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045337b: je 0x453456 */ if (fZ) goto L_00453456;
L_00453381:; BB(0x00453381);
    /* 00453381: movzx edx, byte ptr [0xa450b4] */ r_edx = (u32)R8((u32)(0xa450b4u));
    /* 00453388: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045338b: jne 0x4533ab */ if (!fZ) goto L_004533ab;
L_0045338d:; BB(0x0045338d);
    /* 0045338d: fld dword ptr [0x8ffa84] */ FPUSH(R_F32((u32)(0x8ffa84u)));
    /* 00453393: mov dword ptr [0xa45164], 0x41200000 */ W32((u32)(0xa45164u), 0x41200000u);
    /* 0045339d: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004533a3: mov byte ptr [0xa450b4], dl */ W8((u32)(0xa450b4u), (u8)r_edx);
    /* 004533a9: jmp 0x4533b1 */ goto L_004533b1;
L_004533ab:; BB(0x004533ab);
    /* 004533ab: fld dword ptr [0xa45164] */ FPUSH(R_F32((u32)(0xa45164u)));
L_004533b1:; BB(0x004533b1);
    /* 004533b1: fld dword ptr [0x9a5d20] */ FPUSH(R_F32((u32)(0x9a5d20u)));
    /* 004533b7: fld dword ptr [0x9a5d24] */ FPUSH(R_F32((u32)(0x9a5d24u)));
    /* 004533bd: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004533bf: fld dword ptr [0x9a5d18] */ FPUSH(R_F32((u32)(0x9a5d18u)));
    /* 004533c5: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004533c8: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 004533ca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004533cc: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 004533ce: fld dword ptr [0x9a5d1c] */ FPUSH(R_F32((u32)(0x9a5d1cu)));
    /* 004533d4: fld dword ptr [0xa45168] */ FPUSH(R_F32((u32)(0xa45168u)));
    /* 004533da: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004533dd: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004533df: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004533e3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004533e5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004533e7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004533e9: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 004533eb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004533ed: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004533ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004533f1: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004533f5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004533f9: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004533fc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00453400: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00453404: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00453406: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00453409: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045340b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045340f: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00453413: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453418u); f_0082d7b0();
    /* 00453418: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0045341c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x453421u); f_0082d838();
    /* 00453421: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00453424: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00453426: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45342bu); f_0082d8bc();
    /* 0045342b: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045342e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00453432: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00453435: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 00453439: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045343d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045343f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x453444u); f_0082fa0c();
    /* 00453444: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00453448: movzx eax, word ptr [esi + 0x20] */ r_eax = (u32)R16((u32)(r_esi+0x20u));
    /* 0045344c: call 0x453465 */ r_esp -= 4; W32(r_esp, 0x453451u); f_00453465();
    /* 00453451: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x453456u); f_0082da80();
L_00453456:; BB(0x00453456);
    /* 00453456: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045345a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045345b: ret  */ FN_RET(0x00453350); r_esp += 4; return;
}

void f_0045345c(void) /* sub_45345C */
{
    FN_ENTER(0x0045345c);
    /* 0045345c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00453461: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00453465: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453467: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453469: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045346c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00453470: mov edx, eax */ r_edx = r_eax;
    /* 00453472: fcom dword ptr [0x8ffa80] */ fx_compare(ST(0), R_F32((u32)(0x8ffa80u))); 
    /* 00453478: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045347a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045347b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045347d: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_00453483:; BB(0x00453483);
    /* 00453483: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00453486: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045348b: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_00453491:; BB(0x00453491);
    /* 00453491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453492: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453497u); f_0068d5a8();
    /* 00453497: mov edi, eax */ r_edi = r_eax;
    /* 00453499: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045349c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045349e: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_004534a4:; BB(0x004534a4);
    /* 004534a4: mov edx, dword ptr [edi + 0xdf0] */ r_edx = R32((u32)(r_edi+0xdf0u));
    /* 004534aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004534ac: jne 0x4535d8 */ if (!fZ) goto L_004535d8;
L_004534b2:; BB(0x004534b2);
    /* 004534b2: mov esi, dword ptr [edi + 0x9a4] */ r_esi = R32((u32)(r_edi+0x9a4u));
    /* 004534b8: mov ebp, dword ptr [edi + 0x9a0] */ r_ebp = R32((u32)(r_edi+0x9a0u));
    /* 004534be: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004534c1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004534c5: lea ebx, [edi + 0xb10] */ r_ebx = (u32)(r_edi+0xb10u);
    /* 004534cb: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 004534cf: mov ebx, dword ptr [edi + 0x9a8] */ r_ebx = R32((u32)(r_edi+0x9a8u));
    /* 004534d5: lea edx, [edi + 0xc7c] */ r_edx = (u32)(r_edi+0xc7cu);
    /* 004534db: lea ecx, [edi + 0xde8] */ r_ecx = (u32)(r_edi+0xde8u);
    /* 004534e1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004534e5: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004534e9: call 0x451dac */ r_esp -= 4; W32(r_esp, 0x4534eeu); f_00451dac();
    /* 004534ee: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004534f2: fcomp dword ptr [0x8ffa7c] */ fx_compare(ST(0), R_F32((u32)(0x8ffa7cu))); FPOP();
    /* 004534f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004534fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004534fb: jae 0x453509 */ if (!fC) goto L_00453509;
L_004534fd:; BB(0x004534fd);
    /* 004534fd: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00453501: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00453504: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x453509u); f_00453af4();
L_00453509:; BB(0x00453509);
    /* 00453509: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0045350d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453512u); f_00829cc8();
    /* 00453512: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00453516: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453517: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x45351cu); f_0082e1e8();
    /* 0045351c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045351d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045351f: je 0x453545 */ if (fZ) goto L_00453545;
L_00453521:; BB(0x00453521);
    /* 00453521: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453526u); f_0082d7b0();
    /* 00453526: mov ecx, 0xa45178 */ r_ecx = 0xa45178u;
    /* 0045352b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x453530u); f_0082d838();
    /* 00453530: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00453534: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453539u); f_00829cc8();
    /* 00453539: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045353a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x45353fu); f_0082e1e8();
    /* 0045353f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453540: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x453545u); f_0082da80();
L_00453545:; BB(0x00453545);
    /* 00453545: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453547: je 0x453577 */ if (fZ) goto L_00453577;
L_00453549:; BB(0x00453549);
    /* 00453549: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x45354eu); f_004e71a8();
    /* 0045354e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453553u); f_0082d7b0();
    /* 00453553: mov ecx, 0xa45184 */ r_ecx = 0xa45184u;
    /* 00453558: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45355du); f_0082d838();
    /* 0045355d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00453561: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453566u); f_00829cc8();
    /* 00453566: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453567: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x45356cu); f_0082e1e8();
    /* 0045356c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045356d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x453572u); f_0082da80();
    /* 00453572: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x453577u); f_004e71c8();
L_00453577:; BB(0x00453577);
    /* 00453577: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0045357b: fcomp dword ptr [0x8ffa7c] */ fx_compare(ST(0), R_F32((u32)(0x8ffa7cu))); FPOP();
    /* 00453581: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453583: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453584: jae 0x45358b */ if (!fC) goto L_0045358b;
L_00453586:; BB(0x00453586);
    /* 00453586: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x45358bu); f_005963d0();
L_0045358b:; BB(0x0045358b);
    /* 0045358b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045358d: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_0045358f:; BB(0x0045358f);
    /* 0045358f: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x453594u); f_004e71a8();
    /* 00453594: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453599u); f_0082d7b0();
    /* 00453599: mov ecx, 0xa45184 */ r_ecx = 0xa45184u;
    /* 0045359e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4535a3u); f_0082d838();
    /* 004535a3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004535a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4535acu); f_00829cc8();
    /* 004535ac: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004535b0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004535b4: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004535b7: add edi, 0x930 */ {  u32 a = r_edi; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004535bd: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004535c5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004535c9: call 0x4e70c4 */ r_esp -= 4; W32(r_esp, 0x4535ceu); f_004e70c4();
    /* 004535ce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4535d3u); f_0082da80();
    /* 004535d3: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x4535d8u); f_004e71c8();
L_004535d8:; BB(0x004535d8);
    /* 004535d8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004535db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004535dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004535dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004535de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004535df: ret  */ FN_RET(0x0045345c); r_esp += 4; return;
}

void f_00453465(void) /* sub_453465 */
{
    FN_ENTER(0x00453465);
    /* 00453465: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453467: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453469: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045346c: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00453470: mov edx, eax */ r_edx = r_eax;
    /* 00453472: fcom dword ptr [0x8ffa80] */ fx_compare(ST(0), R_F32((u32)(0x8ffa80u))); 
    /* 00453478: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045347a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045347b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045347d: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_00453483:; BB(0x00453483);
    /* 00453483: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00453486: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045348b: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_00453491:; BB(0x00453491);
    /* 00453491: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453492: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453497u); f_0068d5a8();
    /* 00453497: mov edi, eax */ r_edi = r_eax;
    /* 00453499: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045349c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045349e: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_004534a4:; BB(0x004534a4);
    /* 004534a4: mov edx, dword ptr [edi + 0xdf0] */ r_edx = R32((u32)(r_edi+0xdf0u));
    /* 004534aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004534ac: jne 0x4535d8 */ if (!fZ) goto L_004535d8;
L_004534b2:; BB(0x004534b2);
    /* 004534b2: mov esi, dword ptr [edi + 0x9a4] */ r_esi = R32((u32)(r_edi+0x9a4u));
    /* 004534b8: mov ebp, dword ptr [edi + 0x9a0] */ r_ebp = R32((u32)(r_edi+0x9a0u));
    /* 004534be: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004534c1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004534c5: lea ebx, [edi + 0xb10] */ r_ebx = (u32)(r_edi+0xb10u);
    /* 004534cb: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 004534cf: mov ebx, dword ptr [edi + 0x9a8] */ r_ebx = R32((u32)(r_edi+0x9a8u));
    /* 004534d5: lea edx, [edi + 0xc7c] */ r_edx = (u32)(r_edi+0xc7cu);
    /* 004534db: lea ecx, [edi + 0xde8] */ r_ecx = (u32)(r_edi+0xde8u);
    /* 004534e1: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004534e5: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004534e9: call 0x451dac */ r_esp -= 4; W32(r_esp, 0x4534eeu); f_00451dac();
    /* 004534ee: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004534f2: fcomp dword ptr [0x8ffa7c] */ fx_compare(ST(0), R_F32((u32)(0x8ffa7cu))); FPOP();
    /* 004534f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004534fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004534fb: jae 0x453509 */ if (!fC) goto L_00453509;
L_004534fd:; BB(0x004534fd);
    /* 004534fd: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00453501: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00453504: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x453509u); f_00453af4();
L_00453509:; BB(0x00453509);
    /* 00453509: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0045350d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453512u); f_00829cc8();
    /* 00453512: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00453516: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453517: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x45351cu); f_0082e1e8();
    /* 0045351c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045351d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045351f: je 0x453545 */ if (fZ) goto L_00453545;
L_00453521:; BB(0x00453521);
    /* 00453521: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453526u); f_0082d7b0();
    /* 00453526: mov ecx, 0xa45178 */ r_ecx = 0xa45178u;
    /* 0045352b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x453530u); f_0082d838();
    /* 00453530: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00453534: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453539u); f_00829cc8();
    /* 00453539: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045353a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x45353fu); f_0082e1e8();
    /* 0045353f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453540: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x453545u); f_0082da80();
L_00453545:; BB(0x00453545);
    /* 00453545: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453547: je 0x453577 */ if (fZ) goto L_00453577;
L_00453549:; BB(0x00453549);
    /* 00453549: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x45354eu); f_004e71a8();
    /* 0045354e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453553u); f_0082d7b0();
    /* 00453553: mov ecx, 0xa45184 */ r_ecx = 0xa45184u;
    /* 00453558: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45355du); f_0082d838();
    /* 0045355d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00453561: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453566u); f_00829cc8();
    /* 00453566: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453567: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x45356cu); f_0082e1e8();
    /* 0045356c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045356d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x453572u); f_0082da80();
    /* 00453572: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x453577u); f_004e71c8();
L_00453577:; BB(0x00453577);
    /* 00453577: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0045357b: fcomp dword ptr [0x8ffa7c] */ fx_compare(ST(0), R_F32((u32)(0x8ffa7cu))); FPOP();
    /* 00453581: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453583: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453584: jae 0x45358b */ if (!fC) goto L_0045358b;
L_00453586:; BB(0x00453586);
    /* 00453586: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x45358bu); f_005963d0();
L_0045358b:; BB(0x0045358b);
    /* 0045358b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045358d: je 0x4535d8 */ if (fZ) goto L_004535d8;
L_0045358f:; BB(0x0045358f);
    /* 0045358f: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x453594u); f_004e71a8();
    /* 00453594: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453599u); f_0082d7b0();
    /* 00453599: mov ecx, 0xa45184 */ r_ecx = 0xa45184u;
    /* 0045359e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4535a3u); f_0082d838();
    /* 004535a3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 004535a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4535acu); f_00829cc8();
    /* 004535ac: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004535b0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004535b4: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004535b7: add edi, 0x930 */ {  u32 a = r_edi; u32 b = 0x930u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004535bd: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004535c5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004535c9: call 0x4e70c4 */ r_esp -= 4; W32(r_esp, 0x4535ceu); f_004e70c4();
    /* 004535ce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4535d3u); f_0082da80();
    /* 004535d3: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x4535d8u); f_004e71c8();
L_004535d8:; BB(0x004535d8);
    /* 004535d8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004535db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004535dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004535dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004535de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004535df: ret  */ FN_RET(0x00453465); r_esp += 4; return;
}

void f_004535e0(void) /* sub_4535E0 */
{
    FN_ENTER(0x004535e0);
    /* 004535e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004535e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004535e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004535e5: push 0x8cf1f8 */ { u32 v = 0x8cf1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004535ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004535f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004535f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004535f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004535fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004535fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00453601: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00453604: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00453607: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00453609: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00453610: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x453615u); f_005caba4();
    /* 00453615: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453616: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00453619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045361b: je 0x453656 */ if (fZ) goto L_00453656;
L_0045361d:; BB(0x0045361d);
    /* 0045361d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00453624: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045362b: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0045362f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00453632: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453633: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00453636: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00453639: call 0x45365c */ r_esp -= 4; W32(r_esp, 0x45363eu); f_0045365c();
    /* 0045363e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00453641: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00453648:; BB(0x00453648);
    /* 00453648: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045364b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00453652: mov esp, ebp */ r_esp = r_ebp;
    /* 00453654: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453655: ret  */ FN_RET(0x004535e0); r_esp += 4; return;
L_00453656:; BB(0x00453656);
    /* 00453656: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453658: jmp 0x453648 */ goto L_00453648;
}

void f_0045365c(void) /* sub_45365C */
{
    FN_ENTER(0x0045365c);
    /* 0045365c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045365d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045365e: mov esi, ecx */ r_esi = r_ecx;
    /* 00453660: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00453664: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00453668: mov ecx, esi */ r_ecx = r_esi;
    /* 0045366a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x45366fu); f_008193cc();
    /* 0045366f: movzx edx, word ptr [esp + 0x14] */ r_edx = (u32)R16((u32)(r_esp+0x14u));
    /* 00453674: mov dword ptr [esi], 0xaf7420 */ W32((u32)(r_esi), 0xaf7420u);
    /* 0045367a: mov eax, dword ptr [0x9a5d14] */ r_eax = R32((u32)(0x9a5d14u));
    /* 0045367f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00453682: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 00453685: mov word ptr [esi + 0x20], dx */ W16((u32)(r_esi+0x20u), (u16)r_edx);
    /* 00453689: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045368b: je 0x4536b7 */ if (fZ) goto L_004536b7;
L_0045368d:; BB(0x0045368d);
    /* 0045368d: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453690: jne 0x4536a2 */ if (!fZ) goto L_004536a2;
L_00453692:; BB(0x00453692);
    /* 00453692: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 00453699: mov dword ptr [esi + 0x28], 0x3c888889 */ W32((u32)(r_esi+0x28u), 0x3c888889u);
    /* 004536a0: jmp 0x4536c5 */ goto L_004536c5;
L_004536a2:; BB(0x004536a2);
    /* 004536a2: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004536a5: jne 0x4536c5 */ if (!fZ) goto L_004536c5;
L_004536a7:; BB(0x004536a7);
    /* 004536a7: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 004536ae: mov dword ptr [esi + 0x28], 0xbde38e39 */ W32((u32)(r_esi+0x28u), 0xbde38e39u);
    /* 004536b5: jmp 0x4536c5 */ goto L_004536c5;
L_004536b7:; BB(0x004536b7);
    /* 004536b7: mov dword ptr [esi + 0x24], 0x3f800000 */ W32((u32)(r_esi+0x24u), 0x3f800000u);
    /* 004536be: mov dword ptr [esi + 0x28], 0xbc360b61 */ W32((u32)(r_esi+0x28u), 0xbc360b61u);
L_004536c5:; BB(0x004536c5);
    /* 004536c5: mov eax, esi */ r_eax = r_esi;
    /* 004536c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004536c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004536c9: ret 0xc */ FN_RET(0x0045365c); r_esp += 16; return;
}

void f_00453714(void) /* sub_453714 */
{
    FN_ENTER(0x00453714);
    /* 00453714: mov dword ptr [0xa45190], 0 */ W32((u32)(0xa45190u), 0x0u);
    /* 0045371e: mov ecx, 0x451c64 */ r_ecx = 0x451c64u;
    /* 00453723: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x453728u); f_0082fac4();
    /* 00453728: ret  */ FN_RET(0x00453714); r_esp += 4; return;
}

void f_0045372c(void) /* sub_45372C */
{
    FN_ENTER(0x0045372c);
    /* 0045372c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045372d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045372f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00453731: call 0x453750 */ r_esp -= 4; W32(r_esp, 0x453736u); f_00453750();
    /* 00453736: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045373a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045373c: jne 0x453742 */ if (!fZ) goto L_00453742;
L_0045373e:; BB(0x0045373e);
    /* 0045373e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045373f: ret 4 */ FN_RET(0x0045372c); r_esp += 8; return;
L_00453742:; BB(0x00453742);
    /* 00453742: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453743: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x453748u); f_005c2f74();
    /* 00453748: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045374a: ret 4 */ FN_RET(0x0045372c); r_esp += 8; return;
}

void f_00453750(void) /* sub_453750 */
{
    FN_ENTER(0x00453750);
    /* 00453750: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453751: mov ebp, esp */ r_ebp = r_esp;
    /* 00453753: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00453755: push 0x8cf214 */ { u32 v = 0x8cf214u; r_esp -= 4; W32(r_esp, v); }
    /* 0045375a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00453760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453761: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00453768: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045376b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045376e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00453771: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00453774: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00453777: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045377a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045377d: mov dword ptr [ecx], 0xaf7480 */ W32((u32)(r_ecx), 0xaf7480u);
    /* 00453783: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045378a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x45378fu); f_008171e8();
    /* 0045378f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453792: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00453799: mov esp, ebp */ r_esp = r_ebp;
    /* 0045379b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045379c: ret  */ FN_RET(0x00453750); r_esp += 4; return;
}

void f_004537a0(void) /* sub_4537A0 */
{
    FN_ENTER(0x004537a0);
    /* 004537a0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004537a3: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004537a6: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 004537a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004537ab: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004537ad: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004537b0: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004537b2: mov dword ptr [edx + ecx + 0x20], 0 */ W32((u32)(r_edx+r_ecx+0x20u), 0x0u);
    /* 004537ba: ret  */ FN_RET(0x004537a0); r_esp += 4; return;
}

void f_004537bc(void) /* sub_4537BC */
{
    FN_ENTER(0x004537bc);
    /* 004537bc: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004537bf: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004537c2: xor eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004537c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004537c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004537c9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004537cc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004537ce: mov eax, dword ptr [edx + ecx + 0x20] */ r_eax = R32((u32)(r_edx+r_ecx+0x20u));
    /* 004537d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004537d4: je 0x4538c8 */ if (fZ) goto L_004538c8;
L_004537da:; BB(0x004537da);
    /* 004537da: movzx eax, byte ptr [0xa451c0] */ r_eax = (u32)R8((u32)(0xa451c0u));
    /* 004537e1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004537e3: jne 0x45383f */ if (!fZ) goto L_0045383f;
L_004537e5:; BB(0x004537e5);
    /* 004537e5: mov dword ptr [0xa451c4], 0 */ W32((u32)(0xa451c4u), 0x0u);
    /* 004537ef: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004537f4: mov byte ptr [0xa451c0], al */ W8((u32)(0xa451c0u), (u8)r_eax);
    /* 004537f9: mov dword ptr [0xa451c8], 0 */ W32((u32)(0xa451c8u), 0x0u);
    /* 00453803: mov dword ptr [0xa451cc], 0x44200000 */ W32((u32)(0xa451ccu), 0x44200000u);
    /* 0045380d: mov dword ptr [0xa451d0], 0 */ W32((u32)(0xa451d0u), 0x0u);
    /* 00453817: mov dword ptr [0xa451d4], 0x44200000 */ W32((u32)(0xa451d4u), 0x44200000u);
    /* 00453821: mov dword ptr [0xa451d8], 0x43f00000 */ W32((u32)(0xa451d8u), 0x43f00000u);
    /* 0045382b: mov dword ptr [0xa451dc], 0 */ W32((u32)(0xa451dcu), 0x0u);
    /* 00453835: mov dword ptr [0xa451e0], 0x43f00000 */ W32((u32)(0xa451e0u), 0x43f00000u);
L_0045383f:; BB(0x0045383f);
    /* 0045383f: fld dword ptr [0x8ffb94] */ FPUSH(R_F32((u32)(0x8ffb94u)));
    /* 00453845: fmul dword ptr [edx + ecx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_ecx+0x28u));
    /* 00453849: mov edx, dword ptr [edx + ecx + 0x24] */ r_edx = R32((u32)(r_edx+r_ecx+0x24u));
    /* 0045384d: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00453851: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00453856: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045385b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0045385f: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00453863: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00453867: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0045386b: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0045386f: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00453872: and edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00453878: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 00453880: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00453882: mov dword ptr [esp + 0x1c], 4 */ W32((u32)(r_esp+0x1cu), 0x4u);
    /* 0045388a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0045388e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00453892: mov dword ptr [esp + 0x10], 0xa451c4 */ W32((u32)(r_esp+0x10u), 0xa451c4u);
    /* 0045389a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045389e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004538a1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004538a4: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004538a8: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4538adu); f_007a9380();
    /* 004538ad: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004538b1: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 004538b3: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004538b8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004538ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004538bb: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x4538c0u); f_0082b5d8();
    /* 004538c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004538c3: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4538c8u); f_007a9318();
L_004538c8:; BB(0x004538c8);
    /* 004538c8: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004538cb: ret  */ FN_RET(0x004537bc); r_esp += 4; return;
}

void f_004538cc(void) /* sub_4538CC */
{
    FN_ENTER(0x004538cc);
    /* 004538cc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004538cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004538d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004538d3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004538d6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004538d8: mov dword ptr [edx + ecx + 0x20], 1 */ W32((u32)(r_edx+r_ecx+0x20u), 0x1u);
    /* 004538e0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004538e3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004538e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004538e7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004538ea: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004538ec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004538f0: mov dword ptr [edx + ecx + 0x24], eax */ W32((u32)(r_edx+r_ecx+0x24u), r_eax);
    /* 004538f4: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004538f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004538f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004538fb: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004538fe: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453900: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00453904: mov dword ptr [eax + ecx + 0x28], edx */ W32((u32)(r_eax+r_ecx+0x28u), r_edx);
    /* 00453908: ret 8 */ FN_RET(0x004538cc); r_esp += 12; return;
}

void f_0045390c(void) /* sub_45390C */
{
    FN_ENTER(0x0045390c);
    /* 0045390c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045390d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045390f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00453911: push 0x8cf23c */ { u32 v = 0x8cf23cu; r_esp -= 4; W32(r_esp, v); }
    /* 00453916: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045391c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045391d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00453924: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453927: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045392a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0045392d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00453930: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00453933: mov eax, dword ptr [0xa9853c] */ r_eax = R32((u32)(0xa9853cu));
    /* 00453938: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045393b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045393d: jne 0x453947 */ if (!fZ) goto L_00453947;
L_0045393f:; BB(0x0045393f);
    /* 0045393f: mov eax, dword ptr [0xaca328] */ r_eax = R32((u32)(0xaca328u));
    /* 00453944: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00453947:; BB(0x00453947);
    /* 00453947: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0045394e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00453950: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x453955u); f_005caba4();
    /* 00453955: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00453958: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045395b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0045395e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453960: je 0x453994 */ if (fZ) goto L_00453994;
L_00453962:; BB(0x00453962);
    /* 00453962: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00453969: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453970: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00453973: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00453976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453977: call 0x45399c */ r_esp -= 4; W32(r_esp, 0x45397cu); f_0045399c();
    /* 0045397c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00453983:; BB(0x00453983);
    /* 00453983: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00453986: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453989: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00453990: mov esp, ebp */ r_esp = r_ebp;
    /* 00453992: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453993: ret  */ FN_RET(0x0045390c); r_esp += 4; return;
L_00453994:; BB(0x00453994);
    /* 00453994: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453996: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00453999: jmp 0x453983 */ goto L_00453983;
}

void f_0045399c(void) /* sub_45399C */
{
    FN_ENTER(0x0045399c);
    /* 0045399c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045399d: mov edi, ecx */ r_edi = r_ecx;
    /* 0045399f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004539a3: mov ecx, edi */ r_ecx = r_edi;
    /* 004539a5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4539aau); f_008193cc();
    /* 004539aa: mov dword ptr [edi], 0xaf7480 */ W32((u32)(r_edi), 0xaf7480u);
    /* 004539b0: mov edx, dword ptr [0x9a5d30] */ r_edx = R32((u32)(0x9a5d30u));
    /* 004539b6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004539b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004539bb: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004539be: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004539c1: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004539c4: mov eax, edi */ r_eax = r_edi;
    /* 004539c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004539c7: ret 4 */ FN_RET(0x0045399c); r_esp += 8; return;
}

void f_004539cc(void) /* sub_4539CC */
{
    FN_ENTER(0x004539cc);
    /* 004539cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004539cf: fld dword ptr [0x8ffbc8] */ FPUSH(R_F32((u32)(0x8ffbc8u)));
    /* 004539d5: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 004539d9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004539dc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004539e0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004539e5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004539e9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004539ed: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004539f1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004539f4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004539f8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4539fdu); f_0082ddd8();
    /* 004539fd: fld dword ptr [0x8ffbc0] */ FPUSH(R_F32((u32)(0x8ffbc0u)));
    /* 00453a03: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00453a05: fmul dword ptr [0x8ffbc4] */ ST(0) = ST(0) * R_F32((u32)(0x8ffbc4u));
    /* 00453a0b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453a0e: ret  */ FN_RET(0x004539cc); r_esp += 4; return;
}

void f_00453a10(void) /* sub_453A10 */
{
    FN_ENTER(0x00453a10);
    /* 00453a10: fld dword ptr [0x8ffbbc] */ FPUSH(R_F32((u32)(0x8ffbbcu)));
    /* 00453a16: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00453a1a: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 00453a1c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00453a1e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00453a20: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00453a22: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00453a24: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00453a26: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00453a28: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00453a2a: ret  */ FN_RET(0x00453a10); r_esp += 4; return;
}

void f_00453a2c(void) /* sub_453A2C */
{
    FN_ENTER(0x00453a2c);
    /* 00453a2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453a2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453a2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453a30: movzx esi, word ptr [esp + 0x14] */ r_esi = (u32)R16((u32)(r_esp+0x14u));
    /* 00453a35: cmp esi, 0xffff */ {  u32 a = r_esi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a3b: je 0x453ab1 */ if (fZ) goto L_00453ab1;
L_00453a3d:; BB(0x00453a3d);
    /* 00453a3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453a3e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453a43u); f_0068d5a8();
    /* 00453a43: mov ebp, eax */ r_ebp = r_eax;
    /* 00453a45: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453a48: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a4a: je 0x453ab1 */ if (fZ) goto L_00453ab1;
L_00453a4c:; BB(0x00453a4c);
    /* 00453a4c: mov eax, esi */ r_eax = r_esi;
    /* 00453a4e: call 0x453abd */ r_esp -= 4; W32(r_esp, 0x453a53u); f_00453abd();
    /* 00453a53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453a55: je 0x453ab1 */ if (fZ) goto L_00453ab1;
L_00453a57:; BB(0x00453a57);
    /* 00453a57: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00453a5b: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 00453a62: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00453a69: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00453a6b: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00453a6f: jae 0x453a73 */ if (!fC) goto L_00453a73;
L_00453a71:; BB(0x00453a71);
    /* 00453a71: mov ebx, eax */ r_ebx = r_eax;
L_00453a73:; BB(0x00453a73);
    /* 00453a73: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453a76: jne 0x453a7f */ if (!fZ) goto L_00453a7f;
L_00453a78:; BB(0x00453a78);
    /* 00453a78: mov eax, ebx */ r_eax = r_ebx;
    /* 00453a7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453a7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453a7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453a7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453a7e: ret  */ FN_RET(0x00453a2c); r_esp += 4; return;
L_00453a7f:; BB(0x00453a7f);
    /* 00453a7f: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00453a81: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00453a84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453a86: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00453a8b: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x453a90u); f_00693348();
    /* 00453a90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453a93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453a94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00453a96: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x453a9bu); f_0069b4f0();
    /* 00453a9b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00453a9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453a9f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00453aa2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00453aa4: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x453aaau); call_ind(t); }
    /* 00453aaa: mov eax, ebx */ r_eax = r_ebx;
    /* 00453aac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453aad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453ab0: ret  */ FN_RET(0x00453a2c); r_esp += 4; return;
L_00453ab1:; BB(0x00453ab1);
    /* 00453ab1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453ab3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453ab4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453ab5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453ab7: ret  */ FN_RET(0x00453a2c); r_esp += 4; return;
}

void f_00453ab8(void) /* sub_453AB8 */
{
    FN_ENTER(0x00453ab8);
    /* 00453ab8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00453abd: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00453ac0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ac5: je 0x453ae8 */ if (fZ) goto L_00453ae8;
L_00453ac7:; BB(0x00453ac7);
    /* 00453ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ac8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453acdu); f_0068d5a8();
    /* 00453acd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ad0: je 0x453ae8 */ if (fZ) goto L_00453ae8;
L_00453ad2:; BB(0x00453ad2);
    /* 00453ad2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00453ad5: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453adb: jne 0x453ae8 */ if (!fZ) goto L_00453ae8;
L_00453add:; BB(0x00453add);
    /* 00453add: mov eax, dword ptr [eax + 0x3ec] */ r_eax = R32((u32)(r_eax+0x3ecu));
    /* 00453ae3: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453ae6: je 0x453aeb */ if (fZ) goto L_00453aeb;
L_00453ae8:; BB(0x00453ae8);
    /* 00453ae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453aea: ret  */ FN_RET(0x00453ab8); r_esp += 4; return;
L_00453aeb:; BB(0x00453aeb);
    /* 00453aeb: mov eax, 1 */ r_eax = 0x1u;
    /* 00453af0: ret  */ FN_RET(0x00453ab8); r_esp += 4; return;
}

void f_00453abd(void) /* sub_453ABD */
{
    FN_ENTER(0x00453abd);
    /* 00453abd: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00453ac0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ac5: je 0x453ae8 */ if (fZ) goto L_00453ae8;
L_00453ac7:; BB(0x00453ac7);
    /* 00453ac7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453ac8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x453acdu); f_0068d5a8();
    /* 00453acd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ad0: je 0x453ae8 */ if (fZ) goto L_00453ae8;
L_00453ad2:; BB(0x00453ad2);
    /* 00453ad2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00453ad5: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453adb: jne 0x453ae8 */ if (!fZ) goto L_00453ae8;
L_00453add:; BB(0x00453add);
    /* 00453add: mov eax, dword ptr [eax + 0x3ec] */ r_eax = R32((u32)(r_eax+0x3ecu));
    /* 00453ae3: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453ae6: je 0x453aeb */ if (fZ) goto L_00453aeb;
L_00453ae8:; BB(0x00453ae8);
    /* 00453ae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453aea: ret  */ FN_RET(0x00453abd); r_esp += 4; return;
L_00453aeb:; BB(0x00453aeb);
    /* 00453aeb: mov eax, 1 */ r_eax = 0x1u;
    /* 00453af0: ret  */ FN_RET(0x00453abd); r_esp += 4; return;
}

void f_00453af4(void) /* sub_453AF4 */
{
    FN_ENTER(0x00453af4);
    /* 00453af4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453af7: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 00453afd: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00453b02: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00453b08: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00453b0e: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 00453b13: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00453b19: and ecx, 0xffffffef */ {  u32 a = r_ecx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00453b1c: or ecx, 0x8829 */ {  u32 a = r_ecx; u32 b = 0x8829u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00453b22: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00453b28: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00453b2d: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00453b32: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x453b37u); f_0082d6fc();
    /* 00453b37: fld dword ptr [0x8ffbb8] */ FPUSH(R_F32((u32)(0x8ffbb8u)));
    /* 00453b3d: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00453b41: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00453b45: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00453b4d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00453b51: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00453b59: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00453b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453b62: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x453b67u); f_0082d710();
    /* 00453b67: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453b6a: ret  */ FN_RET(0x00453af4); r_esp += 4; return;
}

void f_00453b6c(void) /* sub_453B6C */
{
    FN_ENTER(0x00453b6c);
    /* 00453b6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453b6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453b6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453b6f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453b72: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00453b76: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00453b7a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x453b7fu); f_008587a5();
    /* 00453b7f: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00453b82: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00453b85: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00453b88: fdiv dword ptr [0x8ffba4] */ ST(0) = ST(0) / R_F32((u32)(0x8ffba4u));
    /* 00453b8e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00453b90: lea ecx, [edi - 1] */ r_ecx = (u32)(r_edi+0xffffffffu);
    /* 00453b93: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00453b95: jle 0x453bd2 */ if ((fZ||fS!=fO)) goto L_00453bd2;
L_00453b97:; BB(0x00453b97);
    /* 00453b97: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00453b99: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453b9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453b9c: jb 0x453bc0 */ if (fC) goto L_00453bc0;
L_00453b9e:; BB(0x00453b9e);
    /* 00453b9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00453ba0: fadd dword ptr [ebp + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+r_edx*4));
    /* 00453ba4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00453ba7: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453ba9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00453bab: jl 0x453b97 */ if ((fS!=fO)) goto L_00453b97;
L_00453bad:; BB(0x00453bad);
    /* 00453bad: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00453baf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00453bb1:; BB(0x00453bb1);
    /* 00453bb1: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00453bb5: mov eax, dword ptr [edx + edi*4 - 4] */ r_eax = R32((u32)(r_edx+r_edi*4+0xfffffffcu));
    /* 00453bb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453bbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453bbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453bbe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453bbf: ret  */ FN_RET(0x00453b6c); r_esp += 4; return;
L_00453bc0:; BB(0x00453bc0);
    /* 00453bc0: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00453bc2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00453bc4: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00453bc8: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 00453bcb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453bce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453bcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453bd0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453bd1: ret  */ FN_RET(0x00453b6c); r_esp += 4; return;
L_00453bd2:; BB(0x00453bd2);
    /* 00453bd2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00453bd4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00453bd6: jmp 0x453bb1 */ goto L_00453bb1;
}

void f_00453bd8(void) /* sub_453BD8 */
{
    FN_ENTER(0x00453bd8);
    /* 00453bd8: mov dword ptr [0xa451e8], 0x3f800000 */ W32((u32)(0xa451e8u), 0x3f800000u);
    /* 00453be2: mov dword ptr [0xa451ec], 0x41000000 */ W32((u32)(0xa451ecu), 0x41000000u);
    /* 00453bec: mov dword ptr [0xa451f0], 0x3fc00000 */ W32((u32)(0xa451f0u), 0x3fc00000u);
    /* 00453bf6: ret  */ FN_RET(0x00453bd8); r_esp += 4; return;
}

void f_00453bf8(void) /* sub_453BF8 */
{
    FN_ENTER(0x00453bf8);
    /* 00453bf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453bf9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00453bfb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00453bfd: call 0x453c1c */ r_esp -= 4; W32(r_esp, 0x453c02u); f_00453c1c();
    /* 00453c02: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00453c06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453c08: jne 0x453c0e */ if (!fZ) goto L_00453c0e;
L_00453c0a:; BB(0x00453c0a);
    /* 00453c0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453c0b: ret 4 */ FN_RET(0x00453bf8); r_esp += 8; return;
L_00453c0e:; BB(0x00453c0e);
    /* 00453c0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453c0f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x453c14u); f_005c2f74();
    /* 00453c14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453c15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453c16: ret 4 */ FN_RET(0x00453bf8); r_esp += 8; return;
}

void f_00453c1c(void) /* sub_453C1C */
{
    FN_ENTER(0x00453c1c);
    /* 00453c1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453c1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00453c1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00453c21: push 0x8cf258 */ { u32 v = 0x8cf258u; r_esp -= 4; W32(r_esp, v); }
    /* 00453c26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00453c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00453c34: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453c37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00453c3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00453c3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00453c40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00453c43: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00453c46: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00453c4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00453c50: mov dword ptr [eax], 0xaf7508 */ W32((u32)(r_eax), 0xaf7508u);
    /* 00453c56: call 0x453ca8 */ r_esp -= 4; W32(r_esp, 0x453c5bu); f_00453ca8();
    /* 00453c5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00453c5e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00453c60:; BB(0x00453c60);
    /* 00453c60: mov eax, dword ptr [ecx + esi*4 + 0x44] */ r_eax = R32((u32)(r_ecx+r_esi*4+0x44u));
    /* 00453c64: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00453c67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453c69: je 0x453c7d */ if (fZ) goto L_00453c7d;
L_00453c6b:; BB(0x00453c6b);
    /* 00453c6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453c6c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x453c71u); f_005cdcc0();
    /* 00453c71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453c72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00453c75: mov dword ptr [ecx + ebx*2 + 0x44], 0 */ W32((u32)(r_ecx+r_ebx*2+0x44u), 0x0u);
L_00453c7d:; BB(0x00453c7d);
    /* 00453c7d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00453c80: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453c83: jl 0x453c60 */ if ((fS!=fO)) goto L_00453c60;
L_00453c85:; BB(0x00453c85);
    /* 00453c85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00453c8c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x453c91u); f_008171e8();
    /* 00453c91: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00453c94: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00453c97: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00453c9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00453c9d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00453ca4: mov esp, ebp */ r_esp = r_ebp;
    /* 00453ca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453ca7: ret  */ FN_RET(0x00453c1c); r_esp += 4; return;
}

void f_00453ca8(void) /* sub_453CA8 */
{
    FN_ENTER(0x00453ca8);
    /* 00453ca8: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 00453cad: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x453cb2u); f_006bb100();
    /* 00453cb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453cb3: ret  */ FN_RET(0x00453ca8); r_esp += 4; return;
}

void f_00453cb4(void) /* sub_453CB4 */
{
    FN_ENTER(0x00453cb4);
    /* 00453cb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453cb5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00453cb7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00453cba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453cbc: je 0x453cda */ if (fZ) goto L_00453cda;
L_00453cbe:; BB(0x00453cbe);
    /* 00453cbe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453cc1: jne 0x453ccc */ if (!fZ) goto L_00453ccc;
L_00453cc3:; BB(0x00453cc3);
    /* 00453cc3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00453cc5: call 0x453e40 */ r_esp -= 4; W32(r_esp, 0x453ccau); f_00453e40();
    /* 00453cca: jmp 0x453ce1 */ goto L_00453ce1;
L_00453ccc:; BB(0x00453ccc);
    /* 00453ccc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453ccf: jne 0x453ce1 */ if (!fZ) goto L_00453ce1;
L_00453cd1:; BB(0x00453cd1);
    /* 00453cd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00453cd3: call 0x453d28 */ r_esp -= 4; W32(r_esp, 0x453cd8u); f_00453d28();
    /* 00453cd8: jmp 0x453ce1 */ goto L_00453ce1;
L_00453cda:; BB(0x00453cda);
    /* 00453cda: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00453cdc: call 0x453e58 */ r_esp -= 4; W32(r_esp, 0x453ce1u); f_00453e58();
L_00453ce1:; BB(0x00453ce1);
    /* 00453ce1: fld dword ptr [0x8ffc60] */ FPUSH(R_F32((u32)(0x8ffc60u)));
    /* 00453ce7: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 00453cea: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00453ced: fst dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0));
    /* 00453cf0: mov eax, dword ptr [ebp + edx*4 + 0x3c] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x3cu));
    /* 00453cf4: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00453cf7: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00453cfa: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fO = (a >> 31) & 1; } }
    /* 00453cfd: fadd dword ptr [ecx*4 + 0x8ffc48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8ffc48u));
    /* 00453d04: fadd dword ptr [0x8ffc84] */ ST(0) = ST(0) + R_F32((u32)(0x8ffc84u));
    /* 00453d0a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00453d0c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453d0e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453d0f: ja 0x453d22 */ if ((!fC&&!fZ)) goto L_00453d22;
L_00453d11:; BB(0x00453d11);
    /* 00453d11: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00453d13: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00453d16: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 00453d19: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453d1b: je 0x453d26 */ if (fZ) goto L_00453d26;
L_00453d1d:; BB(0x00453d1d);
    /* 00453d1d: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00453d20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453d21: ret  */ FN_RET(0x00453cb4); r_esp += 4; return;
L_00453d22:; BB(0x00453d22);
    /* 00453d22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00453d24: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00453d26:; BB(0x00453d26);
    /* 00453d26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453d27: ret  */ FN_RET(0x00453cb4); r_esp += 4; return;
}

void f_00453d28(void) /* sub_453D28 */
{
    FN_ENTER(0x00453d28);
    /* 00453d28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d29: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453d2c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00453d2e: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00453d31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453d34: je 0x453e39 */ if (fZ) goto L_00453e39;
L_00453d3a:; BB(0x00453d3a);
    /* 00453d3a: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 00453d3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453d3f: jne 0x453d56 */ if (!fZ) goto L_00453d56;
L_00453d41:; BB(0x00453d41);
    /* 00453d41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453d44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453d46: push 0x3e5 */ { u32 v = 0x3e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00453d4b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x453d50u); f_00814298();
    /* 00453d50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453d53: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
L_00453d56:; BB(0x00453d56);
    /* 00453d56: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00453d5a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00453d5e: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00453d62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00453d64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453d66: mov ebp, eax */ r_ebp = r_eax;
    /* 00453d68: mov eax, ecx */ r_eax = r_ecx;
    /* 00453d6a: mov esi, edx */ r_esi = r_edx;
L_00453d6c:; BB(0x00453d6c);
    /* 00453d6c: cmp eax, dword ptr [ebp + 0x8ffbd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8ffbd4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453d72: jl 0x453d89 */ if ((fS!=fO)) goto L_00453d89;
L_00453d74:; BB(0x00453d74);
    /* 00453d74: cmp eax, dword ptr [ebp + 0x8ffbd8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8ffbd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453d7a: jg 0x453d89 */ if ((!fZ&&fS==fO)) goto L_00453d89;
L_00453d7c:; BB(0x00453d7c);
    /* 00453d7c: mov edx, dword ptr [ebx + esi*4 + 0x44] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x44u));
    /* 00453d80: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00453d83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453d85: je 0x453dea */ if (fZ) goto L_00453dea;
L_00453d87:; BB(0x00453d87);
    /* 00453d87: jmp 0x453da6 */ goto L_00453da6;
L_00453d89:; BB(0x00453d89);
    /* 00453d89: mov edx, dword ptr [ebx + esi*4 + 0x44] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x44u));
    /* 00453d8d: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00453d90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453d92: je 0x453da6 */ if (fZ) goto L_00453da6;
L_00453d94:; BB(0x00453d94);
    /* 00453d94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453d95: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x453d9au); f_005cdcc0();
    /* 00453d9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453d9b: mov dword ptr [ebx + edi*2 + 0x44], 0 */ W32((u32)(r_ebx+r_edi*2+0x44u), 0x0u);
    /* 00453da3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
L_00453da6:; BB(0x00453da6);
    /* 00453da6: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00453da9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00453dac: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453daf: jl 0x453d6c */ if ((fS!=fO)) goto L_00453d6c;
L_00453db1:; BB(0x00453db1);
    /* 00453db1: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00453db5: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00453db9: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00453dbd: mov ecx, eax */ r_ecx = r_eax;
    /* 00453dbf: cmp ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453dc2: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00453dc5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00453dc8: fdiv dword ptr [0x8ffc7c] */ ST(0) = ST(0) / R_F32((u32)(0x8ffc7cu));
    /* 00453dce: fadd dword ptr [0x8ffc80] */ ST(0) = ST(0) + R_F32((u32)(0x8ffc80u));
    /* 00453dd4: fmul dword ptr [0x8ffc64] */ ST(0) = ST(0) * R_F32((u32)(0x8ffc64u));
    /* 00453dda: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 00453ddd: je 0x453e18 */ if (fZ) goto L_00453e18;
L_00453ddf:; BB(0x00453ddf);
    /* 00453ddf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00453de2: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00453de5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453de8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453de9: ret  */ FN_RET(0x00453d28); r_esp += 4; return;
L_00453dea:; BB(0x00453dea);
    /* 00453dea: push dword ptr [ebp + 0x8ffbd0] */ { u32 v = R32((u32)(r_ebp+0x8ffbd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00453df0: push 0x8ffc50 */ { u32 v = 0x8ffc50u; r_esp -= 4; W32(r_esp, v); }
    /* 00453df5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x453dfau); f_00509590();
    /* 00453dfa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453dfd: mov dword ptr [ebx + edi*2 + 0x44], eax */ W32((u32)(r_ebx+r_edi*2+0x44u), r_eax);
    /* 00453e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e03: je 0x453e13 */ if (fZ) goto L_00453e13;
L_00453e05:; BB(0x00453e05);
    /* 00453e05: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e07: mov ecx, eax */ r_ecx = r_eax;
    /* 00453e09: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x453e0eu); f_00508efc();
    /* 00453e0e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00453e11: jmp 0x453da6 */ goto L_00453da6;
L_00453e13:; BB(0x00453e13);
    /* 00453e13: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00453e16: jmp 0x453da6 */ goto L_00453da6;
L_00453e18:; BB(0x00453e18);
    /* 00453e18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453e1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e1d: push 0x3e6 */ { u32 v = 0x3e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e22: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x453e27u); f_00814298();
    /* 00453e27: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00453e2b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00453e30: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00453e34: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453e37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453e38: ret  */ FN_RET(0x00453d28); r_esp += 4; return;
L_00453e39:; BB(0x00453e39);
    /* 00453e39: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00453e3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453e3d: ret  */ FN_RET(0x00453d28); r_esp += 4; return;
}

void f_00453e40(void) /* sub_453E40 */
{
    FN_ENTER(0x00453e40);
    /* 00453e40: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00453e43: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453e46: je 0x453e49 */ if (fZ) goto L_00453e49;
L_00453e48:; BB(0x00453e48);
    /* 00453e48: ret  */ FN_RET(0x00453e40); r_esp += 4; return;
L_00453e49:; BB(0x00453e49);
    /* 00453e49: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00453e50: mov dword ptr [ecx + 0x1c], 2 */ W32((u32)(r_ecx+0x1cu), 0x2u);
    /* 00453e57: ret  */ FN_RET(0x00453e40); r_esp += 4; return;
}

void f_00453e58(void) /* sub_453E58 */
{
    FN_ENTER(0x00453e58);
    /* 00453e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453e59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00453e5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453e5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00453e5c: mov eax, ecx */ r_eax = r_ecx;
    /* 00453e5e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00453e60: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00453e66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00453e68: jle 0x453ead */ if ((fZ||fS!=fO)) goto L_00453ead;
L_00453e6a:; BB(0x00453e6a);
    /* 00453e6a: mov ebx, eax */ r_ebx = r_eax;
    /* 00453e6c: mov ebp, edx */ r_ebp = r_edx;
    /* 00453e6e: mov esi, ecx */ r_esi = r_ecx;
L_00453e70:; BB(0x00453e70);
    /* 00453e70: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00453e77: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e79: je 0x453ea6 */ if (fZ) goto L_00453ea6;
L_00453e7b:; BB(0x00453e7b);
    /* 00453e7b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00453e7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453e80: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x453e85u); f_00453ab8();
    /* 00453e85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453e86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453e88: je 0x453ea6 */ if (fZ) goto L_00453ea6;
L_00453e8a:; BB(0x00453e8a);
    /* 00453e8a: push 0x8ffc50 */ { u32 v = 0x8ffc50u; r_esp -= 4; W32(r_esp, v); }
    /* 00453e8f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00453e92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453e93: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x453e98u); f_00836208();
    /* 00453e98: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00453e9b: fcomp dword ptr [0x8ffc5c] */ fx_compare(ST(0), R_F32((u32)(0x8ffc5cu))); FPOP();
    /* 00453ea1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453ea3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453ea4: jbe 0x453eb2 */ if ((fC||fZ)) goto L_00453eb2;
L_00453ea6:; BB(0x00453ea6);
    /* 00453ea6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00453ea9: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00453eab: jl 0x453e70 */ if ((fS!=fO)) goto L_00453e70;
L_00453ead:; BB(0x00453ead);
    /* 00453ead: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453eae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453eaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453eb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453eb1: ret  */ FN_RET(0x00453e58); r_esp += 4; return;
L_00453eb2:; BB(0x00453eb2);
    /* 00453eb2: mov eax, ebx */ r_eax = r_ebx;
    /* 00453eb4: mov edx, 1 */ r_edx = 0x1u;
    /* 00453eb9: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00453ebc: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00453ebf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00453ec0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453ec1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00453ec2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00453ec3: ret  */ FN_RET(0x00453e58); r_esp += 4; return;
}

void f_00453ec4(void) /* sub_453EC4 */
{
    FN_ENTER(0x00453ec4);
    /* 00453ec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00453ec5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00453ec7: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00453eca: fcomp dword ptr [0x8ffc78] */ fx_compare(ST(0), R_F32((u32)(0x8ffc78u))); FPOP();
    /* 00453ed0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00453ed2: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00453ed5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00453ed6: je 0x453f1f */ if (fZ) goto L_00453f1f;
L_00453ed8:; BB(0x00453ed8);
    /* 00453ed8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00453ed9: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x453edeu); f_00453af4();
    /* 00453ede: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453edf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x453ee4u); f_0082d7b0();
    /* 00453ee4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x453ee9u); f_0082fa9c();
    /* 00453ee9: mov ecx, 0x8ffc50 */ r_ecx = 0x8ffc50u;
    /* 00453eee: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x453ef3u); f_0082d838();
    /* 00453ef3: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00453ef6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x453efbu); f_00829cc8();
    /* 00453efb: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00453efe: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00453f01: push dword ptr [ebp + eax*4 + 0x3c] */ { u32 v = R32((u32)(r_ebp+r_eax*4+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00453f05: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00453f08: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x453f0du); f_0083046c();
    /* 00453f0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00453f10: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x453f15u); f_0082faac();
    /* 00453f15: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x453f1au); f_0082da80();
    /* 00453f1a: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x453f1fu); f_005963d0();
L_00453f1f:; BB(0x00453f1f);
    /* 00453f1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00453f20: ret  */ FN_RET(0x00453ec4); r_esp += 4; return;
}

void f_00453f24(void) /* sub_453F24 */
{
    FN_ENTER(0x00453f24);
    /* 00453f24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00453f27: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00453f2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f2e: je 0x454005 */ if (fZ) goto L_00454005;
L_00453f34:; BB(0x00453f34);
    /* 00453f34: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x453f39u); f_007a61a4();
    /* 00453f39: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f3c: je 0x454005 */ if (fZ) goto L_00454005;
L_00453f42:; BB(0x00453f42);
    /* 00453f42: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00453f48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453f4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00453f4c: jle 0x454005 */ if ((fZ||fS!=fO)) goto L_00454005;
L_00453f52:; BB(0x00453f52);
    /* 00453f52: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00453f56: mov esi, edx */ r_esi = r_edx;
    /* 00453f58: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00453f5c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00453f60: mov ebp, eax */ r_ebp = r_eax;
L_00453f62:; BB(0x00453f62);
    /* 00453f62: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00453f69: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f6b: je 0x453fee */ if (fZ) goto L_00453fee;
L_00453f71:; BB(0x00453f71);
    /* 00453f71: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00453f75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00453f76: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x453f7bu); f_00453ab8();
    /* 00453f7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00453f7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f7e: je 0x453fee */ if (fZ) goto L_00453fee;
L_00453f80:; BB(0x00453f80);
    /* 00453f80: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00453f83: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00453f87: add edi, 0xdf8 */ {  u32 a = r_edi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00453f8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00453f8f: mov esi, eax */ r_esi = r_eax;
    /* 00453f91: mov ebx, edi */ r_ebx = r_edi;
L_00453f93:; BB(0x00453f93);
    /* 00453f93: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00453f95:; BB(0x00453f95);
    /* 00453f95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00453f96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00453f98: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x453f9du); f_0069792c();
    /* 00453f9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453f9f: je 0x453fd7 */ if (fZ) goto L_00453fd7;
L_00453fa1:; BB(0x00453fa1);
    /* 00453fa1: movzx edx, byte ptr [esi + 0x8ffc3c] */ r_edx = (u32)R8((u32)(r_esi+0x8ffc3cu));
    /* 00453fa8: movzx ecx, byte ptr [eax + 0xf2] */ r_ecx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00453faf: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453fb1: jne 0x453fd7 */ if (!fZ) goto L_00453fd7;
L_00453fb3:; BB(0x00453fb3);
    /* 00453fb3: movzx edx, byte ptr [esi + 0x8ffc3d] */ r_edx = (u32)R8((u32)(r_esi+0x8ffc3du));
    /* 00453fba: movzx ecx, byte ptr [eax + 0xf3] */ r_ecx = (u32)R8((u32)(r_eax+0xf3u));
    /* 00453fc1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453fc3: jne 0x453fd7 */ if (!fZ) goto L_00453fd7;
L_00453fc5:; BB(0x00453fc5);
    /* 00453fc5: movzx edx, byte ptr [esi + 0x8ffc3e] */ r_edx = (u32)R8((u32)(r_esi+0x8ffc3eu));
    /* 00453fcc: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 00453fd3: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00453fd5: je 0x45400b */ if (fZ) goto L_0045400b;
L_00453fd7:; BB(0x00453fd7);
    /* 00453fd7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00453fda: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453fdd: jl 0x453f95 */ if ((fS!=fO)) goto L_00453f95;
L_00453fdf:; BB(0x00453fdf);
    /* 00453fdf: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00453fe2: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453fe5: jl 0x453f93 */ if ((fS!=fO)) goto L_00453f93;
L_00453fe7:; BB(0x00453fe7);
    /* 00453fe7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00453fea: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00453fee:; BB(0x00453fee);
    /* 00453fee: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00453ff1: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00453ff3: jl 0x453f62 */ if ((fS!=fO)) goto L_00453f62;
L_00453ff9:; BB(0x00453ff9);
    /* 00453ff9: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00453ffd: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00454001: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_00454005:; BB(0x00454005);
    /* 00454005: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00454007: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045400a: ret  */ FN_RET(0x00453f24); r_esp += 4; return;
L_0045400b:; BB(0x0045400b);
    /* 0045400b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0045400f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00454013: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00454017: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0045401b: call 0x45402c */ r_esp -= 4; W32(r_esp, 0x454020u); f_0045402c();
    /* 00454020: mov eax, 1 */ r_eax = 0x1u;
    /* 00454025: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00454028: ret  */ FN_RET(0x00453f24); r_esp += 4; return;
}

