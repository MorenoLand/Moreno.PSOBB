#include "protos.h"

void f_005520f8(void) /* sub_5520F8 */
{
    FN_ENTER(0x005520f8);
    /* 005520f8: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005520fe: mov edx, 2 */ r_edx = 0x2u;
    /* 00552103: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552106: jl 0x55210a */ if ((fS!=fO)) goto L_0055210a;
L_00552108:; BB(0x00552108);
    /* 00552108: mov eax, edx */ r_eax = r_edx;
L_0055210a:; BB(0x0055210a);
    /* 0055210a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055210c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055210e: jg 0x552112 */ if ((!fZ&&fS==fO)) goto L_00552112;
L_00552110:; BB(0x00552110);
    /* 00552110: mov eax, edx */ r_eax = r_edx;
L_00552112:; BB(0x00552112);
    /* 00552112: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00552118: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055211b: jne 0x55212f */ if (!fZ) goto L_0055212f;
L_0055211d:; BB(0x0055211d);
    /* 0055211d: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 00552127: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00552129: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x55212eu); f_00787550();
    /* 0055212e: ret  */ FN_RET(0x005520f8); r_esp += 4; return;
L_0055212f:; BB(0x0055212f);
    /* 0055212f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552132: jne 0x552146 */ if (!fZ) goto L_00552146;
L_00552134:; BB(0x00552134);
    /* 00552134: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 0055213e: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00552140: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x552145u); f_00787550();
    /* 00552145: ret  */ FN_RET(0x005520f8); r_esp += 4; return;
L_00552146:; BB(0x00552146);
    /* 00552146: mov dword ptr [ecx + 0x370], 2 */ W32((u32)(r_ecx+0x370u), 0x2u);
    /* 00552150: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 00552152: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x552157u); f_00787550();
    /* 00552157: ret  */ FN_RET(0x005520f8); r_esp += 4; return;
}

void f_00552198(void)
{
    FN_ENTER(0x00552198);
    /* 00552198: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552199: mov ebp, esp */ r_ebp = r_esp;
    /* 0055219b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055219d: push 0x8d6026 */ { u32 v = 0x8d6026u; r_esp -= 4; W32(r_esp, v); }
    /* 005521a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005521a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005521a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005521b0: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005521b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005521b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005521b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005521bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005521bf: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5521c4u); f_00520e6c();
    /* 005521c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005521c6: je 0x5521e1 */ if (fZ) goto L_005521e1;
L_005521c8:; BB(0x005521c8);
    /* 005521c8: push 0x92488c */ { u32 v = 0x92488cu; r_esp -= 4; W32(r_esp, v); }
    /* 005521cd: push 0x9bd934 */ { u32 v = 0x9bd934u; r_esp -= 4; W32(r_esp, v); }
    /* 005521d2: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x5521d7u); f_0051f674();
    /* 005521d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005521da: mov dword ptr [0xa739e0], eax */ W32((u32)(0xa739e0u), r_eax);
    /* 005521df: jmp 0x552236 */ goto L_00552236;
L_005521e1:; BB(0x005521e1);
    /* 005521e1: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005521e8: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 005521ed: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5521f2u); f_008581c5();
    /* 005521f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005521f3: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005521f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005521f8: je 0x55254b */ if (fZ) goto L_0055254b;
L_005521fe:; BB(0x005521fe);
    /* 005521fe: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00552205: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055220c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0055220f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00552211: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552214: push 0x9bd934 */ { u32 v = 0x9bd934u; r_esp -= 4; W32(r_esp, v); }
    /* 00552219: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055221b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x552220u); f_005b7a84();
    /* 00552220: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00552223: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055222a: mov dword ptr [0xa739e0], eax */ W32((u32)(0xa739e0u), r_eax);
    /* 0055222f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_00552236:; BB(0x00552236);
    /* 00552236: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00552238: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0055223e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00552241: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00552244: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 00552247: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 0055224a: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0055224d: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00552250: mov dword ptr [0xa739d4], edx */ W32((u32)(0xa739d4u), r_edx);
    /* 00552256: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00552259: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0055225c: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0055225f: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00552262: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00552265: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00552268: mov dword ptr [0xa739d8], edx */ W32((u32)(0xa739d8u), r_edx);
    /* 0055226e: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00552271: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00552274: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00552277: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055227a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055227d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00552280: mov dword ptr [0xa739dc], eax */ W32((u32)(0xa739dcu), r_eax);
    /* 00552285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00552287: mov dword ptr [0xa739c8], eax */ W32((u32)(0xa739c8u), r_eax);
    /* 0055228c: mov dword ptr [0xa739cc], eax */ W32((u32)(0xa739ccu), r_eax);
    /* 00552291: mov dword ptr [0xa739d0], eax */ W32((u32)(0xa739d0u), r_eax);
    /* 00552296: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00552299: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55229eu); f_008581c5();
    /* 0055229e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055229f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005522a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522a4: je 0x552544 */ if (fZ) goto L_00552544;
L_005522aa:; BB(0x005522aa);
    /* 005522aa: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005522b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005522b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005522bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005522bd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005522c2: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005522c7: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005522cc: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5522d1u); f_005795a0();
    /* 005522d1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005522d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005522db: mov dword ptr [0xa739e4], eax */ W32((u32)(0xa739e4u), r_eax);
    /* 005522e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005522e7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005522ee: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005522f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5522f5u); f_008581c5();
    /* 005522f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005522f6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005522f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522fb: je 0x55253d */ if (fZ) goto L_0055253d;
L_00552301:; BB(0x00552301);
    /* 00552301: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00552308: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055230f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00552312: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552314: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552319: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055231e: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552323: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x552328u); f_005795a0();
    /* 00552328: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055232b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00552332: mov dword ptr [0xa739e8], eax */ W32((u32)(0xa739e8u), r_eax);
    /* 00552337: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055233e: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552343: mov ebx, dword ptr [0x9bd874] */ r_ebx = R32((u32)(0x9bd874u));
    /* 00552349: mov ecx, dword ptr [0xa739e4] */ r_ecx = R32((u32)(0xa739e4u));
    /* 0055234f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00552351: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552357: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00552359: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055235f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552363: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552366: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x55236bu); f_00579a28();
    /* 0055236b: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552370: mov ebx, dword ptr [0x9bd884] */ r_ebx = R32((u32)(0x9bd884u));
    /* 00552376: mov ecx, dword ptr [0xa739e8] */ r_ecx = R32((u32)(0xa739e8u));
    /* 0055237c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055237e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552384: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00552386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055238c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x552398u); f_00579a28();
    /* 00552398: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055239a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55239fu); f_008581c5();
    /* 0055239f: mov dword ptr [0xa739c4], eax */ W32((u32)(0xa739c4u), r_eax);
    /* 005523a4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523a6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523abu); f_008581c5();
    /* 005523ab: mov dword ptr [0xa739c0], eax */ W32((u32)(0xa739c0u), r_eax);
    /* 005523b0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523b7u); f_008581c5();
    /* 005523b7: mov dword ptr [0xa739bc], eax */ W32((u32)(0xa739bcu), r_eax);
    /* 005523bc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523be: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523c3u); f_008581c5();
    /* 005523c3: mov dword ptr [0xa739b8], eax */ W32((u32)(0xa739b8u), r_eax);
    /* 005523c8: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005523ca: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523cfu); f_0077a684();
    /* 005523cf: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523d5: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005523d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005523d9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523deu); f_0077a684();
    /* 005523de: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523e4: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005523e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005523e9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523eeu); f_0077a684();
    /* 005523ee: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523f4: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005523f6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005523f9: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5523feu); f_0077a698();
    /* 005523fe: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552404: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00552406: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552408: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55240du); f_0077a698();
    /* 0055240d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552413: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552415: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552418: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55241du); f_0077a698();
    /* 0055241d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552423: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552425: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552428: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55242du); f_0077a6b4();
    /* 0055242d: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552433: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552435: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552437: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55243cu); f_0077a6b4();
    /* 0055243c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552442: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552444: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552447: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55244cu); f_0077a6b4();
    /* 0055244c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552452: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552454: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552457: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55245cu); f_0077a6cc();
    /* 0055245c: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552462: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552464: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552466: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55246bu); f_0077a6cc();
    /* 0055246b: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552471: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552473: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552476: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55247bu); f_0077a6cc();
    /* 0055247b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055247e: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552484: mov esi, dword ptr [0x9247d8] */ r_esi = R32((u32)(0x9247d8u));
    /* 0055248a: movzx edi, word ptr [0x9247dc] */ r_edi = (u32)R16((u32)(0x9247dcu));
    /* 00552491: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552494: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 0055249a: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0055249d: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005524a1: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 005524a6: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 005524ab: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005524af: movzx eax, word ptr [0x9247de] */ r_eax = (u32)R16((u32)(0x9247deu));
    /* 005524b6: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005524ba: mov ebx, 0x1d */ r_ebx = 0x1du;
    /* 005524bf: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005524c3: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005524c7: movzx eax, word ptr [0x9247e0] */ r_eax = (u32)R16((u32)(0x9247e0u));
    /* 005524ce: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005524d2: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005524d8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005524db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005524dd:; BB(0x005524dd);
    /* 005524dd: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 005524e2: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005524e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524e6: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005524ec: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005524ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005524f1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005524f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524f6: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fc: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524fe: push dword ptr [edx*4 + 0x9bd7ac] */ { u32 v = R32((u32)(r_edx*4+0x9bd7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552505: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552509: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055250d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055250e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x552513u); f_00608470();
    /* 00552513: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552516: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00552519: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055251c: jge 0x552526 */ if ((fS==fO)) goto L_00552526;
L_0055251e:; BB(0x0055251e);
    /* 0055251e: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 00552524: jmp 0x5524dd */ goto L_005524dd;
L_00552526:; BB(0x00552526);
    /* 00552526: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00552529: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055252c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055252f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552532: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00552539: mov esp, ebp */ r_esp = r_ebp;
    /* 0055253b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055253c: ret  */ FN_RET(0x00552198); r_esp += 4; return;
L_0055253d:; BB(0x0055253d);
    /* 0055253d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055253f: jmp 0x552332 */ f_00552332(); return;
L_00552544:; BB(0x00552544);
    /* 00552544: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00552546: jmp 0x5522db */ f_005522db(); return;
L_0055254b:; BB(0x0055254b);
    /* 0055254b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055254d: jmp 0x55222a */ f_0055222a(); return;
}

void f_00552554(void) /* sub_552554 */
{
    FN_ENTER(0x00552554);
    /* 00552554: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552555: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552556: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552557: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055255a: mov edi, ecx */ r_edi = r_ecx;
    /* 0055255c: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 00552562: fcomp dword ptr [0x9247e4] */ fx_compare(ST(0), R_F32((u32)(0x9247e4u))); FPOP();
    /* 00552568: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055256a: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 00552570: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00552571: jae 0x5525fc */ if (!fC) goto L_005525fc;
L_00552577:; BB(0x00552577);
    /* 00552577: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0055257e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552581: jne 0x552595 */ if (!fZ) goto L_00552595;
L_00552583:; BB(0x00552583);
    /* 00552583: mov ecx, dword ptr [0xa739e4] */ r_ecx = R32((u32)(0xa739e4u));
    /* 00552589: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055258a: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x55258fu); f_00579de0();
    /* 0055258f: mov ebp, eax */ r_ebp = r_eax;
    /* 00552591: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00552593: jmp 0x5525ad */ goto L_005525ad;
L_00552595:; BB(0x00552595);
    /* 00552595: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552598: jne 0x5525fc */ if (!fZ) goto L_005525fc;
L_0055259a:; BB(0x0055259a);
    /* 0055259a: mov ecx, dword ptr [0xa739e8] */ r_ecx = R32((u32)(0xa739e8u));
    /* 005525a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005525a1: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5525a6u); f_00579de0();
    /* 005525a6: mov ebp, eax */ r_ebp = r_eax;
    /* 005525a8: mov ebx, 1 */ r_ebx = 0x1u;
L_005525ad:; BB(0x005525ad);
    /* 005525ad: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005525af: je 0x5525fc */ if (fZ) goto L_005525fc;
L_005525b1:; BB(0x005525b1);
    /* 005525b1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5525b6u); f_0082d7b0();
    /* 005525b6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005525b8: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5525bdu); f_00830cd8();
    /* 005525bd: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005525c0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5525c5u); f_0082d838();
    /* 005525c5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005525c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005525ca: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5525cfu); f_0082d8bc();
    /* 005525cf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005525d2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005525d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005525d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005525d7: mov edx, ebp */ r_edx = r_ebp;
    /* 005525d9: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5525deu); f_0082f940();
    /* 005525de: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5525e3u); f_0082da80();
    /* 005525e3: mov ecx, dword ptr [edi + ebx*4 + 0x3cc] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x3ccu));
    /* 005525ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005525ec: je 0x5525fc */ if (fZ) goto L_005525fc;
L_005525ee:; BB(0x005525ee);
    /* 005525ee: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005525f1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005525f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005525f6: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005525f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005525f9: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x5525fcu); call_ind(t); }
L_005525fc:; BB(0x005525fc);
    /* 005525fc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005525ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00552602: ret  */ FN_RET(0x00552554); r_esp += 4; return;
}

void f_00552604(void) /* sub_552604 */
{
    FN_ENTER(0x00552604);
    /* 00552604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552605: mov ebp, esp */ r_ebp = r_esp;
    /* 00552607: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00552609: push 0x8d6064 */ { u32 v = 0x8d6064u; r_esp -= 4; W32(r_esp, v); }
    /* 0055260e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00552614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552615: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055261c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055261f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00552622: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00552625: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00552628: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0055262b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055262e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00552631: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00552638: mov eax, ecx */ r_eax = r_ecx;
    /* 0055263a: mov edx, dword ptr [eax + 0x3cc] */ r_edx = R32((u32)(r_eax+0x3ccu));
    /* 00552640: mov dword ptr [eax], 0xb04480 */ W32((u32)(r_eax), 0xb04480u);
    /* 00552646: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552648: je 0x552663 */ if (fZ) goto L_00552663;
L_0055264a:; BB(0x0055264a);
    /* 0055264a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055264e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00552653: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00552657: mov edx, ecx */ r_edx = r_ecx;
    /* 00552659: mov dword ptr [edx + 0x3cc], 0 */ W32((u32)(r_edx+0x3ccu), 0x0u);
L_00552663:; BB(0x00552663);
    /* 00552663: mov eax, ecx */ r_eax = r_ecx;
    /* 00552665: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 0055266b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055266d: je 0x552688 */ if (fZ) goto L_00552688;
L_0055266f:; BB(0x0055266f);
    /* 0055266f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00552673: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00552678: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055267c: mov edx, ecx */ r_edx = r_ecx;
    /* 0055267e: mov dword ptr [edx + 0x3d0], 0 */ W32((u32)(r_edx+0x3d0u), 0x0u);
L_00552688:; BB(0x00552688);
    /* 00552688: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x55268du); f_00786f64();
    /* 0055268d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00552690: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x552695u); f_007b9c8c();
    /* 00552695: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055269c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055269f: lea ecx, [eax + 0x3b0] */ r_ecx = (u32)(r_eax+0x3b0u);
    /* 005526a5: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5526aau); f_005769f8();
    /* 005526aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005526b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005526b4: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x5526b9u); f_0052a684();
    /* 005526b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005526bc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005526be: jne 0x5526d0 */ if (!fZ) goto L_005526d0;
L_005526c0:; BB(0x005526c0);
    /* 005526c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005526c3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005526ca: mov esp, ebp */ r_esp = r_ebp;
    /* 005526cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005526cd: ret 4 */ FN_RET(0x00552604); r_esp += 8; return;
L_005526d0:; BB(0x005526d0);
    /* 005526d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005526d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005526d4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5526d9u); f_005c2f74();
    /* 005526d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005526da: jmp 0x5526c0 */ goto L_005526c0;
}

void f_005526dc(void) /* sub_5526DC */
{
    FN_ENTER(0x005526dc);
    /* 005526dc: mov eax, dword ptr [0xa73a14] */ r_eax = R32((u32)(0xa73a14u));
    /* 005526e1: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005526e4: je 0x5526f7 */ if (fZ) goto L_005526f7;
L_005526e6:; BB(0x005526e6);
    /* 005526e6: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005526e9: je 0x5526f7 */ if (fZ) goto L_005526f7;
L_005526eb:; BB(0x005526eb);
    /* 005526eb: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005526ee: je 0x5526f7 */ if (fZ) goto L_005526f7;
L_005526f0:; BB(0x005526f0);
    /* 005526f0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5526f5u); f_0082dab0();
    /* 005526f5: jmp 0x5526fc */ goto L_005526fc;
L_005526f7:; BB(0x005526f7);
    /* 005526f7: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5526fcu); f_0082dbac();
L_005526fc:; BB(0x005526fc);
    /* 005526fc: add dword ptr [0xa73a14], 1 */ { u32 ad = (u32)(0xa73a14u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552703: ret  */ FN_RET(0x005526dc); r_esp += 4; return;
}

void f_00552704(void) /* sub_552704 */
{
    FN_ENTER(0x00552704);
    /* 00552704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552705: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00552707: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552709: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55270eu); f_007aa094();
    /* 0055270e: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 00552715: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552718: jne 0x552746 */ if (!fZ) goto L_00552746;
L_0055271a:; BB(0x0055271a);
    /* 0055271a: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 00552720: lea ecx, [ebp + 0x3b0] */ r_ecx = (u32)(r_ebp+0x3b0u);
    /* 00552726: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x552729u); call_ind(t); }
    /* 00552729: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055272c: jne 0x552778 */ if (!fZ) goto L_00552778;
L_0055272e:; BB(0x0055272e);
    /* 0055272e: mov dword ptr [ebp + 0x398], 0 */ W32((u32)(r_ebp+0x398u), 0x0u);
    /* 00552738: mov eax, 2 */ r_eax = 0x2u;
    /* 0055273d: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00552744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552745: ret  */ FN_RET(0x00552704); r_esp += 4; return;
L_00552746:; BB(0x00552746);
    /* 00552746: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552749: jne 0x552762 */ if (!fZ) goto L_00552762;
L_0055274b:; BB(0x0055274b);
    /* 0055274b: mov eax, 1 */ r_eax = 0x1u;
    /* 00552750: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00552757: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00552759: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00552760: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552761: ret  */ FN_RET(0x00552704); r_esp += 4; return;
L_00552762:; BB(0x00552762);
    /* 00552762: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00552768: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055276a: jne 0x55277a */ if (!fZ) goto L_0055277a;
L_0055276c:; BB(0x0055276c);
    /* 0055276c: mov eax, 2 */ r_eax = 0x2u;
    /* 00552771: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
L_00552778:; BB(0x00552778);
    /* 00552778: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552779: ret  */ FN_RET(0x00552704); r_esp += 4; return;
L_0055277a:; BB(0x0055277a);
    /* 0055277a: lea ecx, [ebp + 0x3b0] */ r_ecx = (u32)(r_ebp+0x3b0u);
    /* 00552780: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x552785u); f_00576c48();
    /* 00552785: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00552788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552789: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x55278eu); f_0057895c();
    /* 0055278e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055278f: mov eax, 1 */ r_eax = 0x1u;
    /* 00552794: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0055279b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055279c: ret  */ FN_RET(0x00552704); r_esp += 4; return;
}

void f_005527a0(void) /* sub_5527A0 */
{
    FN_ENTER(0x005527a0);
    /* 005527a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005527a1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005527a4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005527a6: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 005527ac: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005527af: fmul dword ptr [0x924984] */ ST(0) = ST(0) * R_F32((u32)(0x924984u));
    /* 005527b5: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005527bc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005527c0: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 005527c8: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005527cd: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5527d2u); f_0082d990();
    /* 005527d2: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005527d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005527d7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5527dcu); f_0082d8bc();
    /* 005527dc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005527df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005527e0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005527e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005527e6: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5527ebu); f_0082eab8();
    /* 005527eb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5527f0u); f_0082da80();
    /* 005527f0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005527f3: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005527f6: mov edx, ebp */ r_edx = r_ebp;
    /* 005527f8: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5527fdu); f_0082ebac();
    /* 005527fd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00552800: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00552802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552803: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x552808u); f_005787a4();
    /* 00552808: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0055280c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0055280e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055280f: call 0x578538 */ r_esp -= 4; W32(r_esp, 0x552814u); f_00578538();
    /* 00552814: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552817: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552818: ret  */ FN_RET(0x005527a0); r_esp += 4; return;
}

void f_0055281c(void) /* sub_55281C */
{
    FN_ENTER(0x0055281c);
    /* 0055281c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055281d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055281f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552821: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x552826u); f_007751b0();
    /* 00552826: fcomp dword ptr [ebp + 0x3d4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3d4u))); FPOP();
    /* 0055282c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055282e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055282f: jae 0x552846 */ if (!fC) goto L_00552846;
L_00552831:; BB(0x00552831);
    /* 00552831: mov eax, 0xa */ r_eax = 0xau;
    /* 00552836: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0055283d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055283f: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
L_00552846:; BB(0x00552846);
    /* 00552846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552847: ret  */ FN_RET(0x0055281c); r_esp += 4; return;
}

void f_00552848(void) /* sub_552848 */
{
    FN_ENTER(0x00552848);
    /* 00552848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552849: mov edi, ecx */ r_edi = r_ecx;
    /* 0055284b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055284d: push 0x255 */ { u32 v = 0x255u; r_esp -= 4; W32(r_esp, v); }
    /* 00552852: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x552857u); f_007879b8();
    /* 00552857: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0055285a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055285c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055285d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055285e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055285f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552860: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x552865u); f_00814298();
    /* 00552865: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552868: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00552869: ret  */ FN_RET(0x00552848); r_esp += 4; return;
}

void f_0055286c(void) /* sub_55286C */
{
    FN_ENTER(0x0055286c);
    /* 0055286c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055286d: mov edi, ecx */ r_edi = r_ecx;
    /* 0055286f: mov ecx, edi */ r_ecx = r_edi;
    /* 00552871: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 00552876: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55287bu); f_007879b8();
    /* 0055287b: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0055287e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00552880: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552881: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552882: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552883: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552884: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x552889u); f_00814298();
    /* 00552889: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055288c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055288d: ret  */ FN_RET(0x0055286c); r_esp += 4; return;
}

void f_00552890(void) /* sub_552890 */
{
    FN_ENTER(0x00552890);
    /* 00552890: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552891: mov edi, ecx */ r_edi = r_ecx;
    /* 00552893: mov ecx, edi */ r_ecx = r_edi;
    /* 00552895: push 0x257 */ { u32 v = 0x257u; r_esp -= 4; W32(r_esp, v); }
    /* 0055289a: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55289fu); f_007879b8();
    /* 0055289f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005528a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005528a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005528a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005528a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005528a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005528a8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5528adu); f_00814298();
    /* 005528ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005528b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005528b1: ret  */ FN_RET(0x00552890); r_esp += 4; return;
}

void f_005528b4(void) /* sub_5528B4 */
{
    FN_ENTER(0x005528b4);
    /* 005528b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005528b5: mov edi, ecx */ r_edi = r_ecx;
    /* 005528b7: mov ecx, edi */ r_ecx = r_edi;
    /* 005528b9: push 0x256 */ { u32 v = 0x256u; r_esp -= 4; W32(r_esp, v); }
    /* 005528be: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5528c3u); f_007879b8();
    /* 005528c3: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005528c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005528c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005528c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005528ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005528cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005528cc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5528d1u); f_00814298();
    /* 005528d1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005528d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005528d5: ret  */ FN_RET(0x005528b4); r_esp += 4; return;
}

void f_005528d8(void) /* sub_5528D8 */
{
    FN_ENTER(0x005528d8);
    /* 005528d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005528d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005528db: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5528e0u); f_004f7c84();
    /* 005528e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005528e3: je 0x552a01 */ if (fZ) goto L_00552a01;
L_005528e9:; BB(0x005528e9);
    /* 005528e9: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 005528f0: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005528f3: ja 0x5529ac */ if ((!fC&&!fZ)) goto L_005529ac;
L_005528f9:; BB(0x005528f9);
    /* 005528f9: mov eax, dword ptr [eax*4 + 0x9248a8] */ r_eax = R32((u32)(r_eax*4+0x9248a8u));
    /* 00552900: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x005528d8); r_esp += 4; return;
L_00552a01:; BB(0x00552a01);
    /* 00552a01: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552a03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552a05: call dword ptr [eax + 0x1a4] */ { u32 t = R32((u32)(r_eax+0x1a4u)); r_esp -= 4; W32(r_esp, 0x552a0bu); call_ind(t); }
    /* 00552a0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a0c: ret  */ FN_RET(0x005528d8); r_esp += 4; return;
}

void f_00552902(void)
{
    FN_ENTER(0x00552902);
    /* 00552902: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552904: call 0x552c04 */ r_esp -= 4; W32(r_esp, 0x552909u); f_00552c04();
    /* 00552909: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055290b: call 0x552a10 */ r_esp -= 4; W32(r_esp, 0x552910u); f_00552a10();
    /* 00552910: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552902); r_esp += 4; return;
}

void f_00552915(void)
{
    FN_ENTER(0x00552915);
    /* 00552915: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552917: call 0x553084 */ r_esp -= 4; W32(r_esp, 0x55291cu); f_00553084();
    /* 0055291c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055291e: call 0x552a10 */ r_esp -= 4; W32(r_esp, 0x552923u); f_00552a10();
    /* 00552923: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552915); r_esp += 4; return;
}

void f_00552928(void)
{
    FN_ENTER(0x00552928);
    /* 00552928: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055292a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055292c: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x552932u); call_ind(t); }
    /* 00552932: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552928); r_esp += 4; return;
}

void f_00552934(void)
{
    FN_ENTER(0x00552934);
    /* 00552934: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552936: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552938: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x55293eu); call_ind(t); }
    /* 0055293e: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552934); r_esp += 4; return;
}

void f_00552940(void)
{
    FN_ENTER(0x00552940);
    /* 00552940: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552942: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552944: call dword ptr [eax + 0x170] */ { u32 t = R32((u32)(r_eax+0x170u)); r_esp -= 4; W32(r_esp, 0x55294au); call_ind(t); }
    /* 0055294a: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552940); r_esp += 4; return;
}

void f_0055294c(void)
{
    FN_ENTER(0x0055294c);
    /* 0055294c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055294e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552950: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x552956u); call_ind(t); }
    /* 00552956: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x0055294c); r_esp += 4; return;
}

void f_00552958(void)
{
    FN_ENTER(0x00552958);
    /* 00552958: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055295a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055295c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x552962u); call_ind(t); }
    /* 00552962: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552958); r_esp += 4; return;
}

void f_00552964(void)
{
    FN_ENTER(0x00552964);
    /* 00552964: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552966: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552968: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x55296eu); call_ind(t); }
    /* 0055296e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552970: call 0x552a10 */ r_esp -= 4; W32(r_esp, 0x552975u); f_00552a10();
    /* 00552975: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552964); r_esp += 4; return;
}

void f_00552977(void)
{
    FN_ENTER(0x00552977);
    /* 00552977: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552979: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055297b: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x552981u); call_ind(t); }
    /* 00552981: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00552983: call 0x552a10 */ r_esp -= 4; W32(r_esp, 0x552988u); f_00552a10();
    /* 00552988: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552977); r_esp += 4; return;
}

void f_0055298a(void)
{
    FN_ENTER(0x0055298a);
    /* 0055298a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0055298c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055298e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x552994u); call_ind(t); }
    /* 00552994: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x0055298a); r_esp += 4; return;
}

void f_00552996(void)
{
    FN_ENTER(0x00552996);
    /* 00552996: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552998: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0055299a: call dword ptr [eax + 0x158] */ { u32 t = R32((u32)(r_eax+0x158u)); r_esp -= 4; W32(r_esp, 0x5529a0u); call_ind(t); }
    /* 005529a0: jmp 0x5529ac */ goto L_005529ac;
L_005529ac:; BB(0x005529ac);
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x00552996); r_esp += 4; return;
}

void f_005529a2(void)
{
    FN_ENTER(0x005529a2);
    /* 005529a2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005529a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529a6: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x5529acu); call_ind(t); }
    /* 005529ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005529ae: call 0x553448 */ r_esp -= 4; W32(r_esp, 0x5529b3u); f_00553448();
    /* 005529b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005529b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005529b6: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 005529bc: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 005529c2: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 005529c5: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 005529cb: mov dword ptr [ebx + 0x78], edx */ W32((u32)(r_ebx+0x78u), r_edx);
    /* 005529ce: mov dword ptr [ebx + 0x7c], eax */ W32((u32)(r_ebx+0x7cu), r_eax);
    /* 005529d1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5529d6u); f_006946a8();
    /* 005529d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005529d9: mov eax, dword ptr [ebx + 0x3ec] */ r_eax = R32((u32)(r_ebx+0x3ecu));
    /* 005529df: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005529e4: je 0x5529ed */ if (fZ) goto L_005529ed;
L_005529e6:; BB(0x005529e6);
    /* 005529e6: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005529ed:; BB(0x005529ed);
    /* 005529ed: fld dword ptr [0x924980] */ FPUSH(R_F32((u32)(0x924980u)));
    /* 005529f3: fadd dword ptr [ebx + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x2b8u));
    /* 005529f9: fstp dword ptr [ebx + 0x2b8] */ W_F32((u32)(r_ebx+0x2b8u), ST(0)); FPOP();
    /* 005529ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552a00: ret  */ FN_RET(0x005529a2); r_esp += 4; return;
}

void f_00552a10(void) /* sub_552A10 */
{
    FN_ENTER(0x00552a10);
    /* 00552a10: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 00552a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552a14: call 0x552a1c */ r_esp -= 4; W32(r_esp, 0x552a19u); f_00552a1c();
    /* 00552a19: ret  */ FN_RET(0x00552a10); r_esp += 4; return;
}

void f_00552a1c(void) /* sub_552A1C */
{
    FN_ENTER(0x00552a1c);
    /* 00552a1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552a1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00552a1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552a1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552a20: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552a23: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00552a25: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00552a29: fld dword ptr [0x92497c] */ FPUSH(R_F32((u32)(0x92497cu)));
    /* 00552a2f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552a31: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552a34: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00552a37: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00552a3a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00552a3e: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00552a42: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00552a46: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00552a4a: lea eax, [ebp + 0x128] */ r_eax = (u32)(r_ebp+0x128u);
    /* 00552a50: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00552a53: push 0x4007 */ { u32 v = 0x4007u; r_esp -= 4; W32(r_esp, v); }
    /* 00552a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552a59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552a5a: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x552a5fu); f_007806dc();
    /* 00552a5f: mov ebx, eax */ r_ebx = r_eax;
    /* 00552a61: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552a64: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552a66: je 0x552bf9 */ if (fZ) goto L_00552bf9;
L_00552a6c:; BB(0x00552a6c);
    /* 00552a6c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00552a6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00552a71: je 0x552b0d */ if (fZ) goto L_00552b0d;
L_00552a77:; BB(0x00552a77);
    /* 00552a77: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 00552a7d: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00552a82: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00552a84: mov esi, ecx */ r_esi = r_ecx;
    /* 00552a86: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00552a89: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00552a8c: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00552a8e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00552a91: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552a93: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552a95: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552a97: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00552a99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552a9b: jne 0x552ba3 */ if (!fZ) goto L_00552ba3;
L_00552aa1:; BB(0x00552aa1);
    /* 00552aa1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00552aa4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552aa5: call 0x578b50 */ r_esp -= 4; W32(r_esp, 0x552aaau); f_00578b50();
    /* 00552aaa: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00552aac: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552aaf: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00552ab2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552ab3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x552ab8u); f_0050b510();
    /* 00552ab8: mov edi, eax */ r_edi = r_eax;
    /* 00552aba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552abd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552abf: je 0x552af4 */ if (fZ) goto L_00552af4;
L_00552ac1:; BB(0x00552ac1);
    /* 00552ac1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552ac3: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x552ac8u); f_0050c094();
    /* 00552ac8: mov esi, eax */ r_esi = r_eax;
    /* 00552aca: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552acd: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x552ad2u); f_0050c08c();
    /* 00552ad2: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 00552ad6: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 00552add: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 00552ae0: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 00552ae3: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 00552aea: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00552af0: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_00552af4:; BB(0x00552af4);
    /* 00552af4: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00552af9: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552afc: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00552aff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552b00: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x552b05u); f_0050b510();
    /* 00552b05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552b08: jmp 0x552ba3 */ goto L_00552ba3;
L_00552b0d:; BB(0x00552b0d);
    /* 00552b0d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00552b10: je 0x552ba3 */ if (fZ) goto L_00552ba3;
L_00552b16:; BB(0x00552b16);
    /* 00552b16: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 00552b1c: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00552b21: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00552b23: mov esi, ecx */ r_esi = r_ecx;
    /* 00552b25: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00552b28: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00552b2b: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00552b2d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00552b30: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552b32: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552b34: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552b36: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00552b38: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552b3a: jne 0x552ba3 */ if (!fZ) goto L_00552ba3;
L_00552b3c:; BB(0x00552b3c);
    /* 00552b3c: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00552b3f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552b40: call 0x578b50 */ r_esp -= 4; W32(r_esp, 0x552b45u); f_00578b50();
    /* 00552b45: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00552b47: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552b4a: add edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00552b4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552b4e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x552b53u); f_0050b510();
    /* 00552b53: mov edi, eax */ r_edi = r_eax;
    /* 00552b55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552b58: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552b5a: je 0x552b8f */ if (fZ) goto L_00552b8f;
L_00552b5c:; BB(0x00552b5c);
    /* 00552b5c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552b5e: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x552b63u); f_0050c094();
    /* 00552b63: mov esi, eax */ r_esi = r_eax;
    /* 00552b65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552b68: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x552b6du); f_0050c08c();
    /* 00552b6d: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 00552b71: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 00552b78: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 00552b7b: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 00552b7e: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 00552b85: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00552b8b: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_00552b8f:; BB(0x00552b8f);
    /* 00552b8f: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 00552b94: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552b97: add edx, 0x54 */ {  u32 a = r_edx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00552b9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552b9b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x552ba0u); f_0050b510();
    /* 00552ba0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00552ba3:; BB(0x00552ba3);
    /* 00552ba3: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552ba6: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00552ba9: mov dword ptr [ebp + 0x3ec], esi */ W32((u32)(r_ebp+0x3ecu), r_esi);
    /* 00552baf: test esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552bb5: je 0x552bde */ if (fZ) goto L_00552bde;
L_00552bb7:; BB(0x00552bb7);
    /* 00552bb7: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00552bba: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00552bbc: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 00552bc2: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00552bc5: mov dword ptr [ebp + 0x3e4], edx */ W32((u32)(r_ebp+0x3e4u), r_edx);
    /* 00552bcb: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00552bce: mov dword ptr [ebp + 0x3e8], esi */ W32((u32)(r_ebp+0x3e8u), r_esi);
    /* 00552bd4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552bd7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552bd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552bd9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00552bda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00552bdb: ret 4 */ FN_RET(0x00552a1c); r_esp += 8; return;
L_00552bde:; BB(0x00552bde);
    /* 00552bde: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00552be1: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00552be4: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 00552be7: mov dword ptr [ebp + 0x3e0], eax */ W32((u32)(r_ebp+0x3e0u), r_eax);
    /* 00552bed: mov dword ptr [ebp + 0x3e4], edx */ W32((u32)(r_ebp+0x3e4u), r_edx);
    /* 00552bf3: mov dword ptr [ebp + 0x3e8], ebx */ W32((u32)(r_ebp+0x3e8u), r_ebx);
L_00552bf9:; BB(0x00552bf9);
    /* 00552bf9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552bfc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552bfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552bfe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00552bff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00552c00: ret 4 */ FN_RET(0x00552a1c); r_esp += 8; return;
}

void f_00552c04(void) /* sub_552C04 */
{
    FN_ENTER(0x00552c04);
    /* 00552c04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552c05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00552c06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00552c07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552c08: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00552c0b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00552c0d: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 00552c14: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552c19: jge 0x552c79 */ if ((fS==fO)) goto L_00552c79;
L_00552c1b:; BB(0x00552c1b);
    /* 00552c1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552c1c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x552c21u); f_0068d5a8();
    /* 00552c21: mov esi, eax */ r_esi = r_eax;
    /* 00552c23: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 00552c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552c27: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00552c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552c2b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x552c30u); f_007a9180();
    /* 00552c30: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552c33: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552c35: je 0x552c6c */ if (fZ) goto L_00552c6c;
L_00552c37:; BB(0x00552c37);
    /* 00552c37: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 00552c3d: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552c43: jne 0x552c6c */ if (!fZ) goto L_00552c6c;
L_00552c45:; BB(0x00552c45);
    /* 00552c45: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00552c4b: mov edi, dword ptr [ebp + 0x370] */ r_edi = R32((u32)(r_ebp+0x370u));
    /* 00552c51: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 00552c54: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00552c57: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00552c59: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00552c5b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00552c5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00552c5e: jbe 0x552c6c */ if ((fC||fZ)) goto L_00552c6c;
L_00552c60:; BB(0x00552c60);
    /* 00552c60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00552c62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00552c63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552c65: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x552c6au); f_007706b0();
    /* 00552c6a: jmp 0x552c91 */ goto L_00552c91;
L_00552c6c:; BB(0x00552c6c);
    /* 00552c6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00552c6e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552c70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552c72: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x552c77u); f_007706b0();
    /* 00552c77: jmp 0x552c91 */ goto L_00552c91;
L_00552c79:; BB(0x00552c79);
    /* 00552c79: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00552c7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552c80: mov word ptr [ebp + 0x340], ax */ W16((u32)(r_ebp+0x340u), (u16)r_eax);
    /* 00552c87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552c89: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x552c8eu); f_007706b0();
    /* 00552c8e: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
L_00552c91:; BB(0x00552c91);
    /* 00552c91: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00552c94: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00552c99: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00552c9c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552c9e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x552ca3u); f_007aa094();
    /* 00552ca3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552ca5: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x552caau); f_00770738();
    /* 00552caa: mov edi, eax */ r_edi = r_eax;
    /* 00552cac: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 00552cb3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552cb5: je 0x552f75 */ if (fZ) goto L_00552f75;
L_00552cbb:; BB(0x00552cbb);
    /* 00552cbb: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552cbe: je 0x552e9c */ if (fZ) goto L_00552e9c;
L_00552cc4:; BB(0x00552cc4);
    /* 00552cc4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552cc7: jne 0x552e45 */ if (!fZ) goto L_00552e45;
L_00552ccd:; BB(0x00552ccd);
    /* 00552ccd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552ccf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552cd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552cd3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x552cd8u); f_00772b44();
    /* 00552cd8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552cda: je 0x552e08 */ if (fZ) goto L_00552e08;
L_00552ce0:; BB(0x00552ce0);
    /* 00552ce0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00552ce3: mov esi, dword ptr [edi + 0x300] */ r_esi = R32((u32)(r_edi+0x300u));
    /* 00552ce9: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00552cef: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00552cf2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00552cf6: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 00552cfc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00552d00: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00552d06: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x552d0bu); f_0082f9c4();
    /* 00552d0b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00552d0e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00552d12: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00552d14: fmul qword ptr [0x9248f0] */ ST(0) = ST(0) * R_F64((u32)(0x9248f0u));
    /* 00552d1a: fdiv qword ptr [0x9248e8] */ ST(0) = ST(0) / R_F64((u32)(0x9248e8u));
    /* 00552d20: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00552d24: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00552d29: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00552d2e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00552d32: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00552d36: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00552d3a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00552d3e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00552d42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552d43: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552d46: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x552d4bu); f_007a9018();
    /* 00552d4b: mov esi, eax */ r_esi = r_eax;
    /* 00552d4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552d4e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00552d51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552d52: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x552d57u); f_007a9180();
    /* 00552d57: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552d5a: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00552d60: mov eax, dword ptr [ebp + 0x370] */ r_eax = R32((u32)(r_ebp+0x370u));
    /* 00552d66: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 00552d69: cmp esi, dword ptr [edx + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552d6c: jge 0x552e06 */ if ((fS==fO)) goto L_00552e06;
L_00552d72:; BB(0x00552d72);
    /* 00552d72: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00552d75: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00552d77: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00552d79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00552d7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00552d7c: jbe 0x552e08 */ if ((fC||fZ)) goto L_00552e08;
L_00552d82:; BB(0x00552d82);
    /* 00552d82: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00552d86: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00552d89: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552d8e: jne 0x552e08 */ if (!fZ) goto L_00552e08;
L_00552d90:; BB(0x00552d90);
    /* 00552d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552d91: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x552d96u); f_0068d5a8();
    /* 00552d96: mov esi, eax */ r_esi = r_eax;
    /* 00552d98: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552d9b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552d9d: je 0x552e08 */ if (fZ) goto L_00552e08;
L_00552d9f:; BB(0x00552d9f);
    /* 00552d9f: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00552da6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552da9: jne 0x552e08 */ if (!fZ) goto L_00552e08;
L_00552dab:; BB(0x00552dab);
    /* 00552dab: mov ecx, esi */ r_ecx = r_esi;
    /* 00552dad: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x552db2u); f_008173b4();
    /* 00552db2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552db4: je 0x552e08 */ if (fZ) goto L_00552e08;
L_00552db6:; BB(0x00552db6);
    /* 00552db6: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00552db9: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552dbf: jne 0x552e08 */ if (!fZ) goto L_00552e08;
L_00552dc1:; BB(0x00552dc1);
    /* 00552dc1: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 00552dc7: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00552dca: je 0x552dd3 */ if (fZ) goto L_00552dd3;
L_00552dcc:; BB(0x00552dcc);
    /* 00552dcc: mov edx, 1 */ r_edx = 0x1u;
    /* 00552dd1: jmp 0x552dd5 */ goto L_00552dd5;
L_00552dd3:; BB(0x00552dd3);
    /* 00552dd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00552dd5:; BB(0x00552dd5);
    /* 00552dd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552dd7: jne 0x552e08 */ if (!fZ) goto L_00552e08;
L_00552dd9:; BB(0x00552dd9);
    /* 00552dd9: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00552ddf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552de1: mov edi, dword ptr [ebp + 0x370] */ r_edi = R32((u32)(r_ebp+0x370u));
    /* 00552de7: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 00552dea: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00552ded: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00552df0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df8: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00552dfa: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00552dfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552dfd: mov ecx, esi */ r_ecx = r_esi;
    /* 00552dff: call 0x69375c */ r_esp -= 4; W32(r_esp, 0x552e04u); f_0069375c();
    /* 00552e04: jmp 0x552e08 */ goto L_00552e08;
L_00552e06:; BB(0x00552e06);
    /* 00552e06: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00552e08:; BB(0x00552e08);
    /* 00552e08: fld dword ptr [0x924970] */ FPUSH(R_F32((u32)(0x924970u)));
    /* 00552e0e: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 00552e14: fsub dword ptr [ebp + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xc8u));
    /* 00552e1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552e1b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00552e1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552e20: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x552e25u); f_007aaa30();
    /* 00552e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552e27: je 0x552f57 */ if (fZ) goto L_00552f57;
L_00552e2d:; BB(0x00552e2d);
    /* 00552e2d: mov eax, 2 */ r_eax = 0x2u;
    /* 00552e32: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00552e39: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00552e40: jmp 0x552f57 */ goto L_00552f57;
L_00552e45:; BB(0x00552e45);
    /* 00552e45: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552e48: jne 0x552f57 */ if (!fZ) goto L_00552f57;
L_00552e4e:; BB(0x00552e4e);
    /* 00552e4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552e50: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552e52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552e54: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x552e59u); f_00772b44();
    /* 00552e59: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552e5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552e60: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00552e63: and edi, 0xfbdbffff */ {  u32 a = r_edi; u32 b = 0xfbdbffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00552e69: mov eax, 3 */ r_eax = 0x3u;
    /* 00552e6e: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00552e75: mov edx, 1 */ r_edx = 0x1u;
    /* 00552e7a: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00552e81: mov esi, 2 */ r_esi = 0x2u;
    /* 00552e86: mov word ptr [ebp + 0xb8], si */ W16((u32)(r_ebp+0xb8u), (u16)r_esi);
    /* 00552e8d: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00552e90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552e92: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x552e97u); f_007b52ec();
    /* 00552e97: jmp 0x552f57 */ goto L_00552f57;
L_00552e9c:; BB(0x00552e9c);
    /* 00552e9c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552e9e: je 0x552f39 */ if (fZ) goto L_00552f39;
L_00552ea4:; BB(0x00552ea4);
    /* 00552ea4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00552ea8: mov esi, dword ptr [edi + 0x300] */ r_esi = R32((u32)(r_edi+0x300u));
    /* 00552eae: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00552eb4: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00552eba: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00552ebe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00552ec2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00552ec6: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 00552ecc: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x552ed1u); f_0082f9c4();
    /* 00552ed1: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00552ed5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552ed6: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 00552edc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552ede: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552ee1: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x552ee6u); f_00771858();
    /* 00552ee6: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00552eec: mov esi, dword ptr [ebp + 0x370] */ r_esi = R32((u32)(r_ebp+0x370u));
    /* 00552ef2: mov edi, dword ptr [edx + esi*4] */ r_edi = R32((u32)(r_edx+r_esi*4));
    /* 00552ef5: cmp eax, dword ptr [edi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552ef8: jge 0x552f4c */ if ((fS==fO)) goto L_00552f4c;
L_00552efa:; BB(0x00552efa);
    /* 00552efa: push 0x259 */ { u32 v = 0x259u; r_esp -= 4; W32(r_esp, v); }
    /* 00552eff: mov eax, 3 */ r_eax = 0x3u;
    /* 00552f04: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00552f0b: mov edx, 0xc */ r_edx = 0xcu;
    /* 00552f10: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00552f17: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552f19: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x552f1eu); f_007879b8();
    /* 00552f1e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00552f20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00552f24: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x552f29u); f_00814298();
    /* 00552f29: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 00552f2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f2f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x552f34u); f_0050b510();
    /* 00552f34: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552f37: jmp 0x552f4c */ goto L_00552f4c;
L_00552f39:; BB(0x00552f39);
    /* 00552f39: mov eax, 2 */ r_eax = 0x2u;
    /* 00552f3e: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00552f45: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00552f4c:; BB(0x00552f4c);
    /* 00552f4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552f4e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552f50: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552f52: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x552f57u); f_00772b44();
L_00552f57:; BB(0x00552f57);
    /* 00552f57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552f59: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x552f5eu); f_007b6880();
    /* 00552f5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552f60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552f62: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552f67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f68: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x552f6du); f_00805608();
    /* 00552f6d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552f70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552f71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00552f73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00552f74: ret  */ FN_RET(0x00552c04); r_esp += 4; return;
L_00552f75:; BB(0x00552f75);
    /* 00552f75: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552f77: je 0x553056 */ if (fZ) goto L_00553056;
L_00552f7d:; BB(0x00552f7d);
    /* 00552f7d: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00552f81: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00552f87: jge 0x553056 */ if ((fS==fO)) goto L_00553056;
L_00552f8d:; BB(0x00552f8d);
    /* 00552f8d: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 00552f93: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00552f96: je 0x552f9f */ if (fZ) goto L_00552f9f;
L_00552f98:; BB(0x00552f98);
    /* 00552f98: mov edx, 1 */ r_edx = 0x1u;
    /* 00552f9d: jmp 0x552fa1 */ goto L_00552fa1;
L_00552f9f:; BB(0x00552f9f);
    /* 00552f9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00552fa1:; BB(0x00552fa1);
    /* 00552fa1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552fa3: jne 0x552fb6 */ if (!fZ) goto L_00552fb6;
L_00552fa5:; BB(0x00552fa5);
    /* 00552fa5: mov eax, 1 */ r_eax = 0x1u;
    /* 00552faa: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00552fb1: jmp 0x553074 */ goto L_00553074;
L_00552fb6:; BB(0x00552fb6);
    /* 00552fb6: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00552fb9: fsub dword ptr [ebp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x3cu));
    /* 00552fbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552fbd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00552fc0: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x552fc5u); f_0082e900();
    /* 00552fc5: fcomp dword ptr [0x924968] */ fx_compare(ST(0), R_F32((u32)(0x924968u))); FPOP();
    /* 00552fcb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00552fcd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00552fce: jae 0x553016 */ if (!fC) goto L_00553016;
L_00552fd0:; BB(0x00552fd0);
    /* 00552fd0: mov eax, 5 */ r_eax = 0x5u;
    /* 00552fd5: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00552fdc: mov edx, 1 */ r_edx = 0x1u;
    /* 00552fe1: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00552fe8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552fea: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x552fefu); f_007751b0();
    /* 00552fef: fcomp dword ptr [0x92496c] */ fx_compare(ST(0), R_F32((u32)(0x92496cu))); FPOP();
    /* 00552ff5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00552ff7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00552ff8: jbe 0x553008 */ if ((fC||fZ)) goto L_00553008;
L_00552ffa:; BB(0x00552ffa);
    /* 00552ffa: mov eax, 3 */ r_eax = 0x3u;
    /* 00552fff: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00553006: jmp 0x553074 */ goto L_00553074;
L_00553008:; BB(0x00553008);
    /* 00553008: mov eax, 4 */ r_eax = 0x4u;
    /* 0055300d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00553014: jmp 0x553074 */ goto L_00553074;
L_00553016:; BB(0x00553016);
    /* 00553016: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055301b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055301d: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00553020: mov eax, 3 */ r_eax = 0x3u;
    /* 00553025: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0055302c: mov edx, 1 */ r_edx = 0x1u;
    /* 00553031: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 00553038: mov esi, 2 */ r_esi = 0x2u;
    /* 0055303d: mov word ptr [ebp + 0xb8], si */ W16((u32)(r_ebp+0xb8u), (u16)r_esi);
    /* 00553044: and edi, 0xfbdbffff */ {  u32 a = r_edi; u32 b = 0xfbdbffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0055304a: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 0055304d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055304f: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x553054u); f_007b52ec();
    /* 00553054: jmp 0x553074 */ goto L_00553074;
L_00553056:; BB(0x00553056);
    /* 00553056: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00553059: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055305e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00553061: mov edx, 2 */ r_edx = 0x2u;
    /* 00553066: mov word ptr [ebp + 0x330], dx */ W16((u32)(r_ebp+0x330u), (u16)r_edx);
    /* 0055306d: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
L_00553074:; BB(0x00553074);
    /* 00553074: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553076: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00553078: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055307a: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x55307fu); f_00772b44();
    /* 0055307f: jmp 0x552f57 */ goto L_00552f57;
}

void f_00552dc0(void)
{
    FN_ENTER(0x00552dc0);
    /* 00552dc0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552dc1: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 00552dc7: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00552dca: je 0x552dd3 */ if (fZ) goto L_00552dd3;
L_00552dcc:; BB(0x00552dcc);
    /* 00552dcc: mov edx, 1 */ r_edx = 0x1u;
    /* 00552dd1: jmp 0x552dd5 */ goto L_00552dd5;
L_00552dd3:; BB(0x00552dd3);
    /* 00552dd3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00552dd5:; BB(0x00552dd5);
    /* 00552dd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552dd7: jne 0x552e08 */ if (!fZ) goto L_00552e08;
L_00552dd9:; BB(0x00552dd9);
    /* 00552dd9: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00552ddf: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552de1: mov edi, dword ptr [ebp + 0x370] */ r_edi = R32((u32)(r_ebp+0x370u));
    /* 00552de7: mov edx, dword ptr [edx + edi*4] */ r_edx = R32((u32)(r_edx+r_edi*4));
    /* 00552dea: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00552ded: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00552df0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00552df8: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00552dfa: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00552dfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552dfd: mov ecx, esi */ r_ecx = r_esi;
    /* 00552dff: call 0x69375c */ r_esp -= 4; W32(r_esp, 0x552e04u); f_0069375c();
    /* 00552e04: jmp 0x552e08 */ goto L_00552e08;
L_00552e08:; BB(0x00552e08);
    /* 00552e08: fld dword ptr [0x924970] */ FPUSH(R_F32((u32)(0x924970u)));
    /* 00552e0e: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 00552e14: fsub dword ptr [ebp + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xc8u));
    /* 00552e1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00552e1b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00552e1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552e20: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x552e25u); f_007aaa30();
    /* 00552e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00552e27: je 0x552f57 */ if (fZ) goto L_00552f57;
L_00552e2d:; BB(0x00552e2d);
    /* 00552e2d: mov eax, 2 */ r_eax = 0x2u;
    /* 00552e32: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00552e39: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00552e40: jmp 0x552f57 */ goto L_00552f57;
L_00552f57:; BB(0x00552f57);
    /* 00552f57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00552f59: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x552f5eu); f_007b6880();
    /* 00552f5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00552f60: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00552f62: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552f67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00552f68: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x552f6du); f_00805608();
    /* 00552f6d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00552f70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00552f71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00552f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00552f73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00552f74: ret  */ FN_RET(0x00552dc0); r_esp += 4; return;
}

