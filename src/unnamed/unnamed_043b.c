#include "protos.h"

void f_0043b0f8(void) /* sub_43B0F8 */
{
    FN_ENTER(0x0043b0f8);
    /* 0043b0f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043b0f9: mov ebp, esp */ r_ebp = r_esp;
    /* 0043b0fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b0fd: push 0x8ce27e */ { u32 v = 0x8ce27eu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b102: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043b108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b109: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043b110: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043b113: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043b116: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0043b119: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0043b11c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0043b11f: mov eax, dword ptr [ecx + 0x5c] */ r_eax = R32((u32)(r_ecx+0x5cu));
    /* 0043b122: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043b125: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b128: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b12b: jl 0x43b138 */ if ((fS!=fO)) goto L_0043b138;
L_0043b12d:; BB(0x0043b12d);
    /* 0043b12d: mov eax, ecx */ r_eax = r_ecx;
    /* 0043b12f: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 0043b136: jmp 0x43b13d */ goto L_0043b13d;
L_0043b138:; BB(0x0043b138);
    /* 0043b138: mov edx, ecx */ r_edx = r_ecx;
    /* 0043b13a: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
L_0043b13d:; BB(0x0043b13d);
    /* 0043b13d: mov edx, ecx */ r_edx = r_ecx;
    /* 0043b13f: fild dword ptr [edx + 0x9c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x9cu)));
    /* 0043b145: fadd dword ptr [0x8fdb0c] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb0cu));
    /* 0043b14b: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b14e: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b152: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b157: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b15a: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b15d: fistp dword ptr [edx + 0x9c] */ W32((u32)(r_edx+0x9cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b163: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b166: fild dword ptr [edx + 0xa4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0xa4u)));
    /* 0043b16c: fadd dword ptr [0x8fdb08] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb08u));
    /* 0043b172: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b175: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b179: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b17e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b181: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b184: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b187: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b18a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b18d: mov dword ptr [edx + 0xa4], ecx */ W32((u32)(r_edx+0xa4u), r_ecx);
    /* 0043b193: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x43b198u); f_0082dcbc();
    /* 0043b198: fmul dword ptr [0x8fdb64] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb64u));
    /* 0043b19e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b1a1: mov ecx, dword ptr [edx + 0x9c] */ r_ecx = R32((u32)(r_edx+0x9cu));
    /* 0043b1a7: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b1aa: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b1ae: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b1b3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b1b6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b1b9: fistp dword ptr [edx + 0xa0] */ W32((u32)(r_edx+0xa0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b1bf: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b1c2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x43b1c7u); f_0082dcbc();
    /* 0043b1c7: fmul dword ptr [0x8fdb00] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb00u));
    /* 0043b1cd: fadd dword ptr [0x8fdb04] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb04u));
    /* 0043b1d3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b1d6: fstp dword ptr [ecx + 0xac] */ W_F32((u32)(r_ecx+0xacu), ST(0)); FPOP();
    /* 0043b1dc: call 0x43be80 */ r_esp -= 4; W32(r_esp, 0x43b1e1u); f_0043be80();
    /* 0043b1e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b1e4: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 0043b1ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b1ec: je 0x43b207 */ if (fZ) goto L_0043b207;
L_0043b1ee:; BB(0x0043b1ee);
    /* 0043b1ee: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0043b1f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b1f5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0043b1f7: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0043b1fa: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043b1fc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b1ff: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 0043b205: jmp 0x43b219 */ goto L_0043b219;
L_0043b207:; BB(0x0043b207);
    /* 0043b207: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b20a: mov eax, ecx */ r_eax = r_ecx;
    /* 0043b20c: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0043b20f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b211: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0043b213: mov dword ptr [edx + 0xa8], ecx */ W32((u32)(r_edx+0xa8u), r_ecx);
L_0043b219:; BB(0x0043b219);
    /* 0043b219: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b21c: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0043b21f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b221: je 0x43bdcf */ if (fZ) goto L_0043bdcf;
L_0043b227:; BB(0x0043b227);
    /* 0043b227: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b22a: je 0x43b298 */ if (fZ) goto L_0043b298;
L_0043b22c:; BB(0x0043b22c);
    /* 0043b22c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b22f: jne 0x43b246 */ if (!fZ) goto L_0043b246;
L_0043b231:; BB(0x0043b231);
    /* 0043b231: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b234: call 0x43be80 */ r_esp -= 4; W32(r_esp, 0x43b239u); f_0043be80();
    /* 0043b239: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b23b: je 0x43b98a */ if (fZ) goto L_0043b98a;
L_0043b241:; BB(0x0043b241);
    /* 0043b241: jmp 0x43b32e */ goto L_0043b32e;
L_0043b246:; BB(0x0043b246);
    /* 0043b246: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b249: jne 0x43b32e */ if (!fZ) goto L_0043b32e;
L_0043b24f:; BB(0x0043b24f);
    /* 0043b24f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b252: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 0043b255: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b256: lea ecx, [eax + 0x68] */ r_ecx = (u32)(r_eax+0x68u);
    /* 0043b259: call 0x783168 */ r_esp -= 4; W32(r_esp, 0x43b25eu); f_00783168();
    /* 0043b25e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b260: je 0x43b27b */ if (fZ) goto L_0043b27b;
L_0043b262:; BB(0x0043b262);
    /* 0043b262: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b265: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 0043b26f: mov dword ptr [eax + 0x64], 0 */ W32((u32)(r_eax+0x64u), 0x0u);
    /* 0043b276: jmp 0x43b32e */ goto L_0043b32e;
L_0043b27b:; BB(0x0043b27b);
    /* 0043b27b: fld dword ptr [0x8fdafc] */ FPUSH(R_F32((u32)(0x8fdafcu)));
    /* 0043b281: fsub dword ptr [ebp - 0x64] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffff9cu));
    /* 0043b284: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b287: fmul dword ptr [eax + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x94u));
    /* 0043b28d: fstp dword ptr [eax + 0x98] */ W_F32((u32)(r_eax+0x98u), ST(0)); FPOP();
    /* 0043b293: jmp 0x43b32e */ goto L_0043b32e;
L_0043b298:; BB(0x0043b298);
    /* 0043b298: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b29b: call 0x43be80 */ r_esp -= 4; W32(r_esp, 0x43b2a0u); f_0043be80();
    /* 0043b2a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b2a2: jne 0x43b2ff */ if (!fZ) goto L_0043b2ff;
L_0043b2a4:; BB(0x0043b2a4);
    /* 0043b2a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b2a7: push dword ptr [eax + 0x98] */ { u32 v = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b2ad: mov dword ptr [eax + 0x64], 3 */ W32((u32)(r_eax+0x64u), 0x3u);
    /* 0043b2b4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x43b2b9u); f_0082e900();
    /* 0043b2b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b2bc: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 0043b2bf: lea ebx, [eax + 0x68] */ r_ebx = (u32)(r_eax+0x68u);
    /* 0043b2c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043b2c4: call 0x7830fc */ r_esp -= 4; W32(r_esp, 0x43b2c9u); f_007830fc();
    /* 0043b2c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b2cc: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 0043b2d2: fchs  */ ST(0) = -ST(0);
    /* 0043b2d4: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b2d7: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0043b2db: mov dword ptr [esp], 0x3dcccccd */ W32((u32)(r_esp), 0x3dcccccdu);
    /* 0043b2e2: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0043b2e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043b2e8: mov dword ptr [esp + 4], 0xbdcccccd */ W32((u32)(r_esp+0x4u), 0xbdcccccdu);
    /* 0043b2f0: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 0043b2f8: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x43b2fdu); f_00783244();
    /* 0043b2fd: jmp 0x43b32e */ goto L_0043b32e;
L_0043b2ff:; BB(0x0043b2ff);
    /* 0043b2ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b302: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 0043b305: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b306: lea ecx, [eax + 0x68] */ r_ecx = (u32)(r_eax+0x68u);
    /* 0043b309: call 0x783168 */ r_esp -= 4; W32(r_esp, 0x43b30eu); f_00783168();
    /* 0043b30e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b310: je 0x43b31c */ if (fZ) goto L_0043b31c;
L_0043b312:; BB(0x0043b312);
    /* 0043b312: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b315: mov dword ptr [eax + 0x64], 2 */ W32((u32)(r_eax+0x64u), 0x2u);
L_0043b31c:; BB(0x0043b31c);
    /* 0043b31c: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 0043b31f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b322: fmul dword ptr [eax + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x94u));
    /* 0043b328: fstp dword ptr [eax + 0x98] */ W_F32((u32)(r_eax+0x98u), ST(0)); FPOP();
L_0043b32e:; BB(0x0043b32e);
    /* 0043b32e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b331: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043b334: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b336: je 0x43bd95 */ if (fZ) goto L_0043bd95;
L_0043b33c:; BB(0x0043b33c);
    /* 0043b33c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b33f: je 0x43bbd5 */ if (fZ) goto L_0043bbd5;
L_0043b345:; BB(0x0043b345);
    /* 0043b345: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b348: je 0x43b4dd */ if (fZ) goto L_0043b4dd;
L_0043b34e:; BB(0x0043b34e);
    /* 0043b34e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b351: jne 0x43b65e */ if (!fZ) goto L_0043b65e;
L_0043b357:; BB(0x0043b357);
    /* 0043b357: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b359: fild dword ptr [ecx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x48u)));
    /* 0043b35c: fcom dword ptr [0x8fdb60] */ fx_compare(ST(0), R_F32((u32)(0x8fdb60u))); 
    /* 0043b362: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b364: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 0043b367: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043b36a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b36b: ja 0x43b3d1 */ if ((!fC&&!fZ)) goto L_0043b3d1;
L_0043b36d:; BB(0x0043b36d);
    /* 0043b36d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b36f: mov edx, ecx */ r_edx = r_ecx;
    /* 0043b371: fld dword ptr [edx + 0x54] */ FPUSH(R_F32((u32)(r_edx+0x54u)));
    /* 0043b374: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0043b377: fcom dword ptr [edx + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x50u))); 
    /* 0043b37a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b37c: fst dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0));
    /* 0043b37f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b380: jbe 0x43b3ae */ if ((fC||fZ)) goto L_0043b3ae;
L_0043b382:; BB(0x0043b382);
    /* 0043b382: mov eax, edx */ r_eax = r_edx;
    /* 0043b384: fstp dword ptr [eax + 0x50] */ W_F32((u32)(r_eax+0x50u), ST(0)); FPOP();
    /* 0043b387: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b38a: mov dword ptr [eax + 0x48], 1 */ W32((u32)(r_eax+0x48u), 0x1u);
    /* 0043b391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b392: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b393: push 0x335 */ { u32 v = 0x335u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b398: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43b39du); f_00814298();
    /* 0043b39d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b3a3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043b3a6: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0043b3a9: jmp 0x43b457 */ goto L_0043b457;
L_0043b3ae:; BB(0x0043b3ae);
    /* 0043b3ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b3b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b3b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b6: push 0x333 */ { u32 v = 0x333u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3bb: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43b3c0u); f_008144b0();
    /* 0043b3c0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b3c6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043b3c9: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0043b3cc: jmp 0x43b457 */ goto L_0043b457;
L_0043b3d1:; BB(0x0043b3d1);
    /* 0043b3d1: fld dword ptr [0x8fdb40] */ FPUSH(R_F32((u32)(0x8fdb40u)));
    /* 0043b3d7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043b3d9: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 0043b3dc: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0043b3de: fdiv dword ptr [0x8fdaf8] */ ST(0) = ST(0) / R_F32((u32)(0x8fdaf8u));
    /* 0043b3e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b3e6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043b3e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b3ea: fadd dword ptr [0x8fdb4c] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb4cu));
    /* 0043b3f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b3f2: fadd dword ptr [ecx + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x50u));
    /* 0043b3f5: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 0043b3f8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b3fa: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b3fd: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b401: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b406: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b409: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b40c: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b40f: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b412: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0043b415: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0043b417: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b419: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b41c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b41d: jb 0x43b44f */ if (fC) goto L_0043b44f;
L_0043b41f:; BB(0x0043b41f);
    /* 0043b41f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b422: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b425: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b429: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b42e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b431: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b434: fistp dword ptr [ecx + 0x48] */ W32((u32)(r_ecx+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b437: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b43a: mov edx, 4 */ r_edx = 0x4u;
    /* 0043b43f: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 0043b446: mov dword ptr [ecx + 0x24], 4 */ W32((u32)(r_ecx+0x24u), 0x4u);
    /* 0043b44d: jmp 0x43b457 */ goto L_0043b457;
L_0043b44f:; BB(0x0043b44f);
    /* 0043b44f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b451: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b454: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
L_0043b457:; BB(0x0043b457);
    /* 0043b457: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0043b459: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0043b45c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0043b45e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b461: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0043b464: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b466: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0043b469: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0043b46c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0043b46e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b470: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b473: je 0x43b9b7 */ if (fZ) goto L_0043b9b7;
L_0043b479:; BB(0x0043b479);
    /* 0043b479: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0043b47c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b47f: je 0x43b9b7 */ if (fZ) goto L_0043b9b7;
L_0043b485:; BB(0x0043b485);
    /* 0043b485: fld dword ptr [0x8fdaf4] */ FPUSH(R_F32((u32)(0x8fdaf4u)));
    /* 0043b48b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b48d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b48f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b490: ja 0x43b4d0 */ if ((!fC&&!fZ)) goto L_0043b4d0;
L_0043b492:; BB(0x0043b492);
    /* 0043b492: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043b494: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b497: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
L_0043b49a:; BB(0x0043b49a);
    /* 0043b49a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0043b49d: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 0043b4a0: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0043b4a3: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 0043b4a6: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0043b4a9: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0043b4ac: mov dword ptr [eax + 0x30], ebx */ W32((u32)(r_eax+0x30u), r_ebx);
    /* 0043b4af: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 0043b4b2: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 0043b4b5: mov dword ptr [eax + 0x38], edi */ W32((u32)(r_eax+0x38u), r_edi);
    /* 0043b4b8: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0043b4bb: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 0043b4be: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0043b4c1: mov ecx, dword ptr [ebx*4 + 0x9a4b8c] */ r_ecx = R32((u32)(r_ebx*4+0x9a4b8cu));
    /* 0043b4c8: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0043b4cb: jmp 0x43b65e */ goto L_0043b65e;
L_0043b4d0:; BB(0x0043b4d0);
    /* 0043b4d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b4d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b4d5: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b4d8: jmp 0x43b65e */ goto L_0043b65e;
L_0043b4dd:; BB(0x0043b4dd);
    /* 0043b4dd: fld dword ptr [0x8fdaf0] */ FPUSH(R_F32((u32)(0x8fdaf0u)));
    /* 0043b4e3: mov edx, eax */ r_edx = r_eax;
    /* 0043b4e5: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 0043b4e8: fcom dword ptr [0x8fda58] */ fx_compare(ST(0), R_F32((u32)(0x8fda58u))); 
    /* 0043b4ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b4f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b4f1: jbe 0x43b505 */ if ((fC||fZ)) goto L_0043b505;
L_0043b4f3:; BB(0x0043b4f3);
    /* 0043b4f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b4f5: fld dword ptr [0x8fda58] */ FPUSH(R_F32((u32)(0x8fda58u)));
    /* 0043b4fb: mov eax, dword ptr [0x8fda58] */ r_eax = R32((u32)(0x8fda58u));
    /* 0043b500: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0043b503: jmp 0x43b50a */ goto L_0043b50a;
L_0043b505:; BB(0x0043b505);
    /* 0043b505: mov eax, edx */ r_eax = r_edx;
    /* 0043b507: fst dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0));
L_0043b50a:; BB(0x0043b50a);
    /* 0043b50a: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 0043b50d: fld dword ptr [0x8fdaf4] */ FPUSH(R_F32((u32)(0x8fdaf4u)));
    /* 0043b513: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b515: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b517: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b518: ja 0x43b5b3 */ if ((!fC&&!fZ)) goto L_0043b5b3;
L_0043b51e:; BB(0x0043b51e);
    /* 0043b51e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043b520: mov eax, edx */ r_eax = r_edx;
    /* 0043b522: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0043b525: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b528: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043b52b: cmp esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b52e: jl 0x43b53b */ if ((fS!=fO)) goto L_0043b53b;
L_0043b530:; BB(0x0043b530);
    /* 0043b530: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0043b537: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0043b539: jmp 0x43b53e */ goto L_0043b53e;
L_0043b53b:; BB(0x0043b53b);
    /* 0043b53b: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
L_0043b53e:; BB(0x0043b53e);
    /* 0043b53e: lea eax, [esi + 6] */ r_eax = (u32)(r_esi+0x6u);
    /* 0043b541: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b544: jle 0x43b54f */ if ((fZ||fS!=fO)) goto L_0043b54f;
L_0043b546:; BB(0x0043b546);
    /* 0043b546: mov ecx, esi */ r_ecx = r_esi;
    /* 0043b548: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b54a: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b54d: jmp 0x43b554 */ goto L_0043b554;
L_0043b54f:; BB(0x0043b54f);
    /* 0043b54f: mov ecx, 6 */ r_ecx = 0x6u;
L_0043b554:; BB(0x0043b554);
    /* 0043b554: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b556: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043b558: jle 0x43b9f6 */ if ((fZ||fS!=fO)) goto L_0043b9f6;
L_0043b55e:; BB(0x0043b55e);
    /* 0043b55e: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b561: jl 0x43b9de */ if ((fS!=fO)) goto L_0043b9de;
L_0043b567:; BB(0x0043b567);
    /* 0043b567: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_0043b56a:; BB(0x0043b56a);
    /* 0043b56a: mov edi, dword ptr [esi*4 + 0x9a4a40] */ r_edi = R32((u32)(r_esi*4+0x9a4a40u));
    /* 0043b571: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b574: mov dword ptr [edx + eax*4 + 0x2c], edi */ W32((u32)(r_edx+r_eax*4+0x2cu), r_edi);
    /* 0043b578: mov edi, dword ptr [esi*4 + 0x9a4a44] */ r_edi = R32((u32)(r_esi*4+0x9a4a44u));
    /* 0043b57f: mov dword ptr [edx + eax*4 + 0x30], edi */ W32((u32)(r_edx+r_eax*4+0x30u), r_edi);
    /* 0043b583: mov edi, dword ptr [esi*4 + 0x9a4a48] */ r_edi = R32((u32)(r_esi*4+0x9a4a48u));
    /* 0043b58a: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043b58e: mov edi, dword ptr [esi*4 + 0x9a4a4c] */ r_edi = R32((u32)(r_esi*4+0x9a4a4cu));
    /* 0043b595: mov dword ptr [edx + eax*4 + 0x38], edi */ W32((u32)(r_edx+r_eax*4+0x38u), r_edi);
    /* 0043b599: mov edi, dword ptr [esi*4 + 0x9a4a50] */ r_edi = R32((u32)(r_esi*4+0x9a4a50u));
    /* 0043b5a0: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043b5a3: mov dword ptr [edx + eax*4 + 0x3c], edi */ W32((u32)(r_edx+r_eax*4+0x3cu), r_edi);
    /* 0043b5a7: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b5aa: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b5ac: jle 0x43b56a */ if ((fZ||fS!=fO)) goto L_0043b56a;
L_0043b5ae:; BB(0x0043b5ae);
    /* 0043b5ae: jmp 0x43b9de */ goto L_0043b9de;
L_0043b5b3:; BB(0x0043b5b3);
    /* 0043b5b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b5b5: mov eax, edx */ r_eax = r_edx;
    /* 0043b5b7: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
L_0043b5ba:; BB(0x0043b5ba);
    /* 0043b5ba: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b5bf: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b5c4: je 0x43b641 */ if (fZ) goto L_0043b641;
L_0043b5c6:; BB(0x0043b5c6);
    /* 0043b5c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b5c9: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0043b5cc: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0043b5cf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0043b5d1: fmul dword ptr [0x8fdb34] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb34u));
    /* 0043b5d7: fdiv dword ptr [0x8fdb30] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb30u));
    /* 0043b5dd: fadd dword ptr [0x8fdb38] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb38u));
    /* 0043b5e3: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b5e8: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 0043b5eb: mov dword ptr [ecx + 0x24], 3 */ W32((u32)(r_ecx+0x24u), 0x3u);
    /* 0043b5f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043b5f4: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043b5f9: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0043b5fc: mov dword ptr [ebp - 0x60], ebx */ W32((u32)(r_ebp+0xffffffa0u), r_ebx);
    /* 0043b5ff: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0043b602: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b604: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0043b607: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0043b60a: mov dword ptr [ecx + 0x48], ebx */ W32((u32)(r_ecx+0x48u), r_ebx);
    /* 0043b60d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43b612u); f_005caba4();
    /* 0043b612: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043b613: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0043b616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b618: je 0x43b63a */ if (fZ) goto L_0043b63a;
L_0043b61a:; BB(0x0043b61a);
    /* 0043b61a: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0043b621: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b628: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b62b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b62c: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b62e: call 0x43beac */ r_esp -= 4; W32(r_esp, 0x43b633u); f_0043beac();
    /* 0043b633: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0043b63a:; BB(0x0043b63a);
    /* 0043b63a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0043b641:; BB(0x0043b641);
    /* 0043b641: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b644: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0043b64a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b64d: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 0043b653: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043b655: jle 0x43bb30 */ if ((fZ||fS!=fO)) goto L_0043bb30;
L_0043b65b:; BB(0x0043b65b);
    /* 0043b65b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
L_0043b65e:; BB(0x0043b65e);
    /* 0043b65e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b661: je 0x43bb15 */ if (fZ) goto L_0043bb15;
L_0043b667:; BB(0x0043b667);
    /* 0043b667: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b66a: je 0x43bb15 */ if (fZ) goto L_0043bb15;
L_0043b670:; BB(0x0043b670);
    /* 0043b670: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b673: fld dword ptr [0x8fda58] */ FPUSH(R_F32((u32)(0x8fda58u)));
    /* 0043b679: fld dword ptr [0x8fdb14] */ FPUSH(R_F32((u32)(0x8fdb14u)));
    /* 0043b67f: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0043b682: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0043b684: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b686: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b688: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043b68b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b68c: jae 0x43b69a */ if (!fC) goto L_0043b69a;
L_0043b68e:; BB(0x0043b68e);
    /* 0043b68e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0043b690: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0043b693: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043b695: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043b698: jmp 0x43b69e */ goto L_0043b69e;
L_0043b69a:; BB(0x0043b69a);
    /* 0043b69a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043b69c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0043b69e:; BB(0x0043b69e);
    /* 0043b69e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0043b6a0:; BB(0x0043b6a0);
    /* 0043b6a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b6a3: mov eax, dword ptr [eax + edi*4 + 0xc8] */ r_eax = R32((u32)(r_eax+r_edi*4+0xc8u));
    /* 0043b6aa: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0043b6ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b6af: je 0x43bad6 */ if (fZ) goto L_0043bad6;
L_0043b6b5:; BB(0x0043b6b5);
    /* 0043b6b5: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0043b6b8: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b6bb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043b6bf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043b6c2: call 0x43aa84 */ r_esp -= 4; W32(r_esp, 0x43b6c7u); f_0043aa84();
    /* 0043b6c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043b6ca:; BB(0x0043b6ca);
    /* 0043b6ca: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043b6cd: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b6d0: jl 0x43b6a0 */ if ((fS!=fO)) goto L_0043b6a0;
L_0043b6d2:; BB(0x0043b6d2);
    /* 0043b6d2: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b6d7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b6d9: je 0x43b6e8 */ if (fZ) goto L_0043b6e8;
L_0043b6db:; BB(0x0043b6db);
    /* 0043b6db: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6de: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6e1: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043b6e6: jmp 0x43b6f4 */ goto L_0043b6f4;
L_0043b6e8:; BB(0x0043b6e8);
    /* 0043b6e8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b6ea: je 0x43b6f4 */ if (fZ) goto L_0043b6f4;
L_0043b6ec:; BB(0x0043b6ec);
    /* 0043b6ec: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6ef: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
L_0043b6f4:; BB(0x0043b6f4);
    /* 0043b6f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b6f7: mov edx, dword ptr [edx + 0xb4] */ r_edx = R32((u32)(r_edx+0xb4u));
    /* 0043b6fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b6ff: je 0x43ba97 */ if (fZ) goto L_0043ba97;
L_0043b705:; BB(0x0043b705);
    /* 0043b705: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b708: je 0x43b7ec */ if (fZ) goto L_0043b7ec;
L_0043b70e:; BB(0x0043b70e);
    /* 0043b70e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b711: jne 0x43b752 */ if (!fZ) goto L_0043b752;
L_0043b713:; BB(0x0043b713);
    /* 0043b713: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b718: je 0x43b872 */ if (fZ) goto L_0043b872;
L_0043b71e:; BB(0x0043b71e);
    /* 0043b71e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b721: mov dword ptr [ecx + 0xb4], 3 */ W32((u32)(r_ecx+0xb4u), 0x3u);
    /* 0043b72b: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b730: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043b735: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b737: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0043b73d: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0043b743: call 0x43be44 */ r_esp -= 4; W32(r_esp, 0x43b748u); f_0043be44();
    /* 0043b748: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b74d: jmp 0x43b872 */ goto L_0043b872;
L_0043b752:; BB(0x0043b752);
    /* 0043b752: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b755: jne 0x43b872 */ if (!fZ) goto L_0043b872;
L_0043b75b:; BB(0x0043b75b);
    /* 0043b75b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b75e: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0043b764: mov edx, dword ptr [edx + 0xbc] */ r_edx = R32((u32)(r_edx+0xbcu));
    /* 0043b76a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b76d: cmp ecx, dword ptr [edx*4 + 0x9a4b08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0x9a4b08u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b774: jl 0x43b7de */ if ((fS!=fO)) goto L_0043b7de;
L_0043b776:; BB(0x0043b776);
    /* 0043b776: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b779: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0043b783: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b786: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 0043b78c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b78f: je 0x43b7a2 */ if (fZ) goto L_0043b7a2;
L_0043b791:; BB(0x0043b791);
    /* 0043b791: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b793: call 0x43be64 */ r_esp -= 4; W32(r_esp, 0x43b798u); f_0043be64();
    /* 0043b798: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b79d: jmp 0x43b872 */ goto L_0043b872;
L_0043b7a2:; BB(0x0043b7a2);
    /* 0043b7a2: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b7a4: call 0x43be44 */ r_esp -= 4; W32(r_esp, 0x43b7a9u); f_0043be44();
    /* 0043b7a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ae: push 0x332 */ { u32 v = 0x332u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7b3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43b7b8u); f_00814298();
    /* 0043b7b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b7bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b7be: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0043b7c4: mov ecx, dword ptr [edx*4 + 0x9a4b08] */ r_ecx = R32((u32)(r_edx*4+0x9a4b08u));
    /* 0043b7cb: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7ce: je 0x43ba6f */ if (fZ) goto L_0043ba6f;
L_0043b7d4:; BB(0x0043b7d4);
    /* 0043b7d4: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b7d9: jmp 0x43b872 */ goto L_0043b872;
L_0043b7de:; BB(0x0043b7de);
    /* 0043b7de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b7e1: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
    /* 0043b7e7: jmp 0x43b872 */ goto L_0043b872;
L_0043b7ec:; BB(0x0043b7ec);
    /* 0043b7ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b7ef: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0043b7f5: mov edx, dword ptr [edx + 0xbc] */ r_edx = R32((u32)(r_edx+0xbcu));
    /* 0043b7fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b7fe: cmp ecx, dword ptr [edx*4 + 0x9a4b08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0x9a4b08u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b805: jl 0x43b869 */ if ((fS!=fO)) goto L_0043b869;
L_0043b807:; BB(0x0043b807);
    /* 0043b807: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b80a: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0043b814: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b817: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 0043b81d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b820: je 0x43b830 */ if (fZ) goto L_0043b830;
L_0043b822:; BB(0x0043b822);
    /* 0043b822: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b824: call 0x43be44 */ r_esp -= 4; W32(r_esp, 0x43b829u); f_0043be44();
    /* 0043b829: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b82e: jmp 0x43b872 */ goto L_0043b872;
L_0043b830:; BB(0x0043b830);
    /* 0043b830: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b832: call 0x43be64 */ r_esp -= 4; W32(r_esp, 0x43b837u); f_0043be64();
    /* 0043b837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b83b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b83c: push 0x332 */ { u32 v = 0x332u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b841: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43b846u); f_00814298();
    /* 0043b846: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b849: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b84c: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0043b852: mov ecx, dword ptr [edx*4 + 0x9a4b08] */ r_ecx = R32((u32)(r_edx*4+0x9a4b08u));
    /* 0043b859: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b85c: je 0x43ba83 */ if (fZ) goto L_0043ba83;
L_0043b862:; BB(0x0043b862);
    /* 0043b862: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b867: jmp 0x43b872 */ goto L_0043b872;
L_0043b869:; BB(0x0043b869);
    /* 0043b869: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b86c: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
L_0043b872:; BB(0x0043b872);
    /* 0043b872: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b874: je 0x43b895 */ if (fZ) goto L_0043b895;
L_0043b876:; BB(0x0043b876);
    /* 0043b876: push dword ptr [0x9a4b04] */ { u32 v = R32((u32)(0x9a4b04u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b87c: push dword ptr [0x9a4b00] */ { u32 v = R32((u32)(0x9a4b00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b882: push dword ptr [0x9a4afc] */ { u32 v = R32((u32)(0x9a4afcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b888: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b88du); f_00793f28();
    /* 0043b88d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043b890: jmp 0x43b973 */ goto L_0043b973;
L_0043b895:; BB(0x0043b895);
    /* 0043b895: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b898: fld dword ptr [0x8fdaec] */ FPUSH(R_F32((u32)(0x8fdaecu)));
    /* 0043b89e: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 0043b8a1: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0043b8a4: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0043b8a7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b8a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b8ab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043b8ad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b8af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b8b0: jbe 0x43b952 */ if ((fC||fZ)) goto L_0043b952;
L_0043b8b6:; BB(0x0043b8b6);
    /* 0043b8b6: fcom dword ptr [0x8fdb10] */ fx_compare(ST(0), R_F32((u32)(0x8fdb10u))); 
    /* 0043b8bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b8be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b8bf: ja 0x43b92f */ if ((!fC&&!fZ)) goto L_0043b92f;
L_0043b8c1:; BB(0x0043b8c1);
    /* 0043b8c1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0043b8c3: fdiv dword ptr [0x8fdb24] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb24u));
    /* 0043b8c9: fld dword ptr [0x8fdb4c] */ FPUSH(R_F32((u32)(0x8fdb4cu)));
    /* 0043b8cf: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0043b8d1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8d4: fld dword ptr [ecx*8 + 0x9a49c4] */ FPUSH(R_F32((u32)(r_ecx*8+0x9a49c4u)));
    /* 0043b8db: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043b8dd: fld dword ptr [ebx*8 + 0x9a49c4] */ FPUSH(R_F32((u32)(r_ebx*8+0x9a49c4u)));
    /* 0043b8e4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043b8e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b8e8: fld dword ptr [ecx*8 + 0x9a49c8] */ FPUSH(R_F32((u32)(r_ecx*8+0x9a49c8u)));
    /* 0043b8ef: fld dword ptr [ebx*8 + 0x9a49c8] */ FPUSH(R_F32((u32)(r_ebx*8+0x9a49c8u)));
    /* 0043b8f6: fld dword ptr [ecx*8 + 0x9a49cc] */ FPUSH(R_F32((u32)(r_ecx*8+0x9a49ccu)));
    /* 0043b8fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b8ff: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0043b901: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b903: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0043b905: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0043b907: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0043b909: fld dword ptr [ebx*8 + 0x9a49cc] */ FPUSH(R_F32((u32)(r_ebx*8+0x9a49ccu)));
    /* 0043b910: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0043b912: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b914: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043b917: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0043b919: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b91b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043b91f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b921: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0043b925: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b92au); f_00793f28();
    /* 0043b92a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043b92d: jmp 0x43b973 */ goto L_0043b973;
L_0043b92f:; BB(0x0043b92f);
    /* 0043b92f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043b931: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b933: push dword ptr [ecx*8 + 0x9a49cc] */ { u32 v = R32((u32)(r_ecx*8+0x9a49ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b93a: push dword ptr [ecx*8 + 0x9a49c8] */ { u32 v = R32((u32)(r_ecx*8+0x9a49c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b941: push dword ptr [ecx*8 + 0x9a49c4] */ { u32 v = R32((u32)(r_ecx*8+0x9a49c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b948: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b94du); f_00793f28();
    /* 0043b94d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043b950: jmp 0x43b973 */ goto L_0043b973;
L_0043b952:; BB(0x0043b952);
    /* 0043b952: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043b954: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b956: push dword ptr [ebx*8 + 0x9a49cc] */ { u32 v = R32((u32)(r_ebx*8+0x9a49ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b95d: push dword ptr [ebx*8 + 0x9a49c8] */ { u32 v = R32((u32)(r_ebx*8+0x9a49c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b964: push dword ptr [ebx*8 + 0x9a49c4] */ { u32 v = R32((u32)(r_ebx*8+0x9a49c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b96b: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b970u); f_00793f28();
    /* 0043b970: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043b973:; BB(0x0043b973);
    /* 0043b973: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b976: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b979: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b97c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b97f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043b986: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b989: ret  */ FN_RET(0x0043b0f8); r_esp += 4; return;
L_0043b98a:; BB(0x0043b98a);
    /* 0043b98a: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b98f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b992: lea ecx, [eax + 0x68] */ r_ecx = (u32)(r_eax+0x68u);
    /* 0043b995: mov dword ptr [eax + 0x64], 3 */ W32((u32)(r_eax+0x64u), 0x3u);
    /* 0043b99c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b99e: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9a3: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9a8: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9ad: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x43b9b2u); f_00783244();
    /* 0043b9b2: jmp 0x43b32e */ goto L_0043b32e;
L_0043b9b7:; BB(0x0043b9b7);
    /* 0043b9b7: fld dword ptr [0x8fdb3c] */ FPUSH(R_F32((u32)(0x8fdb3cu)));
    /* 0043b9bd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b9bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b9c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b9c2: ja 0x43b9d1 */ if ((!fC&&!fZ)) goto L_0043b9d1;
L_0043b9c4:; BB(0x0043b9c4);
    /* 0043b9c4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043b9c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b9c9: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b9cc: jmp 0x43b49a */ goto L_0043b49a;
L_0043b9d1:; BB(0x0043b9d1);
    /* 0043b9d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b9d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b9d6: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b9d9: jmp 0x43b65e */ goto L_0043b65e;
L_0043b9de:; BB(0x0043b9de);
    /* 0043b9de: mov edx, dword ptr [esi*4 + 0x9a4a40] */ r_edx = R32((u32)(r_esi*4+0x9a4a40u));
    /* 0043b9e5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b9e8: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043b9ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b9ef: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043b9f2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b9f4: jl 0x43b9de */ if ((fS!=fO)) goto L_0043b9de;
L_0043b9f6:; BB(0x0043b9f6);
    /* 0043b9f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b9f8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b9fb: jge 0x43b5ba */ if ((fS==fO)) goto L_0043b5ba;
L_0043ba01:; BB(0x0043ba01);
    /* 0043ba01: mov edx, eax */ r_edx = r_eax;
    /* 0043ba03: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043ba05: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ba08: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ba0b: jl 0x43ba51 */ if ((fS!=fO)) goto L_0043ba51;
L_0043ba0d:; BB(0x0043ba0d);
    /* 0043ba0d: mov ebx, dword ptr [ecx*4 + 0x9a4a40] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043ba14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ba17: mov dword ptr [edx + eax*4 + 0x2c], ebx */ W32((u32)(r_edx+r_eax*4+0x2cu), r_ebx);
    /* 0043ba1b: mov esi, dword ptr [ecx*4 + 0x9a4a44] */ r_esi = R32((u32)(r_ecx*4+0x9a4a44u));
    /* 0043ba22: mov dword ptr [edx + eax*4 + 0x30], esi */ W32((u32)(r_edx+r_eax*4+0x30u), r_esi);
    /* 0043ba26: mov edi, dword ptr [ecx*4 + 0x9a4a48] */ r_edi = R32((u32)(r_ecx*4+0x9a4a48u));
    /* 0043ba2d: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043ba31: mov ebx, dword ptr [ecx*4 + 0x9a4a4c] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a4cu));
    /* 0043ba38: mov dword ptr [edx + eax*4 + 0x38], ebx */ W32((u32)(r_edx+r_eax*4+0x38u), r_ebx);
    /* 0043ba3c: mov ebx, dword ptr [ecx*4 + 0x9a4a50] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a50u));
    /* 0043ba43: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ba46: mov dword ptr [edx + eax*4 + 0x3c], ebx */ W32((u32)(r_edx+r_eax*4+0x3cu), r_ebx);
    /* 0043ba4a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ba4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043ba4f: jl 0x43ba0d */ if ((fS!=fO)) goto L_0043ba0d;
L_0043ba51:; BB(0x0043ba51);
    /* 0043ba51: mov edx, dword ptr [ecx*4 + 0x9a4a40] */ r_edx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043ba58: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ba5b: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043ba5f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ba62: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ba65: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ba68: jl 0x43ba51 */ if ((fS!=fO)) goto L_0043ba51;
L_0043ba6a:; BB(0x0043ba6a);
    /* 0043ba6a: jmp 0x43b5ba */ goto L_0043b5ba;
L_0043ba6f:; BB(0x0043ba6f);
    /* 0043ba6f: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0043ba79: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043ba7e: jmp 0x43b872 */ goto L_0043b872;
L_0043ba83:; BB(0x0043ba83);
    /* 0043ba83: mov dword ptr [eax + 0xb4], 2 */ W32((u32)(r_eax+0xb4u), 0x2u);
    /* 0043ba8d: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043ba92: jmp 0x43b872 */ goto L_0043b872;
L_0043ba97:; BB(0x0043ba97);
    /* 0043ba97: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba9c: je 0x43b872 */ if (fZ) goto L_0043b872;
L_0043baa2:; BB(0x0043baa2);
    /* 0043baa2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043baa5: mov dword ptr [ecx + 0xb4], 1 */ W32((u32)(r_ecx+0xb4u), 0x1u);
    /* 0043baaf: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043bab4: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043bab9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043babb: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0043bac1: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0043bac7: call 0x43be64 */ r_esp -= 4; W32(r_esp, 0x43baccu); f_0043be64();
    /* 0043bacc: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043bad1: jmp 0x43b872 */ goto L_0043b872;
L_0043bad6:; BB(0x0043bad6);
    /* 0043bad6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bad8: push 0x171 */ { u32 v = 0x171u; r_esp -= 4; W32(r_esp, v); }
    /* 0043badd: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0043bae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bae2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043bae5: lea ecx, [eax + edx + 0x9a4b5c] */ r_ecx = (u32)(r_eax+r_edx+0x9a4b5cu);
    /* 0043baec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043baed: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x43baf2u); f_0050a0ec();
    /* 0043baf2: mov ebx, eax */ r_ebx = r_eax;
    /* 0043baf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043baf7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043baf9: je 0x43b6ca */ if (fZ) goto L_0043b6ca;
L_0043baff:; BB(0x0043baff);
    /* 0043baff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043bb01: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x43bb06u); f_00508f48();
    /* 0043bb06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bb09: mov dword ptr [edx + esi*2 + 0xc8], ebx */ W32((u32)(r_edx+r_esi*2+0xc8u), r_ebx);
    /* 0043bb10: jmp 0x43b6ca */ goto L_0043b6ca;
L_0043bb15:; BB(0x0043bb15);
    /* 0043bb15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bb18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bb1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1e: push 0x333 */ { u32 v = 0x333u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb23: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43bb28u); f_008144b0();
    /* 0043bb28: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bb2b: jmp 0x43b670 */ goto L_0043b670;
L_0043bb30:; BB(0x0043bb30);
    /* 0043bb30: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43bb35u); f_008587a5();
    /* 0043bb35: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043bb38: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0043bb3b: fdiv dword ptr [0x8fdb28] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb28u));
    /* 0043bb41: fadd dword ptr [0x8fdb2c] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb2cu));
    /* 0043bb47: fmul dword ptr [0x8fdb5c] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb5cu));
    /* 0043bb4d: fmul dword ptr [0x8fdb24] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb24u));
    /* 0043bb53: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0043bb56: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43bb5bu); f_008587a5();
    /* 0043bb5b: mov dword ptr [ebp - 0x50], 0x44160000 */ W32((u32)(r_ebp+0xffffffb0u), 0x44160000u);
    /* 0043bb62: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043bb65: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0043bb68: fdiv dword ptr [0x8fdb28] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb28u));
    /* 0043bb6e: fmul dword ptr [0x8fdb1c] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb1cu));
    /* 0043bb74: fadd dword ptr [0x8fdb20] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb20u));
    /* 0043bb7a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0043bb81: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0043bb84: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb86: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43bb8bu); f_005caba4();
    /* 0043bb8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043bb8c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043bb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bb91: je 0x43bbb9 */ if (fZ) goto L_0043bbb9;
L_0043bb93:; BB(0x0043bb93);
    /* 0043bb93: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0043bb9a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043bba1: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0043bba4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bba5: mov ecx, eax */ r_ecx = r_eax;
    /* 0043bba7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043bbad: call 0x43a710 */ r_esp -= 4; W32(r_esp, 0x43bbb2u); f_0043a710();
    /* 0043bbb2: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0043bbb9:; BB(0x0043bbb9);
    /* 0043bbb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043bbc0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bbc3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bbc6: mov dword ptr [eax + 0xd8], 0xa */ W32((u32)(r_eax+0xd8u), 0xau);
    /* 0043bbd0: jmp 0x43b65e */ goto L_0043b65e;
L_0043bbd5:; BB(0x0043bbd5);
    /* 0043bbd5: fld dword ptr [0x8fdaf0] */ FPUSH(R_F32((u32)(0x8fdaf0u)));
    /* 0043bbdb: mov ecx, eax */ r_ecx = r_eax;
    /* 0043bbdd: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 0043bbe0: fcom dword ptr [0x8fda58] */ fx_compare(ST(0), R_F32((u32)(0x8fda58u))); 
    /* 0043bbe6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043bbe8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043bbe9: jbe 0x43bbfd */ if ((fC||fZ)) goto L_0043bbfd;
L_0043bbeb:; BB(0x0043bbeb);
    /* 0043bbeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043bbed: fld dword ptr [0x8fda58] */ FPUSH(R_F32((u32)(0x8fda58u)));
    /* 0043bbf3: mov eax, dword ptr [0x8fda58] */ r_eax = R32((u32)(0x8fda58u));
    /* 0043bbf8: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0043bbfb: jmp 0x43bc02 */ goto L_0043bc02;
L_0043bbfd:; BB(0x0043bbfd);
    /* 0043bbfd: mov eax, ecx */ r_eax = r_ecx;
    /* 0043bbff: fst dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0));
L_0043bc02:; BB(0x0043bc02);
    /* 0043bc02: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0043bc05: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0043bc07: fld dword ptr [ecx + 0x60] */ FPUSH(R_F32((u32)(r_ecx+0x60u)));
    /* 0043bc0a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0043bc0c: fld dword ptr [0x8fdaf4] */ FPUSH(R_F32((u32)(0x8fdaf4u)));
    /* 0043bc12: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043bc14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043bc16: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043bc18: fstp dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0)); FPOP();
    /* 0043bc1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043bc1c: ja 0x43bc92 */ if ((!fC&&!fZ)) goto L_0043bc92;
L_0043bc1e:; BB(0x0043bc1e);
    /* 0043bc1e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0043bc20: mov eax, ecx */ r_eax = r_ecx;
    /* 0043bc22: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0043bc25: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043bc28: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043bc2b: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc2e: jge 0x43bd3b */ if ((fS==fO)) goto L_0043bd3b;
L_0043bc34:; BB(0x0043bc34);
    /* 0043bc34: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 0043bc37: mov ebx, esi */ r_ebx = r_esi;
    /* 0043bc39: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0043bc3b: lea ecx, [ebx + 6] */ r_ecx = (u32)(r_ebx+0x6u);
    /* 0043bc3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bc40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043bc42: jle 0x43bcb6 */ if ((fZ||fS!=fO)) goto L_0043bcb6;
L_0043bc44:; BB(0x0043bc44);
    /* 0043bc44: lea edx, [ebx + 6] */ r_edx = (u32)(r_ebx+0x6u);
    /* 0043bc47: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc4a: jl 0x43bc9e */ if ((fS!=fO)) goto L_0043bc9e;
L_0043bc4c:; BB(0x0043bc4c);
    /* 0043bc4c: mov edi, dword ptr [esi*4 + 0x9a4bb4] */ r_edi = R32((u32)(r_esi*4+0x9a4bb4u));
    /* 0043bc53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bc56: mov dword ptr [edx + eax*4 + 0x2c], edi */ W32((u32)(r_edx+r_eax*4+0x2cu), r_edi);
    /* 0043bc5a: mov edi, dword ptr [esi*4 + 0x9a4bb8] */ r_edi = R32((u32)(r_esi*4+0x9a4bb8u));
    /* 0043bc61: mov dword ptr [edx + eax*4 + 0x30], edi */ W32((u32)(r_edx+r_eax*4+0x30u), r_edi);
    /* 0043bc65: mov edi, dword ptr [esi*4 + 0x9a4bbc] */ r_edi = R32((u32)(r_esi*4+0x9a4bbcu));
    /* 0043bc6c: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043bc70: mov edi, dword ptr [esi*4 + 0x9a4bc0] */ r_edi = R32((u32)(r_esi*4+0x9a4bc0u));
    /* 0043bc77: mov dword ptr [edx + eax*4 + 0x38], edi */ W32((u32)(r_edx+r_eax*4+0x38u), r_edi);
    /* 0043bc7b: mov edi, dword ptr [esi*4 + 0x9a4bc4] */ r_edi = R32((u32)(r_esi*4+0x9a4bc4u));
    /* 0043bc82: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043bc85: mov dword ptr [edx + eax*4 + 0x3c], edi */ W32((u32)(r_edx+r_eax*4+0x3cu), r_edi);
    /* 0043bc89: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bc8c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc8e: jle 0x43bc4c */ if ((fZ||fS!=fO)) goto L_0043bc4c;
L_0043bc90:; BB(0x0043bc90);
    /* 0043bc90: jmp 0x43bc9e */ goto L_0043bc9e;
L_0043bc92:; BB(0x0043bc92);
    /* 0043bc92: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043bc94: mov eax, ecx */ r_eax = r_ecx;
    /* 0043bc96: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043bc99: jmp 0x43b65e */ goto L_0043b65e;
L_0043bc9e:; BB(0x0043bc9e);
    /* 0043bc9e: mov edx, dword ptr [esi*4 + 0x9a4bb4] */ r_edx = R32((u32)(r_esi*4+0x9a4bb4u));
    /* 0043bca5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bca8: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043bcac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bcaf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043bcb2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcb4: jl 0x43bc9e */ if ((fS!=fO)) goto L_0043bc9e;
L_0043bcb6:; BB(0x0043bcb6);
    /* 0043bcb6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bcb8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcbb: jge 0x43bd30 */ if ((fS==fO)) goto L_0043bd30;
L_0043bcbd:; BB(0x0043bcbd);
    /* 0043bcbd: mov edx, eax */ r_edx = r_eax;
    /* 0043bcbf: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043bcc1: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043bcc4: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcc7: jl 0x43bd0d */ if ((fS!=fO)) goto L_0043bd0d;
L_0043bcc9:; BB(0x0043bcc9);
    /* 0043bcc9: mov ebx, dword ptr [ecx*4 + 0x9a4a40] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043bcd0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bcd3: mov dword ptr [edx + eax*4 + 0x2c], ebx */ W32((u32)(r_edx+r_eax*4+0x2cu), r_ebx);
    /* 0043bcd7: mov esi, dword ptr [ecx*4 + 0x9a4a44] */ r_esi = R32((u32)(r_ecx*4+0x9a4a44u));
    /* 0043bcde: mov dword ptr [edx + eax*4 + 0x30], esi */ W32((u32)(r_edx+r_eax*4+0x30u), r_esi);
    /* 0043bce2: mov edi, dword ptr [ecx*4 + 0x9a4a48] */ r_edi = R32((u32)(r_ecx*4+0x9a4a48u));
    /* 0043bce9: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043bced: mov ebx, dword ptr [ecx*4 + 0x9a4a4c] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a4cu));
    /* 0043bcf4: mov dword ptr [edx + eax*4 + 0x38], ebx */ W32((u32)(r_edx+r_eax*4+0x38u), r_ebx);
    /* 0043bcf8: mov ebx, dword ptr [ecx*4 + 0x9a4a50] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a50u));
    /* 0043bcff: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bd02: mov dword ptr [edx + eax*4 + 0x3c], ebx */ W32((u32)(r_edx+r_eax*4+0x3cu), r_ebx);
    /* 0043bd06: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bd09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043bd0b: jl 0x43bcc9 */ if ((fS!=fO)) goto L_0043bcc9;
L_0043bd0d:; BB(0x0043bd0d);
    /* 0043bd0d: mov edx, dword ptr [ecx*4 + 0x9a4a40] */ r_edx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043bd14: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bd17: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043bd1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bd1e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bd21: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bd24: jl 0x43bd0d */ if ((fS!=fO)) goto L_0043bd0d;
L_0043bd26:; BB(0x0043bd26);
    /* 0043bd26: mov eax, ebx */ r_eax = r_ebx;
    /* 0043bd28: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bd2b: jmp 0x43b65e */ goto L_0043b65e;
L_0043bd30:; BB(0x0043bd30);
    /* 0043bd30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bd33: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bd36: jmp 0x43b65e */ goto L_0043b65e;
L_0043bd3b:; BB(0x0043bd3b);
    /* 0043bd3b: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0043bd42: mov edx, dword ptr [0x9a4a40] */ r_edx = R32((u32)(0x9a4a40u));
    /* 0043bd48: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0043bd4b: mov ecx, dword ptr [0x9a4a44] */ r_ecx = R32((u32)(0x9a4a44u));
    /* 0043bd51: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0043bd54: mov ebx, dword ptr [0x9a4a48] */ r_ebx = R32((u32)(0x9a4a48u));
    /* 0043bd5a: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 0043bd5d: mov esi, dword ptr [0x9a4a4c] */ r_esi = R32((u32)(0x9a4a4cu));
    /* 0043bd63: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 0043bd66: mov edi, dword ptr [0x9a4a50] */ r_edi = R32((u32)(0x9a4a50u));
    /* 0043bd6c: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0043bd6f: mov edx, dword ptr [0x9a4a54] */ r_edx = R32((u32)(0x9a4a54u));
    /* 0043bd75: mov dword ptr [eax + 0x24], 2 */ W32((u32)(r_eax+0x24u), 0x2u);
    /* 0043bd7c: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0043bd7f: call 0x5bd944 */ r_esp -= 4; W32(r_esp, 0x43bd84u); f_005bd944();
    /* 0043bd84: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bd87: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0043bd8d: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 0043bd90: jmp 0x43b65e */ goto L_0043b65e;
L_0043bd95:; BB(0x0043bd95);
    /* 0043bd95: call 0x43bed8 */ r_esp -= 4; W32(r_esp, 0x43bd9au); f_0043bed8();
    /* 0043bd9a: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043bd9f: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bda4: je 0x43bdc4 */ if (fZ) goto L_0043bdc4;
L_0043bda6:; BB(0x0043bda6);
    /* 0043bda6: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043bdab: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043bdb0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdb3: mov edx, 1 */ r_edx = 0x1u;
    /* 0043bdb8: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 0043bdbf: jmp 0x43b65e */ goto L_0043b65e;
L_0043bdc4:; BB(0x0043bdc4);
    /* 0043bdc4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdc7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bdca: jmp 0x43b65e */ goto L_0043b65e;
L_0043bdcf:; BB(0x0043bdcf);
    /* 0043bdcf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdd2: call 0x43be80 */ r_esp -= 4; W32(r_esp, 0x43bdd7u); f_0043be80();
    /* 0043bdd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bdd9: je 0x43b32e */ if (fZ) goto L_0043b32e;
L_0043bddf:; BB(0x0043bddf);
    /* 0043bddf: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043bde4: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bde9: je 0x43bdfa */ if (fZ) goto L_0043bdfa;
L_0043bdeb:; BB(0x0043bdeb);
    /* 0043bdeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdee: mov dword ptr [eax + 0x94], 0xbf800000 */ W32((u32)(r_eax+0x94u), 0xbf800000u);
    /* 0043bdf8: jmp 0x43be07 */ goto L_0043be07;
L_0043bdfa:; BB(0x0043bdfa);
    /* 0043bdfa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdfd: mov dword ptr [eax + 0x94], 0x3f800000 */ W32((u32)(r_eax+0x94u), 0x3f800000u);
L_0043be07:; BB(0x0043be07);
    /* 0043be07: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043be0c: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043be11: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043be16: mov dword ptr [eax + 0x64], 1 */ W32((u32)(r_eax+0x64u), 0x1u);
    /* 0043be1d: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043be22: lea ecx, [eax + 0x68] */ r_ecx = (u32)(r_eax+0x68u);
    /* 0043be25: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043be2a: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x43be2fu); f_00783244();
    /* 0043be2f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043be32: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 0043be3c: jmp 0x43b32e */ goto L_0043b32e;
}

void f_0043b9a0(void)
{
    FN_ENTER(0x0043b9a0);
    goto L_0043b9a0;
L_0043b32e:; BB(0x0043b32e);
    /* 0043b32e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b331: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043b334: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b336: je 0x43bd95 */ if (fZ) goto L_0043bd95;
L_0043b33c:; BB(0x0043b33c);
    /* 0043b33c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b33f: je 0x43bbd5 */ if (fZ) goto L_0043bbd5;
L_0043b345:; BB(0x0043b345);
    /* 0043b345: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b348: je 0x43b4dd */ if (fZ) goto L_0043b4dd;
L_0043b34e:; BB(0x0043b34e);
    /* 0043b34e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b351: jne 0x43b65e */ if (!fZ) goto L_0043b65e;
L_0043b357:; BB(0x0043b357);
    /* 0043b357: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b359: fild dword ptr [ecx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x48u)));
    /* 0043b35c: fcom dword ptr [0x8fdb60] */ fx_compare(ST(0), R_F32((u32)(0x8fdb60u))); 
    /* 0043b362: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b364: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 0043b367: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043b36a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b36b: ja 0x43b3d1 */ if ((!fC&&!fZ)) goto L_0043b3d1;
L_0043b36d:; BB(0x0043b36d);
    /* 0043b36d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b36f: mov edx, ecx */ r_edx = r_ecx;
    /* 0043b371: fld dword ptr [edx + 0x54] */ FPUSH(R_F32((u32)(r_edx+0x54u)));
    /* 0043b374: fadd dword ptr [ebp - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0043b377: fcom dword ptr [edx + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x50u))); 
    /* 0043b37a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b37c: fst dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0));
    /* 0043b37f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b380: jbe 0x43b3ae */ if ((fC||fZ)) goto L_0043b3ae;
L_0043b382:; BB(0x0043b382);
    /* 0043b382: mov eax, edx */ r_eax = r_edx;
    /* 0043b384: fstp dword ptr [eax + 0x50] */ W_F32((u32)(r_eax+0x50u), ST(0)); FPOP();
    /* 0043b387: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043b389: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b38a: mov dword ptr [eax + 0x48], 1 */ W32((u32)(r_eax+0x48u), 0x1u);
    /* 0043b391: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b392: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b393: push 0x335 */ { u32 v = 0x335u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b398: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43b39du); f_00814298();
    /* 0043b39d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b3a3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043b3a6: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0043b3a9: jmp 0x43b457 */ goto L_0043b457;
L_0043b3ae:; BB(0x0043b3ae);
    /* 0043b3ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b3b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b3b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3b6: push 0x333 */ { u32 v = 0x333u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b3bb: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43b3c0u); f_008144b0();
    /* 0043b3c0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b3c3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b3c6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043b3c9: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0043b3cc: jmp 0x43b457 */ goto L_0043b457;
L_0043b3d1:; BB(0x0043b3d1);
    /* 0043b3d1: fld dword ptr [0x8fdb40] */ FPUSH(R_F32((u32)(0x8fdb40u)));
    /* 0043b3d7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0043b3d9: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 0043b3dc: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0043b3de: fdiv dword ptr [0x8fdaf8] */ ST(0) = ST(0) / R_F32((u32)(0x8fdaf8u));
    /* 0043b3e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b3e6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043b3e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b3ea: fadd dword ptr [0x8fdb4c] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb4cu));
    /* 0043b3f0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b3f2: fadd dword ptr [ecx + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x50u));
    /* 0043b3f5: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 0043b3f8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b3fa: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b3fd: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b401: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b406: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b409: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b40c: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b40f: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b412: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0043b415: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0043b417: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b419: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0043b41c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b41d: jb 0x43b44f */ if (fC) goto L_0043b44f;
L_0043b41f:; BB(0x0043b41f);
    /* 0043b41f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b422: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 0043b425: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b429: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b42e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0043b431: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0043b434: fistp dword ptr [ecx + 0x48] */ W32((u32)(r_ecx+0x48u), (u32)fx_int32(ST(0))); FPOP();
    /* 0043b437: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 0043b43a: mov edx, 4 */ r_edx = 0x4u;
    /* 0043b43f: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 0043b446: mov dword ptr [ecx + 0x24], 4 */ W32((u32)(r_ecx+0x24u), 0x4u);
    /* 0043b44d: jmp 0x43b457 */ goto L_0043b457;
L_0043b44f:; BB(0x0043b44f);
    /* 0043b44f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b451: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b454: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
L_0043b457:; BB(0x0043b457);
    /* 0043b457: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0043b459: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0043b45c: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0043b45e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b461: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0043b464: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b466: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0043b469: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0043b46c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0043b46e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b470: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b473: je 0x43b9b7 */ if (fZ) goto L_0043b9b7;
L_0043b479:; BB(0x0043b479);
    /* 0043b479: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0043b47c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b47f: je 0x43b9b7 */ if (fZ) goto L_0043b9b7;
L_0043b485:; BB(0x0043b485);
    /* 0043b485: fld dword ptr [0x8fdaf4] */ FPUSH(R_F32((u32)(0x8fdaf4u)));
    /* 0043b48b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b48d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b48f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b490: ja 0x43b4d0 */ if ((!fC&&!fZ)) goto L_0043b4d0;
L_0043b492:; BB(0x0043b492);
    /* 0043b492: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043b494: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b497: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
L_0043b49a:; BB(0x0043b49a);
    /* 0043b49a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0043b49d: mov ebx, dword ptr [eax + 0x34] */ r_ebx = R32((u32)(r_eax+0x34u));
    /* 0043b4a0: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0043b4a3: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 0043b4a6: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 0043b4a9: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0043b4ac: mov dword ptr [eax + 0x30], ebx */ W32((u32)(r_eax+0x30u), r_ebx);
    /* 0043b4af: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 0043b4b2: mov dword ptr [eax + 0x34], esi */ W32((u32)(r_eax+0x34u), r_esi);
    /* 0043b4b5: mov dword ptr [eax + 0x38], edi */ W32((u32)(r_eax+0x38u), r_edi);
    /* 0043b4b8: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0043b4bb: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 0043b4be: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 0043b4c1: mov ecx, dword ptr [ebx*4 + 0x9a4b8c] */ r_ecx = R32((u32)(r_ebx*4+0x9a4b8cu));
    /* 0043b4c8: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0043b4cb: jmp 0x43b65e */ goto L_0043b65e;
L_0043b4d0:; BB(0x0043b4d0);
    /* 0043b4d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b4d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b4d5: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b4d8: jmp 0x43b65e */ goto L_0043b65e;
L_0043b4dd:; BB(0x0043b4dd);
    /* 0043b4dd: fld dword ptr [0x8fdaf0] */ FPUSH(R_F32((u32)(0x8fdaf0u)));
    /* 0043b4e3: mov edx, eax */ r_edx = r_eax;
    /* 0043b4e5: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 0043b4e8: fcom dword ptr [0x8fda58] */ fx_compare(ST(0), R_F32((u32)(0x8fda58u))); 
    /* 0043b4ee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b4f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b4f1: jbe 0x43b505 */ if ((fC||fZ)) goto L_0043b505;
L_0043b4f3:; BB(0x0043b4f3);
    /* 0043b4f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b4f5: fld dword ptr [0x8fda58] */ FPUSH(R_F32((u32)(0x8fda58u)));
    /* 0043b4fb: mov eax, dword ptr [0x8fda58] */ r_eax = R32((u32)(0x8fda58u));
    /* 0043b500: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0043b503: jmp 0x43b50a */ goto L_0043b50a;
L_0043b505:; BB(0x0043b505);
    /* 0043b505: mov eax, edx */ r_eax = r_edx;
    /* 0043b507: fst dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0));
L_0043b50a:; BB(0x0043b50a);
    /* 0043b50a: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 0043b50d: fld dword ptr [0x8fdaf4] */ FPUSH(R_F32((u32)(0x8fdaf4u)));
    /* 0043b513: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b515: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b517: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b518: ja 0x43b5b3 */ if ((!fC&&!fZ)) goto L_0043b5b3;
L_0043b51e:; BB(0x0043b51e);
    /* 0043b51e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043b520: mov eax, edx */ r_eax = r_edx;
    /* 0043b522: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0043b525: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b528: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043b52b: cmp esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b52e: jl 0x43b53b */ if ((fS!=fO)) goto L_0043b53b;
L_0043b530:; BB(0x0043b530);
    /* 0043b530: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0043b537: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0043b539: jmp 0x43b53e */ goto L_0043b53e;
L_0043b53b:; BB(0x0043b53b);
    /* 0043b53b: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
L_0043b53e:; BB(0x0043b53e);
    /* 0043b53e: lea eax, [esi + 6] */ r_eax = (u32)(r_esi+0x6u);
    /* 0043b541: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b544: jle 0x43b54f */ if ((fZ||fS!=fO)) goto L_0043b54f;
L_0043b546:; BB(0x0043b546);
    /* 0043b546: mov ecx, esi */ r_ecx = r_esi;
    /* 0043b548: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b54a: add ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b54d: jmp 0x43b554 */ goto L_0043b554;
L_0043b54f:; BB(0x0043b54f);
    /* 0043b54f: mov ecx, 6 */ r_ecx = 0x6u;
L_0043b554:; BB(0x0043b554);
    /* 0043b554: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b556: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043b558: jle 0x43b9f6 */ if ((fZ||fS!=fO)) goto L_0043b9f6;
L_0043b55e:; BB(0x0043b55e);
    /* 0043b55e: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b561: jl 0x43b9de */ if ((fS!=fO)) goto L_0043b9de;
L_0043b567:; BB(0x0043b567);
    /* 0043b567: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_0043b56a:; BB(0x0043b56a);
    /* 0043b56a: mov edi, dword ptr [esi*4 + 0x9a4a40] */ r_edi = R32((u32)(r_esi*4+0x9a4a40u));
    /* 0043b571: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b574: mov dword ptr [edx + eax*4 + 0x2c], edi */ W32((u32)(r_edx+r_eax*4+0x2cu), r_edi);
    /* 0043b578: mov edi, dword ptr [esi*4 + 0x9a4a44] */ r_edi = R32((u32)(r_esi*4+0x9a4a44u));
    /* 0043b57f: mov dword ptr [edx + eax*4 + 0x30], edi */ W32((u32)(r_edx+r_eax*4+0x30u), r_edi);
    /* 0043b583: mov edi, dword ptr [esi*4 + 0x9a4a48] */ r_edi = R32((u32)(r_esi*4+0x9a4a48u));
    /* 0043b58a: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043b58e: mov edi, dword ptr [esi*4 + 0x9a4a4c] */ r_edi = R32((u32)(r_esi*4+0x9a4a4cu));
    /* 0043b595: mov dword ptr [edx + eax*4 + 0x38], edi */ W32((u32)(r_edx+r_eax*4+0x38u), r_edi);
    /* 0043b599: mov edi, dword ptr [esi*4 + 0x9a4a50] */ r_edi = R32((u32)(r_esi*4+0x9a4a50u));
    /* 0043b5a0: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043b5a3: mov dword ptr [edx + eax*4 + 0x3c], edi */ W32((u32)(r_edx+r_eax*4+0x3cu), r_edi);
    /* 0043b5a7: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b5aa: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b5ac: jle 0x43b56a */ if ((fZ||fS!=fO)) goto L_0043b56a;
L_0043b5ae:; BB(0x0043b5ae);
    /* 0043b5ae: jmp 0x43b9de */ goto L_0043b9de;
L_0043b5b3:; BB(0x0043b5b3);
    /* 0043b5b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b5b5: mov eax, edx */ r_eax = r_edx;
    /* 0043b5b7: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
L_0043b5ba:; BB(0x0043b5ba);
    /* 0043b5ba: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b5bf: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b5c4: je 0x43b641 */ if (fZ) goto L_0043b641;
L_0043b5c6:; BB(0x0043b5c6);
    /* 0043b5c6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b5c9: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0043b5cc: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0043b5cf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0043b5d1: fmul dword ptr [0x8fdb34] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb34u));
    /* 0043b5d7: fdiv dword ptr [0x8fdb30] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb30u));
    /* 0043b5dd: fadd dword ptr [0x8fdb38] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb38u));
    /* 0043b5e3: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b5e8: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 0043b5eb: mov dword ptr [ecx + 0x24], 3 */ W32((u32)(r_ecx+0x24u), 0x3u);
    /* 0043b5f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0043b5f4: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043b5f9: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0043b5fc: mov dword ptr [ebp - 0x60], ebx */ W32((u32)(r_ebp+0xffffffa0u), r_ebx);
    /* 0043b5ff: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0043b602: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b604: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0043b607: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0043b60a: mov dword ptr [ecx + 0x48], ebx */ W32((u32)(r_ecx+0x48u), r_ebx);
    /* 0043b60d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43b612u); f_005caba4();
    /* 0043b612: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043b613: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0043b616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b618: je 0x43b63a */ if (fZ) goto L_0043b63a;
L_0043b61a:; BB(0x0043b61a);
    /* 0043b61a: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 0043b621: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043b628: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b62b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043b62c: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b62e: call 0x43beac */ r_esp -= 4; W32(r_esp, 0x43b633u); f_0043beac();
    /* 0043b633: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0043b63a:; BB(0x0043b63a);
    /* 0043b63a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0043b641:; BB(0x0043b641);
    /* 0043b641: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b644: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0043b64a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b64d: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 0043b653: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043b655: jle 0x43bb30 */ if ((fZ||fS!=fO)) goto L_0043bb30;
L_0043b65b:; BB(0x0043b65b);
    /* 0043b65b: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
L_0043b65e:; BB(0x0043b65e);
    /* 0043b65e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b661: je 0x43bb15 */ if (fZ) goto L_0043bb15;
L_0043b667:; BB(0x0043b667);
    /* 0043b667: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b66a: je 0x43bb15 */ if (fZ) goto L_0043bb15;
L_0043b670:; BB(0x0043b670);
    /* 0043b670: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b673: fld dword ptr [0x8fda58] */ FPUSH(R_F32((u32)(0x8fda58u)));
    /* 0043b679: fld dword ptr [0x8fdb14] */ FPUSH(R_F32((u32)(0x8fdb14u)));
    /* 0043b67f: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0043b682: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0043b684: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b686: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b688: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043b68b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b68c: jae 0x43b69a */ if (!fC) goto L_0043b69a;
L_0043b68e:; BB(0x0043b68e);
    /* 0043b68e: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0043b690: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0043b693: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0043b695: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0043b698: jmp 0x43b69e */ goto L_0043b69e;
L_0043b69a:; BB(0x0043b69a);
    /* 0043b69a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043b69c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0043b69e:; BB(0x0043b69e);
    /* 0043b69e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0043b6a0:; BB(0x0043b6a0);
    /* 0043b6a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b6a3: mov eax, dword ptr [eax + edi*4 + 0xc8] */ r_eax = R32((u32)(r_eax+r_edi*4+0xc8u));
    /* 0043b6aa: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0043b6ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b6af: je 0x43bad6 */ if (fZ) goto L_0043bad6;
L_0043b6b5:; BB(0x0043b6b5);
    /* 0043b6b5: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0043b6b8: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b6bb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043b6bf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0043b6c2: call 0x43aa84 */ r_esp -= 4; W32(r_esp, 0x43b6c7u); f_0043aa84();
    /* 0043b6c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0043b6ca:; BB(0x0043b6ca);
    /* 0043b6ca: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0043b6cd: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b6d0: jl 0x43b6a0 */ if ((fS!=fO)) goto L_0043b6a0;
L_0043b6d2:; BB(0x0043b6d2);
    /* 0043b6d2: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b6d7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b6d9: je 0x43b6e8 */ if (fZ) goto L_0043b6e8;
L_0043b6db:; BB(0x0043b6db);
    /* 0043b6db: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6de: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6e1: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043b6e6: jmp 0x43b6f4 */ goto L_0043b6f4;
L_0043b6e8:; BB(0x0043b6e8);
    /* 0043b6e8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b6ea: je 0x43b6f4 */ if (fZ) goto L_0043b6f4;
L_0043b6ec:; BB(0x0043b6ec);
    /* 0043b6ec: and eax, 0xfffffffa */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b6ef: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
L_0043b6f4:; BB(0x0043b6f4);
    /* 0043b6f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b6f7: mov edx, dword ptr [edx + 0xb4] */ r_edx = R32((u32)(r_edx+0xb4u));
    /* 0043b6fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b6ff: je 0x43ba97 */ if (fZ) goto L_0043ba97;
L_0043b705:; BB(0x0043b705);
    /* 0043b705: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b708: je 0x43b7ec */ if (fZ) goto L_0043b7ec;
L_0043b70e:; BB(0x0043b70e);
    /* 0043b70e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b711: jne 0x43b752 */ if (!fZ) goto L_0043b752;
L_0043b713:; BB(0x0043b713);
    /* 0043b713: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b718: je 0x43b872 */ if (fZ) goto L_0043b872;
L_0043b71e:; BB(0x0043b71e);
    /* 0043b71e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b721: mov dword ptr [ecx + 0xb4], 3 */ W32((u32)(r_ecx+0xb4u), 0x3u);
    /* 0043b72b: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043b730: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043b735: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b737: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0043b73d: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0043b743: call 0x43be44 */ r_esp -= 4; W32(r_esp, 0x43b748u); f_0043be44();
    /* 0043b748: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b74d: jmp 0x43b872 */ goto L_0043b872;
L_0043b752:; BB(0x0043b752);
    /* 0043b752: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b755: jne 0x43b872 */ if (!fZ) goto L_0043b872;
L_0043b75b:; BB(0x0043b75b);
    /* 0043b75b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b75e: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0043b764: mov edx, dword ptr [edx + 0xbc] */ r_edx = R32((u32)(r_edx+0xbcu));
    /* 0043b76a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b76d: cmp ecx, dword ptr [edx*4 + 0x9a4b08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0x9a4b08u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b774: jl 0x43b7de */ if ((fS!=fO)) goto L_0043b7de;
L_0043b776:; BB(0x0043b776);
    /* 0043b776: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b779: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0043b783: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b786: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 0043b78c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b78f: je 0x43b7a2 */ if (fZ) goto L_0043b7a2;
L_0043b791:; BB(0x0043b791);
    /* 0043b791: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b793: call 0x43be64 */ r_esp -= 4; W32(r_esp, 0x43b798u); f_0043be64();
    /* 0043b798: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b79d: jmp 0x43b872 */ goto L_0043b872;
L_0043b7a2:; BB(0x0043b7a2);
    /* 0043b7a2: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b7a4: call 0x43be44 */ r_esp -= 4; W32(r_esp, 0x43b7a9u); f_0043be44();
    /* 0043b7a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b7ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7ae: push 0x332 */ { u32 v = 0x332u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b7b3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43b7b8u); f_00814298();
    /* 0043b7b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b7bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b7be: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0043b7c4: mov ecx, dword ptr [edx*4 + 0x9a4b08] */ r_ecx = R32((u32)(r_edx*4+0x9a4b08u));
    /* 0043b7cb: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b7ce: je 0x43ba6f */ if (fZ) goto L_0043ba6f;
L_0043b7d4:; BB(0x0043b7d4);
    /* 0043b7d4: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b7d9: jmp 0x43b872 */ goto L_0043b872;
L_0043b7de:; BB(0x0043b7de);
    /* 0043b7de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b7e1: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
    /* 0043b7e7: jmp 0x43b872 */ goto L_0043b872;
L_0043b7ec:; BB(0x0043b7ec);
    /* 0043b7ec: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b7ef: mov ecx, dword ptr [edx + 0xb8] */ r_ecx = R32((u32)(r_edx+0xb8u));
    /* 0043b7f5: mov edx, dword ptr [edx + 0xbc] */ r_edx = R32((u32)(r_edx+0xbcu));
    /* 0043b7fb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b7fe: cmp ecx, dword ptr [edx*4 + 0x9a4b08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx*4+0x9a4b08u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b805: jl 0x43b869 */ if ((fS!=fO)) goto L_0043b869;
L_0043b807:; BB(0x0043b807);
    /* 0043b807: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b80a: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
    /* 0043b814: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043b817: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 0043b81d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b820: je 0x43b830 */ if (fZ) goto L_0043b830;
L_0043b822:; BB(0x0043b822);
    /* 0043b822: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b824: call 0x43be44 */ r_esp -= 4; W32(r_esp, 0x43b829u); f_0043be44();
    /* 0043b829: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b82e: jmp 0x43b872 */ goto L_0043b872;
L_0043b830:; BB(0x0043b830);
    /* 0043b830: mov ecx, eax */ r_ecx = r_eax;
    /* 0043b832: call 0x43be64 */ r_esp -= 4; W32(r_esp, 0x43b837u); f_0043be64();
    /* 0043b837: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043b839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b83a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b83b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043b83c: push 0x332 */ { u32 v = 0x332u; r_esp -= 4; W32(r_esp, v); }
    /* 0043b841: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x43b846u); f_00814298();
    /* 0043b846: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b849: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b84c: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0043b852: mov ecx, dword ptr [edx*4 + 0x9a4b08] */ r_ecx = R32((u32)(r_edx*4+0x9a4b08u));
    /* 0043b859: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043b85c: je 0x43ba83 */ if (fZ) goto L_0043ba83;
L_0043b862:; BB(0x0043b862);
    /* 0043b862: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043b867: jmp 0x43b872 */ goto L_0043b872;
L_0043b869:; BB(0x0043b869);
    /* 0043b869: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b86c: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
L_0043b872:; BB(0x0043b872);
    /* 0043b872: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043b874: je 0x43b895 */ if (fZ) goto L_0043b895;
L_0043b876:; BB(0x0043b876);
    /* 0043b876: push dword ptr [0x9a4b04] */ { u32 v = R32((u32)(0x9a4b04u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b87c: push dword ptr [0x9a4b00] */ { u32 v = R32((u32)(0x9a4b00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b882: push dword ptr [0x9a4afc] */ { u32 v = R32((u32)(0x9a4afcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b888: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b88du); f_00793f28();
    /* 0043b88d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043b890: jmp 0x43b973 */ goto L_0043b973;
L_0043b895:; BB(0x0043b895);
    /* 0043b895: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b898: fld dword ptr [0x8fdaec] */ FPUSH(R_F32((u32)(0x8fdaecu)));
    /* 0043b89e: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 0043b8a1: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 0043b8a4: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0043b8a7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b8a9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b8ab: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043b8ad: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b8af: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b8b0: jbe 0x43b952 */ if ((fC||fZ)) goto L_0043b952;
L_0043b8b6:; BB(0x0043b8b6);
    /* 0043b8b6: fcom dword ptr [0x8fdb10] */ fx_compare(ST(0), R_F32((u32)(0x8fdb10u))); 
    /* 0043b8bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b8be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b8bf: ja 0x43b92f */ if ((!fC&&!fZ)) goto L_0043b92f;
L_0043b8c1:; BB(0x0043b8c1);
    /* 0043b8c1: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0043b8c3: fdiv dword ptr [0x8fdb24] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb24u));
    /* 0043b8c9: fld dword ptr [0x8fdb4c] */ FPUSH(R_F32((u32)(0x8fdb4cu)));
    /* 0043b8cf: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0043b8d1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043b8d4: fld dword ptr [ecx*8 + 0x9a49c4] */ FPUSH(R_F32((u32)(r_ecx*8+0x9a49c4u)));
    /* 0043b8db: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043b8dd: fld dword ptr [ebx*8 + 0x9a49c4] */ FPUSH(R_F32((u32)(r_ebx*8+0x9a49c4u)));
    /* 0043b8e4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0043b8e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b8e8: fld dword ptr [ecx*8 + 0x9a49c8] */ FPUSH(R_F32((u32)(r_ecx*8+0x9a49c8u)));
    /* 0043b8ef: fld dword ptr [ebx*8 + 0x9a49c8] */ FPUSH(R_F32((u32)(r_ebx*8+0x9a49c8u)));
    /* 0043b8f6: fld dword ptr [ecx*8 + 0x9a49cc] */ FPUSH(R_F32((u32)(r_ecx*8+0x9a49ccu)));
    /* 0043b8fd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b8ff: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0043b901: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043b903: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0043b905: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0043b907: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0043b909: fld dword ptr [ebx*8 + 0x9a49cc] */ FPUSH(R_F32((u32)(r_ebx*8+0x9a49ccu)));
    /* 0043b910: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0043b912: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043b914: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0043b917: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0043b919: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b91b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0043b91f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0043b921: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0043b925: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b92au); f_00793f28();
    /* 0043b92a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043b92d: jmp 0x43b973 */ goto L_0043b973;
L_0043b92f:; BB(0x0043b92f);
    /* 0043b92f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043b931: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b933: push dword ptr [ecx*8 + 0x9a49cc] */ { u32 v = R32((u32)(r_ecx*8+0x9a49ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b93a: push dword ptr [ecx*8 + 0x9a49c8] */ { u32 v = R32((u32)(r_ecx*8+0x9a49c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b941: push dword ptr [ecx*8 + 0x9a49c4] */ { u32 v = R32((u32)(r_ecx*8+0x9a49c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b948: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b94du); f_00793f28();
    /* 0043b94d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043b950: jmp 0x43b973 */ goto L_0043b973;
L_0043b952:; BB(0x0043b952);
    /* 0043b952: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043b954: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b956: push dword ptr [ebx*8 + 0x9a49cc] */ { u32 v = R32((u32)(r_ebx*8+0x9a49ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b95d: push dword ptr [ebx*8 + 0x9a49c8] */ { u32 v = R32((u32)(r_ebx*8+0x9a49c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b964: push dword ptr [ebx*8 + 0x9a49c4] */ { u32 v = R32((u32)(r_ebx*8+0x9a49c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043b96b: call 0x793f28 */ r_esp -= 4; W32(r_esp, 0x43b970u); f_00793f28();
    /* 0043b970: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0043b973:; BB(0x0043b973);
    /* 0043b973: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043b976: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043b979: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0043b97c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043b97f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043b986: mov esp, ebp */ r_esp = r_ebp;
    /* 0043b988: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043b989: ret  */ FN_RET(0x0043b9a0); r_esp += 4; return;
L_0043b9a0:; BB(0x0043b9a0);
    /* 0043b9a0: add byte ptr [esi], dl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043b9a2: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043b9a3: push 0xbdcccccd */ { u32 v = 0xbdcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9a8: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0043b9ad: call 0x783244 */ r_esp -= 4; W32(r_esp, 0x43b9b2u); f_00783244();
    /* 0043b9b2: jmp 0x43b32e */ goto L_0043b32e;
L_0043b9b7:; BB(0x0043b9b7);
    /* 0043b9b7: fld dword ptr [0x8fdb3c] */ FPUSH(R_F32((u32)(0x8fdb3cu)));
    /* 0043b9bd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043b9bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043b9c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043b9c2: ja 0x43b9d1 */ if ((!fC&&!fZ)) goto L_0043b9d1;
L_0043b9c4:; BB(0x0043b9c4);
    /* 0043b9c4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043b9c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b9c9: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b9cc: jmp 0x43b49a */ goto L_0043b49a;
L_0043b9d1:; BB(0x0043b9d1);
    /* 0043b9d1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043b9d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b9d6: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043b9d9: jmp 0x43b65e */ goto L_0043b65e;
L_0043b9de:; BB(0x0043b9de);
    /* 0043b9de: mov edx, dword ptr [esi*4 + 0x9a4a40] */ r_edx = R32((u32)(r_esi*4+0x9a4a40u));
    /* 0043b9e5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043b9e8: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043b9ec: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043b9ef: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043b9f2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b9f4: jl 0x43b9de */ if ((fS!=fO)) goto L_0043b9de;
L_0043b9f6:; BB(0x0043b9f6);
    /* 0043b9f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043b9f8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043b9fb: jge 0x43b5ba */ if ((fS==fO)) goto L_0043b5ba;
L_0043ba01:; BB(0x0043ba01);
    /* 0043ba01: mov edx, eax */ r_edx = r_eax;
    /* 0043ba03: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043ba05: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043ba08: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ba0b: jl 0x43ba51 */ if ((fS!=fO)) goto L_0043ba51;
L_0043ba0d:; BB(0x0043ba0d);
    /* 0043ba0d: mov ebx, dword ptr [ecx*4 + 0x9a4a40] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043ba14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ba17: mov dword ptr [edx + eax*4 + 0x2c], ebx */ W32((u32)(r_edx+r_eax*4+0x2cu), r_ebx);
    /* 0043ba1b: mov esi, dword ptr [ecx*4 + 0x9a4a44] */ r_esi = R32((u32)(r_ecx*4+0x9a4a44u));
    /* 0043ba22: mov dword ptr [edx + eax*4 + 0x30], esi */ W32((u32)(r_edx+r_eax*4+0x30u), r_esi);
    /* 0043ba26: mov edi, dword ptr [ecx*4 + 0x9a4a48] */ r_edi = R32((u32)(r_ecx*4+0x9a4a48u));
    /* 0043ba2d: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043ba31: mov ebx, dword ptr [ecx*4 + 0x9a4a4c] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a4cu));
    /* 0043ba38: mov dword ptr [edx + eax*4 + 0x38], ebx */ W32((u32)(r_edx+r_eax*4+0x38u), r_ebx);
    /* 0043ba3c: mov ebx, dword ptr [ecx*4 + 0x9a4a50] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a50u));
    /* 0043ba43: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ba46: mov dword ptr [edx + eax*4 + 0x3c], ebx */ W32((u32)(r_edx+r_eax*4+0x3cu), r_ebx);
    /* 0043ba4a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ba4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043ba4f: jl 0x43ba0d */ if ((fS!=fO)) goto L_0043ba0d;
L_0043ba51:; BB(0x0043ba51);
    /* 0043ba51: mov edx, dword ptr [ecx*4 + 0x9a4a40] */ r_edx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043ba58: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043ba5b: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043ba5f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043ba62: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043ba65: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043ba68: jl 0x43ba51 */ if ((fS!=fO)) goto L_0043ba51;
L_0043ba6a:; BB(0x0043ba6a);
    /* 0043ba6a: jmp 0x43b5ba */ goto L_0043b5ba;
L_0043ba6f:; BB(0x0043ba6f);
    /* 0043ba6f: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 0043ba79: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043ba7e: jmp 0x43b872 */ goto L_0043b872;
L_0043ba83:; BB(0x0043ba83);
    /* 0043ba83: mov dword ptr [eax + 0xb4], 2 */ W32((u32)(r_eax+0xb4u), 0x2u);
    /* 0043ba8d: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043ba92: jmp 0x43b872 */ goto L_0043b872;
L_0043ba97:; BB(0x0043ba97);
    /* 0043ba97: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043ba9c: je 0x43b872 */ if (fZ) goto L_0043b872;
L_0043baa2:; BB(0x0043baa2);
    /* 0043baa2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043baa5: mov dword ptr [ecx + 0xb4], 1 */ W32((u32)(r_ecx+0xb4u), 0x1u);
    /* 0043baaf: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043bab4: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043bab9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043babb: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0043bac1: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0043bac7: call 0x43be64 */ r_esp -= 4; W32(r_esp, 0x43baccu); f_0043be64();
    /* 0043bacc: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043bad1: jmp 0x43b872 */ goto L_0043b872;
L_0043bad6:; BB(0x0043bad6);
    /* 0043bad6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bad8: push 0x171 */ { u32 v = 0x171u; r_esp -= 4; W32(r_esp, v); }
    /* 0043badd: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0043bae0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bae2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0043bae5: lea ecx, [eax + edx + 0x9a4b5c] */ r_ecx = (u32)(r_eax+r_edx+0x9a4b5cu);
    /* 0043baec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043baed: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x43baf2u); f_0050a0ec();
    /* 0043baf2: mov ebx, eax */ r_ebx = r_eax;
    /* 0043baf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043baf7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043baf9: je 0x43b6ca */ if (fZ) goto L_0043b6ca;
L_0043baff:; BB(0x0043baff);
    /* 0043baff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0043bb01: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x43bb06u); f_00508f48();
    /* 0043bb06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bb09: mov dword ptr [edx + esi*2 + 0xc8], ebx */ W32((u32)(r_edx+r_esi*2+0xc8u), r_ebx);
    /* 0043bb10: jmp 0x43b6ca */ goto L_0043b6ca;
L_0043bb15:; BB(0x0043bb15);
    /* 0043bb15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bb18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bb1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb1e: push 0x333 */ { u32 v = 0x333u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb23: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x43bb28u); f_008144b0();
    /* 0043bb28: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bb2b: jmp 0x43b670 */ goto L_0043b670;
L_0043bb30:; BB(0x0043bb30);
    /* 0043bb30: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43bb35u); f_008587a5();
    /* 0043bb35: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043bb38: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0043bb3b: fdiv dword ptr [0x8fdb28] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb28u));
    /* 0043bb41: fadd dword ptr [0x8fdb2c] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb2cu));
    /* 0043bb47: fmul dword ptr [0x8fdb5c] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb5cu));
    /* 0043bb4d: fmul dword ptr [0x8fdb24] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb24u));
    /* 0043bb53: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0043bb56: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x43bb5bu); f_008587a5();
    /* 0043bb5b: mov dword ptr [ebp - 0x50], 0x44160000 */ W32((u32)(r_ebp+0xffffffb0u), 0x44160000u);
    /* 0043bb62: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0043bb65: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 0043bb68: fdiv dword ptr [0x8fdb28] */ ST(0) = ST(0) / R_F32((u32)(0x8fdb28u));
    /* 0043bb6e: fmul dword ptr [0x8fdb1c] */ ST(0) = ST(0) * R_F32((u32)(0x8fdb1cu));
    /* 0043bb74: fadd dword ptr [0x8fdb20] */ ST(0) = ST(0) + R_F32((u32)(0x8fdb20u));
    /* 0043bb7a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0043bb81: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0043bb84: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bb86: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x43bb8bu); f_005caba4();
    /* 0043bb8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0043bb8c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0043bb8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bb91: je 0x43bbb9 */ if (fZ) goto L_0043bbb9;
L_0043bb93:; BB(0x0043bb93);
    /* 0043bb93: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0043bb9a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0043bba1: lea edx, [ebp - 0x58] */ r_edx = (u32)(r_ebp+0xffffffa8u);
    /* 0043bba4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043bba5: mov ecx, eax */ r_ecx = r_eax;
    /* 0043bba7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043bbad: call 0x43a710 */ r_esp -= 4; W32(r_esp, 0x43bbb2u); f_0043a710();
    /* 0043bbb2: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0043bbb9:; BB(0x0043bbb9);
    /* 0043bbb9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043bbc0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bbc3: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bbc6: mov dword ptr [eax + 0xd8], 0xa */ W32((u32)(r_eax+0xd8u), 0xau);
    /* 0043bbd0: jmp 0x43b65e */ goto L_0043b65e;
L_0043bbd5:; BB(0x0043bbd5);
    /* 0043bbd5: fld dword ptr [0x8fdaf0] */ FPUSH(R_F32((u32)(0x8fdaf0u)));
    /* 0043bbdb: mov ecx, eax */ r_ecx = r_eax;
    /* 0043bbdd: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 0043bbe0: fcom dword ptr [0x8fda58] */ fx_compare(ST(0), R_F32((u32)(0x8fda58u))); 
    /* 0043bbe6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043bbe8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043bbe9: jbe 0x43bbfd */ if ((fC||fZ)) goto L_0043bbfd;
L_0043bbeb:; BB(0x0043bbeb);
    /* 0043bbeb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043bbed: fld dword ptr [0x8fda58] */ FPUSH(R_F32((u32)(0x8fda58u)));
    /* 0043bbf3: mov eax, dword ptr [0x8fda58] */ r_eax = R32((u32)(0x8fda58u));
    /* 0043bbf8: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0043bbfb: jmp 0x43bc02 */ goto L_0043bc02;
L_0043bbfd:; BB(0x0043bbfd);
    /* 0043bbfd: mov eax, ecx */ r_eax = r_ecx;
    /* 0043bbff: fst dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0));
L_0043bc02:; BB(0x0043bc02);
    /* 0043bc02: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0043bc05: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0043bc07: fld dword ptr [ecx + 0x60] */ FPUSH(R_F32((u32)(r_ecx+0x60u)));
    /* 0043bc0a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0043bc0c: fld dword ptr [0x8fdaf4] */ FPUSH(R_F32((u32)(0x8fdaf4u)));
    /* 0043bc12: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0043bc14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043bc16: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0043bc18: fstp dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0)); FPOP();
    /* 0043bc1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043bc1c: ja 0x43bc92 */ if ((!fC&&!fZ)) goto L_0043bc92;
L_0043bc1e:; BB(0x0043bc1e);
    /* 0043bc1e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0043bc20: mov eax, ecx */ r_eax = r_ecx;
    /* 0043bc22: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0043bc25: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043bc28: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043bc2b: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc2e: jge 0x43bd3b */ if ((fS==fO)) goto L_0043bd3b;
L_0043bc34:; BB(0x0043bc34);
    /* 0043bc34: mov dword ptr [eax + 0x28], esi */ W32((u32)(r_eax+0x28u), r_esi);
    /* 0043bc37: mov ebx, esi */ r_ebx = r_esi;
    /* 0043bc39: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0043bc3b: lea ecx, [ebx + 6] */ r_ecx = (u32)(r_ebx+0x6u);
    /* 0043bc3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bc40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0043bc42: jle 0x43bcb6 */ if ((fZ||fS!=fO)) goto L_0043bcb6;
L_0043bc44:; BB(0x0043bc44);
    /* 0043bc44: lea edx, [ebx + 6] */ r_edx = (u32)(r_ebx+0x6u);
    /* 0043bc47: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc4a: jl 0x43bc9e */ if ((fS!=fO)) goto L_0043bc9e;
L_0043bc4c:; BB(0x0043bc4c);
    /* 0043bc4c: mov edi, dword ptr [esi*4 + 0x9a4bb4] */ r_edi = R32((u32)(r_esi*4+0x9a4bb4u));
    /* 0043bc53: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bc56: mov dword ptr [edx + eax*4 + 0x2c], edi */ W32((u32)(r_edx+r_eax*4+0x2cu), r_edi);
    /* 0043bc5a: mov edi, dword ptr [esi*4 + 0x9a4bb8] */ r_edi = R32((u32)(r_esi*4+0x9a4bb8u));
    /* 0043bc61: mov dword ptr [edx + eax*4 + 0x30], edi */ W32((u32)(r_edx+r_eax*4+0x30u), r_edi);
    /* 0043bc65: mov edi, dword ptr [esi*4 + 0x9a4bbc] */ r_edi = R32((u32)(r_esi*4+0x9a4bbcu));
    /* 0043bc6c: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043bc70: mov edi, dword ptr [esi*4 + 0x9a4bc0] */ r_edi = R32((u32)(r_esi*4+0x9a4bc0u));
    /* 0043bc77: mov dword ptr [edx + eax*4 + 0x38], edi */ W32((u32)(r_edx+r_eax*4+0x38u), r_edi);
    /* 0043bc7b: mov edi, dword ptr [esi*4 + 0x9a4bc4] */ r_edi = R32((u32)(r_esi*4+0x9a4bc4u));
    /* 0043bc82: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043bc85: mov dword ptr [edx + eax*4 + 0x3c], edi */ W32((u32)(r_edx+r_eax*4+0x3cu), r_edi);
    /* 0043bc89: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bc8c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bc8e: jle 0x43bc4c */ if ((fZ||fS!=fO)) goto L_0043bc4c;
L_0043bc90:; BB(0x0043bc90);
    /* 0043bc90: jmp 0x43bc9e */ goto L_0043bc9e;
L_0043bc92:; BB(0x0043bc92);
    /* 0043bc92: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043bc94: mov eax, ecx */ r_eax = r_ecx;
    /* 0043bc96: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 0043bc99: jmp 0x43b65e */ goto L_0043b65e;
L_0043bc9e:; BB(0x0043bc9e);
    /* 0043bc9e: mov edx, dword ptr [esi*4 + 0x9a4bb4] */ r_edx = R32((u32)(r_esi*4+0x9a4bb4u));
    /* 0043bca5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bca8: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043bcac: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bcaf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043bcb2: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcb4: jl 0x43bc9e */ if ((fS!=fO)) goto L_0043bc9e;
L_0043bcb6:; BB(0x0043bcb6);
    /* 0043bcb6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bcb8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcbb: jge 0x43bd30 */ if ((fS==fO)) goto L_0043bd30;
L_0043bcbd:; BB(0x0043bcbd);
    /* 0043bcbd: mov edx, eax */ r_edx = r_eax;
    /* 0043bcbf: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0043bcc1: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043bcc4: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bcc7: jl 0x43bd0d */ if ((fS!=fO)) goto L_0043bd0d;
L_0043bcc9:; BB(0x0043bcc9);
    /* 0043bcc9: mov ebx, dword ptr [ecx*4 + 0x9a4a40] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043bcd0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bcd3: mov dword ptr [edx + eax*4 + 0x2c], ebx */ W32((u32)(r_edx+r_eax*4+0x2cu), r_ebx);
    /* 0043bcd7: mov esi, dword ptr [ecx*4 + 0x9a4a44] */ r_esi = R32((u32)(r_ecx*4+0x9a4a44u));
    /* 0043bcde: mov dword ptr [edx + eax*4 + 0x30], esi */ W32((u32)(r_edx+r_eax*4+0x30u), r_esi);
    /* 0043bce2: mov edi, dword ptr [ecx*4 + 0x9a4a48] */ r_edi = R32((u32)(r_ecx*4+0x9a4a48u));
    /* 0043bce9: mov dword ptr [edx + eax*4 + 0x34], edi */ W32((u32)(r_edx+r_eax*4+0x34u), r_edi);
    /* 0043bced: mov ebx, dword ptr [ecx*4 + 0x9a4a4c] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a4cu));
    /* 0043bcf4: mov dword ptr [edx + eax*4 + 0x38], ebx */ W32((u32)(r_edx+r_eax*4+0x38u), r_ebx);
    /* 0043bcf8: mov ebx, dword ptr [ecx*4 + 0x9a4a50] */ r_ebx = R32((u32)(r_ecx*4+0x9a4a50u));
    /* 0043bcff: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bd02: mov dword ptr [edx + eax*4 + 0x3c], ebx */ W32((u32)(r_edx+r_eax*4+0x3cu), r_ebx);
    /* 0043bd06: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bd09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0043bd0b: jl 0x43bcc9 */ if ((fS!=fO)) goto L_0043bcc9;
L_0043bd0d:; BB(0x0043bd0d);
    /* 0043bd0d: mov edx, dword ptr [ecx*4 + 0x9a4a40] */ r_edx = R32((u32)(r_ecx*4+0x9a4a40u));
    /* 0043bd14: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bd17: mov dword ptr [ebx + eax*4 + 0x2c], edx */ W32((u32)(r_ebx+r_eax*4+0x2cu), r_edx);
    /* 0043bd1b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0043bd1e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bd21: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043bd24: jl 0x43bd0d */ if ((fS!=fO)) goto L_0043bd0d;
L_0043bd26:; BB(0x0043bd26);
    /* 0043bd26: mov eax, ebx */ r_eax = r_ebx;
    /* 0043bd28: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bd2b: jmp 0x43b65e */ goto L_0043b65e;
L_0043bd30:; BB(0x0043bd30);
    /* 0043bd30: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bd33: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bd36: jmp 0x43b65e */ goto L_0043b65e;
L_0043bd3b:; BB(0x0043bd3b);
    /* 0043bd3b: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 0043bd42: mov edx, dword ptr [0x9a4a40] */ r_edx = R32((u32)(0x9a4a40u));
    /* 0043bd48: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0043bd4b: mov ecx, dword ptr [0x9a4a44] */ r_ecx = R32((u32)(0x9a4a44u));
    /* 0043bd51: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0043bd54: mov ebx, dword ptr [0x9a4a48] */ r_ebx = R32((u32)(0x9a4a48u));
    /* 0043bd5a: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 0043bd5d: mov esi, dword ptr [0x9a4a4c] */ r_esi = R32((u32)(0x9a4a4cu));
    /* 0043bd63: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 0043bd66: mov edi, dword ptr [0x9a4a50] */ r_edi = R32((u32)(0x9a4a50u));
    /* 0043bd6c: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0043bd6f: mov edx, dword ptr [0x9a4a54] */ r_edx = R32((u32)(0x9a4a54u));
    /* 0043bd75: mov dword ptr [eax + 0x24], 2 */ W32((u32)(r_eax+0x24u), 0x2u);
    /* 0043bd7c: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0043bd7f: call 0x5bd944 */ r_esp -= 4; W32(r_esp, 0x43bd84u); f_005bd944();
    /* 0043bd84: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bd87: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 0043bd8d: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 0043bd90: jmp 0x43b65e */ goto L_0043b65e;
L_0043bd95:; BB(0x0043bd95);
    /* 0043bd95: call 0x43bed8 */ r_esp -= 4; W32(r_esp, 0x43bd9au); f_0043bed8();
    /* 0043bd9a: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043bd9f: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bda4: je 0x43bdc4 */ if (fZ) goto L_0043bdc4;
L_0043bda6:; BB(0x0043bda6);
    /* 0043bda6: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043bdab: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043bdb0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdb3: mov edx, 1 */ r_edx = 0x1u;
    /* 0043bdb8: mov dword ptr [eax + 0x24], 1 */ W32((u32)(r_eax+0x24u), 0x1u);
    /* 0043bdbf: jmp 0x43b65e */ goto L_0043b65e;
L_0043bdc4:; BB(0x0043bdc4);
    /* 0043bdc4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0043bdc7: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0043bdca: jmp 0x43b65e */ goto L_0043b65e;
}

void f_0043be44(void) /* sub_43BE44 */
{
    FN_ENTER(0x0043be44);
    /* 0043be44: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043be46: push dword ptr [ecx + 0xb0] */ { u32 v = R32((u32)(r_ecx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043be4c: call 0x5bd918 */ r_esp -= 4; W32(r_esp, 0x43be51u); f_005bd918();
    /* 0043be51: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043be56: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043be59: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043be5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043be61: ret  */ FN_RET(0x0043be44); r_esp += 4; return;
}

void f_0043be64(void) /* sub_43BE64 */
{
    FN_ENTER(0x0043be64);
    /* 0043be64: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043be66: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0043be68: call 0x5bd918 */ r_esp -= 4; W32(r_esp, 0x43be6du); f_005bd918();
    /* 0043be6d: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043be72: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043be75: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043be7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043be7d: ret  */ FN_RET(0x0043be64); r_esp += 4; return;
}

void f_0043be80(void) /* sub_43BE80 */
{
    FN_ENTER(0x0043be80);
    /* 0043be80: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043be85: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be8a: je 0x43be93 */ if (fZ) goto L_0043be93;
L_0043be8c:; BB(0x0043be8c);
    /* 0043be8c: mov edx, 1 */ r_edx = 0x1u;
    /* 0043be91: jmp 0x43be95 */ goto L_0043be95;
L_0043be93:; BB(0x0043be93);
    /* 0043be93: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0043be95:; BB(0x0043be95);
    /* 0043be95: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043be9a: je 0x43bea3 */ if (fZ) goto L_0043bea3;
L_0043be9c:; BB(0x0043be9c);
    /* 0043be9c: mov eax, 1 */ r_eax = 0x1u;
    /* 0043bea1: jmp 0x43bea5 */ goto L_0043bea5;
L_0043bea3:; BB(0x0043bea3);
    /* 0043bea3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0043bea5:; BB(0x0043bea5);
    /* 0043bea5: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043bea7: mov eax, edx */ r_eax = r_edx;
    /* 0043bea9: ret  */ FN_RET(0x0043be80); r_esp += 4; return;
}

void f_0043beac(void) /* sub_43BEAC */
{
    FN_ENTER(0x0043beac);
    /* 0043beac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043bead: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0043beaf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043beb3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043beb5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x43bebau); f_008193cc();
    /* 0043beba: mov dword ptr [ebp], 0xaf53d0 */ W32((u32)(r_ebp), 0xaf53d0u);
    /* 0043bec1: mov eax, ebp */ r_eax = r_ebp;
    /* 0043bec3: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 0043beca: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 0043bed1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bed2: ret 4 */ FN_RET(0x0043beac); r_esp += 8; return;
}

void f_0043bed8(void) /* sub_43BED8 */
{
    FN_ENTER(0x0043bed8);
    /* 0043bed8: mov eax, dword ptr [0xa44730] */ r_eax = R32((u32)(0xa44730u));
    /* 0043bedd: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043bee2: mov dword ptr [0xa44730], eax */ W32((u32)(0xa44730u), r_eax);
    /* 0043bee7: ret  */ FN_RET(0x0043bed8); r_esp += 4; return;
}

void f_0043bee8(void) /* sub_43BEE8 */
{
    FN_ENTER(0x0043bee8);
    /* 0043bee8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043bee9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043beea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043beeb: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043beee: mov esi, ecx */ r_esi = r_ecx;
    /* 0043bef0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0043bef7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0043beff: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0043bf07: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x43bf0cu); f_0067e408();
    /* 0043bf0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf0e: je 0x43bf17 */ if (fZ) goto L_0043bf17;
L_0043bf10:; BB(0x0043bf10);
    /* 0043bf10: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043bf13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bf14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043bf15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043bf16: ret  */ FN_RET(0x0043bee8); r_esp += 4; return;
L_0043bf17:; BB(0x0043bf17);
    /* 0043bf17: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0043bf1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf1e: je 0x43bf27 */ if (fZ) goto L_0043bf27;
L_0043bf20:; BB(0x0043bf20);
    /* 0043bf20: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043bf23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043bf24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043bf25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043bf26: ret  */ FN_RET(0x0043bee8); r_esp += 4; return;
L_0043bf27:; BB(0x0043bf27);
    /* 0043bf27: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x43bf2cu); f_00835068();
    /* 0043bf2c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43bf31u); f_0082d7b0();
    /* 0043bf31: mov ecx, dword ptr [0xa4426c] */ r_ecx = R32((u32)(0xa4426cu));
    /* 0043bf37: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0043bf39: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0043bf3c: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 0043bf3f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf41: jne 0x43bf47 */ if (!fZ) goto L_0043bf47;
L_0043bf43:; BB(0x0043bf43);
    /* 0043bf43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0043bf45: jmp 0x43bf4a */ goto L_0043bf4a;
L_0043bf47:; BB(0x0043bf47);
    /* 0043bf47: add edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0043bf4a:; BB(0x0043bf4a);
    /* 0043bf4a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043bf4c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0043bf4e: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 0043bf51: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0043bf53: mov edx, dword ptr [ebp + eax + 8] */ r_edx = R32((u32)(r_ebp+r_eax+0x8u));
    /* 0043bf57: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0043bf5a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x43bf5fu); f_00829cc8();
    /* 0043bf5f: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0043bf62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf64: je 0x43bf6b */ if (fZ) goto L_0043bf6b;
L_0043bf66:; BB(0x0043bf66);
    /* 0043bf66: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bf69: jne 0x43bfb0 */ if (!fZ) goto L_0043bfb0;
L_0043bf6b:; BB(0x0043bf6b);
    /* 0043bf6b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43bf70u); f_0082d7b0();
    /* 0043bf70: fld dword ptr [esi + 0x60] */ FPUSH(R_F32((u32)(r_esi+0x60u)));
    /* 0043bf73: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043bf76: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0043bf7d: fchs  */ ST(0) = -ST(0);
    /* 0043bf7f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0043bf83: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0043bf8b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bf8d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43bf92u); f_00830b74();
    /* 0043bf92: mov eax, dword ptr [0xa44270] */ r_eax = R32((u32)(0xa44270u));
    /* 0043bf97: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0043bf9d: mov ecx, dword ptr [edx + 0xd8] */ r_ecx = R32((u32)(r_edx+0xd8u));
    /* 0043bfa3: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43bfa8u); f_00835090();
    /* 0043bfa8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43bfadu); f_0082da80();
    /* 0043bfad: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
L_0043bfb0:; BB(0x0043bfb0);
    /* 0043bfb0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bfb3: je 0x43c391 */ if (fZ) goto L_0043c391;
L_0043bfb9:; BB(0x0043bfb9);
    /* 0043bfb9: fld dword ptr [0x8fdae0] */ FPUSH(R_F32((u32)(0x8fdae0u)));
    /* 0043bfbf: fadd dword ptr [esi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x1cu));
    /* 0043bfc2: fchs  */ ST(0) = -ST(0);
    /* 0043bfc4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_0043bfc8:; BB(0x0043bfc8);
    /* 0043bfc8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0043bfcb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x43bfd0u); f_0082d838();
    /* 0043bfd0: mov ebp, dword ptr [esi + 0x2c] */ r_ebp = R32((u32)(r_esi+0x2cu));
    /* 0043bfd3: mov dword ptr [esp + 8], 0x44160000 */ W32((u32)(r_esp+0x8u), 0x44160000u);
    /* 0043bfdb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043bfdd: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043bfe0: jne 0x43c386 */ if (!fZ) goto L_0043c386;
L_0043bfe6:; BB(0x0043bfe6);
    /* 0043bfe6: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0043bfea: mov ebx, eax */ r_ebx = r_eax;
L_0043bfec:; BB(0x0043bfec);
    /* 0043bfec: push 0xc3960000 */ { u32 v = 0xc3960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bff1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bff3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043bff5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043bff7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43bffcu); f_00830b74();
    /* 0043bffc: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0043c004: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0043c008: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0043c00c: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0043c014: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 0043c01c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c01d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c01e: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x43c023u); f_00835c3c();
    /* 0043c023: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c026: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0043c02a: fcomp dword ptr [0x9a4af4] */ fx_compare(ST(0), R_F32((u32)(0x9a4af4u))); FPOP();
    /* 0043c030: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c032: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c033: ja 0x43c10e */ if ((!fC&&!fZ)) goto L_0043c10e;
L_0043c039:; BB(0x0043c039);
    /* 0043c039: fld dword ptr [0x9a4af0] */ FPUSH(R_F32((u32)(0x9a4af0u)));
    /* 0043c03f: fld dword ptr [0x9a4af0] */ FPUSH(R_F32((u32)(0x9a4af0u)));
    /* 0043c045: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0043c049: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043c04b: fchs  */ ST(0) = -ST(0);
    /* 0043c04d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0043c04f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c051: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c052: jbe 0x43c05d */ if ((fC||fZ)) goto L_0043c05d;
L_0043c054:; BB(0x0043c054);
    /* 0043c054: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043c056: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043c058: jmp 0x43c10e */ goto L_0043c10e;
L_0043c05d:; BB(0x0043c05d);
    /* 0043c05d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0043c05f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c061: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c062: ja 0x43c10e */ if ((!fC&&!fZ)) goto L_0043c10e;
L_0043c068:; BB(0x0043c068);
    /* 0043c068: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43c06du); f_0082d7b0();
    /* 0043c06d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c06f: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c075: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c077: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c079: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c07eu); f_00830b74();
    /* 0043c07e: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0043c084: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c086: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43c08bu); f_00830c04();
    /* 0043c08b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c08d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c08f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c091: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c097: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c09cu); f_00830b74();
    /* 0043c09c: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c0a2: mov ebp, dword ptr [edx + 0x42c] */ r_ebp = R32((u32)(r_edx+0x42cu));
    /* 0043c0a8: mov ecx, dword ptr [ebp + 0x128] */ r_ecx = R32((u32)(r_ebp+0x128u));
    /* 0043c0ae: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c0b3u); f_00835090();
    /* 0043c0b3: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c0b9: mov ebp, dword ptr [edx + 0x42c] */ r_ebp = R32((u32)(r_edx+0x42cu));
    /* 0043c0bf: mov ecx, dword ptr [ebp + 0x158] */ r_ecx = R32((u32)(r_ebp+0x158u));
    /* 0043c0c5: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c0cau); f_00835090();
    /* 0043c0ca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c0cfu); f_0082da80();
    /* 0043c0cf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43c0d4u); f_0082d7b0();
    /* 0043c0d4: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 0043c0da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c0dc: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43c0e1u); f_00830c04();
    /* 0043c0e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c0e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c0e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c0e7: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c0ed: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c0f2u); f_00830b74();
    /* 0043c0f2: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c0f8: mov ebp, dword ptr [edx + 0x42c] */ r_ebp = R32((u32)(r_edx+0x42cu));
    /* 0043c0fe: mov ecx, dword ptr [ebp + 0xa8] */ r_ecx = R32((u32)(r_ebp+0xa8u));
    /* 0043c104: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c109u); f_00835090();
    /* 0043c109: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c10eu); f_0082da80();
L_0043c10e:; BB(0x0043c10e);
    /* 0043c10e: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c113: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c115: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c119: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c11eu); f_00830b74();
    /* 0043c11e: mov dword ptr [esp + 0x3c], 0 */ W32((u32)(r_esp+0x3cu), 0x0u);
    /* 0043c126: lea ecx, [esp + 0x3c] */ r_ecx = (u32)(r_esp+0x3cu);
    /* 0043c12a: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0043c12e: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 0043c136: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 0043c13e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c13f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c140: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x43c145u); f_00835c3c();
    /* 0043c145: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c148: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0043c14c: fcomp dword ptr [0x9a4af4] */ fx_compare(ST(0), R_F32((u32)(0x9a4af4u))); FPOP();
    /* 0043c152: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c154: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c155: ja 0x43c219 */ if ((!fC&&!fZ)) goto L_0043c219;
L_0043c15b:; BB(0x0043c15b);
    /* 0043c15b: fld dword ptr [0x9a4af0] */ FPUSH(R_F32((u32)(0x9a4af0u)));
    /* 0043c161: fld dword ptr [0x9a4af0] */ FPUSH(R_F32((u32)(0x9a4af0u)));
    /* 0043c167: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0043c16b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043c16d: fchs  */ ST(0) = -ST(0);
    /* 0043c16f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0043c171: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c173: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c174: jbe 0x43c17f */ if ((fC||fZ)) goto L_0043c17f;
L_0043c176:; BB(0x0043c176);
    /* 0043c176: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0043c178: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043c17a: jmp 0x43c219 */ goto L_0043c219;
L_0043c17f:; BB(0x0043c17f);
    /* 0043c17f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0043c181: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c183: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c184: ja 0x43c219 */ if ((!fC&&!fZ)) goto L_0043c219;
L_0043c18a:; BB(0x0043c18a);
    /* 0043c18a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43c18fu); f_0082d7b0();
    /* 0043c18f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c191: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c197: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c199: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c19b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c1a0u); f_00830b74();
    /* 0043c1a0: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0043c1a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c1a8: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43c1adu); f_00830c04();
    /* 0043c1ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1b1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c1b3: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c1b9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c1beu); f_00830b74();
    /* 0043c1be: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c1c4: mov ebp, dword ptr [edx + 0x42c] */ r_ebp = R32((u32)(r_edx+0x42cu));
    /* 0043c1ca: mov ecx, dword ptr [ebp + 0x138] */ r_ecx = R32((u32)(r_ebp+0x138u));
    /* 0043c1d0: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c1d5u); f_00835090();
    /* 0043c1d5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c1dau); f_0082da80();
    /* 0043c1da: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43c1dfu); f_0082d7b0();
    /* 0043c1df: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 0043c1e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c1e7: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43c1ecu); f_00830c04();
    /* 0043c1ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c1f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c1f2: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c1f8: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c1fdu); f_00830b74();
    /* 0043c1fd: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c203: mov ebp, dword ptr [edx + 0x42c] */ r_ebp = R32((u32)(r_edx+0x42cu));
    /* 0043c209: mov ecx, dword ptr [ebp + 0xb8] */ r_ecx = R32((u32)(r_ebp+0xb8u));
    /* 0043c20f: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c214u); f_00835090();
    /* 0043c214: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c219u); f_0082da80();
L_0043c219:; BB(0x0043c219);
    /* 0043c219: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0043c21c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x43c221u); f_0082d838();
L_0043c221:; BB(0x0043c221);
    /* 0043c221: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0043c224: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043c227: jge 0x43c367 */ if ((fS==fO)) goto L_0043c367;
L_0043c22d:; BB(0x0043c22d);
    /* 0043c22d: mov ebp, dword ptr [esi + ebx*4 + 0x2c] */ r_ebp = R32((u32)(r_esi+r_ebx*4+0x2cu));
    /* 0043c231: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c234: jne 0x43c253 */ if (!fZ) goto L_0043c253;
L_0043c236:; BB(0x0043c236);
    /* 0043c236: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c238: je 0x43bfec */ if (fZ) goto L_0043bfec;
L_0043c23e:; BB(0x0043c23e);
    /* 0043c23e: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c243: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c245: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c247: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c249: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c24eu); f_00830b74();
    /* 0043c24e: jmp 0x43bfec */ goto L_0043bfec;
L_0043c253:; BB(0x0043c253);
    /* 0043c253: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0043c25b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0043c25f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0043c263: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0043c26b: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0043c273: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c274: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0043c275: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x43c27au); f_00835c3c();
    /* 0043c27a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043c27d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0043c281: fcomp dword ptr [0x9a4af4] */ fx_compare(ST(0), R_F32((u32)(0x9a4af4u))); FPOP();
    /* 0043c287: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c289: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c28a: ja 0x43c35a */ if ((!fC&&!fZ)) goto L_0043c35a;
L_0043c290:; BB(0x0043c290);
    /* 0043c290: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0043c294: fld dword ptr [0x9a4af0] */ FPUSH(R_F32((u32)(0x9a4af0u)));
    /* 0043c29a: fld dword ptr [0x9a4af0] */ FPUSH(R_F32((u32)(0x9a4af0u)));
    /* 0043c2a0: fchs  */ ST(0) = -ST(0);
    /* 0043c2a2: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0043c2a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c2a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c2a7: jbe 0x43c2b2 */ if ((fC||fZ)) goto L_0043c2b2;
L_0043c2a9:; BB(0x0043c2a9);
    /* 0043c2a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043c2ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043c2ad: jmp 0x43c35a */ goto L_0043c35a;
L_0043c2b2:; BB(0x0043c2b2);
    /* 0043c2b2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0043c2b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043c2b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0043c2b7: jb 0x43c35a */ if (fC) goto L_0043c35a;
L_0043c2bd:; BB(0x0043c2bd);
    /* 0043c2bd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43c2c2u); f_0082d7b0();
    /* 0043c2c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2c4: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c2ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c2cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2ce: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c2d3u); f_00830b74();
    /* 0043c2d3: mov edx, dword ptr [esi + 0xa0] */ r_edx = R32((u32)(r_esi+0xa0u));
    /* 0043c2d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c2db: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43c2e0u); f_00830c04();
    /* 0043c2e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c2e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c2e6: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c2ec: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c2f1u); f_00830b74();
    /* 0043c2f1: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c2f7: mov ecx, dword ptr [ebp*4 + 0x9a4ad8] */ r_ecx = R32((u32)(r_ebp*4+0x9a4ad8u));
    /* 0043c2fe: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0043c304: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c306: mov ecx, dword ptr [edx + ecx*8 + 8] */ r_ecx = R32((u32)(r_edx+r_ecx*8+0x8u));
    /* 0043c30a: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c30fu); f_00835090();
    /* 0043c30f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c314u); f_0082da80();
    /* 0043c314: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x43c319u); f_0082d7b0();
    /* 0043c319: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 0043c31f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c321: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x43c326u); f_00830c04();
    /* 0043c326: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c328: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0043c32a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c32c: push dword ptr [esi + 0x98] */ { u32 v = R32((u32)(r_esi+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043c332: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x43c337u); f_00830b74();
    /* 0043c337: mov edx, dword ptr [0xa44270] */ r_edx = R32((u32)(0xa44270u));
    /* 0043c33d: mov ecx, dword ptr [ebp*4 + 0x9a4ac0] */ r_ecx = R32((u32)(r_ebp*4+0x9a4ac0u));
    /* 0043c344: mov ebp, dword ptr [edx + 0x42c] */ r_ebp = R32((u32)(r_edx+0x42cu));
    /* 0043c34a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0043c34c: mov ecx, dword ptr [ebp + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebp+r_ecx*8+0x8u));
    /* 0043c350: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x43c355u); f_00835090();
    /* 0043c355: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c35au); f_0082da80();
L_0043c35a:; BB(0x0043c35a);
    /* 0043c35a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0043c35d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x43c362u); f_0082d838();
    /* 0043c362: jmp 0x43c221 */ goto L_0043c221;
L_0043c367:; BB(0x0043c367);
    /* 0043c367: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 0043c36b: mov eax, dword ptr [0xa4426c] */ r_eax = R32((u32)(0xa4426cu));
    /* 0043c370: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0043c372: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 0043c375: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x43c37au); f_0082da80();
    /* 0043c37a: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x43c37fu); f_00835078();
    /* 0043c37f: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043c382: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043c383: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043c384: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043c385: ret  */ FN_RET(0x0043bee8); r_esp += 4; return;
L_0043c386:; BB(0x0043c386);
    /* 0043c386: mov dword ptr [esp + 0x54], ebx */ W32((u32)(r_esp+0x54u), r_ebx);
    /* 0043c38a: mov ebx, eax */ r_ebx = r_eax;
    /* 0043c38c: jmp 0x43c253 */ goto L_0043c253;
L_0043c391:; BB(0x0043c391);
    /* 0043c391: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 0043c394: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0043c397: fchs  */ ST(0) = -ST(0);
    /* 0043c399: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c39c: je 0x43c3e2 */ if (fZ) goto L_0043c3e2;
L_0043c39e:; BB(0x0043c39e);
    /* 0043c39e: fld dword ptr [0x8fdadc] */ FPUSH(R_F32((u32)(0x8fdadcu)));
    /* 0043c3a4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
L_0043c3a6:; BB(0x0043c3a6);
    /* 0043c3a6: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0043c3a9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c3ac: je 0x43c3da */ if (fZ) goto L_0043c3da;
L_0043c3ae:; BB(0x0043c3ae);
    /* 0043c3ae: fsub dword ptr [0x8fdaf4] */ ST(0) = ST(0) - R_F32((u32)(0x8fdaf4u));
L_0043c3b4:; BB(0x0043c3b4);
    /* 0043c3b4: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0043c3b7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043c3ba: je 0x43c3cb */ if (fZ) goto L_0043c3cb;
L_0043c3bc:; BB(0x0043c3bc);
    /* 0043c3bc: fsub dword ptr [0x8fdadc] */ ST(0) = ST(0) - R_F32((u32)(0x8fdadcu));
    /* 0043c3c2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0043c3c6: jmp 0x43bfc8 */ goto L_0043bfc8;
L_0043c3cb:; BB(0x0043c3cb);
    /* 0043c3cb: fsub dword ptr [0x8fdad8] */ ST(0) = ST(0) - R_F32((u32)(0x8fdad8u));
    /* 0043c3d1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0043c3d5: jmp 0x43bfc8 */ goto L_0043bfc8;
L_0043c3da:; BB(0x0043c3da);
    /* 0043c3da: fsub dword ptr [0x8fdad4] */ ST(0) = ST(0) - R_F32((u32)(0x8fdad4u));
    /* 0043c3e0: jmp 0x43c3b4 */ goto L_0043c3b4;
L_0043c3e2:; BB(0x0043c3e2);
    /* 0043c3e2: fld dword ptr [0x8fdad8] */ FPUSH(R_F32((u32)(0x8fdad8u)));
    /* 0043c3e8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043c3ea: jmp 0x43c3a6 */ goto L_0043c3a6;
}

