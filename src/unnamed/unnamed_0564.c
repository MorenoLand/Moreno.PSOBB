#include "protos.h"

void f_005641c8(void) /* sub_5641C8 */
{
    FN_ENTER(0x005641c8);
    /* 005641c8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005641cf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005641d2: je 0x5641f5 */ if (fZ) goto L_005641f5;
L_005641d4:; BB(0x005641d4);
    /* 005641d4: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005641d7: je 0x5641f5 */ if (fZ) goto L_005641f5;
L_005641d9:; BB(0x005641d9);
    /* 005641d9: mov edx, 7 */ r_edx = 0x7u;
    /* 005641de: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 005641e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005641e7: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005641ee: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
L_005641f5:; BB(0x005641f5);
    /* 005641f5: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 005641fb: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005641fe: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00564201: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00564204: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00564207: and eax, 0xf99bffff */ {  u32 a = r_eax; u32 b = 0xf99bffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056420c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0056420f: ret  */ FN_RET(0x005641c8); r_esp += 4; return;
}

void f_00564210(void) /* sub_564210 */
{
    FN_ENTER(0x00564210);
    /* 00564210: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564211: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564214: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00564216: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0056421d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564220: je 0x56434d */ if (fZ) goto L_0056434d;
L_00564226:; BB(0x00564226);
    /* 00564226: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0056422c: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564231: je 0x5642a6 */ if (fZ) goto L_005642a6;
L_00564233:; BB(0x00564233);
    /* 00564233: movzx edx, word ptr [ebx + 0x334] */ r_edx = (u32)R16((u32)(r_ebx+0x334u));
    /* 0056423a: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056423d: mov dword ptr [ebx + 0x2e0], 0 */ W32((u32)(r_ebx+0x2e0u), 0x0u);
    /* 00564247: mov word ptr [ebx + 0x346], dx */ W16((u32)(r_ebx+0x346u), (u16)r_edx);
    /* 0056424e: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00564253: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00564256: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 0056425c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056425e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00564260: jle 0x56434d */ if ((fZ||fS!=fO)) goto L_0056434d;
L_00564266:; BB(0x00564266);
    /* 00564266: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 0056426a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0056426d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056426f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00564271: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564273: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564275: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00564277: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564279: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0056427b:; BB(0x0056427b);
    /* 0056427b: mov esi, dword ptr [ebx + 0xa4] */ r_esi = R32((u32)(r_ebx+0xa4u));
    /* 00564281: mov ecx, dword ptr [eax + esi + 0x18] */ r_ecx = R32((u32)(r_eax+r_esi+0x18u));
    /* 00564285: and ecx, 0xfbffffff */ {  u32 a = r_ecx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0056428b: mov dword ptr [eax + esi + 0x18], ecx */ W32((u32)(r_eax+r_esi+0x18u), r_ecx);
    /* 0056428f: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564292: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00564295: cmp edx, dword ptr [ebx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056429b: jl 0x56427b */ if ((fS!=fO)) goto L_0056427b;
L_0056429d:; BB(0x0056429d);
    /* 0056429d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 005642a1: jmp 0x56434d */ goto L_0056434d;
L_005642a6:; BB(0x005642a6);
    /* 005642a6: movzx eax, word ptr [ebx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ebx+0x2d8u));
    /* 005642ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005642ae: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5642b3u); f_0068d5a8();
    /* 005642b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005642b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005642b6: je 0x564326 */ if (fZ) goto L_00564326;
L_005642b8:; BB(0x005642b8);
    /* 005642b8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005642bb: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 005642c1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005642c4: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 005642ca: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005642d0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005642d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005642d8: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 005642de: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5642e3u); f_0082f9c4();
    /* 005642e3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005642e6: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005642ea: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005642ec: fmul qword ptr [0x925978] */ ST(0) = ST(0) * R_F64((u32)(0x925978u));
    /* 005642f2: fdiv qword ptr [0x925970] */ ST(0) = ST(0) / R_F64((u32)(0x925970u));
    /* 005642f8: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005642fc: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00564301: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00564306: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0056430a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0056430e: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00564312: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00564316: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0056431a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056431b: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056431e: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x564323u); f_007a9018();
    /* 00564323: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00564326:; BB(0x00564326);
    /* 00564326: mov eax, 8 */ r_eax = 0x8u;
    /* 0056432b: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 00564332: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00564339: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0056433c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0056433e: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 00564345: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056434a: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0056434d:; BB(0x0056434d);
    /* 0056434d: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 00564353: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00564356: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00564359: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0056435c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056435f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00564360: ret  */ FN_RET(0x00564210); r_esp += 4; return;
}

void f_00564364(void) /* sub_564364 */
{
    FN_ENTER(0x00564364);
    /* 00564364: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564365: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00564367: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0056436e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00564371: je 0x5643ac */ if (fZ) goto L_005643ac;
L_00564373:; BB(0x00564373);
    /* 00564373: mov edx, 9 */ r_edx = 0x9u;
    /* 00564378: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
    /* 0056437f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564381: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00564388: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 0056438f: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00564395: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00564398: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056439b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0056439e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005643a0: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x5643a5u); f_00787534();
    /* 005643a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005643a6: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x5643abu); f_008113e4();
    /* 005643ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005643ac:; BB(0x005643ac);
    /* 005643ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005643ad: ret  */ FN_RET(0x00564364); r_esp += 4; return;
}

void f_00564440(void)
{
    FN_ENTER(0x00564440);
    /* 00564440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564441: mov ebp, esp */ r_ebp = r_esp;
    /* 00564443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00564445: push 0x8d6816 */ { u32 v = 0x8d6816u; r_esp -= 4; W32(r_esp, v); }
    /* 0056444a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00564450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564451: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00564458: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056445b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056445e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00564461: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00564464: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00564467: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x56446cu); f_00482a20();
    /* 0056446c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0056446f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564471: jne 0x5644ca */ if (!fZ) goto L_005644ca;
L_00564473:; BB(0x00564473);
    /* 00564473: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056447a: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0056447f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x564484u); f_008581c5();
    /* 00564484: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00564485: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00564488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056448a: je 0x5645fb */ if (fZ) goto L_005645fb;
L_00564490:; BB(0x00564490);
    /* 00564490: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00564497: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056449e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005644a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005644a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005644a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005644a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005644a6: push 0x9be298 */ { u32 v = 0x9be298u; r_esp -= 4; W32(r_esp, v); }
    /* 005644ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005644ad: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5644b2u); f_005b7a84();
    /* 005644b2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005644b5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005644bc: mov dword ptr [0xa73ce0], eax */ W32((u32)(0xa73ce0u), r_eax);
    /* 005644c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005644c8: jmp 0x56451f */ goto L_0056451f;
L_005644ca:; BB(0x005644ca);
    /* 005644ca: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005644d1: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005644d6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5644dbu); f_008581c5();
    /* 005644db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005644dc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005644df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005644e1: je 0x564602 */ if (fZ) goto L_00564602;
L_005644e7:; BB(0x005644e7);
    /* 005644e7: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005644ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005644f5: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005644f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005644fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005644fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005644fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005644fd: push 0x9be254 */ { u32 v = 0x9be254u; r_esp -= 4; W32(r_esp, v); }
    /* 00564502: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564504: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x564509u); f_005b7a84();
    /* 00564509: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056450c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00564513:; BB(0x00564513);
    /* 00564513: mov dword ptr [0xa73ce0], eax */ W32((u32)(0xa73ce0u), r_eax);
    /* 00564518: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0056451f:; BB(0x0056451f);
    /* 0056451f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00564521: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564523: mov dword ptr [0xa73cf8], eax */ W32((u32)(0xa73cf8u), r_eax);
    /* 00564528: mov dword ptr [0xa73cf4], eax */ W32((u32)(0xa73cf4u), r_eax);
    /* 0056452d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x564532u); f_008581c5();
    /* 00564532: mov dword ptr [0xa73cec], eax */ W32((u32)(0xa73cecu), r_eax);
    /* 00564537: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564539: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56453eu); f_0077a684();
    /* 0056453e: mov dword ptr [0xa73cf0], eax */ W32((u32)(0xa73cf0u), r_eax);
    /* 00564543: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564545: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56454au); f_0077a698();
    /* 0056454a: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 00564550: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 00564552: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00564554: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x564559u); f_0077a698();
    /* 00564559: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 0056455f: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00564561: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00564564: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x564569u); f_0077a698();
    /* 00564569: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 0056456f: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564571: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00564574: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x564579u); f_0077a6b4();
    /* 00564579: mov dword ptr [0xa73ce8], eax */ W32((u32)(0xa73ce8u), r_eax);
    /* 0056457e: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564580: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x564585u); f_0077a6cc();
    /* 00564585: movzx edx, word ptr [0x925964] */ r_edx = (u32)R16((u32)(0x925964u));
    /* 0056458c: movzx ecx, word ptr [0x925966] */ r_ecx = (u32)R16((u32)(0x925966u));
    /* 00564593: movzx ebx, word ptr [0x925968] */ r_ebx = (u32)R16((u32)(0x925968u));
    /* 0056459a: mov edi, dword ptr [0xa73ce0] */ r_edi = R32((u32)(0xa73ce0u));
    /* 005645a0: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005645a6: mov dword ptr [0xa73ce4], eax */ W32((u32)(0xa73ce4u), r_eax);
    /* 005645ab: mov eax, dword ptr [0x925960] */ r_eax = R32((u32)(0x925960u));
    /* 005645b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005645b3: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005645b7: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005645bd: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005645c1: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005645c5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005645c8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005645cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005645cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005645ce: push dword ptr [0x9be0ec] */ { u32 v = R32((u32)(0x9be0ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005645d4: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005645d7: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005645da: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005645dc: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5645e1u); f_00608470();
    /* 005645e1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005645e4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005645e7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005645ea: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005645ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005645f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005645f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005645f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005645fa: ret  */ FN_RET(0x00564440); r_esp += 4; return;
L_005645fb:; BB(0x005645fb);
    /* 005645fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005645fd: jmp 0x5644bc */ f_005644bc(); return;
L_00564602:; BB(0x00564602);
    /* 00564602: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564604: jmp 0x564513 */ goto L_00564513;
}

void f_0056460c(void) /* sub_56460C */
{
    FN_ENTER(0x0056460c);
    /* 0056460c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056460d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056460f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00564611: call 0x564630 */ r_esp -= 4; W32(r_esp, 0x564616u); f_00564630();
    /* 00564616: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056461a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056461c: jne 0x564622 */ if (!fZ) goto L_00564622;
L_0056461e:; BB(0x0056461e);
    /* 0056461e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056461f: ret 4 */ FN_RET(0x0056460c); r_esp += 8; return;
L_00564622:; BB(0x00564622);
    /* 00564622: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564623: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x564628u); f_005c2f74();
    /* 00564628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00564629: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056462a: ret 4 */ FN_RET(0x0056460c); r_esp += 8; return;
}

void f_00564630(void) /* sub_564630 */
{
    FN_ENTER(0x00564630);
    /* 00564630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564631: mov ebp, esp */ r_ebp = r_esp;
    /* 00564633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00564635: push 0x8d687c */ { u32 v = 0x8d687cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056463a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00564640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564641: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00564648: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056464b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056464e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00564651: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00564654: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00564657: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056465a: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00564661: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00564664: mov ecx, dword ptr [eax + 0x514] */ r_ecx = R32((u32)(r_eax+0x514u));
    /* 0056466a: mov dword ptr [eax], 0xb05740 */ W32((u32)(r_eax), 0xb05740u);
    /* 00564670: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564672: je 0x564699 */ if (fZ) goto L_00564699;
L_00564674:; BB(0x00564674);
    /* 00564674: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x564679u); f_007b9c8c();
    /* 00564679: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056467c: mov ecx, dword ptr [eax + 0x514] */ r_ecx = R32((u32)(r_eax+0x514u));
    /* 00564682: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564684: je 0x56468f */ if (fZ) goto L_0056468f;
L_00564686:; BB(0x00564686);
    /* 00564686: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564688: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056468a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x56468cu); call_ind(t); }
    /* 0056468c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0056468f:; BB(0x0056468f);
    /* 0056468f: mov dword ptr [eax + 0x514], 0 */ W32((u32)(r_eax+0x514u), 0x0u);
L_00564699:; BB(0x00564699);
    /* 00564699: mov ecx, eax */ r_ecx = r_eax;
    /* 0056469b: call 0x56470c */ r_esp -= 4; W32(r_esp, 0x5646a0u); f_0056470c();
    /* 005646a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005646a3: mov eax, dword ptr [ecx + 0x46c] */ r_eax = R32((u32)(r_ecx+0x46cu));
    /* 005646a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005646ab: je 0x5646b5 */ if (fZ) goto L_005646b5;
L_005646ad:; BB(0x005646ad);
    /* 005646ad: call 0x564720 */ r_esp -= 4; W32(r_esp, 0x5646b2u); f_00564720();
    /* 005646b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_005646b5:; BB(0x005646b5);
    /* 005646b5: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5646bau); f_007b9c8c();
    /* 005646ba: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005646c1: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005646c6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005646c9: add eax, 0x3fc */ {  u32 a = r_eax; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005646ce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005646d0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005646d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005646d3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5646d8u); f_008586d6();
    /* 005646d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005646df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005646e2: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005646e8: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5646edu); f_005769f8();
    /* 005646ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005646f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005646f7: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x5646fcu); f_0051f4fc();
    /* 005646fc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005646ff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00564706: mov esp, ebp */ r_esp = r_ebp;
    /* 00564708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564709: ret  */ FN_RET(0x00564630); r_esp += 4; return;
}

void f_0056470c(void) /* sub_56470C */
{
    FN_ENTER(0x0056470c);
    /* 0056470c: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564712: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564713: mov ecx, 0xa73d68 */ r_ecx = 0xa73d68u;
    /* 00564718: call 0x51b158 */ r_esp -= 4; W32(r_esp, 0x56471du); f_0051b158();
    /* 0056471d: ret  */ FN_RET(0x0056470c); r_esp += 4; return;
}

void f_00564720(void) /* sub_564720 */
{
    FN_ENTER(0x00564720);
    /* 00564720: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564726: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564727: mov ecx, 0xa73d60 */ r_ecx = 0xa73d60u;
    /* 0056472c: call 0x51b158 */ r_esp -= 4; W32(r_esp, 0x564731u); f_0051b158();
    /* 00564731: ret  */ FN_RET(0x00564720); r_esp += 4; return;
}

void f_00564734(void) /* sub_564734 */
{
    FN_ENTER(0x00564734);
    /* 00564734: mov eax, dword ptr [0xa73d5c] */ r_eax = R32((u32)(0xa73d5cu));
    /* 00564739: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056473c: jl 0x564743 */ if ((fS!=fO)) goto L_00564743;
L_0056473e:; BB(0x0056473e);
    /* 0056473e: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564741: jl 0x56474c */ if ((fS!=fO)) goto L_0056474c;
L_00564743:; BB(0x00564743);
    /* 00564743: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00564746: mov dword ptr [0xa73d5c], eax */ W32((u32)(0xa73d5cu), r_eax);
    /* 0056474b: ret  */ FN_RET(0x00564734); r_esp += 4; return;
L_0056474c:; BB(0x0056474c);
    /* 0056474c: mov edx, dword ptr [0xa73d58] */ r_edx = R32((u32)(0xa73d58u));
    /* 00564752: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00564754: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x564759u); f_0082d8bc();
    /* 00564759: mov eax, dword ptr [0xa73d5c] */ r_eax = R32((u32)(0xa73d5cu));
    /* 0056475e: jmp 0x564743 */ goto L_00564743;
}

void f_00564760(void) /* sub_564760 */
{
    FN_ENTER(0x00564760);
    /* 00564760: mov eax, dword ptr [ecx + 0x46c] */ r_eax = R32((u32)(r_ecx+0x46cu));
    /* 00564766: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564768: je 0x564775 */ if (fZ) goto L_00564775;
L_0056476a:; BB(0x0056476a);
    /* 0056476a: push 0x43af0000 */ { u32 v = 0x43af0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056476f: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x564774u); f_00520ea0();
    /* 00564774: ret  */ FN_RET(0x00564760); r_esp += 4; return;
L_00564775:; BB(0x00564775);
    /* 00564775: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056477a: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x56477fu); f_00520ea0();
    /* 0056477f: ret  */ FN_RET(0x00564760); r_esp += 4; return;
}

void f_00564780(void) /* sub_564780 */
{
    FN_ENTER(0x00564780);
    /* 00564780: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564781: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564784: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00564786: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00564789: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x56478eu); f_0082dcbc();
    /* 0056478e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00564792: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00564796: fmul dword ptr [0x926014] */ ST(0) = ST(0) * R_F32((u32)(0x926014u));
    /* 0056479c: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0056479f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 005647a2: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005647a6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5647abu); f_0082ddd8();
    /* 005647ab: fmul dword ptr [0x926014] */ ST(0) = ST(0) * R_F32((u32)(0x926014u));
    /* 005647b1: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 005647b4: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005647ba: fsubr dword ptr [eax + 0x40] */ ST(0) = R_F32((u32)(r_eax+0x40u)) - ST(0);
    /* 005647bd: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005647c0: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 005647c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005647c6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005647c8: fmul qword ptr [0x925d50] */ ST(0) = ST(0) * R_F64((u32)(0x925d50u));
    /* 005647ce: fdiv qword ptr [0x925d48] */ ST(0) = ST(0) / R_F64((u32)(0x925d48u));
    /* 005647d4: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005647d7: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005647db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005647e0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005647e4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005647e8: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005647ec: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005647ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005647f1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005647f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005647f6: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x5647fbu); f_00564800();
    /* 005647fb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005647fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005647ff: ret  */ FN_RET(0x00564780); r_esp += 4; return;
}

void f_00564800(void) /* sub_564800 */
{
    FN_ENTER(0x00564800);
    /* 00564800: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564801: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564802: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00564804: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00564808: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056480b: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x564810u); f_007a900c();
    /* 00564810: mov ebx, eax */ r_ebx = r_eax;
    /* 00564812: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564815: mov eax, dword ptr [ebp + 0x480] */ r_eax = R32((u32)(r_ebp+0x480u));
    /* 0056481b: mov edx, 0xffffd000 */ r_edx = 0xffffd000u;
    /* 00564820: cmp ebx, 0xffffd000 */ {  u32 a = r_ebx; u32 b = 0xffffd000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564826: jge 0x56482a */ if ((fS==fO)) goto L_0056482a;
L_00564828:; BB(0x00564828);
    /* 00564828: mov ebx, edx */ r_ebx = r_edx;
L_0056482a:; BB(0x0056482a);
    /* 0056482a: mov edx, 0x3000 */ r_edx = 0x3000u;
    /* 0056482f: cmp ebx, 0x3000 */ {  u32 a = r_ebx; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00564835: jl 0x564839 */ if ((fS!=fO)) goto L_00564839;
L_00564837:; BB(0x00564837);
    /* 00564837: mov ebx, edx */ r_ebx = r_edx;
L_00564839:; BB(0x00564839);
    /* 00564839: mov edx, ebx */ r_edx = r_ebx;
    /* 0056483b: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056483e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00564840: jl 0x564861 */ if ((fS!=fO)) goto L_00564861;
L_00564842:; BB(0x00564842);
    /* 00564842: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00564847: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564849: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x56484eu); f_007a8c74();
    /* 0056484e: mov edx, eax */ r_edx = r_eax;
    /* 00564850: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00564853:; BB(0x00564853);
    /* 00564853: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00564856: mov dword ptr [ebp + 0x480], eax */ W32((u32)(r_ebp+0x480u), r_eax);
    /* 0056485c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056485d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056485e: ret 4 */ FN_RET(0x00564800); r_esp += 8; return;
L_00564861:; BB(0x00564861);
    /* 00564861: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564862: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564863: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x564868u); f_007a900c();
    /* 00564868: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056486b: mov edx, dword ptr [ebp + 0x480] */ r_edx = R32((u32)(r_ebp+0x480u));
    /* 00564871: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00564874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00564876: jl 0x56488c */ if ((fS!=fO)) goto L_0056488c;
L_00564878:; BB(0x00564878);
    /* 00564878: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0056487a: jl 0x564884 */ if ((fS!=fO)) goto L_00564884;
L_0056487c:; BB(0x0056487c);
    /* 0056487c: add edx, 0xfffffc00 */ {  u32 a = r_edx; u32 b = 0xfffffc00u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00564882: jmp 0x564853 */ goto L_00564853;
L_00564884:; BB(0x00564884);
    /* 00564884: add edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056488a: jmp 0x564853 */ goto L_00564853;
L_0056488c:; BB(0x0056488c);
    /* 0056488c: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 00564891: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564893: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x564898u); f_007a8c74();
    /* 00564898: mov edx, eax */ r_edx = r_eax;
    /* 0056489a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056489d: jmp 0x564853 */ goto L_00564853;
}

void f_005648a0(void) /* sub_5648A0 */
{
    FN_ENTER(0x005648a0);
    /* 005648a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005648a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005648a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005648a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005648a4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005648a7: mov edi, ecx */ r_edi = r_ecx;
    /* 005648a9: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005648ad: fld dword ptr [0x926010] */ FPUSH(R_F32((u32)(0x926010u)));
    /* 005648b3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005648b5: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005648b8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005648bb: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005648be: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005648c2: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005648c6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005648ca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005648ce: lea eax, [edi + 0x128] */ r_eax = (u32)(r_edi+0x128u);
    /* 005648d4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005648d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005648d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005648da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005648db: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x5648e0u); f_007806dc();
    /* 005648e0: mov esi, eax */ r_esi = r_eax;
    /* 005648e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005648e5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005648e7: je 0x564983 */ if (fZ) goto L_00564983;
L_005648ed:; BB(0x005648ed);
    /* 005648ed: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005648ef: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005648f2: je 0x564983 */ if (fZ) goto L_00564983;
L_005648f8:; BB(0x005648f8);
    /* 005648f8: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005648fa: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005648fd: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00564900: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564901: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x564906u); f_0050b510();
    /* 00564906: mov ebp, eax */ r_ebp = r_eax;
    /* 00564908: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056490b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056490d: je 0x56494d */ if (fZ) goto L_0056494d;
L_0056490f:; BB(0x0056490f);
    /* 0056490f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00564911: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x564916u); f_0050c094();
    /* 00564916: mov ebx, eax */ r_ebx = r_eax;
    /* 00564918: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056491b: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x564920u); f_0050c08c();
    /* 00564920: movzx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 00564924: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 0056492b: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 0056492e: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 00564931: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 00564938: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056493e: mov word ptr [ebp + 0x2c], dx */ W16((u32)(r_ebp+0x2cu), (u16)r_edx);
    /* 00564942: mov ebx, dword ptr [edi + 0x46c] */ r_ebx = R32((u32)(r_edi+0x46cu));
    /* 00564948: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056494b: je 0x5649a7 */ if (fZ) goto L_005649a7;
L_0056494d:; BB(0x0056494d);
    /* 0056494d: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00564952: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00564955: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564958: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564959: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x56495eu); f_0050b510();
    /* 0056495e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564961: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564963: je 0x564970 */ if (fZ) goto L_00564970;
L_00564965:; BB(0x00564965);
    /* 00564965: mov edx, dword ptr [edi + 0x46c] */ r_edx = R32((u32)(r_edi+0x46cu));
    /* 0056496b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056496e: je 0x5649b8 */ if (fZ) goto L_005649b8;
L_00564970:; BB(0x00564970);
    /* 00564970: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00564973: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00564974: call 0x578b50 */ r_esp -= 4; W32(r_esp, 0x564979u); f_00578b50();
    /* 00564979: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056497c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056497d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056497e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056497f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00564980: ret 4 */ FN_RET(0x005648a0); r_esp += 8; return;
L_00564983:; BB(0x00564983);
    /* 00564983: push 0x22e */ { u32 v = 0x22eu; r_esp -= 4; W32(r_esp, v); }
    /* 00564988: mov ecx, edi */ r_ecx = r_edi;
    /* 0056498a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56498fu); f_007879b8();
    /* 0056498f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00564992: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00564994: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564995: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564996: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00564997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564998: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56499du); f_00814298();
    /* 0056499d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005649a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005649a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005649a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005649a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005649a4: ret 4 */ FN_RET(0x005648a0); r_esp += 8; return;
L_005649a7:; BB(0x005649a7);
    /* 005649a7: mov dword ptr [ebp + 0x44], 0x3fc00000 */ W32((u32)(r_ebp+0x44u), 0x3fc00000u);
    /* 005649ae: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 005649b3: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 005649b6: jmp 0x56494d */ goto L_0056494d;
L_005649b8:; BB(0x005649b8);
    /* 005649b8: mov dword ptr [eax + 0x44], 0x3fc00000 */ W32((u32)(r_eax+0x44u), 0x3fc00000u);
    /* 005649bf: mov dword ptr [eax + 0x48], 0x3f800000 */ W32((u32)(r_eax+0x48u), 0x3f800000u);
    /* 005649c6: jmp 0x564970 */ goto L_00564970;
}

void f_005649c8(void)
{
    FN_ENTER(0x005649c8);
    /* 005649c8: mov ecx, dword ptr [0xa73d28] */ r_ecx = R32((u32)(0xa73d28u));
    /* 005649ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005649d0: je 0x5649e5 */ if (fZ) goto L_005649e5;
L_005649d2:; BB(0x005649d2);
    /* 005649d2: je 0x5649db */ if (fZ) goto L_005649db;
L_005649d4:; BB(0x005649d4);
    /* 005649d4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005649d6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5649dbu); f_004066a8();
L_005649db:; BB(0x005649db);
    /* 005649db: mov dword ptr [0xa73d28], 0 */ W32((u32)(0xa73d28u), 0x0u);
L_005649e5:; BB(0x005649e5);
    /* 005649e5: ret  */ FN_RET(0x005649c8); r_esp += 4; return;
}

void f_005649e8(void)
{
    FN_ENTER(0x005649e8);
    /* 005649e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005649e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005649eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005649ed: push 0x8d68a4 */ { u32 v = 0x8d68a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005649f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005649f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005649f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00564a00: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564a03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00564a06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00564a09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00564a0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00564a0f: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00564a14: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00564a1b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x564a20u); f_005caba4();
    /* 00564a20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00564a21: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00564a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564a26: je 0x564a5f */ if (fZ) goto L_00564a5f;
L_00564a28:; BB(0x00564a28);
    /* 00564a28: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00564a2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00564a36: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00564a39: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00564a3f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00564a42: call 0x564a64 */ r_esp -= 4; W32(r_esp, 0x564a47u); f_00564a64();
    /* 00564a47: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00564a4a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00564a51:; BB(0x00564a51);
    /* 00564a51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564a54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00564a5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00564a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564a5e: ret  */ FN_RET(0x005649e8); r_esp += 4; return;
L_00564a5f:; BB(0x00564a5f);
    /* 00564a5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00564a61: jmp 0x564a51 */ goto L_00564a51;
}

void f_00564a64(void) /* sub_564A64 */
{
    FN_ENTER(0x00564a64);
    /* 00564a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564a65: mov ebp, esp */ r_ebp = r_esp;
    /* 00564a67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00564a69: push 0x8d6910 */ { u32 v = 0x8d6910u; r_esp -= 4; W32(r_esp, v); }
    /* 00564a6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00564a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564a75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00564a7c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564a7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00564a82: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00564a85: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00564a88: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00564a8b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00564a8e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00564a91: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00564a94: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00564a97: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x564a9cu); f_005216f4();
    /* 00564a9c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00564aa3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564aa6: mov dword ptr [ecx], 0xb05740 */ W32((u32)(r_ecx), 0xb05740u);
    /* 00564aac: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564ab2: call 0x564e84 */ r_esp -= 4; W32(r_esp, 0x564ab7u); f_00564e84();
    /* 00564ab7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00564abe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564ac1: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564ac7: call 0x564e84 */ r_esp -= 4; W32(r_esp, 0x564accu); f_00564e84();
    /* 00564acc: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00564ad3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564ad6: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564adc: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x564ae1u); f_00576a48();
    /* 00564ae1: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00564ae8: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00564aed: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00564af2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564af5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00564af7: add eax, 0x3fc */ {  u32 a = r_eax; u32 b = 0x3fcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564afc: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00564afe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564aff: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x564b04u); f_00858736();
    /* 00564b04: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00564b0b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564b0e: lea ebx, [edi + 0x4bc] */ r_ebx = (u32)(r_edi+0x4bcu);
    /* 00564b14: mov esi, 0xb */ r_esi = 0xbu;
    /* 00564b19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00564b1b:; BB(0x00564b1b);
    /* 00564b1b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00564b20: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 00564b23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00564b25: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 00564b29: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00564b2c: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00564b2f: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00564b32: jne 0x564b1b */ if (!fZ) goto L_00564b1b;
L_00564b34:; BB(0x00564b34);
    /* 00564b34: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00564b37: mov dword ptr [edi + 0x4b8], 0 */ W32((u32)(r_edi+0x4b8u), 0x0u);
    /* 00564b41: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564b44: mov eax, dword ptr [0x9be538] */ r_eax = R32((u32)(0x9be538u));
    /* 00564b49: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00564b4a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00564b4d: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x564b52u); f_0051f750();
    /* 00564b52: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564b55: call 0x564e98 */ r_esp -= 4; W32(r_esp, 0x564b5au); f_00564e98();
    /* 00564b5a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564b5d: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x564b62u); f_00521840();
    /* 00564b62: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564b65: mov eax, dword ptr [ecx + 0x46c] */ r_eax = R32((u32)(r_ecx+0x46cu));
    /* 00564b6b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564b6e: je 0x564e73 */ if (fZ) goto L_00564e73;
L_00564b74:; BB(0x00564b74);
    /* 00564b74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564b76: push 0x9be2e0 */ { u32 v = 0x9be2e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564b7b: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x564b80u); f_0051ff3c();
L_00564b80:; BB(0x00564b80);
    /* 00564b80: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564b83: mov eax, dword ptr [0xa73d28] */ r_eax = R32((u32)(0xa73d28u));
    /* 00564b88: mov dword ptr [ecx + 0xd8], 0x9be3a0 */ W32((u32)(r_ecx+0xd8u), 0x9be3a0u);
    /* 00564b92: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00564b98: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00564b9e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00564ba0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00564ba1: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00564ba8: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x564badu); f_007aa4c8();
    /* 00564bad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564bb0: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00564bb7: mov edx, dword ptr [ecx + 0x46c] */ r_edx = R32((u32)(r_ecx+0x46cu));
    /* 00564bbd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00564bc4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564bc6: je 0x564bcf */ if (fZ) goto L_00564bcf;
L_00564bc8:; BB(0x00564bc8);
    /* 00564bc8: mov eax, 1 */ r_eax = 0x1u;
    /* 00564bcd: jmp 0x564bd1 */ goto L_00564bd1;
L_00564bcf:; BB(0x00564bcf);
    /* 00564bcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00564bd1:; BB(0x00564bd1);
    /* 00564bd1: push dword ptr [eax*4 + 0xa73d34] */ { u32 v = R32((u32)(r_eax*4+0xa73d34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00564bd8: push dword ptr [eax*4 + 0xa73d3c] */ { u32 v = R32((u32)(r_eax*4+0xa73d3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00564bdf: push dword ptr [eax*4 + 0xa73d44] */ { u32 v = R32((u32)(r_eax*4+0xa73d44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00564be6: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x564bebu); f_00520c70();
    /* 00564beb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564bee: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x564bf3u); f_00520350();
    /* 00564bf3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564bf6: mov eax, dword ptr [ecx + 0x46c] */ r_eax = R32((u32)(r_ecx+0x46cu));
    /* 00564bfc: mov dword ptr [ecx + 0x358], 0x9be53c */ W32((u32)(r_ecx+0x358u), 0x9be53cu);
    /* 00564c06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c08: je 0x564c13 */ if (fZ) goto L_00564c13;
L_00564c0a:; BB(0x00564c0a);
    /* 00564c0a: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00564c0c: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x564c11u); f_00520390();
    /* 00564c11: jmp 0x564c1a */ goto L_00564c1a;
L_00564c13:; BB(0x00564c13);
    /* 00564c13: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 00564c15: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x564c1au); f_00520390();
L_00564c1a:; BB(0x00564c1a);
    /* 00564c1a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c1d: mov dword ptr [ecx + 0x384], 0x41700000 */ W32((u32)(r_ecx+0x384u), 0x41700000u);
    /* 00564c27: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00564c29: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x564c2eu); f_00521820();
    /* 00564c2e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c31: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00564c33: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x564c38u); f_005217fc();
    /* 00564c38: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564c3c: lea ecx, [eax + 0x3c8] */ r_ecx = (u32)(r_eax+0x3c8u);
    /* 00564c42: call 0x51b708 */ r_esp -= 4; W32(r_esp, 0x564c47u); f_0051b708();
    /* 00564c47: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c4a: call 0x564f8c */ r_esp -= 4; W32(r_esp, 0x564c4fu); f_00564f8c();
    /* 00564c4f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c52: mov edx, dword ptr [eax + 0x46c] */ r_edx = R32((u32)(r_eax+0x46cu));
    /* 00564c58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564c5a: je 0x564c73 */ if (fZ) goto L_00564c73;
L_00564c5c:; BB(0x00564c5c);
    /* 00564c5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564c5d: lea ecx, [eax + 0x3d4] */ r_ecx = (u32)(r_eax+0x3d4u);
    /* 00564c63: call 0x51b708 */ r_esp -= 4; W32(r_esp, 0x564c68u); f_0051b708();
    /* 00564c68: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c6b: call 0x564fa0 */ r_esp -= 4; W32(r_esp, 0x564c70u); f_00564fa0();
    /* 00564c70: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_00564c73:; BB(0x00564c73);
    /* 00564c73: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00564c76: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 00564c79: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 00564c7c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00564c81: mov word ptr [eax + 0x47c], dx */ W16((u32)(r_eax+0x47cu), (u16)r_edx);
    /* 00564c88: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
    /* 00564c92: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00564c97: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00564c99: mov dword ptr [eax + 0x4a0], 0 */ W32((u32)(r_eax+0x4a0u), 0x0u);
    /* 00564ca3: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00564ca6: mov dword ptr [eax + 0x480], edi */ W32((u32)(r_eax+0x480u), r_edi);
    /* 00564cac: mov dword ptr [eax + 0x484], ecx */ W32((u32)(r_eax+0x484u), r_ecx);
    /* 00564cb2: mov dword ptr [eax + 0x488], ebx */ W32((u32)(r_eax+0x488u), r_ebx);
    /* 00564cb8: mov dword ptr [eax + 0x48c], esi */ W32((u32)(r_eax+0x48cu), r_esi);
    /* 00564cbe: mov dword ptr [eax + 0x490], ecx */ W32((u32)(r_eax+0x490u), r_ecx);
    /* 00564cc4: mov dword ptr [eax + 0x494], ebx */ W32((u32)(r_eax+0x494u), r_ebx);
    /* 00564cca: mov dword ptr [eax + 0x498], esi */ W32((u32)(r_eax+0x498u), r_esi);
    /* 00564cd0: mov dword ptr [eax + 0x4b4], edi */ W32((u32)(r_eax+0x4b4u), r_edi);
    /* 00564cd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x564cdbu); f_005caba4();
    /* 00564cdb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00564cde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564ce1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00564ce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564ce6: je 0x564e69 */ if (fZ) goto L_00564e69;
L_00564cec:; BB(0x00564cec);
    /* 00564cec: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00564cf3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00564cfa: mov ecx, eax */ r_ecx = r_eax;
    /* 00564cfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564cfe: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x564d03u); f_007b4b48();
    /* 00564d03: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00564d0a:; BB(0x00564d0a);
    /* 00564d0a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564d0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00564d10: mov dword ptr [edx + 0x514], eax */ W32((u32)(r_edx+0x514u), r_eax);
    /* 00564d16: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00564d1d: mov ecx, eax */ r_ecx = r_eax;
    /* 00564d1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564d21: push 0x9be338 */ { u32 v = 0x9be338u; r_esp -= 4; W32(r_esp, v); }
    /* 00564d26: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x564d2bu); f_007b9a88();
    /* 00564d2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564d2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00564d30: mov dword ptr [ecx + 0x518], 0 */ W32((u32)(r_ecx+0x518u), 0x0u);
    /* 00564d3a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00564d3f: mov word ptr [ecx + 0x51c], ax */ W16((u32)(r_ecx+0x51cu), (u16)r_eax);
    /* 00564d46: call dword ptr [edx + 0x190] */ { u32 t = R32((u32)(r_edx+0x190u)); r_esp -= 4; W32(r_esp, 0x564d4cu); call_ind(t); }
    /* 00564d4c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564d4f: mov dword ptr [ecx + 0x538], 0 */ W32((u32)(r_ecx+0x538u), 0x0u);
    /* 00564d59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564d5b: mov dword ptr [ecx + 0x520], eax */ W32((u32)(r_ecx+0x520u), r_eax);
    /* 00564d61: mov dword ptr [ecx + 0x53c], 0 */ W32((u32)(r_ecx+0x53cu), 0x0u);
    /* 00564d6b: mov dword ptr [ecx + 0x524], eax */ W32((u32)(r_ecx+0x524u), r_eax);
    /* 00564d71: mov dword ptr [ecx + 0x528], eax */ W32((u32)(r_ecx+0x528u), r_eax);
    /* 00564d77: mov dword ptr [ecx + 0x52c], eax */ W32((u32)(r_ecx+0x52cu), r_eax);
    /* 00564d7d: mov dword ptr [ecx + 0x540], 0 */ W32((u32)(r_ecx+0x540u), 0x0u);
    /* 00564d87: mov dword ptr [ecx + 0x530], eax */ W32((u32)(r_ecx+0x530u), r_eax);
    /* 00564d8d: mov dword ptr [ecx + 0x534], eax */ W32((u32)(r_ecx+0x534u), r_eax);
    /* 00564d93: mov dword ptr [ecx + 0x56c], eax */ W32((u32)(r_ecx+0x56cu), r_eax);
    /* 00564d99: mov dword ptr [ecx + 0x544], 0 */ W32((u32)(r_ecx+0x544u), 0x0u);
    /* 00564da3: mov dword ptr [ecx + 0x548], 0 */ W32((u32)(r_ecx+0x548u), 0x0u);
    /* 00564dad: mov dword ptr [ecx + 0x54c], 0 */ W32((u32)(r_ecx+0x54cu), 0x0u);
    /* 00564db7: mov dword ptr [ecx + 0x550], 0 */ W32((u32)(r_ecx+0x550u), 0x0u);
    /* 00564dc1: mov dword ptr [ecx + 0x554], 0 */ W32((u32)(r_ecx+0x554u), 0x0u);
    /* 00564dcb: mov dword ptr [ecx + 0x558], 0 */ W32((u32)(r_ecx+0x558u), 0x0u);
    /* 00564dd5: mov dword ptr [ecx + 0x55c], 0 */ W32((u32)(r_ecx+0x55cu), 0x0u);
    /* 00564ddf: mov dword ptr [ecx + 0x560], 0 */ W32((u32)(r_ecx+0x560u), 0x0u);
    /* 00564de9: mov dword ptr [ecx + 0x564], 0 */ W32((u32)(r_ecx+0x564u), 0x0u);
    /* 00564df3: mov dword ptr [ecx + 0x568], 0 */ W32((u32)(r_ecx+0x568u), 0x0u);
    /* 00564dfd: call 0x564fb4 */ r_esp -= 4; W32(r_esp, 0x564e02u); f_00564fb4();
    /* 00564e02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e05: call 0x564fe0 */ r_esp -= 4; W32(r_esp, 0x564e0au); f_00564fe0();
    /* 00564e0a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e0d: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x564e12u); f_0051ffdc();
    /* 00564e12: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00564e17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564e19: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00564e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564e21: call 0x564ff0 */ r_esp -= 4; W32(r_esp, 0x564e26u); f_00564ff0();
    /* 00564e26: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00564e28:; BB(0x00564e28);
    /* 00564e28: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e2b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00564e2e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564e30: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00564e33: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00564e35: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00564e37: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00564e39: lea ecx, [edx + esi + 0x3fc] */ r_ecx = (u32)(r_edx+r_esi+0x3fcu);
    /* 00564e40: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x564e45u); f_0057739c();
    /* 00564e45: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00564e48: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00564e4b: jl 0x564e28 */ if ((fS!=fO)) goto L_00564e28;
L_00564e4d:; BB(0x00564e4d);
    /* 00564e4d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e50: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00564e53: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00564e56: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564e59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564e5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00564e63: mov esp, ebp */ r_esp = r_ebp;
    /* 00564e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564e66: ret 8 */ FN_RET(0x00564a64); r_esp += 12; return;
L_00564e69:; BB(0x00564e69);
    /* 00564e69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564e6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00564e6e: jmp 0x564d0a */ goto L_00564d0a;
L_00564e73:; BB(0x00564e73);
    /* 00564e73: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564e75: push 0x9be30c */ { u32 v = 0x9be30cu; r_esp -= 4; W32(r_esp, v); }
    /* 00564e7a: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x564e7fu); f_0051ff3c();
    /* 00564e7f: jmp 0x564b80 */ goto L_00564b80;
}

void f_00564c60(void)
{
    FN_ENTER(0x00564c60);
    /* 00564c60: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564c62: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00564c64: mov al, byte ptr [0x8bfffb6a] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8bfffb6au))) & 0xffu);
    /* 00564c69: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00564c6a: fsub st(0), st(0) */ ST(0) = ST(0) - ST(0);
    /* 00564c6c: xor byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00564c6e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00564c70: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564c73: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00564c76: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 00564c79: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 00564c7c: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00564c81: mov word ptr [eax + 0x47c], dx */ W16((u32)(r_eax+0x47cu), (u16)r_edx);
    /* 00564c88: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
    /* 00564c92: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00564c97: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00564c99: mov dword ptr [eax + 0x4a0], 0 */ W32((u32)(r_eax+0x4a0u), 0x0u);
    /* 00564ca3: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00564ca6: mov dword ptr [eax + 0x480], edi */ W32((u32)(r_eax+0x480u), r_edi);
    /* 00564cac: mov dword ptr [eax + 0x484], ecx */ W32((u32)(r_eax+0x484u), r_ecx);
    /* 00564cb2: mov dword ptr [eax + 0x488], ebx */ W32((u32)(r_eax+0x488u), r_ebx);
    /* 00564cb8: mov dword ptr [eax + 0x48c], esi */ W32((u32)(r_eax+0x48cu), r_esi);
    /* 00564cbe: mov dword ptr [eax + 0x490], ecx */ W32((u32)(r_eax+0x490u), r_ecx);
    /* 00564cc4: mov dword ptr [eax + 0x494], ebx */ W32((u32)(r_eax+0x494u), r_ebx);
    /* 00564cca: mov dword ptr [eax + 0x498], esi */ W32((u32)(r_eax+0x498u), r_esi);
    /* 00564cd0: mov dword ptr [eax + 0x4b4], edi */ W32((u32)(r_eax+0x4b4u), r_edi);
    /* 00564cd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x564cdbu); f_005caba4();
    /* 00564cdb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00564cde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00564ce1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00564ce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00564ce6: je 0x564e69 */ if (fZ) goto L_00564e69;
L_00564cec:; BB(0x00564cec);
    /* 00564cec: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00564cf3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00564cfa: mov ecx, eax */ r_ecx = r_eax;
    /* 00564cfc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00564cfe: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x564d03u); f_007b4b48();
    /* 00564d03: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00564d0a:; BB(0x00564d0a);
    /* 00564d0a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564d0d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00564d10: mov dword ptr [edx + 0x514], eax */ W32((u32)(r_edx+0x514u), r_eax);
    /* 00564d16: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00564d1d: mov ecx, eax */ r_ecx = r_eax;
    /* 00564d1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00564d21: push 0x9be338 */ { u32 v = 0x9be338u; r_esp -= 4; W32(r_esp, v); }
    /* 00564d26: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x564d2bu); f_007b9a88();
    /* 00564d2b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564d2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00564d30: mov dword ptr [ecx + 0x518], 0 */ W32((u32)(r_ecx+0x518u), 0x0u);
    /* 00564d3a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00564d3f: mov word ptr [ecx + 0x51c], ax */ W16((u32)(r_ecx+0x51cu), (u16)r_eax);
    /* 00564d46: call dword ptr [edx + 0x190] */ { u32 t = R32((u32)(r_edx+0x190u)); r_esp -= 4; W32(r_esp, 0x564d4cu); call_ind(t); }
    /* 00564d4c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564d4f: mov dword ptr [ecx + 0x538], 0 */ W32((u32)(r_ecx+0x538u), 0x0u);
    /* 00564d59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564d5b: mov dword ptr [ecx + 0x520], eax */ W32((u32)(r_ecx+0x520u), r_eax);
    /* 00564d61: mov dword ptr [ecx + 0x53c], 0 */ W32((u32)(r_ecx+0x53cu), 0x0u);
    /* 00564d6b: mov dword ptr [ecx + 0x524], eax */ W32((u32)(r_ecx+0x524u), r_eax);
    /* 00564d71: mov dword ptr [ecx + 0x528], eax */ W32((u32)(r_ecx+0x528u), r_eax);
    /* 00564d77: mov dword ptr [ecx + 0x52c], eax */ W32((u32)(r_ecx+0x52cu), r_eax);
    /* 00564d7d: mov dword ptr [ecx + 0x540], 0 */ W32((u32)(r_ecx+0x540u), 0x0u);
    /* 00564d87: mov dword ptr [ecx + 0x530], eax */ W32((u32)(r_ecx+0x530u), r_eax);
    /* 00564d8d: mov dword ptr [ecx + 0x534], eax */ W32((u32)(r_ecx+0x534u), r_eax);
    /* 00564d93: mov dword ptr [ecx + 0x56c], eax */ W32((u32)(r_ecx+0x56cu), r_eax);
    /* 00564d99: mov dword ptr [ecx + 0x544], 0 */ W32((u32)(r_ecx+0x544u), 0x0u);
    /* 00564da3: mov dword ptr [ecx + 0x548], 0 */ W32((u32)(r_ecx+0x548u), 0x0u);
    /* 00564dad: mov dword ptr [ecx + 0x54c], 0 */ W32((u32)(r_ecx+0x54cu), 0x0u);
    /* 00564db7: mov dword ptr [ecx + 0x550], 0 */ W32((u32)(r_ecx+0x550u), 0x0u);
    /* 00564dc1: mov dword ptr [ecx + 0x554], 0 */ W32((u32)(r_ecx+0x554u), 0x0u);
    /* 00564dcb: mov dword ptr [ecx + 0x558], 0 */ W32((u32)(r_ecx+0x558u), 0x0u);
    /* 00564dd5: mov dword ptr [ecx + 0x55c], 0 */ W32((u32)(r_ecx+0x55cu), 0x0u);
    /* 00564ddf: mov dword ptr [ecx + 0x560], 0 */ W32((u32)(r_ecx+0x560u), 0x0u);
    /* 00564de9: mov dword ptr [ecx + 0x564], 0 */ W32((u32)(r_ecx+0x564u), 0x0u);
    /* 00564df3: mov dword ptr [ecx + 0x568], 0 */ W32((u32)(r_ecx+0x568u), 0x0u);
    /* 00564dfd: call 0x564fb4 */ r_esp -= 4; W32(r_esp, 0x564e02u); f_00564fb4();
    /* 00564e02: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e05: call 0x564fe0 */ r_esp -= 4; W32(r_esp, 0x564e0au); f_00564fe0();
    /* 00564e0a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e0d: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x564e12u); f_0051ffdc();
    /* 00564e12: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00564e17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564e19: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00564e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00564e21: call 0x564ff0 */ r_esp -= 4; W32(r_esp, 0x564e26u); f_00564ff0();
    /* 00564e26: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00564e28:; BB(0x00564e28);
    /* 00564e28: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e2b: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00564e2e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00564e30: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00564e33: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00564e35: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00564e37: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00564e39: lea ecx, [edx + esi + 0x3fc] */ r_ecx = (u32)(r_edx+r_esi+0x3fcu);
    /* 00564e40: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x564e45u); f_0057739c();
    /* 00564e45: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00564e48: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00564e4b: jl 0x564e28 */ if ((fS!=fO)) goto L_00564e28;
L_00564e4d:; BB(0x00564e4d);
    /* 00564e4d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00564e50: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00564e53: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00564e56: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00564e59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00564e5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00564e63: mov esp, ebp */ r_esp = r_ebp;
    /* 00564e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00564e66: ret 8 */ FN_RET(0x00564c60); r_esp += 12; return;
L_00564e69:; BB(0x00564e69);
    /* 00564e69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564e6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00564e6e: jmp 0x564d0a */ goto L_00564d0a;
}

void f_00564cf7(void)
{
    FN_ENTER(0x00564cf7);
    /* 00564cf7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00564cf9: add byte ptr [ebx - 0x17ff9538], cl */ { u32 ad = (u32)(r_ebx+0xe8006ac8u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00564cff: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    UNSUP(0x00564d00, "falls out of decoded code");
}

void f_00564e84(void) /* sub_564E84 */
{
    FN_ENTER(0x00564e84);
    /* 00564e84: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00564e89: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00564e8b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00564e8d: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00564e90: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 00564e94: mov eax, ecx */ r_eax = r_ecx;
    /* 00564e96: ret  */ FN_RET(0x00564e84); r_esp += 4; return;
}

void f_00564e98(void) /* sub_564E98 */
{
    FN_ENTER(0x00564e98);
    /* 00564e98: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00564e9b: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 00564ea1: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 00564ea7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00564ea9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00564eac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00564eb0: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00564eb5: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00564eba: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00564ebe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00564ec2: fistp dword ptr [ecx + 0x474] */ W32((u32)(r_ecx+0x474u), (u32)fx_int32(ST(0))); FPOP();
    /* 00564ec8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00564ecb: fcomp dword ptr [0x925ffc] */ fx_compare(ST(0), R_F32((u32)(0x925ffcu))); FPOP();
    /* 00564ed1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00564ed3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00564ed4: jb 0x564ee2 */ if (fC) goto L_00564ee2;
L_00564ed6:; BB(0x00564ed6);
    /* 00564ed6: mov dword ptr [ecx + 0x478], 0 */ W32((u32)(r_ecx+0x478u), 0x0u);
    /* 00564ee0: jmp 0x564eec */ goto L_00564eec;
L_00564ee2:; BB(0x00564ee2);
    /* 00564ee2: mov dword ptr [ecx + 0x478], 1 */ W32((u32)(r_ecx+0x478u), 0x1u);
L_00564eec:; BB(0x00564eec);
    /* 00564eec: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00564ef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00564ef4: jle 0x564f26 */ if ((fZ||fS!=fO)) goto L_00564f26;
L_00564ef6:; BB(0x00564ef6);
    /* 00564ef6: mov eax, dword ptr [0xa73d28] */ r_eax = R32((u32)(0xa73d28u));
    /* 00564efb: mov edx, 1 */ r_edx = 0x1u;
    /* 00564f00: mov dword ptr [ecx + 0x46c], edx */ W32((u32)(r_ecx+0x46cu), r_edx);
    /* 00564f06: mov dword ptr [ecx + 0x470], edx */ W32((u32)(r_ecx+0x470u), r_edx);
    /* 00564f0c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00564f12: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 00564f15: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00564f18: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00564f1e: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00564f21: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00564f24: jmp 0x564f51 */ goto L_00564f51;
L_00564f26:; BB(0x00564f26);
    /* 00564f26: mov eax, dword ptr [0xa73d28] */ r_eax = R32((u32)(0xa73d28u));
    /* 00564f2b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00564f2d: mov dword ptr [ecx + 0x46c], edx */ W32((u32)(r_ecx+0x46cu), r_edx);
    /* 00564f33: mov dword ptr [ecx + 0x470], edx */ W32((u32)(r_ecx+0x470u), r_edx);
    /* 00564f39: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00564f3f: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00564f42: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00564f45: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00564f4b: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00564f4e: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
L_00564f51:; BB(0x00564f51);
    /* 00564f51: fld dword ptr [0x925ff8] */ FPUSH(R_F32((u32)(0x925ff8u)));
    /* 00564f57: fadd dword ptr [ecx + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x364u));
    /* 00564f5d: fld dword ptr [0x925ff4] */ FPUSH(R_F32((u32)(0x925ff4u)));
    /* 00564f63: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 00564f69: fld dword ptr [ecx + 0x36c] */ FPUSH(R_F32((u32)(r_ecx+0x36cu)));
    /* 00564f6f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00564f71: fstp dword ptr [ecx + 0x4a8] */ W_F32((u32)(r_ecx+0x4a8u), ST(0)); FPOP();
    /* 00564f77: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00564f79: fstp dword ptr [ecx + 0x4ac] */ W_F32((u32)(r_ecx+0x4acu), ST(0)); FPOP();
    /* 00564f7f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00564f81: fstp dword ptr [ecx + 0x4b0] */ W_F32((u32)(r_ecx+0x4b0u), ST(0)); FPOP();
    /* 00564f87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00564f8a: ret  */ FN_RET(0x00564e98); r_esp += 4; return;
}

void f_00564f8c(void) /* sub_564F8C */
{
    FN_ENTER(0x00564f8c);
    /* 00564f8c: add ecx, 0x3c8 */ {  u32 a = r_ecx; u32 b = 0x3c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564f92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564f93: mov ecx, 0xa73d68 */ r_ecx = 0xa73d68u;
    /* 00564f98: call 0x5aecd4 */ r_esp -= 4; W32(r_esp, 0x564f9du); f_005aecd4();
    /* 00564f9d: ret  */ FN_RET(0x00564f8c); r_esp += 4; return;
}

void f_00564fa0(void) /* sub_564FA0 */
{
    FN_ENTER(0x00564fa0);
    /* 00564fa0: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00564fa6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00564fa7: mov ecx, 0xa73d60 */ r_ecx = 0xa73d60u;
    /* 00564fac: call 0x5aecd4 */ r_esp -= 4; W32(r_esp, 0x564fb1u); f_005aecd4();
    /* 00564fb1: ret  */ FN_RET(0x00564fa0); r_esp += 4; return;
}

void f_00564fb4(void) /* sub_564FB4 */
{
    FN_ENTER(0x00564fb4);
    /* 00564fb4: fld dword ptr [0x925ff0] */ FPUSH(R_F32((u32)(0x925ff0u)));
    /* 00564fba: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00564fbd: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00564fc0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00564fc3: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 00564fc9: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 00564fcc: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00564fd2: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00564fd8: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00564fdb: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00564fde: ret  */ FN_RET(0x00564fb4); r_esp += 4; return;
}

void f_00564fe0(void) /* sub_564FE0 */
{
    FN_ENTER(0x00564fe0);
    /* 00564fe0: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00564fe6: mov dword ptr [eax + 4], 0x41200000 */ W32((u32)(r_eax+0x4u), 0x41200000u);
    /* 00564fed: ret  */ FN_RET(0x00564fe0); r_esp += 4; return;
}

void f_00564ff0(void) /* sub_564FF0 */
{
    FN_ENTER(0x00564ff0);
    /* 00564ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00564ff1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00564ff2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00564ff4: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00564ff8: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00564ffb: ja 0x565206 */ if ((!fC&&!fZ)) goto L_00565206;
L_00565001:; BB(0x00565001);
    /* 00565001: mov eax, dword ptr [eax*4 + 0x925c80] */ r_eax = R32((u32)(r_eax*4+0x925c80u));
    /* 00565008: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00565206:; BB(0x00565206);
    /* 00565206: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00565207: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00565208: ret 8 */ FN_RET(0x00564ff0); r_esp += 12; return;
}

