#include "protos.h"

void f_0076f000(void) /* sub_76F000 */
{
    FN_ENTER(0x0076f000);
    /* 0076f000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f001: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f002: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f003: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f004: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076f007: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076f009: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f00f: mov ecx, dword ptr [0xa9b12c] */ r_ecx = R32((u32)(0xa9b12cu));
    /* 0076f015: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x76f01au); f_00579de0();
    /* 0076f01a: mov esi, eax */ r_esi = r_eax;
    /* 0076f01c: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f022: mov ecx, dword ptr [0xa9b130] */ r_ecx = R32((u32)(0xa9b130u));
    /* 0076f028: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x76f02du); f_00579de0();
    /* 0076f02d: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f02f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076f034: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76f039u); f_0082d990();
    /* 0076f039: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0076f03c: mov ecx, edi */ r_ecx = r_edi;
    /* 0076f03e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76f043u); f_0082d838();
    /* 0076f043: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0076f046: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f048: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76f04du); f_0082d8bc();
    /* 0076f04d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f04f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f051: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f053: push dword ptr [ebp + 0x3c8] */ { u32 v = R32((u32)(r_ebp+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f059: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x76f05eu); f_00830b74();
    /* 0076f05e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076f061: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f064: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f066: mov edx, esi */ r_edx = r_esi;
    /* 0076f068: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x76f06du); f_0082f940();
    /* 0076f06d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0076f072: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x76f077u); f_0082eb80();
    /* 0076f077: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076f07c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76f081u); f_0082d990();
    /* 0076f081: mov ecx, edi */ r_ecx = r_edi;
    /* 0076f083: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76f088u); f_0082d838();
    /* 0076f088: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0076f08b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f08d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76f092u); f_0082d8bc();
    /* 0076f092: fld dword ptr [ebp + 0x3c8] */ FPUSH(R_F32((u32)(r_ebp+0x3c8u)));
    /* 0076f098: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076f09b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0076f0a3: fchs  */ ST(0) = -ST(0);
    /* 0076f0a5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0076f0a8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0076f0b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f0b2: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x76f0b7u); f_00830b74();
    /* 0076f0b7: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 0076f0bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f0bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f0be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f0c0: mov edx, ebx */ r_edx = r_ebx;
    /* 0076f0c2: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x76f0c7u); f_0082f940();
    /* 0076f0c7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0076f0cc: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x76f0d1u); f_0082eb80();
    /* 0076f0d1: mov ecx, dword ptr [ebp + 0x3dc] */ r_ecx = R32((u32)(r_ebp+0x3dcu));
    /* 0076f0d7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f0d9: je 0x76f0e9 */ if (fZ) goto L_0076f0e9;
L_0076f0db:; BB(0x0076f0db);
    /* 0076f0db: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076f0de: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0076f0e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f0e3: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0076f0e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f0e6: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x76f0e9u); call_ind(t); }
L_0076f0e9:; BB(0x0076f0e9);
    /* 0076f0e9: mov ecx, dword ptr [ebp + 0x3e0] */ r_ecx = R32((u32)(r_ebp+0x3e0u));
    /* 0076f0ef: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f0f1: je 0x76f0fe */ if (fZ) goto L_0076f0fe;
L_0076f0f3:; BB(0x0076f0f3);
    /* 0076f0f3: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0076f0f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f0f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f0f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076f0fb: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x76f0feu); call_ind(t); }
L_0076f0fe:; BB(0x0076f0fe);
    /* 0076f0fe: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076f101: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f102: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f103: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f104: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076f105: ret  */ FN_RET(0x0076f000); r_esp += 4; return;
}

void f_0076f108(void) /* sub_76F108 */
{
    FN_ENTER(0x0076f108);
    /* 0076f108: mov edx, dword ptr [ecx + 0x3e0] */ r_edx = R32((u32)(r_ecx+0x3e0u));
    /* 0076f10e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f110: je 0x76f129 */ if (fZ) goto L_0076f129;
L_0076f112:; BB(0x0076f112);
    /* 0076f112: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f116: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f11b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f11f: mov dword ptr [ecx + 0x3e0], 0 */ W32((u32)(r_ecx+0x3e0u), 0x0u);
L_0076f129:; BB(0x0076f129);
    /* 0076f129: mov edx, dword ptr [ecx + 0x3dc] */ r_edx = R32((u32)(r_ecx+0x3dcu));
    /* 0076f12f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f131: je 0x76f14a */ if (fZ) goto L_0076f14a;
L_0076f133:; BB(0x0076f133);
    /* 0076f133: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f137: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f13c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f140: mov dword ptr [ecx + 0x3dc], 0 */ W32((u32)(r_ecx+0x3dcu), 0x0u);
L_0076f14a:; BB(0x0076f14a);
    /* 0076f14a: ret  */ FN_RET(0x0076f108); r_esp += 4; return;
}

void f_0076f14c(void) /* sub_76F14C */
{
    FN_ENTER(0x0076f14c);
    /* 0076f14c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f14d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f14e: mov eax, ecx */ r_eax = r_ecx;
    /* 0076f150: lea edx, [eax + 0x3dc] */ r_edx = (u32)(r_eax+0x3dcu);
    /* 0076f156: add eax, 0x3e4 */ {  u32 a = r_eax; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076f15b: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f15d: mov esi, edx */ r_esi = r_edx;
L_0076f15f:; BB(0x0076f15f);
    /* 0076f15f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f161: push 0x80303030 */ { u32 v = 0x80303030u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f166: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x76f16bu); f_00578cc4();
    /* 0076f16b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076f16e: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0076f170: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076f173: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076f175: ja 0x76f15f */ if ((!fC&&!fZ)) goto L_0076f15f;
L_0076f177:; BB(0x0076f177);
    /* 0076f177: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f178: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f179: ret  */ FN_RET(0x0076f14c); r_esp += 4; return;
}

void f_0076f17c(void) /* sub_76F17C */
{
    FN_ENTER(0x0076f17c);
    /* 0076f17c: mov ecx, dword ptr [0xa9b130] */ r_ecx = R32((u32)(0xa9b130u));
    /* 0076f182: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f184: je 0x76f199 */ if (fZ) goto L_0076f199;
L_0076f186:; BB(0x0076f186);
    /* 0076f186: je 0x76f18f */ if (fZ) goto L_0076f18f;
L_0076f188:; BB(0x0076f188);
    /* 0076f188: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f18a: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x76f18fu); f_0045a950();
L_0076f18f:; BB(0x0076f18f);
    /* 0076f18f: mov dword ptr [0xa9b130], 0 */ W32((u32)(0xa9b130u), 0x0u);
L_0076f199:; BB(0x0076f199);
    /* 0076f199: mov ecx, dword ptr [0xa9b12c] */ r_ecx = R32((u32)(0xa9b12cu));
    /* 0076f19f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f1a1: je 0x76f1b6 */ if (fZ) goto L_0076f1b6;
L_0076f1a3:; BB(0x0076f1a3);
    /* 0076f1a3: je 0x76f1ac */ if (fZ) goto L_0076f1ac;
L_0076f1a5:; BB(0x0076f1a5);
    /* 0076f1a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1a7: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x76f1acu); f_0045a950();
L_0076f1ac:; BB(0x0076f1ac);
    /* 0076f1ac: mov dword ptr [0xa9b12c], 0 */ W32((u32)(0xa9b12cu), 0x0u);
L_0076f1b6:; BB(0x0076f1b6);
    /* 0076f1b6: ret  */ FN_RET(0x0076f17c); r_esp += 4; return;
}

void f_0076f1b8(void) /* sub_76F1B8 */
{
    FN_ENTER(0x0076f1b8);
    /* 0076f1b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076f1bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1bd: push 0x8f3f4e */ { u32 v = 0x8f3f4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076f1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076f1d0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076f1d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076f1d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076f1d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076f1dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076f1df: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1e1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0076f1e8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76f1edu); f_008581c5();
    /* 0076f1ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076f1ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0076f1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f1f3: je 0x76f309 */ if (fZ) goto L_0076f309;
L_0076f1f9:; BB(0x0076f1f9);
    /* 0076f1f9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0076f200: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076f207: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f20a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f20c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f211: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f216: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f21b: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x76f220u); f_005795a0();
    /* 0076f220: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f223: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0076f22a:; BB(0x0076f22a);
    /* 0076f22a: mov dword ptr [0xa9b12c], eax */ W32((u32)(0xa9b12cu), r_eax);
    /* 0076f22f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076f236: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0076f23d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f23f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76f244u); f_008581c5();
    /* 0076f244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076f245: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0076f248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f24a: je 0x76f302 */ if (fZ) goto L_0076f302;
L_0076f250:; BB(0x0076f250);
    /* 0076f250: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0076f257: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076f25e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f261: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f263: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f268: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f26d: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f272: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x76f277u); f_005795a0();
    /* 0076f277: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f27a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0076f281:; BB(0x0076f281);
    /* 0076f281: mov dword ptr [0xa9b130], eax */ W32((u32)(0xa9b130u), r_eax);
    /* 0076f286: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076f28d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x76f292u); f_0082fa9c();
    /* 0076f292: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f298: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f29a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76f29fu); f_005b8610();
    /* 0076f29f: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f2a1: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2a9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x76f2aeu); f_005b8638();
    /* 0076f2ae: mov ecx, dword ptr [0xa9b12c] */ r_ecx = R32((u32)(0xa9b12cu));
    /* 0076f2b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2ba: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x76f2bfu); f_00579a28();
    /* 0076f2bf: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f2c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76f2ccu); f_005b8610();
    /* 0076f2cc: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f2ce: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2d6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x76f2dbu); f_005b8638();
    /* 0076f2db: mov ecx, dword ptr [0xa9b130] */ r_ecx = R32((u32)(0xa9b130u));
    /* 0076f2e1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e7: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x76f2ecu); f_00579a28();
    /* 0076f2ec: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x76f2f1u); f_0082faac();
    /* 0076f2f1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076f2f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076f2f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076f2fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0076f300: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f301: ret  */ FN_RET(0x0076f1b8); r_esp += 4; return;
L_0076f302:; BB(0x0076f302);
    /* 0076f302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f304: jmp 0x76f281 */ goto L_0076f281;
L_0076f309:; BB(0x0076f309);
    /* 0076f309: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f30b: jmp 0x76f22a */ goto L_0076f22a;
}

void f_0076f1b9(void)
{
    FN_ENTER(0x0076f1b9);
    /* 0076f1b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076f1bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1bd: push 0x8f3f4e */ { u32 v = 0x8f3f4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076f1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076f1d0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076f1d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076f1d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076f1d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076f1dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076f1df: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f1e1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0076f1e8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76f1edu); f_008581c5();
    /* 0076f1ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076f1ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0076f1f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f1f3: je 0x76f309 */ if (fZ) goto L_0076f309;
L_0076f1f9:; BB(0x0076f1f9);
    /* 0076f1f9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0076f200: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076f207: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f20a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f20c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f211: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f216: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f21b: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x76f220u); f_005795a0();
    /* 0076f220: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f223: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0076f22a:; BB(0x0076f22a);
    /* 0076f22a: mov dword ptr [0xa9b12c], eax */ W32((u32)(0xa9b12cu), r_eax);
    /* 0076f22f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076f236: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0076f23d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f23f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76f244u); f_008581c5();
    /* 0076f244: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076f245: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0076f248: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f24a: je 0x76f302 */ if (fZ) goto L_0076f302;
L_0076f250:; BB(0x0076f250);
    /* 0076f250: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0076f257: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076f25e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f261: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f263: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f268: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f26d: push 0x41e80000 */ { u32 v = 0x41e80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f272: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x76f277u); f_005795a0();
    /* 0076f277: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076f27a: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0076f281:; BB(0x0076f281);
    /* 0076f281: mov dword ptr [0xa9b130], eax */ W32((u32)(0xa9b130u), r_eax);
    /* 0076f286: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076f28d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x76f292u); f_0082fa9c();
    /* 0076f292: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f298: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f29a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76f29fu); f_005b8610();
    /* 0076f29f: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f2a1: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f2a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2a9: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x76f2aeu); f_005b8638();
    /* 0076f2ae: mov ecx, dword ptr [0xa9b12c] */ r_ecx = R32((u32)(0xa9b12cu));
    /* 0076f2b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2b6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2ba: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x76f2bfu); f_00579a28();
    /* 0076f2bf: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f2c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76f2ccu); f_005b8610();
    /* 0076f2cc: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f2ce: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076f2d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2d6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x76f2dbu); f_005b8638();
    /* 0076f2db: mov ecx, dword ptr [0xa9b130] */ r_ecx = R32((u32)(0xa9b130u));
    /* 0076f2e1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e3: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f2e7: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x76f2ecu); f_00579a28();
    /* 0076f2ec: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x76f2f1u); f_0082faac();
    /* 0076f2f1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076f2f4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076f2f7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076f2fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0076f300: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f301: ret  */ FN_RET(0x0076f1b9); r_esp += 4; return;
L_0076f302:; BB(0x0076f302);
    /* 0076f302: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f304: jmp 0x76f281 */ goto L_0076f281;
L_0076f309:; BB(0x0076f309);
    /* 0076f309: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f30b: jmp 0x76f22a */ goto L_0076f22a;
}

void f_0076f310(void) /* sub_76F310 */
{
    FN_ENTER(0x0076f310);
    /* 0076f310: call 0x76df48 */ r_esp -= 4; W32(r_esp, 0x76f315u); f_0076df48();
    /* 0076f315: mov edx, 0xa9b140 */ r_edx = 0xa9b140u;
    /* 0076f31a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f31c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0076f31e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0076f321: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0076f324: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0076f327: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0076f32a: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0076f32d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0076f330: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0076f333: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0076f336: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0076f339: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0076f33c: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0076f33f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0076f342: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0076f345: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0076f348: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0076f34b: ret  */ FN_RET(0x0076f310); r_esp += 4; return;
}

void f_0076f34c(void) /* sub_76F34C */
{
    FN_ENTER(0x0076f34c);
    /* 0076f34c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f34d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f34f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0076f351:; BB(0x0076f351);
    /* 0076f351: mov edx, dword ptr [ebp*4 + 0xa9b140] */ r_edx = R32((u32)(r_ebp*4+0xa9b140u));
    /* 0076f358: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f35a: je 0x76f366 */ if (fZ) goto L_0076f366;
L_0076f35c:; BB(0x0076f35c);
    /* 0076f35c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076f35f: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076f362: jl 0x76f351 */ if ((fS!=fO)) goto L_0076f351;
L_0076f364:; BB(0x0076f364);
    /* 0076f364: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f365: ret  */ FN_RET(0x0076f34c); r_esp += 4; return;
L_0076f366:; BB(0x0076f366);
    /* 0076f366: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f367: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f36b: call 0x76df6c */ r_esp -= 4; W32(r_esp, 0x76f370u); f_0076df6c();
    /* 0076f370: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076f373: mov dword ptr [ebp*4 + 0xa9b140], eax */ W32((u32)(r_ebp*4+0xa9b140u), r_eax);
    /* 0076f37a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f37b: ret  */ FN_RET(0x0076f34c); r_esp += 4; return;
}

void f_0076f37c(void) /* sub_76F37C */
{
    FN_ENTER(0x0076f37c);
    /* 0076f37c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076f380: mov dword ptr [eax*4 + 0xa9b140], 0 */ W32((u32)(r_eax*4+0xa9b140u), 0x0u);
    /* 0076f38b: ret  */ FN_RET(0x0076f37c); r_esp += 4; return;
}

void f_0076f38c(void) /* sub_76F38C */
{
    FN_ENTER(0x0076f38c);
    /* 0076f38c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f38d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f38e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f38f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f390: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0076f394: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0076f399: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0076f39b: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0076f39f: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0076f3a3: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0076f3a7: movzx ebx, word ptr [esp + 0x24] */ r_ebx = (u32)R16((u32)(r_esp+0x24u));
    /* 0076f3ac: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076f3ae: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076f3b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f3b2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076f3b4: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f3b6: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0076f3bb: mul ebp */ { u64 t = (u64)r_eax * r_ebp; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0076f3bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f3be: mov ecx, dword ptr [0xa9b140] */ r_ecx = R32((u32)(0xa9b140u));
    /* 0076f3c4: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076f3c6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076f3c9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076f3cb: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0076f3cd: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0076f3d2: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0076f3d4: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076f3d6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076f3d9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076f3db: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076f3dd: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0076f3e2: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0076f3e4: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076f3e6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076f3e9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076f3eb: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0076f3ed: call 0x76e48c */ r_esp -= 4; W32(r_esp, 0x76f3f2u); f_0076e48c();
    /* 0076f3f2: mov ecx, dword ptr [0xa9b150] */ r_ecx = R32((u32)(0xa9b150u));
    /* 0076f3f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f3f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f3fa: call 0x76e48c */ r_esp -= 4; W32(r_esp, 0x76f3ffu); f_0076e48c();
    /* 0076f3ff: mov ecx, dword ptr [0xa9b160] */ r_ecx = R32((u32)(0xa9b160u));
    /* 0076f405: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f406: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f407: call 0x76e48c */ r_esp -= 4; W32(r_esp, 0x76f40cu); f_0076e48c();
    /* 0076f40c: mov ecx, dword ptr [0xa9b170] */ r_ecx = R32((u32)(0xa9b170u));
    /* 0076f412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f413: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f414: call 0x76e48c */ r_esp -= 4; W32(r_esp, 0x76f419u); f_0076e48c();
    /* 0076f419: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f41a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f41b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f41c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076f41d: ret  */ FN_RET(0x0076f38c); r_esp += 4; return;
}

void f_0076f420(void) /* sub_76F420 */
{
    FN_ENTER(0x0076f420);
    /* 0076f420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f421: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f422: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f423: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f424: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0076f428: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f42a: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0076f42e: je 0x76f45a */ if (fZ) goto L_0076f45a;
L_0076f430:; BB(0x0076f430);
    /* 0076f430: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0076f434: mov edx, 4 */ r_edx = 0x4u;
    /* 0076f439: mov ebp, eax */ r_ebp = r_eax;
    /* 0076f43b: mov ebx, edx */ r_ebx = r_edx;
    /* 0076f43d: mov esi, ecx */ r_esi = r_ecx;
L_0076f43f:; BB(0x0076f43f);
    /* 0076f43f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f443: mov ecx, dword ptr [ebx + 0xa9b140] */ r_ecx = R32((u32)(r_ebx+0xa9b140u));
    /* 0076f449: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f44a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f44b: call 0x76e5e8 */ r_esp -= 4; W32(r_esp, 0x76f450u); f_0076e5e8();
    /* 0076f450: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076f453: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076f456: jl 0x76f43f */ if ((fS!=fO)) goto L_0076f43f;
L_0076f458:; BB(0x0076f458);
    /* 0076f458: mov eax, ebp */ r_eax = r_ebp;
L_0076f45a:; BB(0x0076f45a);
    /* 0076f45a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0076f45e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f460: je 0x76f48e */ if (fZ) goto L_0076f48e;
L_0076f462:; BB(0x0076f462);
    /* 0076f462: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0076f466: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0076f46a: mov edx, 4 */ r_edx = 0x4u;
    /* 0076f46f: mov ebp, eax */ r_ebp = r_eax;
    /* 0076f471: mov ebx, edx */ r_ebx = r_edx;
L_0076f473:; BB(0x0076f473);
    /* 0076f473: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f477: mov ecx, dword ptr [ebx + 0xa9b150] */ r_ecx = R32((u32)(r_ebx+0xa9b150u));
    /* 0076f47d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f47e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f47f: call 0x76e5e8 */ r_esp -= 4; W32(r_esp, 0x76f484u); f_0076e5e8();
    /* 0076f484: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076f487: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076f48a: jl 0x76f473 */ if ((fS!=fO)) goto L_0076f473;
L_0076f48c:; BB(0x0076f48c);
    /* 0076f48c: mov eax, ebp */ r_eax = r_ebp;
L_0076f48e:; BB(0x0076f48e);
    /* 0076f48e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0076f492: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f494: je 0x76f4c2 */ if (fZ) goto L_0076f4c2;
L_0076f496:; BB(0x0076f496);
    /* 0076f496: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0076f49a: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0076f49e: mov edx, 4 */ r_edx = 0x4u;
    /* 0076f4a3: mov ebp, eax */ r_ebp = r_eax;
    /* 0076f4a5: mov ebx, edx */ r_ebx = r_edx;
L_0076f4a7:; BB(0x0076f4a7);
    /* 0076f4a7: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f4ab: mov ecx, dword ptr [ebx + 0xa9b160] */ r_ecx = R32((u32)(r_ebx+0xa9b160u));
    /* 0076f4b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f4b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f4b3: call 0x76e5e8 */ r_esp -= 4; W32(r_esp, 0x76f4b8u); f_0076e5e8();
    /* 0076f4b8: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076f4bb: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076f4be: jl 0x76f4a7 */ if ((fS!=fO)) goto L_0076f4a7;
L_0076f4c0:; BB(0x0076f4c0);
    /* 0076f4c0: mov eax, ebp */ r_eax = r_ebp;
L_0076f4c2:; BB(0x0076f4c2);
    /* 0076f4c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f4c4: je 0x76f4ec */ if (fZ) goto L_0076f4ec;
L_0076f4c6:; BB(0x0076f4c6);
    /* 0076f4c6: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0076f4ca: mov edx, 4 */ r_edx = 0x4u;
    /* 0076f4cf: mov esi, eax */ r_esi = r_eax;
    /* 0076f4d1: mov ebx, edx */ r_ebx = r_edx;
L_0076f4d3:; BB(0x0076f4d3);
    /* 0076f4d3: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f4d7: mov ecx, dword ptr [ebx + 0xa9b170] */ r_ecx = R32((u32)(r_ebx+0xa9b170u));
    /* 0076f4dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f4de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f4df: call 0x76e5e8 */ r_esp -= 4; W32(r_esp, 0x76f4e4u); f_0076e5e8();
    /* 0076f4e4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076f4e7: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076f4ea: jl 0x76f4d3 */ if ((fS!=fO)) goto L_0076f4d3;
L_0076f4ec:; BB(0x0076f4ec);
    /* 0076f4ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f4ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f4ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f4ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076f4f0: ret  */ FN_RET(0x0076f420); r_esp += 4; return;
}

void f_0076f4f4(void) /* sub_76F4F4 */
{
    FN_ENTER(0x0076f4f4);
    /* 0076f4f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f4f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f4f7: mov ebx, eax */ r_ebx = r_eax;
L_0076f4f9:; BB(0x0076f4f9);
    /* 0076f4f9: mov ecx, dword ptr [ebx + 0xa9b140] */ r_ecx = R32((u32)(r_ebx+0xa9b140u));
    /* 0076f4ff: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076f502: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f504: je 0x76f50b */ if (fZ) goto L_0076f50b;
L_0076f506:; BB(0x0076f506);
    /* 0076f506: call 0x76e74c */ r_esp -= 4; W32(r_esp, 0x76f50bu); f_0076e74c();
L_0076f50b:; BB(0x0076f50b);
    /* 0076f50b: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076f50e: jl 0x76f4f9 */ if ((fS!=fO)) goto L_0076f4f9;
L_0076f510:; BB(0x0076f510);
    /* 0076f510: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f511: ret  */ FN_RET(0x0076f4f4); r_esp += 4; return;
}

void f_0076f514(void) /* sub_76F514 */
{
    FN_ENTER(0x0076f514);
    /* 0076f514: mov edx, dword ptr [0xa9b140] */ r_edx = R32((u32)(0xa9b140u));
    /* 0076f51a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f51e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f523: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f527: mov eax, dword ptr [0xa9b150] */ r_eax = R32((u32)(0xa9b150u));
    /* 0076f52c: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 0076f530: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0076f536: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
    /* 0076f53a: mov edx, dword ptr [0xa9b160] */ r_edx = R32((u32)(0xa9b160u));
    /* 0076f540: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f544: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f549: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f54d: mov edx, dword ptr [0xa9b170] */ r_edx = R32((u32)(0xa9b170u));
    /* 0076f553: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f557: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f55c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f562: mov dword ptr [0xa9b140], eax */ W32((u32)(0xa9b140u), r_eax);
    /* 0076f567: mov dword ptr [0xa9b150], eax */ W32((u32)(0xa9b150u), r_eax);
    /* 0076f56c: mov dword ptr [0xa9b160], eax */ W32((u32)(0xa9b160u), r_eax);
    /* 0076f571: mov dword ptr [0xa9b170], eax */ W32((u32)(0xa9b170u), r_eax);
    /* 0076f576: ret  */ FN_RET(0x0076f514); r_esp += 4; return;
}

void f_0076f578(void) /* sub_76F578 */
{
    FN_ENTER(0x0076f578);
    /* 0076f578: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0076f57c: mov eax, 0x80 */ r_eax = 0x80u;
    /* 0076f581: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0076f583: or dword ptr [0xa9b070], eax */ { u32 ad = (u32)(0xa9b070u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f589: ret  */ FN_RET(0x0076f578); r_esp += 4; return;
}

void f_0076f58c(void) /* sub_76F58C */
{
    FN_ENTER(0x0076f58c);
    /* 0076f58c: mov edx, 0xa9b140 */ r_edx = 0xa9b140u;
    /* 0076f591: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076f593: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0076f595: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0076f598: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0076f59b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0076f59e: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0076f5a1: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0076f5a4: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0076f5a7: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0076f5aa: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0076f5ad: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0076f5b0: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0076f5b3: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0076f5b6: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0076f5b9: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0076f5bc: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 0076f5bf: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 0076f5c2: call 0x76eae8 */ r_esp -= 4; W32(r_esp, 0x76f5c7u); f_0076eae8();
    /* 0076f5c7: ret  */ FN_RET(0x0076f58c); r_esp += 4; return;
}

void f_0076f5c8(void) /* sub_76F5C8 */
{
    FN_ENTER(0x0076f5c8);
    /* 0076f5c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f5c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076f5cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076f5cd: call 0x76f5ec */ r_esp -= 4; W32(r_esp, 0x76f5d2u); f_0076f5ec();
    /* 0076f5d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076f5d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f5d8: jne 0x76f5de */ if (!fZ) goto L_0076f5de;
L_0076f5da:; BB(0x0076f5da);
    /* 0076f5da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f5db: ret 4 */ FN_RET(0x0076f5c8); r_esp += 8; return;
L_0076f5de:; BB(0x0076f5de);
    /* 0076f5de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f5df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76f5e4u); f_005c2f74();
    /* 0076f5e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076f5e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f5e6: ret 4 */ FN_RET(0x0076f5c8); r_esp += 8; return;
}

void f_0076f5ec(void) /* sub_76F5EC */
{
    FN_ENTER(0x0076f5ec);
    /* 0076f5ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f5ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0076f5ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076f5f1: push 0x8f3f68 */ { u32 v = 0x8f3f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f5f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076f5fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f5fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076f604: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076f607: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076f60a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076f60d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076f610: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076f613: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076f616: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076f619: mov dword ptr [ecx], 0xb43f40 */ W32((u32)(r_ecx), 0xb43f40u);
    /* 0076f61f: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 0076f622: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0076f628: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f62a: je 0x76f649 */ if (fZ) goto L_0076f649;
L_0076f62c:; BB(0x0076f62c);
    /* 0076f62c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076f62f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f633: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f638: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f63c: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 0076f63f: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
L_0076f649:; BB(0x0076f649);
    /* 0076f649: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 0076f64f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f651: je 0x76f66d */ if (fZ) goto L_0076f66d;
L_0076f653:; BB(0x0076f653);
    /* 0076f653: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076f656: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f65a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f65f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f663: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
L_0076f66d:; BB(0x0076f66d);
    /* 0076f66d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076f674: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x76f679u); f_007ba1f0();
    /* 0076f679: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076f67c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076f683: mov esp, ebp */ r_esp = r_ebp;
    /* 0076f685: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f686: ret  */ FN_RET(0x0076f5ec); r_esp += 4; return;
}

void f_0076f688(void) /* sub_76F688 */
{
    FN_ENTER(0x0076f688);
    /* 0076f688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f689: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076f68b: mov eax, dword ptr [ebp + 0xc0] */ r_eax = R32((u32)(r_ebp+0xc0u));
    /* 0076f691: mov edx, dword ptr [eax + 0x9c] */ r_edx = R32((u32)(r_eax+0x9cu));
    /* 0076f697: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076f69a: je 0x76f6a3 */ if (fZ) goto L_0076f6a3;
L_0076f69c:; BB(0x0076f69c);
    /* 0076f69c: mov eax, 1 */ r_eax = 0x1u;
    /* 0076f6a1: jmp 0x76f6a5 */ goto L_0076f6a5;
L_0076f6a3:; BB(0x0076f6a3);
    /* 0076f6a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076f6a5:; BB(0x0076f6a5);
    /* 0076f6a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f6a7: je 0x76f6d2 */ if (fZ) goto L_0076f6d2;
L_0076f6a9:; BB(0x0076f6a9);
    /* 0076f6a9: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 0076f6af: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076f6b2: jge 0x76f6d2 */ if ((fS==fO)) goto L_0076f6d2;
L_0076f6b4:; BB(0x0076f6b4);
    /* 0076f6b4: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 0076f6ba: mov dword ptr [ebp + 0x90], 2 */ W32((u32)(r_ebp+0x90u), 0x2u);
    /* 0076f6c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f6c6: je 0x76f6d2 */ if (fZ) goto L_0076f6d2;
L_0076f6c8:; BB(0x0076f6c8);
    /* 0076f6c8: mov eax, dword ptr [ebp + 0xbc] */ r_eax = R32((u32)(r_ebp+0xbcu));
    /* 0076f6ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076f6d0: je 0x76f6d4 */ if (fZ) goto L_0076f6d4;
L_0076f6d2:; BB(0x0076f6d2);
    /* 0076f6d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f6d3: ret  */ FN_RET(0x0076f688); r_esp += 4; return;
L_0076f6d4:; BB(0x0076f6d4);
    /* 0076f6d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076f6d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f6d7: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0076f6da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f6db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f6dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f6dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f6de: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x76f6e3u); f_00661448();
    /* 0076f6e3: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 0076f6e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f6ea: ret  */ FN_RET(0x0076f688); r_esp += 4; return;
}

void f_0076f6ec(void)
{
    FN_ENTER(0x0076f6ec);
    /* 0076f6ec: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 0076f6f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076f6f4: je 0x76f76c */ if (fZ) goto L_0076f76c;
L_0076f6f6:; BB(0x0076f6f6);
    /* 0076f6f6: fld dword ptr [0x977d0c] */ FPUSH(R_F32((u32)(0x977d0cu)));
    /* 0076f6fc: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 0076f702: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0076f704: fcom dword ptr [0x977d08] */ fx_compare(ST(0), R_F32((u32)(0x977d08u))); 
    /* 0076f70a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076f70c: fld dword ptr [ecx + 0x9c] */ FPUSH(R_F32((u32)(r_ecx+0x9cu)));
    /* 0076f712: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0076f714: fld dword ptr [ecx + 0xa0] */ FPUSH(R_F32((u32)(r_ecx+0xa0u)));
    /* 0076f71a: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0076f71c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076f71d: jb 0x76f754 */ if (fC) goto L_0076f754;
L_0076f71f:; BB(0x0076f71f);
    /* 0076f71f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0076f721: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0076f723: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076f725: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0076f72a: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 0076f730: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0076f735: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 0076f73b: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0076f740: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 0076f746: xor edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076f749: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 0076f74f: jmp 0x76f7dd */ f_0076f7dd(); return;
L_0076f754:; BB(0x0076f754);
    /* 0076f754: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076f756: fstp dword ptr [ecx + 0xa0] */ W_F32((u32)(r_ecx+0xa0u), ST(0)); FPOP();
    /* 0076f75c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076f75e: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 0076f764: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 0076f76a: jmp 0x76f7dd */ f_0076f7dd(); return;
L_0076f76c:; BB(0x0076f76c);
    /* 0076f76c: fld dword ptr [0x977d14] */ FPUSH(R_F32((u32)(0x977d14u)));
    /* 0076f772: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 0076f778: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0076f77a: fcom dword ptr [0x977d10] */ fx_compare(ST(0), R_F32((u32)(0x977d10u))); 
    /* 0076f780: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076f782: fld dword ptr [ecx + 0x9c] */ FPUSH(R_F32((u32)(r_ecx+0x9cu)));
    /* 0076f788: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0076f78a: fld dword ptr [ecx + 0xa0] */ FPUSH(R_F32((u32)(r_ecx+0xa0u)));
    /* 0076f790: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0076f792: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076f793: ja 0x76f7c7 */ if ((!fC&&!fZ)) goto L_0076f7c7;
L_0076f795:; BB(0x0076f795);
    /* 0076f795: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0076f797: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0076f799: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076f79b: mov eax, 0x3e4ccccd */ r_eax = 0x3e4ccccdu;
    /* 0076f7a0: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 0076f7a6: mov eax, 0x3e4ccccd */ r_eax = 0x3e4ccccdu;
    /* 0076f7ab: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 0076f7b1: mov eax, 0x3e4ccccd */ r_eax = 0x3e4ccccdu;
    /* 0076f7b6: mov dword ptr [ecx + 0xa0], eax */ W32((u32)(r_ecx+0xa0u), r_eax);
    /* 0076f7bc: xor edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076f7bf: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 0076f7c5: jmp 0x76f7dd */ f_0076f7dd(); return;
L_0076f7c7:; BB(0x0076f7c7);
    /* 0076f7c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076f7c9: fstp dword ptr [ecx + 0xa0] */ W_F32((u32)(r_ecx+0xa0u), ST(0)); FPOP();
    /* 0076f7cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076f7d1: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 0076f7d7: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 0076f7dd: fld dword ptr [ecx + 0xa8] */ FPUSH(R_F32((u32)(r_ecx+0xa8u)));
    /* 0076f7e3: fadd dword ptr [ecx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb0u));
    /* 0076f7e9: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 0076f7ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076f7f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076f7f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076f7f4: ja 0x76f7ff */ if ((!fC&&!fZ)) goto L_0076f7ff;
L_0076f7f6:; BB(0x0076f7f6);
    /* 0076f7f6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0076f7f8: fstp dword ptr [ecx + 0xa8] */ W_F32((u32)(r_ecx+0xa8u), ST(0)); FPOP();
    /* 0076f7fe: ret  */ FN_RET(0x0076f6ec); r_esp += 4; return;
L_0076f7ff:; BB(0x0076f7ff);
    /* 0076f7ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076f801: fstp dword ptr [ecx + 0xa8] */ W_F32((u32)(r_ecx+0xa8u), ST(0)); FPOP();
    /* 0076f807: ret  */ FN_RET(0x0076f6ec); r_esp += 4; return;
}

void f_0076f808(void) /* sub_76F808 */
{
    FN_ENTER(0x0076f808);
    /* 0076f808: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f809: mov esi, ecx */ r_esi = r_ecx;
    /* 0076f80b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0076f80e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76f813u); f_00829cc8();
    /* 0076f813: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f816: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x76f81bu); f_0082e1e8();
    /* 0076f81b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076f81c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f81d: ret  */ FN_RET(0x0076f808); r_esp += 4; return;
}

void f_0076f820(void) /* sub_76F820 */
{
    FN_ENTER(0x0076f820);
    /* 0076f820: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f821: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f822: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f823: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076f826: mov esi, ecx */ r_esi = r_ecx;
    /* 0076f828: mov ecx, dword ptr [0xa9b180] */ r_ecx = R32((u32)(0xa9b180u));
    /* 0076f82e: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0076f831: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
    /* 0076f834: fld dword ptr [esi + 0xa8] */ FPUSH(R_F32((u32)(r_esi+0xa8u)));
    /* 0076f83a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0076f83d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0076f841: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f846: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076f84a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0076f84e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076f852: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0076f855: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0076f859: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76f85eu); f_00829cc8();
    /* 0076f85e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0076f861: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 0076f864: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f865: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f868: call 0x81a440 */ r_esp -= 4; W32(r_esp, 0x76f86du); f_0081a440();
    /* 0076f86d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f86e: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0076f871: movsx edx, word ptr [esi + 0xb4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb4u));
    /* 0076f878: movsx eax, word ptr [esi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 0076f87f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076f880: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f881: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f884: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x76f889u); f_0081a2b0();
    /* 0076f889: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f88c: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x76f891u); f_0082e6b0();
    /* 0076f891: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076f894: mov ebx, dword ptr [esi + 0x34] */ r_ebx = R32((u32)(r_esi+0x34u));
    /* 0076f897: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0076f89a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76f89fu); f_00829cc8();
    /* 0076f89f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x76f8a4u); f_0082dbac();
    /* 0076f8a4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0076f8a9: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0076f8ae: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f8b1: add esi, 0x94 */ {  u32 a = r_esi; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076f8b7: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0076f8bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f8bd: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x76f8c2u); f_0082d710();
    /* 0076f8c2: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076f8c5: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x76f8cau); f_0082e6b0();
    /* 0076f8ca: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076f8cf: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x76f8d4u); f_0082d710();
    /* 0076f8d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076f8d7: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0076f8dc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0076f8e1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x76f8e6u); f_0082dab0();
    /* 0076f8e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076f8e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076f8ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076f8eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f8ec: ret  */ FN_RET(0x0076f820); r_esp += 4; return;
}

void f_0076f8f0(void) /* sub_76F8F0 */
{
    FN_ENTER(0x0076f8f0);
    /* 0076f8f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f8f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f8f2: mov edi, ecx */ r_edi = r_ecx;
    /* 0076f8f4: mov ecx, dword ptr [0xa9b184] */ r_ecx = R32((u32)(0xa9b184u));
    /* 0076f8fa: mov edx, dword ptr [edi + 0x90] */ r_edx = R32((u32)(r_edi+0x90u));
    /* 0076f900: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076f903: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076f905: mov esi, dword ptr [eax + edx*8 + 0x9f7b8c] */ r_esi = R32((u32)(r_eax+r_edx*8+0x9f7b8cu));
    /* 0076f90c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f90d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76f912u); f_005b8610();
    /* 0076f912: mov ecx, dword ptr [0xa9b184] */ r_ecx = R32((u32)(0xa9b184u));
    /* 0076f918: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f919: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 0076f91c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x76f921u); f_005b8624();
    /* 0076f921: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0076f924: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076f925: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076f926: ret  */ FN_RET(0x0076f8f0); r_esp += 4; return;
}

void f_0076f928(void) /* sub_76F928 */
{
    FN_ENTER(0x0076f928);
    /* 0076f928: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f929: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076f92a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076f92b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076f92c: mov edi, ecx */ r_edi = r_ecx;
    /* 0076f92e: mov ebp, dword ptr [edi + 0x90] */ r_ebp = R32((u32)(r_edi+0x90u));
    /* 0076f934: lea edx, [edi + 0xbc] */ r_edx = (u32)(r_edi+0xbcu);
    /* 0076f93a: lea eax, [edi + 0xc4] */ r_eax = (u32)(r_edi+0xc4u);
    /* 0076f940: mov ebx, eax */ r_ebx = r_eax;
    /* 0076f942: mov esi, edx */ r_esi = r_edx;
L_0076f944:; BB(0x0076f944);
    /* 0076f944: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0076f946: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f948: je 0x76f959 */ if (fZ) goto L_0076f959;
L_0076f94a:; BB(0x0076f94a);
    /* 0076f94a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x76f94fu); f_008173b4();
    /* 0076f94f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f951: jne 0x76f959 */ if (!fZ) goto L_0076f959;
L_0076f953:; BB(0x0076f953);
    /* 0076f953: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0076f959:; BB(0x0076f959);
    /* 0076f959: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076f95c: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0076f95e: ja 0x76f944 */ if ((!fC&&!fZ)) goto L_0076f944;
L_0076f960:; BB(0x0076f960);
    /* 0076f960: mov edx, dword ptr [0xa9b070] */ r_edx = R32((u32)(0xa9b070u));
    /* 0076f966: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076f969: je 0x76f972 */ if (fZ) goto L_0076f972;
L_0076f96b:; BB(0x0076f96b);
    /* 0076f96b: mov eax, 1 */ r_eax = 0x1u;
    /* 0076f970: jmp 0x76f974 */ goto L_0076f974;
L_0076f972:; BB(0x0076f972);
    /* 0076f972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076f974:; BB(0x0076f974);
    /* 0076f974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f976: je 0x76fa00 */ if (fZ) goto L_0076fa00;
L_0076f97c:; BB(0x0076f97c);
    /* 0076f97c: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076f982: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076f985: jge 0x76fabc */ if ((fS==fO)) goto L_0076fabc;
L_0076f98b:; BB(0x0076f98b);
    /* 0076f98b: mov edx, dword ptr [0xa9b068] */ r_edx = R32((u32)(0xa9b068u));
    /* 0076f991: mov dword ptr [edi + 0x90], 3 */ W32((u32)(r_edi+0x90u), 0x3u);
    /* 0076f99b: mov eax, 3 */ r_eax = 0x3u;
    /* 0076f9a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f9a2: je 0x76fabc */ if (fZ) goto L_0076fabc;
L_0076f9a8:; BB(0x0076f9a8);
    /* 0076f9a8: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 0076f9ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f9b0: je 0x76f9c9 */ if (fZ) goto L_0076f9c9;
L_0076f9b2:; BB(0x0076f9b2);
    /* 0076f9b2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f9b6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f9bb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f9bf: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
L_0076f9c9:; BB(0x0076f9c9);
    /* 0076f9c9: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0076f9cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076f9d1: je 0x76f9f5 */ if (fZ) goto L_0076f9f5;
L_0076f9d3:; BB(0x0076f9d3);
    /* 0076f9d3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076f9d7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076f9dc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076f9e0: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076f9e6: mov dword ptr [edi + 0xbc], 0 */ W32((u32)(r_edi+0xbcu), 0x0u);
    /* 0076f9f0: jmp 0x76fabc */ goto L_0076fabc;
L_0076f9f5:; BB(0x0076f9f5);
    /* 0076f9f5: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076f9fb: jmp 0x76fabc */ goto L_0076fabc;
L_0076fa00:; BB(0x0076fa00);
    /* 0076fa00: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076fa03: je 0x76fa0c */ if (fZ) goto L_0076fa0c;
L_0076fa05:; BB(0x0076fa05);
    /* 0076fa05: mov eax, 1 */ r_eax = 0x1u;
    /* 0076fa0a: jmp 0x76fa0e */ goto L_0076fa0e;
L_0076fa0c:; BB(0x0076fa0c);
    /* 0076fa0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076fa0e:; BB(0x0076fa0e);
    /* 0076fa0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fa10: je 0x76fa4c */ if (fZ) goto L_0076fa4c;
L_0076fa12:; BB(0x0076fa12);
    /* 0076fa12: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076fa18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076fa1a: jg 0x76fabc */ if ((!fZ&&fS==fO)) goto L_0076fabc;
L_0076fa20:; BB(0x0076fa20);
    /* 0076fa20: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 0076fa26: mov dword ptr [edi + 0x90], 1 */ W32((u32)(r_edi+0x90u), 0x1u);
    /* 0076fa30: mov eax, 1 */ r_eax = 0x1u;
    /* 0076fa35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fa37: je 0x76fabc */ if (fZ) goto L_0076fabc;
L_0076fa3d:; BB(0x0076fa3d);
    /* 0076fa3d: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 0076fa43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fa45: jne 0x76fabc */ if (!fZ) goto L_0076fabc;
L_0076fa47:; BB(0x0076fa47);
    /* 0076fa47: jmp 0x76fae6 */ goto L_0076fae6;
L_0076fa4c:; BB(0x0076fa4c);
    /* 0076fa4c: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076fa52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076fa54: jge 0x76fabc */ if ((fS==fO)) goto L_0076fabc;
L_0076fa56:; BB(0x0076fa56);
    /* 0076fa56: mov edx, dword ptr [0xa9b068] */ r_edx = R32((u32)(0xa9b068u));
    /* 0076fa5c: mov dword ptr [edi + 0x90], 0 */ W32((u32)(r_edi+0x90u), 0x0u);
    /* 0076fa66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076fa68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fa6a: je 0x76fabc */ if (fZ) goto L_0076fabc;
L_0076fa6c:; BB(0x0076fa6c);
    /* 0076fa6c: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 0076fa72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fa74: je 0x76fa8d */ if (fZ) goto L_0076fa8d;
L_0076fa76:; BB(0x0076fa76);
    /* 0076fa76: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076fa7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076fa7f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076fa83: mov dword ptr [edi + 0xc0], 0 */ W32((u32)(r_edi+0xc0u), 0x0u);
L_0076fa8d:; BB(0x0076fa8d);
    /* 0076fa8d: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 0076fa93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fa95: je 0x76fab6 */ if (fZ) goto L_0076fab6;
L_0076fa97:; BB(0x0076fa97);
    /* 0076fa97: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076fa9b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076faa0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076faa4: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076faaa: mov dword ptr [edi + 0xbc], 0 */ W32((u32)(r_edi+0xbcu), 0x0u);
    /* 0076fab4: jmp 0x76fabc */ goto L_0076fabc;
L_0076fab6:; BB(0x0076fab6);
    /* 0076fab6: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
L_0076fabc:; BB(0x0076fabc);
    /* 0076fabc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0076fabf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076fac1: mov edx, dword ptr [edx + eax*8 + 0x9f7b84] */ r_edx = R32((u32)(r_edx+r_eax*8+0x9f7b84u));
    /* 0076fac8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076faca: je 0x76fad6 */ if (fZ) goto L_0076fad6;
L_0076facc:; BB(0x0076facc);
    /* 0076facc: mov ecx, edi */ r_ecx = r_edi;
    /* 0076face: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x76fad0u); call_ind(t); }
    /* 0076fad0: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
L_0076fad6:; BB(0x0076fad6);
    /* 0076fad6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076fad8: je 0x76fae1 */ if (fZ) goto L_0076fae1;
L_0076fada:; BB(0x0076fada);
    /* 0076fada: mov ecx, edi */ r_ecx = r_edi;
    /* 0076fadc: call 0x76f8f0 */ r_esp -= 4; W32(r_esp, 0x76fae1u); f_0076f8f0();
L_0076fae1:; BB(0x0076fae1);
    /* 0076fae1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076fae2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076fae3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076fae4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076fae5: ret  */ FN_RET(0x0076f928); r_esp += 4; return;
L_0076fae6:; BB(0x0076fae6);
    /* 0076fae6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fae8: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0076faeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076faec: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0076faee: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0076faf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076faf1: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x76faf6u); f_00661448();
    /* 0076faf6: mov dword ptr [edi + 0xc0], eax */ W32((u32)(r_edi+0xc0u), r_eax);
    /* 0076fafc: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0076fb02: jmp 0x76fabc */ goto L_0076fabc;
}

void f_0076fb04(void) /* sub_76FB04 */
{
    FN_ENTER(0x0076fb04);
    /* 0076fb04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076fb05: mov esi, ecx */ r_esi = r_ecx;
    /* 0076fb07: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76fb0cu); f_0082d7b0();
    /* 0076fb0c: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0076fb0f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76fb14u); f_0082d838();
    /* 0076fb14: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 0076fb1a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076fb1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076fb1f: mov eax, dword ptr [eax + edx*8 + 0x9f7b88] */ r_eax = R32((u32)(r_eax+r_edx*8+0x9f7b88u));
    /* 0076fb26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fb28: je 0x76fb2e */ if (fZ) goto L_0076fb2e;
L_0076fb2a:; BB(0x0076fb2a);
    /* 0076fb2a: mov ecx, esi */ r_ecx = r_esi;
    /* 0076fb2c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x76fb2eu); call_ind(t); }
L_0076fb2e:; BB(0x0076fb2e);
    /* 0076fb2e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76fb33u); f_0082da80();
    /* 0076fb33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076fb34: ret  */ FN_RET(0x0076fb04); r_esp += 4; return;
}

void f_0076fb38(void) /* sub_76FB38 */
{
    FN_ENTER(0x0076fb38);
    /* 0076fb38: call 0x76fb5c */ r_esp -= 4; W32(r_esp, 0x76fb3du); f_0076fb5c();
    /* 0076fb3d: mov ecx, dword ptr [0xa9b184] */ r_ecx = R32((u32)(0xa9b184u));
    /* 0076fb43: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076fb45: je 0x76fb5a */ if (fZ) goto L_0076fb5a;
L_0076fb47:; BB(0x0076fb47);
    /* 0076fb47: je 0x76fb50 */ if (fZ) goto L_0076fb50;
L_0076fb49:; BB(0x0076fb49);
    /* 0076fb49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fb4b: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76fb50u); f_004066a8();
L_0076fb50:; BB(0x0076fb50);
    /* 0076fb50: mov dword ptr [0xa9b184], 0 */ W32((u32)(0xa9b184u), 0x0u);
L_0076fb5a:; BB(0x0076fb5a);
    /* 0076fb5a: ret  */ FN_RET(0x0076fb38); r_esp += 4; return;
}

void f_0076fb5c(void) /* sub_76FB5C */
{
    FN_ENTER(0x0076fb5c);
    /* 0076fb5c: push dword ptr [0xa9b180] */ { u32 v = R32((u32)(0xa9b180u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076fb62: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x76fb67u); f_00800b5c();
    /* 0076fb67: mov dword ptr [0xa9b180], 0 */ W32((u32)(0xa9b180u), 0x0u);
    /* 0076fb71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076fb72: ret  */ FN_RET(0x0076fb5c); r_esp += 4; return;
}

void f_0076fb74(void)
{
    FN_ENTER(0x0076fb74);
    /* 0076fb74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076fb75: mov ebp, esp */ r_ebp = r_esp;
    /* 0076fb77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076fb79: push 0x8f3f9e */ { u32 v = 0x8f3f9eu; r_esp -= 4; W32(r_esp, v); }
    /* 0076fb7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076fb84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fb85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076fb8c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076fb8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076fb92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0076fb95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0076fb98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076fb9b: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fba0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0076fba7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76fbacu); f_005caba4();
    /* 0076fbac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076fbaf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076fbb2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0076fbb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fbb7: je 0x76fcce */ if (fZ) goto L_0076fcce;
L_0076fbbd:; BB(0x0076fbbd);
    /* 0076fbbd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0076fbc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076fbcb: mov ecx, eax */ r_ecx = r_eax;
    /* 0076fbcd: mov eax, dword ptr [0xaca354] */ r_eax = R32((u32)(0xaca354u));
    /* 0076fbd2: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0076fbd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fbd6: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0076fbd9: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x76fbdeu); f_007ba278();
    /* 0076fbde: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076fbe5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076fbe8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076fbeb: mov dword ptr [ecx], 0xb43f40 */ W32((u32)(r_ecx), 0xb43f40u);
    /* 0076fbf1: mov eax, dword ptr [0x9f7b80] */ r_eax = R32((u32)(0x9f7b80u));
    /* 0076fbf6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0076fbf9: call dword ptr [0xb43f54] */ { u32 t = R32((u32)(0xb43f54u)); r_esp -= 4; W32(r_esp, 0x76fbffu); call_ind(t); }
    /* 0076fbff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076fc02: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 0076fc0c: call 0x76f8f0 */ r_esp -= 4; W32(r_esp, 0x76fc11u); f_0076f8f0();
    /* 0076fc11: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076fc14: mov edx, dword ptr [0xa9b180] */ r_edx = R32((u32)(0xa9b180u));
    /* 0076fc1a: mov dword ptr [eax + 0x94], 0x3f800000 */ W32((u32)(r_eax+0x94u), 0x3f800000u);
    /* 0076fc24: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fc26: mov dword ptr [eax + 0x98], 0x3f800000 */ W32((u32)(r_eax+0x98u), 0x3f800000u);
    /* 0076fc30: mov dword ptr [eax + 0x9c], 0x3f800000 */ W32((u32)(r_eax+0x9cu), 0x3f800000u);
    /* 0076fc3a: mov dword ptr [eax + 0xa0], 0x3f800000 */ W32((u32)(r_eax+0xa0u), 0x3f800000u);
    /* 0076fc44: mov dword ptr [eax + 0xa4], 0 */ W32((u32)(r_eax+0xa4u), 0x0u);
    /* 0076fc4e: je 0x76fcb2 */ if (fZ) goto L_0076fcb2;
L_0076fc50:; BB(0x0076fc50);
    /* 0076fc50: mov ebx, eax */ r_ebx = r_eax;
    /* 0076fc52: mov dword ptr [ebx + 0xb0], 0x3f000000 */ W32((u32)(r_ebx+0xb0u), 0x3f000000u);
    /* 0076fc5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076fc5e: mov dword ptr [ebx + 0xa8], eax */ W32((u32)(r_ebx+0xa8u), r_eax);
    /* 0076fc64: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0076fc67: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0076fc6a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0076fc6d: fadd dword ptr [ecx*4 + 0x977ce0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x977ce0u));
    /* 0076fc74: fstp dword ptr [ebx + 0xac] */ W_F32((u32)(r_ebx+0xacu), ST(0)); FPOP();
L_0076fc7a:; BB(0x0076fc7a);
    /* 0076fc7a: mov edx, ebx */ r_edx = r_ebx;
    /* 0076fc7c: mov eax, 1 */ r_eax = 0x1u;
    /* 0076fc81: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0076fc87: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0076fc8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076fc8f: mov dword ptr [edx + 0xbc], ecx */ W32((u32)(r_edx+0xbcu), r_ecx);
    /* 0076fc95: mov dword ptr [edx + 0xc0], ecx */ W32((u32)(r_edx+0xc0u), r_ecx);
    /* 0076fc9b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_0076fc9e:; BB(0x0076fc9e);
    /* 0076fc9e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076fca1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076fca4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076fca7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076fcae: mov esp, ebp */ r_esp = r_ebp;
    /* 0076fcb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076fcb1: ret  */ FN_RET(0x0076fb74); r_esp += 4; return;
L_0076fcb2:; BB(0x0076fcb2);
    /* 0076fcb2: mov ebx, eax */ r_ebx = r_eax;
    /* 0076fcb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076fcb6: mov dword ptr [ebx + 0xac], eax */ W32((u32)(r_ebx+0xacu), r_eax);
    /* 0076fcbc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076fcbe: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 0076fcc4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076fcc6: mov dword ptr [ebx + 0xa8], ecx */ W32((u32)(r_ebx+0xa8u), r_ecx);
    /* 0076fccc: jmp 0x76fc7a */ goto L_0076fc7a;
L_0076fcce:; BB(0x0076fcce);
    /* 0076fcce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076fcd0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076fcd3: jmp 0x76fc9e */ goto L_0076fc9e;
}

void f_0076fcd8(void) /* sub_76FCD8 */
{
    FN_ENTER(0x0076fcd8);
    /* 0076fcd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076fcd9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076fcdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076fcdd: push 0x8f3fc4 */ { u32 v = 0x8f3fc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076fce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076fcf0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076fcf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076fcf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076fcf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076fcfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076fcff: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd04: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076fd0b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76fd10u); f_008581c5();
    /* 0076fd10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076fd11: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076fd14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fd16: je 0x76fd63 */ if (fZ) goto L_0076fd63;
L_0076fd18:; BB(0x0076fd18);
    /* 0076fd18: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076fd1f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076fd26: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fd29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076fd2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd2e: push 0x9f7b70 */ { u32 v = 0x9f7b70u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd35: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x76fd3au); f_005b7a84();
    /* 0076fd3a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fd3d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076fd44:; BB(0x0076fd44);
    /* 0076fd44: mov dword ptr [0xa9b184], eax */ W32((u32)(0xa9b184u), r_eax);
    /* 0076fd49: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076fd50: call 0x76fd68 */ r_esp -= 4; W32(r_esp, 0x76fd55u); f_0076fd68();
    /* 0076fd55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076fd58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076fd5f: mov esp, ebp */ r_esp = r_ebp;
    /* 0076fd61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076fd62: ret  */ FN_RET(0x0076fcd8); r_esp += 4; return;
L_0076fd63:; BB(0x0076fd63);
    /* 0076fd63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076fd65: jmp 0x76fd44 */ goto L_0076fd44;
}

void f_0076fd68(void) /* sub_76FD68 */
{
    FN_ENTER(0x0076fd68);
    /* 0076fd68: push dword ptr [0x9f7bc0] */ { u32 v = R32((u32)(0x9f7bc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076fd6e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x76fd73u); f_008009dc();
    /* 0076fd73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076fd74: mov dword ptr [0xa9b180], eax */ W32((u32)(0xa9b180u), r_eax);
    /* 0076fd79: ret  */ FN_RET(0x0076fd68); r_esp += 4; return;
}

void f_0076fd7c(void) /* sub_76FD7C */
{
    FN_ENTER(0x0076fd7c);
    /* 0076fd7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076fd7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076fd81: call 0x76fda0 */ r_esp -= 4; W32(r_esp, 0x76fd86u); f_0076fda0();
    /* 0076fd86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076fd8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076fd8c: jne 0x76fd92 */ if (!fZ) goto L_0076fd92;
L_0076fd8e:; BB(0x0076fd8e);
    /* 0076fd8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076fd8f: ret 4 */ FN_RET(0x0076fd7c); r_esp += 8; return;
L_0076fd92:; BB(0x0076fd92);
    /* 0076fd92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076fd93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76fd98u); f_005c2f74();
    /* 0076fd98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076fd99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076fd9a: ret 4 */ FN_RET(0x0076fd7c); r_esp += 8; return;
}

void f_0076fda0(void) /* sub_76FDA0 */
{
    FN_ENTER(0x0076fda0);
    /* 0076fda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076fda1: mov ebp, esp */ r_ebp = r_esp;
    /* 0076fda3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076fda5: push 0x8f3fe0 */ { u32 v = 0x8f3fe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076fdaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076fdb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fdb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076fdb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076fdbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076fdbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076fdc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076fdc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076fdc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076fdca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076fdd1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fdd4: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0076fdda: mov dword ptr [ecx], 0xb44070 */ W32((u32)(r_ecx), 0xb44070u);
    /* 0076fde0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fde2: je 0x76fdfe */ if (fZ) goto L_0076fdfe;
L_0076fde4:; BB(0x0076fde4);
    /* 0076fde4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fde7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076fdeb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076fdf0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076fdf4: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
L_0076fdfe:; BB(0x0076fdfe);
    /* 0076fdfe: call 0x76fe20 */ r_esp -= 4; W32(r_esp, 0x76fe03u); f_0076fe20();
    /* 0076fe03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076fe0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fe0d: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x76fe12u); f_006131f4();
    /* 0076fe12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076fe15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076fe1c: mov esp, ebp */ r_esp = r_ebp;
    /* 0076fe1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076fe1f: ret  */ FN_RET(0x0076fda0); r_esp += 4; return;
}

void f_0076fe20(void) /* sub_76FE20 */
{
    FN_ENTER(0x0076fe20);
    /* 0076fe20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe21: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076fe23: mov eax, dword ptr [ebp + 0xc8] */ r_eax = R32((u32)(r_ebp+0xc8u));
    /* 0076fe29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076fe2b: je 0x76fe3e */ if (fZ) goto L_0076fe3e;
L_0076fe2d:; BB(0x0076fe2d);
    /* 0076fe2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe2e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76fe33u); f_00857e98();
    /* 0076fe33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076fe34: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
L_0076fe3e:; BB(0x0076fe3e);
    /* 0076fe3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076fe3f: ret  */ FN_RET(0x0076fe20); r_esp += 4; return;
}

void f_0076fe40(void) /* sub_76FE40 */
{
    FN_ENTER(0x0076fe40);
    /* 0076fe40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076fe43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076fe45: call 0x76fe64 */ r_esp -= 4; W32(r_esp, 0x76fe4au); f_0076fe64();
    /* 0076fe4a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076fe4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076fe50: jne 0x76fe56 */ if (!fZ) goto L_0076fe56;
L_0076fe52:; BB(0x0076fe52);
    /* 0076fe52: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076fe53: ret 4 */ FN_RET(0x0076fe40); r_esp += 8; return;
L_0076fe56:; BB(0x0076fe56);
    /* 0076fe56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe57: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76fe5cu); f_005c2f74();
    /* 0076fe5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076fe5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076fe5e: ret 4 */ FN_RET(0x0076fe40); r_esp += 8; return;
}

void f_0076fe64(void) /* sub_76FE64 */
{
    FN_ENTER(0x0076fe64);
    /* 0076fe64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe65: mov ebp, esp */ r_ebp = r_esp;
    /* 0076fe67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe69: push 0x8f3ffc */ { u32 v = 0x8f3ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076fe74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076fe75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076fe7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076fe7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076fe82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076fe85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076fe88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076fe8b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076fe8e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fe91: mov edx, dword ptr [ecx + 0x90] */ r_edx = R32((u32)(r_ecx+0x90u));
    /* 0076fe97: mov dword ptr [ecx], 0xb440a0 */ W32((u32)(r_ecx), 0xb440a0u);
    /* 0076fe9d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076fe9f: je 0x76febb */ if (fZ) goto L_0076febb;
L_0076fea1:; BB(0x0076fea1);
    /* 0076fea1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076fea4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076fea8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076fead: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076feb1: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
L_0076febb:; BB(0x0076febb);
    /* 0076febb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076fec2: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x76fec7u); f_007ba1f0();
    /* 0076fec7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076feca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076fed1: mov esp, ebp */ r_esp = r_ebp;
    /* 0076fed3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076fed4: ret  */ FN_RET(0x0076fe64); r_esp += 4; return;
}

void f_0076fed8(void) /* sub_76FED8 */
{
    FN_ENTER(0x0076fed8);
    /* 0076fed8: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 0076fede: mov edx, 2 */ r_edx = 0x2u;
    /* 0076fee3: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076fee6: jl 0x76feea */ if ((fS!=fO)) goto L_0076feea;
L_0076fee8:; BB(0x0076fee8);
    /* 0076fee8: mov ecx, edx */ r_ecx = r_edx;
L_0076feea:; BB(0x0076feea);
    /* 0076feea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076feec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076feee: jg 0x76fef2 */ if ((!fZ&&fS==fO)) goto L_0076fef2;
L_0076fef0:; BB(0x0076fef0);
    /* 0076fef0: mov ecx, eax */ r_ecx = r_eax;
L_0076fef2:; BB(0x0076fef2);
    /* 0076fef2: mov eax, ecx */ r_eax = r_ecx;
    /* 0076fef4: ret  */ FN_RET(0x0076fed8); r_esp += 4; return;
}

void f_0076fef8(void) /* sub_76FEF8 */
{
    FN_ENTER(0x0076fef8);
    /* 0076fef8: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 0076fefe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ff00: je 0x76ff18 */ if (fZ) goto L_0076ff18;
L_0076ff02:; BB(0x0076ff02);
    /* 0076ff02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ff05: jne 0x76ff0d */ if (!fZ) goto L_0076ff0d;
L_0076ff07:; BB(0x0076ff07);
    /* 0076ff07: call 0x76ff20 */ r_esp -= 4; W32(r_esp, 0x76ff0cu); f_0076ff20();
    /* 0076ff0c: ret  */ FN_RET(0x0076fef8); r_esp += 4; return;
L_0076ff0d:; BB(0x0076ff0d);
    /* 0076ff0d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076ff10: jne 0x76ff1d */ if (!fZ) goto L_0076ff1d;
L_0076ff12:; BB(0x0076ff12);
    /* 0076ff12: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x76ff17u); f_0073d160();
    /* 0076ff17: ret  */ FN_RET(0x0076fef8); r_esp += 4; return;
L_0076ff18:; BB(0x0076ff18);
    /* 0076ff18: call 0x76ff84 */ r_esp -= 4; W32(r_esp, 0x76ff1du); f_0076ff84();
L_0076ff1d:; BB(0x0076ff1d);
    /* 0076ff1d: ret  */ FN_RET(0x0076fef8); r_esp += 4; return;
}

void f_0076ff20(void) /* sub_76FF20 */
{
    FN_ENTER(0x0076ff20);
    /* 0076ff20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ff21: mov esi, ecx */ r_esi = r_ecx;
    /* 0076ff23: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ff25: call 0x76ff64 */ r_esp -= 4; W32(r_esp, 0x76ff2au); f_0076ff64();
    /* 0076ff2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076ff2c: je 0x76ff51 */ if (fZ) goto L_0076ff51;
L_0076ff2e:; BB(0x0076ff2e);
    /* 0076ff2e: fld dword ptr [esi + 0xb0] */ FPUSH(R_F32((u32)(r_esi+0xb0u)));
    /* 0076ff34: fcom dword ptr [esi + 0xb4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xb4u))); 
    /* 0076ff3a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076ff3c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076ff3d: jae 0x76ff4d */ if (!fC) goto L_0076ff4d;
L_0076ff3f:; BB(0x0076ff3f);
    /* 0076ff3f: fld dword ptr [esi + 0xb8] */ FPUSH(R_F32((u32)(r_esi+0xb8u)));
    /* 0076ff45: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0076ff47: fst dword ptr [esi + 0xb0] */ W_F32((u32)(r_esi+0xb0u), ST(0));
L_0076ff4d:; BB(0x0076ff4d);
    /* 0076ff4d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076ff4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ff50: ret  */ FN_RET(0x0076ff20); r_esp += 4; return;
L_0076ff51:; BB(0x0076ff51);
    /* 0076ff51: mov dword ptr [esi + 0xd4], 2 */ W32((u32)(r_esi+0xd4u), 0x2u);
    /* 0076ff5b: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ff5d: call 0x770210 */ r_esp -= 4; W32(r_esp, 0x76ff62u); f_00770210();
    /* 0076ff62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ff63: ret  */ FN_RET(0x0076ff20); r_esp += 4; return;
}

void f_0076ff64(void) /* sub_76FF64 */
{
    FN_ENTER(0x0076ff64);
    /* 0076ff64: call 0x76fed8 */ r_esp -= 4; W32(r_esp, 0x76ff69u); f_0076fed8();
    /* 0076ff69: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0076ff6c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076ff6e: mov ecx, dword ptr [edx + eax*8 + 0x9f7d40] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x9f7d40u));
    /* 0076ff75: mov eax, 0 */ r_eax = 0x0u;
    /* 0076ff7a: cmp ecx, dword ptr [0xa9b074] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa9b074u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076ff80: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0076ff83: ret  */ FN_RET(0x0076ff64); r_esp += 4; return;
}

void f_0076ff84(void) /* sub_76FF84 */
{
    FN_ENTER(0x0076ff84);
    /* 0076ff84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ff85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076ff87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076ff89: call 0x76ff64 */ r_esp -= 4; W32(r_esp, 0x76ff8eu); f_0076ff64();
    /* 0076ff8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ff90: je 0x76ffa6 */ if (fZ) goto L_0076ffa6;
L_0076ff92:; BB(0x0076ff92);
    /* 0076ff92: mov dword ptr [ebx + 0xd4], 1 */ W32((u32)(r_ebx+0xd4u), 0x1u);
    /* 0076ff9c: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
L_0076ffa6:; BB(0x0076ffa6);
    /* 0076ffa6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ffa7: ret  */ FN_RET(0x0076ff84); r_esp += 4; return;
}

void f_0076ffa8(void) /* sub_76FFA8 */
{
    FN_ENTER(0x0076ffa8);
    /* 0076ffa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ffa9: mov edi, ecx */ r_edi = r_ecx;
    /* 0076ffab: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76ffb0u); f_0082d7b0();
    /* 0076ffb0: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0076ffb3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76ffb8u); f_0082d838();
    /* 0076ffb8: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0076ffbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ffbd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76ffc2u); f_0082d8bc();
    /* 0076ffc2: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0076ffc5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76ffcau); f_00829cc8();
    /* 0076ffca: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 0076ffd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ffd2: je 0x76fff7 */ if (fZ) goto L_0076fff7;
L_0076ffd4:; BB(0x0076ffd4);
    /* 0076ffd4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ffd7: jne 0x770000 */ if (!fZ) goto L_00770000;
L_0076ffd9:; BB(0x0076ffd9);
    /* 0076ffd9: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 0076ffdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076ffe1: je 0x770000 */ if (fZ) goto L_00770000;
L_0076ffe3:; BB(0x0076ffe3);
    /* 0076ffe3: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ffe9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ffea: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ffed: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x76fff2u); f_00830a28();
    /* 0076fff2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076fff5: jmp 0x770000 */ goto L_00770000;
L_0076fff7:; BB(0x0076fff7);
    /* 0076fff7: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076fffa: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x76ffffu); f_0082e760();
    /* 0076ffff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00770000:; BB(0x00770000);
    /* 00770000: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x770005u); f_0082da80();
    /* 00770005: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00770006: ret  */ FN_RET(0x0076ffa8); r_esp += 4; return;
}

