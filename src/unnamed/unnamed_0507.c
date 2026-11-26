#include "protos.h"

void f_00507120(void) /* sub_507120 */
{
    FN_ENTER(0x00507120);
    /* 00507120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00507121: mov ebp, esp */ r_ebp = r_esp;
    /* 00507123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00507125: push 0x8d39da */ { u32 v = 0x8d39dau; r_esp -= 4; W32(r_esp, v); }
    /* 0050712a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00507130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507131: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00507138: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050713b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050713e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00507141: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00507144: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00507147: lea ebx, [ecx + 0x2c] */ r_ebx = (u32)(r_ecx+0x2cu);
    /* 0050714a: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0050714d: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 00507150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507151: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507153: mov edx, ebx */ r_edx = r_ebx;
    /* 00507155: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x50715au); f_00830aa0();
    /* 0050715a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0050715d: fcomp dword ptr [0x91ff08] */ fx_compare(ST(0), R_F32((u32)(0x91ff08u))); FPOP();
    /* 00507163: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507165: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507166: jbe 0x507179 */ if ((fC||fZ)) goto L_00507179;
L_00507168:; BB(0x00507168);
    /* 00507168: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050716b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050716e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00507175: mov esp, ebp */ r_esp = r_ebp;
    /* 00507177: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507178: ret  */ FN_RET(0x00507120); r_esp += 4; return;
L_00507179:; BB(0x00507179);
    /* 00507179: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0050717c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050717d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050717f: mov edx, ebx */ r_edx = r_ebx;
    /* 00507181: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x507186u); f_0082f09c();
    /* 00507186: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00507189: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0050718c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0050718e: je 0x5071ae */ if (fZ) goto L_005071ae;
L_00507190:; BB(0x00507190);
    /* 00507190: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00507193: fdiv dword ptr [0xacc0e8] */ ST(0) = ST(0) / R_F32((u32)(0xacc0e8u));
    /* 00507199: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0050719c: fdiv dword ptr [0xacc0ec] */ ST(0) = ST(0) / R_F32((u32)(0xacc0ecu));
    /* 005071a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005071a4: fst dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 005071a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005071a9: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 005071ac: jmp 0x5071b1 */ goto L_005071b1;
L_005071ae:; BB(0x005071ae);
    /* 005071ae: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
L_005071b1:; BB(0x005071b1);
    /* 005071b1: fld dword ptr [0x91ff04] */ FPUSH(R_F32((u32)(0x91ff04u)));
    /* 005071b7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005071b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005071bb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005071bc: ja 0x507273 */ if ((!fC&&!fZ)) goto L_00507273;
L_005071c2:; BB(0x005071c2);
    /* 005071c2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005071c4: fcom dword ptr [0x91ff00] */ fx_compare(ST(0), R_F32((u32)(0x91ff00u))); 
    /* 005071ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005071cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005071cd: ja 0x8d39bf */ if ((!fC&&!fZ)) goto L_008d39bf;
L_005071d3:; BB(0x005071d3);
    /* 005071d3: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 005071d6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 005071d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005071da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005071dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005071de: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005071e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005071e2: jb 0x8d39c8 */ if (fC) goto L_008d39c8;
L_005071e8:; BB(0x005071e8);
    /* 005071e8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005071ea: fcom dword ptr [0x91fefc] */ fx_compare(ST(0), R_F32((u32)(0x91fefcu))); 
    /* 005071f0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005071f2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005071f3: ja 0x8d39d1 */ if ((!fC&&!fZ)) goto L_008d39d1;
L_005071f9:; BB(0x005071f9);
    /* 005071f9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005071fc: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 005071ff: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00507202: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 00507205: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00507208: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050720a: fst dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0));
    /* 0050720d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0050720f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00507211: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507213: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00507215: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00507217: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507219: fcomp dword ptr [0x91fef8] */ fx_compare(ST(0), R_F32((u32)(0x91fef8u))); FPOP();
    /* 0050721f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507221: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 00507224: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 00507227: mov dword ptr [ebx + 0x20], esi */ W32((u32)(r_ebx+0x20u), r_esi);
    /* 0050722a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050722b: jb 0x507277 */ if (fC) goto L_00507277;
L_0050722d:; BB(0x0050722d);
    /* 0050722d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00507234: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00507236: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x50723bu); f_005caba4();
    /* 0050723b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050723c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0050723f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00507241: je 0x507277 */ if (fZ) goto L_00507277;
L_00507243:; BB(0x00507243);
    /* 00507243: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0050724a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00507251: mov eax, ebx */ r_eax = r_ebx;
    /* 00507253: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00507256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507257: lea ebx, [eax + 0x24] */ r_ebx = (u32)(r_eax+0x24u);
    /* 0050725a: lea edx, [eax + 0x1c] */ r_edx = (u32)(r_eax+0x1cu);
    /* 0050725d: push dword ptr [eax + 0x3c] */ { u32 v = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00507260: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00507263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507264: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00507265: call 0x50728c */ r_esp -= 4; W32(r_esp, 0x50726au); f_0050728c();
    /* 0050726a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00507271: jmp 0x507277 */ goto L_00507277;
L_00507273:; BB(0x00507273);
    /* 00507273: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507275: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00507277:; BB(0x00507277);
    /* 00507277: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050727a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050727d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00507280: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00507287: mov esp, ebp */ r_esp = r_ebp;
    /* 00507289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050728a: ret  */ FN_RET(0x00507120); r_esp += 4; return;
L_008d39bf:; BB(0x008d39bf);
    /* 008d39bf: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008d39c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d39c3: jmp 0x507277 */ goto L_00507277;
L_008d39c8:; BB(0x008d39c8);
    /* 008d39c8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008d39ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d39cc: jmp 0x507277 */ goto L_00507277;
L_008d39d1:; BB(0x008d39d1);
    /* 008d39d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d39d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008d39d5: jmp 0x507277 */ goto L_00507277;
}

void f_0050728c(void) /* sub_50728C */
{
    FN_ENTER(0x0050728c);
    /* 0050728c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050728d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050728e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507291: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00507293: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00507297: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0050729b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0050729f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005072a1: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005072a5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5072aau); f_008193cc();
    /* 005072aa: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005072ae: fcomp dword ptr [0x91fef4] */ fx_compare(ST(0), R_F32((u32)(0x91fef4u))); FPOP();
    /* 005072b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005072b6: mov dword ptr [ebp], 0xafedf0 */ W32((u32)(r_ebp), 0xafedf0u);
    /* 005072bd: mov edx, dword ptr [0x9ba8d4] */ r_edx = R32((u32)(0x9ba8d4u));
    /* 005072c3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 005072c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005072c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005072c9: ja 0x5072d5 */ if ((!fC&&!fZ)) goto L_005072d5;
L_005072cb:; BB(0x005072cb);
    /* 005072cb: fld dword ptr [0x91fef0] */ FPUSH(R_F32((u32)(0x91fef0u)));
    /* 005072d1: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_005072d5:; BB(0x005072d5);
    /* 005072d5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005072d9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005072dc: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005072de: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 005072e0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005072e3: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 005072e6: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 005072e9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005072ed: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005072f1: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5072f6u); f_0083173c();
    /* 005072f6: fld dword ptr [0x91fef4] */ FPUSH(R_F32((u32)(0x91fef4u)));
    /* 005072fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005072fe: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00507300: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507302: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507303: je 0x50731a */ if (fZ) goto L_0050731a;
L_00507305:; BB(0x00507305);
    /* 00507305: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507307: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0050730a: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x50730fu); f_0082df08();
    /* 0050730f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507311: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00507314: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00507318: jmp 0x507331 */ goto L_00507331;
L_0050731a:; BB(0x0050731a);
    /* 0050731a: fld dword ptr [0x91fef4] */ FPUSH(R_F32((u32)(0x91fef4u)));
    /* 00507320: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00507322: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00507325: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00507327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00507329: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0050732d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_00507331:; BB(0x00507331);
    /* 00507331: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00507333: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00507335: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507339: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0050733b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0050733d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050733f: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00507341: fst dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0));
    /* 00507344: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507346: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00507349: fst dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0));
    /* 0050734c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050734e: fchs  */ ST(0) = -ST(0);
    /* 00507350: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00507352: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00507354: fst dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0));
    /* 00507357: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00507359: fchs  */ ST(0) = -ST(0);
    /* 0050735b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050735d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050735f: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00507362: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00507364: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507366: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507367: jb 0x507377 */ if (fC) goto L_00507377;
L_00507369:; BB(0x00507369);
    /* 00507369: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050736b: fst dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0));
    /* 0050736e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507370: fst dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0));
    /* 00507373: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507375: jmp 0x50737a */ goto L_0050737a;
L_00507377:; BB(0x00507377);
    /* 00507377: fst dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0));
L_0050737a:; BB(0x0050737a);
    /* 0050737a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050737c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0050737e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00507380: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507382: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00507384: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00507386: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507388: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00507389: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050738c: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x507391u); f_0082dc9c();
    /* 00507391: fmul dword ptr [0x91feec] */ ST(0) = ST(0) * R_F32((u32)(0x91feecu));
    /* 00507397: fdiv dword ptr [esp + 0xc] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0xcu));
    /* 0050739b: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0050739e: mov eax, ebp */ r_eax = r_ebp;
    /* 005073a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005073a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005073a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005073a5: ret 0x14 */ FN_RET(0x0050728c); r_esp += 24; return;
}

void f_005073a8(void) /* sub_5073A8 */
{
    FN_ENTER(0x005073a8);
    /* 005073a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005073a9: mov esi, ecx */ r_esi = r_ecx;
    /* 005073ab: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 005073ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005073b0: je 0x5073cb */ if (fZ) goto L_005073cb;
L_005073b2:; BB(0x005073b2);
    /* 005073b2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5073b7u); f_008173b4();
    /* 005073b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005073b9: je 0x5073cb */ if (fZ) goto L_005073cb;
L_005073bb:; BB(0x005073bb);
    /* 005073bb: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 005073be: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005073c2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005073c7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_005073cb:; BB(0x005073cb);
    /* 005073cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005073cc: ret  */ FN_RET(0x005073a8); r_esp += 4; return;
}

void f_005073d0(void) /* sub_5073D0 */
{
    FN_ENTER(0x005073d0);
    /* 005073d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005073d4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005073d6: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 005073d9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005073dc: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005073df: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005073e2: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 005073e5: ret 4 */ FN_RET(0x005073d0); r_esp += 8; return;
}

void f_005073e8(void) /* sub_5073E8 */
{
    FN_ENTER(0x005073e8);
    /* 005073e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005073e9: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005073ec: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005073ee: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 005073f4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005073f6: je 0x5074d6 */ if (fZ) goto L_005074d6;
L_005073fc:; BB(0x005073fc);
    /* 005073fc: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 005073ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507400: call 0x5073d0 */ r_esp -= 4; W32(r_esp, 0x507405u); f_005073d0();
    /* 00507405: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 00507408: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 0050740b: fld dword ptr [ebx + 0x70] */ FPUSH(R_F32((u32)(r_ebx+0x70u)));
    /* 0050740e: mov ecx, dword ptr [ebx + 0x90] */ r_ecx = R32((u32)(r_ebx+0x90u));
    /* 00507414: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00507417: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0050741f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00507423: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00507427: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 0050742c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507431: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00507435: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00507439: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050743d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00507441: fild dword ptr [ebx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x84u)));
    /* 00507447: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0050744b: mov byte ptr [esp + 8], al */ W8((u32)(r_esp+0x8u), (u8)r_eax);
    /* 0050744f: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00507453: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00507458: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050745d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00507461: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00507465: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00507469: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0050746d: fild dword ptr [ebx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x88u)));
    /* 00507473: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00507477: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 0050747b: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0050747f: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00507484: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507489: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0050748d: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00507491: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 00507495: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00507499: fild dword ptr [ebx + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x8cu)));
    /* 0050749f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005074a3: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 005074a7: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 005074ab: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005074b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005074b5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005074b9: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005074bd: fistp qword ptr [esp + 0x24] */ W64((u32)(r_esp+0x24u), (u64)fx_int64(ST(0))); FPOP();
    /* 005074c1: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005074c5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005074c9: mov byte ptr [esp + 0xb], al */ W8((u32)(r_esp+0xbu), (u8)r_eax);
    /* 005074cd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005074d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005074d1: call 0x5074dc */ r_esp -= 4; W32(r_esp, 0x5074d6u); f_005074dc();
L_005074d6:; BB(0x005074d6);
    /* 005074d6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005074d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005074da: ret  */ FN_RET(0x005073e8); r_esp += 4; return;
}

void f_005074dc(void) /* sub_5074DC */
{
    FN_ENTER(0x005074dc);
    /* 005074dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005074e0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005074e2: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005074e5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005074e8: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 005074eb: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005074ee: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 005074f1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005074f4: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005074f7: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005074fa: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 005074fd: ret 4 */ FN_RET(0x005074dc); r_esp += 8; return;
}

void f_00507500(void) /* sub_507500 */
{
    FN_ENTER(0x00507500);
    /* 00507500: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507503: mov dword ptr [esp], 0x3f000000 */ W32((u32)(r_esp), 0x3f000000u);
    /* 0050750a: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050750d: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00507515: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00507518: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00507520: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00507528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507529: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0050752e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050752f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x507534u); f_0061cdb0();
    /* 00507534: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507537: ret  */ FN_RET(0x00507500); r_esp += 4; return;
}

void f_00507538(void)
{
    FN_ENTER(0x00507538);
    /* 00507538: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00507539: mov ebp, esp */ r_ebp = r_esp;
    /* 0050753b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050753d: push 0x8d3a00 */ { u32 v = 0x8d3a00u; r_esp -= 4; W32(r_esp, v); }
    /* 00507542: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00507548: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507549: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00507550: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507553: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00507556: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00507559: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050755c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050755f: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00507564: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050756b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x507570u); f_005caba4();
    /* 00507570: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00507571: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00507574: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507576: je 0x5075af */ if (fZ) goto L_005075af;
L_00507578:; BB(0x00507578);
    /* 00507578: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0050757f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00507586: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00507589: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050758f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00507592: call 0x5075b4 */ r_esp -= 4; W32(r_esp, 0x507597u); f_005075b4();
    /* 00507597: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050759a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005075a1:; BB(0x005075a1);
    /* 005075a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005075a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005075ab: mov esp, ebp */ r_esp = r_ebp;
    /* 005075ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005075ae: ret  */ FN_RET(0x00507538); r_esp += 4; return;
L_005075af:; BB(0x005075af);
    /* 005075af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005075b1: jmp 0x5075a1 */ goto L_005075a1;
}

void f_005075b4(void) /* sub_5075B4 */
{
    FN_ENTER(0x005075b4);
    /* 005075b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005075b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005075b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005075b9: push 0x8d3a46 */ { u32 v = 0x8d3a46u; r_esp -= 4; W32(r_esp, v); }
    /* 005075be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005075c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005075c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005075cc: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005075cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005075d2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005075d5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005075d8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005075db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005075de: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005075e1: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 005075e4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005075e7: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x5075ecu); f_007ba278();
    /* 005075ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005075f3: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 005075f6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005075f9: mov dword ptr [ecx], 0xafee10 */ W32((u32)(r_ecx), 0xafee10u);
    /* 005075ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507600: call dword ptr [0xafee24] */ { u32 t = R32((u32)(0xafee24u)); r_esp -= 4; W32(r_esp, 0x507606u); call_ind(t); }
    /* 00507606: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00507609: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 0050760c: mov ebx, dword ptr [edx + 0x6c] */ r_ebx = R32((u32)(r_edx+0x6cu));
    /* 0050760f: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 00507612: mov esi, dword ptr [edx + 0x88] */ r_esi = R32((u32)(r_edx+0x88u));
    /* 00507618: mov edi, dword ptr [edx + 0x8c] */ r_edi = R32((u32)(r_edx+0x8cu));
    /* 0050761e: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 00507621: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 00507625: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050762a: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0050762d: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00507630: fistp qword ptr [ebp - 0x34] */ W64((u32)(r_ebp+0xffffffccu), (u64)fx_int64(ST(0))); FPOP();
    /* 00507633: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00507636: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0050763c: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0050763f: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00507642: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00507649: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0050764c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0050764f: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00507652: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00507657: or ecx, 0xffffff00 */ {  u32 a = r_ecx; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050765d: and esi, 0xff0000 */ {  u32 a = r_esi; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00507663: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00507665: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050766b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0050766d: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00507673: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00507675: and ecx, 0xffffff */ {  u32 a = r_ecx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050767b: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0050767e: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00507680: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00507683: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x507688u); f_005caba4();
    /* 00507688: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050768b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050768e: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00507691: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507693: je 0x507815 */ if (fZ) goto L_00507815;
L_00507699:; BB(0x00507699);
    /* 00507699: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 005076a0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005076a7: mov ecx, eax */ r_ecx = r_eax;
    /* 005076a9: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005076ac: mov edx, dword ptr [0xaca334] */ r_edx = R32((u32)(0xaca334u));
    /* 005076b2: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 005076b5: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005076b8: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 005076bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005076bc: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 005076bf: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5076c4u); f_008193cc();
    /* 005076c4: mov eax, ebx */ r_eax = r_ebx;
    /* 005076c6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005076c9: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005076cc: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 005076cf: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005076d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005076d9: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 005076dc: mov edi, dword ptr [ebp - 0x60] */ r_edi = R32((u32)(r_ebp+0xffffffa0u));
    /* 005076df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005076e2: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 005076e5: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 005076e8: mov dword ptr [eax], 0xafee00 */ W32((u32)(r_eax), 0xafee00u);
    /* 005076ee: mov ebx, dword ptr [0x9ba8d8] */ r_ebx = R32((u32)(0x9ba8d8u));
    /* 005076f4: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005076f7: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005076fa: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005076fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005076ff: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 00507702: mov dword ptr [eax + 0x48], ebx */ W32((u32)(r_eax+0x48u), r_ebx);
    /* 00507705: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00507707: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0050770a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0050770d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00507710: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00507713: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00507716: mov dword ptr [eax + 0x4c], ebx */ W32((u32)(r_eax+0x4cu), r_ebx);
    /* 00507719: lea edx, [eax + 0x2c] */ r_edx = (u32)(r_eax+0x2cu);
    /* 0050771c: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0050771f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507720: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507722: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x507727u); f_0082f09c();
    /* 00507727: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050772a: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0050772d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050772f: je 0x507745 */ if (fZ) goto L_00507745;
L_00507731:; BB(0x00507731);
    /* 00507731: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00507734: fdiv dword ptr [0xacc0e8] */ ST(0) = ST(0) / R_F32((u32)(0xacc0e8u));
    /* 0050773a: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0050773d: fdiv dword ptr [0xacc0ec] */ ST(0) = ST(0) / R_F32((u32)(0xacc0ecu));
    /* 00507743: jmp 0x50774b */ goto L_0050774b;
L_00507745:; BB(0x00507745);
    /* 00507745: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00507748: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
L_0050774b:; BB(0x0050774b);
    /* 0050774b: fld dword ptr [0x91fed0] */ FPUSH(R_F32((u32)(0x91fed0u)));
    /* 00507751: mov edx, eax */ r_edx = r_eax;
    /* 00507753: fldz  */ FPUSH(0.0);
    /* 00507755: fldz  */ FPUSH(0.0);
    /* 00507757: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00507759: fchs  */ ST(0) = -ST(0);
    /* 0050775b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0050775d: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 00507760: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 00507764: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507769: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0050776c: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0050776f: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00507771: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00507774: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507776: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00507778: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050777a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050777c: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0050777e: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00507785: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507786: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507788: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0050778a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050778c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050778e: fchs  */ ST(0) = -ST(0);
    /* 00507790: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00507792: fld dword ptr [0x91fed0] */ FPUSH(R_F32((u32)(0x91fed0u)));
    /* 00507798: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050779a: jae 0x50779e */ if (!fC) goto L_0050779e;
L_0050779c:; BB(0x0050779c);
    /* 0050779c: fst st(3) */ ST(3) = ST(0);
L_0050779e:; BB(0x0050779e);
    /* 0050779e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050779f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005077a1: je 0x5077a5 */ if (fZ) goto L_005077a5;
L_005077a3:; BB(0x005077a3);
    /* 005077a3: fst st(3) */ ST(3) = ST(0);
L_005077a5:; BB(0x005077a5);
    /* 005077a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005077a7: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 005077aa: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 005077ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 005077b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005077b6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 005077b9: frndint  */ ST(0) = fx_rint(ST(0));
    /* 005077bb: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 005077be: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005077c0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005077c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005077c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005077c6: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005077c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077ca: fchs  */ ST(0) = -ST(0);
    /* 005077cc: fst dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0));
    /* 005077cf: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 005077d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005077d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077d5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005077d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005077d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077db: jae 0x5077df */ if (!fC) goto L_005077df;
L_005077dd:; BB(0x005077dd);
    /* 005077dd: fst st(1) */ ST(1) = ST(0);
L_005077df:; BB(0x005077df);
    /* 005077df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005077e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077e2: je 0x5077e6 */ if (fZ) goto L_005077e6;
L_005077e4:; BB(0x005077e4);
    /* 005077e4: fst st(1) */ ST(1) = ST(0);
L_005077e6:; BB(0x005077e6);
    /* 005077e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005077e8: fchs  */ ST(0) = -ST(0);
    /* 005077ea: fst dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0));
    /* 005077ed: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
L_005077f0:; BB(0x005077f0);
    /* 005077f0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005077f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005077f6: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005077f9: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005077fc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005077ff: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00507805: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00507808: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050780f: mov esp, ebp */ r_esp = r_ebp;
    /* 00507811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507812: ret 8 */ FN_RET(0x005075b4); r_esp += 12; return;
L_00507815:; BB(0x00507815);
    /* 00507815: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00507817: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0050781a: jmp 0x5077f0 */ goto L_005077f0;
}

void f_005076ca(void)
{
    FN_ENTER(0x005076ca);
    /* 005076ca: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005076cb: mov al, byte ptr [0xc79c5589] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xc79c5589u))) & 0xffu);
    /* 005076d0: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005076d1: cld  */ rt_df = 0;
    /* 005076d2: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005076d4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005076d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005076d9: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 005076dc: mov edi, dword ptr [ebp - 0x60] */ r_edi = R32((u32)(r_ebp+0xffffffa0u));
    /* 005076df: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005076e2: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 005076e5: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 005076e8: mov dword ptr [eax], 0xafee00 */ W32((u32)(r_eax), 0xafee00u);
    /* 005076ee: mov ebx, dword ptr [0x9ba8d8] */ r_ebx = R32((u32)(0x9ba8d8u));
    /* 005076f4: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 005076f7: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 005076fa: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 005076fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005076ff: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 00507702: mov dword ptr [eax + 0x48], ebx */ W32((u32)(r_eax+0x48u), r_ebx);
    /* 00507705: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00507707: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0050770a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0050770d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00507710: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 00507713: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00507716: mov dword ptr [eax + 0x4c], ebx */ W32((u32)(r_eax+0x4cu), r_ebx);
    /* 00507719: lea edx, [eax + 0x2c] */ r_edx = (u32)(r_eax+0x2cu);
    /* 0050771c: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0050771f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507720: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507722: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x507727u); f_0082f09c();
    /* 00507727: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050772a: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0050772d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050772f: je 0x507745 */ if (fZ) goto L_00507745;
L_00507731:; BB(0x00507731);
    /* 00507731: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00507734: fdiv dword ptr [0xacc0e8] */ ST(0) = ST(0) / R_F32((u32)(0xacc0e8u));
    /* 0050773a: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0050773d: fdiv dword ptr [0xacc0ec] */ ST(0) = ST(0) / R_F32((u32)(0xacc0ecu));
    /* 00507743: jmp 0x50774b */ goto L_0050774b;
L_00507745:; BB(0x00507745);
    /* 00507745: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00507748: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
L_0050774b:; BB(0x0050774b);
    /* 0050774b: fld dword ptr [0x91fed0] */ FPUSH(R_F32((u32)(0x91fed0u)));
    /* 00507751: mov edx, eax */ r_edx = r_eax;
    /* 00507753: fldz  */ FPUSH(0.0);
    /* 00507755: fldz  */ FPUSH(0.0);
    /* 00507757: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00507759: fchs  */ ST(0) = -ST(0);
    /* 0050775b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0050775d: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 00507760: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 00507764: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507769: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0050776c: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0050776f: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00507771: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 00507774: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507776: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00507778: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050777a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050777c: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0050777e: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 00507785: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507786: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507788: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0050778a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050778c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050778e: fchs  */ ST(0) = -ST(0);
    /* 00507790: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00507792: fld dword ptr [0x91fed0] */ FPUSH(R_F32((u32)(0x91fed0u)));
    /* 00507798: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0050779a: jae 0x50779e */ if (!fC) goto L_0050779e;
L_0050779c:; BB(0x0050779c);
    /* 0050779c: fst st(3) */ ST(3) = ST(0);
L_0050779e:; BB(0x0050779e);
    /* 0050779e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050779f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005077a1: je 0x5077a5 */ if (fZ) goto L_005077a5;
L_005077a3:; BB(0x005077a3);
    /* 005077a3: fst st(3) */ ST(3) = ST(0);
L_005077a5:; BB(0x005077a5);
    /* 005077a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005077a7: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 005077aa: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 005077ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 005077b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005077b6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 005077b9: frndint  */ ST(0) = fx_rint(ST(0));
    /* 005077bb: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 005077be: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005077c0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005077c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005077c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005077c6: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005077c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077ca: fchs  */ ST(0) = -ST(0);
    /* 005077cc: fst dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0));
    /* 005077cf: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 005077d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005077d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077d5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 005077d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005077d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077db: jae 0x5077df */ if (!fC) goto L_005077df;
L_005077dd:; BB(0x005077dd);
    /* 005077dd: fst st(1) */ ST(1) = ST(0);
L_005077df:; BB(0x005077df);
    /* 005077df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005077e0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005077e2: je 0x5077e6 */ if (fZ) goto L_005077e6;
L_005077e4:; BB(0x005077e4);
    /* 005077e4: fst st(1) */ ST(1) = ST(0);
L_005077e6:; BB(0x005077e6);
    /* 005077e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005077e8: fchs  */ ST(0) = -ST(0);
    /* 005077ea: fst dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0));
    /* 005077ed: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 005077f0: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 005077f3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005077f6: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005077f9: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005077fc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005077ff: mov dword ptr [eax + 0x90], edx */ W32((u32)(r_eax+0x90u), r_edx);
    /* 00507805: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00507808: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050780f: mov esp, ebp */ r_esp = r_ebp;
    /* 00507811: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507812: ret 8 */ FN_RET(0x005076ca); r_esp += 12; return;
}

void f_0050781c(void) /* sub_50781C */
{
    FN_ENTER(0x0050781c);
    /* 0050781c: mov dword ptr [0xa72be8], 0x3f800000 */ W32((u32)(0xa72be8u), 0x3f800000u);
    /* 00507826: mov dword ptr [0xa72bec], 0x41000000 */ W32((u32)(0xa72becu), 0x41000000u);
    /* 00507830: mov dword ptr [0xa72bf0], 0x3fc00000 */ W32((u32)(0xa72bf0u), 0x3fc00000u);
    /* 0050783a: ret  */ FN_RET(0x0050781c); r_esp += 4; return;
}

void f_0050783c(void) /* sub_50783C */
{
    FN_ENTER(0x0050783c);
    /* 0050783c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050783d: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507840: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00507842: mov ecx, 0xaae7ac */ r_ecx = 0xaae7acu;
    /* 00507847: mov eax, dword ptr [0xaae970] */ r_eax = R32((u32)(0xaae970u));
    /* 0050784c: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0050784f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00507851: movsx edx, word ptr [eax*8 + 0xaae774] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax*8+0xaae774u));
    /* 00507859: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0050785d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00507861: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 00507864: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00507867: movsx eax, word ptr [eax*8 + 0xaae776] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax*8+0xaae776u));
    /* 0050786f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00507873: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00507877: mov eax, dword ptr [0xaae974] */ r_eax = R32((u32)(0xaae974u));
    /* 0050787c: fadd dword ptr [ebp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x24u));
    /* 0050787f: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00507882: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00507885: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00507887: movsx eax, word ptr [edx*8 + 0xaae774] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae774u));
    /* 0050788f: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00507893: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00507897: fadd dword ptr [ebp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x28u));
    /* 0050789a: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 0050789d: movsx eax, word ptr [edx*8 + 0xaae776] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*8+0xaae776u));
    /* 005078a5: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005078a9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 005078ad: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 005078b3: fadd dword ptr [ebp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2cu));
    /* 005078b6: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 005078b9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5078beu); f_007c1160();
    /* 005078be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005078c0: je 0x5078c6 */ if (fZ) goto L_005078c6;
L_005078c2:; BB(0x005078c2);
    /* 005078c2: add dword ptr [ebp + 0x30], 1 */ { u32 ad = (u32)(r_ebp+0x30u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005078c6:; BB(0x005078c6);
    /* 005078c6: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 005078cc: mov ecx, 0xaae7ac */ r_ecx = 0xaae7acu;
    /* 005078d1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5078d6u); f_007c1160();
    /* 005078d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005078d8: je 0x5078e5 */ if (fZ) goto L_005078e5;
L_005078da:; BB(0x005078da);
    /* 005078da: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005078dd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005078e0: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005078e3: jmp 0x5078e8 */ goto L_005078e8;
L_005078e5:; BB(0x005078e5);
    /* 005078e5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
L_005078e8:; BB(0x005078e8);
    /* 005078e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005078ea: jge 0x5078f8 */ if ((fS==fO)) goto L_005078f8;
L_005078ec:; BB(0x005078ec);
    /* 005078ec: mov dword ptr [ebp + 0x30], 7 */ W32((u32)(r_ebp+0x30u), 0x7u);
    /* 005078f3: mov eax, 7 */ r_eax = 0x7u;
L_005078f8:; BB(0x005078f8);
    /* 005078f8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005078fb: jl 0x507906 */ if ((fS!=fO)) goto L_00507906;
L_005078fd:; BB(0x005078fd);
    /* 005078fd: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 00507904: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00507906:; BB(0x00507906);
    /* 00507906: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00507909: ja 0x50797a */ if ((!fC&&!fZ)) goto L_0050797a;
L_0050790b:; BB(0x0050790b);
    /* 0050790b: mov eax, dword ptr [eax*4 + 0x91ff58] */ r_eax = R32((u32)(r_eax*4+0x91ff58u));
    /* 00507912: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x0050783c); r_esp += 4; return;
}

void f_00507914(void)
{
    FN_ENTER(0x00507914);
    /* 00507914: lea eax, [ebp + 0x3c] */ r_eax = (u32)(r_ebp+0x3cu);
    /* 00507917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507918: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050791a: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x50791fu); f_00507aa4();
    /* 0050791f: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x00507914); r_esp += 4; return;
}

void f_00507921(void)
{
    FN_ENTER(0x00507921);
    /* 00507921: lea eax, [ebp + 0x3d] */ r_eax = (u32)(r_ebp+0x3du);
    /* 00507924: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507925: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00507927: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x50792cu); f_00507aa4();
    /* 0050792c: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x00507921); r_esp += 4; return;
}

void f_0050792e(void)
{
    FN_ENTER(0x0050792e);
    /* 0050792e: lea eax, [ebp + 0x3e] */ r_eax = (u32)(r_ebp+0x3eu);
    /* 00507931: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507932: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00507934: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x507939u); f_00507aa4();
    /* 00507939: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x0050792e); r_esp += 4; return;
}

void f_0050793b(void)
{
    FN_ENTER(0x0050793b);
    /* 0050793b: lea eax, [ebp + 0x3f] */ r_eax = (u32)(r_ebp+0x3fu);
    /* 0050793e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050793f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00507941: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x507946u); f_00507aa4();
    /* 00507946: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x0050793b); r_esp += 4; return;
}

void f_00507948(void)
{
    FN_ENTER(0x00507948);
    /* 00507948: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0050794b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050794c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050794e: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x507953u); f_00507aa4();
    /* 00507953: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x00507948); r_esp += 4; return;
}

void f_00507955(void)
{
    FN_ENTER(0x00507955);
    /* 00507955: lea eax, [ebp + 0x39] */ r_eax = (u32)(r_ebp+0x39u);
    /* 00507958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507959: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0050795b: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x507960u); f_00507aa4();
    /* 00507960: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x00507955); r_esp += 4; return;
}

void f_00507960(void)
{
    FN_ENTER(0x00507960);
    /* 00507960: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x00507960); r_esp += 4; return;
}

void f_00507962(void)
{
    FN_ENTER(0x00507962);
    /* 00507962: lea eax, [ebp + 0x3a] */ r_eax = (u32)(r_ebp+0x3au);
    /* 00507965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507966: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00507968: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x50796du); f_00507aa4();
    /* 0050796d: jmp 0x50797a */ goto L_0050797a;
L_0050797a:; BB(0x0050797a);
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x00507962); r_esp += 4; return;
}

void f_0050796f(void)
{
    FN_ENTER(0x0050796f);
    /* 0050796f: lea eax, [ebp + 0x3b] */ r_eax = (u32)(r_ebp+0x3bu);
    /* 00507972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507973: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00507975: call 0x507aa4 */ r_esp -= 4; W32(r_esp, 0x50797au); f_00507aa4();
    /* 0050797a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050797f: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00507986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507988: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507990: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00507998: mov dword ptr [esp + 0xc], 0xc0400000 */ W32((u32)(r_esp+0xcu), 0xc0400000u);
    /* 005079a0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005079a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005079b0: je 0x5079f7 */ if (fZ) goto L_005079f7;
L_005079b2:; BB(0x005079b2);
    /* 005079b2: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005079b7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5079bcu); f_0082d990();
    /* 005079bc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005079c1: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 005079c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079c9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5079ceu); f_0082d8bc();
    /* 005079ce: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005079d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079d2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005079d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079d8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079ddu); f_0082eab8();
    /* 005079dd: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005079e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005079e2: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005079e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005079e8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5079edu); f_0082eab8();
    /* 005079ed: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5079f2u); f_0082da80();
    /* 005079f2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_005079f7:; BB(0x005079f7);
    /* 005079f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005079fa: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005079fe: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00507a02: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 00507a08: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00507a0b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00507a0f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00507a13: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00507a15: mov edx, dword ptr [eax + 0x17c] */ r_edx = R32((u32)(r_eax+0x17cu));
    /* 00507a1b: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00507a1f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00507a23: mov edx, dword ptr [eax + 0x180] */ r_edx = R32((u32)(r_eax+0x180u));
    /* 00507a29: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00507a2d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00507a2f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00507a33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00507a37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00507a3b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00507a3d: mov edx, dword ptr [eax + 0x184] */ r_edx = R32((u32)(r_eax+0x184u));
    /* 00507a43: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00507a47: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00507a4b: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 00507a51: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00507a55: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 00507a5b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00507a5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507a5f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00507a63: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00507a67: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00507a6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a6d: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00507a71: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00507a75: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00507a79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507a7b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00507a7f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00507a83: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00507a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00507a89: call 0x502604 */ r_esp -= 4; W32(r_esp, 0x507a8eu); f_00502604();
    /* 00507a8e: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00507a95: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507a9a: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00507a9f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507aa2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507aa3: ret  */ FN_RET(0x0050796f); r_esp += 4; return;
}

void f_00507aa4(void) /* sub_507AA4 */
{
    FN_ENTER(0x00507aa4);
    /* 00507aa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00507aa5: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00507aa9: mov ecx, 0xaae7ac */ r_ecx = 0xaae7acu;
    /* 00507aae: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00507ab4: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x507ab9u); f_007c1100();
    /* 00507ab9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507abb: je 0x507ac0 */ if (fZ) goto L_00507ac0;
L_00507abd:; BB(0x00507abd);
    /* 00507abd: add byte ptr [esi], 1 */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00507ac0:; BB(0x00507ac0);
    /* 00507ac0: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00507ac6: mov ecx, 0xaae7ac */ r_ecx = 0xaae7acu;
    /* 00507acb: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x507ad0u); f_007c1100();
    /* 00507ad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507ad2: je 0x507adc */ if (fZ) goto L_00507adc;
L_00507ad4:; BB(0x00507ad4);
    /* 00507ad4: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 00507ad7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00507ada: jmp 0x507adf */ goto L_00507adf;
L_00507adc:; BB(0x00507adc);
    /* 00507adc: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
L_00507adf:; BB(0x00507adf);
    /* 00507adf: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00507ae2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00507ae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00507ae6: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00507aeb: jg 0x507aef */ if ((!fZ&&fS==fO)) goto L_00507aef;
L_00507aed:; BB(0x00507aed);
    /* 00507aed: mov eax, edx */ r_eax = r_edx;
L_00507aef:; BB(0x00507aef);
    /* 00507aef: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00507af4: jl 0x507af8 */ if ((fS!=fO)) goto L_00507af8;
L_00507af6:; BB(0x00507af6);
    /* 00507af6: mov eax, ecx */ r_eax = r_ecx;
L_00507af8:; BB(0x00507af8);
    /* 00507af8: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00507afa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00507afb: ret 4 */ FN_RET(0x00507aa4); r_esp += 8; return;
}

void f_00507b00(void) /* sub_507B00 */
{
    FN_ENTER(0x00507b00);
    /* 00507b00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00507b01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00507b03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00507b05: call 0x507b24 */ r_esp -= 4; W32(r_esp, 0x507b0au); f_00507b24();
    /* 00507b0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00507b0e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00507b10: jne 0x507b16 */ if (!fZ) goto L_00507b16;
L_00507b12:; BB(0x00507b12);
    /* 00507b12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00507b13: ret 4 */ FN_RET(0x00507b00); r_esp += 8; return;
L_00507b16:; BB(0x00507b16);
    /* 00507b16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00507b17: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x507b1cu); f_005c2f74();
    /* 00507b1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00507b1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00507b1e: ret 4 */ FN_RET(0x00507b00); r_esp += 8; return;
}

void f_00507b24(void) /* sub_507B24 */
{
    FN_ENTER(0x00507b24);
    /* 00507b24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00507b25: mov ebp, esp */ r_ebp = r_esp;
    /* 00507b27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00507b29: push 0x8d3a60 */ { u32 v = 0x8d3a60u; r_esp -= 4; W32(r_esp, v); }
    /* 00507b2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00507b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507b35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00507b3c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507b3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00507b42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00507b45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00507b48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00507b4b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00507b4e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00507b51: mov dword ptr [ecx], 0xafef30 */ W32((u32)(r_ecx), 0xafef30u);
    /* 00507b57: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00507b5e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x507b63u); f_007ba1f0();
    /* 00507b63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00507b66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00507b6d: mov esp, ebp */ r_esp = r_ebp;
    /* 00507b6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507b70: ret  */ FN_RET(0x00507b24); r_esp += 4; return;
}

void f_00507b74(void) /* sub_507B74 */
{
    FN_ENTER(0x00507b74);
    /* 00507b74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00507b75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00507b77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00507b79: call 0x507b98 */ r_esp -= 4; W32(r_esp, 0x507b7eu); f_00507b98();
    /* 00507b7e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00507b82: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00507b84: jne 0x507b8a */ if (!fZ) goto L_00507b8a;
L_00507b86:; BB(0x00507b86);
    /* 00507b86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00507b87: ret 4 */ FN_RET(0x00507b74); r_esp += 8; return;
L_00507b8a:; BB(0x00507b8a);
    /* 00507b8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00507b8b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x507b90u); f_005c2f74();
    /* 00507b90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00507b91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00507b92: ret 4 */ FN_RET(0x00507b74); r_esp += 8; return;
}

void f_00507b98(void) /* sub_507B98 */
{
    FN_ENTER(0x00507b98);
    /* 00507b98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00507b99: mov ebp, esp */ r_ebp = r_esp;
    /* 00507b9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00507b9d: push 0x8d3a7c */ { u32 v = 0x8d3a7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00507ba2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00507ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507ba9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00507bb0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507bb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00507bb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00507bb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00507bbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00507bbf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00507bc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00507bc5: mov dword ptr [ecx], 0xafef5c */ W32((u32)(r_ecx), 0xafef5cu);
    /* 00507bcb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00507bd2: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x507bd7u); f_007ba1f0();
    /* 00507bd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00507bda: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00507be1: mov esp, ebp */ r_esp = r_ebp;
    /* 00507be3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507be4: ret  */ FN_RET(0x00507b98); r_esp += 4; return;
}

void f_00507be8(void) /* sub_507BE8 */
{
    FN_ENTER(0x00507be8);
    /* 00507be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00507be9: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507bec: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00507bee: fld dword ptr [0x920028] */ FPUSH(R_F32((u32)(0x920028u)));
    /* 00507bf4: mov eax, dword ptr [0x9ba8f0] */ r_eax = R32((u32)(0x9ba8f0u));
    /* 00507bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507bfb: je 0x507f06 */ if (fZ) goto L_00507f06;
L_00507c01:; BB(0x00507c01);
    /* 00507c01: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 00507c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507c09: je 0x507c13 */ if (fZ) goto L_00507c13;
L_00507c0b:; BB(0x00507c0b);
    /* 00507c0b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507c0d: fld dword ptr [0x920024] */ FPUSH(R_F32((u32)(0x920024u)));
L_00507c13:; BB(0x00507c13);
    /* 00507c13: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 00507c19: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507c1b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507c1d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507c1e: jae 0x507c52 */ if (!fC) goto L_00507c52;
L_00507c20:; BB(0x00507c20);
    /* 00507c20: fld dword ptr [0x920018] */ FPUSH(R_F32((u32)(0x920018u)));
    /* 00507c26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507c28: fld dword ptr [0x920014] */ FPUSH(R_F32((u32)(0x920014u)));
    /* 00507c2e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507c30: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507c32: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507c33: jbe 0x507c3b */ if ((fC||fZ)) goto L_00507c3b;
L_00507c35:; BB(0x00507c35);
    /* 00507c35: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00507c37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507c39: jmp 0x507c4a */ goto L_00507c4a;
L_00507c3b:; BB(0x00507c3b);
    /* 00507c3b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507c3d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507c3f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507c41: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507c42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507c44: jb 0x507c48 */ if (fC) goto L_00507c48;
L_00507c46:; BB(0x00507c46);
    /* 00507c46: fst st(1) */ ST(1) = ST(0);
L_00507c48:; BB(0x00507c48);
    /* 00507c48: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00507c4a:; BB(0x00507c4a);
    /* 00507c4a: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
    /* 00507c50: jmp 0x507c80 */ goto L_00507c80;
L_00507c52:; BB(0x00507c52);
    /* 00507c52: fld dword ptr [0x920020] */ FPUSH(R_F32((u32)(0x920020u)));
    /* 00507c58: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507c5a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507c5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507c5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507c5f: jae 0x507c65 */ if (!fC) goto L_00507c65;
L_00507c61:; BB(0x00507c61);
    /* 00507c61: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507c63: jmp 0x507c7a */ goto L_00507c7a;
L_00507c65:; BB(0x00507c65);
    /* 00507c65: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00507c67: fld dword ptr [0x92001c] */ FPUSH(R_F32((u32)(0x92001cu)));
    /* 00507c6d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507c6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507c71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507c72: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507c74: jbe 0x507c78 */ if ((fC||fZ)) goto L_00507c78;
L_00507c76:; BB(0x00507c76);
    /* 00507c76: fst st(1) */ ST(1) = ST(0);
L_00507c78:; BB(0x00507c78);
    /* 00507c78: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00507c7a:; BB(0x00507c7a);
    /* 00507c7a: fstp dword ptr [ebp + 0xa4] */ W_F32((u32)(r_ebp+0xa4u), ST(0)); FPOP();
L_00507c80:; BB(0x00507c80);
    /* 00507c80: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x507c85u); f_0082dbac();
    /* 00507c85: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x507c8au); f_0082f4d8();
    /* 00507c8a: fld dword ptr [0xacc0e8] */ FPUSH(R_F32((u32)(0xacc0e8u)));
    /* 00507c90: fld dword ptr [0xacc0ec] */ FPUSH(R_F32((u32)(0xacc0ecu)));
    /* 00507c96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507c98: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00507c9c: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00507ca0: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x507ca5u); f_0082f500();
    /* 00507ca5: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00507ca8: lea eax, [ebp + 0x9c] */ r_eax = (u32)(r_ebp+0x9cu);
    /* 00507cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507cb1: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x507cb6u); f_0082f09c();
    /* 00507cb6: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 00507cbc: fdiv dword ptr [esp + 0x3c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x3cu));
    /* 00507cc0: fld dword ptr [ebp + 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xa0u)));
    /* 00507cc6: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 00507cca: fld dword ptr [ebp + 0x94] */ FPUSH(R_F32((u32)(r_ebp+0x94u)));
    /* 00507cd0: fcomp dword ptr [0x920014] */ fx_compare(ST(0), R_F32((u32)(0x920014u))); FPOP();
    /* 00507cd6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507cd8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507cd9: jbe 0x507d1f */ if ((fC||fZ)) goto L_00507d1f;
L_00507cdb:; BB(0x00507cdb);
    /* 00507cdb: fld dword ptr [0x920010] */ FPUSH(R_F32((u32)(0x920010u)));
    /* 00507ce1: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00507ce3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507ce5: fld dword ptr [0x92000c] */ FPUSH(R_F32((u32)(0x92000cu)));
    /* 00507ceb: fld dword ptr [0x920008] */ FPUSH(R_F32((u32)(0x920008u)));
    /* 00507cf1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507cf2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507cf4: ja 0x507cf8 */ if ((!fC&&!fZ)) goto L_00507cf8;
L_00507cf6:; BB(0x00507cf6);
    /* 00507cf6: fst st(4) */ ST(4) = ST(0);
L_00507cf8:; BB(0x00507cf8);
    /* 00507cf8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507cfa: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00507cfc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507cfe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507cff: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507d01: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507d03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507d05: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507d07: jb 0x507d0b */ if (fC) goto L_00507d0b;
L_00507d09:; BB(0x00507d09);
    /* 00507d09: fst st(3) */ ST(3) = ST(0);
L_00507d0b:; BB(0x00507d0b);
    /* 00507d0b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507d0c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507d0e: jb 0x507d12 */ if (fC) goto L_00507d12;
L_00507d10:; BB(0x00507d10);
    /* 00507d10: fst st(2) */ ST(2) = ST(0);
L_00507d12:; BB(0x00507d12);
    /* 00507d12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507d14: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507d16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507d18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507d19: jb 0x507d1d */ if (fC) goto L_00507d1d;
L_00507d1b:; BB(0x00507d1b);
    /* 00507d1b: fst st(1) */ ST(1) = ST(0);
L_00507d1d:; BB(0x00507d1d);
    /* 00507d1d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00507d1f:; BB(0x00507d1f);
    /* 00507d1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507d21: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00507d25: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507d27: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00507d2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507d2d: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 00507d33: fstp dword ptr [ebp + 0xa0] */ W_F32((u32)(r_ebp+0xa0u), ST(0)); FPOP();
    /* 00507d39: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x507d3eu); f_007a902c();
    /* 00507d3e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00507d43: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x507d48u); f_0082bb30();
    /* 00507d48: mov ecx, dword ptr [0xa1069c] */ r_ecx = R32((u32)(0xa1069cu));
    /* 00507d4e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x507d53u); f_00829cc8();
    /* 00507d53: mov ecx, dword ptr [0xa106a0] */ r_ecx = R32((u32)(0xa106a0u));
    /* 00507d59: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00507d5e: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x507d63u); f_0082bb60();
    /* 00507d63: fld dword ptr [0x920014] */ FPUSH(R_F32((u32)(0x920014u)));
    /* 00507d69: fld dword ptr [ebp + 0x94] */ FPUSH(R_F32((u32)(r_ebp+0x94u)));
    /* 00507d6f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507d71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507d73: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00507d75: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507d76: jae 0x507d87 */ if (!fC) goto L_00507d87;
L_00507d78:; BB(0x00507d78);
    /* 00507d78: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507d7a: fld dword ptr [0x920004] */ FPUSH(R_F32((u32)(0x920004u)));
    /* 00507d80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507d82: jmp 0x507e1a */ goto L_00507e1a;
L_00507d87:; BB(0x00507d87);
    /* 00507d87: fld dword ptr [0x920004] */ FPUSH(R_F32((u32)(0x920004u)));
    /* 00507d8d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507d8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507d91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507d92: jb 0x507ded */ if (fC) goto L_00507ded;
L_00507d94:; BB(0x00507d94);
    /* 00507d94: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 00507d9a: fmul dword ptr [0x920000] */ ST(0) = ST(0) * R_F32((u32)(0x920000u));
    /* 00507da0: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00507da2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507da4: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00507da6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507da8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507da9: jae 0x507db5 */ if (!fC) goto L_00507db5;
L_00507dab:; BB(0x00507dab);
    /* 00507dab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507dad: fld dword ptr [0x920014] */ FPUSH(R_F32((u32)(0x920014u)));
    /* 00507db3: jmp 0x507dc6 */ goto L_00507dc6;
L_00507db5:; BB(0x00507db5);
    /* 00507db5: fld dword ptr [0x92001c] */ FPUSH(R_F32((u32)(0x92001cu)));
    /* 00507dbb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507dbd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507dbf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507dc0: ja 0x507dc4 */ if ((!fC&&!fZ)) goto L_00507dc4;
L_00507dc2:; BB(0x00507dc2);
    /* 00507dc2: fst st(1) */ ST(1) = ST(0);
L_00507dc4:; BB(0x00507dc4);
    /* 00507dc4: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00507dc6:; BB(0x00507dc6);
    /* 00507dc6: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00507dca: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00507dcf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507dd4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00507dd8: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00507ddc: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00507de0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00507de4: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00507de8: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00507deb: jmp 0x507e1a */ goto L_00507e1a;
L_00507ded:; BB(0x00507ded);
    /* 00507ded: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00507def: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 00507df5: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00507df9: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00507dfe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00507e03: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00507e07: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00507e0b: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 00507e0f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00507e13: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00507e17: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
L_00507e1a:; BB(0x00507e1a);
    /* 00507e1a: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 00507e1d: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00507e1f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507e21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507e23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507e25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507e26: jae 0x507e38 */ if (!fC) goto L_00507e38;
L_00507e28:; BB(0x00507e28);
    /* 00507e28: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00507e2a: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e30: or ecx, 0x808080 */ {  u32 a = r_ecx; u32 b = 0x808080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e36: jmp 0x507e71 */ goto L_00507e71;
L_00507e38:; BB(0x00507e38);
    /* 00507e38: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507e3a: fcomp dword ptr [0x91fffc] */ fx_compare(ST(0), R_F32((u32)(0x91fffcu))); FPOP();
    /* 00507e40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507e42: and ecx, 0xff00ffff */ {  u32 a = r_ecx; u32 b = 0xff00ffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507e49: jb 0x507e5f */ if (fC) goto L_00507e5f;
L_00507e4b:; BB(0x00507e4b);
    /* 00507e4b: or ecx, 0x550000 */ {  u32 a = r_ecx; u32 b = 0x550000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e51: and ecx, 0xffff0000 */ {  u32 a = r_ecx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e57: or ecx, 0x2300 */ {  u32 a = r_ecx; u32 b = 0x2300u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e5d: jmp 0x507e71 */ goto L_00507e71;
L_00507e5f:; BB(0x00507e5f);
    /* 00507e5f: or ecx, 0xff0000 */ {  u32 a = r_ecx; u32 b = 0xff0000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e65: and ecx, 0xffff0000 */ {  u32 a = r_ecx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00507e6b: or ecx, 0x8040 */ {  u32 a = r_ecx; u32 b = 0x8040u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_00507e71:; BB(0x00507e71);
    /* 00507e71: fmul dword ptr [ebp + 0x90] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x90u));
    /* 00507e77: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00507e7b: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 00507e81: fld dword ptr [ebp + 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xa0u)));
    /* 00507e87: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507e89: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00507e8b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00507e8d: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 00507e91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00507e93: fmul dword ptr [0xa106ac] */ ST(0) = ST(0) * R_F32((u32)(0xa106acu));
    /* 00507e99: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00507e9b: fmul dword ptr [0xa106b0] */ ST(0) = ST(0) * R_F32((u32)(0xa106b0u));
    /* 00507ea1: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 00507ea7: fld dword ptr [ebp + 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xa0u)));
    /* 00507ead: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507eaf: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 00507eb1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00507eb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00507eb6: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00507eb8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00507eba: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00507ebe: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00507ec0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00507ec4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00507ec6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00507eca: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00507ed2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00507ed4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00507ed8: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00507ee0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00507ee4: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x507ee9u); f_0082b438();
    /* 00507ee9: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00507eee: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00507ef2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x507ef7u); f_0082b440();
    /* 00507ef7: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x507efcu); f_004ac444();
    /* 00507efc: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x507f01u); f_0082dab0();
    /* 00507f01: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507f04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507f05: ret  */ FN_RET(0x00507be8); r_esp += 4; return;
L_00507f06:; BB(0x00507f06);
    /* 00507f06: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507f08: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00507f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00507f0c: ret  */ FN_RET(0x00507be8); r_esp += 4; return;
}

void f_00507f10(void) /* sub_507F10 */
{
    FN_ENTER(0x00507f10);
    /* 00507f10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00507f11: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00507f14: mov edi, ecx */ r_edi = r_ecx;
    /* 00507f16: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00507f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00507f1d: je 0x50805a */ if (fZ) goto L_0050805a;
L_00507f23:; BB(0x00507f23);
    /* 00507f23: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 00507f26: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 00507f2c: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00507f2f: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 00507f35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00507f37: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00507f3a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00507f3e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00507f46: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00507f49: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x507f4eu); f_0082def4();
    /* 00507f4e: fcomp dword ptr [0x91fff0] */ fx_compare(ST(0), R_F32((u32)(0x91fff0u))); FPOP();
    /* 00507f54: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507f56: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507f57: je 0x507f63 */ if (fZ) goto L_00507f63;
L_00507f59:; BB(0x00507f59);
    /* 00507f59: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00507f5c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x507f61u); f_0082df08();
    /* 00507f61: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00507f63:; BB(0x00507f63);
    /* 00507f63: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00507f68: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x507f6du); f_0082d990();
    /* 00507f6d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00507f72: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00507f78: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00507f80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507f82: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00507f8a: mov dword ptr [esp + 0x14], 0xbf800000 */ W32((u32)(r_esp+0x14u), 0xbf800000u);
    /* 00507f92: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x507f97u); f_0082d8bc();
    /* 00507f97: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00507f9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00507f9c: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00507fa0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00507fa2: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x507fa7u); f_0082eab8();
    /* 00507fa7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x507facu); f_0082da80();
    /* 00507fac: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00507fb0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00507fb3: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x507fb8u); f_0082f9e0();
    /* 00507fb8: fst dword ptr [edi + 0x94] */ W_F32((u32)(r_edi+0x94u), ST(0));
    /* 00507fbe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00507fbf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00507fc2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x507fc7u); f_0082e900();
    /* 00507fc7: fld dword ptr [0x91fff0] */ FPUSH(R_F32((u32)(0x91fff0u)));
    /* 00507fcd: fcom dword ptr [edi + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x94u))); 
    /* 00507fd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507fd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507fd6: jbe 0x507fdc */ if ((fC||fZ)) goto L_00507fdc;
L_00507fd8:; BB(0x00507fd8);
    /* 00507fd8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00507fda: jmp 0x508000 */ goto L_00508000;
L_00507fdc:; BB(0x00507fdc);
    /* 00507fdc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00507fde: fld dword ptr [0x91ffec] */ FPUSH(R_F32((u32)(0x91ffecu)));
    /* 00507fe4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00507fe6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00507fe7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00507fea: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x507fefu); f_0082e900();
    /* 00507fef: fld dword ptr [0x91ffe8] */ FPUSH(R_F32((u32)(0x91ffe8u)));
    /* 00507ff5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00507ff7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00507ff9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00507ffa: jae 0x507ffe */ if (!fC) goto L_00507ffe;
L_00507ffc:; BB(0x00507ffc);
    /* 00507ffc: fst st(1) */ ST(1) = ST(0);
L_00507ffe:; BB(0x00507ffe);
    /* 00507ffe: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00508000:; BB(0x00508000);
    /* 00508000: fmul dword ptr [0x91ffe0] */ ST(0) = ST(0) * R_F32((u32)(0x91ffe0u));
    /* 00508006: fadd dword ptr [0x91ffe4] */ ST(0) = ST(0) + R_F32((u32)(0x91ffe4u));
    /* 0050800c: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00508012: fstp dword ptr [edi + 0x90] */ W_F32((u32)(r_edi+0x90u), ST(0)); FPOP();
    /* 00508018: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 0050801e: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 00508024: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00508028: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 0050802e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00508032: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00508036: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0050803a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0050803f: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00508042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00508043: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00508044: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x508049u); f_0077fffc();
    /* 00508049: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050804c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050804e: je 0x50805f */ if (fZ) goto L_0050805f;
L_00508050:; BB(0x00508050);
    /* 00508050: mov dword ptr [edi + 0x98], 1 */ W32((u32)(r_edi+0x98u), 0x1u);
L_0050805a:; BB(0x0050805a);
    /* 0050805a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050805d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050805e: ret  */ FN_RET(0x00507f10); r_esp += 4; return;
L_0050805f:; BB(0x0050805f);
    /* 0050805f: mov dword ptr [edi + 0x98], 0 */ W32((u32)(r_edi+0x98u), 0x0u);
    /* 00508069: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050806c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050806d: ret  */ FN_RET(0x00507f10); r_esp += 4; return;
}

