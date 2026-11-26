#include "protos.h"

void f_00445241(void)
{
    FN_ENTER(0x00445241);
    goto L_00445241;
L_00444bd0:; BB(0x00444bd0);
    /* 00444bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444bd5:; BB(0x00444bd5);
    /* 00444bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bdb: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444be2: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444be5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444be7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444bea: je 0x445176 */ if (fZ) goto L_00445176;
L_00444bf0:; BB(0x00444bf0);
    /* 00444bf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bf6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444bf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444bfc: jl 0x444bd5 */ if ((fS!=fO)) goto L_00444bd5;
L_00444bfe:; BB(0x00444bfe);
    /* 00444bfe: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00445241); r_esp += 4; return;
L_00445176:; BB(0x00445176);
    /* 00445176: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0044517d: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044517f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445184u); f_005caba4();
    /* 00445184: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044518a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044518d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044518f: je 0x4451e9 */ if (fZ) goto L_004451e9;
L_00445191:; BB(0x00445191);
    /* 00445191: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00445198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044519f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004451a5: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 004451ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004451ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004451b0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004451b3: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004451b5: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 004451bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004451c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451c1: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4451c6u); f_004496f0();
    /* 004451c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004451cd:; BB(0x004451cd);
    /* 004451cd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004451d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451d6: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004451dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004451e4: jmp 0x444bf0 */ goto L_00444bf0;
L_004451e9:; BB(0x004451e9);
    /* 004451e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004451eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004451ee: jmp 0x4451cd */ goto L_004451cd;
L_00445204:; BB(0x00445204);
    /* 00445204: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445208: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44520du); f_0068d5a8();
    /* 0044520d: mov esi, eax */ r_esi = r_eax;
    /* 0044520f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445212: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445214: je 0x44524c */ if (fZ) goto L_0044524c;
L_00445216:; BB(0x00445216);
    /* 00445216: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445218: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0044521b:; BB(0x0044521b);
    /* 0044521b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044521e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00445221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445223: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00445226: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445228: lea edx, [ecx + eax + 0x4d0] */ r_edx = (u32)(r_ecx+r_eax+0x4d0u);
    /* 0044522f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445231: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445236u); f_0078ea50();
    /* 00445236: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445239: fcomp dword ptr [0x8fe808] */ fx_compare(ST(0), R_F32((u32)(0x8fe808u))); FPOP();
    /* 0044523f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
L_00445241:; BB(0x00445241);
    /* 00445241: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445242: jbe 0x445297 */ if ((fC||fZ)) goto L_00445297;
L_00445244:; BB(0x00445244);
    /* 00445244: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445247: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044524a: jl 0x44521b */ if ((fS!=fO)) goto L_0044521b;
L_0044524c:; BB(0x0044524c);
    /* 0044524c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044524f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445252: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445255: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445258: jl 0x445204 */ if ((fS!=fO)) goto L_00445204;
L_0044525a:; BB(0x0044525a);
    /* 0044525a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044525d: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445264: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445267: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044526e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445273: jg 0x444bd0 */ if ((!fZ&&fS==fO)) goto L_00444bd0;
L_00445279:; BB(0x00445279);
    /* 00445279: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445283: jmp 0x444bd0 */ goto L_00444bd0;
L_00445297:; BB(0x00445297);
    /* 00445297: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044529a: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 004452a4: mov edx, 4 */ r_edx = 0x4u;
    /* 004452a9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004452ac: jmp 0x44524c */ goto L_0044524c;
}

void f_0044524f(void)
{
    FN_ENTER(0x0044524f);
    goto L_0044524f;
L_00444bd0:; BB(0x00444bd0);
    /* 00444bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444bd5:; BB(0x00444bd5);
    /* 00444bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bdb: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444be2: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444be5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444be7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444bea: je 0x445176 */ if (fZ) goto L_00445176;
L_00444bf0:; BB(0x00444bf0);
    /* 00444bf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bf6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444bf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444bfc: jl 0x444bd5 */ if ((fS!=fO)) goto L_00444bd5;
L_00444bfe:; BB(0x00444bfe);
    /* 00444bfe: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x0044524f); r_esp += 4; return;
L_00445176:; BB(0x00445176);
    /* 00445176: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0044517d: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044517f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445184u); f_005caba4();
    /* 00445184: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044518a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044518d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044518f: je 0x4451e9 */ if (fZ) goto L_004451e9;
L_00445191:; BB(0x00445191);
    /* 00445191: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00445198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044519f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004451a5: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 004451ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004451ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004451b0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004451b3: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004451b5: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 004451bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004451c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451c1: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4451c6u); f_004496f0();
    /* 004451c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004451cd:; BB(0x004451cd);
    /* 004451cd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004451d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451d6: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004451dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004451e4: jmp 0x444bf0 */ goto L_00444bf0;
L_004451e9:; BB(0x004451e9);
    /* 004451e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004451eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004451ee: jmp 0x4451cd */ goto L_004451cd;
L_00445204:; BB(0x00445204);
    /* 00445204: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445208: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44520du); f_0068d5a8();
    /* 0044520d: mov esi, eax */ r_esi = r_eax;
    /* 0044520f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445212: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445214: je 0x44524c */ if (fZ) goto L_0044524c;
L_00445216:; BB(0x00445216);
    /* 00445216: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445218: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0044521b:; BB(0x0044521b);
    /* 0044521b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044521e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00445221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445223: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00445226: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445228: lea edx, [ecx + eax + 0x4d0] */ r_edx = (u32)(r_ecx+r_eax+0x4d0u);
    /* 0044522f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445231: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445236u); f_0078ea50();
    /* 00445236: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445239: fcomp dword ptr [0x8fe808] */ fx_compare(ST(0), R_F32((u32)(0x8fe808u))); FPOP();
    /* 0044523f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445241: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445242: jbe 0x445297 */ if ((fC||fZ)) goto L_00445297;
L_00445244:; BB(0x00445244);
    /* 00445244: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445247: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044524a: jl 0x44521b */ if ((fS!=fO)) goto L_0044521b;
L_0044524c:; BB(0x0044524c);
    /* 0044524c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
L_0044524f:; BB(0x0044524f);
    /* 0044524f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445252: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445255: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445258: jl 0x445204 */ if ((fS!=fO)) goto L_00445204;
L_0044525a:; BB(0x0044525a);
    /* 0044525a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044525d: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445264: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445267: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044526e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445273: jg 0x444bd0 */ if ((!fZ&&fS==fO)) goto L_00444bd0;
L_00445279:; BB(0x00445279);
    /* 00445279: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445283: jmp 0x444bd0 */ goto L_00444bd0;
L_00445297:; BB(0x00445297);
    /* 00445297: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044529a: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 004452a4: mov edx, 4 */ r_edx = 0x4u;
    /* 004452a9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004452ac: jmp 0x44524c */ goto L_0044524c;
}

void f_00445257(void)
{
    FN_ENTER(0x00445257);
    goto L_00445257;
L_00444bd0:; BB(0x00444bd0);
    /* 00444bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444bd5:; BB(0x00444bd5);
    /* 00444bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bdb: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444be2: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444be5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444be7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444bea: je 0x445176 */ if (fZ) goto L_00445176;
L_00444bf0:; BB(0x00444bf0);
    /* 00444bf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bf6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444bf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444bfc: jl 0x444bd5 */ if ((fS!=fO)) goto L_00444bd5;
L_00444bfe:; BB(0x00444bfe);
    /* 00444bfe: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00445257); r_esp += 4; return;
L_00445176:; BB(0x00445176);
    /* 00445176: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0044517d: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044517f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445184u); f_005caba4();
    /* 00445184: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044518a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044518d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044518f: je 0x4451e9 */ if (fZ) goto L_004451e9;
L_00445191:; BB(0x00445191);
    /* 00445191: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00445198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044519f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004451a5: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 004451ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004451ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004451b0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004451b3: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004451b5: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 004451bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004451c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451c1: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4451c6u); f_004496f0();
    /* 004451c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004451cd:; BB(0x004451cd);
    /* 004451cd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004451d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451d6: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004451dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004451e4: jmp 0x444bf0 */ goto L_00444bf0;
L_004451e9:; BB(0x004451e9);
    /* 004451e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004451eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004451ee: jmp 0x4451cd */ goto L_004451cd;
L_00445257:; BB(0x00445257);
    /* 00445257: add al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445259: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0044525a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044525d: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445264: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445267: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044526e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445273: jg 0x444bd0 */ if ((!fZ&&fS==fO)) goto L_00444bd0;
L_00445279:; BB(0x00445279);
    /* 00445279: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445283: jmp 0x444bd0 */ goto L_00444bd0;
}

void f_00445345(void)
{
    FN_ENTER(0x00445345);
    /* 00445345: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445347: imul edi, esp, -1 */ { i64 t = (i64)(i32)r_esp * (i64)(i32)0xffffffffu; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0044534a: call dword ptr [eax - 0x7c2374ad] */ { u32 t = R32((u32)(r_eax+0x83dc8b53u)); r_esp -= 4; W32(r_esp, 0x445350u); call_ind(t); }
    /* 00445350: in al, 0xf8 */ UNSUP(0x00445350, "in al, 0xf8");
    /* 00445352: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00445353: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445355: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445358: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044535a: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00445360: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445365: je 0x445371 */ if (fZ) goto L_00445371;
L_00445367:; BB(0x00445367);
    /* 00445367: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
L_00445371:; BB(0x00445371);
    /* 00445371: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00445377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445379: je 0x445732 */ if (fZ) goto L_00445732;
L_0044537f:; BB(0x0044537f);
    /* 0044537f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445382: je 0x445606 */ if (fZ) goto L_00445606;
L_00445388:; BB(0x00445388);
    /* 00445388: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044538b: je 0x44545e */ if (fZ) goto L_0044545e;
L_00445391:; BB(0x00445391);
    /* 00445391: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445394: je 0x4453f2 */ if (fZ) goto L_004453f2;
L_00445396:; BB(0x00445396);
    /* 00445396: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445399: jne 0x4453c2 */ if (!fZ) goto L_004453c2;
L_0044539b:; BB(0x0044539b);
    /* 0044539b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044539d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4453a2u); f_007aa094();
    /* 004453a2: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 004453a8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453ab: je 0x44540a */ if (fZ) goto L_0044540a;
L_004453ad:; BB(0x004453ad);
    /* 004453ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004453b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004453b2: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x4453b8u); call_ind(t); }
    /* 004453b8: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004453bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004453bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004453bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004453be: mov esp, ebx */ r_esp = r_ebx;
    /* 004453c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004453c1: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_004453c2:; BB(0x004453c2);
    /* 004453c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453c5: jne 0x44540a */ if (!fZ) goto L_0044540a;
L_004453c7:; BB(0x004453c7);
    /* 004453c7: mov esi, dword ptr [ebp + 0x47c] */ r_esi = R32((u32)(r_ebp+0x47cu));
    /* 004453cd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453cf: je 0x44540a */ if (fZ) goto L_0044540a;
L_004453d1:; BB(0x004453d1);
    /* 004453d1: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004453d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004453da: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004453de: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
    /* 004453e8: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004453eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004453ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004453ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004453ee: mov esp, ebx */ r_esp = r_ebx;
    /* 004453f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004453f1: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_004453f2:; BB(0x004453f2);
    /* 004453f2: movsx eax, word ptr [ebp + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 004453f9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004453fc: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00445403: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 00445406: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445408: jle 0x445414 */ if ((fZ||fS!=fO)) goto L_00445414;
L_0044540a:; BB(0x0044540a);
    /* 0044540a: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044540d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044540e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044540f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445410: mov esp, ebx */ r_esp = r_ebx;
    /* 00445412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445413: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_00445414:; BB(0x00445414);
    /* 00445414: mov esi, dword ptr [ebp + 0x47c] */ r_esi = R32((u32)(r_ebp+0x47cu));
    /* 0044541a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044541c: je 0x445435 */ if (fZ) goto L_00445435;
L_0044541e:; BB(0x0044541e);
    /* 0044541e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00445422: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445427: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044542b: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
L_00445435:; BB(0x00445435);
    /* 00445435: mov dword ptr [ebp + 0x384], 4 */ W32((u32)(r_ebp+0x384u), 0x4u);
    /* 0044543f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00445442: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445446: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445447: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 0044544c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445451u); f_00814298();
    /* 00445451: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445454: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00445457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445458: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445459: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044545a: mov esp, ebx */ r_esp = r_ebx;
    /* 0044545c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044545d: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_0044545e:; BB(0x0044545e);
    /* 0044545e: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00445461: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445465: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445466: push 0x353 */ { u32 v = 0x353u; r_esp -= 4; W32(r_esp, v); }
    /* 0044546b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445470u); f_00814298();
    /* 00445470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445473: movsx eax, word ptr [ebp + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 0044547a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044547d: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00445484: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00445487: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445489: jg 0x44540a */ if ((!fZ&&fS==fO)) goto L_0044540a;
L_0044548f:; BB(0x0044548f);
    /* 0044548f: mov edi, dword ptr [ebp + 0x47c] */ r_edi = R32((u32)(r_ebp+0x47cu));
    /* 00445495: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445497: je 0x4454b0 */ if (fZ) goto L_004454b0;
L_00445499:; BB(0x00445499);
    /* 00445499: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0044549d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004454a2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004454a6: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
L_004454b0:; BB(0x004454b0);
    /* 004454b0: mov edi, dword ptr [0xa44bbc] */ r_edi = R32((u32)(0xa44bbcu));
    /* 004454b6: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004454bb: mov edi, dword ptr [edi + 0x24] */ r_edi = R32((u32)(r_edi+0x24u));
    /* 004454be: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004454c0: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004454c3: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 004454c9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004454cb: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004454cd: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004454d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004454d2: push 0x8fe828 */ { u32 v = 0x8fe828u; r_esp -= 4; W32(r_esp, v); }
    /* 004454d7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004454d9: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004454de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004454df: call 0x78a744 */ r_esp -= 4; W32(r_esp, 0x4454e4u); f_0078a744();
    /* 004454e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004454e7: movsx edi, word ptr [ebp + 0x2bc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 004454ee: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 004454f5: add eax, dword ptr [esp + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004454f9: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004454fb: jl 0x4454ff */ if ((fS!=fO)) goto L_004454ff;
L_004454fd:; BB(0x004454fd);
    /* 004454fd: mov eax, edi */ r_eax = r_edi;
L_004454ff:; BB(0x004454ff);
    /* 004454ff: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00445502: movsx eax, word ptr [ebp + 0x4b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b4u));
    /* 00445509: mov word ptr [ebp + 0x334], cx */ W16((u32)(r_ebp+0x334u), (u16)r_ecx);
    /* 00445510: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445512: jle 0x445533 */ if ((fZ||fS!=fO)) goto L_00445533;
L_00445514:; BB(0x00445514);
    /* 00445514: movsx edx, word ptr [ebp + 0x4b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b4u));
    /* 0044551b: add edx, dword ptr [esp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044551f: movsx eax, word ptr [ebp + 0x4bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bcu));
    /* 00445526: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445528: jl 0x44552c */ if ((fS!=fO)) goto L_0044552c;
L_0044552a:; BB(0x0044552a);
    /* 0044552a: mov edx, eax */ r_edx = r_eax;
L_0044552c:; BB(0x0044552c);
    /* 0044552c: mov word ptr [ebp + 0x4b4], dx */ W16((u32)(r_ebp+0x4b4u), (u16)r_edx);
L_00445533:; BB(0x00445533);
    /* 00445533: movsx eax, word ptr [ebp + 0x4b6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b6u));
    /* 0044553a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044553c: jle 0x44555d */ if ((fZ||fS!=fO)) goto L_0044555d;
L_0044553e:; BB(0x0044553e);
    /* 0044553e: movsx edx, word ptr [ebp + 0x4b6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b6u));
    /* 00445545: add edx, dword ptr [esp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445549: movsx eax, word ptr [ebp + 0x4be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4beu));
    /* 00445550: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445552: jl 0x445556 */ if ((fS!=fO)) goto L_00445556;
L_00445554:; BB(0x00445554);
    /* 00445554: mov edx, eax */ r_edx = r_eax;
L_00445556:; BB(0x00445556);
    /* 00445556: mov word ptr [ebp + 0x4b6], dx */ W16((u32)(r_ebp+0x4b6u), (u16)r_edx);
L_0044555d:; BB(0x0044555d);
    /* 0044555d: movsx eax, word ptr [ebp + 0x4b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b8u));
    /* 00445564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445566: jle 0x445587 */ if ((fZ||fS!=fO)) goto L_00445587;
L_00445568:; BB(0x00445568);
    /* 00445568: movsx edx, word ptr [ebp + 0x4b8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b8u));
    /* 0044556f: add edx, dword ptr [esp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445573: movsx eax, word ptr [ebp + 0x4c0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4c0u));
    /* 0044557a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044557c: jl 0x445580 */ if ((fS!=fO)) goto L_00445580;
L_0044557e:; BB(0x0044557e);
    /* 0044557e: mov edx, eax */ r_edx = r_eax;
L_00445580:; BB(0x00445580);
    /* 00445580: mov word ptr [ebp + 0x4b8], dx */ W16((u32)(r_ebp+0x4b8u), (u16)r_edx);
L_00445587:; BB(0x00445587);
    /* 00445587: movsx eax, word ptr [ebp + 0x4ba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bau));
    /* 0044558e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445590: jle 0x4455b3 */ if ((fZ||fS!=fO)) goto L_004455b3;
L_00445592:; BB(0x00445592);
    /* 00445592: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00445596: movsx edx, word ptr [ebp + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bau));
    /* 0044559d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044559f: movsx edx, word ptr [ebp + 0x4c2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4c2u));
    /* 004455a6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004455a8: jl 0x4455ac */ if ((fS!=fO)) goto L_004455ac;
L_004455aa:; BB(0x004455aa);
    /* 004455aa: mov eax, edx */ r_eax = r_edx;
L_004455ac:; BB(0x004455ac);
    /* 004455ac: mov word ptr [ebp + 0x4ba], ax */ W16((u32)(r_ebp+0x4bau), (u16)r_eax);
L_004455b3:; BB(0x004455b3);
    /* 004455b3: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004455b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004455b9: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 004455be: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 004455c5: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004455c8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004455ca: jl 0x4455ce */ if ((fS!=fO)) goto L_004455ce;
L_004455cc:; BB(0x004455cc);
    /* 004455cc: mov ecx, edi */ r_ecx = r_edi;
L_004455ce:; BB(0x004455ce);
    /* 004455ce: mov word ptr [ebp + 0x334], cx */ W16((u32)(r_ebp+0x334u), (u16)r_ecx);
    /* 004455d5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4455dau); f_00509590();
    /* 004455da: mov dword ptr [ebp + 0x384], 3 */ W32((u32)(r_ebp+0x384u), 0x3u);
    /* 004455e4: mov dword ptr [ebp + 0x47c], eax */ W32((u32)(r_ebp+0x47cu), r_eax);
    /* 004455ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004455ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004455ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004455ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004455ef: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 004455f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4455f9u); f_00814298();
    /* 004455f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004455fc: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004455ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445600: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445602: mov esp, ebx */ r_esp = r_ebx;
    /* 00445604: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445605: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_00445606:; BB(0x00445606);
    /* 00445606: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00445608: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44560du); f_007aa094();
    /* 0044560d: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00445612: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00445614: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x445619u); f_007aaa30();
    /* 00445619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044561b: je 0x445632 */ if (fZ) goto L_00445632;
L_0044561d:; BB(0x0044561d);
    /* 0044561d: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00445620: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445624: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445625: push 0x345 */ { u32 v = 0x345u; r_esp -= 4; W32(r_esp, v); }
    /* 0044562a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44562fu); f_00814298();
    /* 0044562f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00445632:; BB(0x00445632);
    /* 00445632: fld dword ptr [0x8fe7f4] */ FPUSH(R_F32((u32)(0x8fe7f4u)));
    /* 00445638: fadd dword ptr [ebp + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc0u));
    /* 0044563e: fmul dword ptr [0x8fe7f0] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7f0u));
    /* 00445644: fld dword ptr [0x8fe7ec] */ FPUSH(R_F32((u32)(0x8fe7ecu)));
    /* 0044564a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044564c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044564e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044564f: fld dword ptr [0x8fe7e8] */ FPUSH(R_F32((u32)(0x8fe7e8u)));
    /* 00445655: mov esi, dword ptr [0xa44b64] */ r_esi = R32((u32)(0xa44b64u));
    /* 0044565b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044565d: jb 0x445661 */ if (fC) goto L_00445661;
L_0044565f:; BB(0x0044565f);
    /* 0044565f: fst st(2) */ ST(2) = ST(0);
L_00445661:; BB(0x00445661);
    /* 00445661: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00445663: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00445665: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445667: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445668: ja 0x44566c */ if ((!fC&&!fZ)) goto L_0044566c;
L_0044566a:; BB(0x0044566a);
    /* 0044566a: fst st(1) */ ST(1) = ST(0);
L_0044566c:; BB(0x0044566c);
    /* 0044566c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044566e: fmul dword ptr [0x8fe7e4] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7e4u));
    /* 00445674: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00445678: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0044567d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445682: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00445686: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0044568a: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 0044568e: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00445692: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00445696: mov byte ptr [esi + 7], al */ W8((u32)(r_esi+0x7u), (u8)r_eax);
    /* 00445699: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0044569f: fcomp dword ptr [0x8fe7e0] */ fx_compare(ST(0), R_F32((u32)(0x8fe7e0u))); FPOP();
    /* 004456a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004456a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004456a8: jb 0x44540a */ if (fC) goto L_0044540a;
L_004456ae:; BB(0x004456ae);
    /* 004456ae: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004456b3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4456b8u); f_0082d990();
    /* 004456b8: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 004456bb: mov dword ptr [esp], 0xc2180000 */ W32((u32)(r_esp), 0xc2180000u);
    /* 004456c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004456c4: mov dword ptr [esp + 4], 0x41f80000 */ W32((u32)(r_esp+0x4u), 0x41f80000u);
    /* 004456cc: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004456d4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4456d9u); f_0082d8bc();
    /* 004456d9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004456dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004456de: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004456e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004456e4: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4456e9u); f_00830aa0();
    /* 004456e9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004456ed: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004456f0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4456f5u); f_0082ebac();
    /* 004456f5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4456fau); f_0082da80();
    /* 004456fa: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004456fe: push 0x1a1 */ { u32 v = 0x1a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00445703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445704: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x445709u); f_00509590();
    /* 00445709: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044570c: mov dword ptr [ebp + 0x384], 2 */ W32((u32)(r_ebp+0x384u), 0x2u);
    /* 00445716: mov dword ptr [ebp + 0x47c], eax */ W32((u32)(r_ebp+0x47cu), r_eax);
    /* 0044571c: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00445721: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00445728: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044572b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044572c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044572d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044572e: mov esp, ebx */ r_esp = r_ebx;
    /* 00445730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445731: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_00445732:; BB(0x00445732);
    /* 00445732: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 0044573c: mov eax, 5 */ r_eax = 0x5u;
    /* 00445741: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00445748: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044574a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044574f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445751: jle 0x44586c */ if ((fZ||fS!=fO)) goto L_0044586c;
L_00445757:; BB(0x00445757);
    /* 00445757: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0044575a:; BB(0x0044575a);
    /* 0044575a: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00445761: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445763: je 0x445845 */ if (fZ) goto L_00445845;
L_00445769:; BB(0x00445769);
    /* 00445769: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0044576d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044576e: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x445773u); f_007ba9ec();
    /* 00445773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00445774: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00445777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445779: je 0x445785 */ if (fZ) goto L_00445785;
L_0044577b:; BB(0x0044577b);
    /* 0044577b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445780: jmp 0x445845 */ goto L_00445845;
L_00445785:; BB(0x00445785);
    /* 00445785: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00445788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445789: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044578a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x44578fu); f_0078ea50();
    /* 0044578f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445792: fcomp dword ptr [0x8fe7dc] */ fx_compare(ST(0), R_F32((u32)(0x8fe7dcu))); FPOP();
    /* 00445798: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044579a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044579b: jbe 0x4457a7 */ if ((fC||fZ)) goto L_004457a7;
L_0044579d:; BB(0x0044579d);
    /* 0044579d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004457a2: jmp 0x445845 */ goto L_00445845;
L_004457a7:; BB(0x004457a7);
    /* 004457a7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004457ab: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004457ae: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004457b2: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004457b5: mov edx, ebp */ r_edx = r_ebp;
    /* 004457b7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004457bb: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 004457be: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004457c2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4457c7u); f_0082f9c4();
    /* 004457c7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004457cb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004457cf: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004457d1: fmul qword ptr [0x8fe708] */ ST(0) = ST(0) * R_F64((u32)(0x8fe708u));
    /* 004457d7: fdiv qword ptr [0x8fe700] */ ST(0) = ST(0) / R_F64((u32)(0x8fe700u));
    /* 004457dd: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004457e1: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004457e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004457eb: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004457ef: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004457f3: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004457f7: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004457fb: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004457ff: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00445803: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x445808u); f_0082ddd8();
    /* 00445808: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 0044580e: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00445812: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00445816: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44581bu); f_0082dcbc();
    /* 0044581b: fld dword ptr [0x8fe804] */ FPUSH(R_F32((u32)(0x8fe804u)));
    /* 00445821: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00445823: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00445827: mov edx, ebp */ r_edx = r_ebp;
    /* 00445829: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0044582d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x445832u); f_0082ebac();
    /* 00445832: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00445836: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00445839: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0044583d: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00445840: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00445845:; BB(0x00445845);
    /* 00445845: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445848: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044584a: jl 0x44575a */ if ((fS!=fO)) goto L_0044575a;
L_00445850:; BB(0x00445850);
    /* 00445850: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445855: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 0044585a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44585fu); f_00814298();
    /* 0044585f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445862: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00445865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445866: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445867: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445868: mov esp, ebx */ r_esp = r_ebx;
    /* 0044586a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044586b: ret  */ FN_RET(0x00445345); r_esp += 4; return;
L_0044586c:; BB(0x0044586c);
    /* 0044586c: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044586f: jmp 0x445850 */ goto L_00445850;
}

void f_0044534c(void) /* sub_44534C */
{
    FN_ENTER(0x0044534c);
    /* 0044534c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044534d: mov ebx, esp */ r_ebx = r_esp;
    /* 0044534f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00445352: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00445353: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445355: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445358: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044535a: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00445360: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445365: je 0x445371 */ if (fZ) goto L_00445371;
L_00445367:; BB(0x00445367);
    /* 00445367: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
L_00445371:; BB(0x00445371);
    /* 00445371: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00445377: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445379: je 0x445732 */ if (fZ) goto L_00445732;
L_0044537f:; BB(0x0044537f);
    /* 0044537f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445382: je 0x445606 */ if (fZ) goto L_00445606;
L_00445388:; BB(0x00445388);
    /* 00445388: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044538b: je 0x44545e */ if (fZ) goto L_0044545e;
L_00445391:; BB(0x00445391);
    /* 00445391: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445394: je 0x4453f2 */ if (fZ) goto L_004453f2;
L_00445396:; BB(0x00445396);
    /* 00445396: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445399: jne 0x4453c2 */ if (!fZ) goto L_004453c2;
L_0044539b:; BB(0x0044539b);
    /* 0044539b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044539d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4453a2u); f_007aa094();
    /* 004453a2: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 004453a8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453ab: je 0x44540a */ if (fZ) goto L_0044540a;
L_004453ad:; BB(0x004453ad);
    /* 004453ad: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004453b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004453b2: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x4453b8u); call_ind(t); }
    /* 004453b8: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004453bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004453bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004453bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004453be: mov esp, ebx */ r_esp = r_ebx;
    /* 004453c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004453c1: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_004453c2:; BB(0x004453c2);
    /* 004453c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453c5: jne 0x44540a */ if (!fZ) goto L_0044540a;
L_004453c7:; BB(0x004453c7);
    /* 004453c7: mov esi, dword ptr [ebp + 0x47c] */ r_esi = R32((u32)(r_ebp+0x47cu));
    /* 004453cd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004453cf: je 0x44540a */ if (fZ) goto L_0044540a;
L_004453d1:; BB(0x004453d1);
    /* 004453d1: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004453d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004453da: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004453de: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
    /* 004453e8: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004453eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004453ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004453ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004453ee: mov esp, ebx */ r_esp = r_ebx;
    /* 004453f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004453f1: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_004453f2:; BB(0x004453f2);
    /* 004453f2: movsx eax, word ptr [ebp + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 004453f9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004453fc: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00445403: movsx esi, ax */ r_esi = (u32)(i32)(i16)(u16)r_eax;
    /* 00445406: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445408: jle 0x445414 */ if ((fZ||fS!=fO)) goto L_00445414;
L_0044540a:; BB(0x0044540a);
    /* 0044540a: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044540d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044540e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044540f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445410: mov esp, ebx */ r_esp = r_ebx;
    /* 00445412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445413: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_00445414:; BB(0x00445414);
    /* 00445414: mov esi, dword ptr [ebp + 0x47c] */ r_esi = R32((u32)(r_ebp+0x47cu));
    /* 0044541a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044541c: je 0x445435 */ if (fZ) goto L_00445435;
L_0044541e:; BB(0x0044541e);
    /* 0044541e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00445422: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445427: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0044542b: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
L_00445435:; BB(0x00445435);
    /* 00445435: mov dword ptr [ebp + 0x384], 4 */ W32((u32)(r_ebp+0x384u), 0x4u);
    /* 0044543f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00445442: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445446: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445447: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 0044544c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445451u); f_00814298();
    /* 00445451: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445454: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00445457: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445458: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445459: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044545a: mov esp, ebx */ r_esp = r_ebx;
    /* 0044545c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044545d: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_0044545e:; BB(0x0044545e);
    /* 0044545e: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00445461: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445463: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445465: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445466: push 0x353 */ { u32 v = 0x353u; r_esp -= 4; W32(r_esp, v); }
    /* 0044546b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445470u); f_00814298();
    /* 00445470: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445473: movsx eax, word ptr [ebp + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 0044547a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044547d: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00445484: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00445487: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445489: jg 0x44540a */ if ((!fZ&&fS==fO)) goto L_0044540a;
L_0044548f:; BB(0x0044548f);
    /* 0044548f: mov edi, dword ptr [ebp + 0x47c] */ r_edi = R32((u32)(r_ebp+0x47cu));
    /* 00445495: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445497: je 0x4454b0 */ if (fZ) goto L_004454b0;
L_00445499:; BB(0x00445499);
    /* 00445499: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0044549d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004454a2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004454a6: mov dword ptr [ebp + 0x47c], 0 */ W32((u32)(r_ebp+0x47cu), 0x0u);
L_004454b0:; BB(0x004454b0);
    /* 004454b0: mov edi, dword ptr [0xa44bbc] */ r_edi = R32((u32)(0xa44bbcu));
    /* 004454b6: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004454bb: mov edi, dword ptr [edi + 0x24] */ r_edi = R32((u32)(r_edi+0x24u));
    /* 004454be: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004454c0: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004454c3: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 004454c9: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004454cb: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004454cd: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 004454d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004454d2: push 0x8fe828 */ { u32 v = 0x8fe828u; r_esp -= 4; W32(r_esp, v); }
    /* 004454d7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004454d9: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004454de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004454df: call 0x78a744 */ r_esp -= 4; W32(r_esp, 0x4454e4u); f_0078a744();
    /* 004454e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004454e7: movsx edi, word ptr [ebp + 0x2bc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2bcu));
    /* 004454ee: movsx eax, word ptr [ebp + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 004454f5: add eax, dword ptr [esp + 0x40] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004454f9: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004454fb: jl 0x4454ff */ if ((fS!=fO)) goto L_004454ff;
L_004454fd:; BB(0x004454fd);
    /* 004454fd: mov eax, edi */ r_eax = r_edi;
L_004454ff:; BB(0x004454ff);
    /* 004454ff: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00445502: movsx eax, word ptr [ebp + 0x4b4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b4u));
    /* 00445509: mov word ptr [ebp + 0x334], cx */ W16((u32)(r_ebp+0x334u), (u16)r_ecx);
    /* 00445510: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445512: jle 0x445533 */ if ((fZ||fS!=fO)) goto L_00445533;
L_00445514:; BB(0x00445514);
    /* 00445514: movsx edx, word ptr [ebp + 0x4b4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b4u));
    /* 0044551b: add edx, dword ptr [esp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044551f: movsx eax, word ptr [ebp + 0x4bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bcu));
    /* 00445526: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445528: jl 0x44552c */ if ((fS!=fO)) goto L_0044552c;
L_0044552a:; BB(0x0044552a);
    /* 0044552a: mov edx, eax */ r_edx = r_eax;
L_0044552c:; BB(0x0044552c);
    /* 0044552c: mov word ptr [ebp + 0x4b4], dx */ W16((u32)(r_ebp+0x4b4u), (u16)r_edx);
L_00445533:; BB(0x00445533);
    /* 00445533: movsx eax, word ptr [ebp + 0x4b6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b6u));
    /* 0044553a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044553c: jle 0x44555d */ if ((fZ||fS!=fO)) goto L_0044555d;
L_0044553e:; BB(0x0044553e);
    /* 0044553e: movsx edx, word ptr [ebp + 0x4b6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b6u));
    /* 00445545: add edx, dword ptr [esp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445549: movsx eax, word ptr [ebp + 0x4be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4beu));
    /* 00445550: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445552: jl 0x445556 */ if ((fS!=fO)) goto L_00445556;
L_00445554:; BB(0x00445554);
    /* 00445554: mov edx, eax */ r_edx = r_eax;
L_00445556:; BB(0x00445556);
    /* 00445556: mov word ptr [ebp + 0x4b6], dx */ W16((u32)(r_ebp+0x4b6u), (u16)r_edx);
L_0044555d:; BB(0x0044555d);
    /* 0044555d: movsx eax, word ptr [ebp + 0x4b8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b8u));
    /* 00445564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445566: jle 0x445587 */ if ((fZ||fS!=fO)) goto L_00445587;
L_00445568:; BB(0x00445568);
    /* 00445568: movsx edx, word ptr [ebp + 0x4b8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4b8u));
    /* 0044556f: add edx, dword ptr [esp + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445573: movsx eax, word ptr [ebp + 0x4c0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4c0u));
    /* 0044557a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044557c: jl 0x445580 */ if ((fS!=fO)) goto L_00445580;
L_0044557e:; BB(0x0044557e);
    /* 0044557e: mov edx, eax */ r_edx = r_eax;
L_00445580:; BB(0x00445580);
    /* 00445580: mov word ptr [ebp + 0x4b8], dx */ W16((u32)(r_ebp+0x4b8u), (u16)r_edx);
L_00445587:; BB(0x00445587);
    /* 00445587: movsx eax, word ptr [ebp + 0x4ba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bau));
    /* 0044558e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445590: jle 0x4455b3 */ if ((fZ||fS!=fO)) goto L_004455b3;
L_00445592:; BB(0x00445592);
    /* 00445592: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00445596: movsx edx, word ptr [ebp + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bau));
    /* 0044559d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044559f: movsx edx, word ptr [ebp + 0x4c2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4c2u));
    /* 004455a6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004455a8: jl 0x4455ac */ if ((fS!=fO)) goto L_004455ac;
L_004455aa:; BB(0x004455aa);
    /* 004455aa: mov eax, edx */ r_eax = r_edx;
L_004455ac:; BB(0x004455ac);
    /* 004455ac: mov word ptr [ebp + 0x4ba], ax */ W16((u32)(r_ebp+0x4bau), (u16)r_eax);
L_004455b3:; BB(0x004455b3);
    /* 004455b3: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004455b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004455b9: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 004455be: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 004455c5: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004455c8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004455ca: jl 0x4455ce */ if ((fS!=fO)) goto L_004455ce;
L_004455cc:; BB(0x004455cc);
    /* 004455cc: mov ecx, edi */ r_ecx = r_edi;
L_004455ce:; BB(0x004455ce);
    /* 004455ce: mov word ptr [ebp + 0x334], cx */ W16((u32)(r_ebp+0x334u), (u16)r_ecx);
    /* 004455d5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4455dau); f_00509590();
    /* 004455da: mov dword ptr [ebp + 0x384], 3 */ W32((u32)(r_ebp+0x384u), 0x3u);
    /* 004455e4: mov dword ptr [ebp + 0x47c], eax */ W32((u32)(r_ebp+0x47cu), r_eax);
    /* 004455ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004455ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004455ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004455ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004455ef: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 004455f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4455f9u); f_00814298();
    /* 004455f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004455fc: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004455ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445600: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445602: mov esp, ebx */ r_esp = r_ebx;
    /* 00445604: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445605: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_00445606:; BB(0x00445606);
    /* 00445606: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00445608: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44560du); f_007aa094();
    /* 0044560d: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00445612: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00445614: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x445619u); f_007aaa30();
    /* 00445619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044561b: je 0x445632 */ if (fZ) goto L_00445632;
L_0044561d:; BB(0x0044561d);
    /* 0044561d: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 00445620: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445624: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445625: push 0x345 */ { u32 v = 0x345u; r_esp -= 4; W32(r_esp, v); }
    /* 0044562a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44562fu); f_00814298();
    /* 0044562f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00445632:; BB(0x00445632);
    /* 00445632: fld dword ptr [0x8fe7f4] */ FPUSH(R_F32((u32)(0x8fe7f4u)));
    /* 00445638: fadd dword ptr [ebp + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc0u));
    /* 0044563e: fmul dword ptr [0x8fe7f0] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7f0u));
    /* 00445644: fld dword ptr [0x8fe7ec] */ FPUSH(R_F32((u32)(0x8fe7ecu)));
    /* 0044564a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044564c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044564e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044564f: fld dword ptr [0x8fe7e8] */ FPUSH(R_F32((u32)(0x8fe7e8u)));
    /* 00445655: mov esi, dword ptr [0xa44b64] */ r_esi = R32((u32)(0xa44b64u));
    /* 0044565b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044565d: jb 0x445661 */ if (fC) goto L_00445661;
L_0044565f:; BB(0x0044565f);
    /* 0044565f: fst st(2) */ ST(2) = ST(0);
L_00445661:; BB(0x00445661);
    /* 00445661: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00445663: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00445665: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445667: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445668: ja 0x44566c */ if ((!fC&&!fZ)) goto L_0044566c;
L_0044566a:; BB(0x0044566a);
    /* 0044566a: fst st(1) */ ST(1) = ST(0);
L_0044566c:; BB(0x0044566c);
    /* 0044566c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044566e: fmul dword ptr [0x8fe7e4] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7e4u));
    /* 00445674: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00445678: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0044567d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445682: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00445686: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0044568a: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 0044568e: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00445692: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00445696: mov byte ptr [esi + 7], al */ W8((u32)(r_esi+0x7u), (u8)r_eax);
    /* 00445699: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0044569f: fcomp dword ptr [0x8fe7e0] */ fx_compare(ST(0), R_F32((u32)(0x8fe7e0u))); FPOP();
    /* 004456a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004456a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004456a8: jb 0x44540a */ if (fC) goto L_0044540a;
L_004456ae:; BB(0x004456ae);
    /* 004456ae: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004456b3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4456b8u); f_0082d990();
    /* 004456b8: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 004456bb: mov dword ptr [esp], 0xc2180000 */ W32((u32)(r_esp), 0xc2180000u);
    /* 004456c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004456c4: mov dword ptr [esp + 4], 0x41f80000 */ W32((u32)(r_esp+0x4u), 0x41f80000u);
    /* 004456cc: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004456d4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4456d9u); f_0082d8bc();
    /* 004456d9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004456dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004456de: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004456e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004456e4: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4456e9u); f_00830aa0();
    /* 004456e9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004456ed: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004456f0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4456f5u); f_0082ebac();
    /* 004456f5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4456fau); f_0082da80();
    /* 004456fa: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004456fe: push 0x1a1 */ { u32 v = 0x1a1u; r_esp -= 4; W32(r_esp, v); }
    /* 00445703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445704: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x445709u); f_00509590();
    /* 00445709: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044570c: mov dword ptr [ebp + 0x384], 2 */ W32((u32)(r_ebp+0x384u), 0x2u);
    /* 00445716: mov dword ptr [ebp + 0x47c], eax */ W32((u32)(r_ebp+0x47cu), r_eax);
    /* 0044571c: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00445721: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00445728: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044572b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044572c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044572d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044572e: mov esp, ebx */ r_esp = r_ebx;
    /* 00445730: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445731: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_00445732:; BB(0x00445732);
    /* 00445732: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 0044573c: mov eax, 5 */ r_eax = 0x5u;
    /* 00445741: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00445748: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044574a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044574f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445751: jle 0x44586c */ if ((fZ||fS!=fO)) goto L_0044586c;
L_00445757:; BB(0x00445757);
    /* 00445757: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0044575a:; BB(0x0044575a);
    /* 0044575a: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00445761: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445763: je 0x445845 */ if (fZ) goto L_00445845;
L_00445769:; BB(0x00445769);
    /* 00445769: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0044576d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044576e: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x445773u); f_007ba9ec();
    /* 00445773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00445774: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00445777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445779: je 0x445785 */ if (fZ) goto L_00445785;
L_0044577b:; BB(0x0044577b);
    /* 0044577b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445780: jmp 0x445845 */ goto L_00445845;
L_00445785:; BB(0x00445785);
    /* 00445785: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00445788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445789: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044578a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x44578fu); f_0078ea50();
    /* 0044578f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445792: fcomp dword ptr [0x8fe7dc] */ fx_compare(ST(0), R_F32((u32)(0x8fe7dcu))); FPOP();
    /* 00445798: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044579a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044579b: jbe 0x4457a7 */ if ((fC||fZ)) goto L_004457a7;
L_0044579d:; BB(0x0044579d);
    /* 0044579d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004457a2: jmp 0x445845 */ goto L_00445845;
L_004457a7:; BB(0x004457a7);
    /* 004457a7: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004457ab: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 004457ae: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004457b2: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 004457b5: mov edx, ebp */ r_edx = r_ebp;
    /* 004457b7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004457bb: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 004457be: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004457c2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4457c7u); f_0082f9c4();
    /* 004457c7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004457cb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004457cf: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004457d1: fmul qword ptr [0x8fe708] */ ST(0) = ST(0) * R_F64((u32)(0x8fe708u));
    /* 004457d7: fdiv qword ptr [0x8fe700] */ ST(0) = ST(0) / R_F64((u32)(0x8fe700u));
    /* 004457dd: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 004457e1: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 004457e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004457eb: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004457ef: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 004457f3: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 004457f7: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004457fb: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 004457ff: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00445803: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x445808u); f_0082ddd8();
    /* 00445808: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 0044580e: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00445812: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00445816: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x44581bu); f_0082dcbc();
    /* 0044581b: fld dword ptr [0x8fe804] */ FPUSH(R_F32((u32)(0x8fe804u)));
    /* 00445821: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00445823: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00445827: mov edx, ebp */ r_edx = r_ebp;
    /* 00445829: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0044582d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x445832u); f_0082ebac();
    /* 00445832: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00445836: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00445839: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0044583d: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00445840: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00445845:; BB(0x00445845);
    /* 00445845: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445848: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044584a: jl 0x44575a */ if ((fS!=fO)) goto L_0044575a;
L_00445850:; BB(0x00445850);
    /* 00445850: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445852: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445855: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 0044585a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44585fu); f_00814298();
    /* 0044585f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445862: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00445865: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445866: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445867: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445868: mov esp, ebx */ r_esp = r_ebx;
    /* 0044586a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044586b: ret  */ FN_RET(0x0044534c); r_esp += 4; return;
L_0044586c:; BB(0x0044586c);
    /* 0044586c: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0044586f: jmp 0x445850 */ goto L_00445850;
}

void f_0044555f(void)
{
    FN_ENTER(0x0044555f);
    /* 0044555f: test dword ptr [eax - 0x7afffffc], edi */ {  u32 a = R32((u32)(r_eax+0x85000004u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;   }
    /* 00445565: sar byte ptr [esi + 0x1f], 0xf */ { u32 ad = (u32)(r_esi+0x1fu); u32 c = (15u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 00445569: mov edi, 0x4b895 */ r_edi = 0x4b895u;
    /* 0044556e: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00445570: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00445571: and al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445573: movsx eax, word ptr [ebp + 0x4c0] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4c0u));
    /* 0044557a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044557c: jl 0x445580 */ if ((fS!=fO)) goto L_00445580;
L_0044557e:; BB(0x0044557e);
    /* 0044557e: mov edx, eax */ r_edx = r_eax;
L_00445580:; BB(0x00445580);
    /* 00445580: mov word ptr [ebp + 0x4b8], dx */ W16((u32)(r_ebp+0x4b8u), (u16)r_edx);
    /* 00445587: movsx eax, word ptr [ebp + 0x4ba] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bau));
    /* 0044558e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445590: jle 0x4455b3 */ if ((fZ||fS!=fO)) goto L_004455b3;
L_00445592:; BB(0x00445592);
    /* 00445592: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00445596: movsx edx, word ptr [ebp + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4bau));
    /* 0044559d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044559f: movsx edx, word ptr [ebp + 0x4c2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x4c2u));
    /* 004455a6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004455a8: jl 0x4455ac */ if ((fS!=fO)) goto L_004455ac;
L_004455aa:; BB(0x004455aa);
    /* 004455aa: mov eax, edx */ r_eax = r_edx;
L_004455ac:; BB(0x004455ac);
    /* 004455ac: mov word ptr [ebp + 0x4ba], ax */ W16((u32)(r_ebp+0x4bau), (u16)r_eax);
L_004455b3:; BB(0x004455b3);
    /* 004455b3: push 0x1a2 */ { u32 v = 0x1a2u; r_esp -= 4; W32(r_esp, v); }
    /* 004455b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004455b9: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 004455be: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 004455c5: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004455c8: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004455ca: jl 0x4455ce */ if ((fS!=fO)) goto L_004455ce;
L_004455cc:; BB(0x004455cc);
    /* 004455cc: mov ecx, edi */ r_ecx = r_edi;
L_004455ce:; BB(0x004455ce);
    /* 004455ce: mov word ptr [ebp + 0x334], cx */ W16((u32)(r_ebp+0x334u), (u16)r_ecx);
    /* 004455d5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4455dau); f_00509590();
    /* 004455da: mov dword ptr [ebp + 0x384], 3 */ W32((u32)(r_ebp+0x384u), 0x3u);
    /* 004455e4: mov dword ptr [ebp + 0x47c], eax */ W32((u32)(r_ebp+0x47cu), r_eax);
    /* 004455ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004455ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004455ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004455ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004455ef: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 004455f4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4455f9u); f_00814298();
    /* 004455f9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004455fc: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004455ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445600: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00445601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00445602: mov esp, ebx */ r_esp = r_ebx;
    /* 00445604: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445605: ret  */ FN_RET(0x0044555f); r_esp += 4; return;
}

void f_00445874(void) /* sub_445874 */
{
    FN_ENTER(0x00445874);
    /* 00445874: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00445875: mov ebx, esp */ r_ebx = r_esp;
    /* 00445877: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0044587a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044587b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044587c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0044587f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00445883: mov ebp, esp */ r_ebp = r_esp;
    /* 00445885: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00445887: push 0x8ce84a */ { u32 v = 0x8ce84au; r_esp -= 4; W32(r_esp, v); }
    /* 0044588c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00445892: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445893: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044589a: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044589d: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004458a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004458a3: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004458a6: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004458a9: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 004458af: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 004458b2: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004458b7: je 0x4458c5 */ if (fZ) goto L_004458c5;
L_004458b9:; BB(0x004458b9);
    /* 004458b9: mov eax, ecx */ r_eax = r_ecx;
    /* 004458bb: mov dword ptr [eax + 0x37c], 0 */ W32((u32)(r_eax+0x37cu), 0x0u);
L_004458c5:; BB(0x004458c5);
    /* 004458c5: mov eax, ecx */ r_eax = r_ecx;
    /* 004458c7: movzx edx, word ptr [eax + 0x340] */ r_edx = (u32)R16((u32)(r_eax+0x340u));
    /* 004458ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004458cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4458d4u); f_0068d5a8();
    /* 004458d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004458d5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004458d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004458d9: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x4458deu); f_007706b0();
    /* 004458de: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004458e1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x4458e6u); f_00770738();
    /* 004458e6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004458e9: mov edx, dword ptr [edx + 0x384] */ r_edx = R32((u32)(r_edx+0x384u));
    /* 004458ef: lea ecx, [edx + 1] */ r_ecx = (u32)(r_edx+0x1u);
    /* 004458f2: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004458f5: ja 0x445cca */ if ((!fC&&!fZ)) goto L_00445cca;
L_004458fb:; BB(0x004458fb);
    /* 004458fb: mov edx, dword ptr [edx*4 + 0x8fe60c] */ r_edx = R32((u32)(r_edx*4+0x8fe60cu));
    /* 00445902: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445874); r_esp += 4; return;
}

void f_00445904(void)
{
    FN_ENTER(0x00445904);
    /* 00445904: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445907: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x44590cu); f_007aa094();
    /* 0044590c: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00445911: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445914: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x445919u); f_007aaa30();
    /* 00445919: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044591b: je 0x445935 */ if (fZ) goto L_00445935;
L_0044591d:; BB(0x0044591d);
    /* 0044591d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445920: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00445923: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00445925: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445926: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445927: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445928: push 0x34c */ { u32 v = 0x34cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044592d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445932u); f_00814298();
    /* 00445932: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00445935:; BB(0x00445935);
    /* 00445935: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445938: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 0044593e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00445941: je 0x445cca */ if (fZ) goto L_00445cca;
L_00445947:; BB(0x00445947);
    /* 00445947: mov ecx, eax */ r_ecx = r_eax;
    /* 00445949: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044594b: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x445951u); call_ind(t); }
    /* 00445951: jmp 0x445cca */ goto L_00445cca;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445904); r_esp += 4; return;
}

void f_00445956(void)
{
    FN_ENTER(0x00445956);
    /* 00445956: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445959: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445960: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445963: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044596a: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044596d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044596f: jle 0x445ce1 */ if ((fZ||fS!=fO)) goto L_00445ce1;
L_00445975:; BB(0x00445975);
    /* 00445975: jmp 0x445cca */ goto L_00445cca;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445956); r_esp += 4; return;
L_00445ce1:; BB(0x00445ce1);
    /* 00445ce1: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x445ce6u); f_007a61a4();
    /* 00445ce6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445ce9: je 0x445e52 */ if (fZ) goto L_00445e52;
L_00445cef:; BB(0x00445cef);
    /* 00445cef: mov edx, 4 */ r_edx = 0x4u;
L_00445cf4:; BB(0x00445cf4);
    /* 00445cf4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445cf7: cmp dx, word ptr [eax + 0x39e] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_eax+0x39eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00445cfe: jle 0x445d0c */ if ((fZ||fS!=fO)) goto L_00445d0c;
L_00445d00:; BB(0x00445d00);
    /* 00445d00: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00445d0a: jmp 0x445cca */ goto L_00445cca;
L_00445d0c:; BB(0x00445d0c);
    /* 00445d0c: mov edx, eax */ r_edx = r_eax;
    /* 00445d0e: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 00445d18: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445d1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445d20: push 0x34c */ { u32 v = 0x34cu; r_esp -= 4; W32(r_esp, v); }
    /* 00445d25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445d2au); f_00814298();
    /* 00445d2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00445d2d: jmp 0x445cca */ goto L_00445cca;
L_00445e52:; BB(0x00445e52);
    /* 00445e52: mov edx, 2 */ r_edx = 0x2u;
    /* 00445e57: jmp 0x445cf4 */ goto L_00445cf4;
}

void f_0044597a(void)
{
    FN_ENTER(0x0044597a);
    goto L_0044597a;
L_00445960:; BB(0x00445960);
    /* 00445960: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445963: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044596a: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044596d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044596f: jle 0x445ce1 */ if ((fZ||fS!=fO)) goto L_00445ce1;
L_00445975:; BB(0x00445975);
    /* 00445975: jmp 0x445cca */ goto L_00445cca;
L_0044597a:; BB(0x0044597a);
    /* 0044597a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044597d: add word ptr [ecx + 0x39e], 1 */ { u32 ad = (u32)(r_ecx+0x39eu);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00445985: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x44598au); f_0052cac0();
    /* 0044598a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044598d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044598f: mov word ptr [edx + 0x39c], ax */ W16((u32)(r_edx+0x39cu), (u16)r_eax);
    /* 00445996: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044599b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044599d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044599f: jle 0x445e4b */ if ((fZ||fS!=fO)) goto L_00445e4b;
L_004459a5:; BB(0x004459a5);
    /* 004459a5: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 004459ac: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004459ae: je 0x445e3c */ if (fZ) goto L_00445e3c;
L_004459b4:; BB(0x004459b4);
    /* 004459b4: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 004459b8: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004459be: jge 0x4459db */ if ((fS==fO)) goto L_004459db;
L_004459c0:; BB(0x004459c0);
    /* 004459c0: mov edx, dword ptr [esi + 0x3ec] */ r_edx = R32((u32)(r_esi+0x3ecu));
    /* 004459c6: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004459c9: je 0x445d3e */ if (fZ) goto L_00445d3e;
L_004459cf:; BB(0x004459cf);
    /* 004459cf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004459d2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004459d4: jl 0x4459a5 */ if ((fS!=fO)) goto L_004459a5;
L_004459d6:; BB(0x004459d6);
    /* 004459d6: jmp 0x445d2f */ goto L_00445d2f;
L_004459db:; BB(0x004459db);
    /* 004459db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004459de: movsx ecx, word ptr [eax + 0x39c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x39cu));
L_004459e5:; BB(0x004459e5);
    /* 004459e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004459e7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004459ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004459ec: jle 0x445e09 */ if ((fZ||fS!=fO)) goto L_00445e09;
L_004459f2:; BB(0x004459f2);
    /* 004459f2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004459f5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004459f8: lea edi, [ebp - 0x54] */ r_edi = (u32)(r_ebp+0xffffffacu);
    /* 004459fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004459fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004459fe: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00445a01: movsx edx, word ptr [esi + 0x9a5570] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x9a5570u));
    /* 00445a08: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00445a0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445a0c: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x445a12u); call_ind(t); }
    /* 00445a12: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00445a19: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445a1e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445a23u); f_005caba4();
    /* 00445a23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00445a24: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00445a27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445a29: je 0x445a64 */ if (fZ) goto L_00445a64;
L_00445a2b:; BB(0x00445a2b);
    /* 00445a2b: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00445a32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00445a39: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445a3c: mov ecx, esi */ r_ecx = r_esi;
    /* 00445a3e: lea esi, [ebp - 0x54] */ r_esi = (u32)(r_ebp+0xffffffacu);
    /* 00445a41: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00445a44: movzx ecx, word ptr [edi + ecx + 0x394] */ r_ecx = (u32)R16((u32)(r_edi+r_ecx+0x394u));
    /* 00445a4c: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445a52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445a53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445a54: mov ecx, eax */ r_ecx = r_eax;
    /* 00445a56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445a57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00445a58: call 0x44a954 */ r_esp -= 4; W32(r_esp, 0x445a5du); f_0044a954();
    /* 00445a5d: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00445a64:; BB(0x00445a64);
    /* 00445a64: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00445a6b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445a6e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445a71: movsx ecx, word ptr [eax + 0x39c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x39cu));
    /* 00445a78: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445a7b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445a7d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00445a80: jl 0x4459f2 */ if ((fS!=fO)) goto L_004459f2;
L_00445a86:; BB(0x00445a86);
    /* 00445a86: jmp 0x445e09 */ goto L_00445e09;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x0044597a); r_esp += 4; return;
L_00445ce1:; BB(0x00445ce1);
    /* 00445ce1: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x445ce6u); f_007a61a4();
    /* 00445ce6: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445ce9: je 0x445e52 */ if (fZ) goto L_00445e52;
L_00445cef:; BB(0x00445cef);
    /* 00445cef: mov edx, 4 */ r_edx = 0x4u;
L_00445cf4:; BB(0x00445cf4);
    /* 00445cf4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445cf7: cmp dx, word ptr [eax + 0x39e] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_eax+0x39eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00445cfe: jle 0x445d0c */ if ((fZ||fS!=fO)) goto L_00445d0c;
L_00445d00:; BB(0x00445d00);
    /* 00445d00: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00445d0a: jmp 0x445cca */ goto L_00445cca;
L_00445d0c:; BB(0x00445d0c);
    /* 00445d0c: mov edx, eax */ r_edx = r_eax;
    /* 00445d0e: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 00445d18: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445d1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445d1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445d1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445d20: push 0x34c */ { u32 v = 0x34cu; r_esp -= 4; W32(r_esp, v); }
    /* 00445d25: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445d2au); f_00814298();
    /* 00445d2a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00445d2d: jmp 0x445cca */ goto L_00445cca;
L_00445d2f:; BB(0x00445d2f);
    /* 00445d2f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445d32: movsx ecx, word ptr [eax + 0x39c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x39cu));
    /* 00445d39: jmp 0x4459e5 */ goto L_004459e5;
L_00445d3e:; BB(0x00445d3e);
    /* 00445d3e: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00445d41: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445d47: jne 0x4459cf */ if (!fZ) goto L_004459cf;
L_00445d4d:; BB(0x00445d4d);
    /* 00445d4d: lea ecx, [ebp - 0x60] */ r_ecx = (u32)(r_ebp+0xffffffa0u);
    /* 00445d50: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00445d56: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00445d59: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 00445d5f: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00445d62: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00445d68: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00445d6b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445d6e: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 00445d74: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x445d79u); f_0082f9c4();
    /* 00445d79: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00445d7c: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00445d7f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00445d81: fmul qword ptr [0x8fe6f8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6f8u));
    /* 00445d87: fdiv qword ptr [0x8fe6f0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6f0u));
    /* 00445d8d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445d90: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00445d93: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00445d96: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00445d9a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445d9f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00445da2: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00445da5: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00445da8: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00445dab: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00445dae: add ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00445db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445db5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445db6: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x445dbbu); f_007a9018();
    /* 00445dbb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445dbe: cmp eax, 0x1c71 */ {  u32 a = r_eax; u32 b = 0x1c71u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445dc3: jle 0x445dcf */ if ((fZ||fS!=fO)) goto L_00445dcf;
L_00445dc5:; BB(0x00445dc5);
    /* 00445dc5: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445dca: jmp 0x4459cf */ goto L_004459cf;
L_00445dcf:; BB(0x00445dcf);
    /* 00445dcf: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00445dd3: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445dd6: movsx ecx, word ptr [esi + 0x39c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x39cu));
    /* 00445ddd: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00445de0: mov word ptr [esi + 0x39c], ax */ W16((u32)(r_esi+0x39cu), (u16)r_eax);
    /* 00445de7: mov word ptr [esi + ecx*2 + 0x394], dx */ W16((u32)(r_esi+r_ecx*2+0x394u), (u16)r_edx);
    /* 00445def: movsx ecx, word ptr [esi + 0x39c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x39cu));
    /* 00445df6: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445df9: jge 0x4459e5 */ if ((fS==fO)) goto L_004459e5;
L_00445dff:; BB(0x00445dff);
    /* 00445dff: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445e04: jmp 0x4459cf */ goto L_004459cf;
L_00445e09:; BB(0x00445e09);
    /* 00445e09: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445e0b: jle 0x445e25 */ if ((fZ||fS!=fO)) goto L_00445e25;
L_00445e0d:; BB(0x00445e0d);
    /* 00445e0d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445e10: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00445e13: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00445e15: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e18: push 0x34d */ { u32 v = 0x34du; r_esp -= 4; W32(r_esp, v); }
    /* 00445e1d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445e22u); f_00814298();
    /* 00445e22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00445e25:; BB(0x00445e25);
    /* 00445e25: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445e28: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445e32: mov edx, 0xf */ r_edx = 0xfu;
    /* 00445e37: jmp 0x445960 */ goto L_00445960;
L_00445e3c:; BB(0x00445e3c);
    /* 00445e3c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445e3f: movsx ecx, word ptr [eax + 0x39c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x39cu));
    /* 00445e46: jmp 0x4459e5 */ goto L_004459e5;
L_00445e4b:; BB(0x00445e4b);
    /* 00445e4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00445e4d: jmp 0x4459e5 */ goto L_004459e5;
L_00445e52:; BB(0x00445e52);
    /* 00445e52: mov edx, 2 */ r_edx = 0x2u;
    /* 00445e57: jmp 0x445cf4 */ goto L_00445cf4;
}

void f_00445a8b(void)
{
    FN_ENTER(0x00445a8b);
    /* 00445a8b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445a8e: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445a95: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445a98: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00445a9f: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445aa2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00445aa4: jg 0x445cca */ if ((!fZ&&fS==fO)) goto L_00445cca;
L_00445aaa:; BB(0x00445aaa);
    /* 00445aaa: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00445ab4: jmp 0x445cca */ goto L_00445cca;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445a8b); r_esp += 4; return;
}

void f_00445ab9(void)
{
    FN_ENTER(0x00445ab9);
    /* 00445ab9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445abc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x445ac1u); f_007aa094();
    /* 00445ac1: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00445ac6: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445ac9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x445aceu); f_007aaa30();
    /* 00445ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 00445ad0: je 0x445aea */ if (fZ) goto L_00445aea;
L_00445ad2:; BB(0x00445ad2);
    /* 00445ad2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445ad5: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00445ad8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00445ada: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445adb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445adc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445add: push 0x34b */ { u32 v = 0x34bu; r_esp -= 4; W32(r_esp, v); }
    /* 00445ae2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x445ae7u); f_00814298();
    /* 00445ae7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_00445aea:; BB(0x00445aea);
    /* 00445aea: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445aed: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00445af3: fcomp dword ptr [0x8fe7d0] */ fx_compare(ST(0), R_F32((u32)(0x8fe7d0u))); FPOP();
    /* 00445af9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445afb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445afc: jb 0x445cca */ if (fC) goto L_00445cca;
L_00445b02:; BB(0x00445b02);
    /* 00445b02: mov dword ptr [edx + 0x384], 3 */ W32((u32)(r_edx+0x384u), 0x3u);
    /* 00445b0c: mov eax, 0xa */ r_eax = 0xau;
    /* 00445b11: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00445b18: jmp 0x445cca */ goto L_00445cca;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445ab9); r_esp += 4; return;
}

void f_00445b1d(void)
{
    FN_ENTER(0x00445b1d);
    /* 00445b1d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445b20: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00445b2a: mov edx, 0x3c */ r_edx = 0x3cu;
    /* 00445b2f: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
    /* 00445b36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00445b38: mov word ptr [esi + 0x39e], cx */ W16((u32)(r_esi+0x39eu), (u16)r_ecx);
    /* 00445b3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445b41: je 0x445bb1 */ if (fZ) goto L_00445bb1;
L_00445b43:; BB(0x00445b43);
    /* 00445b43: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445b46: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00445b49: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 00445b4c: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 00445b4f: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00445b52: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 00445b55: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 00445b58: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 00445b5b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00445b5e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x445b63u); f_0082f9c4();
    /* 00445b63: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 00445b66: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00445b69: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00445b6b: fmul qword ptr [0x8fe6f8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6f8u));
    /* 00445b71: fdiv qword ptr [0x8fe6f0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6f0u));
    /* 00445b77: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445b7a: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00445b7d: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00445b81: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445b86: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00445b89: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00445b8c: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00445b8f: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00445b92: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00445b95: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445b9a: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 00445b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445ba0: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00445ba3: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x445ba8u); f_007a8c74();
    /* 00445ba8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445bab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445bae: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
L_00445bb1:; BB(0x00445bb1);
    /* 00445bb1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445bb4: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445bbb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445bbe: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00445bc5: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445bc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445bca: jle 0x445e5c */ if ((fZ||fS!=fO)) goto L_00445e5c;
L_00445bd0:; BB(0x00445bd0);
    /* 00445bd0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445bd5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00445bd9: jle 0x445cca */ if ((fZ||fS!=fO)) goto L_00445cca;
L_00445bdf:; BB(0x00445bdf);
    /* 00445bdf: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00445be6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445be8: je 0x445cbf */ if (fZ) goto L_00445cbf;
L_00445bee:; BB(0x00445bee);
    /* 00445bee: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00445bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445bf3: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x445bf8u); f_007ba9ec();
    /* 00445bf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00445bf9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00445bfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445bfe: je 0x445c0a */ if (fZ) goto L_00445c0a;
L_00445c00:; BB(0x00445c00);
    /* 00445c00: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445c05: jmp 0x445cbf */ goto L_00445cbf;
L_00445c0a:; BB(0x00445c0a);
    /* 00445c0a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445c0d: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00445c10: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00445c13: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00445c16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445c18: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445c1du); f_0078ea50();
    /* 00445c1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c20: fcomp dword ptr [0x8fe7d8] */ fx_compare(ST(0), R_F32((u32)(0x8fe7d8u))); FPOP();
    /* 00445c26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445c28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445c29: jbe 0x445c35 */ if ((fC||fZ)) goto L_00445c35;
L_00445c2b:; BB(0x00445c2b);
    /* 00445c2b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445c30: jmp 0x445cbf */ goto L_00445cbf;
L_00445c35:; BB(0x00445c35);
    /* 00445c35: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445c38: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00445c3b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00445c3e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00445c41: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00445c44: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00445c47: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00445c4a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00445c4d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x445c52u); f_0082f9c4();
    /* 00445c52: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00445c55: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00445c58: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00445c5a: fmul qword ptr [0x8fe6f8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6f8u));
    /* 00445c60: fdiv qword ptr [0x8fe6f0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6f0u));
    /* 00445c66: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00445c69: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00445c6d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445c72: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00445c75: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00445c78: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00445c7b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00445c7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00445c81: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00445c84: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x445c89u); f_0082ddd8();
    /* 00445c89: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00445c8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00445c92: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00445c95: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x445c9au); f_0082dcbc();
    /* 00445c9a: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00445ca0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445ca3: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00445ca6: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00445ca9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x445caeu); f_0082ebac();
    /* 00445cae: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00445cb1: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00445cb4: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00445cb7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445cbc: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_00445cbf:; BB(0x00445cbf);
    /* 00445cbf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445cc2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00445cc4: jl 0x445bdf */ if ((fS!=fO)) goto L_00445bdf;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445b1d); r_esp += 4; return;
L_00445e5c:; BB(0x00445e5c);
    /* 00445e5c: mov ecx, eax */ r_ecx = r_eax;
    /* 00445e5e: mov eax, 7 */ r_eax = 0x7u;
    /* 00445e63: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00445e6a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x445e6fu); f_007aa094();
    /* 00445e6f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445e72: mov dword ptr [eax + 0x384], 2 */ W32((u32)(r_eax+0x384u), 0x2u);
    /* 00445e7c: jmp 0x445bd0 */ goto L_00445bd0;
}

void f_00445b3f(void)
{
    FN_ENTER(0x00445b3f);
    /* 00445b3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445b41: je 0x445bb1 */ if (fZ) goto L_00445bb1;
L_00445b43:; BB(0x00445b43);
    /* 00445b43: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445b46: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00445b49: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 00445b4c: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 00445b4f: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00445b52: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 00445b55: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 00445b58: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 00445b5b: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00445b5e: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x445b63u); f_0082f9c4();
    /* 00445b63: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 00445b66: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00445b69: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00445b6b: fmul qword ptr [0x8fe6f8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6f8u));
    /* 00445b71: fdiv qword ptr [0x8fe6f0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6f0u));
    /* 00445b77: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445b7a: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00445b7d: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00445b81: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445b86: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00445b89: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00445b8c: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00445b8f: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00445b92: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00445b95: add eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445b9a: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 00445b9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445ba0: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00445ba3: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x445ba8u); f_007a8c74();
    /* 00445ba8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445bab: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445bae: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
L_00445bb1:; BB(0x00445bb1);
    /* 00445bb1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445bb4: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445bbb: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445bbe: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00445bc5: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445bc8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445bca: jle 0x445e5c */ if ((fZ||fS!=fO)) goto L_00445e5c;
L_00445bd0:; BB(0x00445bd0);
    /* 00445bd0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445bd5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445bd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00445bd9: jle 0x445cca */ if ((fZ||fS!=fO)) goto L_00445cca;
L_00445bdf:; BB(0x00445bdf);
    /* 00445bdf: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00445be6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445be8: je 0x445cbf */ if (fZ) goto L_00445cbf;
L_00445bee:; BB(0x00445bee);
    /* 00445bee: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00445bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445bf3: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x445bf8u); f_007ba9ec();
    /* 00445bf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00445bf9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00445bfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445bfe: je 0x445c0a */ if (fZ) goto L_00445c0a;
L_00445c00:; BB(0x00445c00);
    /* 00445c00: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445c05: jmp 0x445cbf */ goto L_00445cbf;
L_00445c0a:; BB(0x00445c0a);
    /* 00445c0a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445c0d: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 00445c10: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00445c13: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00445c16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445c18: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445c1du); f_0078ea50();
    /* 00445c1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445c20: fcomp dword ptr [0x8fe7d8] */ fx_compare(ST(0), R_F32((u32)(0x8fe7d8u))); FPOP();
    /* 00445c26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445c28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445c29: jbe 0x445c35 */ if ((fC||fZ)) goto L_00445c35;
L_00445c2b:; BB(0x00445c2b);
    /* 00445c2b: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445c30: jmp 0x445cbf */ goto L_00445cbf;
L_00445c35:; BB(0x00445c35);
    /* 00445c35: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445c38: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00445c3b: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00445c3e: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00445c41: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00445c44: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00445c47: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00445c4a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00445c4d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x445c52u); f_0082f9c4();
    /* 00445c52: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00445c55: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00445c58: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00445c5a: fmul qword ptr [0x8fe6f8] */ ST(0) = ST(0) * R_F64((u32)(0x8fe6f8u));
    /* 00445c60: fdiv qword ptr [0x8fe6f0] */ ST(0) = ST(0) / R_F64((u32)(0x8fe6f0u));
    /* 00445c66: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00445c69: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 00445c6d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445c72: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00445c75: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00445c78: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00445c7b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00445c7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00445c81: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00445c84: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x445c89u); f_0082ddd8();
    /* 00445c89: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00445c8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00445c92: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00445c95: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x445c9au); f_0082dcbc();
    /* 00445c9a: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00445ca0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445ca3: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00445ca6: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00445ca9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x445caeu); f_0082ebac();
    /* 00445cae: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00445cb1: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00445cb4: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00445cb7: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00445cbc: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_00445cbf:; BB(0x00445cbf);
    /* 00445cbf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445cc2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00445cc4: jl 0x445bdf */ if ((fS!=fO)) goto L_00445bdf;
L_00445cca:; BB(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445b3f); r_esp += 4; return;
L_00445e5c:; BB(0x00445e5c);
    /* 00445e5c: mov ecx, eax */ r_ecx = r_eax;
    /* 00445e5e: mov eax, 7 */ r_eax = 0x7u;
    /* 00445e63: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00445e6a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x445e6fu); f_007aa094();
    /* 00445e6f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00445e72: mov dword ptr [eax + 0x384], 2 */ W32((u32)(r_eax+0x384u), 0x2u);
    /* 00445e7c: jmp 0x445bd0 */ goto L_00445bd0;
}

void f_00445cca(void)
{
    FN_ENTER(0x00445cca);
    /* 00445cca: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445ccd: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00445cd0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00445cd3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00445cda: mov esp, ebp */ r_esp = r_ebp;
    /* 00445cdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00445cdd: mov esp, ebx */ r_esp = r_ebx;
    /* 00445cdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00445ce0: ret  */ FN_RET(0x00445cca); r_esp += 4; return;
}

void f_00445e84(void) /* sub_445E84 */
{
    FN_ENTER(0x00445e84);
    /* 00445e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00445e85: mov ebx, esp */ r_ebx = r_esp;
    /* 00445e87: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00445e8a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445e8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00445e8c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00445e8f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00445e93: mov ebp, esp */ r_ebp = r_esp;
    /* 00445e95: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00445e97: push 0x8ce890 */ { u32 v = 0x8ce890u; r_esp -= 4; W32(r_esp, v); }
    /* 00445e9c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00445ea2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445ea3: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00445eaa: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00445eb0: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00445eb3: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00445eb6: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 00445eb9: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 00445ebc: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00445ec2: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 00445ec5: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445eca: je 0x445ed8 */ if (fZ) goto L_00445ed8;
L_00445ecc:; BB(0x00445ecc);
    /* 00445ecc: mov eax, ecx */ r_eax = r_ecx;
    /* 00445ece: mov dword ptr [eax + 0x37c], 0 */ W32((u32)(r_eax+0x37cu), 0x0u);
L_00445ed8:; BB(0x00445ed8);
    /* 00445ed8: mov esi, dword ptr [0xa44bbc] */ r_esi = R32((u32)(0xa44bbcu));
    /* 00445ede: mov edx, ecx */ r_edx = r_ecx;
    /* 00445ee0: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 00445ee3: movzx ecx, word ptr [edx + 0x340] */ r_ecx = (u32)R16((u32)(r_edx+0x340u));
    /* 00445eea: add esi, 0x78 */ {  u32 a = r_esi; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445eed: mov eax, 0xa */ r_eax = 0xau;
    /* 00445ef2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445ef3: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445ef6: jg 0x445efa */ if ((!fZ&&fS==fO)) goto L_00445efa;
L_00445ef8:; BB(0x00445ef8);
    /* 00445ef8: mov esi, eax */ r_esi = r_eax;
L_00445efa:; BB(0x00445efa);
    /* 00445efa: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x445effu); f_0068d5a8();
    /* 00445eff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00445f00: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445f04: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x445f09u); f_007706b0();
    /* 00445f09: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f0c: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x445f11u); f_00770738();
    /* 00445f11: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00445f14: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f17: mov eax, dword ptr [eax + 0x384] */ r_eax = R32((u32)(r_eax+0x384u));
    /* 00445f1d: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00445f20: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00445f23: ja 0x4464fb */ if ((!fC&&!fZ)) goto L_004464fb;
L_00445f29:; BB(0x00445f29);
    /* 00445f29: mov eax, dword ptr [eax*4 + 0x8fe644] */ r_eax = R32((u32)(r_eax*4+0x8fe644u));
    /* 00445f30: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00445e84); r_esp += 4; return;
}

void f_00445f32(void)
{
    FN_ENTER(0x00445f32);
    /* 00445f32: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f35: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x445f3au); f_007aa094();
    /* 00445f3a: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f3d: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00445f43: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00445f46: je 0x4464fb */ if (fZ) goto L_004464fb;
L_00445f4c:; BB(0x00445f4c);
    /* 00445f4c: mov ecx, eax */ r_ecx = r_eax;
    /* 00445f4e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00445f50: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x445f56u); call_ind(t); }
    /* 00445f56: jmp 0x4464fb */ goto L_004464fb;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00445f32); r_esp += 4; return;
}

void f_00445f44(void)
{
    FN_ENTER(0x00445f44);
    /* 00445f44: cli  */ UNSUP(0x00445f44, "cli ");
    /* 00445f45: add al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445f47: test byte ptr [edi - 0x74fffffb], ch */ {  u32 a = R8((u32)(r_edi+0x8b000005u)); u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu;   }
    /* 00445f4d: enter 0x18b, -1 */ { u32 f = 0x18bu; u32 lv = 31u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00445f51: nop  */ ;
    /* 00445f52: lock add byte ptr [eax], al */ UNSUP(0x00445f52, "lock add byte ptr [eax], al");
    /* 00445f55: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00445f57: mov al, byte ptr [0x8b000005] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0x8b000005u))) & 0xffu);
    /* 00445f5c: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00445f5d: lodsb al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | R8(r_esi); r_esi += rt_df ? -1 : 1;
    /* 00445f5e: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x445f63u); f_0052cac0();
    /* 00445f63: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00445f65:; BB(0x00445f65);
    /* 00445f65: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f68: movsx eax, word ptr [esi*2 + 0x9a555c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi*2+0x9a555cu));
    /* 00445f70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00445f72: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00445f75: lea esi, [esi + esi] */ r_esi = (u32)(r_esi+r_esi);
    /* 00445f78: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445f7a: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00445f7d: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445f7f: lea esi, [ecx + edi + 0x3fc] */ r_esi = (u32)(r_ecx+r_edi+0x3fcu);
    /* 00445f86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445f87: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00445f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445f8b: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x445f91u); call_ind(t); }
    /* 00445f91: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445f94: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445f97: jl 0x445f65 */ if ((fS!=fO)) goto L_00445f65;
L_00445f99:; BB(0x00445f99);
    /* 00445f99: jmp 0x446512 */ goto L_00446512;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00445f44); r_esp += 4; return;
L_00446512:; BB(0x00446512);
    /* 00446512: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00446515: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 0044651c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044651f: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00446526: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00446529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044652b: jg 0x4464fb */ if ((!fZ&&fS==fO)) goto L_004464fb;
L_0044652d:; BB(0x0044652d);
    /* 0044652d: mov dword ptr [eax + 0x384], 8 */ W32((u32)(r_eax+0x384u), 0x8u);
    /* 00446537: jmp 0x4464fb */ goto L_004464fb;
}

void f_00445f5b(void)
{
    FN_ENTER(0x00445f5b);
    /* 00445f5b: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f5e: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x445f63u); f_0052cac0();
    /* 00445f63: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00445f65:; BB(0x00445f65);
    /* 00445f65: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445f68: movsx eax, word ptr [esi*2 + 0x9a555c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi*2+0x9a555cu));
    /* 00445f70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00445f72: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 00445f75: lea esi, [esi + esi] */ r_esi = (u32)(r_esi+r_esi);
    /* 00445f78: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445f7a: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00445f7d: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445f7f: lea esi, [ecx + edi + 0x3fc] */ r_esi = (u32)(r_ecx+r_edi+0x3fcu);
    /* 00445f86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445f87: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00445f8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445f8b: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x445f91u); call_ind(t); }
    /* 00445f91: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445f94: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445f97: jl 0x445f65 */ if ((fS!=fO)) goto L_00445f65;
L_00445f99:; BB(0x00445f99);
    /* 00445f99: jmp 0x446512 */ goto L_00446512;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00445f5b); r_esp += 4; return;
L_00446512:; BB(0x00446512);
    /* 00446512: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00446515: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 0044651c: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044651f: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00446526: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00446529: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044652b: jg 0x4464fb */ if ((!fZ&&fS==fO)) goto L_004464fb;
L_0044652d:; BB(0x0044652d);
    /* 0044652d: mov dword ptr [eax + 0x384], 8 */ W32((u32)(r_eax+0x384u), 0x8u);
    /* 00446537: jmp 0x4464fb */ goto L_004464fb;
}

void f_00445f9e(void)
{
    FN_ENTER(0x00445f9e);
    /* 00445f9e: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445fa1: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00445fa4: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00445fa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445fa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445faa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445fab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445fac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00445fad: push 0x355 */ { u32 v = 0x355u; r_esp -= 4; W32(r_esp, v); }
    /* 00445fb2: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x445fb7u); f_008144b0();
    /* 00445fb7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445fba: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00445fbd: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445fc4: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445fc7: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 00445fce: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445fd1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00445fd3: jle 0x446539 */ if ((fZ||fS!=fO)) goto L_00446539;
L_00445fd9:; BB(0x00445fd9);
    /* 00445fd9: jmp 0x4464fb */ goto L_004464fb;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00445f9e); r_esp += 4; return;
L_00446539:; BB(0x00446539);
    /* 00446539: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 0044653f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00446541: je 0x44655d */ if (fZ) goto L_0044655d;
L_00446543:; BB(0x00446543);
    /* 00446543: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00446547: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044654c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00446550: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446553: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_0044655d:; BB(0x0044655d);
    /* 0044655d: movzx eax, word ptr [0x9a4dec] */ r_eax = (u32)R16((u32)(0x9a4decu));
    /* 00446564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446565: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x44656au); f_007b4d18();
    /* 0044656a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0044656d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00446572: je 0x446651 */ if (fZ) goto L_00446651;
L_00446578:; BB(0x00446578);
    /* 00446578: mov ecx, eax */ r_ecx = r_eax;
    /* 0044657a: call 0x44a2f8 */ r_esp -= 4; W32(r_esp, 0x44657fu); f_0044a2f8();
    /* 0044657f: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446582: mov dword ptr [ecx + 0x384], 7 */ W32((u32)(r_ecx+0x384u), 0x7u);
    /* 0044658c: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00446591: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 00446598: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x44659du); f_0052cac0();
    /* 0044659d: add dword ptr [ebp - 0x60], 0x300 */ { u32 ad = (u32)(r_ebp+0xffffffa0u);  u32 a = R32(ad); u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004465a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004465a6: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
L_004465a9:; BB(0x004465a9);
    /* 004465a9: mov eax, 1 */ r_eax = 0x1u;
    /* 004465ae: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
L_004465b1:; BB(0x004465b1);
    /* 004465b1: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 004465b4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 004465b7: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004465ba: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 004465bd: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 004465c0: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004465c2: movsx edx, word ptr [edx + 0x9a555c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x9a555cu));
    /* 004465c9: lea esi, [ecx + eax + 0x3fc] */ r_esi = (u32)(r_ecx+r_eax+0x3fcu);
    /* 004465d0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004465d2: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 004465d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004465d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004465d7: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x4465ddu); call_ind(t); }
    /* 004465dd: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
    /* 004465e4: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 004465e6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4465ebu); f_005caba4();
    /* 004465eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004465ec: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004465ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004465f1: je 0x446626 */ if (fZ) goto L_00446626;
L_004465f3:; BB(0x004465f3);
    /* 004465f3: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 004465fa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00446601: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 00446604: mov edi, dword ptr [ebp - 0x4c] */ r_edi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00446607: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0044660a: movsx esi, word ptr [edx + 0x344] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x344u));
    /* 00446611: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00446614: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00446615: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00446616: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446617: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446618: mov ecx, eax */ r_ecx = r_eax;
    /* 0044661a: call 0x44943c */ r_esp -= 4; W32(r_esp, 0x44661fu); f_0044943c();
    /* 0044661f: mov dword ptr [ebp - 0x1c], 0 */ W32((u32)(r_ebp+0xffffffe4u), 0x0u);
L_00446626:; BB(0x00446626);
    /* 00446626: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044662d: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00446630: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00446633: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00446636: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446639: jge 0x446663 */ if ((fS==fO)) goto L_00446663;
L_0044663b:; BB(0x0044663b);
    /* 0044663b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044663e: jl 0x4465a9 */ if ((fS!=fO)) goto L_004465a9;
L_00446644:; BB(0x00446644);
    /* 00446644: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00446649: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0044664c: jmp 0x4465b1 */ goto L_004465b1;
L_00446651:; BB(0x00446651);
    /* 00446651: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00446654: mov dword ptr [eax + 0x384], 8 */ W32((u32)(r_eax+0x384u), 0x8u);
    /* 0044665e: jmp 0x4464fb */ goto L_004464fb;
L_00446663:; BB(0x00446663);
    /* 00446663: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00446666: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00446668: push -0xa */ { u32 v = 0xfffffff6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044666a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044666b: push 0x347 */ { u32 v = 0x347u; r_esp -= 4; W32(r_esp, v); }
    /* 00446670: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x446675u); f_00814298();
    /* 00446675: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00446678: jmp 0x4464fb */ goto L_004464fb;
}

void f_00445fde(void)
{
    FN_ENTER(0x00445fde);
    /* 00445fde: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 00445fe1: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445fe4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00445fe6: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445fe9: push 0x566 */ { u32 v = 0x566u; r_esp -= 4; W32(r_esp, v); }
    /* 00445fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445fef: call 0x52cc54 */ r_esp -= 4; W32(r_esp, 0x445ff4u); f_0052cc54();
    /* 00445ff4: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00445ff7: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 00445ffa: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00445ffd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00446001: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00446002: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00446003: push 0x346 */ { u32 v = 0x346u; r_esp -= 4; W32(r_esp, v); }
    /* 00446008: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44600du); f_008144b0();
    /* 0044600d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00446010: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 00446015: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00446017: mov ecx, esi */ r_ecx = r_esi;
    /* 00446019: mov edi, dword ptr [ebp - 0x54] */ r_edi = R32((u32)(r_ebp+0xffffffacu));
    /* 0044601c: movsx eax, word ptr [edi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x344u));
    /* 00446023: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00446026: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00446028: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044602b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044602d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044602f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446031: jge 0x446046 */ if ((fS==fO)) goto L_00446046;
L_00446033:; BB(0x00446033);
    /* 00446033: mov eax, dword ptr [0xa44b68] */ r_eax = R32((u32)(0xa44b68u));
    /* 00446038: mov ecx, dword ptr [0xa44b7c] */ r_ecx = R32((u32)(0xa44b7cu));
    /* 0044603e: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00446041: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00446044: jmp 0x446057 */ goto L_00446057;
L_00446046:; BB(0x00446046);
    /* 00446046: mov eax, dword ptr [0xa44b68] */ r_eax = R32((u32)(0xa44b68u));
    /* 0044604b: mov ecx, dword ptr [0xa44b7c] */ r_ecx = R32((u32)(0xa44b7cu));
    /* 00446051: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446054: or dword ptr [ecx], 8 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00446057:; BB(0x00446057);
    /* 00446057: mov eax, edi */ r_eax = r_edi;
    /* 00446059: movsx ecx, word ptr [eax + 0x344] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00446060: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00446063: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00446065: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446067: jge 0x44607c */ if ((fS==fO)) goto L_0044607c;
L_00446069:; BB(0x00446069);
    /* 00446069: mov eax, dword ptr [0xa44b6c] */ r_eax = R32((u32)(0xa44b6cu));
    /* 0044606e: mov ecx, dword ptr [0xa44b80] */ r_ecx = R32((u32)(0xa44b80u));
    /* 00446074: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00446077: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0044607a: jmp 0x44608d */ goto L_0044608d;
L_0044607c:; BB(0x0044607c);
    /* 0044607c: mov eax, dword ptr [0xa44b6c] */ r_eax = R32((u32)(0xa44b6cu));
    /* 00446081: mov ecx, dword ptr [0xa44b80] */ r_ecx = R32((u32)(0xa44b80u));
    /* 00446087: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0044608a: or dword ptr [ecx], 8 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0044608d:; BB(0x0044608d);
    /* 0044608d: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00446090: movsx ecx, word ptr [eax + 0x344] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00446097: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0044609a: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044609c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044609e: jge 0x4460b3 */ if ((fS==fO)) goto L_004460b3;
L_004460a0:; BB(0x004460a0);
    /* 004460a0: mov eax, dword ptr [0xa44b70] */ r_eax = R32((u32)(0xa44b70u));
    /* 004460a5: mov ecx, dword ptr [0xa44b84] */ r_ecx = R32((u32)(0xa44b84u));
    /* 004460ab: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004460ae: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004460b1: jmp 0x4460c4 */ goto L_004460c4;
L_004460b3:; BB(0x004460b3);
    /* 004460b3: mov eax, dword ptr [0xa44b70] */ r_eax = R32((u32)(0xa44b70u));
    /* 004460b8: mov ecx, dword ptr [0xa44b84] */ r_ecx = R32((u32)(0xa44b84u));
    /* 004460be: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 004460c1: or dword ptr [ecx], 8 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_004460c4:; BB(0x004460c4);
    /* 004460c4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004460c7: movsx ecx, word ptr [eax + 0x344] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 004460ce: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 004460d1: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004460d3: jge 0x4460e8 */ if ((fS==fO)) goto L_004460e8;
L_004460d5:; BB(0x004460d5);
    /* 004460d5: mov eax, dword ptr [0xa44b74] */ r_eax = R32((u32)(0xa44b74u));
    /* 004460da: mov ecx, dword ptr [0xa44b88] */ r_ecx = R32((u32)(0xa44b88u));
    /* 004460e0: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004460e3: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004460e6: jmp 0x4460f9 */ goto L_004460f9;
L_004460e8:; BB(0x004460e8);
    /* 004460e8: mov eax, dword ptr [0xa44b74] */ r_eax = R32((u32)(0xa44b74u));
    /* 004460ed: mov ecx, dword ptr [0xa44b88] */ r_ecx = R32((u32)(0xa44b88u));
    /* 004460f3: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 004460f6: or dword ptr [ecx], 8 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_004460f9:; BB(0x004460f9);
    /* 004460f9: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004460fc: movsx ecx, word ptr [eax + 0x344] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00446103: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00446105: jge 0x44611a */ if ((fS==fO)) goto L_0044611a;
L_00446107:; BB(0x00446107);
    /* 00446107: mov eax, dword ptr [0xa44b78] */ r_eax = R32((u32)(0xa44b78u));
    /* 0044610c: mov edx, dword ptr [0xa44b8c] */ r_edx = R32((u32)(0xa44b8cu));
    /* 00446112: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00446115: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00446118: jmp 0x44612b */ goto L_0044612b;
L_0044611a:; BB(0x0044611a);
    /* 0044611a: mov eax, dword ptr [0xa44b78] */ r_eax = R32((u32)(0xa44b78u));
    /* 0044611f: mov edx, dword ptr [0xa44b8c] */ r_edx = R32((u32)(0xa44b8cu));
    /* 00446125: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00446128: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0044612b:; BB(0x0044612b);
    /* 0044612b: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 0044612e: fld dword ptr [0x8fe7b8] */ FPUSH(R_F32((u32)(0x8fe7b8u)));
    /* 00446134: fld dword ptr [0x9a5550] */ FPUSH(R_F32((u32)(0x9a5550u)));
    /* 0044613a: fld dword ptr [0x9a5544] */ FPUSH(R_F32((u32)(0x9a5544u)));
    /* 00446140: movsx ecx, word ptr [edx + 0x344] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x344u));
    /* 00446147: fld dword ptr [0x9a5554] */ FPUSH(R_F32((u32)(0x9a5554u)));
    /* 0044614d: fld dword ptr [0x9a5548] */ FPUSH(R_F32((u32)(0x9a5548u)));
    /* 00446153: fld dword ptr [0x9a554c] */ FPUSH(R_F32((u32)(0x9a554cu)));
    /* 00446159: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0044615f: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 00446165: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 0044616b: fild dword ptr [ebp - 0x88] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff78u)));
    /* 00446171: fdivr dword ptr [0x8fe7bc] */ ST(0) = R_F32((u32)(0x8fe7bcu)) / ST(0);
    /* 00446177: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00446179: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044617c: fadd dword ptr [0x8fe7c0] */ ST(0) = ST(0) + R_F32((u32)(0x8fe7c0u));
    /* 00446182: fcom st(6) */ fx_compare(ST(0), ST(6)); 
    /* 00446184: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00446186: mov word ptr [edx + 0x344], cx */ W16((u32)(r_edx+0x344u), (u16)r_ecx);
    /* 0044618d: movsx esi, cx */ r_esi = (u32)(i32)(i16)(u16)r_ecx;
    /* 00446190: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00446191: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00446193: jb 0x446197 */ if (fC) goto L_00446197;
L_00446195:; BB(0x00446195);
    /* 00446195: fst st(6) */ ST(6) = ST(0);
L_00446197:; BB(0x00446197);
    /* 00446197: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00446199: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0044619b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0044619d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0044619f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004461a1: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 004461a3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004461a5: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 004461a7: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 004461a9: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 004461ab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004461ad: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 004461af: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004461b1: fstp dword ptr [edx + 0x48c] */ W_F32((u32)(r_edx+0x48cu), ST(0)); FPOP();
    /* 004461b7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004461b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004461bb: fld dword ptr [0x9a5558] */ FPUSH(R_F32((u32)(0x9a5558u)));
    /* 004461c1: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004461c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004461c5: fstp dword ptr [edx + 0x490] */ W_F32((u32)(r_edx+0x490u), ST(0)); FPOP();
    /* 004461cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004461cd: fstp dword ptr [edx + 0x494] */ W_F32((u32)(r_edx+0x494u), ST(0)); FPOP();
    /* 004461d3: fild dword ptr [0x9a553c] */ FPUSH((long double)(i32)R32((u32)(0x9a553cu)));
    /* 004461d9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004461db: fild dword ptr [0x9a5540] */ FPUSH((long double)(i32)R32((u32)(0x9a5540u)));
    /* 004461e1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004461e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004461e5: fnstcw word ptr [ebp - 0x80] */ W16((u32)(r_ebp+0xffffff80u), fcw);
    /* 004461e8: movzx eax, word ptr [ebp - 0x80] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff80u));
    /* 004461ec: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004461f1: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004461f4: fldcw word ptr [ebp - 0x78] */ fcw = R16((u32)(r_ebp+0xffffff88u));
    /* 004461f7: fistp dword ptr [edx + 0x488] */ W32((u32)(r_edx+0x488u), (u32)fx_int32(ST(0))); FPOP();
    /* 004461fd: fldcw word ptr [ebp - 0x80] */ fcw = R16((u32)(r_ebp+0xffffff80u));
    /* 00446200: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00446202: jle 0x44667d */ if ((fZ||fS!=fO)) goto L_0044667d;
L_00446208:; BB(0x00446208);
    /* 00446208: jmp 0x4464fb */ goto L_004464fb;
L_004464fb:; BB(0x004464fb);
    /* 004464fb: mov edi, dword ptr [ebp - 0x68] */ r_edi = R32((u32)(r_ebp+0xffffff98u));
    /* 004464fe: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 00446501: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00446504: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044650b: mov esp, ebp */ r_esp = r_ebp;
    /* 0044650d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044650e: mov esp, ebx */ r_esp = r_ebx;
    /* 00446510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00446511: ret  */ FN_RET(0x00445fde); r_esp += 4; return;
L_0044667d:; BB(0x0044667d);
    /* 0044667d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00446684: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00446689: mov dword ptr [ebp - 0x24], 0x41f00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x41f00000u);
    /* 00446690: mov dword ptr [ebp - 0x20], 0x420c0000 */ W32((u32)(r_ebp+0xffffffe0u), 0x420c0000u);
    /* 00446697: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x44669cu); f_0082d990();
    /* 0044669c: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0044669f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4466a4u); f_0082d838();
    /* 004466a4: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004466a7: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004466aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004466ac: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4466b1u); f_0082d8bc();
    /* 004466b1: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 004466b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004466b5: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 004466b8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004466ba: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4466bfu); f_00830aa0();
    /* 004466bf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4466c4u); f_0082da80();
    /* 004466c4: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 004466c7: push 0x11f */ { u32 v = 0x11fu; r_esp -= 4; W32(r_esp, v); }
    /* 004466cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004466cd: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4466d2u); f_00509590();
    /* 004466d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004466d5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004466d8: mov dword ptr [edx + 0x384], 6 */ W32((u32)(r_edx+0x384u), 0x6u);
    /* 004466e2: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 004466e8: mov eax, 0xf */ r_eax = 0xfu;
    /* 004466ed: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 004466f4: jmp 0x4464fb */ goto L_004464fb;
}

