#include "protos.h"

void f_006e906c(void) /* sub_6E906C */
{
    FN_ENTER(0x006e906c);
    /* 006e906c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e906d: mov edi, ecx */ r_edi = r_ecx;
    /* 006e906f: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006e9074: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006e9079: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 006e907c: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 006e9080: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006e9084: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 006e9086: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 006e9089: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006e908c: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 006e908f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006e9092: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006e9095: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9098: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006e909c: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006e909f: jg 0x6e90b2 */ if ((!fZ&&fS==fO)) goto L_006e90b2;
L_006e90a1:; BB(0x006e90a1);
    /* 006e90a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e90a2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e90a7u); f_0068d5a8();
    /* 006e90a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e90a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e90aa: je 0x6e90b2 */ if (fZ) goto L_006e90b2;
L_006e90ac:; BB(0x006e90ac);
    /* 006e90ac: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 006e90af: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
L_006e90b2:; BB(0x006e90b2);
    /* 006e90b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e90b3: ret 0x10 */ FN_RET(0x006e906c); r_esp += 20; return;
}

void f_006e90b8(void) /* sub_6E90B8 */
{
    FN_ENTER(0x006e90b8);
    /* 006e90b8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e90bb: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 006e90be: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006e90c1: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006e90c6: movzx eax, word ptr [ecx + 2] */ r_eax = (u32)R16((u32)(r_ecx+0x2u));
    /* 006e90ca: mov byte ptr [esp], 0x68 */ W8((u32)(r_esp), 0x68u);
    /* 006e90ce: mov byte ptr [esp + 1], 7 */ W8((u32)(r_esp+0x1u), 0x7u);
    /* 006e90d3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e90d7: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006e90dc: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 006e90df: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006e90e3: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006e90e6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006e90ea: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 006e90ed: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006e90f1: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 006e90f4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006e90f8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006e90fb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6e9100u); f_008003e0();
    /* 006e9100: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9103: ret  */ FN_RET(0x006e90b8); r_esp += 4; return;
}

void f_006e9104(void) /* sub_6E9104 */
{
    FN_ENTER(0x006e9104);
    /* 006e9104: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9107: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 006e910b: cmp ax, word ptr [esp + 0x10] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 006e9110: jne 0x6e9151 */ if (!fZ) goto L_006e9151;
L_006e9112:; BB(0x006e9112);
    /* 006e9112: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006e9116: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006e911a: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 006e911d: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 006e911f: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 006e9122: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e9124: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006e9127: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006e912f: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 006e9132: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006e9136: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006e9139: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6e913eu); f_0083173c();
    /* 006e913e: fcomp dword ptr [0x96d920] */ fx_compare(ST(0), R_F32((u32)(0x96d920u))); FPOP();
    /* 006e9144: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e9146: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e9147: jae 0x6e9151 */ if (!fC) goto L_006e9151;
L_006e9149:; BB(0x006e9149);
    /* 006e9149: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e914b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e914e: ret 0xc */ FN_RET(0x006e9104); r_esp += 16; return;
L_006e9151:; BB(0x006e9151);
    /* 006e9151: mov eax, 1 */ r_eax = 0x1u;
    /* 006e9156: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9159: ret 0xc */ FN_RET(0x006e9104); r_esp += 16; return;
}

void f_006e915c(void) /* sub_6E915C */
{
    FN_ENTER(0x006e915c);
    /* 006e915c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e915d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e915f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9161: push 0x8ef35e */ { u32 v = 0x8ef35eu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9166: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e916c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e916d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9174: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9177: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e917a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e917d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e9180: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e9183: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e9186: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9189: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e918c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006e918f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e9192: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006e9195: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e919au); f_008193cc();
    /* 006e919a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e91a1: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e91a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e91a7: mov dword ptr [esi], 0xb3db30 */ W32((u32)(r_esi), 0xb3db30u);
    /* 006e91ad: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006e91af: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e91b4: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006e91b7: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006e91ba: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 006e91bd: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006e91c0: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 006e91c3: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e91c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e91c7: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x6e91ccu); f_00780630();
    /* 006e91cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e91cf: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e91d2: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 006e91d5: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 006e91d8: mov esi, dword ptr [edx + 0x34] */ r_esi = R32((u32)(r_edx+0x34u));
    /* 006e91db: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 006e91de: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 006e91e1: mov dword ptr [edx + 0x40], esi */ W32((u32)(r_edx+0x40u), r_esi);
    /* 006e91e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e91e6: je 0x6e91ff */ if (fZ) goto L_006e91ff;
L_006e91e8:; BB(0x006e91e8);
    /* 006e91e8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006e91eb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006e91ed: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006e91f0: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006e91f3: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006e91f6: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006e91f9: mov dword ptr [edx + 0x40], esi */ W32((u32)(r_edx+0x40u), r_esi);
    /* 006e91fc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_006e91ff:; BB(0x006e91ff);
    /* 006e91ff: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9202: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9204: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e9207: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9209: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006e920c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006e920e:; BB(0x006e920e);
    /* 006e920e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9211: jne 0x6e926b */ if (!fZ) goto L_006e926b;
L_006e9213:; BB(0x006e9213);
    /* 006e9213: fld dword ptr [0x96d91c] */ FPUSH(R_F32((u32)(0x96d91cu)));
    /* 006e9219: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 006e921c: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 006e921f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006e9222: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 006e9225: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 006e9228: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006e922b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006e922e: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006e9231: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9233: push dword ptr [esi + ebx*4 + 0x96d800] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x96d800u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e923a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e923b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e9240u); f_0050981c();
    /* 006e9240: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9243: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9246: mov dword ptr [edx + edi*2 + 0x1c], eax */ W32((u32)(r_edx+r_edi*2+0x1cu), r_eax);
    /* 006e924a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e924c: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e924e:; BB(0x006e924e);
    /* 006e924e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9251: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9254: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e9256:; BB(0x006e9256);
    /* 006e9256: mov edx, edi */ r_edx = r_edi;
    /* 006e9258: push dword ptr [edx*4 + 0x96d928] */ { u32 v = R32((u32)(r_edx*4+0x96d928u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e925f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e9261: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6e9266u); f_00508ee4();
    /* 006e9266: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9269: jmp 0x6e92a9 */ goto L_006e92a9;
L_006e926b:; BB(0x006e926b);
    /* 006e926b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e926d: push dword ptr [esi + ebx*4 + 0x96d800] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x96d800u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9274: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006e9277: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e927a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e927b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e9280u); f_0050981c();
    /* 006e9280: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9283: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9286: mov dword ptr [edx + edi*2 + 0x1c], eax */ W32((u32)(r_edx+r_edi*2+0x1cu), r_eax);
    /* 006e928a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e928c: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e928e:; BB(0x006e928e);
    /* 006e928e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9291: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9294: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e9296:; BB(0x006e9296);
    /* 006e9296: mov edx, edi */ r_edx = r_edi;
    /* 006e9298: push dword ptr [edx*4 + 0x96d928] */ { u32 v = R32((u32)(r_edx*4+0x96d928u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e929f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e92a1: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6e92a6u); f_00508ee4();
    /* 006e92a6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_006e92a9:; BB(0x006e92a9);
    /* 006e92a9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e92ac: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e92af: jl 0x6e920e */ if ((fS!=fO)) goto L_006e920e;
L_006e92b5:; BB(0x006e92b5);
    /* 006e92b5: fld dword ptr [0x96d918] */ FPUSH(R_F32((u32)(0x96d918u)));
    /* 006e92bb: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006e92be: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006e92c1: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 006e92c4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006e92c7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006e92ce: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006e92d1: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006e92d4: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006e92d7: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006e92da: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006e92dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e92e1u); f_005caba4();
    /* 006e92e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e92e2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006e92e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e92e7: je 0x6e9344 */ if (fZ) goto L_006e9344;
L_006e92e9:; BB(0x006e92e9);
    /* 006e92e9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006e92f0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e92f7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e92fa: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 006e92fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e92ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9301: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9307: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9309: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e930b: push 0x3ff33333 */ { u32 v = 0x3ff33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9310: push 0x3ff33333 */ { u32 v = 0x3ff33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9315: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9316: call 0x503450 */ r_esp -= 4; W32(r_esp, 0x6e931bu); f_00503450();
    /* 006e931b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e931e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006e9325:; BB(0x006e9325);
    /* 006e9325: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9328: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e932b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e932e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e9331: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006e9334: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9337: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e933e: mov esp, ebp */ r_esp = r_ebp;
    /* 006e9340: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e9341: ret 0xc */ FN_RET(0x006e915c); r_esp += 16; return;
L_006e9344:; BB(0x006e9344);
    /* 006e9344: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9346: jmp 0x6e9325 */ goto L_006e9325;
}

void f_006e91e0(void)
{
    FN_ENTER(0x006e91e0);
    /* 006e91e0: cmp al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 006e91e2: jb 0x6e9224 */ if (fC) goto L_006e9224;
L_006e91e4:; BB(0x006e91e4);
    /* 006e91e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e91e6: je 0x6e91ff */ if (fZ) goto L_006e91ff;
L_006e91e8:; BB(0x006e91e8);
    /* 006e91e8: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006e91eb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006e91ed: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006e91f0: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006e91f3: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 006e91f6: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006e91f9: mov dword ptr [edx + 0x40], esi */ W32((u32)(r_edx+0x40u), r_esi);
    /* 006e91fc: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_006e91ff:; BB(0x006e91ff);
    /* 006e91ff: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9202: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9204: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 006e9207: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9209: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006e920c: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_006e920e:; BB(0x006e920e);
    /* 006e920e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9211: jne 0x6e926b */ if (!fZ) goto L_006e926b;
L_006e9213:; BB(0x006e9213);
    /* 006e9213: fld dword ptr [0x96d91c] */ FPUSH(R_F32((u32)(0x96d91cu)));
    /* 006e9219: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 006e921c: mov edi, dword ptr [edx + 0x38] */ r_edi = R32((u32)(r_edx+0x38u));
    /* 006e921f: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006e9222: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
L_006e9224:; BB(0x006e9224);
    /* 006e9224: mov esp, 0x8db87d89 */ r_esp = 0x8db87d89u;
    /* 006e9225: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 006e9228: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006e9229: cmp al, 0x1b */ {  u32 a = (u8)r_eax; u32 b = 0x1bu; u32 r = (a - b) & 0xffu;   }
    /* 006e922b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006e922e: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006e9231: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9233: push dword ptr [esi + ebx*4 + 0x96d800] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x96d800u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e923a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e923b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e9240u); f_0050981c();
    /* 006e9240: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9243: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9246: mov dword ptr [edx + edi*2 + 0x1c], eax */ W32((u32)(r_edx+r_edi*2+0x1cu), r_eax);
    /* 006e924a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e924c: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e924e:; BB(0x006e924e);
    /* 006e924e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9251: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9254: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e9256:; BB(0x006e9256);
    /* 006e9256: mov edx, edi */ r_edx = r_edi;
    /* 006e9258: push dword ptr [edx*4 + 0x96d928] */ { u32 v = R32((u32)(r_edx*4+0x96d928u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e925f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e9261: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6e9266u); f_00508ee4();
    /* 006e9266: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9269: jmp 0x6e92a9 */ goto L_006e92a9;
L_006e926b:; BB(0x006e926b);
    /* 006e926b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e926d: push dword ptr [esi + ebx*4 + 0x96d800] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x96d800u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9274: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006e9277: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e927a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e927b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e9280u); f_0050981c();
    /* 006e9280: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9283: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9286: mov dword ptr [edx + edi*2 + 0x1c], eax */ W32((u32)(r_edx+r_edi*2+0x1cu), r_eax);
    /* 006e928a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e928c: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e928e:; BB(0x006e928e);
    /* 006e928e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9291: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9294: je 0x6e92a9 */ if (fZ) goto L_006e92a9;
L_006e9296:; BB(0x006e9296);
    /* 006e9296: mov edx, edi */ r_edx = r_edi;
    /* 006e9298: push dword ptr [edx*4 + 0x96d928] */ { u32 v = R32((u32)(r_edx*4+0x96d928u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e929f: mov ecx, eax */ r_ecx = r_eax;
    /* 006e92a1: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6e92a6u); f_00508ee4();
    /* 006e92a6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_006e92a9:; BB(0x006e92a9);
    /* 006e92a9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e92ac: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e92af: jl 0x6e920e */ if ((fS!=fO)) goto L_006e920e;
L_006e92b5:; BB(0x006e92b5);
    /* 006e92b5: fld dword ptr [0x96d918] */ FPUSH(R_F32((u32)(0x96d918u)));
    /* 006e92bb: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 006e92be: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006e92c1: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 006e92c4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006e92c7: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006e92ce: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006e92d1: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 006e92d4: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 006e92d7: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006e92da: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006e92dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e92e1u); f_005caba4();
    /* 006e92e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e92e2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006e92e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e92e7: je 0x6e9344 */ if (fZ) goto L_006e9344;
L_006e92e9:; BB(0x006e92e9);
    /* 006e92e9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006e92f0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e92f7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e92fa: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 006e92fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e92ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9301: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9307: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9309: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e930b: push 0x3ff33333 */ { u32 v = 0x3ff33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9310: push 0x3ff33333 */ { u32 v = 0x3ff33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9315: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9316: call 0x503450 */ r_esp -= 4; W32(r_esp, 0x6e931bu); f_00503450();
    /* 006e931b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e931e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006e9325:; BB(0x006e9325);
    /* 006e9325: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9328: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e932b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e932e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e9331: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 006e9334: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9337: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e933e: mov esp, ebp */ r_esp = r_ebp;
    /* 006e9340: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e9341: ret 0xc */ FN_RET(0x006e91e0); r_esp += 16; return;
L_006e9344:; BB(0x006e9344);
    /* 006e9344: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9346: jmp 0x6e9325 */ goto L_006e9325;
}

void f_006e9348(void) /* sub_6E9348 */
{
    FN_ENTER(0x006e9348);
    /* 006e9348: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e9349: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e934c: mov esi, ecx */ r_esi = r_ecx;
    /* 006e934e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6e9353u); f_00807ac0();
    /* 006e9353: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9354: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x6e9359u); f_00807e20();
    /* 006e9359: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e935a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e935c: je 0x6e9363 */ if (fZ) goto L_006e9363;
L_006e935e:; BB(0x006e935e);
    /* 006e935e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9361: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e9362: ret  */ FN_RET(0x006e9348); r_esp += 4; return;
L_006e9363:; BB(0x006e9363);
    /* 006e9363: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006e9368: lea edx, [esi + 0x2c] */ r_edx = (u32)(r_esi+0x2cu);
    /* 006e936b: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9372: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6e9377u); f_007a9180();
    /* 006e9377: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e937a: fcomp dword ptr [0x96d910] */ fx_compare(ST(0), R_F32((u32)(0x96d910u))); FPOP();
    /* 006e9380: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006e9382: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006e9383: jae 0x6e93c9 */ if (!fC) goto L_006e93c9;
L_006e9385:; BB(0x006e9385);
    /* 006e9385: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e9389: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e938c: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 006e938f: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 006e9392: mov edi, esi */ r_edi = r_esi;
    /* 006e9394: mov esi, eax */ r_esi = r_eax;
    /* 006e9396: mov ebx, edx */ r_ebx = r_edx;
L_006e9398:; BB(0x006e9398);
    /* 006e9398: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e939a: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e939fu); f_006ea700();
    /* 006e939f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e93a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e93a2: je 0x6e93b9 */ if (fZ) goto L_006e93b9;
L_006e93a4:; BB(0x006e93a4);
    /* 006e93a4: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006e93a6: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x6e93abu); f_00509580();
    /* 006e93ab: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006e93ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e93b0: je 0x6e93b9 */ if (fZ) goto L_006e93b9;
L_006e93b2:; BB(0x006e93b2);
    /* 006e93b2: mov dword ptr [ecx + 0x38], 1 */ W32((u32)(r_ecx+0x38u), 0x1u);
L_006e93b9:; BB(0x006e93b9);
    /* 006e93b9: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e93bc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006e93be: ja 0x6e9398 */ if ((!fC&&!fZ)) goto L_006e9398;
L_006e93c0:; BB(0x006e93c0);
    /* 006e93c0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006e93c4: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006e93c7: jmp 0x6e940b */ goto L_006e940b;
L_006e93c9:; BB(0x006e93c9);
    /* 006e93c9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006e93cd: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006e93d0: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 006e93d3: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 006e93d6: mov edi, esi */ r_edi = r_esi;
    /* 006e93d8: mov esi, eax */ r_esi = r_eax;
    /* 006e93da: mov ebx, edx */ r_ebx = r_edx;
L_006e93dc:; BB(0x006e93dc);
    /* 006e93dc: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e93de: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e93e3u); f_006ea700();
    /* 006e93e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e93e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e93e6: je 0x6e93fd */ if (fZ) goto L_006e93fd;
L_006e93e8:; BB(0x006e93e8);
    /* 006e93e8: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 006e93ea: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x6e93efu); f_00508f48();
    /* 006e93ef: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 006e93f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e93f4: je 0x6e93fd */ if (fZ) goto L_006e93fd;
L_006e93f6:; BB(0x006e93f6);
    /* 006e93f6: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
L_006e93fd:; BB(0x006e93fd);
    /* 006e93fd: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9400: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006e9402: ja 0x6e93dc */ if ((!fC&&!fZ)) goto L_006e93dc;
L_006e9404:; BB(0x006e9404);
    /* 006e9404: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006e9408: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006e940b:; BB(0x006e940b);
    /* 006e940b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e940e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e940f: ret  */ FN_RET(0x006e9348); r_esp += 4; return;
}

void f_006e9410(void)
{
    FN_ENTER(0x006e9410);
    /* 006e9410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e9411: mov ebp, esp */ r_ebp = r_esp;
    /* 006e9413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9415: push 0x8ef384 */ { u32 v = 0x8ef384u; r_esp -= 4; W32(r_esp, v); }
    /* 006e941a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e9420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9421: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9428: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e942b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e942e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e9431: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e9434: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e9437: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 006e943a: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 006e943e: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9443: je 0x6e9484 */ if (fZ) goto L_006e9484;
L_006e9445:; BB(0x006e9445);
    /* 006e9445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9446: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e944bu); f_007b4d18();
    /* 006e944b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e944e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9451: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9453: je 0x6e9531 */ if (fZ) goto L_006e9531;
L_006e9459:; BB(0x006e9459);
    /* 006e9459: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 006e945d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9460: jge 0x6e9531 */ if ((fS==fO)) goto L_006e9531;
L_006e9466:; BB(0x006e9466);
    /* 006e9466: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e946a: movsx edx, word ptr [edi + 6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 006e946e: lea ebx, [ebx + 0x904] */ r_ebx = (u32)(r_ebx+0x904u);
    /* 006e9474: lea esi, [edi + 0xc] */ r_esi = (u32)(r_edi+0xcu);
    /* 006e9477: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e9478: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9479: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e947b: call 0x6e9104 */ r_esp -= 4; W32(r_esp, 0x6e9480u); f_006e9104();
    /* 006e9480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9482: jne 0x6e949b */ if (!fZ) goto L_006e949b;
L_006e9484:; BB(0x006e9484);
    /* 006e9484: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e9487: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e948a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e948d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9490: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e9497: mov esp, ebp */ r_esp = r_ebp;
    /* 006e9499: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e949a: ret  */ FN_RET(0x006e9410); r_esp += 4; return;
L_006e949b:; BB(0x006e949b);
    /* 006e949b: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e949e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e949f: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 006e94a3: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 006e94a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e94a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e94a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e94ab: call 0x6e906c */ r_esp -= 4; W32(r_esp, 0x6e94b0u); f_006e906c();
    /* 006e94b0: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 006e94b4: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e94ba: je 0x6e9531 */ if (fZ) goto L_006e9531;
L_006e94bc:; BB(0x006e94bc);
    /* 006e94bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e94bd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e94c2u); f_0068d5a8();
    /* 006e94c2: mov ebx, eax */ r_ebx = r_eax;
    /* 006e94c4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e94ca: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e94cfu); f_0068d5a8();
    /* 006e94cf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e94d2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e94d4: je 0x6e9531 */ if (fZ) goto L_006e9531;
L_006e94d6:; BB(0x006e94d6);
    /* 006e94d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e94d8: je 0x6e9531 */ if (fZ) goto L_006e9531;
L_006e94da:; BB(0x006e94da);
    /* 006e94da: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 006e94e0: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e94e6: jne 0x6e9531 */ if (!fZ) goto L_006e9531;
L_006e94e8:; BB(0x006e94e8);
    /* 006e94e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e94eb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006e94f2: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 006e94f5: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e94f8: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 006e94fd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e9502u); f_005caba4();
    /* 006e9502: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e9503: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006e9506: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9508: je 0x6e9531 */ if (fZ) goto L_006e9531;
L_006e950a:; BB(0x006e950a);
    /* 006e950a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006e9511: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e9518: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e951b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e951e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9520: mov ecx, eax */ r_ecx = r_eax;
    /* 006e9522: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9523: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9524: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9525: call 0x6e84f0 */ r_esp -= 4; W32(r_esp, 0x6e952au); f_006e84f0();
    /* 006e952a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006e9531:; BB(0x006e9531);
    /* 006e9531: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e9534: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e9537: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e953a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e953d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e9544: mov esp, ebp */ r_esp = r_ebp;
    /* 006e9546: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e9547: ret  */ FN_RET(0x006e9410); r_esp += 4; return;
}

void f_006e9548(void) /* sub_6E9548 */
{
    FN_ENTER(0x006e9548);
    /* 006e9548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e9549: mov ebp, esp */ r_ebp = r_esp;
    /* 006e954b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e954d: push 0x8ef3ac */ { u32 v = 0x8ef3acu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9552: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e9558: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9559: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9560: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9563: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e9566: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006e9569: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006e956c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006e956f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6e9574u); f_00807ac0();
    /* 006e9574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9575: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x6e957au); f_00807d8c();
    /* 006e957a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e957b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e957d: je 0x6e9617 */ if (fZ) goto L_006e9617;
L_006e9583:; BB(0x006e9583);
    /* 006e9583: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9585: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_006e9588:; BB(0x006e9588);
    /* 006e9588: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e958b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e958c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e9591u); f_0068d5a8();
    /* 006e9591: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e9594: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9599: je 0x6e9605 */ if (fZ) goto L_006e9605;
L_006e959b:; BB(0x006e959b);
    /* 006e959b: movsx edx, word ptr [eax + 0x906] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x906u));
    /* 006e95a2: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e95a8: jne 0x6e9605 */ if (!fZ) goto L_006e9605;
L_006e95aa:; BB(0x006e95aa);
    /* 006e95aa: mov edx, eax */ r_edx = r_eax;
    /* 006e95ac: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e95b3: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006e95b6: lea ecx, [edx + 0x90c] */ r_ecx = (u32)(r_edx+0x90cu);
    /* 006e95bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006e95bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e95c2: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 006e95c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e95ccu); f_005caba4();
    /* 006e95cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e95cd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006e95d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e95d2: je 0x6e95fe */ if (fZ) goto L_006e95fe;
L_006e95d4:; BB(0x006e95d4);
    /* 006e95d4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e95db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e95e2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e95e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e95e8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e95eb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e95ed: mov ecx, eax */ r_ecx = r_eax;
    /* 006e95ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e95f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e95f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e95f2: call 0x6e84f0 */ r_esp -= 4; W32(r_esp, 0x6e95f7u); f_006e84f0();
    /* 006e95f7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e95fe:; BB(0x006e95fe);
    /* 006e95fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e9605:; BB(0x006e9605);
    /* 006e9605: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9608: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e960b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e960e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9611: jl 0x6e9588 */ if ((fS!=fO)) goto L_006e9588;
L_006e9617:; BB(0x006e9617);
    /* 006e9617: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e961a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e961d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e9620: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9623: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e962a: mov esp, ebp */ r_esp = r_ebp;
    /* 006e962c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e962d: ret  */ FN_RET(0x006e9548); r_esp += 4; return;
}

void f_006e95c3(void)
{
    FN_ENTER(0x006e95c3);
    goto L_006e95c3;
L_006e9588:; BB(0x006e9588);
    /* 006e9588: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e958b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e958c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e9591u); f_0068d5a8();
    /* 006e9591: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e9594: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9599: je 0x6e9605 */ if (fZ) goto L_006e9605;
L_006e959b:; BB(0x006e959b);
    /* 006e959b: movsx edx, word ptr [eax + 0x906] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x906u));
    /* 006e95a2: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e95a8: jne 0x6e9605 */ if (!fZ) goto L_006e9605;
L_006e95aa:; BB(0x006e95aa);
    /* 006e95aa: mov edx, eax */ r_edx = r_eax;
    /* 006e95ac: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e95b3: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006e95b6: lea ecx, [edx + 0x90c] */ r_ecx = (u32)(r_edx+0x90cu);
    /* 006e95bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006e95bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e95c2: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
L_006e95c3:; BB(0x006e95c3);
    /* 006e95c3: adc byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 006e95c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e95c7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e95ccu); f_005caba4();
    /* 006e95cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e95cd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006e95d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e95d2: je 0x6e95fe */ if (fZ) goto L_006e95fe;
L_006e95d4:; BB(0x006e95d4);
    /* 006e95d4: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e95db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e95e2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e95e5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e95e8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e95eb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e95ed: mov ecx, eax */ r_ecx = r_eax;
    /* 006e95ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e95f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e95f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e95f2: call 0x6e84f0 */ r_esp -= 4; W32(r_esp, 0x6e95f7u); f_006e84f0();
    /* 006e95f7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006e95fe:; BB(0x006e95fe);
    /* 006e95fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_006e9605:; BB(0x006e9605);
    /* 006e9605: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9608: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e960b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e960e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9611: jl 0x6e9588 */ if ((fS!=fO)) goto L_006e9588;
L_006e9617:; BB(0x006e9617);
    /* 006e9617: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e961a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e961d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e9620: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9623: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e962a: mov esp, ebp */ r_esp = r_ebp;
    /* 006e962c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e962d: ret  */ FN_RET(0x006e95c3); r_esp += 4; return;
}

void f_006e9630(void) /* sub_6E9630 */
{
    FN_ENTER(0x006e9630);
    /* 006e9630: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006e9635: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006e9639: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e963a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e963b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e963c: mov edi, edx */ r_edi = r_edx;
    /* 006e963e: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 006e9641: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e9644: jl 0x6e964c */ if ((fS!=fO)) goto L_006e964c;
L_006e9646:; BB(0x006e9646);
    /* 006e9646: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9648: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e9649: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e964a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e964b: ret  */ FN_RET(0x006e9630); r_esp += 4; return;
L_006e964c:; BB(0x006e964c);
    /* 006e964c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e964d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e9652u); f_0068d5a8();
    /* 006e9652: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e9653: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9655: je 0x6e9646 */ if (fZ) goto L_006e9646;
L_006e9657:; BB(0x006e9657);
    /* 006e9657: movzx ebp, word ptr [eax + 0x91c] */ r_ebp = (u32)R16((u32)(r_eax+0x91cu));
    /* 006e965e: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9664: je 0x6e9646 */ if (fZ) goto L_006e9646;
L_006e9666:; BB(0x006e9666);
    /* 006e9666: mov dword ptr [eax + 0x91c], 0xffff */ W32((u32)(r_eax+0x91cu), 0xffffu);
    /* 006e9670: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6e9675u); f_00807ac0();
    /* 006e9675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9677: jne 0x6e9694 */ if (!fZ) goto L_006e9694;
L_006e9679:; BB(0x006e9679);
    /* 006e9679: mov ecx, dword ptr [ebx*4 + 0x96d900] */ r_ecx = R32((u32)(r_ebx*4+0x96d900u));
    /* 006e9680: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 006e9682: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9684: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9686: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006e9689: lea eax, [ebx + edx + 0x96d8a0] */ r_eax = (u32)(r_ebx+r_edx+0x96d8a0u);
    /* 006e9690: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e9691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e9692: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e9693: ret  */ FN_RET(0x006e9630); r_esp += 4; return;
L_006e9694:; BB(0x006e9694);
    /* 006e9694: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6e9699u); f_00807ac0();
    /* 006e9699: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e969c: je 0x6e9679 */ if (fZ) goto L_006e9679;
L_006e969e:; BB(0x006e969e);
    /* 006e969e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6e96a3u); f_00807ac0();
    /* 006e96a3: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e96a6: je 0x6e96c4 */ if (fZ) goto L_006e96c4;
L_006e96a8:; BB(0x006e96a8);
    /* 006e96a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e96a9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e96aeu); f_0068d5a8();
    /* 006e96ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e96af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e96b1: je 0x6e9646 */ if (fZ) goto L_006e9646;
L_006e96b3:; BB(0x006e96b3);
    /* 006e96b3: mov ecx, dword ptr [eax + 0x918] */ r_ecx = R32((u32)(r_eax+0x918u));
    /* 006e96b9: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 006e96bb: add eax, 0x90c */ {  u32 a = r_eax; u32 b = 0x90cu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e96c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e96c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e96c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e96c3: ret  */ FN_RET(0x006e9630); r_esp += 4; return;
L_006e96c4:; BB(0x006e96c4);
    /* 006e96c4: mov ecx, dword ptr [ebx*4 + 0x96d900] */ r_ecx = R32((u32)(r_ebx*4+0x96d900u));
    /* 006e96cb: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 006e96cd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e96cf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e96d1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006e96d4: lea eax, [ebx + edx + 0x96d8d0] */ r_eax = (u32)(r_ebx+r_edx+0x96d8d0u);
    /* 006e96db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e96dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e96dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e96de: ret  */ FN_RET(0x006e9630); r_esp += 4; return;
}

void f_006e96e0(void) /* sub_6E96E0 */
{
    FN_ENTER(0x006e96e0);
    /* 006e96e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e96e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e96e3: mov ebx, eax */ r_ebx = r_eax;
L_006e96e5:; BB(0x006e96e5);
    /* 006e96e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e96e6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e96ebu); f_0068d5a8();
    /* 006e96eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e96ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e96ee: je 0x6e972f */ if (fZ) goto L_006e972f;
L_006e96f0:; BB(0x006e96f0);
    /* 006e96f0: mov dword ptr [eax + 0x90c], 0 */ W32((u32)(r_eax+0x90cu), 0x0u);
    /* 006e96fa: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006e96ff: mov word ptr [eax + 0x904], dx */ W16((u32)(r_eax+0x904u), (u16)r_edx);
    /* 006e9706: mov dword ptr [eax + 0x910], 0 */ W32((u32)(r_eax+0x910u), 0x0u);
    /* 006e9710: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9712: mov dword ptr [eax + 0x908], ecx */ W32((u32)(r_eax+0x908u), r_ecx);
    /* 006e9718: mov word ptr [eax + 0x906], cx */ W16((u32)(r_eax+0x906u), (u16)r_ecx);
    /* 006e971f: mov dword ptr [eax + 0x914], 0 */ W32((u32)(r_eax+0x914u), 0x0u);
    /* 006e9729: mov dword ptr [eax + 0x918], ecx */ W32((u32)(r_eax+0x918u), r_ecx);
L_006e972f:; BB(0x006e972f);
    /* 006e972f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9732: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9735: jl 0x6e96e5 */ if ((fS!=fO)) goto L_006e96e5;
L_006e9737:; BB(0x006e9737);
    /* 006e9737: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e9738: ret  */ FN_RET(0x006e96e0); r_esp += 4; return;
}

void f_006e973c(void) /* sub_6E973C */
{
    FN_ENTER(0x006e973c);
    /* 006e973c: mov dword ptr [0xa96754], 0x3f800000 */ W32((u32)(0xa96754u), 0x3f800000u);
    /* 006e9746: mov dword ptr [0xa96758], 0x41000000 */ W32((u32)(0xa96758u), 0x41000000u);
    /* 006e9750: mov dword ptr [0xa9675c], 0x3fc00000 */ W32((u32)(0xa9675cu), 0x3fc00000u);
    /* 006e975a: ret  */ FN_RET(0x006e973c); r_esp += 4; return;
}

void f_006e975c(void) /* sub_6E975C */
{
    FN_ENTER(0x006e975c);
    /* 006e975c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e975d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e975f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9761: push 0x8ef3c8 */ { u32 v = 0x8ef3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9766: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e976c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e976d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9774: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9777: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e977a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e977d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e9780: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e9783: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e9786: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e9789: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e9790: mov eax, ecx */ r_eax = r_ecx;
    /* 006e9792: movzx edx, word ptr [eax + 0xc6] */ r_edx = (u32)R16((u32)(r_eax+0xc6u));
    /* 006e9799: mov dword ptr [eax], 0xb3dc08 */ W32((u32)(r_eax), 0xb3dc08u);
    /* 006e979f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e97a1: mov eax, dword ptr [edx*8 + 0x96da7c] */ r_eax = R32((u32)(r_edx*8+0x96da7cu));
    /* 006e97a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e97aa: jbe 0x6e983d */ if ((fC||fZ)) goto L_006e983d;
L_006e97b0:; BB(0x006e97b0);
    /* 006e97b0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e97b3: mov esi, dword ptr [edx + 0x130] */ r_esi = R32((u32)(r_edx+0x130u));
L_006e97b9:; BB(0x006e97b9);
    /* 006e97b9: mov ebx, dword ptr [esi + ecx*4] */ r_ebx = R32((u32)(r_esi+r_ecx*4));
    /* 006e97bc: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006e97bf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e97c1: je 0x6e97f4 */ if (fZ) goto L_006e97f4;
L_006e97c3:; BB(0x006e97c3);
    /* 006e97c3: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e97c6: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e97ca: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e97cf: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e97d3: mov ebx, dword ptr [esi + 0x130] */ r_ebx = R32((u32)(r_esi+0x130u));
    /* 006e97d9: mov dword ptr [ebx + edx*2], 0 */ W32((u32)(r_ebx+r_edx*2), 0x0u);
    /* 006e97e0: movzx edx, word ptr [esi + 0xc6] */ r_edx = (u32)R16((u32)(r_esi+0xc6u));
    /* 006e97e7: mov esi, dword ptr [esi + 0x130] */ r_esi = R32((u32)(r_esi+0x130u));
    /* 006e97ed: mov eax, dword ptr [edx*8 + 0x96da7c] */ r_eax = R32((u32)(r_edx*8+0x96da7cu));
L_006e97f4:; BB(0x006e97f4);
    /* 006e97f4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e97f7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e97f9: jb 0x6e97b9 */ if (fC) goto L_006e97b9;
L_006e97fb:; BB(0x006e97fb);
    /* 006e97fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e97fc: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6e9801u); f_00857e98();
    /* 006e9801: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e9802: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e9809: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e980c: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6e9811u); f_006efddc();
    /* 006e9811: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e9814: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9816: jne 0x6e9831 */ if (!fZ) goto L_006e9831;
L_006e9818:; BB(0x006e9818);
    /* 006e9818: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e981b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e981e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e9821: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9824: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e982b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e982d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e982e: ret 4 */ FN_RET(0x006e975c); r_esp += 8; return;
L_006e9831:; BB(0x006e9831);
    /* 006e9831: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9834: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9835: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e983au); f_005c2f74();
    /* 006e983a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e983b: jmp 0x6e9818 */ goto L_006e9818;
L_006e983d:; BB(0x006e983d);
    /* 006e983d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9840: mov esi, dword ptr [eax + 0x130] */ r_esi = R32((u32)(r_eax+0x130u));
    /* 006e9846: jmp 0x6e97fb */ goto L_006e97fb;
}

void f_006e9848(void) /* sub_6E9848 */
{
    FN_ENTER(0x006e9848);
    /* 006e9848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e9849: mov ebp, esp */ r_ebp = r_esp;
    /* 006e984b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e984d: push 0x8ef3f0 */ { u32 v = 0x8ef3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9852: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e9858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9859: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9860: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9863: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e9866: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e9869: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e986c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e986f: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9874: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e987b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e9880u); f_005caba4();
    /* 006e9880: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e9881: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e9884: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9886: je 0x6e98b1 */ if (fZ) goto L_006e98b1;
L_006e9888:; BB(0x006e9888);
    /* 006e9888: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e988f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e9896: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9899: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e989c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e989f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e98a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e98a5: call 0x6e98c0 */ r_esp -= 4; W32(r_esp, 0x6e98aau); f_006e98c0();
    /* 006e98aa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e98b1:; BB(0x006e98b1);
    /* 006e98b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e98b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e98bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006e98bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e98be: ret  */ FN_RET(0x006e9848); r_esp += 4; return;
}

void f_006e98ad(void)
{
    FN_ENTER(0x006e98ad);
    /* 006e98ad: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e98af: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006e98b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e98b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e98bb: mov esp, ebp */ r_esp = r_ebp;
    /* 006e98bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e98be: ret  */ FN_RET(0x006e98ad); r_esp += 4; return;
}

void f_006e98c0(void) /* sub_6E98C0 */
{
    FN_ENTER(0x006e98c0);
    /* 006e98c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e98c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006e98c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e98c5: push 0x8ef40c */ { u32 v = 0x8ef40cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e98ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e98d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e98d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e98d8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e98db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e98de: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e98e1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e98e4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e98e7: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e98ea: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e98ed: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e98f0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e98f3: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006e98f6: call 0x6efe50 */ r_esp -= 4; W32(r_esp, 0x6e98fbu); f_006efe50();
    /* 006e98fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e9902: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9905: mov dword ptr [ecx], 0xb3dc08 */ W32((u32)(r_ecx), 0xb3dc08u);
    /* 006e990b: mov eax, dword ptr [0x9cf988] */ r_eax = R32((u32)(0x9cf988u));
    /* 006e9910: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e9913: call 0x6e9be8 */ r_esp -= 4; W32(r_esp, 0x6e9918u); f_006e9be8();
    /* 006e9918: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e991b: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006e991e: mov ebx, dword ptr [esi + 0x5c] */ r_ebx = R32((u32)(r_esi+0x5cu));
    /* 006e9921: movzx edi, word ptr [esi + 0xc6] */ r_edi = (u32)R16((u32)(r_esi+0xc6u));
    /* 006e9928: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e992a: mov dword ptr [esi + 0x174], ecx */ W32((u32)(r_esi+0x174u), r_ecx);
    /* 006e9930: mov dword ptr [esi + 0x178], 0 */ W32((u32)(r_esi+0x178u), 0x0u);
    /* 006e993a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e993f: mov word ptr [esi + 0x134], ax */ W16((u32)(r_esi+0x134u), (u16)r_eax);
    /* 006e9946: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006e9949: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006e994c: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 006e994f: mov word ptr [esi + 0x136], ax */ W16((u32)(r_esi+0x136u), (u16)r_eax);
    /* 006e9956: mov word ptr [esi + 0x138], ax */ W16((u32)(r_esi+0x138u), (u16)r_eax);
    /* 006e995d: mov word ptr [esi + 0x13a], ax */ W16((u32)(r_esi+0x13au), (u16)r_eax);
    /* 006e9964: mov word ptr [esi + 0x13c], ax */ W16((u32)(r_esi+0x13cu), (u16)r_eax);
    /* 006e996b: mov word ptr [esi + 0x13e], ax */ W16((u32)(r_esi+0x13eu), (u16)r_eax);
    /* 006e9972: mov word ptr [esi + 0x140], ax */ W16((u32)(r_esi+0x140u), (u16)r_eax);
    /* 006e9979: mov word ptr [esi + 0x142], ax */ W16((u32)(r_esi+0x142u), (u16)r_eax);
    /* 006e9980: mov word ptr [esi + 0x144], ax */ W16((u32)(r_esi+0x144u), (u16)r_eax);
    /* 006e9987: mov word ptr [esi + 0x146], ax */ W16((u32)(r_esi+0x146u), (u16)r_eax);
    /* 006e998e: mov word ptr [esi + 0x148], ax */ W16((u32)(r_esi+0x148u), (u16)r_eax);
    /* 006e9995: mov word ptr [esi + 0x14a], ax */ W16((u32)(r_esi+0x14au), (u16)r_eax);
    /* 006e999c: mov word ptr [esi + 0x14c], ax */ W16((u32)(r_esi+0x14cu), (u16)r_eax);
    /* 006e99a3: mov word ptr [esi + 0x14e], ax */ W16((u32)(r_esi+0x14eu), (u16)r_eax);
    /* 006e99aa: mov word ptr [esi + 0x150], ax */ W16((u32)(r_esi+0x150u), (u16)r_eax);
    /* 006e99b1: mov word ptr [esi + 0x152], ax */ W16((u32)(r_esi+0x152u), (u16)r_eax);
    /* 006e99b8: mov word ptr [esi + 0x154], ax */ W16((u32)(r_esi+0x154u), (u16)r_eax);
    /* 006e99bf: mov word ptr [esi + 0x156], ax */ W16((u32)(r_esi+0x156u), (u16)r_eax);
    /* 006e99c6: mov word ptr [esi + 0x158], ax */ W16((u32)(r_esi+0x158u), (u16)r_eax);
    /* 006e99cd: mov word ptr [esi + 0x15a], ax */ W16((u32)(r_esi+0x15au), (u16)r_eax);
    /* 006e99d4: mov word ptr [esi + 0x15c], ax */ W16((u32)(r_esi+0x15cu), (u16)r_eax);
    /* 006e99db: mov word ptr [esi + 0x15e], ax */ W16((u32)(r_esi+0x15eu), (u16)r_eax);
    /* 006e99e2: mov word ptr [esi + 0x160], ax */ W16((u32)(r_esi+0x160u), (u16)r_eax);
    /* 006e99e9: mov word ptr [esi + 0x162], ax */ W16((u32)(r_esi+0x162u), (u16)r_eax);
    /* 006e99f0: mov word ptr [esi + 0x164], ax */ W16((u32)(r_esi+0x164u), (u16)r_eax);
    /* 006e99f7: mov word ptr [esi + 0x166], ax */ W16((u32)(r_esi+0x166u), (u16)r_eax);
    /* 006e99fe: mov word ptr [esi + 0x168], ax */ W16((u32)(r_esi+0x168u), (u16)r_eax);
    /* 006e9a05: mov word ptr [esi + 0x16a], ax */ W16((u32)(r_esi+0x16au), (u16)r_eax);
    /* 006e9a0c: mov word ptr [esi + 0x16c], ax */ W16((u32)(r_esi+0x16cu), (u16)r_eax);
    /* 006e9a13: mov word ptr [esi + 0x16e], ax */ W16((u32)(r_esi+0x16eu), (u16)r_eax);
    /* 006e9a1a: mov word ptr [esi + 0x170], ax */ W16((u32)(r_esi+0x170u), (u16)r_eax);
    /* 006e9a21: mov word ptr [esi + 0x172], ax */ W16((u32)(r_esi+0x172u), (u16)r_eax);
    /* 006e9a28: mov eax, dword ptr [edi*8 + 0x96da7c] */ r_eax = R32((u32)(r_edi*8+0x96da7cu));
    /* 006e9a2f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9a31: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9a33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9a34: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e9a39u); f_008581c5();
    /* 006e9a39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e9a3a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9a3d: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 006e9a43: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e9a4a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e9a4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9a4e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9a50: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9a52: mov edx, dword ptr [eax + 0x96da7c] */ r_edx = R32((u32)(r_eax+0x96da7cu));
    /* 006e9a58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e9a5a: jbe 0x6e9ba2 */ if ((fC||fZ)) goto L_006e9ba2;
L_006e9a60:; BB(0x006e9a60);
    /* 006e9a60: mov eax, dword ptr [eax + 0x96da78] */ r_eax = R32((u32)(r_eax+0x96da78u));
    /* 006e9a66: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e9a68: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e9a6b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9a6d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 006e9a70: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e9a72: mov ebx, dword ptr [esi + eax + 4] */ r_ebx = R32((u32)(r_esi+r_eax+0x4u));
    /* 006e9a76: test ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9a7c: je 0x6e9a83 */ if (fZ) goto L_006e9a83;
L_006e9a7e:; BB(0x006e9a7e);
    /* 006e9a7e: mov edx, 0x2000 */ r_edx = 0x2000u;
L_006e9a83:; BB(0x006e9a83);
    /* 006e9a83: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e9a86: je 0x6e9ab5 */ if (fZ) goto L_006e9ab5;
L_006e9a88:; BB(0x006e9a88);
    /* 006e9a88: lea ebx, [ebp - 0x34] */ r_ebx = (u32)(r_ebp+0xffffffccu);
    /* 006e9a8b: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9a8e: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006e9a94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9a95: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9a98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9a99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9a9a: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6e9a9fu); f_00509dc4();
    /* 006e9a9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9aa2: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9aa5: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e9aab: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e9aae: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9ab0: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006e9ab3: jmp 0x6e9adc */ goto L_006e9adc;
L_006e9ab5:; BB(0x006e9ab5);
    /* 006e9ab5: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9ab8: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006e9abe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9abf: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9ac2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9ac3: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e9ac8u); f_0050981c();
    /* 006e9ac8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9acb: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9ace: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e9ad4: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e9ad7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e9ad9: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
L_006e9adc:; BB(0x006e9adc);
    /* 006e9adc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9adf: mov eax, dword ptr [ecx + 0x130] */ r_eax = R32((u32)(r_ecx+0x130u));
    /* 006e9ae5: mov edx, dword ptr [ebx + eax] */ r_edx = R32((u32)(r_ebx+r_eax));
    /* 006e9ae8: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006e9aeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9aed: je 0x6e9bd7 */ if (fZ) goto L_006e9bd7;
L_006e9af3:; BB(0x006e9af3);
    /* 006e9af3: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e9afa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9afc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9afe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b00: mov edx, dword ptr [eax + 0x96da78] */ r_edx = R32((u32)(r_eax+0x96da78u));
    /* 006e9b06: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e9b09: mov edx, dword ptr [esi + edx + 4] */ r_edx = R32((u32)(r_esi+r_edx+0x4u));
    /* 006e9b0d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e9b10: je 0x6e9b3c */ if (fZ) goto L_006e9b3c;
L_006e9b12:; BB(0x006e9b12);
    /* 006e9b12: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e9b15: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e9b18: mov ecx, dword ptr [esi + eax + 8] */ r_ecx = R32((u32)(r_esi+r_eax+0x8u));
    /* 006e9b1c: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006e9b1f: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006e9b22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9b25: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e9b2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b2e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b30: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b32: mov edx, dword ptr [eax + 0x96da78] */ r_edx = R32((u32)(r_eax+0x96da78u));
    /* 006e9b38: mov edx, dword ptr [esi + edx + 4] */ r_edx = R32((u32)(r_esi+r_edx+0x4u));
L_006e9b3c:; BB(0x006e9b3c);
    /* 006e9b3c: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e9b3f: je 0x6e9b93 */ if (fZ) goto L_006e9b93;
L_006e9b41:; BB(0x006e9b41);
    /* 006e9b41: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e9b47: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006e9b4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9b4b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e9b50u); f_005b8610();
    /* 006e9b50: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9b53: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e9b59: mov esi, dword ptr [ebx + ecx] */ r_esi = R32((u32)(r_ebx+r_ecx));
    /* 006e9b5c: mov ebx, dword ptr [0xa96680] */ r_ebx = R32((u32)(0xa96680u));
    /* 006e9b62: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9b65: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 006e9b6c: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 006e9b6f: movzx eax, word ptr [esi + 0x2c] */ r_eax = (u32)R16((u32)(r_esi+0x2cu));
    /* 006e9b73: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 006e9b76: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 006e9b7d: or eax, 0xffff0600 */ {  u32 a = r_eax; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b82: mov word ptr [esi + 0x2c], ax */ W16((u32)(r_esi+0x2cu), (u16)r_eax);
    /* 006e9b86: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e9b8d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b8f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9b91: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006e9b93:; BB(0x006e9b93);
    /* 006e9b93: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e9b96: cmp edi, dword ptr [eax + 0x96da7c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x96da7cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e9b9c: jb 0x6e9a60 */ if (fC) goto L_006e9a60;
L_006e9ba2:; BB(0x006e9ba2);
    /* 006e9ba2: call 0x6e9d24 */ r_esp -= 4; W32(r_esp, 0x6e9ba7u); f_006e9d24();
    /* 006e9ba7: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9baa: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006e9bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9baf: je 0x6e9bbc */ if (fZ) goto L_006e9bbc;
L_006e9bb1:; BB(0x006e9bb1);
    /* 006e9bb1: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e9bb5: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006e9bbc:; BB(0x006e9bbc);
    /* 006e9bbc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e9bbf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e9bc2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e9bc5: mov eax, edx */ r_eax = r_edx;
    /* 006e9bc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9bca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e9bd1: mov esp, ebp */ r_esp = r_ebp;
    /* 006e9bd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e9bd4: ret 0x10 */ FN_RET(0x006e98c0); r_esp += 20; return;
L_006e9bd7:; BB(0x006e9bd7);
    /* 006e9bd7: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e9bde: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9be0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9be2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9be4: jmp 0x6e9b93 */ goto L_006e9b93;
}

void f_006e9be8(void) /* sub_6E9BE8 */
{
    FN_ENTER(0x006e9be8);
    /* 006e9be8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9be9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9bec: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e9bee: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006e9bf5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9bfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9bfb: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9bfd: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e9c02u); f_006ded14();
    /* 006e9c02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9c05: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e9c07: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 006e9c0d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e9c10: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 006e9c16: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e9c19: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 006e9c1f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e9c22: mov dword ptr [ebx + 0xd8], edx */ W32((u32)(r_ebx+0xd8u), r_edx);
    /* 006e9c28: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e9c2b: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 006e9c31: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e9c34: mov dword ptr [ebx + 0xe0], edx */ W32((u32)(r_ebx+0xe0u), r_edx);
    /* 006e9c3a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e9c3d: mov dword ptr [ebx + 0xe4], edx */ W32((u32)(r_ebx+0xe4u), r_edx);
    /* 006e9c43: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e9c46: mov dword ptr [ebx + 0xe8], edx */ W32((u32)(r_ebx+0xe8u), r_edx);
    /* 006e9c4c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e9c4f: mov dword ptr [ebx + 0xec], edx */ W32((u32)(r_ebx+0xecu), r_edx);
    /* 006e9c55: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e9c58: mov dword ptr [ebx + 0xf0], edx */ W32((u32)(r_ebx+0xf0u), r_edx);
    /* 006e9c5e: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e9c61: mov dword ptr [ebx + 0xf4], eax */ W32((u32)(r_ebx+0xf4u), r_eax);
    /* 006e9c67: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006e9c6e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e9c71: jl 0x6e9cab */ if ((fS!=fO)) goto L_006e9cab;
L_006e9c73:; BB(0x006e9c73);
    /* 006e9c73: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e9c78u); f_00687c48();
    /* 006e9c78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9c7a: jne 0x6e9ca4 */ if (!fZ) goto L_006e9ca4;
L_006e9c7c:; BB(0x006e9c7c);
    /* 006e9c7c: movsx edx, word ptr [0x9cf768] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf768u));
    /* 006e9c83: movsx eax, word ptr [0x9cf76a] */ r_eax = (u32)(i32)(i16)R16((u32)(0x9cf76au));
    /* 006e9c8a: movsx ecx, word ptr [ebx + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006e9c91: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e9c94: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e9c96: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006e9c99: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e9c9c: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 006e9ca2: jmp 0x6e9cf4 */ goto L_006e9cf4;
L_006e9ca4:; BB(0x006e9ca4);
    /* 006e9ca4: movsx eax, word ptr [ebx + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
L_006e9cab:; BB(0x006e9cab);
    /* 006e9cab: movsx edx, word ptr [ebx + 0xf0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xf0u));
    /* 006e9cb2: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e9cb5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e9cb9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e9cbd: fadd dword ptr [ebx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xccu));
    /* 006e9cc3: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 006e9cc9: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e9cceu); f_00687c48();
    /* 006e9cce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9cd0: jne 0x6e9cdb */ if (!fZ) goto L_006e9cdb;
L_006e9cd2:; BB(0x006e9cd2);
    /* 006e9cd2: movsx ecx, word ptr [ebx + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006e9cd9: jmp 0x6e9cf4 */ goto L_006e9cf4;
L_006e9cdb:; BB(0x006e9cdb);
    /* 006e9cdb: fld dword ptr [ebx + 0xcc] */ FPUSH(R_F32((u32)(r_ebx+0xccu)));
    /* 006e9ce1: fmul dword ptr [0x9cf810] */ ST(0) = ST(0) * R_F32((u32)(0x9cf810u));
    /* 006e9ce7: movsx ecx, word ptr [ebx + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xc4u));
    /* 006e9cee: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
L_006e9cf4:; BB(0x006e9cf4);
    /* 006e9cf4: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e9cf9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e9cfb: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 006e9d01: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 006e9d04: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e9d06: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e9d08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e9d0a: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
    /* 006e9d0d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e9d11: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e9d15: fadd dword ptr [ebx + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xd0u));
    /* 006e9d1b: fstp dword ptr [ebx + 0x64] */ W_F32((u32)(r_ebx+0x64u), ST(0)); FPOP();
    /* 006e9d1e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9d21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e9d22: ret  */ FN_RET(0x006e9be8); r_esp += 4; return;
}

void f_006e9d24(void) /* sub_6E9D24 */
{
    FN_ENTER(0x006e9d24);
    /* 006e9d24: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e9d2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9d2d: je 0x6e9de8 */ if (fZ) goto L_006e9de8;
L_006e9d33:; BB(0x006e9d33);
    /* 006e9d33: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9d36: je 0x6e9dd2 */ if (fZ) goto L_006e9dd2;
L_006e9d3c:; BB(0x006e9d3c);
    /* 006e9d3c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9d3f: jl 0x6e9dd1 */ if ((fS!=fO)) goto L_006e9dd1;
L_006e9d45:; BB(0x006e9d45);
    /* 006e9d45: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e9d48: jle 0x6e9da8 */ if ((fZ||fS!=fO)) goto L_006e9da8;
L_006e9d4a:; BB(0x006e9d4a);
    /* 006e9d4a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e9d4d: jne 0x6e9d79 */ if (!fZ) goto L_006e9d79;
L_006e9d4f:; BB(0x006e9d4f);
    /* 006e9d4f: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9d52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d56: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d57: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d5c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e9d61u); f_00814298();
    /* 006e9d61: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9d66: jl 0x6e9dd1 */ if ((fS!=fO)) goto L_006e9dd1;
L_006e9d68:; BB(0x006e9d68);
    /* 006e9d68: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d6a: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d70: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e9d75u); f_00814664();
    /* 006e9d75: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9d78: ret  */ FN_RET(0x006e9d24); r_esp += 4; return;
L_006e9d79:; BB(0x006e9d79);
    /* 006e9d79: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e9d7c: jne 0x6e9dd1 */ if (!fZ) goto L_006e9dd1;
L_006e9d7e:; BB(0x006e9d7e);
    /* 006e9d7e: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9d81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9d83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d86: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d8b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e9d90u); f_00814298();
    /* 006e9d90: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9d93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9d95: jl 0x6e9dd1 */ if ((fS!=fO)) goto L_006e9dd1;
L_006e9d97:; BB(0x006e9d97);
    /* 006e9d97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d99: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9d9f: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e9da4u); f_00814664();
    /* 006e9da4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9da7: ret  */ FN_RET(0x006e9d24); r_esp += 4; return;
L_006e9da8:; BB(0x006e9da8);
    /* 006e9da8: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9dab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9dad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9daf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9db0: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9db5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e9dbau); f_00814298();
    /* 006e9dba: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9dbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9dbf: jl 0x6e9dd1 */ if ((fS!=fO)) goto L_006e9dd1;
L_006e9dc1:; BB(0x006e9dc1);
    /* 006e9dc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dc3: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dc9: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e9dceu); f_00814664();
    /* 006e9dce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006e9dd1:; BB(0x006e9dd1);
    /* 006e9dd1: ret  */ FN_RET(0x006e9d24); r_esp += 4; return;
L_006e9dd2:; BB(0x006e9dd2);
    /* 006e9dd2: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9dd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9dd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dda: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9ddf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e9de4u); f_00814298();
    /* 006e9de4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9de7: ret  */ FN_RET(0x006e9d24); r_esp += 4; return;
L_006e9de8:; BB(0x006e9de8);
    /* 006e9de8: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9deb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9ded: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9def: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e9df0: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9df5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e9dfau); f_00814298();
    /* 006e9dfa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e9dfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9dff: jl 0x6e9dd1 */ if ((fS!=fO)) goto L_006e9dd1;
L_006e9e01:; BB(0x006e9e01);
    /* 006e9e01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e03: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e09: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e9e0eu); f_00814664();
    /* 006e9e0e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e9e11: ret  */ FN_RET(0x006e9d24); r_esp += 4; return;
}

void f_006e9e14(void) /* sub_6E9E14 */
{
    FN_ENTER(0x006e9e14);
    /* 006e9e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e15: mov ebp, esp */ r_ebp = r_esp;
    /* 006e9e17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e19: push 0x8ef434 */ { u32 v = 0x8ef434u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e9e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9e2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9e2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e9e32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e9e35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e9e38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e9e3b: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e40: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e9e47: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e9e4cu); f_005caba4();
    /* 006e9e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e9e4d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e9e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e9e52: je 0x6e9e7d */ if (fZ) goto L_006e9e7d;
L_006e9e54:; BB(0x006e9e54);
    /* 006e9e54: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e9e5b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e9e62: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9e65: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9e68: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9e6b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e9e6e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9e71: call 0x6e9e8c */ r_esp -= 4; W32(r_esp, 0x6e9e76u); f_006e9e8c();
    /* 006e9e76: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e9e7d:; BB(0x006e9e7d);
    /* 006e9e7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e9e80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e9e87: mov esp, ebp */ r_esp = r_ebp;
    /* 006e9e89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e9e8a: ret  */ FN_RET(0x006e9e14); r_esp += 4; return;
}

void f_006e9e8c(void) /* sub_6E9E8C */
{
    FN_ENTER(0x006e9e8c);
    /* 006e9e8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e8d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e9e8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e91: push 0x8ef450 */ { u32 v = 0x8ef450u; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e9e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e9e9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e9ea4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e9ea7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e9eaa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e9ead: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e9eb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e9eb3: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9eb6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9eb9: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9ebc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e9ebf: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006e9ec2: call 0x6f0138 */ r_esp -= 4; W32(r_esp, 0x6e9ec7u); f_006f0138();
    /* 006e9ec7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e9ece: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9ed1: mov dword ptr [ecx], 0xb3dc08 */ W32((u32)(r_ecx), 0xb3dc08u);
    /* 006e9ed7: mov eax, dword ptr [0x9cf988] */ r_eax = R32((u32)(0x9cf988u));
    /* 006e9edc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e9edf: call 0x6e9be8 */ r_esp -= 4; W32(r_esp, 0x6e9ee4u); f_006e9be8();
    /* 006e9ee4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e9ee7: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 006e9eea: mov ebx, dword ptr [esi + 0x5c] */ r_ebx = R32((u32)(r_esi+0x5cu));
    /* 006e9eed: movzx edi, word ptr [esi + 0xc6] */ r_edi = (u32)R16((u32)(r_esi+0xc6u));
    /* 006e9ef4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e9ef6: mov dword ptr [esi + 0x174], ecx */ W32((u32)(r_esi+0x174u), r_ecx);
    /* 006e9efc: mov dword ptr [esi + 0x178], 0 */ W32((u32)(r_esi+0x178u), 0x0u);
    /* 006e9f06: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e9f0b: mov word ptr [esi + 0x134], ax */ W16((u32)(r_esi+0x134u), (u16)r_eax);
    /* 006e9f12: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006e9f15: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006e9f18: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 006e9f1b: mov word ptr [esi + 0x136], ax */ W16((u32)(r_esi+0x136u), (u16)r_eax);
    /* 006e9f22: mov word ptr [esi + 0x138], ax */ W16((u32)(r_esi+0x138u), (u16)r_eax);
    /* 006e9f29: mov word ptr [esi + 0x13a], ax */ W16((u32)(r_esi+0x13au), (u16)r_eax);
    /* 006e9f30: mov word ptr [esi + 0x13c], ax */ W16((u32)(r_esi+0x13cu), (u16)r_eax);
    /* 006e9f37: mov word ptr [esi + 0x13e], ax */ W16((u32)(r_esi+0x13eu), (u16)r_eax);
    /* 006e9f3e: mov word ptr [esi + 0x140], ax */ W16((u32)(r_esi+0x140u), (u16)r_eax);
    /* 006e9f45: mov word ptr [esi + 0x142], ax */ W16((u32)(r_esi+0x142u), (u16)r_eax);
    /* 006e9f4c: mov word ptr [esi + 0x144], ax */ W16((u32)(r_esi+0x144u), (u16)r_eax);
    /* 006e9f53: mov word ptr [esi + 0x146], ax */ W16((u32)(r_esi+0x146u), (u16)r_eax);
    /* 006e9f5a: mov word ptr [esi + 0x148], ax */ W16((u32)(r_esi+0x148u), (u16)r_eax);
    /* 006e9f61: mov word ptr [esi + 0x14a], ax */ W16((u32)(r_esi+0x14au), (u16)r_eax);
    /* 006e9f68: mov word ptr [esi + 0x14c], ax */ W16((u32)(r_esi+0x14cu), (u16)r_eax);
    /* 006e9f6f: mov word ptr [esi + 0x14e], ax */ W16((u32)(r_esi+0x14eu), (u16)r_eax);
    /* 006e9f76: mov word ptr [esi + 0x150], ax */ W16((u32)(r_esi+0x150u), (u16)r_eax);
    /* 006e9f7d: mov word ptr [esi + 0x152], ax */ W16((u32)(r_esi+0x152u), (u16)r_eax);
    /* 006e9f84: mov word ptr [esi + 0x154], ax */ W16((u32)(r_esi+0x154u), (u16)r_eax);
    /* 006e9f8b: mov word ptr [esi + 0x156], ax */ W16((u32)(r_esi+0x156u), (u16)r_eax);
    /* 006e9f92: mov word ptr [esi + 0x158], ax */ W16((u32)(r_esi+0x158u), (u16)r_eax);
    /* 006e9f99: mov word ptr [esi + 0x15a], ax */ W16((u32)(r_esi+0x15au), (u16)r_eax);
    /* 006e9fa0: mov word ptr [esi + 0x15c], ax */ W16((u32)(r_esi+0x15cu), (u16)r_eax);
    /* 006e9fa7: mov word ptr [esi + 0x15e], ax */ W16((u32)(r_esi+0x15eu), (u16)r_eax);
    /* 006e9fae: mov word ptr [esi + 0x160], ax */ W16((u32)(r_esi+0x160u), (u16)r_eax);
    /* 006e9fb5: mov word ptr [esi + 0x162], ax */ W16((u32)(r_esi+0x162u), (u16)r_eax);
    /* 006e9fbc: mov word ptr [esi + 0x164], ax */ W16((u32)(r_esi+0x164u), (u16)r_eax);
    /* 006e9fc3: mov word ptr [esi + 0x166], ax */ W16((u32)(r_esi+0x166u), (u16)r_eax);
    /* 006e9fca: mov word ptr [esi + 0x168], ax */ W16((u32)(r_esi+0x168u), (u16)r_eax);
    /* 006e9fd1: mov word ptr [esi + 0x16a], ax */ W16((u32)(r_esi+0x16au), (u16)r_eax);
    /* 006e9fd8: mov word ptr [esi + 0x16c], ax */ W16((u32)(r_esi+0x16cu), (u16)r_eax);
    /* 006e9fdf: mov word ptr [esi + 0x16e], ax */ W16((u32)(r_esi+0x16eu), (u16)r_eax);
    /* 006e9fe6: mov word ptr [esi + 0x170], ax */ W16((u32)(r_esi+0x170u), (u16)r_eax);
    /* 006e9fed: mov word ptr [esi + 0x172], ax */ W16((u32)(r_esi+0x172u), (u16)r_eax);
    /* 006e9ff4: mov eax, dword ptr [edi*8 + 0x96da7c] */ r_eax = R32((u32)(r_edi*8+0x96da7cu));
    /* 006e9ffb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9ffd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e9fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ea000: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6ea005u); f_008581c5();
    /* 006ea005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ea006: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea009: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 006ea00f: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ea016: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006ea018: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea01a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea01c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea01e: mov edx, dword ptr [eax + 0x96da7c] */ r_edx = R32((u32)(r_eax+0x96da7cu));
    /* 006ea024: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006ea026: jbe 0x6ea16e */ if ((fC||fZ)) goto L_006ea16e;
L_006ea02c:; BB(0x006ea02c);
    /* 006ea02c: mov eax, dword ptr [eax + 0x96da78] */ r_eax = R32((u32)(r_eax+0x96da78u));
    /* 006ea032: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006ea034: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006ea037: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ea039: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 006ea03c: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006ea03e: mov ebx, dword ptr [esi + eax + 4] */ r_ebx = R32((u32)(r_esi+r_eax+0x4u));
    /* 006ea042: test ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea048: je 0x6ea04f */ if (fZ) goto L_006ea04f;
L_006ea04a:; BB(0x006ea04a);
    /* 006ea04a: mov edx, 0x2000 */ r_edx = 0x2000u;
L_006ea04f:; BB(0x006ea04f);
    /* 006ea04f: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ea052: je 0x6ea081 */ if (fZ) goto L_006ea081;
L_006ea054:; BB(0x006ea054);
    /* 006ea054: lea ebx, [ebp - 0x34] */ r_ebx = (u32)(r_ebp+0xffffffccu);
    /* 006ea057: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ea05a: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ea060: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea061: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006ea064: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea066: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6ea06bu); f_00509dc4();
    /* 006ea06b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ea06e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea071: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006ea077: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006ea07a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ea07c: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006ea07f: jmp 0x6ea0a8 */ goto L_006ea0a8;
L_006ea081:; BB(0x006ea081);
    /* 006ea081: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006ea084: or edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006ea08a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea08b: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006ea08e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea08f: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6ea094u); f_0050981c();
    /* 006ea094: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ea097: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea09a: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006ea0a0: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006ea0a3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006ea0a5: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
L_006ea0a8:; BB(0x006ea0a8);
    /* 006ea0a8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea0ab: mov eax, dword ptr [ecx + 0x130] */ r_eax = R32((u32)(r_ecx+0x130u));
    /* 006ea0b1: mov edx, dword ptr [ebx + eax] */ r_edx = R32((u32)(r_ebx+r_eax));
    /* 006ea0b4: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006ea0b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ea0b9: je 0x6ea1a3 */ if (fZ) goto L_006ea1a3;
L_006ea0bf:; BB(0x006ea0bf);
    /* 006ea0bf: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ea0c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea0c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea0ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea0cc: mov edx, dword ptr [eax + 0x96da78] */ r_edx = R32((u32)(r_eax+0x96da78u));
    /* 006ea0d2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006ea0d5: mov edx, dword ptr [esi + edx + 4] */ r_edx = R32((u32)(r_esi+r_edx+0x4u));
    /* 006ea0d9: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ea0dc: je 0x6ea108 */ if (fZ) goto L_006ea108;
L_006ea0de:; BB(0x006ea0de);
    /* 006ea0de: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006ea0e1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006ea0e4: mov ecx, dword ptr [esi + eax + 8] */ r_ecx = R32((u32)(r_esi+r_eax+0x8u));
    /* 006ea0e8: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 006ea0eb: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 006ea0ee: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea0f1: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ea0f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea0fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea0fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea0fe: mov edx, dword ptr [eax + 0x96da78] */ r_edx = R32((u32)(r_eax+0x96da78u));
    /* 006ea104: mov edx, dword ptr [esi + edx + 4] */ r_edx = R32((u32)(r_esi+r_edx+0x4u));
L_006ea108:; BB(0x006ea108);
    /* 006ea108: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006ea10b: je 0x6ea15f */ if (fZ) goto L_006ea15f;
L_006ea10d:; BB(0x006ea10d);
    /* 006ea10d: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006ea113: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006ea116: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ea117: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6ea11cu); f_005b8610();
    /* 006ea11c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea11f: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006ea125: mov esi, dword ptr [ebx + ecx] */ r_esi = R32((u32)(r_ebx+r_ecx));
    /* 006ea128: mov ebx, dword ptr [0xa96680] */ r_ebx = R32((u32)(0xa96680u));
    /* 006ea12e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea131: mov dword ptr [esi + 0x58], 0 */ W32((u32)(r_esi+0x58u), 0x0u);
    /* 006ea138: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 006ea13b: movzx eax, word ptr [esi + 0x2c] */ r_eax = (u32)R16((u32)(r_esi+0x2cu));
    /* 006ea13f: mov dword ptr [esi + 0x54], ebx */ W32((u32)(r_esi+0x54u), r_ebx);
    /* 006ea142: mov dword ptr [esi + 0x60], 0x3f800000 */ W32((u32)(r_esi+0x60u), 0x3f800000u);
    /* 006ea149: or eax, 0xffff0600 */ {  u32 a = r_eax; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006ea14e: mov word ptr [esi + 0x2c], ax */ W16((u32)(r_esi+0x2cu), (u16)r_eax);
    /* 006ea152: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ea159: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea15b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea15d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006ea15f:; BB(0x006ea15f);
    /* 006ea15f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006ea162: cmp edi, dword ptr [eax + 0x96da7c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x96da7cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006ea168: jb 0x6ea02c */ if (fC) goto L_006ea02c;
L_006ea16e:; BB(0x006ea16e);
    /* 006ea16e: call 0x6e9d24 */ r_esp -= 4; W32(r_esp, 0x6ea173u); f_006e9d24();
    /* 006ea173: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006ea176: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006ea179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006ea17b: je 0x6ea188 */ if (fZ) goto L_006ea188;
L_006ea17d:; BB(0x006ea17d);
    /* 006ea17d: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006ea181: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006ea188:; BB(0x006ea188);
    /* 006ea188: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006ea18b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006ea18e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006ea191: mov eax, edx */ r_eax = r_edx;
    /* 006ea193: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006ea196: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006ea19d: mov esp, ebp */ r_esp = r_ebp;
    /* 006ea19f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006ea1a0: ret 0x10 */ FN_RET(0x006e9e8c); r_esp += 20; return;
L_006ea1a3:; BB(0x006ea1a3);
    /* 006ea1a3: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006ea1aa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea1ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea1ae: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006ea1b0: jmp 0x6ea15f */ goto L_006ea15f;
}

