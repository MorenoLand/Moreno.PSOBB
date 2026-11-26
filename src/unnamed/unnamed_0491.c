#include "protos.h"

void f_004913ac(void) /* sub_4913AC */
{
    FN_ENTER(0x004913ac);
    /* 004913ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004913ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004913af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004913b1: push 0x8d0148 */ { u32 v = 0x8d0148u; r_esp -= 4; W32(r_esp, v); }
    /* 004913b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004913bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004913bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004913c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004913c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004913ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004913cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004913d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004913d3: push 0x68 */ { u32 v = 0x68u; r_esp -= 4; W32(r_esp, v); }
    /* 004913d5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004913dc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4913e1u); f_005caba4();
    /* 004913e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004913e2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004913e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004913e7: je 0x491426 */ if (fZ) goto L_00491426;
L_004913e9:; BB(0x004913e9);
    /* 004913e9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004913f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004913f7: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004913fa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004913fd: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491400: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491403: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00491406: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491409: call 0x49142c */ r_esp -= 4; W32(r_esp, 0x49140eu); f_0049142c();
    /* 0049140e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491411: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00491418:; BB(0x00491418);
    /* 00491418: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049141b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491422: mov esp, ebp */ r_esp = r_ebp;
    /* 00491424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491425: ret  */ FN_RET(0x004913ac); r_esp += 4; return;
L_00491426:; BB(0x00491426);
    /* 00491426: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491428: jmp 0x491418 */ goto L_00491418;
}

void f_0049142c(void) /* sub_49142C */
{
    FN_ENTER(0x0049142c);
    /* 0049142c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049142d: mov ebp, esp */ r_ebp = r_esp;
    /* 0049142f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00491431: push 0x8d0164 */ { u32 v = 0x8d0164u; r_esp -= 4; W32(r_esp, v); }
    /* 00491436: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049143c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049143d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00491444: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491447: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049144a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0049144d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00491450: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00491453: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00491456: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00491459: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0049145c: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0049145f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00491462: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00491463: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00491466: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00491469: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 0049146c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0049146f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00491472: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00491475: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x49147au); f_008193cc();
    /* 0049147a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491481: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 00491484: mov eax, ebx */ r_eax = r_ebx;
    /* 00491486: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00491489: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0049148c: mov dword ptr [esi], 0xaf9668 */ W32((u32)(r_esi), 0xaf9668u);
    /* 00491492: mov ebx, dword ptr [0x9a6d7c] */ r_ebx = R32((u32)(0x9a6d7cu));
    /* 00491498: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0049149b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0049149d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004914a0: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004914a3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004914a6: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004914a9: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004914ac: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004914af: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 004914b6: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 004914b9: sar ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004914bc: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 004914bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004914c2: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 004914c5: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004914c8: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004914cb: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004914cd: jle 0x4914d5 */ if ((fZ||fS!=fO)) goto L_004914d5;
L_004914cf:; BB(0x004914cf);
    /* 004914cf: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004914d5:; BB(0x004914d5);
    /* 004914d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004914d7: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 004914da: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004914dd: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 004914e0: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 004914e3: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 004914e6: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 004914e9: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 004914ec: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 004914ef: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004914f1: jg 0x491518 */ if ((!fZ&&fS==fO)) goto L_00491518;
L_004914f3:; BB(0x004914f3);
    /* 004914f3: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 004914f6: mov eax, ecx */ r_eax = r_ecx;
    /* 004914f8: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004914fb: shr eax, 0x1b */ { u32 c = (27u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004914fe: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00491500: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00491503: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00491506: mov edi, 1 */ r_edi = 0x1u;
    /* 0049150b: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0049150d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00491510: or dword ptr [esi + eax*4 + 0x34], edi */ { u32 ad = (u32)(r_esi+r_eax*4+0x34u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00491514: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491516: jle 0x4914f3 */ if ((fZ||fS!=fO)) goto L_004914f3;
L_00491518:; BB(0x00491518);
    /* 00491518: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0049151b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049151d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049151f: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00491522: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00491524: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 00491527: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00491529: mov dword ptr [ebx + 0x5c], ecx */ W32((u32)(r_ebx+0x5cu), r_ecx);
    /* 0049152c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x491531u); f_0077a6cc();
    /* 00491531: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491532: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00491535: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00491537: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 0049153a: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 0049153e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00491543: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00491546: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00491549: fist dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0)));
    /* 0049154c: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 0049154f: fcomp dword ptr [0x9021f8] */ fx_compare(ST(0), R_F32((u32)(0x9021f8u))); FPOP();
    /* 00491555: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491557: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0049155a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049155b: je 0x4915a3 */ if (fZ) goto L_004915a3;
L_0049155d:; BB(0x0049155d);
    /* 0049155d: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
L_00491560:; BB(0x00491560);
    /* 00491560: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00491562: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x491567u); f_0077a6cc();
    /* 00491567: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491568: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0049156b: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0049156e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00491571: fcomp dword ptr [0x9021f8] */ fx_compare(ST(0), R_F32((u32)(0x9021f8u))); FPOP();
    /* 00491577: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491579: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049157a: je 0x49159a */ if (fZ) goto L_0049159a;
L_0049157c:; BB(0x0049157c);
    /* 0049157c: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
L_0049157f:; BB(0x0049157f);
    /* 0049157f: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00491582: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00491585: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00491588: mov eax, ecx */ r_eax = r_ecx;
    /* 0049158a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049158d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491594: mov esp, ebp */ r_esp = r_ebp;
    /* 00491596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491597: ret 0x14 */ FN_RET(0x0049142c); r_esp += 24; return;
L_0049159a:; BB(0x0049159a);
    /* 0049159a: mov dword ptr [ecx + 0x64], 0x3f800000 */ W32((u32)(r_ecx+0x64u), 0x3f800000u);
    /* 004915a1: jmp 0x49157f */ goto L_0049157f;
L_004915a3:; BB(0x004915a3);
    /* 004915a3: mov dword ptr [ecx + 0x60], 0x14 */ W32((u32)(r_ecx+0x60u), 0x14u);
    /* 004915aa: jmp 0x491560 */ goto L_00491560;
}

void f_004915ac(void) /* sub_4915AC */
{
    FN_ENTER(0x004915ac);
    /* 004915ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004915ad: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004915b0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004915b2: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x4915b7u); f_00520db8();
    /* 004915b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004915b9: je 0x4915c0 */ if (fZ) goto L_004915c0;
L_004915bb:; BB(0x004915bb);
    /* 004915bb: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004915be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004915bf: ret  */ FN_RET(0x004915ac); r_esp += 4; return;
L_004915c0:; BB(0x004915c0);
    /* 004915c0: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 004915c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004915c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004915ca: jle 0x49167c */ if ((fZ||fS!=fO)) goto L_0049167c;
L_004915d0:; BB(0x004915d0);
    /* 004915d0: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 004915d4: mov esi, edx */ r_esi = r_edx;
    /* 004915d6: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 004915da: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 004915de: mov ebp, eax */ r_ebp = r_eax;
L_004915e0:; BB(0x004915e0);
    /* 004915e0: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 004915e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004915e8: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x4915edu); f_0048e100();
    /* 004915ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004915ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004915f0: je 0x491665 */ if (fZ) goto L_00491665;
L_004915f2:; BB(0x004915f2);
    /* 004915f2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004915f5: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004915f8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004915fb: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004915fe: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 00491601: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00491605: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00491608: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0049160c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x491611u); f_0082f9c4();
    /* 00491611: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00491619: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0049161c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x491621u); f_0083173c();
    /* 00491621: fcomp dword ptr [ebx + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x2cu))); FPOP();
    /* 00491624: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491626: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00491627: ja 0x491665 */ if ((!fC&&!fZ)) goto L_00491665;
L_00491629:; BB(0x00491629);
    /* 00491629: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0049162e: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491631: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x491636u); f_0048e9d4();
    /* 00491636: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491639: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049163d: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00491641: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00491643: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00491647: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00491649: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0049164e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00491652: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00491653: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00491654: mov ecx, edi */ r_ecx = r_edi;
    /* 00491656: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491657: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049165b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049165d: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00491660: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x491663u); call_ind(t); }
    /* 00491663: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00491665:; BB(0x00491665);
    /* 00491665: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00491668: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049166a: jl 0x4915e0 */ if ((fS!=fO)) goto L_004915e0;
L_00491670:; BB(0x00491670);
    /* 00491670: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00491674: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00491678: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0049167c:; BB(0x0049167c);
    /* 0049167c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0049167f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00491682: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00491685: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491688: jle 0x4915bb */ if ((fZ||fS!=fO)) goto L_004915bb;
L_0049168e:; BB(0x0049168e);
    /* 0049168e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00491692: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00491697: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0049169b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049169e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049169f: ret  */ FN_RET(0x004915ac); r_esp += 4; return;
}

void f_004916a0(void) /* sub_4916A0 */
{
    FN_ENTER(0x004916a0);
    /* 004916a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004916a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004916a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004916a5: push 0x8d018c */ { u32 v = 0x8d018cu; r_esp -= 4; W32(r_esp, v); }
    /* 004916aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004916b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004916b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004916b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004916bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004916be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004916c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004916c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004916c7: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004916c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004916d0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4916d5u); f_005caba4();
    /* 004916d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004916d6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004916d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004916db: je 0x491717 */ if (fZ) goto L_00491717;
L_004916dd:; BB(0x004916dd);
    /* 004916dd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004916e4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004916eb: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004916ee: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004916f1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004916f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004916f7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004916fa: call 0x49171c */ r_esp -= 4; W32(r_esp, 0x4916ffu); f_0049171c();
    /* 004916ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491702: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00491709:; BB(0x00491709);
    /* 00491709: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049170c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491713: mov esp, ebp */ r_esp = r_ebp;
    /* 00491715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491716: ret  */ FN_RET(0x004916a0); r_esp += 4; return;
L_00491717:; BB(0x00491717);
    /* 00491717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491719: jmp 0x491709 */ goto L_00491709;
}

void f_0049171c(void) /* sub_49171C */
{
    FN_ENTER(0x0049171c);
    /* 0049171c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0049171d: mov ebp, esp */ r_ebp = r_esp;
    /* 0049171f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00491721: push 0x8d01a8 */ { u32 v = 0x8d01a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00491726: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0049172c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049172d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00491734: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491737: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049173a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0049173d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00491740: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00491743: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00491746: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00491749: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0049174c: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 0049174f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00491752: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00491753: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00491756: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00491759: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0049175c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0049175f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x491764u); f_008193cc();
    /* 00491764: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049176b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0049176e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491770: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00491773: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00491775: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00491778: mov dword ptr [eax], 0xaf9678 */ W32((u32)(r_eax), 0xaf9678u);
    /* 0049177e: mov edx, dword ptr [0x9a6d80] */ r_edx = R32((u32)(0x9a6d80u));
    /* 00491784: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00491787: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00491789: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0049178c: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0049178f: mov dword ptr [eax + 0x24], esi */ W32((u32)(r_eax+0x24u), r_esi);
    /* 00491792: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00491795: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00491798: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049179b: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 004917a2: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004917a5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4917aau); f_0077a6cc();
    /* 004917aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004917ab: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 004917ae: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004917b0: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 004917b3: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 004917b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004917bc: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004917bf: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004917c2: fist dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0)));
    /* 004917c5: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004917c8: fcomp dword ptr [0x9021e4] */ fx_compare(ST(0), R_F32((u32)(0x9021e4u))); FPOP();
    /* 004917ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004917d0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 004917d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004917d4: je 0x491876 */ if (fZ) goto L_00491876;
L_004917da:; BB(0x004917da);
    /* 004917da: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
L_004917dd:; BB(0x004917dd);
    /* 004917dd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004917e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004917e2: je 0x49185b */ if (fZ) goto L_0049185b;
L_004917e4:; BB(0x004917e4);
    /* 004917e4: fld dword ptr [0x9021e0] */ FPUSH(R_F32((u32)(0x9021e0u)));
    /* 004917ea: fld dword ptr [0x902170] */ FPUSH(R_F32((u32)(0x902170u)));
    /* 004917f0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004917f2: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 004917f5: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 004917f8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004917fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004917fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004917fd: jbe 0x491804 */ if ((fC||fZ)) goto L_00491804;
L_004917ff:; BB(0x004917ff);
    /* 004917ff: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00491801: fst dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0));
L_00491804:; BB(0x00491804);
    /* 00491804: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00491806: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00491808: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0049180a: push 0x212 */ { u32 v = 0x212u; r_esp -= 4; W32(r_esp, v); }
    /* 0049180f: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00491812: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00491813: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x491818u); f_0050b7a4();
    /* 00491818: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049181b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049181d: je 0x49182c */ if (fZ) goto L_0049182c;
L_0049181f:; BB(0x0049181f);
    /* 0049181f: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00491822: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 00491825: mov dword ptr [eax + 0x48], 0x3f800000 */ W32((u32)(r_eax+0x48u), 0x3f800000u);
L_0049182c:; BB(0x0049182c);
    /* 0049182c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0049182f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00491831: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 00491836: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00491839: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049183a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x49183fu); f_0050b7a4();
    /* 0049183f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491842: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491844: je 0x491858 */ if (fZ) goto L_00491858;
L_00491846:; BB(0x00491846);
    /* 00491846: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 00491849: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0049184c: fstp dword ptr [eax + 0x44] */ W_F32((u32)(r_eax+0x44u), ST(0)); FPOP();
    /* 0049184f: mov dword ptr [eax + 0x48], 0x3f800000 */ W32((u32)(r_eax+0x48u), 0x3f800000u);
    /* 00491856: jmp 0x49185b */ goto L_0049185b;
L_00491858:; BB(0x00491858);
    /* 00491858: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
L_0049185b:; BB(0x0049185b);
    /* 0049185b: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0049185e: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00491861: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00491864: mov eax, ecx */ r_eax = r_ecx;
    /* 00491866: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491869: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491870: mov esp, ebp */ r_esp = r_ebp;
    /* 00491872: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491873: ret 0x10 */ FN_RET(0x0049171c); r_esp += 20; return;
L_00491876:; BB(0x00491876);
    /* 00491876: mov dword ptr [ecx + 0x34], 0x14 */ W32((u32)(r_ecx+0x34u), 0x14u);
    /* 0049187d: jmp 0x4917dd */ goto L_004917dd;
}

void f_004918c4(void) /* sub_4918C4 */
{
    FN_ENTER(0x004918c4);
    /* 004918c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004918c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004918c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004918c9: call 0x4918e8 */ r_esp -= 4; W32(r_esp, 0x4918ceu); f_004918e8();
    /* 004918ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004918d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004918d4: jne 0x4918da */ if (!fZ) goto L_004918da;
L_004918d6:; BB(0x004918d6);
    /* 004918d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004918d7: ret 4 */ FN_RET(0x004918c4); r_esp += 8; return;
L_004918da:; BB(0x004918da);
    /* 004918da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004918db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4918e0u); f_005c2f74();
    /* 004918e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004918e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004918e2: ret 4 */ FN_RET(0x004918c4); r_esp += 8; return;
}

void f_004918e8(void) /* sub_4918E8 */
{
    FN_ENTER(0x004918e8);
    /* 004918e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004918e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004918eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004918ed: push 0x8d01c4 */ { u32 v = 0x8d01c4u; r_esp -= 4; W32(r_esp, v); }
    /* 004918f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004918f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004918f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00491900: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491903: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00491906: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00491909: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0049190c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0049190f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00491912: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491919: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049191c: mov dword ptr [eax], 0xaf9700 */ W32((u32)(r_eax), 0xaf9700u);
    /* 00491922: call 0x491974 */ r_esp -= 4; W32(r_esp, 0x491927u); f_00491974();
    /* 00491927: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049192a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0049192c:; BB(0x0049192c);
    /* 0049192c: mov eax, dword ptr [ecx + esi*4 + 0x54] */ r_eax = R32((u32)(r_ecx+r_esi*4+0x54u));
    /* 00491930: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00491933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491935: je 0x491949 */ if (fZ) goto L_00491949;
L_00491937:; BB(0x00491937);
    /* 00491937: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491938: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x49193du); f_005cdcc0();
    /* 0049193d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049193e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491941: mov dword ptr [ecx + ebx*2 + 0x54], 0 */ W32((u32)(r_ecx+r_ebx*2+0x54u), 0x0u);
L_00491949:; BB(0x00491949);
    /* 00491949: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049194c: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049194f: jl 0x49192c */ if ((fS!=fO)) goto L_0049192c;
L_00491951:; BB(0x00491951);
    /* 00491951: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00491958: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x49195du); f_008171e8();
    /* 0049195d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00491960: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00491963: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00491966: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491969: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491970: mov esp, ebp */ r_esp = r_ebp;
    /* 00491972: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491973: ret  */ FN_RET(0x004918e8); r_esp += 4; return;
}

void f_00491974(void) /* sub_491974 */
{
    FN_ENTER(0x00491974);
    /* 00491974: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 00491979: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x49197eu); f_006bb100();
    /* 0049197e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049197f: ret  */ FN_RET(0x00491974); r_esp += 4; return;
}

void f_00491980(void) /* sub_491980 */
{
    FN_ENTER(0x00491980);
    /* 00491980: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00491981: mov esi, ecx */ r_esi = r_ecx;
    /* 00491983: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 00491986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491988: je 0x4919a6 */ if (fZ) goto L_004919a6;
L_0049198a:; BB(0x0049198a);
    /* 0049198a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049198d: jne 0x491998 */ if (!fZ) goto L_00491998;
L_0049198f:; BB(0x0049198f);
    /* 0049198f: mov ecx, esi */ r_ecx = r_esi;
    /* 00491991: call 0x453e40 */ r_esp -= 4; W32(r_esp, 0x491996u); f_00453e40();
    /* 00491996: jmp 0x4919ad */ goto L_004919ad;
L_00491998:; BB(0x00491998);
    /* 00491998: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049199b: jne 0x4919ad */ if (!fZ) goto L_004919ad;
L_0049199d:; BB(0x0049199d);
    /* 0049199d: mov ecx, esi */ r_ecx = r_esi;
    /* 0049199f: call 0x491a28 */ r_esp -= 4; W32(r_esp, 0x4919a4u); f_00491a28();
    /* 004919a4: jmp 0x4919ad */ goto L_004919ad;
L_004919a6:; BB(0x004919a6);
    /* 004919a6: mov ecx, esi */ r_ecx = r_esi;
    /* 004919a8: call 0x491b40 */ r_esp -= 4; W32(r_esp, 0x4919adu); f_00491b40();
L_004919ad:; BB(0x004919ad);
    /* 004919ad: fld dword ptr [0x9022f0] */ FPUSH(R_F32((u32)(0x9022f0u)));
    /* 004919b3: fld dword ptr [0x902318] */ FPUSH(R_F32((u32)(0x902318u)));
    /* 004919b9: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 004919bc: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004919be: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004919c1: fst dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0));
    /* 004919c4: mov eax, dword ptr [esi + edx*4 + 0x48] */ r_eax = R32((u32)(r_esi+r_edx*4+0x48u));
    /* 004919c8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 004919cb: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004919ce: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004919d1: fadd dword ptr [ecx*4 + 0x9022d8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x9022d8u));
    /* 004919d8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004919da: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004919dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004919de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004919df: ja 0x4919f2 */ if ((!fC&&!fZ)) goto L_004919f2;
L_004919e1:; BB(0x004919e1);
    /* 004919e1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004919e3: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004919e6: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 004919e9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004919eb: je 0x4919f6 */ if (fZ) goto L_004919f6;
L_004919ed:; BB(0x004919ed);
    /* 004919ed: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004919f0: jmp 0x4919f6 */ goto L_004919f6;
L_004919f2:; BB(0x004919f2);
    /* 004919f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004919f4: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004919f6:; BB(0x004919f6);
    /* 004919f6: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 004919f9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004919fb: mov edx, dword ptr [esi + 0x50] */ r_edx = R32((u32)(r_esi+0x50u));
    /* 004919fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00491a00: fst dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0));
    /* 00491a03: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 00491a06: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00491a09: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fO = (a >> 31) & 1; } }
    /* 00491a0c: fadd dword ptr [eax*4 + 0x9022d8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9022d8u));
    /* 00491a13: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00491a15: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00491a17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491a19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00491a1a: jb 0x491a21 */ if (fC) goto L_00491a21;
L_00491a1c:; BB(0x00491a1c);
    /* 00491a1c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00491a1e: fst dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0));
L_00491a21:; BB(0x00491a21);
    /* 00491a21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00491a23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00491a25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00491a26: ret  */ FN_RET(0x00491980); r_esp += 4; return;
}

void f_00491a28(void) /* sub_491A28 */
{
    FN_ENTER(0x00491a28);
    /* 00491a28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00491a29: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491a2c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00491a2e: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00491a31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491a34: je 0x491b39 */ if (fZ) goto L_00491b39;
L_00491a3a:; BB(0x00491a3a);
    /* 00491a3a: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00491a3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491a3f: jne 0x491a56 */ if (!fZ) goto L_00491a56;
L_00491a41:; BB(0x00491a41);
    /* 00491a41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491a43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491a45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491a46: push 0x3e5 */ { u32 v = 0x3e5u; r_esp -= 4; W32(r_esp, v); }
    /* 00491a4b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x491a50u); f_00814298();
    /* 00491a50: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491a53: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
L_00491a56:; BB(0x00491a56);
    /* 00491a56: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00491a5a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00491a5e: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00491a62: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00491a64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491a66: mov ebp, eax */ r_ebp = r_eax;
    /* 00491a68: mov eax, ecx */ r_eax = r_ecx;
    /* 00491a6a: mov esi, edx */ r_esi = r_edx;
L_00491a6c:; BB(0x00491a6c);
    /* 00491a6c: cmp eax, dword ptr [ebp + 0x90223c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x90223cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491a72: jl 0x491a89 */ if ((fS!=fO)) goto L_00491a89;
L_00491a74:; BB(0x00491a74);
    /* 00491a74: cmp eax, dword ptr [ebp + 0x902240] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x902240u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491a7a: jg 0x491a89 */ if ((!fZ&&fS==fO)) goto L_00491a89;
L_00491a7c:; BB(0x00491a7c);
    /* 00491a7c: mov edx, dword ptr [ebx + esi*4 + 0x54] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x54u));
    /* 00491a80: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00491a83: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491a85: je 0x491aea */ if (fZ) goto L_00491aea;
L_00491a87:; BB(0x00491a87);
    /* 00491a87: jmp 0x491aa6 */ goto L_00491aa6;
L_00491a89:; BB(0x00491a89);
    /* 00491a89: mov edx, dword ptr [ebx + esi*4 + 0x54] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x54u));
    /* 00491a8d: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00491a90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491a92: je 0x491aa6 */ if (fZ) goto L_00491aa6;
L_00491a94:; BB(0x00491a94);
    /* 00491a94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491a95: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x491a9au); f_005cdcc0();
    /* 00491a9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491a9b: mov dword ptr [ebx + edi*2 + 0x54], 0 */ W32((u32)(r_ebx+r_edi*2+0x54u), 0x0u);
    /* 00491aa3: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
L_00491aa6:; BB(0x00491aa6);
    /* 00491aa6: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00491aa9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00491aac: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491aaf: jl 0x491a6c */ if ((fS!=fO)) goto L_00491a6c;
L_00491ab1:; BB(0x00491ab1);
    /* 00491ab1: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00491ab5: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00491ab9: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00491abd: mov ecx, eax */ r_ecx = r_eax;
    /* 00491abf: cmp ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491ac2: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00491ac5: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00491ac8: fdiv dword ptr [0x902310] */ ST(0) = ST(0) / R_F32((u32)(0x902310u));
    /* 00491ace: fadd dword ptr [0x902314] */ ST(0) = ST(0) + R_F32((u32)(0x902314u));
    /* 00491ad4: fmul dword ptr [0x9022f4] */ ST(0) = ST(0) * R_F32((u32)(0x9022f4u));
    /* 00491ada: fstp dword ptr [ebx + 0x30] */ W_F32((u32)(r_ebx+0x30u), ST(0)); FPOP();
    /* 00491add: je 0x491b18 */ if (fZ) goto L_00491b18;
L_00491adf:; BB(0x00491adf);
    /* 00491adf: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00491ae2: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 00491ae5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00491ae8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491ae9: ret  */ FN_RET(0x00491a28); r_esp += 4; return;
L_00491aea:; BB(0x00491aea);
    /* 00491aea: push dword ptr [ebp + 0x902238] */ { u32 v = R32((u32)(r_ebp+0x902238u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491af0: push 0x9022e0 */ { u32 v = 0x9022e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00491af5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x491afau); f_00509590();
    /* 00491afa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491afd: mov dword ptr [ebx + edi*2 + 0x54], eax */ W32((u32)(r_ebx+r_edi*2+0x54u), r_eax);
    /* 00491b01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491b03: je 0x491b13 */ if (fZ) goto L_00491b13;
L_00491b05:; BB(0x00491b05);
    /* 00491b05: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00491b07: mov ecx, eax */ r_ecx = r_eax;
    /* 00491b09: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x491b0eu); f_00508efc();
    /* 00491b0e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00491b11: jmp 0x491aa6 */ goto L_00491aa6;
L_00491b13:; BB(0x00491b13);
    /* 00491b13: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00491b16: jmp 0x491aa6 */ goto L_00491aa6;
L_00491b18:; BB(0x00491b18);
    /* 00491b18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491b1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491b1d: push 0x3e6 */ { u32 v = 0x3e6u; r_esp -= 4; W32(r_esp, v); }
    /* 00491b22: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x491b27u); f_00814298();
    /* 00491b27: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00491b2b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00491b30: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00491b34: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00491b37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491b38: ret  */ FN_RET(0x00491a28); r_esp += 4; return;
L_00491b39:; BB(0x00491b39);
    /* 00491b39: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00491b3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491b3d: ret  */ FN_RET(0x00491a28); r_esp += 4; return;
}

void f_00491b40(void) /* sub_491B40 */
{
    FN_ENTER(0x00491b40);
    /* 00491b40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00491b41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00491b42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491b43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00491b44: mov eax, ecx */ r_eax = r_ecx;
    /* 00491b46: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00491b48: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00491b4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491b50: jle 0x491b91 */ if ((fZ||fS!=fO)) goto L_00491b91;
L_00491b52:; BB(0x00491b52);
    /* 00491b52: mov ebx, eax */ r_ebx = r_eax;
    /* 00491b54: mov ebp, edx */ r_ebp = r_edx;
    /* 00491b56: mov esi, ecx */ r_esi = r_ecx;
L_00491b58:; BB(0x00491b58);
    /* 00491b58: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00491b5f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491b61: je 0x491b8a */ if (fZ) goto L_00491b8a;
L_00491b63:; BB(0x00491b63);
    /* 00491b63: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00491b64: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x491b69u); f_0048e100();
    /* 00491b69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491b6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491b6c: je 0x491b8a */ if (fZ) goto L_00491b8a;
L_00491b6e:; BB(0x00491b6e);
    /* 00491b6e: push 0x9022e0 */ { u32 v = 0x9022e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00491b73: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00491b76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00491b77: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x491b7cu); f_00836208();
    /* 00491b7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00491b7f: fcomp dword ptr [0x9022ec] */ fx_compare(ST(0), R_F32((u32)(0x9022ecu))); FPOP();
    /* 00491b85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491b87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00491b88: jbe 0x491b96 */ if ((fC||fZ)) goto L_00491b96;
L_00491b8a:; BB(0x00491b8a);
    /* 00491b8a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00491b8d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00491b8f: jl 0x491b58 */ if ((fS!=fO)) goto L_00491b58;
L_00491b91:; BB(0x00491b91);
    /* 00491b91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491b92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491b93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00491b94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00491b95: ret  */ FN_RET(0x00491b40); r_esp += 4; return;
L_00491b96:; BB(0x00491b96);
    /* 00491b96: mov eax, ebx */ r_eax = r_ebx;
    /* 00491b98: mov edx, 1 */ r_edx = 0x1u;
    /* 00491b9d: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00491ba0: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00491ba3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491ba4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491ba5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00491ba6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00491ba7: ret  */ FN_RET(0x00491b40); r_esp += 4; return;
}

void f_00491ba8(void) /* sub_491BA8 */
{
    FN_ENTER(0x00491ba8);
    /* 00491ba8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491ba9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00491bab: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 00491bae: fcomp dword ptr [0x90230c] */ fx_compare(ST(0), R_F32((u32)(0x90230cu))); FPOP();
    /* 00491bb4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00491bb6: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00491bb9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00491bba: je 0x491c60 */ if (fZ) goto L_00491c60;
L_00491bc0:; BB(0x00491bc0);
    /* 00491bc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00491bc1: call 0x48e3a4 */ r_esp -= 4; W32(r_esp, 0x491bc6u); f_0048e3a4();
    /* 00491bc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491bc7: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x491bccu); f_0082fa9c();
    /* 00491bcc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x491bd1u); f_0082d7b0();
    /* 00491bd1: mov ecx, 0x9022e0 */ r_ecx = 0x9022e0u;
    /* 00491bd6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x491bdbu); f_0082d838();
    /* 00491bdb: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 00491bde: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x491be3u); f_00829cc8();
    /* 00491be3: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00491be8: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00491bed: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00491bf2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00491bf4: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x491bf9u); f_0082fa0c();
    /* 00491bf9: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491bfc: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00491bff: push dword ptr [ebp + eax*4 + 0x48] */ { u32 v = R32((u32)(r_ebp+r_eax*4+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491c03: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491c06: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x491c0bu); f_0083046c();
    /* 00491c0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491c0e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x491c13u); f_0082da80();
    /* 00491c13: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x491c18u); f_0082d7b0();
    /* 00491c18: mov ecx, 0x9022e0 */ r_ecx = 0x9022e0u;
    /* 00491c1d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x491c22u); f_0082d838();
    /* 00491c22: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 00491c25: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x491c2au); f_00829cc8();
    /* 00491c2a: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00491c2f: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00491c34: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00491c39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00491c3b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x491c40u); f_0082fa0c();
    /* 00491c40: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00491c43: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491c46: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00491c49: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x491c4eu); f_0083046c();
    /* 00491c4e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00491c51: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x491c56u); f_0082da80();
    /* 00491c56: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x491c5bu); f_0082faac();
    /* 00491c5b: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x491c60u); f_005963d0();
L_00491c60:; BB(0x00491c60);
    /* 00491c60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491c61: ret  */ FN_RET(0x00491ba8); r_esp += 4; return;
}

void f_00491c64(void) /* sub_491C64 */
{
    FN_ENTER(0x00491c64);
    /* 00491c64: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491c67: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00491c6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491c6e: je 0x491d41 */ if (fZ) goto L_00491d41;
L_00491c74:; BB(0x00491c74);
    /* 00491c74: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x491c79u); f_007a61a4();
    /* 00491c79: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491c7c: je 0x491d41 */ if (fZ) goto L_00491d41;
L_00491c82:; BB(0x00491c82);
    /* 00491c82: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00491c88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491c8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00491c8c: jle 0x491d41 */ if ((fZ||fS!=fO)) goto L_00491d41;
L_00491c92:; BB(0x00491c92);
    /* 00491c92: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00491c96: mov esi, edx */ r_esi = r_edx;
    /* 00491c98: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00491c9c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00491ca0: mov ebp, eax */ r_ebp = r_eax;
L_00491ca2:; BB(0x00491ca2);
    /* 00491ca2: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00491ca9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491cab: je 0x491d2a */ if (fZ) goto L_00491d2a;
L_00491cb1:; BB(0x00491cb1);
    /* 00491cb1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00491cb2: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x491cb7u); f_0048e100();
    /* 00491cb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491cb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491cba: je 0x491d2a */ if (fZ) goto L_00491d2a;
L_00491cbc:; BB(0x00491cbc);
    /* 00491cbc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00491cbf: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00491cc3: add edi, 0xdf8 */ {  u32 a = r_edi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00491cc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491ccb: mov esi, eax */ r_esi = r_eax;
    /* 00491ccd: mov ebx, edi */ r_ebx = r_edi;
L_00491ccf:; BB(0x00491ccf);
    /* 00491ccf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00491cd1:; BB(0x00491cd1);
    /* 00491cd1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00491cd2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491cd4: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x491cd9u); f_0069792c();
    /* 00491cd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491cdb: je 0x491d13 */ if (fZ) goto L_00491d13;
L_00491cdd:; BB(0x00491cdd);
    /* 00491cdd: movzx edx, byte ptr [esi + 0x9022b8] */ r_edx = (u32)R8((u32)(r_esi+0x9022b8u));
    /* 00491ce4: movzx ecx, byte ptr [eax + 0xf2] */ r_ecx = (u32)R8((u32)(r_eax+0xf2u));
    /* 00491ceb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491ced: jne 0x491d13 */ if (!fZ) goto L_00491d13;
L_00491cef:; BB(0x00491cef);
    /* 00491cef: movzx edx, byte ptr [esi + 0x9022b9] */ r_edx = (u32)R8((u32)(r_esi+0x9022b9u));
    /* 00491cf6: movzx ecx, byte ptr [eax + 0xf3] */ r_ecx = (u32)R8((u32)(r_eax+0xf3u));
    /* 00491cfd: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491cff: jne 0x491d13 */ if (!fZ) goto L_00491d13;
L_00491d01:; BB(0x00491d01);
    /* 00491d01: movzx edx, byte ptr [esi + 0x9022ba] */ r_edx = (u32)R8((u32)(r_esi+0x9022bau));
    /* 00491d08: movzx eax, byte ptr [eax + 0xf4] */ r_eax = (u32)R8((u32)(r_eax+0xf4u));
    /* 00491d0f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491d11: je 0x491d47 */ if (fZ) goto L_00491d47;
L_00491d13:; BB(0x00491d13);
    /* 00491d13: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00491d16: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491d19: jl 0x491cd1 */ if ((fS!=fO)) goto L_00491cd1;
L_00491d1b:; BB(0x00491d1b);
    /* 00491d1b: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00491d1e: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491d21: jl 0x491ccf */ if ((fS!=fO)) goto L_00491ccf;
L_00491d23:; BB(0x00491d23);
    /* 00491d23: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00491d26: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_00491d2a:; BB(0x00491d2a);
    /* 00491d2a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00491d2d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00491d2f: jl 0x491ca2 */ if ((fS!=fO)) goto L_00491ca2;
L_00491d35:; BB(0x00491d35);
    /* 00491d35: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00491d39: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00491d3d: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_00491d41:; BB(0x00491d41);
    /* 00491d41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00491d43: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00491d46: ret  */ FN_RET(0x00491c64); r_esp += 4; return;
L_00491d47:; BB(0x00491d47);
    /* 00491d47: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00491d4b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00491d4f: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00491d53: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00491d57: call 0x491d68 */ r_esp -= 4; W32(r_esp, 0x491d5cu); f_00491d68();
    /* 00491d5c: mov eax, 1 */ r_eax = 0x1u;
    /* 00491d61: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00491d64: ret  */ FN_RET(0x00491c64); r_esp += 4; return;
}

void f_00491d68(void) /* sub_491D68 */
{
    FN_ENTER(0x00491d68);
    /* 00491d68: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00491d6d: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x491d72u); f_006bb100();
    /* 00491d72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491d73: ret  */ FN_RET(0x00491d68); r_esp += 4; return;
}

void f_00491d74(void) /* sub_491D74 */
{
    FN_ENTER(0x00491d74);
    /* 00491d74: call 0x491d7c */ r_esp -= 4; W32(r_esp, 0x491d79u); f_00491d7c();
    /* 00491d79: ret  */ FN_RET(0x00491d74); r_esp += 4; return;
}

void f_00491d7c(void) /* sub_491D7C */
{
    FN_ENTER(0x00491d7c);
    /* 00491d7c: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 00491d81: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x491d86u); f_006bb254();
    /* 00491d86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491d88: mov eax, 0 */ r_eax = 0x0u;
    /* 00491d8d: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00491d90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491d91: ret  */ FN_RET(0x00491d7c); r_esp += 4; return;
}

void f_00491d94(void) /* sub_491D94 */
{
    FN_ENTER(0x00491d94);
    /* 00491d94: call 0x491d7c */ r_esp -= 4; W32(r_esp, 0x491d99u); f_00491d7c();
    /* 00491d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491d9b: je 0x491dac */ if (fZ) goto L_00491dac;
L_00491d9d:; BB(0x00491d9d);
    /* 00491d9d: call 0x491db0 */ r_esp -= 4; W32(r_esp, 0x491da2u); f_00491db0();
    /* 00491da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491da4: jne 0x491dac */ if (!fZ) goto L_00491dac;
L_00491da6:; BB(0x00491da6);
    /* 00491da6: mov eax, 1 */ r_eax = 0x1u;
    /* 00491dab: ret  */ FN_RET(0x00491d94); r_esp += 4; return;
L_00491dac:; BB(0x00491dac);
    /* 00491dac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491dae: ret  */ FN_RET(0x00491d94); r_esp += 4; return;
}

void f_00491db0(void) /* sub_491DB0 */
{
    FN_ENTER(0x00491db0);
    /* 00491db0: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 00491db5: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x491dbau); f_006bb254();
    /* 00491dba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491dbc: mov eax, 0 */ r_eax = 0x0u;
    /* 00491dc1: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00491dc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491dc5: ret  */ FN_RET(0x00491db0); r_esp += 4; return;
}

void f_00491dc8(void) /* sub_491DC8 */
{
    FN_ENTER(0x00491dc8);
    /* 00491dc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491dc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00491dcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00491dcd: push 0x8d01ec */ { u32 v = 0x8d01ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00491dd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00491dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491dd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00491de0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491de3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00491de6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00491de9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00491dec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00491def: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00491df1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00491df8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x491dfdu); f_005caba4();
    /* 00491dfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491dfe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00491e01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00491e03: je 0x491e39 */ if (fZ) goto L_00491e39;
L_00491e05:; BB(0x00491e05);
    /* 00491e05: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00491e0c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491e13: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491e19: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491e1c: call 0x491e40 */ r_esp -= 4; W32(r_esp, 0x491e21u); f_00491e40();
    /* 00491e21: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491e24: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00491e2b:; BB(0x00491e2b);
    /* 00491e2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491e2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491e35: mov esp, ebp */ r_esp = r_ebp;
    /* 00491e37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491e38: ret  */ FN_RET(0x00491dc8); r_esp += 4; return;
L_00491e39:; BB(0x00491e39);
    /* 00491e39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491e3b: jmp 0x491e2b */ goto L_00491e2b;
}

void f_00491e40(void) /* sub_491E40 */
{
    FN_ENTER(0x00491e40);
    /* 00491e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00491e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00491e45: push 0x8d0208 */ { u32 v = 0x8d0208u; r_esp -= 4; W32(r_esp, v); }
    /* 00491e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00491e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00491e58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00491e5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00491e61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00491e64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00491e67: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00491e6a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00491e6d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x491e72u); f_008193cc();
    /* 00491e72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491e79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491e7c: mov dword ptr [edx], 0xaf9700 */ W32((u32)(r_edx), 0xaf9700u);
    /* 00491e82: mov eax, dword ptr [0x9a6d84] */ r_eax = R32((u32)(0x9a6d84u));
    /* 00491e87: mov ebx, dword ptr [0xa46fa0] */ r_ebx = R32((u32)(0xa46fa0u));
    /* 00491e8d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00491e8f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00491e92: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491e94: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x491e99u); f_005b8610();
    /* 00491e99: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491e9c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00491e9e: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00491ea1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491ea3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x491ea8u); f_005b8624();
    /* 00491ea8: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491eab: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00491ead: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00491eb0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491eb2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x491eb7u); f_005b8638();
    /* 00491eb7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491eba: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00491ebc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00491ebf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491ec1: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x491ec6u); f_005b8638();
    /* 00491ec6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491ec9: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00491ecb: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00491ece: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491ed0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x491ed5u); f_005b8610();
    /* 00491ed5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491ed8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00491eda: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00491edd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491edf: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x491ee4u); f_005b8624();
    /* 00491ee4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491ee7: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00491ee9: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00491eec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491eee: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x491ef3u); f_005b8638();
    /* 00491ef3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491ef6: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 00491ef9: call 0x491f58 */ r_esp -= 4; W32(r_esp, 0x491efeu); f_00491f58();
    /* 00491efe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491f01: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00491f04: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491f06: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00491f09: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00491f10: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00491f13: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00491f16: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00491f19: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00491f20: mov dword ptr [eax + 0x30], 0x3f7d70a4 */ W32((u32)(r_eax+0x30u), 0x3f7d70a4u);
    /* 00491f27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491f2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491f31: mov esp, ebp */ r_esp = r_ebp;
    /* 00491f33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491f34: ret 4 */ FN_RET(0x00491e40); r_esp += 8; return;
}

void f_00491f38(void) /* sub_491F38 */
{
    FN_ENTER(0x00491f38);
    /* 00491f38: mov dword ptr [0xa47238], 0x3f800000 */ W32((u32)(0xa47238u), 0x3f800000u);
    /* 00491f42: mov dword ptr [0xa4723c], 0x41000000 */ W32((u32)(0xa4723cu), 0x41000000u);
    /* 00491f4c: mov dword ptr [0xa47240], 0x3fc00000 */ W32((u32)(0xa47240u), 0x3fc00000u);
    /* 00491f56: ret  */ FN_RET(0x00491f38); r_esp += 4; return;
}

void f_00491f58(void) /* sub_491F58 */
{
    FN_ENTER(0x00491f58);
    /* 00491f58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491f5a: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 00491f5d: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 00491f60: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 00491f63: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00491f66: ret  */ FN_RET(0x00491f58); r_esp += 4; return;
}

void f_00491f68(void) /* sub_491F68 */
{
    FN_ENTER(0x00491f68);
    /* 00491f68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00491f69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00491f6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00491f6d: call 0x491f8c */ r_esp -= 4; W32(r_esp, 0x491f72u); f_00491f8c();
    /* 00491f72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00491f76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491f78: jne 0x491f7e */ if (!fZ) goto L_00491f7e;
L_00491f7a:; BB(0x00491f7a);
    /* 00491f7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491f7b: ret 4 */ FN_RET(0x00491f68); r_esp += 8; return;
L_00491f7e:; BB(0x00491f7e);
    /* 00491f7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00491f7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x491f84u); f_005c2f74();
    /* 00491f84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00491f85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00491f86: ret 4 */ FN_RET(0x00491f68); r_esp += 8; return;
}

void f_00491f8c(void) /* sub_491F8C */
{
    FN_ENTER(0x00491f8c);
    /* 00491f8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00491f8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00491f8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00491f91: push 0x8d0224 */ { u32 v = 0x8d0224u; r_esp -= 4; W32(r_esp, v); }
    /* 00491f96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00491f9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00491f9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00491fa4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00491fa7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00491faa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00491fad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00491fb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00491fb3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00491fb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00491fbd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491fc0: mov dword ptr [eax], 0xaf9788 */ W32((u32)(r_eax), 0xaf9788u);
    /* 00491fc6: call 0x492760 */ r_esp -= 4; W32(r_esp, 0x491fcbu); f_00492760();
    /* 00491fcb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00491fd2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00491fd5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x491fdau); f_008171e8();
    /* 00491fda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00491fdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00491fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 00491fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00491fe7: ret  */ FN_RET(0x00491f8c); r_esp += 4; return;
}

void f_00491fe8(void) /* sub_491FE8 */
{
    FN_ENTER(0x00491fe8);
    /* 00491fe8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00491fe9: mov edi, ecx */ r_edi = r_ecx;
    /* 00491feb: mov ecx, edi */ r_ecx = r_edi;
    /* 00491fed: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x491ff2u); f_006dc358();
    /* 00491ff2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491ff4: je 0x491ff8 */ if (fZ) goto L_00491ff8;
L_00491ff6:; BB(0x00491ff6);
    /* 00491ff6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00491ff7: ret  */ FN_RET(0x00491fe8); r_esp += 4; return;
L_00491ff8:; BB(0x00491ff8);
    /* 00491ff8: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x491ffdu); f_00520db8();
    /* 00491ffd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00491fff: jne 0x492032 */ if (!fZ) goto L_00492032;
L_00492001:; BB(0x00492001);
    /* 00492001: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00492004: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00492006: je 0x49202b */ if (fZ) goto L_0049202b;
L_00492008:; BB(0x00492008);
    /* 00492008: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049200b: jne 0x49201d */ if (!fZ) goto L_0049201d;
L_0049200d:; BB(0x0049200d);
    /* 0049200d: mov ecx, edi */ r_ecx = r_edi;
    /* 0049200f: call 0x492034 */ r_esp -= 4; W32(r_esp, 0x492014u); f_00492034();
    /* 00492014: mov ecx, edi */ r_ecx = r_edi;
    /* 00492016: call 0x4920d8 */ r_esp -= 4; W32(r_esp, 0x49201bu); f_004920d8();
    /* 0049201b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049201c: ret  */ FN_RET(0x00491fe8); r_esp += 4; return;
L_0049201d:; BB(0x0049201d);
    /* 0049201d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00492020: jne 0x492032 */ if (!fZ) goto L_00492032;
L_00492022:; BB(0x00492022);
    /* 00492022: mov ecx, edi */ r_ecx = r_edi;
    /* 00492024: call 0x492778 */ r_esp -= 4; W32(r_esp, 0x492029u); f_00492778();
    /* 00492029: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049202a: ret  */ FN_RET(0x00491fe8); r_esp += 4; return;
L_0049202b:; BB(0x0049202b);
    /* 0049202b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049202d: call 0x492138 */ r_esp -= 4; W32(r_esp, 0x492032u); f_00492138();
L_00492032:; BB(0x00492032);
    /* 00492032: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00492033: ret  */ FN_RET(0x00491fe8); r_esp += 4; return;
}

