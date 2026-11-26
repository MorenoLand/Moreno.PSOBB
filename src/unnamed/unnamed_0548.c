#include "protos.h"

void f_005483b8(void) /* sub_5483B8 */
{
    FN_ENTER(0x005483b8);
    /* 005483b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005483b9: mov esi, ecx */ r_esi = r_ecx;
    /* 005483bb: mov ecx, dword ptr [esi + 0x384] */ r_ecx = R32((u32)(r_esi+0x384u));
    /* 005483c1: call 0x54a2c8 */ r_esp -= 4; W32(r_esp, 0x5483c6u); f_0054a2c8();
    /* 005483c6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005483c9: je 0x5483cd */ if (fZ) goto L_005483cd;
L_005483cb:; BB(0x005483cb);
    /* 005483cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005483cc: ret  */ FN_RET(0x005483b8); r_esp += 4; return;
L_005483cd:; BB(0x005483cd);
    /* 005483cd: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005483d0: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005483d5: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005483d8: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005483da: je 0x5483f0 */ if (fZ) goto L_005483f0;
L_005483dc:; BB(0x005483dc);
    /* 005483dc: mov dword ptr [esi + 0x37c], 7 */ W32((u32)(r_esi+0x37cu), 0x7u);
    /* 005483e6: mov ecx, esi */ r_ecx = r_esi;
    /* 005483e8: call dword ptr [0x9bd198] */ { u32 t = R32((u32)(0x9bd198u)); r_esp -= 4; W32(r_esp, 0x5483eeu); call_ind(t); }
    /* 005483ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005483ef: ret  */ FN_RET(0x005483b8); r_esp += 4; return;
L_005483f0:; BB(0x005483f0);
    /* 005483f0: mov dword ptr [esi + 0x37c], 6 */ W32((u32)(r_esi+0x37cu), 0x6u);
    /* 005483fa: mov ecx, esi */ r_ecx = r_esi;
    /* 005483fc: call dword ptr [0x9bd190] */ { u32 t = R32((u32)(0x9bd190u)); r_esp -= 4; W32(r_esp, 0x548402u); call_ind(t); }
    /* 00548402: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548403: ret  */ FN_RET(0x005483b8); r_esp += 4; return;
}

void f_00548404(void) /* sub_548404 */
{
    FN_ENTER(0x00548404);
    /* 00548404: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00548405: mov edi, ecx */ r_edi = r_ecx;
    /* 00548407: mov ecx, dword ptr [edi + 0x384] */ r_ecx = R32((u32)(r_edi+0x384u));
    /* 0054840d: call 0x54a2c8 */ r_esp -= 4; W32(r_esp, 0x548412u); f_0054a2c8();
    /* 00548412: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00548415: je 0x548419 */ if (fZ) goto L_00548419;
L_00548417:; BB(0x00548417);
    /* 00548417: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548418: ret  */ FN_RET(0x00548404); r_esp += 4; return;
L_00548419:; BB(0x00548419);
    /* 00548419: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054841c: mov dword ptr [edi + 0x37c], 3 */ W32((u32)(r_edi+0x37cu), 0x3u);
    /* 00548426: mov ecx, edi */ r_ecx = r_edi;
    /* 00548428: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054842d: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00548430: call dword ptr [0x9bd178] */ { u32 t = R32((u32)(0x9bd178u)); r_esp -= 4; W32(r_esp, 0x548436u); call_ind(t); }
    /* 00548436: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00548439: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054843b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054843c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054843d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054843e: push 0x277 */ { u32 v = 0x277u; r_esp -= 4; W32(r_esp, v); }
    /* 00548443: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x548448u); f_00814298();
    /* 00548448: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054844b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054844c: ret  */ FN_RET(0x00548404); r_esp += 4; return;
}

void f_00548450(void) /* sub_548450 */
{
    FN_ENTER(0x00548450);
    /* 00548450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00548451: mov ebx, esp */ r_ebx = r_esp;
    /* 00548453: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00548456: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00548457: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548458: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054845b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054845d: mov ecx, dword ptr [ebp + 0x39c] */ r_ecx = R32((u32)(r_ebp+0x39cu));
    /* 00548463: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x548468u); f_0082dcbc();
    /* 00548468: fild dword ptr [ebp + 0x60] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x60u)));
    /* 0054846b: fild dword ptr [ebp + 0x3c4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3c4u)));
    /* 00548471: mov edx, dword ptr [ebp + 0x3cc] */ r_edx = R32((u32)(r_ebp+0x3ccu));
    /* 00548477: fld dword ptr [0x923e9c] */ FPUSH(R_F32((u32)(0x923e9cu)));
    /* 0054847d: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0054847f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548481: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548482: jbe 0x548486 */ if ((fC||fZ)) goto L_00548486;
L_00548484:; BB(0x00548484);
    /* 00548484: fst st(3) */ ST(3) = ST(0);
L_00548486:; BB(0x00548486);
    /* 00548486: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548488: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0054848a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0054848c: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00548490: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00548495: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054849a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0054849e: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005484a2: fistp dword ptr [ebp + 0x60] */ W32((u32)(r_ebp+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005484a5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005484a9: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005484af: je 0x54861f */ if (fZ) goto L_0054861f;
L_005484b5:; BB(0x005484b5);
    /* 005484b5: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
L_005484bb:; BB(0x005484bb);
    /* 005484bb: add eax, 0xfffffa00 */ {  u32 a = r_eax; u32 b = 0xfffffa00u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005484c0: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 005484c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005484c8: jle 0x5484d3 */ if ((fZ||fS!=fO)) goto L_005484d3;
L_005484ca:; BB(0x005484ca);
    /* 005484ca: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005484cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005484ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005484cf: mov esp, ebx */ r_esp = r_ebx;
    /* 005484d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005484d2: ret  */ FN_RET(0x00548450); r_esp += 4; return;
L_005484d3:; BB(0x005484d3);
    /* 005484d3: mov ecx, dword ptr [0xa738c8] */ r_ecx = R32((u32)(0xa738c8u));
    /* 005484d9: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005484db: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x5484e0u); f_005b8638();
    /* 005484e0: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005484e3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005484e6: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005484e9: fadd dword ptr [edx*4 + 0x923db8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x923db8u));
    /* 005484f0: fdiv dword ptr [0x923d40] */ ST(0) = ST(0) / R_F32((u32)(0x923d40u));
    /* 005484f6: mov dword ptr [ebp + 0x39c], 0 */ W32((u32)(r_ebp+0x39cu), 0x0u);
    /* 00548500: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00548504: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00548509: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054850e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00548512: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00548516: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054851a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0054851e: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00548522: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 00548528: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054852d: je 0x5485a5 */ if (fZ) goto L_005485a5;
L_0054852f:; BB(0x0054852f);
    /* 0054852f: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00548537: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0054853b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0054853e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548540: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00548548: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00548550: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548551: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548552: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x548557u); f_007713d4();
    /* 00548557: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548559: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0054855d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00548561: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00548563: fmul qword ptr [0x923dc8] */ ST(0) = ST(0) * R_F64((u32)(0x923dc8u));
    /* 00548569: fdiv qword ptr [0x923dc0] */ ST(0) = ST(0) / R_F64((u32)(0x923dc0u));
    /* 0054856f: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00548573: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00548578: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054857d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00548581: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00548585: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00548589: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0054858d: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00548591: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 00548596: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548597: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054859a: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x54859fu); f_007a8c74();
    /* 0054859f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005485a2: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
L_005485a5:; BB(0x005485a5);
    /* 005485a5: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 005485ab: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005485ad: jg 0x5485e8 */ if ((!fZ&&fS==fO)) goto L_005485e8;
L_005485af:; BB(0x005485af);
    /* 005485af: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005485b2: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 005485b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005485ba: jg 0x5484ca */ if ((!fZ&&fS==fO)) goto L_005484ca;
L_005485c0:; BB(0x005485c0);
    /* 005485c0: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005485c6: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005485cb: je 0x548604 */ if (fZ) goto L_00548604;
L_005485cd:; BB(0x005485cd);
    /* 005485cd: mov dword ptr [ebp + 0x37c], 8 */ W32((u32)(r_ebp+0x37cu), 0x8u);
    /* 005485d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005485d9: call dword ptr [0x9bd1a0] */ { u32 t = R32((u32)(0x9bd1a0u)); r_esp -= 4; W32(r_esp, 0x5485dfu); call_ind(t); }
    /* 005485df: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005485e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005485e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005485e4: mov esp, ebx */ r_esp = r_ebx;
    /* 005485e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005485e7: ret  */ FN_RET(0x00548450); r_esp += 4; return;
L_005485e8:; BB(0x005485e8);
    /* 005485e8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005485ea: mov ecx, dword ptr [ebp + 0x384] */ r_ecx = R32((u32)(r_ebp+0x384u));
    /* 005485f0: call 0x54a160 */ r_esp -= 4; W32(r_esp, 0x5485f5u); f_0054a160();
    /* 005485f5: mov dword ptr [ebp + 0x38c], edi */ W32((u32)(r_ebp+0x38cu), r_edi);
    /* 005485fb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005485fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005485ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548600: mov esp, ebx */ r_esp = r_ebx;
    /* 00548602: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00548603: ret  */ FN_RET(0x00548450); r_esp += 4; return;
L_00548604:; BB(0x00548604);
    /* 00548604: mov dword ptr [ebp + 0x37c], 5 */ W32((u32)(r_ebp+0x37cu), 0x5u);
    /* 0054860e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548610: call dword ptr [0x9bd188] */ { u32 t = R32((u32)(0x9bd188u)); r_esp -= 4; W32(r_esp, 0x548616u); call_ind(t); }
    /* 00548616: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054861a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054861b: mov esp, ebx */ r_esp = r_ebx;
    /* 0054861d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054861e: ret  */ FN_RET(0x00548450); r_esp += 4; return;
L_0054861f:; BB(0x0054861f);
    /* 0054861f: movzx eax, byte ptr [0xa7387c] */ r_eax = (u32)R8((u32)(0xa7387cu));
    /* 00548626: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00548628: jne 0x548650 */ if (!fZ) goto L_00548650;
L_0054862a:; BB(0x0054862a);
    /* 0054862a: fld dword ptr [0xa738ac] */ FPUSH(R_F32((u32)(0xa738acu)));
    /* 00548630: fld dword ptr [0xa738a8] */ FPUSH(R_F32((u32)(0xa738a8u)));
    /* 00548636: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00548638: fmul dword ptr [0x923e98] */ ST(0) = ST(0) * R_F32((u32)(0x923e98u));
    /* 0054863e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548640: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00548645: fstp dword ptr [0xa73880] */ W_F32((u32)(0xa73880u), ST(0)); FPOP();
    /* 0054864b: mov byte ptr [0xa7387c], al */ W8((u32)(0xa7387cu), (u8)r_eax);
L_00548650:; BB(0x00548650);
    /* 00548650: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00548653: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548654: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548656: push dword ptr [0xa73880] */ { u32 v = R32((u32)(0xa73880u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054865c: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x548661u); f_007714cc();
    /* 00548661: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 00548664: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054866a: je 0x5486ce */ if (fZ) goto L_005486ce;
L_0054866c:; BB(0x0054866c);
    /* 0054866c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0054866f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00548673: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00548675: fmul qword ptr [0x923dc8] */ ST(0) = ST(0) * R_F64((u32)(0x923dc8u));
    /* 0054867b: fdiv qword ptr [0x923dc0] */ ST(0) = ST(0) / R_F64((u32)(0x923dc0u));
    /* 00548681: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00548685: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0054868a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054868f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00548693: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00548697: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0054869b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0054869f: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005486a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005486a4: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005486a7: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5486acu); f_007a9018();
    /* 005486ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005486af: cmp eax, 0x1c71 */ {  u32 a = r_eax; u32 b = 0x1c71u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005486b4: jge 0x5486c3 */ if ((fS==fO)) goto L_005486c3;
L_005486b6:; BB(0x005486b6);
    /* 005486b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005486b8: mov dword ptr [ebp + 0x3cc], edi */ W32((u32)(r_ebp+0x3ccu), r_edi);
    /* 005486be: jmp 0x5484bb */ goto L_005484bb;
L_005486c3:; BB(0x005486c3);
    /* 005486c3: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 005486c9: jmp 0x5484bb */ goto L_005484bb;
L_005486ce:; BB(0x005486ce);
    /* 005486ce: mov eax, dword ptr [ebp + 0x39c] */ r_eax = R32((u32)(r_ebp+0x39cu));
    /* 005486d4: jmp 0x5484bb */ goto L_005484bb;
}

void f_005486dc(void) /* sub_5486DC */
{
    FN_ENTER(0x005486dc);
    /* 005486dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005486dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005486de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005486df: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005486e2: mov esi, ecx */ r_esi = r_ecx;
    /* 005486e4: mov eax, dword ptr [esi + 0x3c4] */ r_eax = R32((u32)(r_esi+0x3c4u));
    /* 005486ea: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005486ed: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005486f3: add dword ptr [esi + 0x60], eax */ { u32 ad = (u32)(r_esi+0x60u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005486f6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005486f8: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005486fb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005486fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005486ff: mov ecx, esi */ r_ecx = r_esi;
    /* 00548701: push dword ptr [0xa738a4] */ { u32 v = R32((u32)(0xa738a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548707: call 0x77170c */ r_esp -= 4; W32(r_esp, 0x54870cu); f_0077170c();
    /* 0054870c: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0054870f: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00548712: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00548717: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054871d: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00548720: je 0x548774 */ if (fZ) goto L_00548774;
L_00548722:; BB(0x00548722);
    /* 00548722: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00548725: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00548729: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054872b: fmul qword ptr [0x923db0] */ ST(0) = ST(0) * R_F64((u32)(0x923db0u));
    /* 00548731: fdiv qword ptr [0x923da8] */ ST(0) = ST(0) / R_F64((u32)(0x923da8u));
    /* 00548737: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0054873b: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00548740: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00548745: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00548749: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0054874d: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00548751: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00548755: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00548759: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054875a: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054875d: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x548762u); f_007a9018();
    /* 00548762: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548765: cmp eax, 0x444 */ {  u32 a = r_eax; u32 b = 0x444u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054876a: jge 0x548774 */ if ((fS==fO)) goto L_00548774;
L_0054876c:; BB(0x0054876c);
    /* 0054876c: mov dword ptr [esi + 0x60], ebx */ W32((u32)(r_esi+0x60u), r_ebx);
    /* 0054876f: mov edi, 1 */ r_edi = 0x1u;
L_00548774:; BB(0x00548774);
    /* 00548774: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 0054877a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054877d: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 00548783: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548785: jne 0x548792 */ if (!fZ) goto L_00548792;
L_00548787:; BB(0x00548787);
    /* 00548787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00548789: jl 0x548792 */ if ((fS!=fO)) goto L_00548792;
L_0054878b:; BB(0x0054878b);
    /* 0054878b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054878e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054878f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548790: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548791: ret  */ FN_RET(0x005486dc); r_esp += 4; return;
L_00548792:; BB(0x00548792);
    /* 00548792: mov dword ptr [esi + 0x37c], 9 */ W32((u32)(r_esi+0x37cu), 0x9u);
    /* 0054879c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054879e: call dword ptr [0x9bd1a8] */ { u32 t = R32((u32)(0x9bd1a8u)); r_esp -= 4; W32(r_esp, 0x5487a4u); call_ind(t); }
    /* 005487a4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005487a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005487a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005487a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005487aa: ret  */ FN_RET(0x005486dc); r_esp += 4; return;
}

void f_005487ac(void) /* sub_5487AC */
{
    FN_ENTER(0x005487ac);
    /* 005487ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005487ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005487ae: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005487b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005487b3: fld dword ptr [0x923e90] */ FPUSH(R_F32((u32)(0x923e90u)));
    /* 005487b9: fld dword ptr [0x923e8c] */ FPUSH(R_F32((u32)(0x923e8cu)));
    /* 005487bf: mov eax, dword ptr [ebp + 0x3cc] */ r_eax = R32((u32)(r_ebp+0x3ccu));
    /* 005487c5: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005487ca: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005487d1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005487d9: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005487e1: je 0x5487ff */ if (fZ) goto L_005487ff;
L_005487e3:; BB(0x005487e3);
    /* 005487e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005487e5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005487e7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005487ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005487eb: movzx esi, ax */ r_esi = (u32)(u16)r_eax;
    /* 005487ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005487f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005487f1: call 0x7713d4 */ r_esp -= 4; W32(r_esp, 0x5487f6u); f_007713d4();
    /* 005487f6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005487f8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005487fb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_005487ff:; BB(0x005487ff);
    /* 005487ff: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00548801: fmul qword ptr [0x923da0] */ ST(0) = ST(0) * R_F64((u32)(0x923da0u));
    /* 00548807: fdiv qword ptr [0x923d98] */ ST(0) = ST(0) / R_F64((u32)(0x923d98u));
    /* 0054880d: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00548811: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00548816: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054881b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0054881f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00548823: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00548827: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0054882b: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0054882f: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00548834: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00548835: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548838: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x54883du); f_007a8c74();
    /* 0054883d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054883e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054883f: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00548842: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x548847u); f_007a9018();
    /* 00548847: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054884a: cmp eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054884f: jge 0x54885b */ if ((fS==fO)) goto L_0054885b;
L_00548851:; BB(0x00548851);
    /* 00548851: mov dword ptr [ebp + 0x38c], 0 */ W32((u32)(r_ebp+0x38cu), 0x0u);
L_0054885b:; BB(0x0054885b);
    /* 0054885b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0054885e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00548861: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00548864: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 00548867: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 0054886a: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 0054886d: mov dword ptr [ebp + 0x4c], esi */ W32((u32)(r_ebp+0x4cu), r_esi);
    /* 00548870: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x548875u); f_0083173c();
    /* 00548875: fcomp dword ptr [0x923e88] */ fx_compare(ST(0), R_F32((u32)(0x923e88u))); FPOP();
    /* 0054887b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054887d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054887e: ja 0x548896 */ if ((!fC&&!fZ)) goto L_00548896;
L_00548880:; BB(0x00548880);
    /* 00548880: fld dword ptr [0x923e90] */ FPUSH(R_F32((u32)(0x923e90u)));
    /* 00548886: fld dword ptr [0x923e8c] */ FPUSH(R_F32((u32)(0x923e8cu)));
    /* 0054888c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00548894: jmp 0x5488a7 */ goto L_005488a7;
L_00548896:; BB(0x00548896);
    /* 00548896: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00548899: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x54889eu); f_0082df08();
    /* 0054889e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005488a0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005488a3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
L_005488a7:; BB(0x005488a7);
    /* 005488a7: fld dword ptr [0x923d48] */ FPUSH(R_F32((u32)(0x923d48u)));
    /* 005488ad: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005488af: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005488b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005488b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005488b6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005488ba: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005488bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005488c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005488c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005488c7: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005488ca: mov ecx, esi */ r_ecx = r_esi;
    /* 005488cc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5488d1u); f_0082ebac();
    /* 005488d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005488d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005488d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005488d6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5488dbu); f_007b4c58();
    /* 005488db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005488dd: je 0x5488f0 */ if (fZ) goto L_005488f0;
L_005488df:; BB(0x005488df);
    /* 005488df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005488e0: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 005488e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005488e4: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5488e9u); f_00780d3c();
    /* 005488e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005488ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005488ee: je 0x548902 */ if (fZ) goto L_00548902;
L_005488f0:; BB(0x005488f0);
    /* 005488f0: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 005488f3: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 005488f6: mov esi, dword ptr [ebp + 0x4c] */ r_esi = R32((u32)(r_ebp+0x4cu));
    /* 005488f9: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 005488fc: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 005488ff: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
L_00548902:; BB(0x00548902);
    /* 00548902: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 00548908: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054890b: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00548911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548913: jg 0x548983 */ if ((!fZ&&fS==fO)) goto L_00548983;
L_00548915:; BB(0x00548915);
    /* 00548915: movzx eax, byte ptr [0xa73884] */ r_eax = (u32)R8((u32)(0xa73884u));
    /* 0054891c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054891e: jne 0x548934 */ if (!fZ) goto L_00548934;
L_00548920:; BB(0x00548920);
    /* 00548920: mov dword ptr [0xa73888], 0x42480000 */ W32((u32)(0xa73888u), 0x42480000u);
    /* 0054892a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054892f: mov byte ptr [0xa73884], al */ W8((u32)(0xa73884u), (u8)r_eax);
L_00548934:; BB(0x00548934);
    /* 00548934: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00548937: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x54893cu); f_0083173c();
    /* 0054893c: fcomp dword ptr [0xa73888] */ fx_compare(ST(0), R_F32((u32)(0xa73888u))); FPOP();
    /* 00548942: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548944: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548945: ja 0x548959 */ if ((!fC&&!fZ)) goto L_00548959;
L_00548947:; BB(0x00548947);
    /* 00548947: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548949: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54894eu); f_007751b0();
    /* 0054894e: fcomp dword ptr [0x923d44] */ fx_compare(ST(0), R_F32((u32)(0x923d44u))); FPOP();
    /* 00548954: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548956: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548957: jae 0x548971 */ if (!fC) goto L_00548971;
L_00548959:; BB(0x00548959);
    /* 00548959: mov dword ptr [ebp + 0x37c], 9 */ W32((u32)(r_ebp+0x37cu), 0x9u);
    /* 00548963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548965: call dword ptr [0x9bd1a8] */ { u32 t = R32((u32)(0x9bd1a8u)); r_esp -= 4; W32(r_esp, 0x54896bu); call_ind(t); }
    /* 0054896b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054896e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054896f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548970: ret  */ FN_RET(0x005487ac); r_esp += 4; return;
L_00548971:; BB(0x00548971);
    /* 00548971: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 0054897b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054897d: call dword ptr [0x9bd1b0] */ { u32 t = R32((u32)(0x9bd1b0u)); r_esp -= 4; W32(r_esp, 0x548983u); call_ind(t); }
L_00548983:; BB(0x00548983);
    /* 00548983: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548987: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548988: ret  */ FN_RET(0x005487ac); r_esp += 4; return;
}

void f_005488a9(void)
{
    FN_ENTER(0x005488a9);
    /* 005488a9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005488aa: cmp eax, 0xcadc0092 */ {  u32 a = r_eax; u32 b = 0xcadc0092u; u32 r = (a - b) & 0xffffffffu;   }
    /* 005488af: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005488b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005488b3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005488b6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005488ba: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005488bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005488c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005488c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005488c7: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 005488ca: mov ecx, esi */ r_ecx = r_esi;
    /* 005488cc: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5488d1u); f_0082ebac();
    /* 005488d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005488d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005488d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005488d6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5488dbu); f_007b4c58();
    /* 005488db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005488dd: je 0x5488f0 */ if (fZ) goto L_005488f0;
L_005488df:; BB(0x005488df);
    /* 005488df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005488e0: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 005488e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005488e4: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5488e9u); f_00780d3c();
    /* 005488e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005488ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005488ee: je 0x548902 */ if (fZ) goto L_00548902;
L_005488f0:; BB(0x005488f0);
    /* 005488f0: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 005488f3: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 005488f6: mov esi, dword ptr [ebp + 0x4c] */ r_esi = R32((u32)(r_ebp+0x4cu));
    /* 005488f9: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 005488fc: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 005488ff: mov dword ptr [ebp + 0x40], esi */ W32((u32)(r_ebp+0x40u), r_esi);
L_00548902:; BB(0x00548902);
    /* 00548902: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 00548908: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054890b: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00548911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548913: jg 0x548983 */ if ((!fZ&&fS==fO)) goto L_00548983;
L_00548915:; BB(0x00548915);
    /* 00548915: movzx eax, byte ptr [0xa73884] */ r_eax = (u32)R8((u32)(0xa73884u));
    /* 0054891c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054891e: jne 0x548934 */ if (!fZ) goto L_00548934;
L_00548920:; BB(0x00548920);
    /* 00548920: mov dword ptr [0xa73888], 0x42480000 */ W32((u32)(0xa73888u), 0x42480000u);
    /* 0054892a: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054892f: mov byte ptr [0xa73884], al */ W8((u32)(0xa73884u), (u8)r_eax);
L_00548934:; BB(0x00548934);
    /* 00548934: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00548937: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x54893cu); f_0083173c();
    /* 0054893c: fcomp dword ptr [0xa73888] */ fx_compare(ST(0), R_F32((u32)(0xa73888u))); FPOP();
    /* 00548942: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548944: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548945: ja 0x548959 */ if ((!fC&&!fZ)) goto L_00548959;
L_00548947:; BB(0x00548947);
    /* 00548947: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548949: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x54894eu); f_007751b0();
    /* 0054894e: fcomp dword ptr [0x923d44] */ fx_compare(ST(0), R_F32((u32)(0x923d44u))); FPOP();
    /* 00548954: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548956: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548957: jae 0x548971 */ if (!fC) goto L_00548971;
L_00548959:; BB(0x00548959);
    /* 00548959: mov dword ptr [ebp + 0x37c], 9 */ W32((u32)(r_ebp+0x37cu), 0x9u);
    /* 00548963: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548965: call dword ptr [0x9bd1a8] */ { u32 t = R32((u32)(0x9bd1a8u)); r_esp -= 4; W32(r_esp, 0x54896bu); call_ind(t); }
    /* 0054896b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054896e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054896f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548970: ret  */ FN_RET(0x005488a9); r_esp += 4; return;
L_00548971:; BB(0x00548971);
    /* 00548971: mov dword ptr [ebp + 0x37c], 0xa */ W32((u32)(r_ebp+0x37cu), 0xau);
    /* 0054897b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054897d: call dword ptr [0x9bd1b0] */ { u32 t = R32((u32)(0x9bd1b0u)); r_esp -= 4; W32(r_esp, 0x548983u); call_ind(t); }
L_00548983:; BB(0x00548983);
    /* 00548983: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548987: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548988: ret  */ FN_RET(0x005488a9); r_esp += 4; return;
}

void f_0054898c(void) /* sub_54898C */
{
    FN_ENTER(0x0054898c);
    /* 0054898c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054898d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054898e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548991: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00548993: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00548999: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054899c: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 005489a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005489a4: jle 0x5489f6 */ if ((fZ||fS!=fO)) goto L_005489f6;
L_005489a6:; BB(0x005489a6);
    /* 005489a6: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 005489ac: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005489af: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 005489b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005489b7: jle 0x5489bf */ if ((fZ||fS!=fO)) goto L_005489bf;
L_005489b9:; BB(0x005489b9);
    /* 005489b9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005489bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005489bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005489be: ret  */ FN_RET(0x0054898c); r_esp += 4; return;
L_005489bf:; BB(0x005489bf);
    /* 005489bf: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005489c2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005489c4: je 0x5489de */ if (fZ) goto L_005489de;
L_005489c6:; BB(0x005489c6);
    /* 005489c6: mov dword ptr [ebp + 0x37c], 7 */ W32((u32)(r_ebp+0x37cu), 0x7u);
    /* 005489d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005489d2: call dword ptr [0x9bd198] */ { u32 t = R32((u32)(0x9bd198u)); r_esp -= 4; W32(r_esp, 0x5489d8u); call_ind(t); }
    /* 005489d8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005489db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005489dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005489dd: ret  */ FN_RET(0x0054898c); r_esp += 4; return;
L_005489de:; BB(0x005489de);
    /* 005489de: mov dword ptr [ebp + 0x37c], 5 */ W32((u32)(r_ebp+0x37cu), 0x5u);
    /* 005489e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005489ea: call dword ptr [0x9bd188] */ { u32 t = R32((u32)(0x9bd188u)); r_esp -= 4; W32(r_esp, 0x5489f0u); call_ind(t); }
    /* 005489f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005489f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005489f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005489f5: ret  */ FN_RET(0x0054898c); r_esp += 4; return;
L_005489f6:; BB(0x005489f6);
    /* 005489f6: jne 0x5489a6 */ if (!fZ) goto L_005489a6;
L_005489f8:; BB(0x005489f8);
    /* 005489f8: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5489fdu); f_0082fa9c();
    /* 005489fd: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00548a02: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x548a07u); f_0082d990();
    /* 00548a07: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00548a0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548a0c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x548a11u); f_0082d838();
    /* 00548a11: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00548a14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00548a16: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x548a1bu); f_0082d8bc();
    /* 00548a1b: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00548a20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548a22: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x548a27u); f_007aaab8();
    /* 00548a27: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x548a2cu); f_0082da80();
    /* 00548a2c: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 00548a32: add ecx, 0x5c0 */ {  u32 a = r_ecx; u32 b = 0x5c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00548a38: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x548a3du); f_0082d990();
    /* 00548a3d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00548a44: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00548a48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00548a4a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00548a52: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00548a5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548a5b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00548a5f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x548a64u); f_00830aa0();
    /* 00548a64: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x548a69u); f_0082da80();
    /* 00548a69: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x548a6eu); f_0082faac();
    /* 00548a6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00548a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548a71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548a72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00548a73: push 0x272 */ { u32 v = 0x272u; r_esp -= 4; W32(r_esp, v); }
    /* 00548a78: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x548a7du); f_00814298();
    /* 00548a7d: mov eax, dword ptr [0xa738cc] */ r_eax = R32((u32)(0xa738ccu));
    /* 00548a82: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00548a86: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548a89: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548a8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548a8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548a8c: call 0x548a9c */ r_esp -= 4; W32(r_esp, 0x548a91u); f_00548a9c();
    /* 00548a91: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548a94: jmp 0x5489a6 */ goto L_005489a6;
}

void f_00548a9c(void) /* sub_548A9C */
{
    FN_ENTER(0x00548a9c);
    /* 00548a9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548a9d: mov ebp, esp */ r_ebp = r_esp;
    /* 00548a9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00548aa1: push 0x8d5a60 */ { u32 v = 0x8d5a60u; r_esp -= 4; W32(r_esp, v); }
    /* 00548aa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00548aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548aad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00548ab4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548ab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00548aba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00548abd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00548ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00548ac3: push 0x360 */ { u32 v = 0x360u; r_esp -= 4; W32(r_esp, v); }
    /* 00548ac8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00548acf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x548ad4u); f_005caba4();
    /* 00548ad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00548ad5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00548ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548ada: je 0x548b16 */ if (fZ) goto L_00548b16;
L_00548adc:; BB(0x00548adc);
    /* 00548adc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00548ae3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00548aea: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548aed: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548af0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00548af3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00548af6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548af9: call 0x548b1c */ r_esp -= 4; W32(r_esp, 0x548afeu); f_00548b1c();
    /* 00548afe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00548b01: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00548b08:; BB(0x00548b08);
    /* 00548b08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548b0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00548b12: mov esp, ebp */ r_esp = r_ebp;
    /* 00548b14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548b15: ret  */ FN_RET(0x00548a9c); r_esp += 4; return;
L_00548b16:; BB(0x00548b16);
    /* 00548b16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00548b18: jmp 0x548b08 */ goto L_00548b08;
}

void f_00548a9e(void)
{
    FN_ENTER(0x00548a9e);
    /* 00548a9e: in al, dx */ UNSUP(0x00548a9e, "in al, dx");
    /* 00548a9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00548aa1: push 0x8d5a60 */ { u32 v = 0x8d5a60u; r_esp -= 4; W32(r_esp, v); }
    /* 00548aa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00548aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548aad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00548ab4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548ab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00548aba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00548abd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00548ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00548ac3: push 0x360 */ { u32 v = 0x360u; r_esp -= 4; W32(r_esp, v); }
    /* 00548ac8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00548acf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x548ad4u); f_005caba4();
    /* 00548ad4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00548ad5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00548ad8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548ada: je 0x548b16 */ if (fZ) goto L_00548b16;
L_00548adc:; BB(0x00548adc);
    /* 00548adc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00548ae3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00548aea: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548aed: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548af0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00548af3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00548af6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548af9: call 0x548b1c */ r_esp -= 4; W32(r_esp, 0x548afeu); f_00548b1c();
    /* 00548afe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00548b01: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00548b08:; BB(0x00548b08);
    /* 00548b08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00548b0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00548b12: mov esp, ebp */ r_esp = r_ebp;
    /* 00548b14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548b15: ret  */ FN_RET(0x00548a9e); r_esp += 4; return;
L_00548b16:; BB(0x00548b16);
    /* 00548b16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00548b18: jmp 0x548b08 */ goto L_00548b08;
}

void f_00548b1c(void) /* sub_548B1C */
{
    FN_ENTER(0x00548b1c);
    /* 00548b1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00548b1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548b1e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00548b1f: mov esi, ecx */ r_esi = r_ecx;
    /* 00548b21: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00548b25: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548b29: mov ecx, esi */ r_ecx = r_esi;
    /* 00548b2b: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x548b30u); f_00770748();
    /* 00548b30: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00548b34: mov dword ptr [esi], 0xb03900 */ W32((u32)(r_esi), 0xb03900u);
    /* 00548b3a: mov eax, dword ptr [0x9bd2ec] */ r_eax = R32((u32)(0x9bd2ecu));
    /* 00548b3f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00548b42: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00548b45: mov dword ptr [esi + 0x350], edx */ W32((u32)(r_esi+0x350u), r_edx);
    /* 00548b4b: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00548b4e: mov dword ptr [esi + 0x60], ecx */ W32((u32)(r_esi+0x60u), r_ecx);
    /* 00548b51: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00548b54: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00548b57: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00548b5a: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00548b5d: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00548b60: mov dword ptr [esi + 0x40], ebp */ W32((u32)(r_esi+0x40u), r_ebp);
    /* 00548b63: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x548b68u); f_0082dcbc();
    /* 00548b68: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00548b6b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00548b6e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x548b73u); f_0082ddd8();
    /* 00548b73: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00548b76: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00548b7a: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00548b7d: fld dword ptr [edx + 0x398] */ FPUSH(R_F32((u32)(r_edx+0x398u)));
    /* 00548b83: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00548b85: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00548b87: mov eax, dword ptr [edx + 0x398] */ r_eax = R32((u32)(r_edx+0x398u));
    /* 00548b8d: fstp dword ptr [esi + 0x33c] */ W_F32((u32)(r_esi+0x33cu), ST(0)); FPOP();
    /* 00548b93: fstp dword ptr [esi + 0x344] */ W_F32((u32)(r_esi+0x344u), ST(0)); FPOP();
    /* 00548b99: mov dword ptr [esi + 0x35c], eax */ W32((u32)(r_esi+0x35cu), r_eax);
    /* 00548b9f: mov dword ptr [esi + 0x340], 0 */ W32((u32)(r_esi+0x340u), 0x0u);
    /* 00548ba9: mov dword ptr [esi + 0x358], ebp */ W32((u32)(r_esi+0x358u), r_ebp);
    /* 00548baf: mov eax, esi */ r_eax = r_esi;
    /* 00548bb1: mov dword ptr [esi + 0x34c], 0 */ W32((u32)(r_esi+0x34cu), 0x0u);
    /* 00548bbb: mov dword ptr [esi + 0x354], 0 */ W32((u32)(r_esi+0x354u), 0x0u);
    /* 00548bc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00548bc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548bc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548bc8: ret 0x10 */ FN_RET(0x00548b1c); r_esp += 20; return;
}

void f_00548bcc(void) /* sub_548BCC */
{
    FN_ENTER(0x00548bcc);
    /* 00548bcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00548bcd: mov edi, ecx */ r_edi = r_ecx;
    /* 00548bcf: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 00548bd5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548bd8: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00548bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548be0: jle 0x548c26 */ if ((fZ||fS!=fO)) goto L_00548c26;
L_00548be2:; BB(0x00548be2);
    /* 00548be2: mov eax, dword ptr [edi + 0x38c] */ r_eax = R32((u32)(r_edi+0x38cu));
    /* 00548be8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548beb: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 00548bf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00548bf3: jle 0x548bf7 */ if ((fZ||fS!=fO)) goto L_00548bf7;
L_00548bf5:; BB(0x00548bf5);
    /* 00548bf5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548bf6: ret  */ FN_RET(0x00548bcc); r_esp += 4; return;
L_00548bf7:; BB(0x00548bf7);
    /* 00548bf7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00548bfa: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00548bfc: je 0x548c12 */ if (fZ) goto L_00548c12;
L_00548bfe:; BB(0x00548bfe);
    /* 00548bfe: mov dword ptr [edi + 0x37c], 7 */ W32((u32)(r_edi+0x37cu), 0x7u);
    /* 00548c08: mov ecx, edi */ r_ecx = r_edi;
    /* 00548c0a: call dword ptr [0x9bd198] */ { u32 t = R32((u32)(0x9bd198u)); r_esp -= 4; W32(r_esp, 0x548c10u); call_ind(t); }
    /* 00548c10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548c11: ret  */ FN_RET(0x00548bcc); r_esp += 4; return;
L_00548c12:; BB(0x00548c12);
    /* 00548c12: mov dword ptr [edi + 0x37c], 5 */ W32((u32)(r_edi+0x37cu), 0x5u);
    /* 00548c1c: mov ecx, edi */ r_ecx = r_edi;
    /* 00548c1e: call dword ptr [0x9bd188] */ { u32 t = R32((u32)(0x9bd188u)); r_esp -= 4; W32(r_esp, 0x548c24u); call_ind(t); }
    /* 00548c24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00548c25: ret  */ FN_RET(0x00548bcc); r_esp += 4; return;
L_00548c26:; BB(0x00548c26);
    /* 00548c26: jne 0x548be2 */ if (!fZ) goto L_00548be2;
L_00548c28:; BB(0x00548c28);
    /* 00548c28: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00548c2d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548c30: je 0x548c4c */ if (fZ) goto L_00548c4c;
L_00548c32:; BB(0x00548c32);
    /* 00548c32: mov eax, dword ptr [0xa738cc] */ r_eax = R32((u32)(0xa738ccu));
    /* 00548c37: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548c3a: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548c3d: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00548c40: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548c41: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00548c42: call 0x6dd7e4 */ r_esp -= 4; W32(r_esp, 0x548c47u); f_006dd7e4();
    /* 00548c47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548c4a: jmp 0x548be2 */ goto L_00548be2;
L_00548c4c:; BB(0x00548c4c);
    /* 00548c4c: mov eax, dword ptr [0xa738cc] */ r_eax = R32((u32)(0xa738ccu));
    /* 00548c51: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548c54: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548c57: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00548c5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548c5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00548c5c: call 0x6e9848 */ r_esp -= 4; W32(r_esp, 0x548c61u); f_006e9848();
    /* 00548c61: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548c64: jmp 0x548be2 */ goto L_00548be2;
}

void f_00548c6c(void) /* sub_548C6C */
{
    FN_ENTER(0x00548c6c);
    /* 00548c6c: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00548c72: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00548c74: je 0x548c9e */ if (fZ) goto L_00548c9e;
L_00548c76:; BB(0x00548c76);
    /* 00548c76: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00548c79: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00548c7b: je 0x548c8e */ if (fZ) goto L_00548c8e;
L_00548c7d:; BB(0x00548c7d);
    /* 00548c7d: mov dword ptr [ecx + 0x37c], 7 */ W32((u32)(r_ecx+0x37cu), 0x7u);
    /* 00548c87: call dword ptr [0x9bd198] */ { u32 t = R32((u32)(0x9bd198u)); r_esp -= 4; W32(r_esp, 0x548c8du); call_ind(t); }
    /* 00548c8d: ret  */ FN_RET(0x00548c6c); r_esp += 4; return;
L_00548c8e:; BB(0x00548c8e);
    /* 00548c8e: mov dword ptr [ecx + 0x37c], 6 */ W32((u32)(r_ecx+0x37cu), 0x6u);
    /* 00548c98: call dword ptr [0x9bd190] */ { u32 t = R32((u32)(0x9bd190u)); r_esp -= 4; W32(r_esp, 0x548c9eu); call_ind(t); }
L_00548c9e:; BB(0x00548c9e);
    /* 00548c9e: ret  */ FN_RET(0x00548c6c); r_esp += 4; return;
}

void f_00548ca0(void) /* sub_548CA0 */
{
    FN_ENTER(0x00548ca0);
    /* 00548ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548ca1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548ca4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00548ca6: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00548cac: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00548caf: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548cb2: jge 0x548cd5 */ if ((fS==fO)) goto L_00548cd5;
L_00548cb4:; BB(0x00548cb4);
    /* 00548cb4: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00548cba: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00548cbc: je 0x548ce8 */ if (fZ) goto L_00548ce8;
L_00548cbe:; BB(0x00548cbe);
    /* 00548cbe: mov dword ptr [ebp + 0x37c], 5 */ W32((u32)(r_ebp+0x37cu), 0x5u);
    /* 00548cc8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548cca: call dword ptr [0x9bd188] */ { u32 t = R32((u32)(0x9bd188u)); r_esp -= 4; W32(r_esp, 0x548cd0u); call_ind(t); }
    /* 00548cd0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548cd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548cd4: ret  */ FN_RET(0x00548ca0); r_esp += 4; return;
L_00548cd5:; BB(0x00548cd5);
    /* 00548cd5: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 00548cdb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548cde: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00548ce4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548ce6: jle 0x548ced */ if ((fZ||fS!=fO)) goto L_00548ced;
L_00548ce8:; BB(0x00548ce8);
    /* 00548ce8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548cec: ret  */ FN_RET(0x00548ca0); r_esp += 4; return;
L_00548ced:; BB(0x00548ced);
    /* 00548ced: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00548cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548cf1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548cf3: push dword ptr [0xa738ac] */ { u32 v = R32((u32)(0xa738acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00548cf9: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x548cfeu); f_007714cc();
    /* 00548cfe: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00548d01: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548d06: je 0x548d32 */ if (fZ) goto L_00548d32;
L_00548d08:; BB(0x00548d08);
    /* 00548d08: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00548d0b: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x548d10u); f_0083173c();
    /* 00548d10: fcomp dword ptr [0xa738b0] */ fx_compare(ST(0), R_F32((u32)(0xa738b0u))); FPOP();
    /* 00548d16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548d18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548d19: jbe 0x548d32 */ if ((fC||fZ)) goto L_00548d32;
L_00548d1b:; BB(0x00548d1b);
    /* 00548d1b: mov dword ptr [ebp + 0x37c], 4 */ W32((u32)(r_ebp+0x37cu), 0x4u);
    /* 00548d25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548d27: call dword ptr [0x9bd180] */ { u32 t = R32((u32)(0x9bd180u)); r_esp -= 4; W32(r_esp, 0x548d2du); call_ind(t); }
    /* 00548d2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548d30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548d31: ret  */ FN_RET(0x00548ca0); r_esp += 4; return;
L_00548d32:; BB(0x00548d32);
    /* 00548d32: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 00548d3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548d3e: call dword ptr [0x9bd178] */ { u32 t = R32((u32)(0x9bd178u)); r_esp -= 4; W32(r_esp, 0x548d44u); call_ind(t); }
    /* 00548d44: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00548d47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00548d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548d4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548d4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548d4c: push 0x277 */ { u32 v = 0x277u; r_esp -= 4; W32(r_esp, v); }
    /* 00548d51: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x548d56u); f_00814298();
    /* 00548d56: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548d59: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548d5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548d5d: ret  */ FN_RET(0x00548ca0); r_esp += 4; return;
}

void f_00548d20(void)
{
    FN_ENTER(0x00548d20);
    /* 00548d20: add byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00548d23: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00548d25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548d27: call dword ptr [0x9bd180] */ { u32 t = R32((u32)(0x9bd180u)); r_esp -= 4; W32(r_esp, 0x548d2du); call_ind(t); }
    /* 00548d2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548d30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548d31: ret  */ FN_RET(0x00548d20); r_esp += 4; return;
}

void f_00548d60(void) /* sub_548D60 */
{
    FN_ENTER(0x00548d60);
    /* 00548d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548d61: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548d64: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00548d66: mov eax, dword ptr [ebp + 0x380] */ r_eax = R32((u32)(r_ebp+0x380u));
    /* 00548d6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548d6e: jne 0x548d88 */ if (!fZ) goto L_00548d88;
L_00548d70:; BB(0x00548d70);
    /* 00548d70: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 00548d76: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548d79: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00548d7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548d81: jg 0x548dd3 */ if ((!fZ&&fS==fO)) goto L_00548dd3;
L_00548d83:; BB(0x00548d83);
    /* 00548d83: jmp 0x548e4f */ goto L_00548e4f;
L_00548d88:; BB(0x00548d88);
    /* 00548d88: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548d8b: jne 0x548dd8 */ if (!fZ) goto L_00548dd8;
L_00548d8d:; BB(0x00548d8d);
    /* 00548d8d: fld dword ptr [0x923d58] */ FPUSH(R_F32((u32)(0x923d58u)));
    /* 00548d93: fadd dword ptr [ebp + 0x3a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3a0u));
    /* 00548d99: fcom dword ptr [0x923e78] */ fx_compare(ST(0), R_F32((u32)(0x923e78u))); 
    /* 00548d9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548da1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548da2: jae 0x548db0 */ if (!fC) goto L_00548db0;
L_00548da4:; BB(0x00548da4);
    /* 00548da4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548da6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00548da8: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00548dae: jmp 0x548db6 */ goto L_00548db6;
L_00548db0:; BB(0x00548db0);
    /* 00548db0: fstp dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0)); FPOP();
L_00548db6:; BB(0x00548db6);
    /* 00548db6: mov eax, dword ptr [ebp + 0x38c] */ r_eax = R32((u32)(r_ebp+0x38cu));
    /* 00548dbc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548dbf: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00548dc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548dc7: jg 0x548dd3 */ if ((!fZ&&fS==fO)) goto L_00548dd3;
L_00548dc9:; BB(0x00548dc9);
    /* 00548dc9: mov dword ptr [ebp + 0x380], 2 */ W32((u32)(r_ebp+0x380u), 0x2u);
L_00548dd3:; BB(0x00548dd3);
    /* 00548dd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548dd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548dd7: ret  */ FN_RET(0x00548d60); r_esp += 4; return;
L_00548dd8:; BB(0x00548dd8);
    /* 00548dd8: mov dword ptr [esp], 0x800 */ W32((u32)(r_esp), 0x800u);
    /* 00548ddf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00548de2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548de5: call 0x787710 */ r_esp -= 4; W32(r_esp, 0x548deau); f_00787710();
    /* 00548dea: movsx eax, word ptr [ebp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 00548dee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00548df0: jl 0x548e1d */ if ((fS!=fO)) goto L_00548e1d;
L_00548df2:; BB(0x00548df2);
    /* 00548df2: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00548df7: jg 0x548e1d */ if ((!fZ&&fS==fO)) goto L_00548e1d;
L_00548df9:; BB(0x00548df9);
    /* 00548df9: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00548dfc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548dfe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00548e00: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00548e03: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00548e05: mov eax, dword ptr [0xab02b8] */ r_eax = R32((u32)(0xab02b8u));
    /* 00548e0a: mov dword ptr [edx + eax], ecx */ W32((u32)(r_edx+r_eax), r_ecx);
    /* 00548e0d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00548e11: mov dword ptr [edx + eax + 4], ecx */ W32((u32)(r_edx+r_eax+0x4u), r_ecx);
    /* 00548e15: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00548e19: mov dword ptr [edx + eax + 8], ecx */ W32((u32)(r_edx+r_eax+0x8u), r_ecx);
L_00548e1d:; BB(0x00548e1d);
    /* 00548e1d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00548e20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548e21: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00548e24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548e26: call dword ptr [edx + 0x144] */ { u32 t = R32((u32)(r_edx+0x144u)); r_esp -= 4; W32(r_esp, 0x548e2cu); call_ind(t); }
    /* 00548e2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00548e2d: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x548e32u); f_008113e4();
    /* 00548e32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548e34: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00548e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548e38: call 0x5786e8 */ r_esp -= 4; W32(r_esp, 0x548e3du); f_005786e8();
    /* 00548e3d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00548e41: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00548e46: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00548e4a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548e4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548e4e: ret  */ FN_RET(0x00548d60); r_esp += 4; return;
L_00548e4f:; BB(0x00548e4f);
    /* 00548e4f: mov dword ptr [ebp + 0x380], 1 */ W32((u32)(r_ebp+0x380u), 0x1u);
    /* 00548e59: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00548e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00548e5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548e5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548e60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548e61: push 0x276 */ { u32 v = 0x276u; r_esp -= 4; W32(r_esp, v); }
    /* 00548e66: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x548e6bu); f_00814298();
    /* 00548e6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548e6e: mov dword ptr [ebp + 0x38c], 5 */ W32((u32)(r_ebp+0x38cu), 0x5u);
    /* 00548e78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548e7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00548e7c: ret  */ FN_RET(0x00548d60); r_esp += 4; return;
}

void f_00548e80(void) /* sub_548E80 */
{
    FN_ENTER(0x00548e80);
    /* 00548e80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00548e81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00548e82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00548e83: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00548e86: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00548e88: fld dword ptr [0x923d60] */ FPUSH(R_F32((u32)(0x923d60u)));
    /* 00548e8e: fadd dword ptr [ebx + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3e0u));
    /* 00548e94: fstp dword ptr [ebx + 0x3e0] */ W_F32((u32)(r_ebx+0x3e0u), ST(0)); FPOP();
    /* 00548e9a: mov eax, 4 */ r_eax = 0x4u;
    /* 00548e9f: lea edx, [ebx + 0x3dc] */ r_edx = (u32)(r_ebx+0x3dcu);
    /* 00548ea5: mov esi, eax */ r_esi = r_eax;
    /* 00548ea7: mov edi, edx */ r_edi = r_edx;
    /* 00548ea9: jmp 0x548eba */ goto L_00548eba;
L_00548eab:; BB(0x00548eab);
    /* 00548eab: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00548eae: fstp dword ptr [ebx + 0x3e4] */ W_F32((u32)(r_ebx+0x3e4u), ST(0)); FPOP();
    /* 00548eb4: fstp dword ptr [ebx + 0x3dc] */ W_F32((u32)(r_ebx+0x3dcu), ST(0)); FPOP();
L_00548eba:; BB(0x00548eba);
    /* 00548eba: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00548ebe: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00548ec1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00548ec5: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00548ec8: mov edx, edi */ r_edx = r_edi;
    /* 00548eca: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00548ece: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00548ed1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00548ed5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x548edau); f_0082ebac();
    /* 00548eda: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00548ede: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00548ee2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00548ee6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00548eea: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00548eee: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00548ef2: push dword ptr [ebx + 0x3e0] */ { u32 v = R32((u32)(r_ebx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548ef8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x548efdu); f_0082e900();
    /* 00548efd: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00548f01: fadd dword ptr [0x923d5c] */ ST(0) = ST(0) + R_F32((u32)(0x923d5cu));
    /* 00548f07: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548f09: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00548f0d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00548f11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548f13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548f16: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x548f1bu); f_007b4c58();
    /* 00548f1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548f1d: jne 0x54901b */ if (!fZ) goto L_0054901b;
L_00548f23:; BB(0x00548f23);
    /* 00548f23: mov ecx, 0x4000 */ r_ecx = 0x4000u;
    /* 00548f28: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x548f2du); f_0082dcbc();
    /* 00548f2d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00548f30: mov ecx, 0x4000 */ r_ecx = 0x4000u;
    /* 00548f35: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x548f3au); f_0082ddd8();
    /* 00548f3a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00548f3d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00548f40: fld dword ptr [ebx + 0x3e4] */ FPUSH(R_F32((u32)(r_ebx+0x3e4u)));
    /* 00548f46: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00548f48: fld dword ptr [ebx + 0x3dc] */ FPUSH(R_F32((u32)(r_ebx+0x3dcu)));
    /* 00548f4e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00548f50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548f52: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00548f54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548f56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548f58: fchs  */ ST(0) = -ST(0);
    /* 00548f5a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00548f5c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00548f5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548f60: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00548f63: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00548f66: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00548f68: jg 0x548eab */ if ((!fZ&&fS==fO)) goto L_00548eab;
L_00548f6e:; BB(0x00548f6e);
    /* 00548f6e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00548f71: mov eax, esi */ r_eax = r_esi;
    /* 00548f73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548f75: jne 0x549008 */ if (!fZ) goto L_00549008;
L_00548f7b:; BB(0x00548f7b);
    /* 00548f7b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00548f7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548f7f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00548f82: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00548f85: mov dword ptr [ebx + 0x3e4], 0 */ W32((u32)(r_ebx+0x3e4u), 0x0u);
    /* 00548f8f: mov dword ptr [ebx + 0x3dc], 0 */ W32((u32)(r_ebx+0x3dcu), 0x0u);
    /* 00548f99: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00548f9d: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00548fa0: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00548fa4: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00548fa8: push dword ptr [ebx + 0x3e0] */ { u32 v = R32((u32)(r_ebx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00548fae: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x548fb3u); f_0082e900();
    /* 00548fb3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00548fb7: fadd dword ptr [0x923d5c] */ ST(0) = ST(0) + R_F32((u32)(0x923d5cu));
    /* 00548fbd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548fbf: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00548fc3: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00548fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548fc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548fcc: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x548fd1u); f_007b4c58();
    /* 00548fd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548fd3: je 0x548fe8 */ if (fZ) goto L_00548fe8;
L_00548fd5:; BB(0x00548fd5);
    /* 00548fd5: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00548fd9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00548fdc: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 00548fe0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548fe2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548fe3: ja 0x549014 */ if ((!fC&&!fZ)) goto L_00549014;
L_00548fe5:; BB(0x00548fe5);
    /* 00548fe5: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
L_00548fe8:; BB(0x00548fe8);
    /* 00548fe8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548fea: call 0x549050 */ r_esp -= 4; W32(r_esp, 0x548fefu); f_00549050();
    /* 00548fef: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 00548ff9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548ffb: call dword ptr [0x9bd168] */ { u32 t = R32((u32)(0x9bd168u)); r_esp -= 4; W32(r_esp, 0x549001u); call_ind(t); }
    /* 00549001: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549004: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00549007: ret  */ FN_RET(0x00548e80); r_esp += 4; return;
L_00549008:; BB(0x00549008);
    /* 00549008: fstp dword ptr [ebx + 0x3e4] */ W_F32((u32)(r_ebx+0x3e4u), ST(0)); FPOP();
    /* 0054900e: fstp dword ptr [ebx + 0x3dc] */ W_F32((u32)(r_ebx+0x3dcu), ST(0)); FPOP();
L_00549014:; BB(0x00549014);
    /* 00549014: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549017: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549018: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549019: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054901a: ret  */ FN_RET(0x00548e80); r_esp += 4; return;
L_0054901b:; BB(0x0054901b);
    /* 0054901b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0054901f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00549023: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00549027: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0054902b: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 0054902e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00549032: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00549035: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 00549039: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054903b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054903c: jbe 0x549048 */ if ((fC||fZ)) goto L_00549048;
L_0054903e:; BB(0x0054903e);
    /* 0054903e: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00549041: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549044: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549045: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549046: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00549047: ret  */ FN_RET(0x00548e80); r_esp += 4; return;
L_00549048:; BB(0x00549048);
    /* 00549048: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0054904b: jmp 0x548fe8 */ goto L_00548fe8;
}

void f_00548fc0(void)
{
    FN_ENTER(0x00548fc0);
    /* 00548fc0: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00548fc1: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00548fc3: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00548fc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00548fc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548fcc: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x548fd1u); f_007b4c58();
    /* 00548fd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548fd3: je 0x548fe8 */ if (fZ) goto L_00548fe8;
L_00548fd5:; BB(0x00548fd5);
    /* 00548fd5: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00548fd9: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00548fdc: fcomp dword ptr [esp + 0x20] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x20u))); FPOP();
    /* 00548fe0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548fe2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548fe3: ja 0x549014 */ if ((!fC&&!fZ)) goto L_00549014;
L_00548fe5:; BB(0x00548fe5);
    /* 00548fe5: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
L_00548fe8:; BB(0x00548fe8);
    /* 00548fe8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548fea: call 0x549050 */ r_esp -= 4; W32(r_esp, 0x548fefu); f_00549050();
    /* 00548fef: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 00548ff9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00548ffb: call dword ptr [0x9bd168] */ { u32 t = R32((u32)(0x9bd168u)); r_esp -= 4; W32(r_esp, 0x549001u); call_ind(t); }
    /* 00549001: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549004: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00549007: ret  */ FN_RET(0x00548fc0); r_esp += 4; return;
L_00549014:; BB(0x00549014);
    /* 00549014: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549017: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00549018: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00549019: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054901a: ret  */ FN_RET(0x00548fc0); r_esp += 4; return;
}

