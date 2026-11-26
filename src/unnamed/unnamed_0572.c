#include "protos.h"

void f_00572068(void) /* sub_572068 */
{
    FN_ENTER(0x00572068);
    /* 00572068: fld dword ptr [0x926bfc] */ FPUSH(R_F32((u32)(0x926bfcu)));
    /* 0057206e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00572071: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00572074: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00572077: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0057207d: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 00572080: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00572086: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0057208c: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0057208f: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00572092: ret  */ FN_RET(0x00572068); r_esp += 4; return;
}

void f_00572094(void) /* sub_572094 */
{
    FN_ENTER(0x00572094);
    /* 00572094: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00572095: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00572096: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572097: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572098: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057209b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057209d: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 005720a1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005720a4: je 0x5723c7 */ if (fZ) goto L_005723c7;
L_005720aa:; BB(0x005720aa);
    /* 005720aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005720ad: je 0x5723b5 */ if (fZ) goto L_005723b5;
L_005720b3:; BB(0x005720b3);
    /* 005720b3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005720b6: je 0x5723a1 */ if (fZ) goto L_005723a1;
L_005720bc:; BB(0x005720bc);
    /* 005720bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005720be: jne 0x572383 */ if (!fZ) goto L_00572383;
L_005720c4:; BB(0x005720c4);
    /* 005720c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005720c6: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5720cbu); f_007aa094();
    /* 005720cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005720cd: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5720d2u); f_0052126c();
    /* 005720d2: mov eax, dword ptr [ebx + 0x498] */ r_eax = R32((u32)(r_ebx+0x498u));
    /* 005720d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005720da: je 0x572119 */ if (fZ) goto L_00572119;
L_005720dc:; BB(0x005720dc);
    /* 005720dc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005720df: jne 0x5722f3 */ if (!fZ) goto L_005722f3;
L_005720e5:; BB(0x005720e5);
    /* 005720e5: mov edx, dword ptr [ebx + 0x49c] */ r_edx = R32((u32)(r_ebx+0x49cu));
    /* 005720eb: mov eax, dword ptr [ebx + 0x464] */ r_eax = R32((u32)(r_ebx+0x464u));
    /* 005720f1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005720f4: mov dword ptr [ebx + 0x49c], edx */ W32((u32)(r_ebx+0x49cu), r_edx);
    /* 005720fa: mov ebp, dword ptr [eax*4 + 0xa73f48] */ r_ebp = R32((u32)(r_eax*4+0xa73f48u));
    /* 00572101: cmp edx, dword ptr [ebp + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00572104: jl 0x5722f3 */ if ((fS!=fO)) goto L_005722f3;
L_0057210a:; BB(0x0057210a);
    /* 0057210a: mov dword ptr [ebx + 0x498], 2 */ W32((u32)(r_ebx+0x498u), 0x2u);
    /* 00572114: jmp 0x5722f3 */ goto L_005722f3;
L_00572119:; BB(0x00572119);
    /* 00572119: fld dword ptr [0x926bf8] */ FPUSH(R_F32((u32)(0x926bf8u)));
    /* 0057211f: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 00572125: fsub dword ptr [ebx + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xc8u));
    /* 0057212b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057212c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057212f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572131: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x572136u); f_007aaa30();
    /* 00572136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572138: je 0x572178 */ if (fZ) goto L_00572178;
L_0057213a:; BB(0x0057213a);
    /* 0057213a: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 00572140: mov dword ptr [ebx + 0x498], 1 */ W32((u32)(r_ebx+0x498u), 0x1u);
    /* 0057214a: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057214d: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 00572153: mov dword ptr [ebx + 0x49c], 0 */ W32((u32)(r_ebx+0x49cu), 0x0u);
    /* 0057215d: mov edx, 3 */ r_edx = 0x3u;
    /* 00572162: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00572169: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00572173: jmp 0x5722f3 */ goto L_005722f3;
L_00572178:; BB(0x00572178);
    /* 00572178: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057217d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057217f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x572184u); f_007aaa30();
    /* 00572184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572186: je 0x572229 */ if (fZ) goto L_00572229;
L_0057218c:; BB(0x0057218c);
    /* 0057218c: mov esi, dword ptr [ebx + 0x494] */ r_esi = R32((u32)(r_ebx+0x494u));
    /* 00572192: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00572195: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00572198: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0057219b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0057219e: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 005721a1: mov dword ptr [esi + 0x40], ebp */ W32((u32)(r_esi+0x40u), r_ebp);
    /* 005721a4: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x5721a9u); f_007b51c4();
    /* 005721a9: mov ecx, dword ptr [ebx + 0x494] */ r_ecx = R32((u32)(r_ebx+0x494u));
    /* 005721af: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x5721b4u); f_007b6894();
    /* 005721b4: mov eax, dword ptr [ebx + 0x494] */ r_eax = R32((u32)(r_ebx+0x494u));
    /* 005721ba: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005721c0: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 005721c3: test ebp, 0x80000 */ {  u32 a = r_ebp; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005721c9: jne 0x5721d3 */ if (!fZ) goto L_005721d3;
L_005721cb:; BB(0x005721cb);
    /* 005721cb: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 005721ce: jmp 0x57225b */ goto L_0057225b;
L_005721d3:; BB(0x005721d3);
    /* 005721d3: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005721d5:; BB(0x005721d5);
    /* 005721d5: mov esi, dword ptr [ebp + 0xaad6e0] */ r_esi = R32((u32)(r_ebp+0xaad6e0u));
    /* 005721db: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005721de: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005721e0: je 0x5723bf */ if (fZ) goto L_005723bf;
L_005721e6:; BB(0x005721e6);
    /* 005721e6: movzx eax, word ptr [esi + 0x96] */ r_eax = (u32)R16((u32)(r_esi+0x96u));
    /* 005721ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005721f0: jne 0x57221f */ if (!fZ) goto L_0057221f;
L_005721f2:; BB(0x005721f2);
    /* 005721f2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005721f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005721f8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005721fa: mov ecx, esi */ r_ecx = r_esi;
    /* 005721fc: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x5721ffu); call_ind(t); }
    /* 005721ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572201: je 0x57221f */ if (fZ) goto L_0057221f;
L_00572203:; BB(0x00572203);
    /* 00572203: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00572208: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572209: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0057220b: mov ecx, esi */ r_ecx = r_esi;
    /* 0057220d: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x572210u); call_ind(t); }
    /* 00572210: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00572215: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572216: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00572218: mov ecx, esi */ r_ecx = r_esi;
    /* 0057221a: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x57221du); call_ind(t); }
    /* 0057221d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0057221f:; BB(0x0057221f);
    /* 0057221f: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00572222: jl 0x5721d5 */ if ((fS!=fO)) goto L_005721d5;
L_00572224:; BB(0x00572224);
    /* 00572224: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 00572227: jmp 0x57225b */ goto L_0057225b;
L_00572229:; BB(0x00572229);
    /* 00572229: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057222e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572230: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x572235u); f_007aaa30();
    /* 00572235: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572237: jne 0x57223e */ if (!fZ) goto L_0057223e;
L_00572239:; BB(0x00572239);
    /* 00572239: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0057223c: jmp 0x57225b */ goto L_0057225b;
L_0057223e:; BB(0x0057223e);
    /* 0057223e: push 0x21a */ { u32 v = 0x21au; r_esp -= 4; W32(r_esp, v); }
    /* 00572243: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572245: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x57224au); f_007879b8();
    /* 0057224a: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 0057224d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057224f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572250: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572251: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00572252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572253: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x572258u); f_00814298();
    /* 00572258: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057225b:; BB(0x0057225b);
    /* 0057225b: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572261: mov ecx, dword ptr [0xa73f94] */ r_ecx = R32((u32)(0xa73f94u));
    /* 00572267: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x57226cu); f_00579de0();
    /* 0057226c: mov ebp, eax */ r_ebp = r_eax;
    /* 0057226e: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572274: mov ecx, dword ptr [0xa73f98] */ r_ecx = R32((u32)(0xa73f98u));
    /* 0057227a: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x57227fu); f_00579de0();
    /* 0057227f: mov esi, eax */ r_esi = r_eax;
    /* 00572281: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x572286u); f_0082d7b0();
    /* 00572286: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00572288: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x57228du); f_00830cd8();
    /* 0057228d: mov ecx, edi */ r_ecx = r_edi;
    /* 0057228f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x572294u); f_0082d838();
    /* 00572294: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00572297: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00572299: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57229eu); f_0082d8bc();
    /* 0057229e: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 005722a1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005722a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005722a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005722a6: mov edx, ebp */ r_edx = r_ebp;
    /* 005722a8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5722adu); f_0082f940();
    /* 005722ad: lea ebp, [esp + 0x18] */ r_ebp = (u32)(r_esp+0x18u);
    /* 005722b1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005722b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005722b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005722b6: mov edx, esi */ r_edx = r_esi;
    /* 005722b8: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5722bdu); f_0082f940();
    /* 005722bd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5722c2u); f_0082da80();
    /* 005722c2: mov ecx, dword ptr [ebx + 0x3c8] */ r_ecx = R32((u32)(r_ebx+0x3c8u));
    /* 005722c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005722ca: je 0x5722da */ if (fZ) goto L_005722da;
L_005722cc:; BB(0x005722cc);
    /* 005722cc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005722cf: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005722d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005722d4: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 005722d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005722d7: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x5722dau); call_ind(t); }
L_005722da:; BB(0x005722da);
    /* 005722da: mov ecx, dword ptr [ebx + 0x3cc] */ r_ecx = R32((u32)(r_ebx+0x3ccu));
    /* 005722e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005722e2: je 0x5722f3 */ if (fZ) goto L_005722f3;
L_005722e4:; BB(0x005722e4);
    /* 005722e4: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005722e8: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005722ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005722ed: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 005722ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005722f0: call dword ptr [ebp + 0x10] */ { u32 t = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, 0x5722f3u); call_ind(t); }
L_005722f3:; BB(0x005722f3);
    /* 005722f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005722f5: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5722fau); f_005213d8();
    /* 005722fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005722fc: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x572301u); f_00521410();
    /* 00572301: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 00572307: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0057230d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057230f: fmul qword ptr [0x926b08] */ ST(0) = ST(0) * R_F64((u32)(0x926b08u));
    /* 00572315: fdiv qword ptr [0x926b00] */ ST(0) = ST(0) / R_F64((u32)(0x926b00u));
    /* 0057231b: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0057231f: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 00572324: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00572329: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0057232d: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 00572331: fistp dword ptr [esp + 0x40] */ W32((u32)(r_esp+0x40u), (u32)fx_int32(ST(0))); FPOP();
    /* 00572335: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00572339: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0057233f: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00572343: mov dword ptr [ebx + 0x4a8], edx */ W32((u32)(r_ebx+0x4a8u), r_edx);
    /* 00572349: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057234c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057234d: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572350: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x572355u); f_007a8c74();
    /* 00572355: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572358: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0057235a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0057235d: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00572360: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572362: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x572368u); call_ind(t); }
    /* 00572368: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0057236a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057236c: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x572372u); call_ind(t); }
    /* 00572372: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572374: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x572379u); f_00571464();
    /* 00572379: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057237c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057237d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057237e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057237f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00572380: ret 4 */ FN_RET(0x00572094); r_esp += 8; return;
L_00572383:; BB(0x00572383);
    /* 00572383: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572386: jne 0x5723b5 */ if (!fZ) goto L_005723b5;
L_00572388:; BB(0x00572388);
    /* 00572388: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 0057238e: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00572391: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 00572397: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057239a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057239b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057239c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057239d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057239e: ret 4 */ FN_RET(0x00572094); r_esp += 8; return;
L_005723a1:; BB(0x005723a1);
    /* 005723a1: mov eax, dword ptr [ebx + 0x498] */ r_eax = R32((u32)(r_ebx+0x498u));
    /* 005723a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005723aa: jne 0x5723b5 */ if (!fZ) goto L_005723b5;
L_005723ac:; BB(0x005723ac);
    /* 005723ac: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005723ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005723b0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5723b5u); f_0051f62c();
L_005723b5:; BB(0x005723b5);
    /* 005723b5: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005723b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005723b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005723ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005723bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005723bc: ret 4 */ FN_RET(0x00572094); r_esp += 8; return;
L_005723bf:; BB(0x005723bf);
    /* 005723bf: lea edi, [ebx + 0x38] */ r_edi = (u32)(r_ebx+0x38u);
    /* 005723c2: jmp 0x57225b */ goto L_0057225b;
L_005723c7:; BB(0x005723c7);
    /* 005723c7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005723c9: mov eax, 8 */ r_eax = 0x8u;
    /* 005723ce: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005723d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005723d7: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5723ddu); call_ind(t); }
    /* 005723dd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005723df: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 005723e5: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005723e8: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005723eb: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 005723f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005723f3: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5723f8u); f_0051f664();
    /* 005723f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005723fa: mov dword ptr [ebx + 0x498], eax */ W32((u32)(r_ebx+0x498u), r_eax);
    /* 00572400: mov dword ptr [ebx + 0x49c], eax */ W32((u32)(r_ebx+0x49cu), r_eax);
    /* 00572406: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00572409: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057240a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057240b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057240c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057240d: ret 4 */ FN_RET(0x00572094); r_esp += 8; return;
}

void f_00572410(void) /* sub_572410 */
{
    FN_ENTER(0x00572410);
    /* 00572410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572411: mov ebp, esp */ r_ebp = r_esp;
    /* 00572413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572415: push 0x8d7094 */ { u32 v = 0x8d7094u; r_esp -= 4; W32(r_esp, v); }
    /* 0057241a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572421: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00572428: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057242b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057242e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00572431: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00572434: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00572437: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057243a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057243d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572440: je 0x5726bd */ if (fZ) goto L_005726bd;
L_00572446:; BB(0x00572446);
    /* 00572446: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00572449: je 0x57267d */ if (fZ) goto L_0057267d;
L_0057244f:; BB(0x0057244f);
    /* 0057244f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572452: je 0x572674 */ if (fZ) goto L_00572674;
L_00572458:; BB(0x00572458);
    /* 00572458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057245a: jne 0x572648 */ if (!fZ) goto L_00572648;
L_00572460:; BB(0x00572460);
    /* 00572460: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x572465u); f_007aa094();
    /* 00572465: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057246a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057246d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x572472u); f_007aaa30();
    /* 00572472: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572474: je 0x5725bc */ if (fZ) goto L_005725bc;
L_0057247a:; BB(0x0057247a);
    /* 0057247a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057247d: lea edx, [eax + 0x468] */ r_edx = (u32)(r_eax+0x468u);
    /* 00572483: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00572486: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x57248bu); f_0082fa9c();
    /* 0057248b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00572490: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x572495u); f_0082d990();
    /* 00572495: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00572498: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0057249b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5724a0u); f_0082d838();
    /* 005724a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005724a3: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005724a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005724a8: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5724adu); f_0082d8bc();
    /* 005724ad: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5724b2u); f_0082fa9c();
    /* 005724b2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005724b5: push dword ptr [ecx + 0xc0] */ { u32 v = R32((u32)(r_ecx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005724bb: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x5724c0u); f_007aaab8();
    /* 005724c0: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5724c5u); f_0082faac();
    /* 005724c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5724cau); f_0082da80();
    /* 005724ca: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 005724d0: add ecx, 0x10c0 */ {  u32 a = r_ecx; u32 b = 0x10c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005724d6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5724dbu); f_0082d990();
    /* 005724db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005724de: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005724e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005724e7: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005724ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005724ef: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005724f6: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 005724f9: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5724feu); f_00830aa0();
    /* 005724fe: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x572503u); f_0082da80();
    /* 00572503: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x572508u); f_0082faac();
    /* 00572508: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0057250f: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00572514: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x572519u); f_005caba4();
    /* 00572519: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057251c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057251f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00572522: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572524: je 0x572597 */ if (fZ) goto L_00572597;
L_00572526:; BB(0x00572526);
    /* 00572526: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0057252d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00572534: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572537: mov ebx, dword ptr [ecx + 0x464] */ r_ebx = R32((u32)(r_ecx+0x464u));
    /* 0057253d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x572542u); f_007751b0();
    /* 00572542: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00572545: mov edx, dword ptr [ebx*4 + 0xa73f48] */ r_edx = R32((u32)(r_ebx*4+0xa73f48u));
    /* 0057254c: mov edi, dword ptr [esi + 0x464] */ r_edi = R32((u32)(r_esi+0x464u));
    /* 00572552: mov ecx, dword ptr [edi*4 + 0xa73f48] */ r_ecx = R32((u32)(r_edi*4+0xa73f48u));
    /* 00572559: fild dword ptr [ecx + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x2cu)));
    /* 0057255c: fdiv dword ptr [0x926be0] */ ST(0) = ST(0) / R_F32((u32)(0x926be0u));
    /* 00572562: mov ebx, dword ptr [esi + 0x398] */ r_ebx = R32((u32)(r_esi+0x398u));
    /* 00572568: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057256a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057256c: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057256f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00572571: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00572572: mov eax, 1 */ r_eax = 0x1u;
    /* 00572577: jae 0x57257b */ if (!fC) goto L_0057257b;
L_00572579:; BB(0x00572579);
    /* 00572579: mov eax, ecx */ r_eax = r_ecx;
L_0057257b:; BB(0x0057257b);
    /* 0057257b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057257e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057257f: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00572582: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572585: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572588: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572589: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057258a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057258b: call 0x573990 */ r_esp -= 4; W32(r_esp, 0x572590u); f_00573990();
    /* 00572590: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00572597:; BB(0x00572597);
    /* 00572597: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057259e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005725a1: push 0x214 */ { u32 v = 0x214u; r_esp -= 4; W32(r_esp, v); }
    /* 005725a6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5725abu); f_007879b8();
    /* 005725ab: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005725ae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005725b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005725b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005725b2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005725b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005725b4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5725b9u); f_00814298();
    /* 005725b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005725bc:; BB(0x005725bc);
    /* 005725bc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005725bf: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5725c4u); f_005213d8();
    /* 005725c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005725c7: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5725ccu); f_00521410();
    /* 005725cc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005725cf: fld dword ptr [ecx + 0x3a8] */ FPUSH(R_F32((u32)(r_ecx+0x3a8u)));
    /* 005725d5: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 005725db: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005725dd: fmul qword ptr [0x926af8] */ ST(0) = ST(0) * R_F64((u32)(0x926af8u));
    /* 005725e3: fdiv qword ptr [0x926af0] */ ST(0) = ST(0) / R_F64((u32)(0x926af0u));
    /* 005725e9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005725ec: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 005725ef: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 005725f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005725f8: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005725fb: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 005725fe: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00572601: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00572604: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00572607: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 0057260d: mov dword ptr [ecx + 0x4a8], edx */ W32((u32)(r_ecx+0x4a8u), r_edx);
    /* 00572613: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572616: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572617: push dword ptr [ecx + 0x60] */ { u32 v = R32((u32)(r_ecx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057261a: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x57261fu); f_007a8c74();
    /* 0057261f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572622: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572625: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00572627: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0057262a: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0057262d: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x572633u); call_ind(t); }
    /* 00572633: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572636: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00572638: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x57263eu); call_ind(t); }
    /* 0057263e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572641: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x572646u); f_00571464();
    /* 00572646: jmp 0x57267d */ goto L_0057267d;
L_00572648:; BB(0x00572648);
    /* 00572648: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057264b: jne 0x57267d */ if (!fZ) goto L_0057267d;
L_0057264d:; BB(0x0057264d);
    /* 0057264d: mov eax, ecx */ r_eax = r_ecx;
    /* 0057264f: mov edx, dword ptr [eax + 0x4b4] */ r_edx = R32((u32)(r_eax+0x4b4u));
    /* 00572655: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572657: je 0x57267d */ if (fZ) goto L_0057267d;
L_00572659:; BB(0x00572659);
    /* 00572659: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0057265d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572662: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00572666: mov edx, ecx */ r_edx = r_ecx;
    /* 00572668: mov dword ptr [edx + 0x4b4], 0 */ W32((u32)(r_edx+0x4b4u), 0x0u);
    /* 00572672: jmp 0x57267d */ goto L_0057267d;
L_00572674:; BB(0x00572674);
    /* 00572674: call 0x5726fc */ r_esp -= 4; W32(r_esp, 0x572679u); f_005726fc();
    /* 00572679: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057267b: je 0x572696 */ if (fZ) goto L_00572696;
L_0057267d:; BB(0x0057267d);
    /* 0057267d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00572680: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572683: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00572686: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572689: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00572690: mov esp, ebp */ r_esp = r_ebp;
    /* 00572692: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572693: ret 4 */ FN_RET(0x00572410); r_esp += 8; return;
L_00572696:; BB(0x00572696);
    /* 00572696: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00572699: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 0057269f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005726a2: je 0x5726ab */ if (fZ) goto L_005726ab;
L_005726a4:; BB(0x005726a4);
    /* 005726a4: mov eax, 1 */ r_eax = 0x1u;
    /* 005726a9: jmp 0x5726ad */ goto L_005726ad;
L_005726ab:; BB(0x005726ab);
    /* 005726ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005726ad:; BB(0x005726ad);
    /* 005726ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005726af: je 0x57267d */ if (fZ) goto L_0057267d;
L_005726b1:; BB(0x005726b1);
    /* 005726b1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005726b4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005726b6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5726bbu); f_0051f62c();
    /* 005726bb: jmp 0x57267d */ goto L_0057267d;
L_005726bd:; BB(0x005726bd);
    /* 005726bd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005726bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005726c1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005726c8: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x5726ceu); call_ind(t); }
    /* 005726ce: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005726d1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005726d3: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 005726d9: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005726dc: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005726df: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 005726e5: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5726eau); f_0051f664();
    /* 005726ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005726ed: mov dword ptr [eax + 0x4b4], 0 */ W32((u32)(r_eax+0x4b4u), 0x0u);
    /* 005726f7: jmp 0x57267d */ goto L_0057267d;
}

void f_005726fc(void) /* sub_5726FC */
{
    FN_ENTER(0x005726fc);
    /* 005726fc: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 00572702: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00572704: je 0x572713 */ if (fZ) goto L_00572713;
L_00572706:; BB(0x00572706);
    /* 00572706: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00572708: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57270du); f_0051f62c();
    /* 0057270d: mov eax, 1 */ r_eax = 0x1u;
    /* 00572712: ret  */ FN_RET(0x005726fc); r_esp += 4; return;
L_00572713:; BB(0x00572713);
    /* 00572713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572715: ret  */ FN_RET(0x005726fc); r_esp += 4; return;
}

void f_00572718(void) /* sub_572718 */
{
    FN_ENTER(0x00572718);
    /* 00572718: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572719: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057271a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057271d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057271f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00572723: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572726: je 0x572942 */ if (fZ) goto L_00572942;
L_0057272c:; BB(0x0057272c);
    /* 0057272c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057272f: je 0x572864 */ if (fZ) goto L_00572864;
L_00572735:; BB(0x00572735);
    /* 00572735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572737: jne 0x572919 */ if (!fZ) goto L_00572919;
L_0057273d:; BB(0x0057273d);
    /* 0057273d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057273f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x572744u); f_007aa094();
    /* 00572744: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00572749: mov edx, dword ptr [ebp + 0x458] */ r_edx = R32((u32)(r_ebp+0x458u));
    /* 0057274f: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00572752: jl 0x5727b8 */ if ((fS!=fO)) goto L_005727b8;
L_00572754:; BB(0x00572754);
    /* 00572754: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0057275a: fcomp dword ptr [0x926bdc] */ fx_compare(ST(0), R_F32((u32)(0x926bdcu))); FPOP();
    /* 00572760: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00572762: mov dword ptr [ebp + 0x458], 0 */ W32((u32)(r_ebp+0x458u), 0x0u);
    /* 0057276c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057276d: jbe 0x5727d0 */ if ((fC||fZ)) goto L_005727d0;
L_0057276f:; BB(0x0057276f);
    /* 0057276f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00572772: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572774: call dword ptr [edx + 0x194] */ { u32 t = R32((u32)(r_edx+0x194u)); r_esp -= 4; W32(r_esp, 0x57277au); call_ind(t); }
    /* 0057277a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057277c: je 0x572797 */ if (fZ) goto L_00572797;
L_0057277e:; BB(0x0057277e);
    /* 0057277e: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00572784: fsub dword ptr [0x926bdc] */ ST(0) = ST(0) - R_F32((u32)(0x926bdcu));
    /* 0057278a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057278b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057278e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572790: call 0x52105c */ r_esp -= 4; W32(r_esp, 0x572795u); f_0052105c();
    /* 00572795: mov ebx, eax */ r_ebx = r_eax;
L_00572797:; BB(0x00572797);
    /* 00572797: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0057279a: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005727a0: je 0x572921 */ if (fZ) goto L_00572921;
L_005727a6:; BB(0x005727a6);
    /* 005727a6: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005727ac: je 0x5727d0 */ if (fZ) goto L_005727d0;
L_005727ae:; BB(0x005727ae);
    /* 005727ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005727af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005727b1: call 0x520fcc */ r_esp -= 4; W32(r_esp, 0x5727b6u); f_00520fcc();
    /* 005727b6: jmp 0x5727d0 */ goto L_005727d0;
L_005727b8:; BB(0x005727b8);
    /* 005727b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005727bb: mov dword ptr [ebp + 0x458], edx */ W32((u32)(r_ebp+0x458u), r_edx);
    /* 005727c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005727c3: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5727c8u); f_00521238();
    /* 005727c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005727ca: je 0x572919 */ if (fZ) goto L_00572919;
L_005727d0:; BB(0x005727d0);
    /* 005727d0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005727d2: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5727d7u); f_005213d8();
    /* 005727d7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005727d9: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5727deu); f_00521410();
    /* 005727de: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005727e4: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 005727ea: add dword ptr [ebp + 0x49c], 1 */ { u32 ad = (u32)(r_ebp+0x49cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005727f1: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005727f3: fmul qword ptr [0x926ae8] */ ST(0) = ST(0) * R_F64((u32)(0x926ae8u));
    /* 005727f9: fdiv qword ptr [0x926ae0] */ ST(0) = ST(0) / R_F64((u32)(0x926ae0u));
    /* 005727ff: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00572802: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00572806: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057280b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057280f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00572813: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00572817: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0057281a: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 00572820: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00572824: mov dword ptr [ebp + 0x4a8], edx */ W32((u32)(r_ebp+0x4a8u), r_edx);
    /* 0057282a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057282d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057282e: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572831: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x572836u); f_007a8c74();
    /* 00572836: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572839: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057283c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0057283f: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 00572842: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572844: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x57284au); call_ind(t); }
    /* 0057284a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057284d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057284f: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x572855u); call_ind(t); }
    /* 00572855: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572857: call 0x571464 */ r_esp -= 4; W32(r_esp, 0x57285cu); f_00571464();
    /* 0057285c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057285f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572860: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572861: ret 4 */ FN_RET(0x00572718); r_esp += 8; return;
L_00572864:; BB(0x00572864);
    /* 00572864: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572866: call 0x5726fc */ r_esp -= 4; W32(r_esp, 0x57286bu); f_005726fc();
    /* 0057286b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057286d: jne 0x572919 */ if (!fZ) goto L_00572919;
L_00572873:; BB(0x00572873);
    /* 00572873: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00572879: fcom dword ptr [0x926bd8] */ fx_compare(ST(0), R_F32((u32)(0x926bd8u))); 
    /* 0057287f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00572881: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00572882: jbe 0x572897 */ if ((fC||fZ)) goto L_00572897;
L_00572884:; BB(0x00572884);
    /* 00572884: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00572886: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00572888: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057288a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x57288fu); f_0051f62c();
    /* 0057288f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00572892: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572893: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572894: ret 4 */ FN_RET(0x00572718); r_esp += 8; return;
L_00572897:; BB(0x00572897);
    /* 00572897: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0057289d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057289f: je 0x572884 */ if (fZ) goto L_00572884;
L_005728a1:; BB(0x005728a1);
    /* 005728a1: fcomp dword ptr [0x926bd4] */ fx_compare(ST(0), R_F32((u32)(0x926bd4u))); FPOP();
    /* 005728a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005728a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005728aa: jae 0x5728f8 */ if (!fC) goto L_005728f8;
L_005728ac:; BB(0x005728ac);
    /* 005728ac: push dword ptr [ebp + 0x4a8] */ { u32 v = R32((u32)(r_ebp+0x4a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005728b2: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005728b5: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5728bau); f_007a9018();
    /* 005728ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005728bd: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005728c2: jge 0x572919 */ if ((fS==fO)) goto L_00572919;
L_005728c4:; BB(0x005728c4);
    /* 005728c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005728c6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5728cbu); f_007751b0();
    /* 005728cb: fcomp dword ptr [ebp + 0x450] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x450u))); FPOP();
    /* 005728d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005728d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005728d4: ja 0x5728e7 */ if ((!fC&&!fZ)) goto L_005728e7;
L_005728d6:; BB(0x005728d6);
    /* 005728d6: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005728d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005728da: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5728dfu); f_0051f62c();
    /* 005728df: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005728e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005728e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005728e4: ret 4 */ FN_RET(0x00572718); r_esp += 8; return;
L_005728e7:; BB(0x005728e7);
    /* 005728e7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005728e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005728eb: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5728f0u); f_0051f62c();
    /* 005728f0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005728f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005728f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005728f5: ret 4 */ FN_RET(0x00572718); r_esp += 8; return;
L_005728f8:; BB(0x005728f8);
    /* 005728f8: mov eax, dword ptr [ebp + 0x464] */ r_eax = R32((u32)(r_ebp+0x464u));
    /* 005728fe: mov ebx, dword ptr [eax*4 + 0xa73f48] */ r_ebx = R32((u32)(r_eax*4+0xa73f48u));
    /* 00572905: mov edx, dword ptr [ebp + 0x49c] */ r_edx = R32((u32)(r_ebp+0x49cu));
    /* 0057290b: cmp edx, dword ptr [ebx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057290e: jle 0x572919 */ if ((fZ||fS!=fO)) goto L_00572919;
L_00572910:; BB(0x00572910);
    /* 00572910: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00572912: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572914: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x572919u); f_0051f62c();
L_00572919:; BB(0x00572919);
    /* 00572919: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057291c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057291d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057291e: ret 4 */ FN_RET(0x00572718); r_esp += 8; return;
L_00572921:; BB(0x00572921);
    /* 00572921: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00572927: fsub dword ptr [0x926bdc] */ ST(0) = ST(0) - R_F32((u32)(0x926bdcu));
    /* 0057292d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057292e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00572931: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572933: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x572938u); f_00521160();
    /* 00572938: mov ebx, eax */ r_ebx = r_eax;
    /* 0057293a: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 0057293d: jmp 0x5727a6 */ goto L_005727a6;
L_00572942:; BB(0x00572942);
    /* 00572942: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00572949: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057294c: je 0x572993 */ if (fZ) goto L_00572993;
L_0057294e:; BB(0x0057294e);
    /* 0057294e: mov eax, 3 */ r_eax = 0x3u;
    /* 00572953: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_0057295a:; BB(0x0057295a);
    /* 0057295a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0057295d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057295f: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x572965u); call_ind(t); }
    /* 00572965: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00572967: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 0057296d: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00572970: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 00572976: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572978: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x57297du); f_0051f664();
    /* 0057297d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057297f: mov dword ptr [ebp + 0x49c], eax */ W32((u32)(r_ebp+0x49cu), r_eax);
    /* 00572985: mov dword ptr [ebp + 0x4a8], eax */ W32((u32)(r_ebp+0x4a8u), r_eax);
    /* 0057298b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057298e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057298f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572990: ret 4 */ FN_RET(0x00572718); r_esp += 8; return;
L_00572993:; BB(0x00572993);
    /* 00572993: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 00572998: mov eax, 4 */ r_eax = 0x4u;
    /* 0057299d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005729a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005729a6: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5729abu); f_007879b8();
    /* 005729ab: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 005729ae: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005729b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005729b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005729b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005729b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005729b4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5729b9u); f_00814298();
    /* 005729b9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005729bc: jmp 0x57295a */ goto L_0057295a;
}

void f_005729c0(void) /* sub_5729C0 */
{
    FN_ENTER(0x005729c0);
    /* 005729c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005729c1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005729c3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005729c7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005729ca: je 0x572a23 */ if (fZ) goto L_00572a23;
L_005729cc:; BB(0x005729cc);
    /* 005729cc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005729cf: je 0x572a1f */ if (fZ) goto L_00572a1f;
L_005729d1:; BB(0x005729d1);
    /* 005729d1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005729d4: je 0x5729fb */ if (fZ) goto L_005729fb;
L_005729d6:; BB(0x005729d6);
    /* 005729d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005729d8: jne 0x572a1f */ if (!fZ) goto L_00572a1f;
L_005729da:; BB(0x005729da);
    /* 005729da: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005729dc: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5729e1u); f_007aa094();
    /* 005729e1: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005729e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005729e6: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5729ecu); call_ind(t); }
    /* 005729ec: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005729ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005729f1: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5729f7u); call_ind(t); }
    /* 005729f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005729f8: ret 4 */ FN_RET(0x005729c0); r_esp += 8; return;
L_005729fb:; BB(0x005729fb);
    /* 005729fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005729fd: call 0x5726fc */ r_esp -= 4; W32(r_esp, 0x572a02u); f_005726fc();
    /* 00572a02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572a04: jne 0x572a1f */ if (!fZ) goto L_00572a1f;
L_00572a06:; BB(0x00572a06);
    /* 00572a06: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00572a0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572a0d: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x572a12u); f_00520ea0();
    /* 00572a12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572a14: je 0x572a1f */ if (fZ) goto L_00572a1f;
L_00572a16:; BB(0x00572a16);
    /* 00572a16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00572a18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572a1a: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x572a1fu); f_0051f62c();
L_00572a1f:; BB(0x00572a1f);
    /* 00572a1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572a20: ret 4 */ FN_RET(0x005729c0); r_esp += 8; return;
L_00572a23:; BB(0x00572a23);
    /* 00572a23: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00572a26: mov eax, 2 */ r_eax = 0x2u;
    /* 00572a2b: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00572a32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572a34: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x572a3au); call_ind(t); }
    /* 00572a3a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00572a3c: mov eax, dword ptr [ebp + 0x440] */ r_eax = R32((u32)(r_ebp+0x440u));
    /* 00572a42: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00572a45: mov dword ptr [ebp + 0x440], eax */ W32((u32)(r_ebp+0x440u), r_eax);
    /* 00572a4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572a4d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x572a52u); f_0051f664();
    /* 00572a52: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00572a54: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x572a59u); f_00520f68();
    /* 00572a59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572a5a: ret 4 */ FN_RET(0x005729c0); r_esp += 8; return;
}

void f_00572a60(void) /* sub_572A60 */
{
    FN_ENTER(0x00572a60);
    /* 00572a60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572a61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00572a63: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00572a67: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572a6a: je 0x572ad1 */ if (fZ) goto L_00572ad1;
L_00572a6c:; BB(0x00572a6c);
    /* 00572a6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00572a6f: je 0x572acd */ if (fZ) goto L_00572acd;
L_00572a71:; BB(0x00572a71);
    /* 00572a71: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572a74: je 0x572ab1 */ if (fZ) goto L_00572ab1;
L_00572a76:; BB(0x00572a76);
    /* 00572a76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572a78: jne 0x572a99 */ if (!fZ) goto L_00572a99;
L_00572a7a:; BB(0x00572a7a);
    /* 00572a7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572a7c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x572a81u); f_007aa094();
    /* 00572a81: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00572a83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572a85: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x572a8bu); call_ind(t); }
    /* 00572a8b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00572a8d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572a8f: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x572a95u); call_ind(t); }
    /* 00572a95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572a96: ret 4 */ FN_RET(0x00572a60); r_esp += 8; return;
L_00572a99:; BB(0x00572a99);
    /* 00572a99: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00572a9c: jne 0x572acd */ if (!fZ) goto L_00572acd;
L_00572a9e:; BB(0x00572a9e);
    /* 00572a9e: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 00572aa4: and eax, 0xffffffd7 */ {  u32 a = r_eax; u32 b = 0xffffffd7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572aa7: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 00572aad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572aae: ret 4 */ FN_RET(0x00572a60); r_esp += 8; return;
L_00572ab1:; BB(0x00572ab1);
    /* 00572ab1: mov eax, dword ptr [ebx + 0x474] */ r_eax = R32((u32)(r_ebx+0x474u));
    /* 00572ab7: lea ecx, [ebx + 0x474] */ r_ecx = (u32)(r_ebx+0x474u);
    /* 00572abd: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x572ac0u); call_ind(t); }
    /* 00572ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572ac2: je 0x572acd */ if (fZ) goto L_00572acd;
L_00572ac4:; BB(0x00572ac4);
    /* 00572ac4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00572ac6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572ac8: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x572acdu); f_0051f62c();
L_00572acd:; BB(0x00572acd);
    /* 00572acd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572ace: ret 4 */ FN_RET(0x00572a60); r_esp += 8; return;
L_00572ad1:; BB(0x00572ad1);
    /* 00572ad1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00572ad3: mov eax, 2 */ r_eax = 0x2u;
    /* 00572ad8: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00572adf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572ae1: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x572ae7u); call_ind(t); }
    /* 00572ae7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00572ae9: mov eax, dword ptr [ebx + 0x440] */ r_eax = R32((u32)(r_ebx+0x440u));
    /* 00572aef: or eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00572af2: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00572af5: mov dword ptr [ebx + 0x440], eax */ W32((u32)(r_ebx+0x440u), r_eax);
    /* 00572afb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572afd: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x572b02u); f_0051f664();
    /* 00572b02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00572b04: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x572b09u); f_00520f68();
    /* 00572b09: lea ecx, [ebx + 0x474] */ r_ecx = (u32)(r_ebx+0x474u);
    /* 00572b0f: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x572b14u); f_00576c48();
    /* 00572b14: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00572b17: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572b18: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x572b1du); f_0057895c();
    /* 00572b1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00572b1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00572b1f: ret 4 */ FN_RET(0x00572a60); r_esp += 8; return;
}

void f_00572b24(void)
{
    FN_ENTER(0x00572b24);
    /* 00572b24: mov ecx, dword ptr [0xa73f98] */ r_ecx = R32((u32)(0xa73f98u));
    /* 00572b2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572b2c: je 0x572b41 */ if (fZ) goto L_00572b41;
L_00572b2e:; BB(0x00572b2e);
    /* 00572b2e: je 0x572b37 */ if (fZ) goto L_00572b37;
L_00572b30:; BB(0x00572b30);
    /* 00572b30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572b32: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x572b37u); f_0045a950();
L_00572b37:; BB(0x00572b37);
    /* 00572b37: mov dword ptr [0xa73f98], 0 */ W32((u32)(0xa73f98u), 0x0u);
L_00572b41:; BB(0x00572b41);
    /* 00572b41: mov ecx, dword ptr [0xa73f94] */ r_ecx = R32((u32)(0xa73f94u));
    /* 00572b47: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572b49: je 0x572b5e */ if (fZ) goto L_00572b5e;
L_00572b4b:; BB(0x00572b4b);
    /* 00572b4b: je 0x572b54 */ if (fZ) goto L_00572b54;
L_00572b4d:; BB(0x00572b4d);
    /* 00572b4d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572b4f: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x572b54u); f_0045a950();
L_00572b54:; BB(0x00572b54);
    /* 00572b54: mov dword ptr [0xa73f94], 0 */ W32((u32)(0xa73f94u), 0x0u);
L_00572b5e:; BB(0x00572b5e);
    /* 00572b5e: call 0x5740cc */ r_esp -= 4; W32(r_esp, 0x572b63u); f_005740cc();
    /* 00572b63: mov ecx, dword ptr [0xa73f44] */ r_ecx = R32((u32)(0xa73f44u));
    /* 00572b69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572b6b: je 0x572b80 */ if (fZ) goto L_00572b80;
L_00572b6d:; BB(0x00572b6d);
    /* 00572b6d: je 0x572b76 */ if (fZ) goto L_00572b76;
L_00572b6f:; BB(0x00572b6f);
    /* 00572b6f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572b71: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x572b76u); f_004066a8();
L_00572b76:; BB(0x00572b76);
    /* 00572b76: mov dword ptr [0xa73f44], 0 */ W32((u32)(0xa73f44u), 0x0u);
L_00572b80:; BB(0x00572b80);
    /* 00572b80: ret  */ FN_RET(0x00572b24); r_esp += 4; return;
}

void f_00572b84(void)
{
    FN_ENTER(0x00572b84);
    /* 00572b84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572b85: mov ebp, esp */ r_ebp = r_esp;
    /* 00572b87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572b89: push 0x8d70bc */ { u32 v = 0x8d70bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00572b8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572b95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00572b9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572b9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00572ba2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00572ba5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00572ba8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00572bab: push 0x4b8 */ { u32 v = 0x4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00572bb0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00572bb7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x572bbcu); f_005caba4();
    /* 00572bbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00572bbd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00572bc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572bc2: je 0x572bfb */ if (fZ) goto L_00572bfb;
L_00572bc4:; BB(0x00572bc4);
    /* 00572bc4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00572bcb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00572bd2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572bd5: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572bdb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00572bde: call 0x572c00 */ r_esp -= 4; W32(r_esp, 0x572be3u); f_00572c00();
    /* 00572be3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00572be6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00572bed:; BB(0x00572bed);
    /* 00572bed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572bf0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00572bf7: mov esp, ebp */ r_esp = r_ebp;
    /* 00572bf9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572bfa: ret  */ FN_RET(0x00572b84); r_esp += 4; return;
L_00572bfb:; BB(0x00572bfb);
    /* 00572bfb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00572bfd: jmp 0x572bed */ goto L_00572bed;
}

void f_00572c00(void) /* sub_572C00 */
{
    FN_ENTER(0x00572c00);
    /* 00572c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00572c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00572c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00572c05: push 0x8d7142 */ { u32 v = 0x8d7142u; r_esp -= 4; W32(r_esp, v); }
    /* 00572c0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00572c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572c11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00572c18: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00572c1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00572c1e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00572c21: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00572c24: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00572c27: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00572c2a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572c2d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00572c30: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572c33: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x572c38u); f_005216f4();
    /* 00572c38: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00572c3f: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00572c44: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00572c49: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572c4c: mov dword ptr [eax], 0xb06320 */ W32((u32)(r_eax), 0xb06320u);
    /* 00572c52: add eax, 0x3d0 */ {  u32 a = r_eax; u32 b = 0x3d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00572c57: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00572c59: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00572c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00572c5c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x572c61u); f_00858736();
    /* 00572c61: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00572c68: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572c6b: add ecx, 0x474 */ {  u32 a = r_ecx; u32 b = 0x474u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00572c71: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x572c76u); f_00576a48();
    /* 00572c76: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00572c7d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572c80: mov eax, dword ptr [0x9beaa8] */ r_eax = R32((u32)(0x9beaa8u));
    /* 00572c85: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00572c88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00572c89: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00572c8c: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x572c91u); f_0051f750();
    /* 00572c91: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572c94: call 0x572fa8 */ r_esp -= 4; W32(r_esp, 0x572c99u); f_00572fa8();
    /* 00572c99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572c9c: mov dword ptr [ecx + 0x440], 0 */ W32((u32)(r_ecx+0x440u), 0x0u);
    /* 00572ca6: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x572cabu); f_007751b0();
    /* 00572cab: fcomp dword ptr [0xa73f24] */ fx_compare(ST(0), R_F32((u32)(0xa73f24u))); FPOP();
    /* 00572cb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00572cb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00572cb4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572cb7: ja 0x572cca */ if ((!fC&&!fZ)) goto L_00572cca;
L_00572cb9:; BB(0x00572cb9);
    /* 00572cb9: mov eax, dword ptr [ecx + 0x440] */ r_eax = R32((u32)(r_ecx+0x440u));
    /* 00572cbf: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00572cc4: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
L_00572cca:; BB(0x00572cca);
    /* 00572cca: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x572ccfu); f_00521840();
    /* 00572ccf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572cd2: mov ebx, dword ptr [0xa73f44] */ r_ebx = R32((u32)(0xa73f44u));
    /* 00572cd8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572cda: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00572ce0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00572ce3: push 0x9be940 */ { u32 v = 0x9be940u; r_esp -= 4; W32(r_esp, v); }
    /* 00572ce8: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00572ceb: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 00572cf1: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 00572cf4: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00572cf7: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x572cfcu); f_0051ff3c();
    /* 00572cfc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572cff: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 00572d04: mov dword ptr [ecx + 0xd8], 0x9be9a0 */ W32((u32)(r_ecx+0xd8u), 0x9be9a0u);
    /* 00572d0e: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00572d14: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00572d1a: mov ebx, 2 */ r_ebx = 0x2u;
    /* 00572d1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00572d20: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00572d27: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x572d2cu); f_007aa4c8();
    /* 00572d2c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572d2f: movzx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00572d36: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 00572d3d: mov ebx, dword ptr [ecx + 0x464] */ r_ebx = R32((u32)(r_ecx+0x464u));
    /* 00572d43: push dword ptr [ebx*4 + 0xa73f54] */ { u32 v = R32((u32)(r_ebx*4+0xa73f54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572d4a: push dword ptr [ebx*4 + 0xa73f60] */ { u32 v = R32((u32)(r_ebx*4+0xa73f60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572d51: push dword ptr [ebx*4 + 0xa73f6c] */ { u32 v = R32((u32)(r_ebx*4+0xa73f6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00572d58: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x572d5du); f_00520c70();
    /* 00572d5d: push dword ptr [ebx*4 + 0x926bb0] */ { u32 v = R32((u32)(r_ebx*4+0x926bb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572d64: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00572d69: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x572d6eu); f_00578cc4();
    /* 00572d6e: push dword ptr [ebx*4 + 0x926bb0] */ { u32 v = R32((u32)(r_ebx*4+0x926bb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00572d75: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572d78: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 00572d7e: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00572d83: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x572d88u); f_00578cc4();
    /* 00572d88: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572d8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572d8e: mov dword ptr [ecx + 0x358], 0x9beaac */ W32((u32)(r_ecx+0x358u), 0x9beaacu);
    /* 00572d98: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 00572d9e: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00572da4: or eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00572da7: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 00572dad: mov eax, dword ptr [ecx + 0x464] */ r_eax = R32((u32)(r_ecx+0x464u));
    /* 00572db3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572db5: je 0x572dd9 */ if (fZ) goto L_00572dd9;
L_00572db7:; BB(0x00572db7);
    /* 00572db7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572dba: jne 0x572dc8 */ if (!fZ) goto L_00572dc8;
L_00572dbc:; BB(0x00572dbc);
    /* 00572dbc: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00572dbe: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x572dc3u); f_00520390();
    /* 00572dc3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572dc6: jmp 0x572de3 */ goto L_00572de3;
L_00572dc8:; BB(0x00572dc8);
    /* 00572dc8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572dcb: jne 0x572de3 */ if (!fZ) goto L_00572de3;
L_00572dcd:; BB(0x00572dcd);
    /* 00572dcd: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 00572dcf: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x572dd4u); f_00520390();
    /* 00572dd4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572dd7: jmp 0x572de3 */ goto L_00572de3;
L_00572dd9:; BB(0x00572dd9);
    /* 00572dd9: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00572ddb: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x572de0u); f_00520390();
    /* 00572de0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00572de3:; BB(0x00572de3);
    /* 00572de3: mov dword ptr [ecx + 0x384], 0x40a00000 */ W32((u32)(r_ecx+0x384u), 0x40a00000u);
    /* 00572ded: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00572def: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x572df4u); f_00521820();
    /* 00572df4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572df7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00572df9: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x572dfeu); f_005217fc();
    /* 00572dfe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572e01: mov ebx, dword ptr [edx + 0x474] */ r_ebx = R32((u32)(r_edx+0x474u));
    /* 00572e07: mov dword ptr [edx + 0x444], 0 */ W32((u32)(r_edx+0x444u), 0x0u);
    /* 00572e11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572e13: mov dword ptr [edx + 0x454], eax */ W32((u32)(r_edx+0x454u), r_eax);
    /* 00572e19: mov dword ptr [edx + 0x458], eax */ W32((u32)(r_edx+0x458u), r_eax);
    /* 00572e1f: mov dword ptr [edx + 0x45c], eax */ W32((u32)(r_edx+0x45cu), r_eax);
    /* 00572e25: mov dword ptr [edx + 0x460], eax */ W32((u32)(r_edx+0x460u), r_eax);
    /* 00572e2b: lea ecx, [edx + 0x474] */ r_ecx = (u32)(r_edx+0x474u);
    /* 00572e31: call dword ptr [ebx + 0xc] */ { u32 t = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, 0x572e34u); call_ind(t); }
    /* 00572e34: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00572e3b: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00572e40: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x572e45u); f_005caba4();
    /* 00572e45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572e48: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572e4b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00572e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572e50: je 0x572f9e */ if (fZ) goto L_00572f9e;
L_00572e56:; BB(0x00572e56);
    /* 00572e56: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00572e5d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00572e64: mov ecx, eax */ r_ecx = r_eax;
    /* 00572e66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00572e68: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x572e6du); f_007b4b48();
    /* 00572e6d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00572e74:; BB(0x00572e74);
    /* 00572e74: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572e77: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00572e7a: mov dword ptr [edx + 0x494], eax */ W32((u32)(r_edx+0x494u), r_eax);
    /* 00572e80: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00572e87: mov ecx, eax */ r_ecx = r_eax;
    /* 00572e89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00572e8b: push 0x9be96c */ { u32 v = 0x9be96cu; r_esp -= 4; W32(r_esp, v); }
    /* 00572e90: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x572e95u); f_007b9a88();
    /* 00572e95: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00572e9c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00572e9e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x572ea3u); f_008581c5();
    /* 00572ea3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572ea6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00572ea9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00572eac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00572eae: je 0x572f94 */ if (fZ) goto L_00572f94;
L_00572eb4:; BB(0x00572eb4);
    /* 00572eb4: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00572ebb: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00572ec2: mov ecx, eax */ r_ecx = r_eax;
    /* 00572ec4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00572ec6: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x572ecbu); f_00521a4c();
    /* 00572ecb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00572ed2:; BB(0x00572ed2);
    /* 00572ed2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572ed5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00572ed8: mov dword ptr [ecx + 0x490], eax */ W32((u32)(r_ecx+0x490u), r_eax);
    /* 00572ede: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00572ee5: mov dword ptr [ecx + 0x4ac], 0 */ W32((u32)(r_ecx+0x4acu), 0x0u);
    /* 00572eef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572ef1: mov dword ptr [ecx + 0x498], eax */ W32((u32)(r_ecx+0x498u), r_eax);
    /* 00572ef7: mov dword ptr [ecx + 0x49c], eax */ W32((u32)(r_ecx+0x49cu), r_eax);
    /* 00572efd: mov dword ptr [ecx + 0x4a0], eax */ W32((u32)(r_ecx+0x4a0u), r_eax);
    /* 00572f03: mov dword ptr [ecx + 0x4a4], eax */ W32((u32)(r_ecx+0x4a4u), r_eax);
    /* 00572f09: mov dword ptr [ecx + 0x4a8], eax */ W32((u32)(r_ecx+0x4a8u), r_eax);
    /* 00572f0f: mov dword ptr [ecx + 0x4b4], eax */ W32((u32)(r_ecx+0x4b4u), r_eax);
    /* 00572f15: call 0x572068 */ r_esp -= 4; W32(r_esp, 0x572f1au); f_00572068();
    /* 00572f1a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572f1d: call 0x5369c4 */ r_esp -= 4; W32(r_esp, 0x572f22u); f_005369c4();
    /* 00572f22: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572f25: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x572f2au); f_0051ffdc();
    /* 00572f2a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572f2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572f2f: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00572f36: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00572f38: call 0x5738b0 */ r_esp -= 4; W32(r_esp, 0x572f3du); f_005738b0();
    /* 00572f3d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572f40: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00572f46: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00572f49: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 00572f4f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00572f51:; BB(0x00572f51);
    /* 00572f51: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00572f54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00572f56: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00572f59: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00572f5b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00572f5d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00572f5f: lea ecx, [ecx + edx + 0x3d0] */ r_ecx = (u32)(r_ecx+r_edx+0x3d0u);
    /* 00572f66: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x572f6bu); f_0057739c();
    /* 00572f6b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00572f6e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00572f71: jge 0x572f78 */ if ((fS==fO)) goto L_00572f78;
L_00572f73:; BB(0x00572f73);
    /* 00572f73: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572f76: jmp 0x572f51 */ goto L_00572f51;
L_00572f78:; BB(0x00572f78);
    /* 00572f78: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00572f7b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00572f7e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00572f81: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00572f84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00572f87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00572f8e: mov esp, ebp */ r_esp = r_ebp;
    /* 00572f90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00572f91: ret 8 */ FN_RET(0x00572c00); r_esp += 12; return;
L_00572f94:; BB(0x00572f94);
    /* 00572f94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572f96: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572f99: jmp 0x572ed2 */ goto L_00572ed2;
L_00572f9e:; BB(0x00572f9e);
    /* 00572f9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00572fa0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00572fa3: jmp 0x572e74 */ goto L_00572e74;
}

void f_00572fa8(void) /* sub_572FA8 */
{
    FN_ENTER(0x00572fa8);
    /* 00572fa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00572fa9: mov edi, ecx */ r_edi = r_ecx;
    /* 00572fab: mov eax, dword ptr [edi + 0x370] */ r_eax = R32((u32)(r_edi+0x370u));
    /* 00572fb1: mov dword ptr [edi + 0x464], eax */ W32((u32)(r_edi+0x464u), r_eax);
    /* 00572fb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00572fb9: jl 0x57300f */ if ((fS!=fO)) goto L_0057300f;
L_00572fbb:; BB(0x00572fbb);
    /* 00572fbb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00572fbe: jg 0x57300f */ if ((!fZ&&fS==fO)) goto L_0057300f;
L_00572fc0:; BB(0x00572fc0);
    /* 00572fc0: fld dword ptr [0x926bac] */ FPUSH(R_F32((u32)(0x926bacu)));
    /* 00572fc6: fadd dword ptr [edi + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x35cu));
    /* 00572fcc: fld dword ptr [0x926ba8] */ FPUSH(R_F32((u32)(0x926ba8u)));
    /* 00572fd2: fadd dword ptr [edi + 0x360] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x360u));
    /* 00572fd8: fld dword ptr [0x926ba4] */ FPUSH(R_F32((u32)(0x926ba4u)));
    /* 00572fde: fld dword ptr [0x926ba0] */ FPUSH(R_F32((u32)(0x926ba0u)));
    /* 00572fe4: fadd dword ptr [edi + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x364u));
    /* 00572fea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00572fec: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00572fee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00572ff0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00572ff2: fstp dword ptr [edi + 0x448] */ W_F32((u32)(r_edi+0x448u), ST(0)); FPOP();
    /* 00572ff8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00572ffa: fstp dword ptr [edi + 0x450] */ W_F32((u32)(r_edi+0x450u), ST(0)); FPOP();
    /* 00573000: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00573001: ja 0x573005 */ if ((!fC&&!fZ)) goto L_00573005;
L_00573003:; BB(0x00573003);
    /* 00573003: fst st(1) */ ST(1) = ST(0);
L_00573005:; BB(0x00573005);
    /* 00573005: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00573007: fstp dword ptr [edi + 0x44c] */ W_F32((u32)(r_edi+0x44cu), ST(0)); FPOP();
    /* 0057300d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057300e: ret  */ FN_RET(0x00572fa8); r_esp += 4; return;
L_0057300f:; BB(0x0057300f);
    /* 0057300f: movsx eax, word ptr [edi + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2cu));
    /* 00573013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573014: call 0x813038 */ r_esp -= 4; W32(r_esp, 0x573019u); f_00813038();
    /* 00573019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057301a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0057301c: je 0x57303e */ if (fZ) goto L_0057303e;
L_0057301e:; BB(0x0057301e);
    /* 0057301e: movzx eax, word ptr [edi + 0x2c] */ r_eax = (u32)R16((u32)(r_edi+0x2cu));
    /* 00573022: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 00573024: je 0x573032 */ if (fZ) goto L_00573032;
L_00573026:; BB(0x00573026);
    /* 00573026: mov dword ptr [edi + 0x464], 1 */ W32((u32)(r_edi+0x464u), 0x1u);
    /* 00573030: jmp 0x572fc0 */ goto L_00572fc0;
L_00573032:; BB(0x00573032);
    /* 00573032: mov dword ptr [edi + 0x464], 2 */ W32((u32)(r_edi+0x464u), 0x2u);
    /* 0057303c: jmp 0x572fc0 */ goto L_00572fc0;
L_0057303e:; BB(0x0057303e);
    /* 0057303e: mov dword ptr [edi + 0x464], 0 */ W32((u32)(r_edi+0x464u), 0x0u);
    /* 00573048: jmp 0x572fc0 */ goto L_00572fc0;
}

