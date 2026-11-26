#include "protos.h"

void f_00522144(void) /* sub_522144 */
{
    FN_ENTER(0x00522144);
    /* 00522144: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522146: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00522148: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052214c: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x52214fu); call_ind(t); }
    /* 0052214f: ret 4 */ FN_RET(0x00522144); r_esp += 8; return;
}

void f_00522154(void) /* sub_522154 */
{
    FN_ENTER(0x00522154);
    /* 00522154: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522155: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522158: mov edx, ecx */ r_edx = r_ecx;
    /* 0052215a: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0052215d: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00522161: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00522164: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00522167: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0052216a: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0052216d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00522171: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00522174: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00522178: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x52217du); f_0082f9c4();
    /* 0052217d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00522180: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522181: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x522186u); f_007828e4();
    /* 00522186: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00522188: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0052218c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00522190: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00522192: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00522194: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 0052219a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0052219e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005221a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005221a2: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 005221a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005221aa: fstp dword ptr [esi + 0x30c] */ W_F32((u32)(r_esi+0x30cu), ST(0)); FPOP();
    /* 005221b0: fstp dword ptr [esi + 0x314] */ W_F32((u32)(r_esi+0x314u), ST(0)); FPOP();
    /* 005221b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005221b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005221ba: ret 8 */ FN_RET(0x00522154); r_esp += 12; return;
}

void f_005221c0(void) /* sub_5221C0 */
{
    FN_ENTER(0x005221c0);
    /* 005221c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005221c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005221c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005221c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005221c4: mov edi, ecx */ r_edi = r_ecx;
    /* 005221c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005221c8: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 005221cc: mov esi, dword ptr [0xaafdb8] */ r_esi = R32((u32)(0xaafdb8u));
    /* 005221d2: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005221d8: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 005221de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005221e0: jle 0x5221f7 */ if ((fZ||fS!=fO)) goto L_005221f7;
L_005221e2:; BB(0x005221e2);
    /* 005221e2: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 005221e5: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005221eb: jne 0x5221fe */ if (!fZ) goto L_005221fe;
L_005221ed:; BB(0x005221ed);
    /* 005221ed: add eax, 0x2c */ {  u32 a = r_eax; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005221f0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005221f3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005221f5: jl 0x5221e2 */ if ((fS!=fO)) goto L_005221e2;
L_005221f7:; BB(0x005221f7);
    /* 005221f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005221f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005221f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005221fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005221fb: ret 0xc */ FN_RET(0x005221c0); r_esp += 16; return;
L_005221fe:; BB(0x005221fe);
    /* 005221fe: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00522201: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00522206: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522207: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522209: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0052220d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00522210: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522212: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00522216: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00522218: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0052221e: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x522221u); call_ind(t); }
    /* 00522221: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522224: jne 0x522231 */ if (!fZ) goto L_00522231;
L_00522226:; BB(0x00522226);
    /* 00522226: fcom dword ptr [0x9216f8] */ fx_compare(ST(0), R_F32((u32)(0x9216f8u))); 
    /* 0052222c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052222e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052222f: je 0x522254 */ if (fZ) goto L_00522254;
L_00522231:; BB(0x00522231);
    /* 00522231: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00522233: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0052223a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0052223d: je 0x5221f7 */ if (fZ) goto L_005221f7;
L_0052223f:; BB(0x0052223f);
    /* 0052223f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00522243: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00522245: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522246: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00522248: mov ecx, edi */ r_ecx = r_edi;
    /* 0052224a: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x52224du); call_ind(t); }
    /* 0052224d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052224e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052224f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00522250: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00522251: ret 0xc */ FN_RET(0x005221c0); r_esp += 16; return;
L_00522254:; BB(0x00522254);
    /* 00522254: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00522256: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00522257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522258: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00522259: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052225a: ret 0xc */ FN_RET(0x005221c0); r_esp += 16; return;
}

void f_00522260(void) /* sub_522260 */
{
    FN_ENTER(0x00522260);
    /* 00522260: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00522261: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00522262: mov edi, ecx */ r_edi = r_ecx;
    /* 00522264: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00522268: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052226d: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00522273: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00522275: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00522277: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x52227au); call_ind(t); }
    /* 0052227a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052227c: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00522283: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00522286: je 0x522296 */ if (fZ) goto L_00522296;
L_00522288:; BB(0x00522288);
    /* 00522288: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0052228c: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0052228e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052228f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00522291: mov ecx, edi */ r_ecx = r_edi;
    /* 00522293: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x522296u); call_ind(t); }
L_00522296:; BB(0x00522296);
    /* 00522296: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00522297: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00522298: ret 8 */ FN_RET(0x00522260); r_esp += 12; return;
}

void f_0052229c(void) /* sub_52229C */
{
    FN_ENTER(0x0052229c);
    /* 0052229c: mov dword ptr [0xa72ec0], 0x3f800000 */ W32((u32)(0xa72ec0u), 0x3f800000u);
    /* 005222a6: mov dword ptr [0xa72ec4], 0x41000000 */ W32((u32)(0xa72ec4u), 0x41000000u);
    /* 005222b0: mov dword ptr [0xa72ec8], 0x3fc00000 */ W32((u32)(0xa72ec8u), 0x3fc00000u);
    /* 005222ba: ret  */ FN_RET(0x0052229c); r_esp += 4; return;
}

void f_005222bc(void) /* sub_5222BC */
{
    FN_ENTER(0x005222bc);
    /* 005222bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005222bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005222bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005222c1: push 0x8d4880 */ { u32 v = 0x8d4880u; r_esp -= 4; W32(r_esp, v); }
    /* 005222c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005222cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005222cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005222d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005222d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005222da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005222dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005222e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005222e3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005222e6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005222e9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005222f0: mov eax, ecx */ r_eax = r_ecx;
    /* 005222f2: mov edx, dword ptr [eax + 0x3d4] */ r_edx = R32((u32)(r_eax+0x3d4u));
    /* 005222f8: mov dword ptr [eax], 0xb00b60 */ W32((u32)(r_eax), 0xb00b60u);
    /* 005222fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522300: je 0x52231b */ if (fZ) goto L_0052231b;
L_00522302:; BB(0x00522302);
    /* 00522302: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00522306: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052230b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0052230f: mov edx, ecx */ r_edx = r_ecx;
    /* 00522311: mov dword ptr [edx + 0x3d4], 0 */ W32((u32)(r_edx+0x3d4u), 0x0u);
L_0052231b:; BB(0x0052231b);
    /* 0052231b: mov eax, ecx */ r_eax = r_ecx;
    /* 0052231d: mov edx, dword ptr [eax + 0x3d8] */ r_edx = R32((u32)(r_eax+0x3d8u));
    /* 00522323: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522325: je 0x522340 */ if (fZ) goto L_00522340;
L_00522327:; BB(0x00522327);
    /* 00522327: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0052232b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00522330: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00522334: mov edx, ecx */ r_edx = r_ecx;
    /* 00522336: mov dword ptr [edx + 0x3d8], 0 */ W32((u32)(r_edx+0x3d8u), 0x0u);
L_00522340:; BB(0x00522340);
    /* 00522340: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x522345u); f_007b9c8c();
    /* 00522345: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0052234c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052234f: lea ecx, [eax + 0x3b8] */ r_ecx = (u32)(r_eax+0x3b8u);
    /* 00522355: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x52235au); f_005769f8();
    /* 0052235a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00522361: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522364: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x522369u); f_0078638c();
    /* 00522369: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0052236c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052236e: jne 0x522380 */ if (!fZ) goto L_00522380;
L_00522370:; BB(0x00522370);
    /* 00522370: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522373: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0052237a: mov esp, ebp */ r_esp = r_ebp;
    /* 0052237c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052237d: ret 4 */ FN_RET(0x005222bc); r_esp += 8; return;
L_00522380:; BB(0x00522380);
    /* 00522380: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00522383: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522384: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x522389u); f_005c2f74();
    /* 00522389: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052238a: jmp 0x522370 */ goto L_00522370;
}

void f_0052238c(void) /* sub_52238C */
{
    FN_ENTER(0x0052238c);
    /* 0052238c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052238d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052238f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00522391: call 0x5223b0 */ r_esp -= 4; W32(r_esp, 0x522396u); f_005223b0();
    /* 00522396: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052239a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052239c: jne 0x5223a2 */ if (!fZ) goto L_005223a2;
L_0052239e:; BB(0x0052239e);
    /* 0052239e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052239f: ret 4 */ FN_RET(0x0052238c); r_esp += 8; return;
L_005223a2:; BB(0x005223a2);
    /* 005223a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005223a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5223a8u); f_005c2f74();
    /* 005223a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005223a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005223aa: ret 4 */ FN_RET(0x0052238c); r_esp += 8; return;
}

void f_005223b0(void) /* sub_5223B0 */
{
    FN_ENTER(0x005223b0);
    /* 005223b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005223b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005223b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005223b5: push 0x8d489c */ { u32 v = 0x8d489cu; r_esp -= 4; W32(r_esp, v); }
    /* 005223ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005223c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005223c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005223c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005223cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005223ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005223d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005223d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005223d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005223da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005223dd: mov dword ptr [ecx], 0xb00cc0 */ W32((u32)(r_ecx), 0xb00cc0u);
    /* 005223e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005223ea: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x5223efu); f_007ba1f0();
    /* 005223ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005223f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005223f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005223fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005223fc: ret  */ FN_RET(0x005223b0); r_esp += 4; return;
}

void f_00522400(void) /* sub_522400 */
{
    FN_ENTER(0x00522400);
    /* 00522400: mov eax, dword ptr [0xa72f14] */ r_eax = R32((u32)(0xa72f14u));
    /* 00522405: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522408: je 0x522493 */ if (fZ) goto L_00522493;
L_0052240e:; BB(0x0052240e);
    /* 0052240e: cmp eax, 0x35 */ {  u32 a = r_eax; u32 b = 0x35u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522411: je 0x52245a */ if (fZ) goto L_0052245a;
L_00522413:; BB(0x00522413);
    /* 00522413: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522416: je 0x522421 */ if (fZ) goto L_00522421;
L_00522418:; BB(0x00522418);
    /* 00522418: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052241b: mov dword ptr [0xa72f14], eax */ W32((u32)(0xa72f14u), r_eax);
    /* 00522420: ret  */ FN_RET(0x00522400); r_esp += 4; return;
L_00522421:; BB(0x00522421);
    /* 00522421: mov dword ptr [0xa72ef0], 0 */ W32((u32)(0xa72ef0u), 0x0u);
    /* 0052242b: mov eax, 0xa72ef0 */ r_eax = 0xa72ef0u;
    /* 00522430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522431: mov dword ptr [0xa72ef4], 0 */ W32((u32)(0xa72ef4u), 0x0u);
    /* 0052243b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052243c: mov dword ptr [0xa72ef8], 0 */ W32((u32)(0xa72ef8u), 0x0u);
    /* 00522446: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 0052244b: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x522450u); f_007829a0();
    /* 00522450: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522453: mov eax, dword ptr [0xa72f14] */ r_eax = R32((u32)(0xa72f14u));
    /* 00522458: jmp 0x522418 */ goto L_00522418;
L_0052245a:; BB(0x0052245a);
    /* 0052245a: mov dword ptr [0xa72efc], 0 */ W32((u32)(0xa72efcu), 0x0u);
    /* 00522464: mov eax, 0xa72efc */ r_eax = 0xa72efcu;
    /* 00522469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052246a: mov dword ptr [0xa72f00], 0 */ W32((u32)(0xa72f00u), 0x0u);
    /* 00522474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522475: mov dword ptr [0xa72f04], 0 */ W32((u32)(0xa72f04u), 0x0u);
    /* 0052247f: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 00522484: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x522489u); f_007829a0();
    /* 00522489: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052248c: mov eax, dword ptr [0xa72f14] */ r_eax = R32((u32)(0xa72f14u));
    /* 00522491: jmp 0x522418 */ goto L_00522418;
L_00522493:; BB(0x00522493);
    /* 00522493: mov dword ptr [0xa72f08], 0 */ W32((u32)(0xa72f08u), 0x0u);
    /* 0052249d: mov eax, 0xa72f08 */ r_eax = 0xa72f08u;
    /* 005224a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005224a3: mov dword ptr [0xa72f0c], 0 */ W32((u32)(0xa72f0cu), 0x0u);
    /* 005224ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005224ae: mov dword ptr [0xa72f10], 0 */ W32((u32)(0xa72f10u), 0x0u);
    /* 005224b8: push 0xa48780 */ { u32 v = 0xa48780u; r_esp -= 4; W32(r_esp, v); }
    /* 005224bd: call 0x7829a0 */ r_esp -= 4; W32(r_esp, 0x5224c2u); f_007829a0();
    /* 005224c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005224c5: mov eax, dword ptr [0xa72f14] */ r_eax = R32((u32)(0xa72f14u));
    /* 005224ca: jmp 0x522418 */ goto L_00522418;
}

void f_005224d0(void) /* sub_5224D0 */
{
    FN_ENTER(0x005224d0);
    /* 005224d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005224d1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005224d3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5224d8u); f_004f7c84();
    /* 005224d8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005224db: je 0x5225b7 */ if (fZ) goto L_005225b7;
L_005224e1:; BB(0x005224e1);
    /* 005224e1: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005224e8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005224eb: ja 0x522545 */ if ((!fC&&!fZ)) goto L_00522545;
L_005224ed:; BB(0x005224ed);
    /* 005224ed: mov eax, dword ptr [eax*4 + 0x921708] */ r_eax = R32((u32)(r_eax*4+0x921708u));
    /* 005224f4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x005224d0); r_esp += 4; return;
L_005225b7:; BB(0x005225b7);
    /* 005225b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b8: ret  */ FN_RET(0x005224d0); r_esp += 4; return;
}

void f_005224f6(void)
{
    FN_ENTER(0x005224f6);
    /* 005224f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005224f8: call 0x5225bc */ r_esp -= 4; W32(r_esp, 0x5224fdu); f_005225bc();
    /* 005224fd: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x005224f6); r_esp += 4; return;
}

void f_005224ff(void)
{
    FN_ENTER(0x005224ff);
    /* 005224ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522501: call 0x5228d0 */ r_esp -= 4; W32(r_esp, 0x522506u); f_005228d0();
    /* 00522506: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x005224ff); r_esp += 4; return;
}

void f_00522508(void)
{
    FN_ENTER(0x00522508);
    /* 00522508: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052250a: call 0x522a44 */ r_esp -= 4; W32(r_esp, 0x52250fu); f_00522a44();
    /* 0052250f: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x00522508); r_esp += 4; return;
}

void f_00522511(void)
{
    FN_ENTER(0x00522511);
    /* 00522511: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522513: call 0x522af4 */ r_esp -= 4; W32(r_esp, 0x522518u); f_00522af4();
    /* 00522518: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x00522511); r_esp += 4; return;
}

void f_0052251a(void)
{
    FN_ENTER(0x0052251a);
    /* 0052251a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052251c: call 0x523024 */ r_esp -= 4; W32(r_esp, 0x522521u); f_00523024();
    /* 00522521: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x0052251a); r_esp += 4; return;
}

void f_00522523(void)
{
    FN_ENTER(0x00522523);
    /* 00522523: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522525: call 0x5238e8 */ r_esp -= 4; W32(r_esp, 0x52252au); f_005238e8();
    /* 0052252a: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x00522523); r_esp += 4; return;
}

void f_0052252c(void)
{
    FN_ENTER(0x0052252c);
    /* 0052252c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052252e: call 0x523cb4 */ r_esp -= 4; W32(r_esp, 0x522533u); f_00523cb4();
    /* 00522533: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x0052252c); r_esp += 4; return;
}

void f_00522535(void)
{
    FN_ENTER(0x00522535);
    /* 00522535: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522537: call 0x523f60 */ r_esp -= 4; W32(r_esp, 0x52253cu); f_00523f60();
    /* 0052253c: jmp 0x522545 */ goto L_00522545;
L_00522545:; BB(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x00522535); r_esp += 4; return;
}

void f_0052253e(void)
{
    FN_ENTER(0x0052253e);
    /* 0052253e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522540: call 0x52407c */ r_esp -= 4; W32(r_esp, 0x522545u); f_0052407c();
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x0052253e); r_esp += 4; return;
}

void f_00522545(void)
{
    FN_ENTER(0x00522545);
    /* 00522545: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522547: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x52254cu); f_00770738();
    /* 0052254c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052254e: je 0x522576 */ if (fZ) goto L_00522576;
L_00522550:; BB(0x00522550);
    /* 00522550: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00522553: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522558: je 0x522576 */ if (fZ) goto L_00522576;
L_0052255a:; BB(0x0052255a);
    /* 0052255a: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0052255d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0052255f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522560: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
    /* 00522567: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052256c: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0052256f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522571: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522576u); f_007706b0();
L_00522576:; BB(0x00522576);
    /* 00522576: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00522578: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x52257du); f_0078730c();
    /* 0052257d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0052257f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522580: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00522586: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 0052258c: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0052258f: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00522595: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00522598: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 0052259b: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5225a0u); f_006946a8();
    /* 005225a0: fld dword ptr [0x921890] */ FPUSH(R_F32((u32)(0x921890u)));
    /* 005225a6: fadd dword ptr [ebp + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2b8u));
    /* 005225ac: fstp dword ptr [ebp + 0x2b8] */ W_F32((u32)(r_ebp+0x2b8u), ST(0)); FPOP();
    /* 005225b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005225b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005225b6: ret  */ FN_RET(0x00522545); r_esp += 4; return;
}

void f_005225bc(void) /* sub_5225BC */
{
    FN_ENTER(0x005225bc);
    /* 005225bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005225bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005225bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005225c1: push 0x8d48c4 */ { u32 v = 0x8d48c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005225c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005225cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005225cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005225d4: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005225d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005225da: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005225dd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005225e0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005225e3: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005225e6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005225e9: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005225ee: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005225f1: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5225f6u); f_007aa094();
    /* 005225f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005225f9: movsx eax, word ptr [eax + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x330u));
    /* 00522600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522602: je 0x522826 */ if (fZ) goto L_00522826;
L_00522608:; BB(0x00522608);
    /* 00522608: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052260b: jne 0x522671 */ if (!fZ) goto L_00522671;
L_0052260d:; BB(0x0052260d);
    /* 0052260d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522610: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00522612: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x522615u); call_ind(t); }
    /* 00522615: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052261a: fld dword ptr [0x921878] */ FPUSH(R_F32((u32)(0x921878u)));
    /* 00522620: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522623: fld dword ptr [ecx + 0x30c] */ FPUSH(R_F32((u32)(r_ecx+0x30cu)));
    /* 00522629: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0052262b: fld dword ptr [ecx + 0x314] */ FPUSH(R_F32((u32)(r_ecx+0x314u)));
    /* 00522631: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00522633: fstp dword ptr [ecx + 0x30c] */ W_F32((u32)(r_ecx+0x30cu), ST(0)); FPOP();
    /* 00522639: fstp dword ptr [ecx + 0x314] */ W_F32((u32)(r_ecx+0x314u), ST(0)); FPOP();
    /* 0052263f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x522644u); f_007aaa30();
    /* 00522644: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00522646: je 0x522870 */ if (fZ) goto L_00522870;
L_0052264c:; BB(0x0052264c);
    /* 0052264c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052264f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522654: mov eax, 2 */ r_eax = 0x2u;
    /* 00522659: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
    /* 00522660: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 00522663: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522664: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x522669u); f_0050b510();
    /* 00522669: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0052266c: jmp 0x522870 */ goto L_00522870;
L_00522671:; BB(0x00522671);
    /* 00522671: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522674: jne 0x52281a */ if (!fZ) goto L_0052281a;
L_0052267a:; BB(0x0052267a);
    /* 0052267a: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052267f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522682: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x522687u); f_007aaa30();
    /* 00522687: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00522689: je 0x5227a4 */ if (fZ) goto L_005227a4;
L_0052268f:; BB(0x0052268f);
    /* 0052268f: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00522696: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0052269b: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005226a2: mov dword ptr [ebp - 0x48], 0xc1700000 */ W32((u32)(r_ebp+0xffffffb8u), 0xc1700000u);
    /* 005226a9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5226aeu); f_0082d990();
    /* 005226ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005226b1: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005226b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005226b6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5226bbu); f_0082d8bc();
    /* 005226bb: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005226be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005226bf: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 005226c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005226c4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5226c9u); f_0082eab8();
    /* 005226c9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005226ce: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x5226d3u); f_0082eb80();
    /* 005226d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005226d6: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 005226d9: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005226dc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005226df: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5226e4u); f_0082ebac();
    /* 005226e4: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5226e9u); f_00807ac0();
    /* 005226e9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005226ec: jl 0x522770 */ if ((fS!=fO)) goto L_00522770;
L_005226f2:; BB(0x005226f2);
    /* 005226f2: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005226f5: jg 0x522770 */ if ((!fZ&&fS==fO)) goto L_00522770;
L_005226f7:; BB(0x005226f7);
    /* 005226f7: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005226fe: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 00522703: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x522708u); f_005caba4();
    /* 00522708: mov edx, eax */ r_edx = r_eax;
    /* 0052270a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052270d: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00522710: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522712: je 0x522769 */ if (fZ) goto L_00522769;
L_00522714:; BB(0x00522714);
    /* 00522714: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0052271b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00522722: fld dword ptr [0x921880] */ FPUSH(R_F32((u32)(0x921880u)));
    /* 00522728: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052272b: fadd dword ptr [ebx + 0x368] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x368u));
    /* 00522731: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 00522734: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00522738: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052273d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00522740: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00522743: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00522746: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00522749: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052274e: mov ecx, edx */ r_ecx = r_edx;
    /* 00522750: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00522753: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522754: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00522757: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052275a: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052275d: call 0x51ed98 */ r_esp -= 4; W32(r_esp, 0x522762u); f_0051ed98();
    /* 00522762: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00522769:; BB(0x00522769);
    /* 00522769: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00522770:; BB(0x00522770);
    /* 00522770: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522773: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 00522778: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52277du); f_007879b8();
    /* 0052277d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522780: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522782: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522783: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522784: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522785: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522786: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52278bu); f_00814298();
    /* 0052278b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0052278e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00522790: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522791: call 0x578418 */ r_esp -= 4; W32(r_esp, 0x522796u); f_00578418();
    /* 00522796: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522799: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052279b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052279c: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x5227a1u); f_005787a4();
    /* 005227a1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_005227a4:; BB(0x005227a4);
    /* 005227a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005227a7: fld dword ptr [edx + 0x6c] */ FPUSH(R_F32((u32)(r_edx+0x6cu)));
    /* 005227aa: fsub dword ptr [0x921870] */ ST(0) = ST(0) - R_F32((u32)(0x921870u));
    /* 005227b0: fcom dword ptr [0x92187c] */ fx_compare(ST(0), R_F32((u32)(0x92187cu))); 
    /* 005227b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005227b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005227b9: jae 0x5227c7 */ if (!fC) goto L_005227c7;
L_005227bb:; BB(0x005227bb);
    /* 005227bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005227bd: mov eax, 0x3c23d70a */ r_eax = 0x3c23d70au;
    /* 005227c2: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 005227c5: jmp 0x5227cc */ goto L_005227cc;
L_005227c7:; BB(0x005227c7);
    /* 005227c7: mov eax, edx */ r_eax = r_edx;
    /* 005227c9: fstp dword ptr [eax + 0x6c] */ W_F32((u32)(r_eax+0x6cu), ST(0)); FPOP();
L_005227cc:; BB(0x005227cc);
    /* 005227cc: fld dword ptr [edx + 0x364] */ FPUSH(R_F32((u32)(r_edx+0x364u)));
    /* 005227d2: fsub dword ptr [0x92186c] */ ST(0) = ST(0) - R_F32((u32)(0x92186cu));
    /* 005227d8: fcom dword ptr [0x921868] */ fx_compare(ST(0), R_F32((u32)(0x921868u))); 
    /* 005227de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005227e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005227e1: jb 0x5227f0 */ if (fC) goto L_005227f0;
L_005227e3:; BB(0x005227e3);
    /* 005227e3: mov eax, edx */ r_eax = r_edx;
    /* 005227e5: fstp dword ptr [eax + 0x364] */ W_F32((u32)(r_eax+0x364u), ST(0)); FPOP();
    /* 005227eb: jmp 0x522870 */ goto L_00522870;
L_005227f0:; BB(0x005227f0);
    /* 005227f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005227f2: mov ebx, edx */ r_ebx = r_edx;
    /* 005227f4: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005227f7: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005227fc: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00522800: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00522803: mov edx, 0xc1200000 */ r_edx = 0xc1200000u;
    /* 00522808: mov dword ptr [ebx + 0x364], edx */ W32((u32)(r_ebx+0x364u), r_edx);
    /* 0052280e: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fO = 0; }
    /* 00522814: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 00522818: jmp 0x522870 */ goto L_00522870;
L_0052281a:; BB(0x0052281a);
    /* 0052281a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052281d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052281f: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
L_00522826:; BB(0x00522826);
    /* 00522826: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522829: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052282b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052282d: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x522832u); f_00772b44();
    /* 00522832: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522835: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522837: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x52283cu); f_007aaa30();
    /* 0052283c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0052283e: je 0x522870 */ if (fZ) goto L_00522870;
L_00522840:; BB(0x00522840);
    /* 00522840: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522843: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522848: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52284du); f_007879b8();
    /* 0052284d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522850: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 00522853: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00522855: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522856: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522857: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00522858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522859: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52285eu); f_00814298();
    /* 0052285e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00522861: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522864: mov eax, 1 */ r_eax = 0x1u;
    /* 00522869: mov word ptr [edx + 0x330], ax */ W16((u32)(r_edx+0x330u), (u16)r_eax);
L_00522870:; BB(0x00522870);
    /* 00522870: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00522873: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00522879: fcomp dword ptr [0x921864] */ fx_compare(ST(0), R_F32((u32)(0x921864u))); FPOP();
    /* 0052287f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00522881: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00522882: jae 0x52289a */ if (!fC) goto L_0052289a;
L_00522884:; BB(0x00522884);
    /* 00522884: mov eax, edx */ r_eax = r_edx;
    /* 00522886: mov eax, dword ptr [eax + 0x3a8] */ r_eax = R32((u32)(r_eax+0x3a8u));
    /* 0052288c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052288f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00522892: je 0x5228ae */ if (fZ) goto L_005228ae;
L_00522894:; BB(0x00522894);
    /* 00522894: mov dword ptr [edx + 0x3a8], eax */ W32((u32)(r_edx+0x3a8u), r_eax);
L_0052289a:; BB(0x0052289a);
    /* 0052289a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0052289d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005228a0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005228a3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005228aa: mov esp, ebp */ r_esp = r_ebp;
    /* 005228ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005228ad: ret  */ FN_RET(0x005225bc); r_esp += 4; return;
L_005228ae:; BB(0x005228ae);
    /* 005228ae: mov eax, edx */ r_eax = r_edx;
    /* 005228b0: mov dword ptr [eax + 0x3a8], 0 */ W32((u32)(r_eax+0x3a8u), 0x0u);
    /* 005228ba: add eax, 0x394 */ {  u32 a = r_eax; u32 b = 0x394u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005228bf: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 005228c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005228c5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5228cau); f_0050b510();
    /* 005228ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005228cd: jmp 0x52289a */ goto L_0052289a;
}

void f_005228d0(void) /* sub_5228D0 */
{
    FN_ENTER(0x005228d0);
    /* 005228d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005228d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005228d2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005228d5: mov edi, ecx */ r_edi = r_ecx;
    /* 005228d7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005228da: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005228df: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005228e2: mov ecx, edi */ r_ecx = r_edi;
    /* 005228e4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5228e9u); f_007aa094();
    /* 005228e9: mov dword ptr [edi + 0x314], 0 */ W32((u32)(r_edi+0x314u), 0x0u);
    /* 005228f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005228f5: mov ecx, edi */ r_ecx = r_edi;
    /* 005228f7: mov dword ptr [edi + 0x30c], 0 */ W32((u32)(r_edi+0x30cu), 0x0u);
    /* 00522901: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522903: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x522908u); f_00772b44();
    /* 00522908: mov ecx, edi */ r_ecx = r_edi;
    /* 0052290a: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x52290fu); f_007b6880();
    /* 0052290f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522911: mov ecx, edi */ r_ecx = r_edi;
    /* 00522913: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x522918u); f_007aaa30();
    /* 00522918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052291a: jne 0x522921 */ if (!fZ) goto L_00522921;
L_0052291c:; BB(0x0052291c);
    /* 0052291c: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0052291f: jmp 0x522948 */ goto L_00522948;
L_00522921:; BB(0x00522921);
    /* 00522921: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522926: mov ecx, edi */ r_ecx = r_edi;
    /* 00522928: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x52292du); f_007879b8();
    /* 0052292d: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00522930: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522932: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522933: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522936: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x52293bu); f_00814298();
    /* 0052293b: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00522940: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x522945u); f_00814680();
    /* 00522945: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00522948:; BB(0x00522948);
    /* 00522948: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0052294e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522951: je 0x522a0b */ if (fZ) goto L_00522a0b;
L_00522957:; BB(0x00522957);
    /* 00522957: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0052295a: and edx, 0xfffff9ff */ {  u32 a = r_edx; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00522960: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00522963: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00522969: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0052296c: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00522971: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00522974: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0052297b: movsx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 00522982: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00522985: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00522988: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052298c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00522990: fmul dword ptr [edi + 0x35c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x35cu));
    /* 00522996: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00522998: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0052299a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0052299b: jbe 0x522a04 */ if ((fC||fZ)) goto L_00522a04;
L_0052299d:; BB(0x0052299d);
    /* 0052299d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052299f: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005229a2: or eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005229a7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005229aa: mov ecx, edi */ r_ecx = r_edi;
    /* 005229ac: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5229b1u); f_007706b0();
    /* 005229b1: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 005229b7: mov ecx, dword ptr [edi + 0x308] */ r_ecx = R32((u32)(r_edi+0x308u));
    /* 005229bd: mov dword ptr [edi + 0x3a0], 0 */ W32((u32)(r_edi+0x3a0u), 0x0u);
    /* 005229c7: mov dword ptr [edi + 0x298], edx */ W32((u32)(r_edi+0x298u), r_edx);
    /* 005229cd: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005229d2: mov word ptr [edi + 0x340], ax */ W16((u32)(r_edi+0x340u), (u16)r_eax);
    /* 005229d9: mov eax, dword ptr [edi + 0x304] */ r_eax = R32((u32)(r_edi+0x304u));
    /* 005229df: mov dword ptr [edi + 0x29c], eax */ W32((u32)(r_edi+0x29cu), r_eax);
    /* 005229e5: mov dword ptr [edi + 0x2a0], ecx */ W32((u32)(r_edi+0x2a0u), r_ecx);
    /* 005229eb: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 005229f1: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 005229f8: mov dword ptr [edi + 0x2a8], eax */ W32((u32)(r_edi+0x2a8u), r_eax);
    /* 005229fe: mov dword ptr [edi + 0x2ac], ecx */ W32((u32)(r_edi+0x2acu), r_ecx);
L_00522a04:; BB(0x00522a04);
    /* 00522a04: mov word ptr [edi + 0x346], dx */ W16((u32)(r_edi+0x346u), (u16)r_edx);
L_00522a0b:; BB(0x00522a0b);
    /* 00522a0b: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00522a10: mov ecx, edi */ r_ecx = r_edi;
    /* 00522a12: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x522a17u); f_007879b8();
    /* 00522a17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522a19: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522a1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522a1b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522a1e: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x522a23u); f_008144b0();
    /* 00522a23: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00522a28: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x522a2du); f_00814680();
    /* 00522a2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522a2f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522a31: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00522a36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a37: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x522a3cu); f_00805608();
    /* 00522a3c: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00522a3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00522a40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00522a41: ret  */ FN_RET(0x005228d0); r_esp += 4; return;
}

void f_00522a44(void) /* sub_522A44 */
{
    FN_ENTER(0x00522a44);
    /* 00522a44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a46: mov edi, ecx */ r_edi = r_ecx;
    /* 00522a48: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00522a4b: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00522a50: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00522a53: mov ecx, edi */ r_ecx = r_edi;
    /* 00522a55: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x522a5au); f_007aa094();
    /* 00522a5a: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00522a5d: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522a62: jne 0x522a6f */ if (!fZ) goto L_00522a6f;
L_00522a64:; BB(0x00522a64);
    /* 00522a64: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522a66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522a68: mov ecx, edi */ r_ecx = r_edi;
    /* 00522a6a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x522a6fu); f_00772b44();
L_00522a6f:; BB(0x00522a6f);
    /* 00522a6f: mov ecx, edi */ r_ecx = r_edi;
    /* 00522a71: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x522a76u); f_007b6880();
    /* 00522a76: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00522a7b: mov ecx, edi */ r_ecx = r_edi;
    /* 00522a7d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x522a82u); f_007879b8();
    /* 00522a82: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00522a85: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522a87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522a88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522a89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00522a8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522a8c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x522a91u); f_008144b0();
    /* 00522a91: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00522a96: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x522a9bu); f_00814680();
    /* 00522a9b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522a9e: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 00522aa5: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 00522aa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00522aaa: jl 0x522ac8 */ if ((fS!=fO)) goto L_00522ac8;
L_00522aac:; BB(0x00522aac);
    /* 00522aac: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
L_00522ab3:; BB(0x00522ab3);
    /* 00522ab3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522ab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522ab7: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00522abc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522abd: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x522ac2u); f_00805608();
    /* 00522ac2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00522ac5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00522ac6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00522ac7: ret  */ FN_RET(0x00522a44); r_esp += 4; return;
L_00522ac8:; BB(0x00522ac8);
    /* 00522ac8: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00522acb: movzx edx, word ptr [edi + 0x342] */ r_edx = (u32)R16((u32)(r_edi+0x342u));
    /* 00522ad2: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00522ad7: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00522ada: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 00522ae1: mov word ptr [edi + 0x344], dx */ W16((u32)(r_edi+0x344u), (u16)r_edx);
    /* 00522ae8: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 00522aef: jmp 0x522ab3 */ goto L_00522ab3;
}

void f_00522af4(void) /* sub_522AF4 */
{
    FN_ENTER(0x00522af4);
    /* 00522af4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00522af5: mov ebx, esp */ r_ebx = r_esp;
    /* 00522af7: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00522afa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522afb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00522afc: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00522aff: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00522b03: mov ebp, esp */ r_ebp = r_esp;
    /* 00522b05: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00522b07: push 0x8d48ee */ { u32 v = 0x8d48eeu; r_esp -= 4; W32(r_esp, v); }
    /* 00522b0c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00522b12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522b13: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00522b1a: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00522b1d: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00522b20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00522b23: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00522b26: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00522b29: movzx eax, word ptr [ecx + 0x340] */ r_eax = (u32)R16((u32)(r_ecx+0x340u));
    /* 00522b30: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522b35: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00522b38: jge 0x522b6a */ if ((fS==fO)) goto L_00522b6a;
L_00522b3a:; BB(0x00522b3a);
    /* 00522b3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522b3b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x522b40u); f_0068d5a8();
    /* 00522b40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00522b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522b43: je 0x522b5e */ if (fZ) goto L_00522b5e;
L_00522b45:; BB(0x00522b45);
    /* 00522b45: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00522b4b: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522b51: jne 0x522b5e */ if (!fZ) goto L_00522b5e;
L_00522b53:; BB(0x00522b53);
    /* 00522b53: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522b56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522b57: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522b5cu); f_007706b0();
    /* 00522b5c: jmp 0x522b7d */ goto L_00522b7d;
L_00522b5e:; BB(0x00522b5e);
    /* 00522b5e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522b61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522b63: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522b68u); f_007706b0();
    /* 00522b68: jmp 0x522b7d */ goto L_00522b7d;
L_00522b6a:; BB(0x00522b6a);
    /* 00522b6a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00522b6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522b71: mov word ptr [ecx + 0x340], ax */ W16((u32)(r_ecx+0x340u), (u16)r_eax);
    /* 00522b78: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x522b7du); f_007706b0();
L_00522b7d:; BB(0x00522b7d);
    /* 00522b7d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522b80: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00522b83: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00522b88: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00522b8b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x522b90u); f_007aa094();
    /* 00522b90: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522b93: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x522b98u); f_00770738();
    /* 00522b98: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00522b9b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522b9e: movsx eax, word ptr [eax + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x330u));
    /* 00522ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522ba7: je 0x522e4c */ if (fZ) goto L_00522e4c;
L_00522bad:; BB(0x00522bad);
    /* 00522bad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522bb0: jne 0x522e00 */ if (!fZ) goto L_00522e00;
L_00522bb6:; BB(0x00522bb6);
    /* 00522bb6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522bb9: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00522bbe: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x522bc3u); f_007879b8();
    /* 00522bc3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522bc6: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00522bc9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00522bcc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522bce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522bcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522bd0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522bd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522bd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522bd3: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x522bd8u); f_008144b0();
    /* 00522bd8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522bdb: mov ecx, esi */ r_ecx = r_esi;
    /* 00522bdd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522bdf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522be1: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x522be6u); f_00772b44();
    /* 00522be6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522beb: je 0x522dba */ if (fZ) goto L_00522dba;
L_00522bf1:; BB(0x00522bf1);
    /* 00522bf1: mov edi, eax */ r_edi = r_eax;
    /* 00522bf3: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00522bf6: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00522bfc: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 00522c02: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00522c08: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00522c0b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522c0e: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00522c11: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00522c14: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00522c1a: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x522c1fu); f_0082f9c4();
    /* 00522c1f: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00522c22: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 00522c25: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00522c27: fmul qword ptr [0x9217a8] */ ST(0) = ST(0) * R_F64((u32)(0x9217a8u));
    /* 00522c2d: fdiv qword ptr [0x9217a0] */ ST(0) = ST(0) / R_F64((u32)(0x9217a0u));
    /* 00522c33: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522c36: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00522c39: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00522c3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00522c42: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00522c45: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00522c48: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00522c4b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00522c4e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00522c51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522c52: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00522c55: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x522c5au); f_007a9018();
    /* 00522c5a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522c5d: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 00522c63: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00522c66: cmp eax, dword ptr [ecx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522c69: jl 0x522c82 */ if ((fS!=fO)) goto L_00522c82;
L_00522c6b:; BB(0x00522c6b);
    /* 00522c6b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522c6e: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00522c74: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00522c77: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 00522c7d: jmp 0x522dcb */ goto L_00522dcb;
L_00522c82:; BB(0x00522c82);
    /* 00522c82: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522c85: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 00522c88: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00522c8b: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 00522c8e: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00522c91: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00522c94: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522c97: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 00522c9a: lea esi, [eax + 0x388] */ r_esi = (u32)(r_eax+0x388u);
    /* 00522ca0: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00522ca3: mov edx, esi */ r_edx = r_esi;
    /* 00522ca5: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x522caau); f_0082f9c4();
    /* 00522caa: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00522cad: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00522caf: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00522cb2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00522cb4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00522cb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00522cb7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00522cba: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x522cbfu); f_0082dc9c();
    /* 00522cbf: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 00522cc2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00522cc4: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00522cc6: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00522cc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00522ccb: fmul qword ptr [0x9217a8] */ ST(0) = ST(0) * R_F64((u32)(0x9217a8u));
    /* 00522cd1: fdiv qword ptr [0x9217a0] */ ST(0) = ST(0) / R_F64((u32)(0x9217a0u));
    /* 00522cd7: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00522cda: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00522cde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00522ce3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00522ce6: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00522ce9: fistp dword ptr [ebp - 0x64] */ W32((u32)(r_ebp+0xffffff9cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00522cec: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00522cef: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00522cf2: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00522cf9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00522cfb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00522cfd: fmul qword ptr [0x9217a8] */ ST(0) = ST(0) * R_F64((u32)(0x9217a8u));
    /* 00522d03: fdiv qword ptr [0x9217a0] */ ST(0) = ST(0) / R_F64((u32)(0x9217a0u));
    /* 00522d09: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00522d0c: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00522d10: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00522d15: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00522d18: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00522d1b: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00522d1e: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00522d21: lea ecx, [ebp - 0x64] */ r_ecx = (u32)(r_ebp+0xffffff9cu);
    /* 00522d24: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00522d27: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 00522d2c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522d2d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00522d2f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00522d32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522d33: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x522d38u); f_0050bab4();
    /* 00522d38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00522d3b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522d3e: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00522d44: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522d47: je 0x522dcb */ if (fZ) goto L_00522dcb;
L_00522d4d:; BB(0x00522d4d);
    /* 00522d4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522d50: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00522d53: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522d59: jne 0x522dcb */ if (!fZ) goto L_00522dcb;
L_00522d5b:; BB(0x00522d5b);
    /* 00522d5b: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 00522d60: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522d63: je 0x522f66 */ if (fZ) goto L_00522f66;
L_00522d69:; BB(0x00522d69);
    /* 00522d69: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00522d70: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00522d75: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x522d7au); f_005caba4();
    /* 00522d7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00522d7b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00522d7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522d80: je 0x522da8 */ if (fZ) goto L_00522da8;
L_00522d82:; BB(0x00522d82);
    /* 00522d82: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00522d89: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00522d90: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522d93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522d94: mov ecx, eax */ r_ecx = r_eax;
    /* 00522d96: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00522d9c: call 0x522fb4 */ r_esp -= 4; W32(r_esp, 0x522da1u); f_00522fb4();
    /* 00522da1: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_00522da8:; BB(0x00522da8);
    /* 00522da8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00522daf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522db2: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00522db8: jmp 0x522dcb */ goto L_00522dcb;
L_00522dba:; BB(0x00522dba);
    /* 00522dba: mov eax, esi */ r_eax = r_esi;
    /* 00522dbc: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00522dc2: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00522dc5: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
L_00522dcb:; BB(0x00522dcb);
    /* 00522dcb: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522dce: je 0x522f09 */ if (fZ) goto L_00522f09;
L_00522dd4:; BB(0x00522dd4);
    /* 00522dd4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522dd7: mov eax, 2 */ r_eax = 0x2u;
    /* 00522ddc: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00522de3: mov edx, 1 */ r_edx = 0x1u;
    /* 00522de8: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00522def: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 00522df4: mov word ptr [esi + 0x344], cx */ W16((u32)(r_esi+0x344u), (u16)r_ecx);
    /* 00522dfb: jmp 0x522f09 */ goto L_00522f09;
L_00522e00:; BB(0x00522e00);
    /* 00522e00: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522e03: jne 0x522e3e */ if (!fZ) goto L_00522e3e;
L_00522e05:; BB(0x00522e05);
    /* 00522e05: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522e0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522e0c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x522e11u); f_00772b44();
    /* 00522e11: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e14: movsx eax, word ptr [eax + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00522e1b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00522e1e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00522e21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00522e23: jl 0x522f8f */ if ((fS!=fO)) goto L_00522f8f;
L_00522e29:; BB(0x00522e29);
    /* 00522e29: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e2c: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00522e33: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00522e36: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00522e39: jmp 0x522f09 */ goto L_00522f09;
L_00522e3e:; BB(0x00522e3e);
    /* 00522e3e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e41: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00522e44: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00522e47: jmp 0x522f09 */ goto L_00522f09;
L_00522e4c:; BB(0x00522e4c);
    /* 00522e4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522e4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522e51: jne 0x522e75 */ if (!fZ) goto L_00522e75;
L_00522e53:; BB(0x00522e53);
    /* 00522e53: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e56: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00522e59: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00522e5e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00522e61: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522e63: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00522e6a: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 00522e6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00522e70: jmp 0x522f09 */ goto L_00522f09;
L_00522e75:; BB(0x00522e75);
    /* 00522e75: mov edi, eax */ r_edi = r_eax;
    /* 00522e77: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00522e7a: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 00522e80: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 00522e86: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00522e8c: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00522e8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522e92: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00522e95: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00522e98: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00522e9e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x522ea3u); f_0082f9c4();
    /* 00522ea3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522ea6: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 00522ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522eaa: mov edx, dword ptr [ecx + 0x358] */ r_edx = R32((u32)(r_ecx+0x358u));
    /* 00522eb0: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00522eb3: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x522eb8u); f_00771858();
    /* 00522eb8: mov esi, eax */ r_esi = r_eax;
    /* 00522eba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522ebd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522ebf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522ec1: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x522ec6u); f_00772b44();
    /* 00522ec6: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 00522ecc: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00522ecf: cmp esi, dword ptr [ecx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522ed2: jge 0x522f00 */ if ((fS==fO)) goto L_00522f00;
L_00522ed4:; BB(0x00522ed4);
    /* 00522ed4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522ed7: mov eax, 1 */ r_eax = 0x1u;
    /* 00522edc: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00522ee3: mov edx, 4 */ r_edx = 0x4u;
    /* 00522ee8: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 00522eef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00522ef1: mov word ptr [esi + 0x344], cx */ W16((u32)(r_esi+0x344u), (u16)r_ecx);
    /* 00522ef8: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 00522efb: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00522efe: jmp 0x522f09 */ goto L_00522f09;
L_00522f00:; BB(0x00522f00);
    /* 00522f00: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522f03: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00522f06: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_00522f09:; BB(0x00522f09);
    /* 00522f09: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522f0c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x522f11u); f_007b6880();
    /* 00522f11: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522f14: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 00522f19: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x522f1eu); f_007879b8();
    /* 00522f1e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522f21: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522f24: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522f26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522f27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00522f28: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00522f29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522f2b: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x522f30u); f_008144b0();
    /* 00522f30: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f35: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x522f3au); f_00814680();
    /* 00522f3a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00522f3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f3f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f41: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00522f46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00522f47: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x522f4cu); f_00805608();
    /* 00522f4c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00522f4f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00522f52: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00522f55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00522f58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00522f5f: mov esp, ebp */ r_esp = r_ebp;
    /* 00522f61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522f62: mov esp, ebx */ r_esp = r_ebx;
    /* 00522f64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00522f65: ret  */ FN_RET(0x00522af4); r_esp += 4; return;
L_00522f66:; BB(0x00522f66);
    /* 00522f66: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00522f6b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00522f6e: jne 0x522d69 */ if (!fZ) goto L_00522d69;
L_00522f74:; BB(0x00522f74);
    /* 00522f74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00522f77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00522f79: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00522f7b: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x522f81u); call_ind(t); }
    /* 00522f81: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522f84: mov ecx, dword ptr [eax + 0xb4] */ r_ecx = R32((u32)(r_eax+0xb4u));
    /* 00522f8a: jmp 0x522dcb */ goto L_00522dcb;
L_00522f8f:; BB(0x00522f8f);
    /* 00522f8f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00522f92: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00522f95: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00522f9a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00522f9d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00522f9f: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00522fa6: lea esi, [ecx + 0x38] */ r_esi = (u32)(r_ecx+0x38u);
    /* 00522fa9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00522fac: jmp 0x522f09 */ goto L_00522f09;
}

void f_00522fb4(void) /* sub_522FB4 */
{
    FN_ENTER(0x00522fb4);
    /* 00522fb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00522fb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00522fb6: mov edi, ecx */ r_edi = r_ecx;
    /* 00522fb8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00522fbc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00522fc0: mov ecx, edi */ r_ecx = r_edi;
    /* 00522fc2: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x522fc7u); f_007ba278();
    /* 00522fc7: mov dword ptr [edi], 0xb00cc0 */ W32((u32)(r_edi), 0xb00cc0u);
    /* 00522fcd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00522fcf: je 0x523011 */ if (fZ) goto L_00523011;
L_00522fd1:; BB(0x00522fd1);
    /* 00522fd1: mov eax, dword ptr [0x9bbb60] */ r_eax = R32((u32)(0x9bbb60u));
    /* 00522fd6: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00522fd9: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00522fdc: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00522fdf: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00522fe2: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00522fe5: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00522fe8: mov dword ptr [edi + 0x90], 0 */ W32((u32)(r_edi+0x90u), 0x0u);
    /* 00522ff2: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00522ff5: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 00522ff9: mov dword ptr [edi + 0x84], 0xb4 */ W32((u32)(r_edi+0x84u), 0xb4u);
    /* 00523003: mov word ptr [edi + 0xa4], si */ W16((u32)(r_edi+0xa4u), (u16)r_esi);
L_0052300a:; BB(0x0052300a);
    /* 0052300a: mov eax, edi */ r_eax = r_edi;
    /* 0052300c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052300d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052300e: ret 8 */ FN_RET(0x00522fb4); r_esp += 12; return;
L_00523011:; BB(0x00523011);
    /* 00523011: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00523015: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052301b: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 0052301f: jmp 0x52300a */ goto L_0052300a;
}

