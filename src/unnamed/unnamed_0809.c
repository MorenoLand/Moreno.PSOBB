#include "protos.h"

void f_00809098(void) /* sub_809098 */
{
    FN_ENTER(0x00809098);
    /* 00809098: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809099: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080909a: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008090a0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008090a2: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 008090a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008090aa: je 0x8095c3 */ if (fZ) goto L_008095c3;
L_008090b0:; BB(0x008090b0);
    /* 008090b0: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 008090b7: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008090ba: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008090bc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 008090c0: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 008090c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008090c7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008090c9: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 008090cd: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 008090d1: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 008090d5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 008090da: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x8090dfu); f_0082d990();
    /* 008090df: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 008090e4: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 008090ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008090ec: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8090f1u); f_0082d8bc();
    /* 008090f1: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 008090f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008090f6: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 008090fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008090fc: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x809101u); f_0082eab8();
    /* 00809101: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00809105: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x80910au); f_0082df08();
    /* 0080910a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080910c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00809111: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x809116u); f_0082eb80();
    /* 00809116: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080911c: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0080911f: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 00809123: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00809125: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809127: jle 0x8095c3 */ if ((fZ||fS!=fO)) goto L_008095c3;
L_0080912d:; BB(0x0080912d);
    /* 0080912d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00809131: mov ebx, eax */ r_ebx = r_eax;
    /* 00809133: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
L_00809137:; BB(0x00809137);
    /* 00809137: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 0080913a: test ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809140: je 0x8092d9 */ if (fZ) goto L_008092d9;
L_00809146:; BB(0x00809146);
    /* 00809146: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0080914c: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0080914f: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00809152: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00809155: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00809157: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809159: jle 0x80920d */ if ((fZ||fS!=fO)) goto L_0080920d;
L_0080915f:; BB(0x0080915f);
    /* 0080915f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00809162: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00809166: mov ebx, edx */ r_ebx = r_edx;
    /* 00809168: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
L_0080916c:; BB(0x0080916c);
    /* 0080916c: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0080916e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809170: je 0x8091f4 */ if (fZ) goto L_008091f4;
L_00809176:; BB(0x00809176);
    /* 00809176: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00809179: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080917f: je 0x809184 */ if (fZ) goto L_00809184;
L_00809181:; BB(0x00809181);
    /* 00809181: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00809184:; BB(0x00809184);
    /* 00809184: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00809187: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809189: je 0x8091e4 */ if (fZ) goto L_008091e4;
L_0080918b:; BB(0x0080918b);
    /* 0080918b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00809190: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809192: je 0x8091e4 */ if (fZ) goto L_008091e4;
L_00809194:; BB(0x00809194);
    /* 00809194: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 00809197: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809198: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080919d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080919e: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x8091a3u); f_0078ea50();
    /* 008091a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008091a6: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 008091a9: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 008091ac: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 008091ae: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 008091b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008091b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008091b3: ja 0x8091cd */ if ((!fC&&!fZ)) goto L_008091cd;
L_008091b5:; BB(0x008091b5);
    /* 008091b5: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 008091ba: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 008091bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008091c0: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008091c4: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x8091c9u); f_00808660();
    /* 008091c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008091cb: je 0x8091e1 */ if (fZ) goto L_008091e1;
L_008091cd:; BB(0x008091cd);
    /* 008091cd: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008091d1: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008091d4: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008091d9: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 008091dc: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 008091df: jmp 0x8091f4 */ goto L_008091f4;
L_008091e1:; BB(0x008091e1);
    /* 008091e1: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_008091e4:; BB(0x008091e4);
    /* 008091e4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008091e8: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008091ee: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008091f1: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
L_008091f4:; BB(0x008091f4);
    /* 008091f4: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008091f7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008091fa: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008091fc: jl 0x80916c */ if ((fS!=fO)) goto L_0080916c;
L_00809202:; BB(0x00809202);
    /* 00809202: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00809205: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00809209: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_0080920d:; BB(0x0080920d);
    /* 0080920d: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00809210: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00809213: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00809215: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809217: jle 0x8092cb */ if ((fZ||fS!=fO)) goto L_008092cb;
L_0080921d:; BB(0x0080921d);
    /* 0080921d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00809220: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00809224: mov ebx, edx */ r_ebx = r_edx;
    /* 00809226: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
L_0080922a:; BB(0x0080922a);
    /* 0080922a: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0080922c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080922e: je 0x8092b2 */ if (fZ) goto L_008092b2;
L_00809234:; BB(0x00809234);
    /* 00809234: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 00809237: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080923d: je 0x809242 */ if (fZ) goto L_00809242;
L_0080923f:; BB(0x0080923f);
    /* 0080923f: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
L_00809242:; BB(0x00809242);
    /* 00809242: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00809245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809247: je 0x8092a2 */ if (fZ) goto L_008092a2;
L_00809249:; BB(0x00809249);
    /* 00809249: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0080924e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809250: je 0x8092a2 */ if (fZ) goto L_008092a2;
L_00809252:; BB(0x00809252);
    /* 00809252: lea edi, [ebp + 8] */ r_edi = (u32)(r_ebp+0x8u);
    /* 00809255: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809256: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080925b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080925c: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x809261u); f_0078ea50();
    /* 00809261: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809264: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00809267: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0080926a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0080926c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0080926e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809270: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809271: ja 0x80928b */ if ((!fC&&!fZ)) goto L_0080928b;
L_00809273:; BB(0x00809273);
    /* 00809273: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00809278: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080927d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080927e: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00809282: call 0x808660 */ r_esp -= 4; W32(r_esp, 0x809287u); f_00808660();
    /* 00809287: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809289: je 0x80929f */ if (fZ) goto L_0080929f;
L_0080928b:; BB(0x0080928b);
    /* 0080928b: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0080928f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00809292: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809297: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0080929a: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0080929d: jmp 0x8092b2 */ goto L_008092b2;
L_0080929f:; BB(0x0080929f);
    /* 0080929f: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_008092a2:; BB(0x008092a2);
    /* 008092a2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008092a6: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008092ac: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 008092af: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
L_008092b2:; BB(0x008092b2);
    /* 008092b2: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008092b5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008092b8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008092ba: jl 0x80922a */ if ((fS!=fO)) goto L_0080922a;
L_008092c0:; BB(0x008092c0);
    /* 008092c0: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 008092c3: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008092c7: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_008092cb:; BB(0x008092cb);
    /* 008092cb: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008092d1: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008092d4: jmp 0x8095ac */ goto L_008095ac;
L_008092d9:; BB(0x008092d9);
    /* 008092d9: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 008092dc: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 008092df: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 008092e2: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 008092e6: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 008092e9: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 008092f1: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 008092f5: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 008092fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008092fd: fsub dword ptr [esi + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x178u));
    /* 00809303: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809305: fsub dword ptr [esi + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x180u));
    /* 0080930b: mov esi, dword ptr [0xaafdb8] */ r_esi = R32((u32)(0xaafdb8u));
    /* 00809311: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809313: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00809317: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00809319: fadd dword ptr [0x97f15c] */ ST(0) = ST(0) + R_F32((u32)(0x97f15cu));
    /* 0080931f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809321: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00809325: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00809327: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00809329: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080932c: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 00809334: jne 0x80933c */ if (!fZ) goto L_0080933c;
L_00809336:; BB(0x00809336);
    /* 00809336: fadd dword ptr [0x97f158] */ ST(0) = ST(0) + R_F32((u32)(0x97f158u));
L_0080933c:; BB(0x0080933c);
    /* 0080933c: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0080933f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00809341: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00809343: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809345: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809346: jbe 0x80935f */ if ((fC||fZ)) goto L_0080935f;
L_00809348:; BB(0x00809348);
    /* 00809348: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080934a: or ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00809350: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00809353: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809356: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080935a: jmp 0x8095ac */ goto L_008095ac;
L_0080935f:; BB(0x0080935f);
    /* 0080935f: fcomp dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); FPOP();
    /* 00809363: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809365: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809366: jbe 0x809379 */ if ((fC||fZ)) goto L_00809379;
L_00809368:; BB(0x00809368);
    /* 00809368: and ecx, 0xfffeffff */ {  u32 a = r_ecx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0080936e: mov dword ptr [ebx + 0x30], ecx */ W32((u32)(r_ebx+0x30u), r_ecx);
    /* 00809371: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809374: jmp 0x8095ac */ goto L_008095ac;
L_00809379:; BB(0x00809379);
    /* 00809379: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0080937d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x809382u); f_0082df08();
    /* 00809382: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00809384: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00809388: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 0080938c: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x809391u); f_0082f9e0();
    /* 00809391: fcom dword ptr [0x97f15c] */ fx_compare(ST(0), R_F32((u32)(0x97f15cu))); 
    /* 00809397: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809399: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080939a: jae 0x8093b8 */ if (!fC) goto L_008093b8;
L_0080939c:; BB(0x0080939c);
    /* 0080939c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0080939e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 008093a1: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008093a7: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 008093aa: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008093b0: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008093b3: jmp 0x8095ac */ goto L_008095ac;
L_008093b8:; BB(0x008093b8);
    /* 008093b8: fcomp dword ptr [0x97f154] */ fx_compare(ST(0), R_F32((u32)(0x97f154u))); FPOP();
    /* 008093be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008093c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008093c1: jb 0x8093e1 */ if (fC) goto L_008093e1;
L_008093c3:; BB(0x008093c3);
    /* 008093c3: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 008093c6: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008093cc: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 008093cf: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008093d5: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008093d9: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008093dc: jmp 0x8095ac */ goto L_008095ac;
L_008093e1:; BB(0x008093e1);
    /* 008093e1: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 008093e6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x8093ebu); f_0082d990();
    /* 008093eb: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 008093f1: mov edx, dword ptr [esi + 0x19c] */ r_edx = R32((u32)(r_esi+0x19cu));
    /* 008093f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008093f9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8093feu); f_0082d8bc();
    /* 008093fe: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 00809402: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00809403: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00809407: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00809409: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x80940eu); f_0082eab8();
    /* 0080940e: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00809412: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x809417u); f_0082df08();
    /* 00809417: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00809419: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0080941e: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x809423u); f_0082eb80();
    /* 00809423: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00809427: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080942b: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0080942e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00809432: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x809437u); f_0082f9e0();
    /* 00809437: fcomp dword ptr [0x97f15c] */ fx_compare(ST(0), R_F32((u32)(0x97f15cu))); FPOP();
    /* 0080943d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080943f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809440: jb 0x8094b8 */ if (fC) goto L_008094b8;
L_00809442:; BB(0x00809442);
    /* 00809442: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 00809448: mov edx, dword ptr [esi + 0x178] */ r_edx = R32((u32)(r_esi+0x178u));
    /* 0080944e: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00809452: mov edx, dword ptr [esi + 0x180] */ r_edx = R32((u32)(r_esi+0x180u));
    /* 00809458: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080945a: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0080945e: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00809462: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00809466: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0080946a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0080946e: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00809472: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00809476: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0080947a: lea esi, [esp + 0x34] */ r_esi = (u32)(r_esp+0x34u);
    /* 0080947e: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 00809482: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 00809486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00809487: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00809488: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00809489: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x80948eu); f_0083a0dc();
    /* 0080948e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809491: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 00809495: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809497: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809498: ja 0x8094b8 */ if ((!fC&&!fZ)) goto L_008094b8;
L_0080949a:; BB(0x0080949a);
    /* 0080949a: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0080949d: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008094a3: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 008094a6: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008094ac: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008094b0: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008094b3: jmp 0x8095ac */ goto L_008095ac;
L_008094b8:; BB(0x008094b8);
    /* 008094b8: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 008094bd: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x8094c2u); f_0082d990();
    /* 008094c2: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 008094c8: mov edx, dword ptr [esi + 0x19c] */ r_edx = R32((u32)(r_esi+0x19cu));
    /* 008094ce: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008094d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008094d2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x8094d7u); f_0082d8bc();
    /* 008094d7: lea esi, [esp + 0x1c] */ r_esi = (u32)(r_esp+0x1cu);
    /* 008094db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008094dc: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 008094e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008094e2: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x8094e7u); f_0082eab8();
    /* 008094e7: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 008094eb: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x8094f0u); f_0082df08();
    /* 008094f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008094f2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008094f7: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x8094fcu); f_0082eb80();
    /* 008094fc: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00809500: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00809504: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00809507: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0080950b: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x809510u); f_0082f9e0();
    /* 00809510: fcomp dword ptr [0x97f15c] */ fx_compare(ST(0), R_F32((u32)(0x97f15cu))); FPOP();
    /* 00809516: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809518: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809519: jb 0x809597 */ if (fC) goto L_00809597;
L_0080951b:; BB(0x0080951b);
    /* 0080951b: mov esi, dword ptr [0xa48a54] */ r_esi = R32((u32)(0xa48a54u));
    /* 00809521: mov edx, dword ptr [esi + 0x178] */ r_edx = R32((u32)(r_esi+0x178u));
    /* 00809527: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0080952b: mov edx, dword ptr [esi + 0x180] */ r_edx = R32((u32)(r_esi+0x180u));
    /* 00809531: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00809533: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 00809537: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0080953b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0080953f: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00809543: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00809547: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0080954e: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00809552: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00809559: lea esi, [esp + 0x34] */ r_esi = (u32)(r_esp+0x34u);
    /* 0080955d: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 00809561: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 00809568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00809569: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080956a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080956b: call 0x83a0dc */ r_esp -= 4; W32(r_esp, 0x809570u); f_0083a0dc();
    /* 00809570: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809573: fcomp dword ptr [esp + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x14u))); FPOP();
    /* 00809577: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809579: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080957a: ja 0x809597 */ if ((!fC&&!fZ)) goto L_00809597;
L_0080957c:; BB(0x0080957c);
    /* 0080957c: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0080957f: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00809585: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00809588: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 0080958e: add dword ptr [ebp + 0x1c], 1 */ { u32 ad = (u32)(r_ebp+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00809592: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809595: jmp 0x8095ac */ goto L_008095ac;
L_00809597:; BB(0x00809597);
    /* 00809597: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0080959a: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008095a0: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 008095a3: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 008095a9: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008095ac:; BB(0x008095ac);
    /* 008095ac: movsx ecx, word ptr [edx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 008095b0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008095b3: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008095b5: jl 0x809137 */ if ((fS!=fO)) goto L_00809137;
L_008095bb:; BB(0x008095bb);
    /* 008095bb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008095bf: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_008095c3:; BB(0x008095c3);
    /* 008095c3: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008095c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008095ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008095cb: ret  */ FN_RET(0x00809098); r_esp += 4; return;
}

void f_008095cc(void) /* sub_8095CC */
{
    FN_ENTER(0x008095cc);
    /* 008095cc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008095cf: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 008095d5: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 008095db: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 008095e1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008095e4: mov eax, dword ptr [ecx + 0x180] */ r_eax = R32((u32)(r_ecx+0x180u));
    /* 008095ea: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008095ee: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008095f2: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 008095f7: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 008095fa: fadd dword ptr [0xaafc7c] */ ST(0) = ST(0) + R_F32((u32)(0xaafc7cu));
    /* 00809600: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00809602: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00809606: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00809608: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080960a: jle 0x80968e */ if ((fZ||fS!=fO)) goto L_0080968e;
L_00809610:; BB(0x00809610);
    /* 00809610: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00809614: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00809618: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0080961b: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0080961f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00809621: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00809625: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00809627: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 0080962a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080962c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080962e: mov esi, edx */ r_esi = r_edx;
    /* 00809630: mov ebx, ecx */ r_ebx = r_ecx;
L_00809632:; BB(0x00809632);
    /* 00809632: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00809635: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00809638: lea eax, [edi + ebx + 4] */ r_eax = (u32)(r_edi+r_ebx+0x4u);
    /* 0080963c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080963d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080963e: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x809643u); f_0078ea50();
    /* 00809643: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809646: fcomp dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); FPOP();
    /* 0080964a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080964c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080964d: jae 0x80965e */ if (!fC) goto L_0080965e;
L_0080964f:; BB(0x0080964f);
    /* 0080964f: mov eax, dword ptr [ebx + edi + 0x30] */ r_eax = R32((u32)(r_ebx+r_edi+0x30u));
    /* 00809653: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809658: mov dword ptr [ebx + edi + 0x30], eax */ W32((u32)(r_ebx+r_edi+0x30u), r_eax);
    /* 0080965c: jmp 0x80966b */ goto L_0080966b;
L_0080965e:; BB(0x0080965e);
    /* 0080965e: mov eax, dword ptr [ebx + edi + 0x30] */ r_eax = R32((u32)(r_ebx+r_edi+0x30u));
    /* 00809662: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00809667: mov dword ptr [ebx + edi + 0x30], eax */ W32((u32)(r_ebx+r_edi+0x30u), r_eax);
L_0080966b:; BB(0x0080966b);
    /* 0080966b: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 00809670: movsx edi, word ptr [eax + 8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00809674: add ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809677: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080967a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080967c: jl 0x809632 */ if ((fS!=fO)) goto L_00809632;
L_0080967e:; BB(0x0080967e);
    /* 0080967e: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00809682: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00809686: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0080968a:; BB(0x0080968a);
    /* 0080968a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080968d: ret  */ FN_RET(0x008095cc); r_esp += 4; return;
L_0080968e:; BB(0x0080968e);
    /* 0080968e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00809690: jmp 0x80968a */ goto L_0080968a;
}

void f_00809694(void) /* sub_809694 */
{
    FN_ENTER(0x00809694);
    /* 00809694: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00809695: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00809696: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00809698: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 0080969e: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 008096a5: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 008096a8: movsx esi, word ptr [ecx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 008096ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008096ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008096b0: jle 0x8096d0 */ if ((fZ||fS!=fO)) goto L_008096d0;
L_008096b2:; BB(0x008096b2);
    /* 008096b2: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 008096b5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008096bb: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 008096be: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008096c1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008096c4: add dword ptr [ebx + 0x1c], 1 */ { u32 ad = (u32)(r_ebx+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008096c8: movsx esi, word ptr [ecx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 008096cc: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008096ce: jl 0x8096b2 */ if ((fS!=fO)) goto L_008096b2;
L_008096d0:; BB(0x008096d0);
    /* 008096d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008096d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008096d2: ret  */ FN_RET(0x00809694); r_esp += 4; return;
}

void f_008096d4(void) /* sub_8096D4 */
{
    FN_ENTER(0x008096d4);
    /* 008096d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008096d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008096d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008096d7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008096da: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 008096df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008096e1: je 0x809a69 */ if (fZ) goto L_00809a69;
L_008096e7:; BB(0x008096e7);
    /* 008096e7: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 008096ed: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008096ef: je 0x809a69 */ if (fZ) goto L_00809a69;
L_008096f5:; BB(0x008096f5);
    /* 008096f5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008096f8: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 008096fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008096fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809700: jle 0x809759 */ if ((fZ||fS!=fO)) goto L_00809759;
L_00809702:; BB(0x00809702);
    /* 00809702: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 00809705: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00809708: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080970a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080970c: jle 0x809725 */ if ((fZ||fS!=fO)) goto L_00809725;
L_0080970e:; BB(0x0080970e);
    /* 0080970e: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00809711: and edi, 0xfffdffff */ {  u32 a = r_edi; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00809717: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 0080971a: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080971d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00809720: cmp ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809723: jl 0x80970e */ if ((fS!=fO)) goto L_0080970e;
L_00809725:; BB(0x00809725);
    /* 00809725: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 00809728: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 0080972b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080972d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080972f: jle 0x809748 */ if ((fZ||fS!=fO)) goto L_00809748;
L_00809731:; BB(0x00809731);
    /* 00809731: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 00809734: and edi, 0xfffdffff */ {  u32 a = r_edi; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0080973a: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 0080973d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809740: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00809743: cmp ecx, dword ptr [eax + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809746: jl 0x809731 */ if ((fS!=fO)) goto L_00809731;
L_00809748:; BB(0x00809748);
    /* 00809748: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 0080974c: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080974f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00809752: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809754: jl 0x809702 */ if ((fS!=fO)) goto L_00809702;
L_00809756:; BB(0x00809756);
    /* 00809756: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_00809759:; BB(0x00809759);
    /* 00809759: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080975b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080975d: jle 0x809a64 */ if ((fZ||fS!=fO)) goto L_00809a64;
L_00809763:; BB(0x00809763);
    /* 00809763: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00809767:; BB(0x00809767);
    /* 00809767: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 0080976a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0080976d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0080976f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809771: jle 0x8098e0 */ if ((fZ||fS!=fO)) goto L_008098e0;
L_00809777:; BB(0x00809777);
    /* 00809777: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0080977b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_0080977f:; BB(0x0080977f);
    /* 0080977f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809782: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809787: jne 0x8098ca */ if (!fZ) goto L_008098ca;
L_0080978d:; BB(0x0080978d);
    /* 0080978d: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809792: jne 0x8098ca */ if (!fZ) goto L_008098ca;
L_00809798:; BB(0x00809798);
    /* 00809798: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0080979b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008097a0: je 0x8097a4 */ if (fZ) goto L_008097a4;
L_008097a2:; BB(0x008097a2);
    /* 008097a2: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_008097a4:; BB(0x008097a4);
    /* 008097a4: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008097a6: je 0x80989f */ if (fZ) goto L_0080989f;
L_008097ac:; BB(0x008097ac);
    /* 008097ac: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 008097af: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 008097b2: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 008097b5: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008097b8: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 008097bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008097bd: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
    /* 008097c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008097c2: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 008097c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008097c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008097c9: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x8097ceu); f_0082e900();
    /* 008097ce: fcomp dword ptr [0x97f13c] */ fx_compare(ST(0), R_F32((u32)(0x97f13cu))); FPOP();
    /* 008097d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008097d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008097d7: jae 0x8097f4 */ if (!fC) goto L_008097f4;
L_008097d9:; BB(0x008097d9);
    /* 008097d9: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008097dc: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x8097e1u); f_0082e900();
    /* 008097e1: fcomp dword ptr [0x97f13c] */ fx_compare(ST(0), R_F32((u32)(0x97f13cu))); FPOP();
    /* 008097e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008097e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008097ea: jae 0x8097f4 */ if (!fC) goto L_008097f4;
L_008097ec:; BB(0x008097ec);
    /* 008097ec: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008097ef: jmp 0x80989f */ goto L_0080989f;
L_008097f4:; BB(0x008097f4);
    /* 008097f4: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 008097f7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008097fa: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008097fe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809803: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809807: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080980b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080980f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809812: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809817: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0080981a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0080981d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809821: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809826: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0080982a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080982e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809832: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809835: movsx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0080983a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080983c: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00809840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00809842: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00809843: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809846: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80984bu); f_0061cdb0();
    /* 0080984b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080984e: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809851: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809854: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809858: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080985d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809861: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809865: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809869: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0080986c: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809870: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809872: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00809875: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809878: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0080987b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0080987f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809884: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809888: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0080988c: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809890: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809893: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809897: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809899: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0080989c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_0080989f:; BB(0x0080989f);
    /* 0080989f: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008098a1: je 0x8098bb */ if (fZ) goto L_008098bb;
L_008098a3:; BB(0x008098a3);
    /* 008098a3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008098a6: add dword ptr [eax + 8], -1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008098aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008098ad: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008098b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008098b2: jl 0x809a70 */ if ((fS!=fO)) goto L_00809a70;
L_008098b8:; BB(0x008098b8);
    /* 008098b8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_008098bb:; BB(0x008098bb);
    /* 008098bb: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008098c0: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008098c3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008098c7: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
L_008098ca:; BB(0x008098ca);
    /* 008098ca: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008098cd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008098d0: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008098d2: jl 0x80977f */ if ((fS!=fO)) goto L_0080977f;
L_008098d8:; BB(0x008098d8);
    /* 008098d8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008098dc: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_008098e0:; BB(0x008098e0);
    /* 008098e0: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 008098e3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 008098e6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008098e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008098ea: jle 0x809a48 */ if ((fZ||fS!=fO)) goto L_00809a48;
L_008098f0:; BB(0x008098f0);
    /* 008098f0: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 008098f4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_008098f8:; BB(0x008098f8);
    /* 008098f8: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008098fb: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809900: jne 0x809a32 */ if (!fZ) goto L_00809a32;
L_00809906:; BB(0x00809906);
    /* 00809906: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080990b: jne 0x809a32 */ if (!fZ) goto L_00809a32;
L_00809911:; BB(0x00809911);
    /* 00809911: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00809914: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809919: je 0x80991d */ if (fZ) goto L_0080991d;
L_0080991b:; BB(0x0080991b);
    /* 0080991b: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_0080991d:; BB(0x0080991d);
    /* 0080991d: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080991f: je 0x809a07 */ if (fZ) goto L_00809a07;
L_00809925:; BB(0x00809925);
    /* 00809925: fld dword ptr [0x97f13c] */ FPUSH(R_F32((u32)(0x97f13cu)));
    /* 0080992b: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 0080992e: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809931: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 00809934: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809937: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 0080993a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080993c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0080993e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809940: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
    /* 00809943: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809945: fst dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0));
    /* 00809948: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809949: jae 0x809960 */ if (!fC) goto L_00809960;
L_0080994b:; BB(0x0080994b);
    /* 0080994b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0080994d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080994f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809950: jae 0x809960 */ if (!fC) goto L_00809960;
L_00809952:; BB(0x00809952);
    /* 00809952: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00809954: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00809956: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00809958: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080995b: jmp 0x809a07 */ goto L_00809a07;
L_00809960:; BB(0x00809960);
    /* 00809960: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00809962: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809965: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809969: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080996e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809972: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809976: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080997a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0080997d: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809982: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809985: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809989: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080998e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809992: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809996: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0080999a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0080999d: movsx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 008099a2: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 008099a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008099a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008099a9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008099aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008099ab: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008099ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x8099b3u); f_0061cdb0();
    /* 008099b3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008099b6: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 008099b9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008099bc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008099c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008099c5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008099c9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008099cd: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 008099d1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008099d4: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008099d8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008099da: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 008099dd: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008099e0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 008099e3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 008099e7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008099ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 008099f0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 008099f4: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 008099f8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 008099fb: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 008099ff: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809a01: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00809a04: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_00809a07:; BB(0x00809a07);
    /* 00809a07: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809a09: je 0x809a23 */ if (fZ) goto L_00809a23;
L_00809a0b:; BB(0x00809a0b);
    /* 00809a0b: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809a0e: add dword ptr [eax + 8], -1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00809a12: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809a15: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00809a18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00809a1a: jl 0x809b29 */ if ((fS!=fO)) goto L_00809b29;
L_00809a20:; BB(0x00809a20);
    /* 00809a20: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_00809a23:; BB(0x00809a23);
    /* 00809a23: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809a28: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00809a2b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00809a2f: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
L_00809a32:; BB(0x00809a32);
    /* 00809a32: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00809a35: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809a38: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809a3a: jl 0x8098f8 */ if ((fS!=fO)) goto L_008098f8;
L_00809a40:; BB(0x00809a40);
    /* 00809a40: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00809a44: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00809a48:; BB(0x00809a48);
    /* 00809a48: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 00809a4e: movsx ebx, word ptr [ecx + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 00809a52: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00809a55: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00809a58: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809a5a: jl 0x809767 */ if ((fS!=fO)) goto L_00809767;
L_00809a60:; BB(0x00809a60);
    /* 00809a60: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00809a64:; BB(0x00809a64);
    /* 00809a64: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x809a69u); f_0061cdb0();
L_00809a69:; BB(0x00809a69);
    /* 00809a69: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00809a6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00809a6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00809a6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00809a6f: ret  */ FN_RET(0x008096d4); r_esp += 4; return;
L_00809a70:; BB(0x00809a70);
    /* 00809a70: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 00809a76: add word ptr [eax + 6], 1 */ { u32 ad = (u32)(r_eax+0x6u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00809a7b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809a7e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809a81: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809a84: je 0x809ace */ if (fZ) goto L_00809ace;
L_00809a86:; BB(0x00809a86);
    /* 00809a86: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
L_00809a89:; BB(0x00809a89);
    /* 00809a89: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809a8c: je 0x809aa3 */ if (fZ) goto L_00809aa3;
L_00809a8e:; BB(0x00809a8e);
    /* 00809a8e: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809a92: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809a94: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809a97: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809a99: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809a9b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809a9d: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
    /* 00809aa1: jmp 0x809ac6 */ goto L_00809ac6;
L_00809aa3:; BB(0x00809aa3);
    /* 00809aa3: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809aa6: je 0x809ace */ if (fZ) goto L_00809ace;
L_00809aa8:; BB(0x00809aa8);
    /* 00809aa8: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00809aab: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00809aaf: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809ab1: je 0x809aff */ if (fZ) goto L_00809aff;
L_00809ab3:; BB(0x00809ab3);
    /* 00809ab3: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809ab7: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809ab9: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809abc: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809abe: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809ac0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809ac2: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
L_00809ac6:; BB(0x00809ac6);
    /* 00809ac6: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809ac9: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809acc: jne 0x809a89 */ if (!fZ) goto L_00809a89;
L_00809ace:; BB(0x00809ace);
    /* 00809ace: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00809ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809ad3: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809ad6: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x809adbu); f_0081a588();
    /* 00809adb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809ade: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809ae1: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809ae3: je 0x8098bb */ if (fZ) goto L_008098bb;
L_00809ae9:; BB(0x00809ae9);
    /* 00809ae9: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00809aec: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809aef: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00809af3: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 00809af7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809afa: jmp 0x8098bb */ goto L_008098bb;
L_00809aff:; BB(0x00809aff);
    /* 00809aff: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00809b03: cmp cx, word ptr [edx + 6] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00809b07: jl 0x809b0f */ if ((fS!=fO)) goto L_00809b0f;
L_00809b09:; BB(0x00809b09);
    /* 00809b09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00809b0b: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
L_00809b0f:; BB(0x00809b0f);
    /* 00809b0f: movsx esi, word ptr [eax + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00809b13: movzx ecx, word ptr [edx + esi*4 + 8] */ r_ecx = (u32)R16((u32)(r_edx+r_esi*4+0x8u));
    /* 00809b18: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00809b1c: movsx edx, word ptr [edx + esi*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*4+0xau));
    /* 00809b21: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00809b24: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809b27: jmp 0x809ace */ goto L_00809ace;
L_00809b29:; BB(0x00809b29);
    /* 00809b29: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 00809b2f: add word ptr [eax + 6], 1 */ { u32 ad = (u32)(r_eax+0x6u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00809b34: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809b37: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809b3a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809b3d: je 0x809b87 */ if (fZ) goto L_00809b87;
L_00809b3f:; BB(0x00809b3f);
    /* 00809b3f: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
L_00809b42:; BB(0x00809b42);
    /* 00809b42: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809b45: je 0x809b5c */ if (fZ) goto L_00809b5c;
L_00809b47:; BB(0x00809b47);
    /* 00809b47: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809b4b: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809b4d: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809b50: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809b52: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809b54: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809b56: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
    /* 00809b5a: jmp 0x809b7f */ goto L_00809b7f;
L_00809b5c:; BB(0x00809b5c);
    /* 00809b5c: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809b5f: je 0x809b87 */ if (fZ) goto L_00809b87;
L_00809b61:; BB(0x00809b61);
    /* 00809b61: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00809b64: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00809b68: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809b6a: je 0x809bb5 */ if (fZ) goto L_00809bb5;
L_00809b6c:; BB(0x00809b6c);
    /* 00809b6c: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809b70: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809b72: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809b75: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809b77: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809b79: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809b7b: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
L_00809b7f:; BB(0x00809b7f);
    /* 00809b7f: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809b82: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809b85: jne 0x809b42 */ if (!fZ) goto L_00809b42;
L_00809b87:; BB(0x00809b87);
    /* 00809b87: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00809b8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809b8c: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809b8f: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x809b94u); f_0081a588();
    /* 00809b94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809b97: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00809b9a: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809b9c: je 0x809a23 */ if (fZ) goto L_00809a23;
L_00809ba2:; BB(0x00809ba2);
    /* 00809ba2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00809ba5: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00809ba9: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 00809bad: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00809bb0: jmp 0x809a23 */ goto L_00809a23;
L_00809bb5:; BB(0x00809bb5);
    /* 00809bb5: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00809bb9: cmp cx, word ptr [edx + 6] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00809bbd: jl 0x809bc5 */ if ((fS!=fO)) goto L_00809bc5;
L_00809bbf:; BB(0x00809bbf);
    /* 00809bbf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00809bc1: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
L_00809bc5:; BB(0x00809bc5);
    /* 00809bc5: movsx esi, word ptr [eax + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00809bc9: movzx ecx, word ptr [edx + esi*4 + 8] */ r_ecx = (u32)R16((u32)(r_edx+r_esi*4+0x8u));
    /* 00809bce: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00809bd2: movsx edx, word ptr [edx + esi*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*4+0xau));
    /* 00809bd7: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00809bda: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809bdd: jmp 0x809b87 */ goto L_00809b87;
}

void f_00809be0(void) /* sub_809BE0 */
{
    FN_ENTER(0x00809be0);
    /* 00809be0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809be1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00809be2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00809be3: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00809be6: mov eax, dword ptr [0xaafc6c] */ r_eax = R32((u32)(0xaafc6cu));
    /* 00809beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809bed: je 0x809f8b */ if (fZ) goto L_00809f8b;
L_00809bf3:; BB(0x00809bf3);
    /* 00809bf3: mov ebp, dword ptr [0xaafca4] */ r_ebp = R32((u32)(0xaafca4u));
    /* 00809bf9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809bfb: je 0x809f8b */ if (fZ) goto L_00809f8b;
L_00809c01:; BB(0x00809c01);
    /* 00809c01: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00809c04: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00809c08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00809c0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809c0c: jle 0x809c65 */ if ((fZ||fS!=fO)) goto L_00809c65;
L_00809c0e:; BB(0x00809c0e);
    /* 00809c0e: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 00809c11: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00809c14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00809c16: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809c18: jle 0x809c31 */ if ((fZ||fS!=fO)) goto L_00809c31;
L_00809c1a:; BB(0x00809c1a);
    /* 00809c1a: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00809c1d: and edi, 0xfffdffff */ {  u32 a = r_edi; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00809c23: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00809c26: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809c29: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00809c2c: cmp ecx, dword ptr [eax + 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809c2f: jl 0x809c1a */ if ((fS!=fO)) goto L_00809c1a;
L_00809c31:; BB(0x00809c31);
    /* 00809c31: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 00809c34: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 00809c37: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00809c39: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809c3b: jle 0x809c54 */ if ((fZ||fS!=fO)) goto L_00809c54;
L_00809c3d:; BB(0x00809c3d);
    /* 00809c3d: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 00809c40: and edi, 0xfffdffff */ {  u32 a = r_edi; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00809c46: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 00809c49: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809c4c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00809c4f: cmp ecx, dword ptr [eax + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809c52: jl 0x809c3d */ if ((fS!=fO)) goto L_00809c3d;
L_00809c54:; BB(0x00809c54);
    /* 00809c54: movsx ecx, word ptr [ebp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8u));
    /* 00809c58: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00809c5b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00809c5e: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809c60: jl 0x809c0e */ if ((fS!=fO)) goto L_00809c0e;
L_00809c62:; BB(0x00809c62);
    /* 00809c62: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_00809c65:; BB(0x00809c65);
    /* 00809c65: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00809c67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809c69: jle 0x809f86 */ if ((fZ||fS!=fO)) goto L_00809f86;
L_00809c6f:; BB(0x00809c6f);
    /* 00809c6f: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
L_00809c73:; BB(0x00809c73);
    /* 00809c73: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 00809c76: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00809c79: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00809c7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809c7d: jle 0x809df7 */ if ((fZ||fS!=fO)) goto L_00809df7;
L_00809c83:; BB(0x00809c83);
    /* 00809c83: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00809c87: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_00809c8b:; BB(0x00809c8b);
    /* 00809c8b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809c8e: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809c93: jne 0x809de1 */ if (!fZ) goto L_00809de1;
L_00809c99:; BB(0x00809c99);
    /* 00809c99: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809c9e: jne 0x809de1 */ if (!fZ) goto L_00809de1;
L_00809ca4:; BB(0x00809ca4);
    /* 00809ca4: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00809ca7: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809cac: je 0x809cb0 */ if (fZ) goto L_00809cb0;
L_00809cae:; BB(0x00809cae);
    /* 00809cae: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_00809cb0:; BB(0x00809cb0);
    /* 00809cb0: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809cb2: je 0x809db6 */ if (fZ) goto L_00809db6;
L_00809cb8:; BB(0x00809cb8);
    /* 00809cb8: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00809cbb: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809cbe: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 00809cc1: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809cc4: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 00809cc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809cc9: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
    /* 00809ccc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809cce: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00809cd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809cd2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00809cd5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x809cdau); f_0082e900();
    /* 00809cda: fcomp dword ptr [0x97f138] */ fx_compare(ST(0), R_F32((u32)(0x97f138u))); FPOP();
    /* 00809ce0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809ce2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809ce3: jae 0x809cfc */ if (!fC) goto L_00809cfc;
L_00809ce5:; BB(0x00809ce5);
    /* 00809ce5: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809ce8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x809cedu); f_0082e900();
    /* 00809ced: fcomp dword ptr [0x97f138] */ fx_compare(ST(0), R_F32((u32)(0x97f138u))); FPOP();
    /* 00809cf3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809cf5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809cf6: jb 0x809db3 */ if (fC) goto L_00809db3;
L_00809cfc:; BB(0x00809cfc);
    /* 00809cfc: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00809cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809d01: je 0x809d60 */ if (fZ) goto L_00809d60;
L_00809d03:; BB(0x00809d03);
    /* 00809d03: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00809d05: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809d08: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00809d0c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00809d10: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d13: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d17: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d1c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d20: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d24: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809d28: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809d2b: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809d30: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809d33: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d36: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d3a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d3f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d43: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d47: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809d4b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809d4e: movsx esi, word ptr [esp + 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809d53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00809d54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00809d55: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00809d59: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00809d5d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x809d60u); call_ind(t); }
L_00809d60:; BB(0x00809d60);
    /* 00809d60: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809d63: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d66: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d6a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d6f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d73: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d77: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809d7b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809d7e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809d82: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809d84: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00809d87: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809d8a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d8d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d91: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d9a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d9e: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809da2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809da5: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809da9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809dab: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00809dae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809db1: jmp 0x809db6 */ goto L_00809db6;
L_00809db3:; BB(0x00809db3);
    /* 00809db3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_00809db6:; BB(0x00809db6);
    /* 00809db6: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809db8: je 0x809dd2 */ if (fZ) goto L_00809dd2;
L_00809dba:; BB(0x00809dba);
    /* 00809dba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809dbd: add dword ptr [eax + 8], -1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00809dc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809dc4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00809dc7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00809dc9: jl 0x809f92 */ if ((fS!=fO)) goto L_00809f92;
L_00809dcf:; BB(0x00809dcf);
    /* 00809dcf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_00809dd2:; BB(0x00809dd2);
    /* 00809dd2: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809dd7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00809dda: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00809dde: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
L_00809de1:; BB(0x00809de1);
    /* 00809de1: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00809de4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809de7: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809de9: jl 0x809c8b */ if ((fS!=fO)) goto L_00809c8b;
L_00809def:; BB(0x00809def);
    /* 00809def: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00809df3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00809df7:; BB(0x00809df7);
    /* 00809df7: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 00809dfa: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00809dfd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00809dff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809e01: jle 0x809f6a */ if ((fZ||fS!=fO)) goto L_00809f6a;
L_00809e07:; BB(0x00809e07);
    /* 00809e07: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00809e0b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_00809e0f:; BB(0x00809e0f);
    /* 00809e0f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00809e12: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e17: jne 0x809f54 */ if (!fZ) goto L_00809f54;
L_00809e1d:; BB(0x00809e1d);
    /* 00809e1d: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e22: jne 0x809f54 */ if (!fZ) goto L_00809f54;
L_00809e28:; BB(0x00809e28);
    /* 00809e28: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00809e2b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e30: je 0x809e34 */ if (fZ) goto L_00809e34;
L_00809e32:; BB(0x00809e32);
    /* 00809e32: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
L_00809e34:; BB(0x00809e34);
    /* 00809e34: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809e36: je 0x809f29 */ if (fZ) goto L_00809f29;
L_00809e3c:; BB(0x00809e3c);
    /* 00809e3c: fld dword ptr [0x97f138] */ FPUSH(R_F32((u32)(0x97f138u)));
    /* 00809e42: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00809e45: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00809e48: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00809e4b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00809e4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809e4f: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00809e52: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 00809e55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809e56: jae 0x809e63 */ if (!fC) goto L_00809e63;
L_00809e58:; BB(0x00809e58);
    /* 00809e58: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00809e5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809e5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809e5d: jb 0x809f1c */ if (fC) goto L_00809f1c;
L_00809e63:; BB(0x00809e63);
    /* 00809e63: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00809e65: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 00809e68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809e6c: je 0x809ecb */ if (fZ) goto L_00809ecb;
L_00809e6e:; BB(0x00809e6e);
    /* 00809e6e: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00809e71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809e73: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 00809e76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00809e78: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809e7b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809e7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809e84: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809e88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809e8c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809e90: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809e93: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00809e97: movsx edi, word ptr [esp + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809e9c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809e9f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809ea3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809ea8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809eac: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809eb0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809eb4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809eb7: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809ebd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809ebe: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00809ec2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x809ec5u); call_ind(t); }
    /* 00809ec5: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00809ec8: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
L_00809ecb:; BB(0x00809ecb);
    /* 00809ecb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809ecd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809ed0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809ed4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809ed9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809edd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809ee1: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809ee5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809ee8: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809eec: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809eee: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00809ef1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00809ef3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809ef6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809efa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809eff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809f03: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809f07: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809f0b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809f0e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809f12: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809f14: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00809f17: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00809f1a: jmp 0x809f29 */ goto L_00809f29;
L_00809f1c:; BB(0x00809f1c);
    /* 00809f1c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00809f1e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809f20: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00809f23: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00809f26: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_00809f29:; BB(0x00809f29);
    /* 00809f29: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809f2b: je 0x809f45 */ if (fZ) goto L_00809f45;
L_00809f2d:; BB(0x00809f2d);
    /* 00809f2d: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809f30: add dword ptr [eax + 8], -1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00809f34: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809f37: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00809f3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00809f3c: jl 0x80a04b */ if ((fS!=fO)) goto L_0080a04b;
L_00809f42:; BB(0x00809f42);
    /* 00809f42: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_00809f45:; BB(0x00809f45);
    /* 00809f45: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809f4a: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00809f4d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00809f51: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
L_00809f54:; BB(0x00809f54);
    /* 00809f54: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00809f57: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809f5a: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809f5c: jl 0x809e0f */ if ((fS!=fO)) goto L_00809e0f;
L_00809f62:; BB(0x00809f62);
    /* 00809f62: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00809f66: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00809f6a:; BB(0x00809f6a);
    /* 00809f6a: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 00809f70: movsx ebx, word ptr [ecx + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 00809f74: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00809f77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00809f7a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809f7c: jl 0x809c73 */ if ((fS!=fO)) goto L_00809c73;
L_00809f82:; BB(0x00809f82);
    /* 00809f82: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00809f86:; BB(0x00809f86);
    /* 00809f86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x809f8bu); f_0061cdb0();
L_00809f8b:; BB(0x00809f8b);
    /* 00809f8b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00809f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00809f8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00809f90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00809f91: ret  */ FN_RET(0x00809be0); r_esp += 4; return;
L_00809f92:; BB(0x00809f92);
    /* 00809f92: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 00809f98: add word ptr [eax + 6], 1 */ { u32 ad = (u32)(r_eax+0x6u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00809f9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809fa0: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809fa3: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809fa6: je 0x809ff0 */ if (fZ) goto L_00809ff0;
L_00809fa8:; BB(0x00809fa8);
    /* 00809fa8: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
L_00809fab:; BB(0x00809fab);
    /* 00809fab: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809fae: je 0x809fc5 */ if (fZ) goto L_00809fc5;
L_00809fb0:; BB(0x00809fb0);
    /* 00809fb0: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809fb4: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809fb6: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809fb9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fbb: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809fbd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fbf: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
    /* 00809fc3: jmp 0x809fe8 */ goto L_00809fe8;
L_00809fc5:; BB(0x00809fc5);
    /* 00809fc5: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809fc8: je 0x809ff0 */ if (fZ) goto L_00809ff0;
L_00809fca:; BB(0x00809fca);
    /* 00809fca: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00809fcd: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00809fd1: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809fd3: je 0x80a021 */ if (fZ) goto L_0080a021;
L_00809fd5:; BB(0x00809fd5);
    /* 00809fd5: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809fd9: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809fdb: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809fde: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fe0: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809fe2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fe4: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
L_00809fe8:; BB(0x00809fe8);
    /* 00809fe8: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809feb: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809fee: jne 0x809fab */ if (!fZ) goto L_00809fab;
L_00809ff0:; BB(0x00809ff0);
    /* 00809ff0: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00809ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809ff5: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809ff8: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x809ffdu); f_0081a588();
    /* 00809ffd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a000: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0080a003: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a005: je 0x809dd2 */ if (fZ) goto L_00809dd2;
L_0080a00b:; BB(0x0080a00b);
    /* 0080a00b: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0080a00e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0080a011: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0080a015: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 0080a019: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0080a01c: jmp 0x809dd2 */ goto L_00809dd2;
L_0080a021:; BB(0x0080a021);
    /* 0080a021: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a025: cmp cx, word ptr [edx + 6] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080a029: jl 0x80a031 */ if ((fS!=fO)) goto L_0080a031;
L_0080a02b:; BB(0x0080a02b);
    /* 0080a02b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a02d: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
L_0080a031:; BB(0x0080a031);
    /* 0080a031: movsx esi, word ptr [eax + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a035: movzx ecx, word ptr [edx + esi*4 + 8] */ r_ecx = (u32)R16((u32)(r_edx+r_esi*4+0x8u));
    /* 0080a03a: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0080a03e: movsx edx, word ptr [edx + esi*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*4+0xau));
    /* 0080a043: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0080a046: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0080a049: jmp 0x809ff0 */ goto L_00809ff0;
L_0080a04b:; BB(0x0080a04b);
    /* 0080a04b: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 0080a051: add word ptr [eax + 6], 1 */ { u32 ad = (u32)(r_eax+0x6u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0080a056: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0080a059: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080a05c: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a05f: je 0x80a0a9 */ if (fZ) goto L_0080a0a9;
L_0080a061:; BB(0x0080a061);
    /* 0080a061: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
L_0080a064:; BB(0x0080a064);
    /* 0080a064: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a067: je 0x80a07e */ if (fZ) goto L_0080a07e;
L_0080a069:; BB(0x0080a069);
    /* 0080a069: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080a06d: lea ecx, [edi] */ r_ecx = (u32)(r_edi);
    /* 0080a06f: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080a072: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a074: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080a076: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a078: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 0080a07c: jmp 0x80a0a1 */ goto L_0080a0a1;
L_0080a07e:; BB(0x0080a07e);
    /* 0080a07e: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a081: je 0x80a0a9 */ if (fZ) goto L_0080a0a9;
L_0080a083:; BB(0x0080a083);
    /* 0080a083: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0080a086: movsx edi, word ptr [edx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080a08a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a08c: je 0x80a0d7 */ if (fZ) goto L_0080a0d7;
L_0080a08e:; BB(0x0080a08e);
    /* 0080a08e: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080a092: lea ecx, [edi] */ r_ecx = (u32)(r_edi);
    /* 0080a094: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080a097: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a099: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080a09b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a09d: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
L_0080a0a1:; BB(0x0080a0a1);
    /* 0080a0a1: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080a0a4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a0a7: jne 0x80a064 */ if (!fZ) goto L_0080a064;
L_0080a0a9:; BB(0x0080a0a9);
    /* 0080a0a9: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 0080a0ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a0ae: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080a0b1: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x80a0b6u); f_0081a588();
    /* 0080a0b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a0b9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080a0bc: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a0be: je 0x809f45 */ if (fZ) goto L_00809f45;
L_0080a0c4:; BB(0x0080a0c4);
    /* 0080a0c4: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0080a0c7: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0080a0cb: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 0080a0cf: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080a0d2: jmp 0x809f45 */ goto L_00809f45;
L_0080a0d7:; BB(0x0080a0d7);
    /* 0080a0d7: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a0db: cmp cx, word ptr [edx + 6] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080a0df: jl 0x80a0e7 */ if ((fS!=fO)) goto L_0080a0e7;
L_0080a0e1:; BB(0x0080a0e1);
    /* 0080a0e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a0e3: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
L_0080a0e7:; BB(0x0080a0e7);
    /* 0080a0e7: movsx edi, word ptr [eax + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a0eb: movzx ecx, word ptr [edx + edi*4 + 8] */ r_ecx = (u32)R16((u32)(r_edx+r_edi*4+0x8u));
    /* 0080a0f0: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0080a0f4: movsx edx, word ptr [edx + edi*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*4+0xau));
    /* 0080a0f9: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0080a0fc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0080a0ff: jmp 0x80a0a9 */ goto L_0080a0a9;
}

void f_00809ddb(void)
{
    FN_ENTER(0x00809ddb);
    goto L_00809ddb;
L_00809c73:; BB(0x00809c73);
    /* 00809c73: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 00809c76: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00809c79: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00809c7b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809c7d: jle 0x809df7 */ if ((fZ||fS!=fO)) goto L_00809df7;
L_00809c83:; BB(0x00809c83);
    /* 00809c83: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00809c87: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_00809c8b:; BB(0x00809c8b);
    /* 00809c8b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809c8e: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809c93: jne 0x809de1 */ if (!fZ) goto L_00809de1;
L_00809c99:; BB(0x00809c99);
    /* 00809c99: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809c9e: jne 0x809de1 */ if (!fZ) goto L_00809de1;
L_00809ca4:; BB(0x00809ca4);
    /* 00809ca4: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00809ca7: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809cac: je 0x809cb0 */ if (fZ) goto L_00809cb0;
L_00809cae:; BB(0x00809cae);
    /* 00809cae: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
L_00809cb0:; BB(0x00809cb0);
    /* 00809cb0: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809cb2: je 0x809db6 */ if (fZ) goto L_00809db6;
L_00809cb8:; BB(0x00809cb8);
    /* 00809cb8: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 00809cbb: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809cbe: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 00809cc1: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809cc4: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 00809cc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809cc9: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
    /* 00809ccc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809cce: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00809cd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809cd2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00809cd5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x809cdau); f_0082e900();
    /* 00809cda: fcomp dword ptr [0x97f138] */ fx_compare(ST(0), R_F32((u32)(0x97f138u))); FPOP();
    /* 00809ce0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809ce2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809ce3: jae 0x809cfc */ if (!fC) goto L_00809cfc;
L_00809ce5:; BB(0x00809ce5);
    /* 00809ce5: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809ce8: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x809cedu); f_0082e900();
    /* 00809ced: fcomp dword ptr [0x97f138] */ fx_compare(ST(0), R_F32((u32)(0x97f138u))); FPOP();
    /* 00809cf3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809cf5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809cf6: jb 0x809db3 */ if (fC) goto L_00809db3;
L_00809cfc:; BB(0x00809cfc);
    /* 00809cfc: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 00809cff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809d01: je 0x809d60 */ if (fZ) goto L_00809d60;
L_00809d03:; BB(0x00809d03);
    /* 00809d03: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00809d05: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809d08: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00809d0c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00809d10: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d13: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d17: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d1c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d20: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d24: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809d28: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809d2b: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809d30: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809d33: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d36: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d3a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d3f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d43: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d47: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809d4b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809d4e: movsx esi, word ptr [esp + 0x10] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809d53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00809d54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00809d55: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00809d59: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00809d5d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x809d60u); call_ind(t); }
L_00809d60:; BB(0x00809d60);
    /* 00809d60: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00809d63: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d66: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d6a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d6f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d73: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d77: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809d7b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809d7e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809d82: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809d84: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00809d87: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00809d8a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809d8d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809d91: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809d96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809d9a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809d9e: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809da2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809da5: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809da9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809dab: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00809dae: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00809db1: jmp 0x809db6 */ goto L_00809db6;
L_00809db3:; BB(0x00809db3);
    /* 00809db3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_00809db6:; BB(0x00809db6);
    /* 00809db6: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809db8: je 0x809dd2 */ if (fZ) goto L_00809dd2;
L_00809dba:; BB(0x00809dba);
    /* 00809dba: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809dbd: add dword ptr [eax + 8], -1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00809dc1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809dc4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00809dc7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00809dc9: jl 0x809f92 */ if ((fS!=fO)) goto L_00809f92;
L_00809dcf:; BB(0x00809dcf);
    /* 00809dcf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
L_00809dd2:; BB(0x00809dd2);
    /* 00809dd2: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809dd7: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00809dda: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00809ddb:; BB(0x00809ddb);
    /* 00809ddb: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00809ddc: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00809dde: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
L_00809de1:; BB(0x00809de1);
    /* 00809de1: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00809de4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809de7: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809de9: jl 0x809c8b */ if ((fS!=fO)) goto L_00809c8b;
L_00809def:; BB(0x00809def);
    /* 00809def: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00809df3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00809df7:; BB(0x00809df7);
    /* 00809df7: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 00809dfa: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00809dfd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00809dff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00809e01: jle 0x809f6a */ if ((fZ||fS!=fO)) goto L_00809f6a;
L_00809e07:; BB(0x00809e07);
    /* 00809e07: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00809e0b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
L_00809e0f:; BB(0x00809e0f);
    /* 00809e0f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00809e12: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e17: jne 0x809f54 */ if (!fZ) goto L_00809f54;
L_00809e1d:; BB(0x00809e1d);
    /* 00809e1d: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e22: jne 0x809f54 */ if (!fZ) goto L_00809f54;
L_00809e28:; BB(0x00809e28);
    /* 00809e28: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00809e2b: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e30: je 0x809e34 */ if (fZ) goto L_00809e34;
L_00809e32:; BB(0x00809e32);
    /* 00809e32: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
L_00809e34:; BB(0x00809e34);
    /* 00809e34: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809e36: je 0x809f29 */ if (fZ) goto L_00809f29;
L_00809e3c:; BB(0x00809e3c);
    /* 00809e3c: fld dword ptr [0x97f138] */ FPUSH(R_F32((u32)(0x97f138u)));
    /* 00809e42: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00809e45: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00809e48: fadd dword ptr [edi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xcu));
    /* 00809e4b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00809e4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809e4f: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00809e52: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 00809e55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809e56: jae 0x809e63 */ if (!fC) goto L_00809e63;
L_00809e58:; BB(0x00809e58);
    /* 00809e58: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00809e5a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00809e5c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00809e5d: jb 0x809f1c */ if (fC) goto L_00809f1c;
L_00809e63:; BB(0x00809e63);
    /* 00809e63: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00809e65: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 00809e68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809e6a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809e6c: je 0x809ecb */ if (fZ) goto L_00809ecb;
L_00809e6e:; BB(0x00809e6e);
    /* 00809e6e: fst dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0));
    /* 00809e71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809e73: fst dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0));
    /* 00809e76: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00809e78: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809e7b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809e7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809e84: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809e88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809e8c: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809e90: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809e93: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00809e97: movsx edi, word ptr [esp + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809e9c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809e9f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809ea3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809ea8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809eac: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809eb0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809eb4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809eb7: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00809ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809ebd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00809ebe: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00809ec2: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x809ec5u); call_ind(t); }
    /* 00809ec5: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00809ec8: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
L_00809ecb:; BB(0x00809ecb);
    /* 00809ecb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809ecd: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809ed0: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809ed4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809ed9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809edd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809ee1: fist dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0)));
    /* 00809ee5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809ee8: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809eec: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809eee: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00809ef1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00809ef3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00809ef6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00809efa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809eff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00809f03: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00809f07: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00809f0b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00809f0e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00809f12: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00809f14: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00809f17: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00809f1a: jmp 0x809f29 */ goto L_00809f29;
L_00809f1c:; BB(0x00809f1c);
    /* 00809f1c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00809f1e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00809f20: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00809f23: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00809f26: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_00809f29:; BB(0x00809f29);
    /* 00809f29: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809f2b: je 0x809f45 */ if (fZ) goto L_00809f45;
L_00809f2d:; BB(0x00809f2d);
    /* 00809f2d: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809f30: add dword ptr [eax + 8], -1 */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00809f34: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00809f37: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00809f3a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00809f3c: jl 0x80a04b */ if ((fS!=fO)) goto L_0080a04b;
L_00809f42:; BB(0x00809f42);
    /* 00809f42: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
L_00809f45:; BB(0x00809f45);
    /* 00809f45: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00809f4a: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00809f4d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00809f51: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
L_00809f54:; BB(0x00809f54);
    /* 00809f54: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00809f57: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00809f5a: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809f5c: jl 0x809e0f */ if ((fS!=fO)) goto L_00809e0f;
L_00809f62:; BB(0x00809f62);
    /* 00809f62: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00809f66: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
L_00809f6a:; BB(0x00809f6a);
    /* 00809f6a: mov ecx, dword ptr [0xaafca4] */ r_ecx = R32((u32)(0xaafca4u));
    /* 00809f70: movsx ebx, word ptr [ecx + 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 00809f74: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00809f77: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00809f7a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00809f7c: jl 0x809c73 */ if ((fS!=fO)) goto L_00809c73;
L_00809f82:; BB(0x00809f82);
    /* 00809f82: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00809f86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x809f8bu); f_0061cdb0();
    /* 00809f8b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00809f8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00809f8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00809f90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00809f91: ret  */ FN_RET(0x00809ddb); r_esp += 4; return;
L_00809f92:; BB(0x00809f92);
    /* 00809f92: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 00809f98: add word ptr [eax + 6], 1 */ { u32 ad = (u32)(r_eax+0x6u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00809f9d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00809fa0: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809fa3: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809fa6: je 0x809ff0 */ if (fZ) goto L_00809ff0;
L_00809fa8:; BB(0x00809fa8);
    /* 00809fa8: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
L_00809fab:; BB(0x00809fab);
    /* 00809fab: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809fae: je 0x809fc5 */ if (fZ) goto L_00809fc5;
L_00809fb0:; BB(0x00809fb0);
    /* 00809fb0: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809fb4: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809fb6: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809fb9: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fbb: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809fbd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fbf: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
    /* 00809fc3: jmp 0x809fe8 */ goto L_00809fe8;
L_00809fc5:; BB(0x00809fc5);
    /* 00809fc5: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00809fc8: je 0x809ff0 */ if (fZ) goto L_00809ff0;
L_00809fca:; BB(0x00809fca);
    /* 00809fca: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00809fcd: movsx esi, word ptr [edx + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 00809fd1: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809fd3: je 0x80a021 */ if (fZ) goto L_0080a021;
L_00809fd5:; BB(0x00809fd5);
    /* 00809fd5: movsx esi, word ptr [edx + 2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 00809fd9: lea ecx, [esi] */ r_ecx = (u32)(r_esi);
    /* 00809fdb: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00809fde: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fe0: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00809fe2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00809fe4: lea edx, [edx + esi + 4] */ r_edx = (u32)(r_edx+r_esi+0x4u);
L_00809fe8:; BB(0x00809fe8);
    /* 00809fe8: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 00809feb: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00809fee: jne 0x809fab */ if (!fZ) goto L_00809fab;
L_00809ff0:; BB(0x00809ff0);
    /* 00809ff0: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00809ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00809ff5: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00809ff8: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x809ffdu); f_0081a588();
    /* 00809ffd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a000: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0080a003: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a005: je 0x809dd2 */ if (fZ) goto L_00809dd2;
L_0080a00b:; BB(0x0080a00b);
    /* 0080a00b: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0080a00e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0080a011: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 0080a015: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 0080a019: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0080a01c: jmp 0x809dd2 */ goto L_00809dd2;
L_0080a021:; BB(0x0080a021);
    /* 0080a021: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a025: cmp cx, word ptr [edx + 6] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080a029: jl 0x80a031 */ if ((fS!=fO)) goto L_0080a031;
L_0080a02b:; BB(0x0080a02b);
    /* 0080a02b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a02d: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
L_0080a031:; BB(0x0080a031);
    /* 0080a031: movsx esi, word ptr [eax + 6] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a035: movzx ecx, word ptr [edx + esi*4 + 8] */ r_ecx = (u32)R16((u32)(r_edx+r_esi*4+0x8u));
    /* 0080a03a: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0080a03e: movsx edx, word ptr [edx + esi*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*4+0xau));
    /* 0080a043: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0080a046: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0080a049: jmp 0x809ff0 */ goto L_00809ff0;
L_0080a04b:; BB(0x0080a04b);
    /* 0080a04b: mov edx, dword ptr [0xaafc6c] */ r_edx = R32((u32)(0xaafc6cu));
    /* 0080a051: add word ptr [eax + 6], 1 */ { u32 ad = (u32)(r_eax+0x6u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0080a056: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0080a059: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080a05c: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a05f: je 0x80a0a9 */ if (fZ) goto L_0080a0a9;
L_0080a061:; BB(0x0080a061);
    /* 0080a061: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
L_0080a064:; BB(0x0080a064);
    /* 0080a064: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a067: je 0x80a07e */ if (fZ) goto L_0080a07e;
L_0080a069:; BB(0x0080a069);
    /* 0080a069: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080a06d: lea ecx, [edi] */ r_ecx = (u32)(r_edi);
    /* 0080a06f: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080a072: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a074: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080a076: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a078: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
    /* 0080a07c: jmp 0x80a0a1 */ goto L_0080a0a1;
L_0080a07e:; BB(0x0080a07e);
    /* 0080a07e: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a081: je 0x80a0a9 */ if (fZ) goto L_0080a0a9;
L_0080a083:; BB(0x0080a083);
    /* 0080a083: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 0080a086: movsx edi, word ptr [edx + 4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 0080a08a: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a08c: je 0x80a0d7 */ if (fZ) goto L_0080a0d7;
L_0080a08e:; BB(0x0080a08e);
    /* 0080a08e: movsx edi, word ptr [edx + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 0080a092: lea ecx, [edi] */ r_ecx = (u32)(r_edi);
    /* 0080a094: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0080a097: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a099: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0080a09b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080a09d: lea edx, [edx + edi + 4] */ r_edx = (u32)(r_edx+r_edi+0x4u);
L_0080a0a1:; BB(0x0080a0a1);
    /* 0080a0a1: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 0080a0a4: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080a0a7: jne 0x80a064 */ if (!fZ) goto L_0080a064;
L_0080a0a9:; BB(0x0080a0a9);
    /* 0080a0a9: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 0080a0ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080a0ae: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080a0b1: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x80a0b6u); f_0081a588();
    /* 0080a0b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080a0b9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080a0bc: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0080a0be: je 0x809f45 */ if (fZ) goto L_00809f45;
L_0080a0c4:; BB(0x0080a0c4);
    /* 0080a0c4: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0080a0c7: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 0080a0cb: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 0080a0cf: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0080a0d2: jmp 0x809f45 */ goto L_00809f45;
L_0080a0d7:; BB(0x0080a0d7);
    /* 0080a0d7: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a0db: cmp cx, word ptr [edx + 6] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0080a0df: jl 0x80a0e7 */ if ((fS!=fO)) goto L_0080a0e7;
L_0080a0e1:; BB(0x0080a0e1);
    /* 0080a0e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0080a0e3: mov word ptr [eax + 6], cx */ W16((u32)(r_eax+0x6u), (u16)r_ecx);
L_0080a0e7:; BB(0x0080a0e7);
    /* 0080a0e7: movsx edi, word ptr [eax + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 0080a0eb: movzx ecx, word ptr [edx + edi*4 + 8] */ r_ecx = (u32)R16((u32)(r_edx+r_edi*4+0x8u));
    /* 0080a0f0: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0080a0f4: movsx edx, word ptr [edx + edi*4 + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+r_edi*4+0xau));
    /* 0080a0f9: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 0080a0fc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0080a0ff: jmp 0x80a0a9 */ goto L_0080a0a9;
}

