#include "protos.h"

void f_004fe054(void) /* sub_4FE054 */
{
    FN_ENTER(0x004fe054);
    /* 004fe054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe055: mov esi, ecx */ r_esi = r_ecx;
    /* 004fe057: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 004fe05a: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004fe05f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fe060: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x4fe065u); f_00780630();
    /* 004fe065: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004fe06a: je 0x4fe080 */ if (fZ) goto L_004fe080;
L_004fe06c:; BB(0x004fe06c);
    /* 004fe06c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004fe06f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004fe071: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 004fe074: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004fe077: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fe07a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004fe07d: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
L_004fe080:; BB(0x004fe080);
    /* 004fe080: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fe081: ret  */ FN_RET(0x004fe054); r_esp += 4; return;
}

void f_004fe084(void) /* sub_4FE084 */
{
    FN_ENTER(0x004fe084);
    /* 004fe084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe086: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe087: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe088: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fe08b: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004fe08e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe090: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 004fe096: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe097: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe09cu); f_00810160();
    /* 004fe09c: mov ebp, eax */ r_ebp = r_eax;
    /* 004fe09e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe09f: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe0a4u); f_008123d8();
    /* 004fe0a4: mov ecx, eax */ r_ecx = r_eax;
    /* 004fe0a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe0a9: fld dword ptr [0x91ed3c] */ FPUSH(R_F32((u32)(0x91ed3cu)));
    /* 004fe0af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe0b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe0b3: jle 0x4fe0f6 */ if ((fZ||fS!=fO)) goto L_004fe0f6;
L_004fe0b5:; BB(0x004fe0b5);
    /* 004fe0b5: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004fe0b8:; BB(0x004fe0b8);
    /* 004fe0b8: movsx esi, word ptr [ebp] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fe0bc: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe0bf: je 0x4fe0ec */ if (fZ) goto L_004fe0ec;
L_004fe0c1:; BB(0x004fe0c1);
    /* 004fe0c1: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 004fe0c4: fsub dword ptr [ebp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x10u));
    /* 004fe0c7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe0c9: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 004fe0cc: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 004fe0cf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe0d1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe0d3: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004fe0d6: fsub dword ptr [ebp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x18u));
    /* 004fe0d9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe0db: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe0dd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fe0df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fe0e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fe0e2: jae 0x4fe39f */ if (!fC) goto L_004fe39f;
L_004fe0e8:; BB(0x004fe0e8);
    /* 004fe0e8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fe0ea: mov ebx, ebp */ r_ebx = r_ebp;
L_004fe0ec:; BB(0x004fe0ec);
    /* 004fe0ec: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fe0ef: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe0f2: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe0f4: jl 0x4fe0b8 */ if ((fS!=fO)) goto L_004fe0b8;
L_004fe0f6:; BB(0x004fe0f6);
    /* 004fe0f6: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fe0fc: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004fe0ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe101:; BB(0x004fe101);
    /* 004fe101: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fe104: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe107: je 0x4fe134 */ if (fZ) goto L_004fe134;
L_004fe109:; BB(0x004fe109);
    /* 004fe109: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 004fe10c: fsub dword ptr [ecx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x10u));
    /* 004fe10f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe111: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 004fe114: fsub dword ptr [ecx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x14u));
    /* 004fe117: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe119: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe11b: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004fe11e: fsub dword ptr [ecx + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x18u));
    /* 004fe121: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe123: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe125: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fe127: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fe129: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fe12a: jae 0x4fe3a6 */ if (!fC) goto L_004fe3a6;
L_004fe130:; BB(0x004fe130);
    /* 004fe130: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fe132: mov ebx, ecx */ r_ebx = r_ecx;
L_004fe134:; BB(0x004fe134);
    /* 004fe134: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fe137: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe13a: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe140: jl 0x4fe101 */ if ((fS!=fO)) goto L_004fe101;
L_004fe142:; BB(0x004fe142);
    /* 004fe142: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fe144: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe146: je 0x4fe377 */ if (fZ) goto L_004fe377;
L_004fe14c:; BB(0x004fe14c);
    /* 004fe14c: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fe14f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fe151: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fe156u); f_00807ac0();
    /* 004fe156: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 004fe15d: mov ebp, eax */ r_ebp = r_eax;
    /* 004fe15f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe161: je 0x4fe17e */ if (fZ) goto L_004fe17e;
L_004fe163:; BB(0x004fe163);
    /* 004fe163: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fe167: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe16a: je 0x4fe17e */ if (fZ) goto L_004fe17e;
L_004fe16c:; BB(0x004fe16c);
    /* 004fe16c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe16e: je 0x4fe38e */ if (fZ) goto L_004fe38e;
L_004fe174:; BB(0x004fe174);
    /* 004fe174: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fe177: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fe17a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe17c: jne 0x4fe163 */ if (!fZ) goto L_004fe163;
L_004fe17e:; BB(0x004fe17e);
    /* 004fe17e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004fe180:; BB(0x004fe180);
    /* 004fe180: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe182: je 0x4fe377 */ if (fZ) goto L_004fe377;
L_004fe188:; BB(0x004fe188);
    /* 004fe188: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fe18b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fe18d: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 004fe191: mov word ptr [eax + 0xb0], dx */ W16((u32)(r_eax+0xb0u), (u16)r_edx);
    /* 004fe198: movzx ecx, word ptr [ebx + 6] */ r_ecx = (u32)R16((u32)(r_ebx+0x6u));
    /* 004fe19c: mov word ptr [eax + 0xb2], cx */ W16((u32)(r_eax+0xb2u), (u16)r_ecx);
    /* 004fe1a3: movzx esi, word ptr [ebx + 8] */ r_esi = (u32)R16((u32)(r_ebx+0x8u));
    /* 004fe1a7: mov word ptr [eax + 0xb4], si */ W16((u32)(r_eax+0xb4u), (u16)r_esi);
    /* 004fe1ae: movzx edi, word ptr [ebx + 0xa] */ r_edi = (u32)R16((u32)(r_ebx+0xau));
    /* 004fe1b2: mov word ptr [eax + 0xb6], di */ W16((u32)(r_eax+0xb6u), (u16)r_edi);
    /* 004fe1b9: movzx edx, word ptr [ebx + 0xc] */ r_edx = (u32)R16((u32)(r_ebx+0xcu));
    /* 004fe1bd: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 004fe1c4: movzx edx, word ptr [ebx + 0xe] */ r_edx = (u32)R16((u32)(r_ebx+0xeu));
    /* 004fe1c8: mov word ptr [eax + 0xba], dx */ W16((u32)(r_eax+0xbau), (u16)r_edx);
    /* 004fe1cf: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004fe1d2: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 004fe1d8: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004fe1db: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 004fe1e1: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004fe1e4: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 004fe1ea: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004fe1ed: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 004fe1f3: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004fe1f6: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 004fe1fc: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004fe1ff: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 004fe205: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004fe208: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 004fe20e: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004fe211: mov dword ptr [eax + 0xd8], edx */ W32((u32)(r_eax+0xd8u), r_edx);
    /* 004fe217: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004fe21a: mov dword ptr [eax + 0xdc], edx */ W32((u32)(r_eax+0xdcu), r_edx);
    /* 004fe220: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004fe223: mov dword ptr [eax + 0xe0], edx */ W32((u32)(r_eax+0xe0u), r_edx);
    /* 004fe229: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004fe22c: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
    /* 004fe232: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004fe235: mov dword ptr [eax + 0xe8], edx */ W32((u32)(r_eax+0xe8u), r_edx);
    /* 004fe23b: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fe240u); f_007ba898();
    /* 004fe240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fe241: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fe244: mov esi, dword ptr [edx + 0xbc] */ r_esi = R32((u32)(r_edx+0xbcu));
    /* 004fe24a: mov ecx, dword ptr [edx + 0xc0] */ r_ecx = R32((u32)(r_edx+0xc0u));
    /* 004fe250: mov edi, dword ptr [edx + 0xc4] */ r_edi = R32((u32)(r_edx+0xc4u));
    /* 004fe256: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
    /* 004fe25d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fe262: mov word ptr [edx + 0xb0], ax */ W16((u32)(r_edx+0xb0u), (u16)r_eax);
    /* 004fe269: mov eax, dword ptr [0xa727c0] */ r_eax = R32((u32)(0xa727c0u));
    /* 004fe26e: mov dword ptr [0xa727c0], 0 */ W32((u32)(0xa727c0u), 0x0u);
    /* 004fe278: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 004fe27b: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 004fe27e: mov dword ptr [edx + 0x24], edi */ W32((u32)(r_edx+0x24u), r_edi);
    /* 004fe281: mov dword ptr [edx + 0xf0], ebp */ W32((u32)(r_edx+0xf0u), r_ebp);
    /* 004fe287: movzx ebp, word ptr [eax + 8] */ r_ebp = (u32)R16((u32)(r_eax+0x8u));
    /* 004fe28b: or ebp, 0xffff0001 */ {  u32 a = r_ebp; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 004fe291: mov word ptr [eax + 8], bp */ W16((u32)(r_eax+0x8u), (u16)r_ebp);
    /* 004fe295: movsx ebx, word ptr [ebx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004fe299: mov edx, dword ptr [edx + 0x54] */ r_edx = R32((u32)(r_edx+0x54u));
    /* 004fe29c: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fe2a0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004fe2a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe2a4: jle 0x4fe2c7 */ if ((fZ||fS!=fO)) goto L_004fe2c7;
L_004fe2a6:; BB(0x004fe2a6);
    /* 004fe2a6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004fe2a9:; BB(0x004fe2a9);
    /* 004fe2a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe2aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe2ac: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fe2b1u); f_004f7fb0();
    /* 004fe2b1: cmp ebx, dword ptr [eax] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe2b3: je 0x4fe37f */ if (fZ) goto L_004fe37f;
L_004fe2b9:; BB(0x004fe2b9);
    /* 004fe2b9: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 004fe2bc: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fe2c0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fe2c3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe2c5: jl 0x4fe2a9 */ if ((fS!=fO)) goto L_004fe2a9;
L_004fe2c7:; BB(0x004fe2c7);
    /* 004fe2c7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe2ca: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe2cc: jg 0x4fe377 */ if ((!fZ&&fS==fO)) goto L_004fe377;
L_004fe2d2:; BB(0x004fe2d2);
    /* 004fe2d2: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 004fe2d5: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe2db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe2dc: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 004fe2df: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fe2e2: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004fe2e5: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004fe2e8: mov dword ptr [ebp + 0x4c], ecx */ W32((u32)(r_ebp+0x4cu), r_ecx);
    /* 004fe2eb: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 004fe2ee: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 004fe2f1: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004fe2f3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe2f5: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe2fau); f_00810160();
    /* 004fe2fa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004fe2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe2ff: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe304u); f_008123d8();
    /* 004fe304: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe307: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe30b: jle 0x4fe32e */ if ((fZ||fS!=fO)) goto L_004fe32e;
L_004fe30d:; BB(0x004fe30d);
    /* 004fe30d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_004fe311:; BB(0x004fe311);
    /* 004fe311: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fe314: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe317: je 0x4fe324 */ if (fZ) goto L_004fe324;
L_004fe319:; BB(0x004fe319);
    /* 004fe319: movsx edi, word ptr [ecx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fe31d: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe31f: jne 0x4fe324 */ if (!fZ) goto L_004fe324;
L_004fe321:; BB(0x004fe321);
    /* 004fe321: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe324:; BB(0x004fe324);
    /* 004fe324: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fe327: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe32a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe32c: jl 0x4fe311 */ if ((fS!=fO)) goto L_004fe311;
L_004fe32e:; BB(0x004fe32e);
    /* 004fe32e: mov ecx, dword ptr [0xa727bc] */ r_ecx = R32((u32)(0xa727bcu));
    /* 004fe334: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe336:; BB(0x004fe336);
    /* 004fe336: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fe339: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe33c: je 0x4fe349 */ if (fZ) goto L_004fe349;
L_004fe33e:; BB(0x004fe33e);
    /* 004fe33e: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fe342: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe344: jne 0x4fe349 */ if (!fZ) goto L_004fe349;
L_004fe346:; BB(0x004fe346);
    /* 004fe346: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe349:; BB(0x004fe349);
    /* 004fe349: lea eax, [ecx + 0x44] */ r_eax = (u32)(r_ecx+0x44u);
    /* 004fe34c: movsx ecx, word ptr [ecx + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x44u));
    /* 004fe350: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe353: je 0x4fe360 */ if (fZ) goto L_004fe360;
L_004fe355:; BB(0x004fe355);
    /* 004fe355: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fe359: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe35b: jne 0x4fe360 */ if (!fZ) goto L_004fe360;
L_004fe35d:; BB(0x004fe35d);
    /* 004fe35d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe360:; BB(0x004fe360);
    /* 004fe360: lea ecx, [eax + 0x44] */ r_ecx = (u32)(r_eax+0x44u);
    /* 004fe363: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe366: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe36c: jl 0x4fe336 */ if ((fS!=fO)) goto L_004fe336;
L_004fe36e:; BB(0x004fe36e);
    /* 004fe36e: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004fe371: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 004fe374: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
L_004fe377:; BB(0x004fe377);
    /* 004fe377: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fe37a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fe37b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe37c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fe37d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fe37e: ret  */ FN_RET(0x004fe084); r_esp += 4; return;
L_004fe37f:; BB(0x004fe37f);
    /* 004fe37f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fe382: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004fe385: movsx edx, word ptr [ecx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 004fe389: jmp 0x4fe2c7 */ goto L_004fe2c7;
L_004fe38e:; BB(0x004fe38e);
    /* 004fe38e: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 004fe391: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 004fe394: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004fe39a: jmp 0x4fe180 */ goto L_004fe180;
L_004fe39f:; BB(0x004fe39f);
    /* 004fe39f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fe3a1: jmp 0x4fe0ec */ goto L_004fe0ec;
L_004fe3a6:; BB(0x004fe3a6);
    /* 004fe3a6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fe3a8: jmp 0x4fe134 */ goto L_004fe134;
}

void f_004fe3b0(void) /* sub_4FE3B0 */
{
    FN_ENTER(0x004fe3b0);
    /* 004fe3b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe3b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe3b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe3b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe3b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fe3b7: mov esi, ecx */ r_esi = r_ecx;
    /* 004fe3b9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fe3bb: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe3c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe3c2: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe3c7u); f_00810160();
    /* 004fe3c7: mov ebx, eax */ r_ebx = r_eax;
    /* 004fe3c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe3ca: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe3cfu); f_008123d8();
    /* 004fe3cf: mov ecx, eax */ r_ecx = r_eax;
    /* 004fe3d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe3d4: fld dword ptr [0x91ed38] */ FPUSH(R_F32((u32)(0x91ed38u)));
    /* 004fe3da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe3dc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe3de: jle 0x4fe41d */ if ((fZ||fS!=fO)) goto L_004fe41d;
L_004fe3e0:; BB(0x004fe3e0);
    /* 004fe3e0: movsx edi, word ptr [ebx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fe3e3: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe3e6: je 0x4fe413 */ if (fZ) goto L_004fe413;
L_004fe3e8:; BB(0x004fe3e8);
    /* 004fe3e8: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 004fe3eb: fsub dword ptr [ebx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x10u));
    /* 004fe3ee: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe3f0: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 004fe3f3: fsub dword ptr [ebx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x14u));
    /* 004fe3f6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe3f8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe3fa: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004fe3fd: fsub dword ptr [ebx + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x18u));
    /* 004fe400: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe402: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe404: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fe406: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fe408: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fe409: jae 0x4fe931 */ if (!fC) goto L_004fe931;
L_004fe40f:; BB(0x004fe40f);
    /* 004fe40f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fe411: mov ebp, ebx */ r_ebp = r_ebx;
L_004fe413:; BB(0x004fe413);
    /* 004fe413: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe416: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe419: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe41b: jl 0x4fe3e0 */ if ((fS!=fO)) goto L_004fe3e0;
L_004fe41d:; BB(0x004fe41d);
    /* 004fe41d: mov ebx, dword ptr [0xa727bc] */ r_ebx = R32((u32)(0xa727bcu));
    /* 004fe423: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe425:; BB(0x004fe425);
    /* 004fe425: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fe428: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe42b: je 0x4fe458 */ if (fZ) goto L_004fe458;
L_004fe42d:; BB(0x004fe42d);
    /* 004fe42d: fld dword ptr [esi + 0x1c] */ FPUSH(R_F32((u32)(r_esi+0x1cu)));
    /* 004fe430: fsub dword ptr [ebx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x10u));
    /* 004fe433: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe435: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 004fe438: fsub dword ptr [ebx + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x14u));
    /* 004fe43b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe43d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe43f: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004fe442: fsub dword ptr [ebx + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x18u));
    /* 004fe445: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004fe447: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004fe449: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004fe44b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004fe44d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004fe44e: jae 0x4fe938 */ if (!fC) goto L_004fe938;
L_004fe454:; BB(0x004fe454);
    /* 004fe454: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004fe456: mov ebp, ebx */ r_ebp = r_ebx;
L_004fe458:; BB(0x004fe458);
    /* 004fe458: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe45b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe45e: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe464: jl 0x4fe425 */ if ((fS!=fO)) goto L_004fe425;
L_004fe466:; BB(0x004fe466);
    /* 004fe466: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fe468: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe46a: je 0x4fe7e7 */ if (fZ) goto L_004fe7e7;
L_004fe470:; BB(0x004fe470);
    /* 004fe470: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fe474: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fe476: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004fe47a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4fe47fu); f_00807ac0();
    /* 004fe47f: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 004fe486: mov ebx, eax */ r_ebx = r_eax;
    /* 004fe488: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe48a: je 0x4fe4aa */ if (fZ) goto L_004fe4aa;
L_004fe48c:; BB(0x004fe48c);
    /* 004fe48c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_004fe490:; BB(0x004fe490);
    /* 004fe490: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004fe493: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe496: je 0x4fe4aa */ if (fZ) goto L_004fe4aa;
L_004fe498:; BB(0x004fe498);
    /* 004fe498: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe49a: je 0x4fe91d */ if (fZ) goto L_004fe91d;
L_004fe4a0:; BB(0x004fe4a0);
    /* 004fe4a0: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe4a3: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fe4a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe4a8: jne 0x4fe490 */ if (!fZ) goto L_004fe490;
L_004fe4aa:; BB(0x004fe4aa);
    /* 004fe4aa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004fe4ac:; BB(0x004fe4ac);
    /* 004fe4ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe4ae: je 0x4fe7fb */ if (fZ) goto L_004fe7fb;
L_004fe4b4:; BB(0x004fe4b4);
    /* 004fe4b4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004fe4b6: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 004fe4ba: mov word ptr [esi + 0xb0], ax */ W16((u32)(r_esi+0xb0u), (u16)r_eax);
    /* 004fe4c1: movzx eax, word ptr [ebp + 6] */ r_eax = (u32)R16((u32)(r_ebp+0x6u));
    /* 004fe4c5: mov word ptr [esi + 0xb2], ax */ W16((u32)(r_esi+0xb2u), (u16)r_eax);
    /* 004fe4cc: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004fe4d0: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 004fe4d7: movzx eax, word ptr [ebp + 0xa] */ r_eax = (u32)R16((u32)(r_ebp+0xau));
    /* 004fe4db: mov word ptr [esi + 0xb6], ax */ W16((u32)(r_esi+0xb6u), (u16)r_eax);
    /* 004fe4e2: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 004fe4e6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 004fe4ed: movzx eax, word ptr [ebp + 0xe] */ r_eax = (u32)R16((u32)(r_ebp+0xeu));
    /* 004fe4f1: mov word ptr [esi + 0xba], ax */ W16((u32)(r_esi+0xbau), (u16)r_eax);
    /* 004fe4f8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004fe4fb: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 004fe501: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004fe504: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 004fe50a: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 004fe50d: mov dword ptr [esi + 0xc4], edi */ W32((u32)(r_esi+0xc4u), r_edi);
    /* 004fe513: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 004fe516: mov dword ptr [esi + 0xc8], ecx */ W32((u32)(r_esi+0xc8u), r_ecx);
    /* 004fe51c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004fe51f: mov dword ptr [esi + 0xcc], ecx */ W32((u32)(r_esi+0xccu), r_ecx);
    /* 004fe525: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 004fe528: mov dword ptr [esi + 0xd0], ecx */ W32((u32)(r_esi+0xd0u), r_ecx);
    /* 004fe52e: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 004fe531: mov dword ptr [esi + 0xd4], ecx */ W32((u32)(r_esi+0xd4u), r_ecx);
    /* 004fe537: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004fe53a: mov dword ptr [esi + 0xd8], ecx */ W32((u32)(r_esi+0xd8u), r_ecx);
    /* 004fe540: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004fe543: mov dword ptr [esi + 0xdc], ecx */ W32((u32)(r_esi+0xdcu), r_ecx);
    /* 004fe549: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 004fe54c: mov dword ptr [esi + 0xe0], ecx */ W32((u32)(r_esi+0xe0u), r_ecx);
    /* 004fe552: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 004fe555: mov dword ptr [esi + 0xe4], ecx */ W32((u32)(r_esi+0xe4u), r_ecx);
    /* 004fe55b: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 004fe55e: mov dword ptr [esi + 0xe8], ecx */ W32((u32)(r_esi+0xe8u), r_ecx);
    /* 004fe564: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 004fe567: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004fe56a: mov dword ptr [esi + 0x24], edi */ W32((u32)(r_esi+0x24u), r_edi);
    /* 004fe56d: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4fe572u); f_007ba898();
    /* 004fe572: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fe573: mov word ptr [esi + 0xb4], ax */ W16((u32)(r_esi+0xb4u), (u16)r_eax);
    /* 004fe57a: mov dword ptr [esi + 0xf0], ebx */ W32((u32)(r_esi+0xf0u), r_ebx);
    /* 004fe580: mov ebx, dword ptr [0xa727c0] */ r_ebx = R32((u32)(0xa727c0u));
    /* 004fe586: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004fe58a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004fe58f: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004fe593: movsx edi, word ptr [ebp + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fe597: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 004fe59a: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fe59e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe5a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe5a2: mov dword ptr [0xa727c0], 0 */ W32((u32)(0xa727c0u), 0x0u);
    /* 004fe5ac: jle 0x4fe5cc */ if ((fZ||fS!=fO)) goto L_004fe5cc;
L_004fe5ae:; BB(0x004fe5ae);
    /* 004fe5ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe5af: mov ecx, esi */ r_ecx = r_esi;
    /* 004fe5b1: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4fe5b6u); f_004f7fb0();
    /* 004fe5b6: cmp edi, dword ptr [eax] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe5b8: je 0x4fe7ef */ if (fZ) goto L_004fe7ef;
L_004fe5be:; BB(0x004fe5be);
    /* 004fe5be: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 004fe5c1: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fe5c5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe5c8: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe5ca: jl 0x4fe5ae */ if ((fS!=fO)) goto L_004fe5ae;
L_004fe5cc:; BB(0x004fe5cc);
    /* 004fe5cc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe5cf: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe5d1: jg 0x4fe6ad */ if ((!fZ&&fS==fO)) goto L_004fe6ad;
L_004fe5d7:; BB(0x004fe5d7);
    /* 004fe5d7: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 004fe5da: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004fe5dd: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 004fe5e0: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 004fe5e3: mov dword ptr [esi + 0x4c], edi */ W32((u32)(r_esi+0x4cu), r_edi);
    /* 004fe5e6: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004fe5e9: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe5ef: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 004fe5f2: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004fe5f4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004fe5f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fe5fa: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004fe5fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe5ff: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe604u); f_00810160();
    /* 004fe604: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004fe608: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe609: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe60eu); f_008123d8();
    /* 004fe60e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe611: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe613: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe615: jle 0x4fe652 */ if ((fZ||fS!=fO)) goto L_004fe652;
L_004fe617:; BB(0x004fe617);
    /* 004fe617: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004fe61b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 004fe61f: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 004fe623: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004fe626: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_004fe62a:; BB(0x004fe62a);
    /* 004fe62a: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fe62d: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe630: je 0x4fe63d */ if (fZ) goto L_004fe63d;
L_004fe632:; BB(0x004fe632);
    /* 004fe632: movsx edi, word ptr [ecx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fe636: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe638: jne 0x4fe63d */ if (!fZ) goto L_004fe63d;
L_004fe63a:; BB(0x004fe63a);
    /* 004fe63a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004fe63d:; BB(0x004fe63d);
    /* 004fe63d: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fe640: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe643: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe645: jl 0x4fe62a */ if ((fS!=fO)) goto L_004fe62a;
L_004fe647:; BB(0x004fe647);
    /* 004fe647: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004fe64a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 004fe64e: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_004fe652:; BB(0x004fe652);
    /* 004fe652: mov edx, dword ptr [0xa727bc] */ r_edx = R32((u32)(0xa727bcu));
    /* 004fe658: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004fe65c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004fe65f: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004fe663: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004fe665:; BB(0x004fe665);
    /* 004fe665: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fe668: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe66b: je 0x4fe678 */ if (fZ) goto L_004fe678;
L_004fe66d:; BB(0x004fe66d);
    /* 004fe66d: movsx ecx, word ptr [edx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fe671: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe673: jne 0x4fe678 */ if (!fZ) goto L_004fe678;
L_004fe675:; BB(0x004fe675);
    /* 004fe675: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fe678:; BB(0x004fe678);
    /* 004fe678: lea ecx, [edx + 0x44] */ r_ecx = (u32)(r_edx+0x44u);
    /* 004fe67b: movsx edx, word ptr [edx + 0x44] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x44u));
    /* 004fe67f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe682: je 0x4fe68f */ if (fZ) goto L_004fe68f;
L_004fe684:; BB(0x004fe684);
    /* 004fe684: movsx edx, word ptr [ecx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004fe688: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe68a: jne 0x4fe68f */ if (!fZ) goto L_004fe68f;
L_004fe68c:; BB(0x004fe68c);
    /* 004fe68c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004fe68f:; BB(0x004fe68f);
    /* 004fe68f: lea edx, [ecx + 0x44] */ r_edx = (u32)(r_ecx+0x44u);
    /* 004fe692: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004fe695: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe69a: jl 0x4fe665 */ if ((fS!=fO)) goto L_004fe665;
L_004fe69c:; BB(0x004fe69c);
    /* 004fe69c: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004fe6a0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004fe6a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004fe6a7: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 004fe6aa: mov dword ptr [esi + 0x3c], ebx */ W32((u32)(r_esi+0x3cu), r_ebx);
L_004fe6ad:; BB(0x004fe6ad);
    /* 004fe6ad: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fe6b2: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 004fe6b6: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe6bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe6bd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe6bf: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe6c4u); f_00810160();
    /* 004fe6c4: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004fe6c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe6c9: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe6ceu); f_008123d8();
    /* 004fe6ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe6d1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe6d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe6d5: jle 0x4fe6f0 */ if ((fZ||fS!=fO)) goto L_004fe6f0;
L_004fe6d7:; BB(0x004fe6d7);
    /* 004fe6d7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
L_004fe6db:; BB(0x004fe6db);
    /* 004fe6db: movsx edi, word ptr [ecx] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004fe6de: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe6e1: je 0x4fe6e6 */ if (fZ) goto L_004fe6e6;
L_004fe6e3:; BB(0x004fe6e3);
    /* 004fe6e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe6e6:; BB(0x004fe6e6);
    /* 004fe6e6: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fe6e9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe6ec: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe6ee: jl 0x4fe6db */ if ((fS!=fO)) goto L_004fe6db;
L_004fe6f0:; BB(0x004fe6f0);
    /* 004fe6f0: mov edi, dword ptr [0xa727bc] */ r_edi = R32((u32)(0xa727bcu));
    /* 004fe6f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe6f8:; BB(0x004fe6f8);
    /* 004fe6f8: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fe6fb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe6fe: je 0x4fe703 */ if (fZ) goto L_004fe703;
L_004fe700:; BB(0x004fe700);
    /* 004fe700: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe703:; BB(0x004fe703);
    /* 004fe703: lea eax, [edi + 0x44] */ r_eax = (u32)(r_edi+0x44u);
    /* 004fe706: movsx edi, word ptr [edi + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x44u));
    /* 004fe70a: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe70d: je 0x4fe712 */ if (fZ) goto L_004fe712;
L_004fe70f:; BB(0x004fe70f);
    /* 004fe70f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe712:; BB(0x004fe712);
    /* 004fe712: movsx edi, word ptr [eax + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fe716: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe719: je 0x4fe71e */ if (fZ) goto L_004fe71e;
L_004fe71b:; BB(0x004fe71b);
    /* 004fe71b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe71e:; BB(0x004fe71e);
    /* 004fe71e: movsx edi, word ptr [eax + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fe725: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe728: je 0x4fe72d */ if (fZ) goto L_004fe72d;
L_004fe72a:; BB(0x004fe72a);
    /* 004fe72a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe72d:; BB(0x004fe72d);
    /* 004fe72d: lea edi, [eax + 0xcc] */ r_edi = (u32)(r_eax+0xccu);
    /* 004fe733: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe736: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe73c: jl 0x4fe6f8 */ if ((fS!=fO)) goto L_004fe6f8;
L_004fe73e:; BB(0x004fe73e);
    /* 004fe73e: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe744: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 004fe747: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004fe74a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004fe74c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe74e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004fe752: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe753: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe758u); f_00810160();
    /* 004fe758: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004fe75c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe75d: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe762u); f_008123d8();
    /* 004fe762: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe765: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004fe767: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe769: jle 0x4fe796 */ if ((fZ||fS!=fO)) goto L_004fe796;
L_004fe76b:; BB(0x004fe76b);
    /* 004fe76b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004fe76f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004fe773: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_004fe776:; BB(0x004fe776);
    /* 004fe776: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fe779: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe77c: je 0x4fe789 */ if (fZ) goto L_004fe789;
L_004fe77e:; BB(0x004fe77e);
    /* 004fe77e: movsx esi, word ptr [edx + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fe782: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe784: jne 0x4fe789 */ if (!fZ) goto L_004fe789;
L_004fe786:; BB(0x004fe786);
    /* 004fe786: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe789:; BB(0x004fe789);
    /* 004fe789: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe78c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fe78f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe791: jl 0x4fe776 */ if ((fS!=fO)) goto L_004fe776;
L_004fe793:; BB(0x004fe793);
    /* 004fe793: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004fe796:; BB(0x004fe796);
    /* 004fe796: mov edi, dword ptr [0xa727bc] */ r_edi = R32((u32)(0xa727bcu));
    /* 004fe79c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004fe7a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe7a2:; BB(0x004fe7a2);
    /* 004fe7a2: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fe7a5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe7a8: je 0x4fe7b5 */ if (fZ) goto L_004fe7b5;
L_004fe7aa:; BB(0x004fe7aa);
    /* 004fe7aa: movsx eax, word ptr [edi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fe7ae: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe7b0: jne 0x4fe7b5 */ if (!fZ) goto L_004fe7b5;
L_004fe7b2:; BB(0x004fe7b2);
    /* 004fe7b2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe7b5:; BB(0x004fe7b5);
    /* 004fe7b5: lea eax, [edi + 0x44] */ r_eax = (u32)(r_edi+0x44u);
    /* 004fe7b8: movsx edi, word ptr [edi + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x44u));
    /* 004fe7bc: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe7bf: je 0x4fe7cc */ if (fZ) goto L_004fe7cc;
L_004fe7c1:; BB(0x004fe7c1);
    /* 004fe7c1: movsx edi, word ptr [eax + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fe7c5: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe7c7: jne 0x4fe7cc */ if (!fZ) goto L_004fe7cc;
L_004fe7c9:; BB(0x004fe7c9);
    /* 004fe7c9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe7cc:; BB(0x004fe7cc);
    /* 004fe7cc: lea edi, [eax + 0x44] */ r_edi = (u32)(r_eax+0x44u);
    /* 004fe7cf: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe7d2: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe7d8: jl 0x4fe7a2 */ if ((fS!=fO)) goto L_004fe7a2;
L_004fe7da:; BB(0x004fe7da);
    /* 004fe7da: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 004fe7dd: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe7e0: mov ecx, esi */ r_ecx = r_esi;
    /* 004fe7e2: call 0x4fe940 */ r_esp -= 4; W32(r_esp, 0x4fe7e7u); f_004fe940();
L_004fe7e7:; BB(0x004fe7e7);
    /* 004fe7e7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fe7ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fe7eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe7ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fe7ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fe7ee: ret  */ FN_RET(0x004fe3b0); r_esp += 4; return;
L_004fe7ef:; BB(0x004fe7ef);
    /* 004fe7ef: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 004fe7f2: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004fe7f6: jmp 0x4fe5cc */ goto L_004fe5cc;
L_004fe7fb:; BB(0x004fe7fb);
    /* 004fe7fb: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004fe800: mov word ptr [ebp], ax */ W16((u32)(r_ebp), (u16)r_eax);
    /* 004fe804: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe80a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe80b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe80d: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe812u); f_00810160();
    /* 004fe812: mov ebp, eax */ r_ebp = r_eax;
    /* 004fe814: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe815: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe81au); f_008123d8();
    /* 004fe81a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe81d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe81f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe821: jle 0x4fe839 */ if ((fZ||fS!=fO)) goto L_004fe839;
L_004fe823:; BB(0x004fe823);
    /* 004fe823: movsx edi, word ptr [ebp] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fe827: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe82a: je 0x4fe82f */ if (fZ) goto L_004fe82f;
L_004fe82c:; BB(0x004fe82c);
    /* 004fe82c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe82f:; BB(0x004fe82f);
    /* 004fe82f: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fe832: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe835: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe837: jl 0x4fe823 */ if ((fS!=fO)) goto L_004fe823;
L_004fe839:; BB(0x004fe839);
    /* 004fe839: mov ebp, dword ptr [0xa727bc] */ r_ebp = R32((u32)(0xa727bcu));
    /* 004fe83f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe841:; BB(0x004fe841);
    /* 004fe841: movsx eax, word ptr [ebp] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fe845: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe848: je 0x4fe84d */ if (fZ) goto L_004fe84d;
L_004fe84a:; BB(0x004fe84a);
    /* 004fe84a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe84d:; BB(0x004fe84d);
    /* 004fe84d: lea eax, [ebp + 0x44] */ r_eax = (u32)(r_ebp+0x44u);
    /* 004fe850: movsx ebp, word ptr [ebp + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x44u));
    /* 004fe854: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe857: je 0x4fe85c */ if (fZ) goto L_004fe85c;
L_004fe859:; BB(0x004fe859);
    /* 004fe859: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe85c:; BB(0x004fe85c);
    /* 004fe85c: movsx ebp, word ptr [eax + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x44u));
    /* 004fe860: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe863: je 0x4fe868 */ if (fZ) goto L_004fe868;
L_004fe865:; BB(0x004fe865);
    /* 004fe865: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe868:; BB(0x004fe868);
    /* 004fe868: movsx ebp, word ptr [eax + 0x88] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x88u));
    /* 004fe86f: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe872: je 0x4fe877 */ if (fZ) goto L_004fe877;
L_004fe874:; BB(0x004fe874);
    /* 004fe874: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe877:; BB(0x004fe877);
    /* 004fe877: lea ebp, [eax + 0xcc] */ r_ebp = (u32)(r_eax+0xccu);
    /* 004fe87d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe880: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe886: jl 0x4fe841 */ if ((fS!=fO)) goto L_004fe841;
L_004fe888:; BB(0x004fe888);
    /* 004fe888: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fe88e: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 004fe891: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe892: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004fe895: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 004fe897: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fe899: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fe89eu); f_00810160();
    /* 004fe89e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004fe8a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe8a3: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fe8a8u); f_008123d8();
    /* 004fe8a8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe8ab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fe8ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fe8af: jle 0x4fe8d2 */ if ((fZ||fS!=fO)) goto L_004fe8d2;
L_004fe8b1:; BB(0x004fe8b1);
    /* 004fe8b1: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_004fe8b5:; BB(0x004fe8b5);
    /* 004fe8b5: movsx ecx, word ptr [edi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fe8b8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe8bb: je 0x4fe8c8 */ if (fZ) goto L_004fe8c8;
L_004fe8bd:; BB(0x004fe8bd);
    /* 004fe8bd: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fe8c1: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe8c3: jne 0x4fe8c8 */ if (!fZ) goto L_004fe8c8;
L_004fe8c5:; BB(0x004fe8c5);
    /* 004fe8c5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe8c8:; BB(0x004fe8c8);
    /* 004fe8c8: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004fe8cb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe8ce: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe8d0: jl 0x4fe8b5 */ if ((fS!=fO)) goto L_004fe8b5;
L_004fe8d2:; BB(0x004fe8d2);
    /* 004fe8d2: mov edi, dword ptr [0xa727bc] */ r_edi = R32((u32)(0xa727bcu));
    /* 004fe8d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004fe8da:; BB(0x004fe8da);
    /* 004fe8da: movsx eax, word ptr [edi] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004fe8dd: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe8e0: je 0x4fe8ed */ if (fZ) goto L_004fe8ed;
L_004fe8e2:; BB(0x004fe8e2);
    /* 004fe8e2: movsx eax, word ptr [edi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004fe8e6: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe8e8: jne 0x4fe8ed */ if (!fZ) goto L_004fe8ed;
L_004fe8ea:; BB(0x004fe8ea);
    /* 004fe8ea: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe8ed:; BB(0x004fe8ed);
    /* 004fe8ed: lea eax, [edi + 0x44] */ r_eax = (u32)(r_edi+0x44u);
    /* 004fe8f0: movsx edi, word ptr [edi + 0x44] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x44u));
    /* 004fe8f4: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe8f7: je 0x4fe904 */ if (fZ) goto L_004fe904;
L_004fe8f9:; BB(0x004fe8f9);
    /* 004fe8f9: movsx edi, word ptr [eax + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004fe8fd: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe8ff: jne 0x4fe904 */ if (!fZ) goto L_004fe904;
L_004fe901:; BB(0x004fe901);
    /* 004fe901: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fe904:; BB(0x004fe904);
    /* 004fe904: lea edi, [eax + 0x44] */ r_edi = (u32)(r_eax+0x44u);
    /* 004fe907: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fe90a: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fe910: jl 0x4fe8da */ if ((fS!=fO)) goto L_004fe8da;
L_004fe912:; BB(0x004fe912);
    /* 004fe912: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 004fe915: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fe918: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fe919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe91a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fe91b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fe91c: ret  */ FN_RET(0x004fe3b0); r_esp += 4; return;
L_004fe91d:; BB(0x004fe91d);
    /* 004fe91d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004fe921: mov eax, ecx */ r_eax = r_ecx;
    /* 004fe923: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004fe926: mov dword ptr [esi + 0xf8], edx */ W32((u32)(r_esi+0xf8u), r_edx);
    /* 004fe92c: jmp 0x4fe4ac */ goto L_004fe4ac;
L_004fe931:; BB(0x004fe931);
    /* 004fe931: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fe933: jmp 0x4fe413 */ goto L_004fe413;
L_004fe938:; BB(0x004fe938);
    /* 004fe938: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004fe93a: jmp 0x4fe458 */ goto L_004fe458;
}

void f_004fe940(void) /* sub_4FE940 */
{
    FN_ENTER(0x004fe940);
    /* 004fe940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe941: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe942: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004fe944: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004fe948: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe949: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe94b: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe951: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe956u); f_004f80e0();
    /* 004fe956: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe957: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe95d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe95f: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe964u); f_004f80e0();
    /* 004fe964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe965: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe96b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe96d: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe972u); f_004f80e0();
    /* 004fe972: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe973: push dword ptr [0xaca34c] */ { u32 v = R32((u32)(0xaca34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe979: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe97b: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe980u); f_004f80e0();
    /* 004fe980: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe981: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe987: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe989: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe98eu); f_004f80e0();
    /* 004fe98e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe98f: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe995: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe997: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe99cu); f_004f80e0();
    /* 004fe99c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe99d: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe9a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe9a5: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe9aau); f_004f80e0();
    /* 004fe9aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9ab: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe9b1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe9b3: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe9b8u); f_004f80e0();
    /* 004fe9b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9b9: push dword ptr [0xa8fa80] */ { u32 v = R32((u32)(0xa8fa80u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fe9bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004fe9c1: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4fe9c6u); f_004f80e0();
    /* 004fe9c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fe9c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fe9c8: ret 4 */ FN_RET(0x004fe940); r_esp += 8; return;
}

void f_004fe9cc(void) /* sub_4FE9CC */
{
    FN_ENTER(0x004fe9cc);
    /* 004fe9cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9d0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fe9d3: mov esi, ecx */ r_esi = r_ecx;
    /* 004fe9d5: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9da: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4fe9dfu); f_0082e940();
    /* 004fe9df: mov edi, eax */ r_edi = r_eax;
    /* 004fe9e1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe9e4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fe9e6: je 0x4fed1c */ if (fZ) goto L_004fed1c;
L_004fe9ec:; BB(0x004fe9ec);
    /* 004fe9ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9ed: lea edx, [esi + 0x11c] */ r_edx = (u32)(r_esi+0x11cu);
    /* 004fe9f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fe9f4: call 0x5b9ec4 */ r_esp -= 4; W32(r_esp, 0x4fe9f9u); f_005b9ec4();
    /* 004fe9f9: mov edx, eax */ r_edx = r_eax;
    /* 004fe9fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fe9fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fea00: jle 0x4febeb */ if ((fZ||fS!=fO)) goto L_004febeb;
L_004fea06:; BB(0x004fea06);
    /* 004fea06: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 004fea0b: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004fea0d: mov ebp, edi */ r_ebp = r_edi;
    /* 004fea0f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fea11: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004fea14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fea16: jle 0x4febeb */ if ((fZ||fS!=fO)) goto L_004febeb;
L_004fea1c:; BB(0x004fea1c);
    /* 004fea1c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004fea20: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 004fea24: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_004fea27:; BB(0x004fea27);
    /* 004fea27: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 004fea2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fea2e: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fea33u); f_00810160();
    /* 004fea33: mov esi, eax */ r_esi = r_eax;
    /* 004fea35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fea36: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fea3bu); f_008123d8();
    /* 004fea3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fea3e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fea40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fea42: jle 0x4feaa4 */ if ((fZ||fS!=fO)) goto L_004feaa4;
L_004fea44:; BB(0x004fea44);
    /* 004fea44: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fea47: jl 0x4fea92 */ if ((fS!=fO)) goto L_004fea92;
L_004fea49:; BB(0x004fea49);
    /* 004fea49: lea edi, [eax - 6] */ r_edi = (u32)(r_eax+0xfffffffau);
L_004fea4c:; BB(0x004fea4c);
    /* 004fea4c: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fea4f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fea52: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fea58:; BB(0x004fea58);
    /* 004fea58: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fea5b: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fea5e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fea61: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fea67:; BB(0x004fea67);
    /* 004fea67: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fea6a: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fea6d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fea70: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fea72:; BB(0x004fea72);
    /* 004fea72: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fea75: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fea78: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fea7b: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fea7d:; BB(0x004fea7d);
    /* 004fea7d: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fea80: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fea83: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fea86: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fea88:; BB(0x004fea88);
    /* 004fea88: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fea8b: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fea8e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fea90: jle 0x4fea4c */ if ((fZ||fS!=fO)) goto L_004fea4c;
L_004fea92:; BB(0x004fea92);
    /* 004fea92: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fea95: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fea98: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fea9a:; BB(0x004fea9a);
    /* 004fea9a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fea9d: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004feaa0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004feaa2: jl 0x4fea92 */ if ((fS!=fO)) goto L_004fea92;
L_004feaa4:; BB(0x004feaa4);
    /* 004feaa4: mov esi, dword ptr [0xa727bc] */ r_esi = R32((u32)(0xa727bcu));
    /* 004feaaa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004feaac:; BB(0x004feaac);
    /* 004feaac: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004feaaf: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feab2: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004feab4:; BB(0x004feab4);
    /* 004feab4: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004feab7: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004feaba: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feabd: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004feabf:; BB(0x004feabf);
    /* 004feabf: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004feac2: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004feac5: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feac8: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004feaca:; BB(0x004feaca);
    /* 004feaca: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004feacd: movsx edi, word ptr [esi] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004fead0: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fead3: je 0x4feae5 */ if (fZ) goto L_004feae5;
L_004fead5:; BB(0x004fead5);
    /* 004fead5: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004fead8: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004feadb: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004feae1: jl 0x4feaac */ if ((fS!=fO)) goto L_004feaac;
L_004feae3:; BB(0x004feae3);
    /* 004feae3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004feae5:; BB(0x004feae5);
    /* 004feae5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feae7: je 0x4febd2 */ if (fZ) goto L_004febd2;
L_004feaed:; BB(0x004feaed);
    /* 004feaed: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004feaf0: mov edi, dword ptr [ebp + 4] */ r_edi = R32((u32)(r_ebp+0x4u));
    /* 004feaf3: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004feaf5: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004feaf8: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004feafb: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004feafe: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 004feb01: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004feb04: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004feb07: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004feb0a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 004feb0d: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004feb10: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004feb13: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004feb16: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004feb19: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004feb1c: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004feb1f: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004feb22: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 004feb25: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004feb28: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 004feb2b: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004feb2e: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 004feb31: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004feb34: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 004feb37: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004feb3a: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 004feb3d: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004feb40: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 004feb43: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004feb46: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004feb49: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004feb4c: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004feb4f: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004feb52: mov ecx, esi */ r_ecx = r_esi;
    /* 004feb54: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4feb59u); f_0061cdb0();
    /* 004feb59: movsx edx, word ptr [esi + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004feb5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004feb5e: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4feb63u); f_00807ac8();
    /* 004feb63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004feb64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feb66: je 0x4fed44 */ if (fZ) goto L_004fed44;
L_004feb6c:; BB(0x004feb6c);
    /* 004feb6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004feb6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004feb6f: lea edi, [esi + 0x10] */ r_edi = (u32)(r_esi+0x10u);
    /* 004feb72: lea edx, [esi + 0x1c] */ r_edx = (u32)(r_esi+0x1cu);
    /* 004feb75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004feb76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004feb77: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004feb7b: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4feb80u); f_004f7fc0();
    /* 004feb80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004feb82: call 0x7ba898 */ r_esp -= 4; W32(r_esp, 0x4feb87u); f_007ba898();
    /* 004feb87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004feb88: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004feb8c: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4feb91u); f_00807ac0();
    /* 004feb91: mov eax, dword ptr [eax*4 + 0xa06be0] */ r_eax = R32((u32)(r_eax*4+0xa06be0u));
    /* 004feb98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feb9a: je 0x4fed3d */ if (fZ) goto L_004fed3d;
L_004feba0:; BB(0x004feba0);
    /* 004feba0: movsx edi, word ptr [eax] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 004feba3: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004feba6: je 0x4febbf */ if (fZ) goto L_004febbf;
L_004feba8:; BB(0x004feba8);
    /* 004feba8: movsx edx, word ptr [esi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi));
L_004febab:; BB(0x004febab);
    /* 004febab: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004febad: je 0x4fed30 */ if (fZ) goto L_004fed30;
L_004febb3:; BB(0x004febb3);
    /* 004febb3: movsx edi, word ptr [eax + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 004febb7: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004febba: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004febbd: jne 0x4febab */ if (!fZ) goto L_004febab;
L_004febbf:; BB(0x004febbf);
    /* 004febbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004febc1:; BB(0x004febc1);
    /* 004febc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004febc3: je 0x4fed24 */ if (fZ) goto L_004fed24;
L_004febc9:; BB(0x004febc9);
    /* 004febc9: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 004febcc: mov dword ptr [eax + 0x80], esi */ W32((u32)(r_eax+0x80u), r_esi);
L_004febd2:; BB(0x004febd2);
    /* 004febd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004febd6: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004febd9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004febdc: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004febde: jl 0x4fea27 */ if ((fS!=fO)) goto L_004fea27;
L_004febe4:; BB(0x004febe4);
    /* 004febe4: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004febe8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004febeb:; BB(0x004febeb);
    /* 004febeb: mov ebp, dword ptr [0xaafca0] */ r_ebp = R32((u32)(0xaafca0u));
    /* 004febf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004febf2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004febf4: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4febf9u); f_00810160();
    /* 004febf9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004febfd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004febfe: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fec03u); f_008123d8();
    /* 004fec03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fec06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004fec08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004fec0a: jle 0x4fec26 */ if ((fZ||fS!=fO)) goto L_004fec26;
L_004fec0c:; BB(0x004fec0c);
    /* 004fec0c: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_004fec10:; BB(0x004fec10);
    /* 004fec10: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fec14: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fec17: je 0x4fec1c */ if (fZ) goto L_004fec1c;
L_004fec19:; BB(0x004fec19);
    /* 004fec19: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fec1c:; BB(0x004fec1c);
    /* 004fec1c: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fec1f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fec22: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fec24: jl 0x4fec10 */ if ((fS!=fO)) goto L_004fec10;
L_004fec26:; BB(0x004fec26);
    /* 004fec26: mov ebp, dword ptr [0xa727bc] */ r_ebp = R32((u32)(0xa727bcu));
    /* 004fec2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004fec2e:; BB(0x004fec2e);
    /* 004fec2e: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fec32: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fec35: je 0x4fec3a */ if (fZ) goto L_004fec3a;
L_004fec37:; BB(0x004fec37);
    /* 004fec37: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fec3a:; BB(0x004fec3a);
    /* 004fec3a: lea edx, [ebp + 0x44] */ r_edx = (u32)(r_ebp+0x44u);
    /* 004fec3d: movsx ebp, word ptr [ebp + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x44u));
    /* 004fec41: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fec44: je 0x4fec49 */ if (fZ) goto L_004fec49;
L_004fec46:; BB(0x004fec46);
    /* 004fec46: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fec49:; BB(0x004fec49);
    /* 004fec49: movsx ebp, word ptr [edx + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x44u));
    /* 004fec4d: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fec50: je 0x4fec55 */ if (fZ) goto L_004fec55;
L_004fec52:; BB(0x004fec52);
    /* 004fec52: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fec55:; BB(0x004fec55);
    /* 004fec55: movsx ebp, word ptr [edx + 0x88] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x88u));
    /* 004fec5c: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fec5f: je 0x4fec64 */ if (fZ) goto L_004fec64;
L_004fec61:; BB(0x004fec61);
    /* 004fec61: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fec64:; BB(0x004fec64);
    /* 004fec64: lea ebp, [edx + 0xcc] */ r_ebp = (u32)(r_edx+0xccu);
    /* 004fec6a: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fec6d: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fec73: jl 0x4fec2e */ if ((fS!=fO)) goto L_004fec2e;
L_004fec75:; BB(0x004fec75);
    /* 004fec75: mov ebp, dword ptr [0xaafca0] */ r_ebp = R32((u32)(0xaafca0u));
    /* 004fec7b: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 004fec7e: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004fec81: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004fec83: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004fec87: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fec88: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004fec8a: call 0x810160 */ r_esp -= 4; W32(r_esp, 0x4fec8fu); f_00810160();
    /* 004fec8f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004fec93: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fec94: call 0x8123d8 */ r_esp -= 4; W32(r_esp, 0x4fec99u); f_008123d8();
    /* 004fec99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fec9c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fec9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004feca0: jle 0x4feccd */ if ((fZ||fS!=fO)) goto L_004feccd;
L_004feca2:; BB(0x004feca2);
    /* 004feca2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004feca6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004fecaa: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_004fecad:; BB(0x004fecad);
    /* 004fecad: movsx esi, word ptr [edx] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004fecb0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fecb3: je 0x4fecc0 */ if (fZ) goto L_004fecc0;
L_004fecb5:; BB(0x004fecb5);
    /* 004fecb5: movsx esi, word ptr [edx + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fecb9: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fecbb: jne 0x4fecc0 */ if (!fZ) goto L_004fecc0;
L_004fecbd:; BB(0x004fecbd);
    /* 004fecbd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fecc0:; BB(0x004fecc0);
    /* 004fecc0: add edx, 0x44 */ {  u32 a = r_edx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004fecc3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004fecc6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fecc8: jl 0x4fecad */ if ((fS!=fO)) goto L_004fecad;
L_004fecca:; BB(0x004fecca);
    /* 004fecca: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_004feccd:; BB(0x004feccd);
    /* 004feccd: mov ebp, dword ptr [0xa727bc] */ r_ebp = R32((u32)(0xa727bcu));
    /* 004fecd3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004fecd7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_004fecd9:; BB(0x004fecd9);
    /* 004fecd9: movsx edx, word ptr [ebp] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 004fecdd: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fece0: je 0x4feced */ if (fZ) goto L_004feced;
L_004fece2:; BB(0x004fece2);
    /* 004fece2: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 004fece6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fece8: jne 0x4feced */ if (!fZ) goto L_004feced;
L_004fecea:; BB(0x004fecea);
    /* 004fecea: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004feced:; BB(0x004feced);
    /* 004feced: lea edx, [ebp + 0x44] */ r_edx = (u32)(r_ebp+0x44u);
    /* 004fecf0: movsx ebp, word ptr [ebp + 0x44] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x44u));
    /* 004fecf4: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fecf7: je 0x4fed04 */ if (fZ) goto L_004fed04;
L_004fecf9:; BB(0x004fecf9);
    /* 004fecf9: movsx ebp, word ptr [edx + 0xc] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004fecfd: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fecff: jne 0x4fed04 */ if (!fZ) goto L_004fed04;
L_004fed01:; BB(0x004fed01);
    /* 004fed01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004fed04:; BB(0x004fed04);
    /* 004fed04: lea ebp, [edx + 0x44] */ r_ebp = (u32)(r_edx+0x44u);
    /* 004fed07: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004fed0a: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004fed10: jl 0x4fecd9 */ if ((fS!=fO)) goto L_004fecd9;
L_004fed12:; BB(0x004fed12);
    /* 004fed12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fed13: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 004fed16: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4fed1bu); f_0082e960();
    /* 004fed1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004fed1c:; BB(0x004fed1c);
    /* 004fed1c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fed1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fed20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004fed21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004fed22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004fed23: ret  */ FN_RET(0x004fe9cc); r_esp += 4; return;
L_004fed24:; BB(0x004fed24);
    /* 004fed24: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
    /* 004fed2b: jmp 0x4febd2 */ goto L_004febd2;
L_004fed30:; BB(0x004fed30);
    /* 004fed30: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 004fed33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fed34: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4fed37u); call_ind(t); }
    /* 004fed37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fed38: jmp 0x4febc1 */ goto L_004febc1;
L_004fed3d:; BB(0x004fed3d);
    /* 004fed3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004fed3f: jmp 0x4febc1 */ goto L_004febc1;
L_004fed44:; BB(0x004fed44);
    /* 004fed44: push 0x91ecb4 */ { u32 v = 0x91ecb4u; r_esp -= 4; W32(r_esp, v); }
    /* 004fed49: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fed4eu); f_0061cdb0();
    /* 004fed4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004fed4f: jmp 0x4febd2 */ goto L_004febd2;
}

void f_004fed54(void) /* sub_4FED54 */
{
    FN_ENTER(0x004fed54);
    /* 004fed54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fed55: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fed58: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fed5a: fld dword ptr [ebx + 0xbc] */ FPUSH(R_F32((u32)(r_ebx+0xbcu)));
    /* 004fed60: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fed64: mov dword ptr [esp], 0x10014 */ W32((u32)(r_esp), 0x10014u);
    /* 004fed6b: mov dword ptr [esp + 4], 0x91eb7c */ W32((u32)(r_esp+0x4u), 0x91eb7cu);
    /* 004fed73: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fed78u); f_0061cdb0();
    /* 004fed78: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004fed7e: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fed82: mov dword ptr [esp], 0x10015 */ W32((u32)(r_esp), 0x10015u);
    /* 004fed89: mov dword ptr [esp + 4], 0x91ea0c */ W32((u32)(r_esp+0x4u), 0x91ea0cu);
    /* 004fed91: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fed96u); f_0061cdb0();
    /* 004fed96: fld dword ptr [ebx + 0xc4] */ FPUSH(R_F32((u32)(r_ebx+0xc4u)));
    /* 004fed9c: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004feda0: mov dword ptr [esp], 0x10016 */ W32((u32)(r_esp), 0x10016u);
    /* 004feda7: mov dword ptr [esp + 4], 0x91ea1c */ W32((u32)(r_esp+0x4u), 0x91ea1cu);
    /* 004fedaf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fedb4u); f_0061cdb0();
    /* 004fedb4: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004fedba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fedbc: jne 0x4feddf */ if (!fZ) goto L_004feddf;
L_004fedbe:; BB(0x004fedbe);
    /* 004fedbe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fedc0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004fedc2: lea edx, [ebx + 0xbc] */ r_edx = (u32)(r_ebx+0xbcu);
    /* 004fedc8: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 004fedce: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fedd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fedd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fedd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fedd4: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fedd9u); f_004f745c();
    /* 004fedd9: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
L_004feddf:; BB(0x004feddf);
    /* 004feddf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fede2: je 0x4fee0e */ if (fZ) goto L_004fee0e;
L_004fede4:; BB(0x004fede4);
    /* 004fede4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fede7: je 0x4fedee */ if (fZ) goto L_004fedee;
L_004fede9:; BB(0x004fede9);
    /* 004fede9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fedec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004feded: ret  */ FN_RET(0x004fed54); r_esp += 4; return;
L_004fedee:; BB(0x004fedee);
    /* 004fedee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fedf0: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004fedf2: lea edx, [ebx + 0xc4] */ r_edx = (u32)(r_ebx+0xc4u);
    /* 004fedf8: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 004fedfe: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fee00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fee01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fee03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fee04: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fee09u); f_004f745c();
    /* 004fee09: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fee0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fee0d: ret  */ FN_RET(0x004fed54); r_esp += 4; return;
L_004fee0e:; BB(0x004fee0e);
    /* 004fee0e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fee10: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 004fee12: lea edx, [ebx + 0xc0] */ r_edx = (u32)(r_ebx+0xc0u);
    /* 004fee18: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 004fee1e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fee20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fee21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fee23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fee24: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fee29u); f_004f745c();
    /* 004fee29: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004fee2f: jmp 0x4fede4 */ goto L_004fede4;
}

void f_004fee34(void) /* sub_4FEE34 */
{
    FN_ENTER(0x004fee34);
    /* 004fee34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004fee35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fee36: mov edi, ecx */ r_edi = r_ecx;
    /* 004fee38: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fee3e: push 0x91eb8c */ { u32 v = 0x91eb8cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fee43: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 004fee48: push 0x10018 */ { u32 v = 0x10018u; r_esp -= 4; W32(r_esp, v); }
    /* 004fee4d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fee52u); f_0061cdb0();
    /* 004fee52: push dword ptr [edi + 0xcc] */ { u32 v = R32((u32)(r_edi+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 004fee58: push 0x91ea3c */ { u32 v = 0x91ea3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fee5d: push 0x10019 */ { u32 v = 0x10019u; r_esp -= 4; W32(r_esp, v); }
    /* 004fee62: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fee67u); f_0061cdb0();
    /* 004fee67: push dword ptr [edi + 0xd0] */ { u32 v = R32((u32)(r_edi+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004fee6d: push 0x91ea4c */ { u32 v = 0x91ea4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fee72: push 0x1001a */ { u32 v = 0x1001au; r_esp -= 4; W32(r_esp, v); }
    /* 004fee77: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fee7cu); f_0061cdb0();
    /* 004fee7c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004fee7f: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fee85: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fee88: je 0x4feef4 */ if (fZ) goto L_004feef4;
L_004fee8a:; BB(0x004fee8a);
    /* 004fee8a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fee8d: je 0x4feecc */ if (fZ) goto L_004feecc;
L_004fee8f:; BB(0x004fee8f);
    /* 004fee8f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fee92: je 0x4feeaa */ if (fZ) goto L_004feeaa;
L_004fee94:; BB(0x004fee94);
    /* 004fee94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004fee95: lea eax, [edi + 0xc8] */ r_eax = (u32)(r_edi+0xc8u);
    /* 004fee9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fee9c: mov ecx, edi */ r_ecx = r_edi;
    /* 004fee9e: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 004feea0: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004feea2: call 0x4f7db0 */ r_esp -= 4; W32(r_esp, 0x4feea7u); f_004f7db0();
    /* 004feea7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004feea8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004feea9: ret  */ FN_RET(0x004fee34); r_esp += 4; return;
L_004feeaa:; BB(0x004feeaa);
    /* 004feeaa: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004feeac: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004feeae: lea edx, [edi + 0xd0] */ r_edx = (u32)(r_edi+0xd0u);
    /* 004feeb4: lea eax, [edi + 0xa4] */ r_eax = (u32)(r_edi+0xa4u);
    /* 004feeba: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004feebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004feebd: mov ecx, edi */ r_ecx = r_edi;
    /* 004feebf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004feec0: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4feec5u); f_004f76ac();
    /* 004feec5: mov ebp, 2 */ r_ebp = 0x2u;
    /* 004feeca: jmp 0x4fee94 */ goto L_004fee94;
L_004feecc:; BB(0x004feecc);
    /* 004feecc: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004feece: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004feed0: lea edx, [edi + 0xcc] */ r_edx = (u32)(r_edi+0xccu);
    /* 004feed6: lea eax, [edi + 0xa4] */ r_eax = (u32)(r_edi+0xa4u);
    /* 004feedc: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004feede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004feedf: mov ecx, edi */ r_ecx = r_edi;
    /* 004feee1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004feee2: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4feee7u); f_004f76ac();
    /* 004feee7: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004feeed: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004feef2: jmp 0x4fee8f */ goto L_004fee8f;
L_004feef4:; BB(0x004feef4);
    /* 004feef4: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004feef6: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004feef8: lea edx, [edi + 0xc8] */ r_edx = (u32)(r_edi+0xc8u);
    /* 004feefe: lea eax, [edi + 0xa4] */ r_eax = (u32)(r_edi+0xa4u);
    /* 004fef04: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fef06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fef07: mov ecx, edi */ r_ecx = r_edi;
    /* 004fef09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fef0a: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4fef0fu); f_004f76ac();
    /* 004fef0f: mov eax, dword ptr [edi + 0x9c] */ r_eax = R32((u32)(r_edi+0x9cu));
    /* 004fef15: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004fef17: jmp 0x4fee8a */ goto L_004fee8a;
}

void f_004fef1c(void) /* sub_4FEF1C */
{
    FN_ENTER(0x004fef1c);
    /* 004fef1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004fef1d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004fef20: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004fef22: fld dword ptr [ebx + 0xd4] */ FPUSH(R_F32((u32)(r_ebx+0xd4u)));
    /* 004fef28: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fef2c: mov dword ptr [esp], 0x1001c */ W32((u32)(r_esp), 0x1001cu);
    /* 004fef33: mov dword ptr [esp + 4], 0x91ed74 */ W32((u32)(r_esp+0x4u), 0x91ed74u);
    /* 004fef3b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fef40u); f_0061cdb0();
    /* 004fef40: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 004fef46: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fef4a: mov dword ptr [esp], 0x1001d */ W32((u32)(r_esp), 0x1001du);
    /* 004fef51: mov dword ptr [esp + 4], 0x91ea0c */ W32((u32)(r_esp+0x4u), 0x91ea0cu);
    /* 004fef59: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fef5eu); f_0061cdb0();
    /* 004fef5e: fld dword ptr [ebx + 0xdc] */ FPUSH(R_F32((u32)(r_ebx+0xdcu)));
    /* 004fef64: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004fef68: mov dword ptr [esp], 0x1001e */ W32((u32)(r_esp), 0x1001eu);
    /* 004fef6f: mov dword ptr [esp + 4], 0x91ea1c */ W32((u32)(r_esp+0x4u), 0x91ea1cu);
    /* 004fef77: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4fef7cu); f_0061cdb0();
    /* 004fef7c: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004fef82: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fef85: je 0x4fefd9 */ if (fZ) goto L_004fefd9;
L_004fef87:; BB(0x004fef87);
    /* 004fef87: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fef8a: je 0x4fefb6 */ if (fZ) goto L_004fefb6;
L_004fef8c:; BB(0x004fef8c);
    /* 004fef8c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004fef8f: je 0x4fef96 */ if (fZ) goto L_004fef96;
L_004fef91:; BB(0x004fef91);
    /* 004fef91: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fef94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fef95: ret  */ FN_RET(0x004fef1c); r_esp += 4; return;
L_004fef96:; BB(0x004fef96);
    /* 004fef96: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fef98: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 004fef9a: lea edx, [ebx + 0xdc] */ r_edx = (u32)(r_ebx+0xdcu);
    /* 004fefa0: lea eax, [ebx + 0xa8] */ r_eax = (u32)(r_ebx+0xa8u);
    /* 004fefa6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fefa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fefa9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fefab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fefac: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fefb1u); f_004f745c();
    /* 004fefb1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004fefb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004fefb5: ret  */ FN_RET(0x004fef1c); r_esp += 4; return;
L_004fefb6:; BB(0x004fefb6);
    /* 004fefb6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fefb8: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 004fefba: lea edx, [ebx + 0xd8] */ r_edx = (u32)(r_ebx+0xd8u);
    /* 004fefc0: lea eax, [ebx + 0xa8] */ r_eax = (u32)(r_ebx+0xa8u);
    /* 004fefc6: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fefc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fefc9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fefcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fefcc: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4fefd1u); f_004f745c();
    /* 004fefd1: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004fefd7: jmp 0x4fef8c */ goto L_004fef8c;
L_004fefd9:; BB(0x004fefd9);
    /* 004fefd9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004fefdb: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004fefdd: lea edx, [ebx + 0xd4] */ r_edx = (u32)(r_ebx+0xd4u);
    /* 004fefe3: lea eax, [ebx + 0xa8] */ r_eax = (u32)(r_ebx+0xa8u);
    /* 004fefe9: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004fefeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004fefec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004fefee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004fefef: call 0x4f745c */ r_esp -= 4; W32(r_esp, 0x4feff4u); f_004f745c();
    /* 004feff4: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004feffa: jmp 0x4fef87 */ goto L_004fef87;
}

void f_004feffc(void) /* sub_4FEFFC */
{
    FN_ENTER(0x004feffc);
    /* 004feffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004feffd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004feffe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ff000: push dword ptr [ebp + 0xe0] */ { u32 v = R32((u32)(r_ebp+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ff006: push 0x91ed84 */ { u32 v = 0x91ed84u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff00b: lea ebx, [ebp + 0xe0] */ r_ebx = (u32)(r_ebp+0xe0u);
    /* 004ff011: push 0x10020 */ { u32 v = 0x10020u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff016: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff01bu); f_0061cdb0();
    /* 004ff01b: push dword ptr [ebp + 0xe4] */ { u32 v = R32((u32)(r_ebp+0xe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ff021: push 0x91ed94 */ { u32 v = 0x91ed94u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff026: push 0x10021 */ { u32 v = 0x10021u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff02b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff030u); f_0061cdb0();
    /* 004ff030: push dword ptr [ebp + 0xe8] */ { u32 v = R32((u32)(r_ebp+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ff036: push 0x91eda4 */ { u32 v = 0x91eda4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff03b: push 0x10022 */ { u32 v = 0x10022u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff040: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ff045u); f_0061cdb0();
    /* 004ff045: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ff048: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 004ff04e: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff051: je 0x4ff0a1 */ if (fZ) goto L_004ff0a1;
L_004ff053:; BB(0x004ff053);
    /* 004ff053: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ff056: je 0x4ff07e */ if (fZ) goto L_004ff07e;
L_004ff058:; BB(0x004ff058);
    /* 004ff058: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ff05b: je 0x4ff060 */ if (fZ) goto L_004ff060;
L_004ff05d:; BB(0x004ff05d);
    /* 004ff05d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff05e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff05f: ret  */ FN_RET(0x004feffc); r_esp += 4; return;
L_004ff060:; BB(0x004ff060);
    /* 004ff060: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff062: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff064: lea edx, [ebp + 0xe8] */ r_edx = (u32)(r_ebp+0xe8u);
    /* 004ff06a: lea eax, [ebp + 0xac] */ r_eax = (u32)(r_ebp+0xacu);
    /* 004ff070: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff073: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ff075: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff076: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4ff07bu); f_004f76ac();
    /* 004ff07b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ff07c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ff07d: ret  */ FN_RET(0x004feffc); r_esp += 4; return;
L_004ff07e:; BB(0x004ff07e);
    /* 004ff07e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff080: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff082: lea edx, [ebp + 0xe4] */ r_edx = (u32)(r_ebp+0xe4u);
    /* 004ff088: lea eax, [ebp + 0xac] */ r_eax = (u32)(r_ebp+0xacu);
    /* 004ff08e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff091: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ff093: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff094: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4ff099u); f_004f76ac();
    /* 004ff099: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 004ff09f: jmp 0x4ff058 */ goto L_004ff058;
L_004ff0a1:; BB(0x004ff0a1);
    /* 004ff0a1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0a3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0a5: lea eax, [ebp + 0xac] */ r_eax = (u32)(r_ebp+0xacu);
    /* 004ff0ab: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ff0ad: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ff0b1: call 0x4f76ac */ r_esp -= 4; W32(r_esp, 0x4ff0b6u); f_004f76ac();
    /* 004ff0b6: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 004ff0bc: jmp 0x4ff053 */ goto L_004ff053;
}

