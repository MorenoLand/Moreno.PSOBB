#include "protos.h"

void f_00536274(void) /* sub_536274 */
{
    FN_ENTER(0x00536274);
    /* 00536274: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0053627a: mov edx, 2 */ r_edx = 0x2u;
    /* 0053627f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536282: jl 0x536286 */ if ((fS!=fO)) goto L_00536286;
L_00536284:; BB(0x00536284);
    /* 00536284: mov eax, edx */ r_eax = r_edx;
L_00536286:; BB(0x00536286);
    /* 00536286: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00536288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053628a: jg 0x53628e */ if ((!fZ&&fS==fO)) goto L_0053628e;
L_0053628c:; BB(0x0053628c);
    /* 0053628c: mov eax, edx */ r_eax = r_edx;
L_0053628e:; BB(0x0053628e);
    /* 0053628e: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00536294: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536297: jne 0x5362ab */ if (!fZ) goto L_005362ab;
L_00536299:; BB(0x00536299);
    /* 00536299: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 005362a3: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005362a5: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5362aau); f_00787550();
    /* 005362aa: ret  */ FN_RET(0x00536274); r_esp += 4; return;
L_005362ab:; BB(0x005362ab);
    /* 005362ab: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005362ae: jne 0x5362c2 */ if (!fZ) goto L_005362c2;
L_005362b0:; BB(0x005362b0);
    /* 005362b0: mov dword ptr [ecx + 0x370], 2 */ W32((u32)(r_ecx+0x370u), 0x2u);
    /* 005362ba: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005362bc: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5362c1u); f_00787550();
    /* 005362c1: ret  */ FN_RET(0x00536274); r_esp += 4; return;
L_005362c2:; BB(0x005362c2);
    /* 005362c2: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 005362cc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005362ce: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x5362d3u); f_00787550();
    /* 005362d3: ret  */ FN_RET(0x00536274); r_esp += 4; return;
}

void f_00536314(void)
{
    FN_ENTER(0x00536314);
    /* 00536314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536315: mov ebp, esp */ r_ebp = r_esp;
    /* 00536317: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00536319: push 0x8d4fa6 */ { u32 v = 0x8d4fa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053631e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00536324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536325: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053632c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053632f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00536332: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00536335: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00536338: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053633b: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x536340u); f_00520e6c();
    /* 00536340: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536342: je 0x53637b */ if (fZ) goto L_0053637b;
L_00536344:; BB(0x00536344);
    /* 00536344: push 0x922c7c */ { u32 v = 0x922c7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536349: push 0x9bca84 */ { u32 v = 0x9bca84u; r_esp -= 4; W32(r_esp, v); }
    /* 0053634e: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x536353u); f_0051f674();
    /* 00536353: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536356: mov dword ptr [0x9bc8ec], 0x41200000 */ W32((u32)(0x9bc8ecu), 0x41200000u);
    /* 00536360: mov dword ptr [0xa7350c], eax */ W32((u32)(0xa7350cu), r_eax);
    /* 00536365: mov dword ptr [0x9bc918], 0x41200000 */ W32((u32)(0x9bc918u), 0x41200000u);
    /* 0053636f: mov dword ptr [0x9bc944], 0x41100000 */ W32((u32)(0x9bc944u), 0x41100000u);
    /* 00536379: jmp 0x5363ee */ goto L_005363ee;
L_0053637b:; BB(0x0053637b);
    /* 0053637b: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00536382: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00536387: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53638cu); f_008581c5();
    /* 0053638c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053638d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00536390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536392: je 0x5366a9 */ if (fZ) goto L_005366a9;
L_00536398:; BB(0x00536398);
    /* 00536398: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 0053639f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005363a6: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 005363a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005363ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005363ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005363ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005363ae: push 0x9bca84 */ { u32 v = 0x9bca84u; r_esp -= 4; W32(r_esp, v); }
    /* 005363b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005363b5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5363bau); f_005b7a84();
    /* 005363ba: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 005363bd: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005363c4: mov dword ptr [0xa7350c], eax */ W32((u32)(0xa7350cu), r_eax);
    /* 005363c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005363d0: mov dword ptr [0x9bc8ec], 0x40e00000 */ W32((u32)(0x9bc8ecu), 0x40e00000u);
    /* 005363da: mov dword ptr [0x9bc918], 0x40e00000 */ W32((u32)(0x9bc918u), 0x40e00000u);
    /* 005363e4: mov dword ptr [0x9bc944], 0x41000000 */ W32((u32)(0x9bc944u), 0x41000000u);
L_005363ee:; BB(0x005363ee);
    /* 005363ee: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005363f5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005363f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5363fcu); f_008581c5();
    /* 005363fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005363fd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00536400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536402: je 0x5366a2 */ if (fZ) goto L_005366a2;
L_00536408:; BB(0x00536408);
    /* 00536408: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0053640f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00536416: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536419: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053641b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536420: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536425: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053642a: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x53642fu); f_005795a0();
    /* 0053642f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536432: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00536439: mov dword ptr [0xa73510], eax */ W32((u32)(0xa73510u), r_eax);
    /* 0053643e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00536445: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053644c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0053644e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536453u); f_008581c5();
    /* 00536453: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00536454: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00536457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536459: je 0x53669b */ if (fZ) goto L_0053669b;
L_0053645f:; BB(0x0053645f);
    /* 0053645f: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00536466: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053646d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536470: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536472: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536477: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053647c: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536481: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x536486u); f_005795a0();
    /* 00536486: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536489: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00536490: mov dword ptr [0xa73514], eax */ W32((u32)(0xa73514u), r_eax);
    /* 00536495: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053649c: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364a1: mov ebx, dword ptr [0x9bc9b4] */ r_ebx = R32((u32)(0x9bc9b4u));
    /* 005364a7: mov ecx, dword ptr [0xa73510] */ r_ecx = R32((u32)(0xa73510u));
    /* 005364ad: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005364af: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364b5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005364b7: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364bd: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c1: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c4: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364c9u); f_00579a28();
    /* 005364c9: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364ce: mov ebx, dword ptr [0x9bc9c4] */ r_ebx = R32((u32)(0x9bc9c4u));
    /* 005364d4: mov ecx, dword ptr [0xa73514] */ r_ecx = R32((u32)(0xa73514u));
    /* 005364da: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005364dc: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005364e4: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364ea: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364ee: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364f1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364f6u); f_00579a28();
    /* 005364f6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005364f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5364fdu); f_008581c5();
    /* 005364fd: mov dword ptr [0xa73508], eax */ W32((u32)(0xa73508u), r_eax);
    /* 00536502: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536504: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536509u); f_008581c5();
    /* 00536509: mov dword ptr [0xa73504], eax */ W32((u32)(0xa73504u), r_eax);
    /* 0053650e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536510: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536515u); f_008581c5();
    /* 00536515: mov dword ptr [0xa73500], eax */ W32((u32)(0xa73500u), r_eax);
    /* 0053651a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053651c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536521u); f_008581c5();
    /* 00536521: mov dword ptr [0xa734fc], eax */ W32((u32)(0xa734fcu), r_eax);
    /* 00536526: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536528: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53652du); f_0077a684();
    /* 0053652d: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536533: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536535: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536537: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53653cu); f_0077a684();
    /* 0053653c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536542: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00536544: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536547: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53654cu); f_0077a684();
    /* 0053654c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536552: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00536554: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536557: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53655cu); f_0077a698();
    /* 0053655c: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536562: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00536564: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536566: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53656bu); f_0077a698();
    /* 0053656b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536571: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00536573: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536576: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53657bu); f_0077a698();
    /* 0053657b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536581: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00536583: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536586: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53658bu); f_0077a6b4();
    /* 0053658b: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 00536591: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536593: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536595: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53659au); f_0077a6b4();
    /* 0053659a: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365a0: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365a2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365a5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5365aau); f_0077a6b4();
    /* 005365aa: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365b0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005365b2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365b5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365bau); f_0077a6cc();
    /* 005365ba: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365c0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005365c2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005365c4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365c9u); f_0077a6cc();
    /* 005365c9: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365cf: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365d1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365d4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365d9u); f_0077a6cc();
    /* 005365d9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005365dc: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365e2: mov esi, dword ptr [0x922b98] */ r_esi = R32((u32)(0x922b98u));
    /* 005365e8: movzx edi, word ptr [0x922b9c] */ r_edi = (u32)R16((u32)(0x922b9cu));
    /* 005365ef: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365f2: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 005365f8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005365fb: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005365ff: mov eax, 2 */ r_eax = 0x2u;
    /* 00536604: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00536609: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 0053660d: movzx eax, word ptr [0x922b9e] */ r_eax = (u32)R16((u32)(0x922b9eu));
    /* 00536614: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 00536618: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0053661d: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 00536621: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00536625: movzx eax, word ptr [0x922ba0] */ r_eax = (u32)R16((u32)(0x922ba0u));
    /* 0053662c: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 00536630: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00536636: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00536639: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053663b:; BB(0x0053663b);
    /* 0053663b: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 00536640: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00536643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536644: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0053664a: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0053664d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053664f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00536652: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536654: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00536656: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536658: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053665a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053665c: push dword ptr [edx*4 + 0x9bc8ec] */ { u32 v = R32((u32)(r_edx*4+0x9bc8ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536663: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536667: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053666b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053666c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x536671u); f_00608470();
    /* 00536671: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536674: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536677: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053667a: jge 0x536684 */ if ((fS==fO)) goto L_00536684;
L_0053667c:; BB(0x0053667c);
    /* 0053667c: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 00536682: jmp 0x53663b */ goto L_0053663b;
L_00536684:; BB(0x00536684);
    /* 00536684: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536687: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053668a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053668d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536690: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00536697: mov esp, ebp */ r_esp = r_ebp;
    /* 00536699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053669a: ret  */ FN_RET(0x00536314); r_esp += 4; return;
L_0053669b:; BB(0x0053669b);
    /* 0053669b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053669d: jmp 0x536490 */ f_00536490(); return;
L_005366a2:; BB(0x005366a2);
    /* 005366a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005366a4: jmp 0x536439 */ f_00536439(); return;
L_005366a9:; BB(0x005366a9);
    /* 005366a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005366ab: jmp 0x5363c4 */ f_005363c4(); return;
}

void f_005366b0(void) /* sub_5366B0 */
{
    FN_ENTER(0x005366b0);
    /* 005366b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005366b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005366b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005366b3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005366b6: mov edi, ecx */ r_edi = r_ecx;
    /* 005366b8: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005366be: fcomp dword ptr [0x922ba4] */ fx_compare(ST(0), R_F32((u32)(0x922ba4u))); FPOP();
    /* 005366c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005366c6: mov edx, dword ptr [edi + 0xc0] */ r_edx = R32((u32)(r_edi+0xc0u));
    /* 005366cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005366cd: jae 0x536758 */ if (!fC) goto L_00536758;
L_005366d3:; BB(0x005366d3);
    /* 005366d3: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005366da: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005366dd: jne 0x5366f1 */ if (!fZ) goto L_005366f1;
L_005366df:; BB(0x005366df);
    /* 005366df: mov ecx, dword ptr [0xa73510] */ r_ecx = R32((u32)(0xa73510u));
    /* 005366e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005366e6: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5366ebu); f_00579de0();
    /* 005366eb: mov ebp, eax */ r_ebp = r_eax;
    /* 005366ed: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005366ef: jmp 0x536709 */ goto L_00536709;
L_005366f1:; BB(0x005366f1);
    /* 005366f1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005366f4: jne 0x536758 */ if (!fZ) goto L_00536758;
L_005366f6:; BB(0x005366f6);
    /* 005366f6: mov ecx, dword ptr [0xa73514] */ r_ecx = R32((u32)(0xa73514u));
    /* 005366fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005366fd: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x536702u); f_00579de0();
    /* 00536702: mov ebp, eax */ r_ebp = r_eax;
    /* 00536704: mov ebx, 1 */ r_ebx = 0x1u;
L_00536709:; BB(0x00536709);
    /* 00536709: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053670b: je 0x536758 */ if (fZ) goto L_00536758;
L_0053670d:; BB(0x0053670d);
    /* 0053670d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x536712u); f_0082d7b0();
    /* 00536712: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536714: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x536719u); f_00830cd8();
    /* 00536719: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0053671c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x536721u); f_0082d838();
    /* 00536721: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00536724: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536726: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53672bu); f_0082d8bc();
    /* 0053672b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0053672e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536731: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536733: mov edx, ebp */ r_edx = r_ebp;
    /* 00536735: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x53673au); f_0082f940();
    /* 0053673a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53673fu); f_0082da80();
    /* 0053673f: mov ecx, dword ptr [edi + ebx*4 + 0x3b0] */ r_ecx = R32((u32)(r_edi+r_ebx*4+0x3b0u));
    /* 00536746: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536748: je 0x536758 */ if (fZ) goto L_00536758;
L_0053674a:; BB(0x0053674a);
    /* 0053674a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053674d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00536751: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536752: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00536754: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536755: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x536758u); call_ind(t); }
L_00536758:; BB(0x00536758);
    /* 00536758: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053675b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053675c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053675d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053675e: ret  */ FN_RET(0x005366b0); r_esp += 4; return;
}

void f_00536760(void) /* sub_536760 */
{
    FN_ENTER(0x00536760);
    /* 00536760: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536761: mov ebp, esp */ r_ebp = r_esp;
    /* 00536763: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00536765: push 0x8d502c */ { u32 v = 0x8d502cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053676a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00536770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536771: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00536778: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053677b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053677e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00536781: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00536784: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00536787: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0053678a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0053678d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00536794: mov eax, ecx */ r_eax = r_ecx;
    /* 00536796: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 0053679c: mov dword ptr [eax], 0xb02280 */ W32((u32)(r_eax), 0xb02280u);
    /* 005367a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005367a4: je 0x5367bf */ if (fZ) goto L_005367bf;
L_005367a6:; BB(0x005367a6);
    /* 005367a6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005367aa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005367af: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005367b3: mov edx, ecx */ r_edx = r_ecx;
    /* 005367b5: mov dword ptr [edx + 0x440], 0 */ W32((u32)(r_edx+0x440u), 0x0u);
L_005367bf:; BB(0x005367bf);
    /* 005367bf: mov eax, ecx */ r_eax = r_ecx;
    /* 005367c1: mov edx, dword ptr [eax + 0x444] */ r_edx = R32((u32)(r_eax+0x444u));
    /* 005367c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005367c9: je 0x5367e4 */ if (fZ) goto L_005367e4;
L_005367cb:; BB(0x005367cb);
    /* 005367cb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005367cf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005367d4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005367d8: mov edx, ecx */ r_edx = r_ecx;
    /* 005367da: mov dword ptr [edx + 0x444], 0 */ W32((u32)(r_edx+0x444u), 0x0u);
L_005367e4:; BB(0x005367e4);
    /* 005367e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005367e6:; BB(0x005367e6);
    /* 005367e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005367e9: mov ecx, dword ptr [eax + esi*4 + 0x448] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x448u));
    /* 005367f0: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 005367f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005367f5: je 0x53680d */ if (fZ) goto L_0053680d;
L_005367f7:; BB(0x005367f7);
    /* 005367f7: je 0x5367ff */ if (fZ) goto L_005367ff;
L_005367f9:; BB(0x005367f9);
    /* 005367f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005367fb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005367fd: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5367ffu); call_ind(t); }
L_005367ff:; BB(0x005367ff);
    /* 005367ff: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00536802: mov dword ptr [eax + ebx*2 + 0x448], 0 */ W32((u32)(r_eax+r_ebx*2+0x448u), 0x0u);
L_0053680d:; BB(0x0053680d);
    /* 0053680d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00536810: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536813: jl 0x5367e6 */ if ((fS!=fO)) goto L_005367e6;
L_00536815:; BB(0x00536815);
    /* 00536815: mov ecx, eax */ r_ecx = r_eax;
    /* 00536817: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x53681cu); f_007b9c8c();
    /* 0053681c: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00536823: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00536828: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053682b: lea edx, [eax + 0x450] */ r_edx = (u32)(r_eax+0x450u);
    /* 00536831: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00536833: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536835: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536836: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x53683bu); f_008586d6();
    /* 0053683b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00536842: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00536845: lea ecx, [eax + 0x404] */ r_ecx = (u32)(r_eax+0x404u);
    /* 0053684b: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x536850u); f_005122a8();
    /* 00536850: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00536857: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053685a: lea ecx, [eax + 0x3e0] */ r_ecx = (u32)(r_eax+0x3e0u);
    /* 00536860: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x536865u); f_005122a8();
    /* 00536865: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053686c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053686f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x536874u); f_0051f4fc();
    /* 00536874: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00536877: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00536879: jne 0x536894 */ if (!fZ) goto L_00536894;
L_0053687b:; BB(0x0053687b);
    /* 0053687b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053687e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536881: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00536884: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536887: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053688e: mov esp, ebp */ r_esp = r_ebp;
    /* 00536890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536891: ret 4 */ FN_RET(0x00536760); r_esp += 8; return;
L_00536894:; BB(0x00536894);
    /* 00536894: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00536897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536898: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53689du); f_005c2f74();
    /* 0053689d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053689e: jmp 0x53687b */ goto L_0053687b;
}

void f_00536880(void)
{
    FN_ENTER(0x00536880);
    /* 00536880: in al, 0x8b */ UNSUP(0x00536880, "in al, 0x8b");
    /* 00536882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536883: call 0x6547b613 */ r_esp -= 4; W32(r_esp, 0x536888u); f_6547b613();
    /* 00536888: mov dword ptr [0], ecx */ W32((u32)(0x0u), r_ecx);
    /* 0053688e: mov esp, ebp */ r_esp = r_ebp;
    /* 00536890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536891: ret 4 */ FN_RET(0x00536880); r_esp += 8; return;
}

void f_005368a0(void) /* sub_5368A0 */
{
    FN_ENTER(0x005368a0);
    /* 005368a0: mov eax, dword ptr [0xa735f8] */ r_eax = R32((u32)(0xa735f8u));
    /* 005368a5: lea edx, [eax - 2] */ r_edx = (u32)(r_eax+0xfffffffeu);
    /* 005368a8: cmp edx, 0x4e */ {  u32 a = r_edx; u32 b = 0x4eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005368ab: ja 0x53697d */ if ((!fC&&!fZ)) goto L_0053697d;
L_005368b1:; BB(0x005368b1);
    /* 005368b1: mov edx, dword ptr [edx*4 + 0x922ca0] */ r_edx = R32((u32)(r_edx*4+0x922ca0u));
    /* 005368b8: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x005368a0); r_esp += 4; return;
}

void f_005368ba(void)
{
    FN_ENTER(0x005368ba);
    /* 005368ba: mov eax, dword ptr [0xa735f0] */ r_eax = R32((u32)(0xa735f0u));
    /* 005368bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005368c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005368c1: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x5368c6u); f_00520c5c();
    /* 005368c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005368c9: mov eax, dword ptr [0xa735f0] */ r_eax = R32((u32)(0xa735f0u));
    /* 005368ce: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005368d1: mov dword ptr [0xa735f0], eax */ W32((u32)(0xa735f0u), r_eax);
    /* 005368d6: mov eax, dword ptr [0xa735f8] */ r_eax = R32((u32)(0xa735f8u));
    /* 005368db: jmp 0x53697d */ goto L_0053697d;
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x005368ba); r_esp += 4; return;
}

void f_005368e0(void)
{
    FN_ENTER(0x005368e0);
    /* 005368e0: mov edx, dword ptr [0xa735e8] */ r_edx = R32((u32)(0xa735e8u));
    /* 005368e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005368e8: je 0x53697d */ if (fZ) goto L_0053697d;
L_005368ee:; BB(0x005368ee);
    /* 005368ee: mov ecx, dword ptr [0xa735e4] */ r_ecx = R32((u32)(0xa735e4u));
    /* 005368f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005368f6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5368f9u); call_ind(t); }
    /* 005368f9: mov eax, dword ptr [0xa735f8] */ r_eax = R32((u32)(0xa735f8u));
    /* 005368fe: jmp 0x53697d */ goto L_0053697d;
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x005368e0); r_esp += 4; return;
}

void f_00536903(void)
{
    FN_ENTER(0x00536903);
    /* 00536903: mov edx, dword ptr [0xa735e8] */ r_edx = R32((u32)(0xa735e8u));
    /* 00536909: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053690b: je 0x53697d */ if (fZ) goto L_0053697d;
L_0053690d:; BB(0x0053690d);
    /* 0053690d: mov ecx, dword ptr [0xa735e4] */ r_ecx = R32((u32)(0xa735e4u));
    /* 00536913: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00536915: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x536918u); call_ind(t); }
    /* 00536918: mov eax, dword ptr [0xa735f8] */ r_eax = R32((u32)(0xa735f8u));
    /* 0053691d: jmp 0x53697d */ goto L_0053697d;
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x00536903); r_esp += 4; return;
}

void f_0053691f(void)
{
    FN_ENTER(0x0053691f);
    /* 0053691f: mov edx, dword ptr [0xa735ec] */ r_edx = R32((u32)(0xa735ecu));
    /* 00536925: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536927: je 0x53697d */ if (fZ) goto L_0053697d;
L_00536929:; BB(0x00536929);
    /* 00536929: mov ecx, dword ptr [0xa735e4] */ r_ecx = R32((u32)(0xa735e4u));
    /* 0053692f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00536931: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x536934u); call_ind(t); }
    /* 00536934: mov eax, dword ptr [0xa735f8] */ r_eax = R32((u32)(0xa735f8u));
    /* 00536939: jmp 0x53697d */ goto L_0053697d;
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x0053691f); r_esp += 4; return;
}

void f_0053693b(void)
{
    FN_ENTER(0x0053693b);
    /* 0053693b: mov edx, dword ptr [0xa735ec] */ r_edx = R32((u32)(0xa735ecu));
    /* 00536941: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536943: je 0x53697d */ if (fZ) goto L_0053697d;
L_00536945:; BB(0x00536945);
    /* 00536945: mov ecx, dword ptr [0xa735e4] */ r_ecx = R32((u32)(0xa735e4u));
    /* 0053694b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0053694d: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x536950u); call_ind(t); }
    /* 00536950: mov eax, dword ptr [0xa735f8] */ r_eax = R32((u32)(0xa735f8u));
    /* 00536955: jmp 0x53697d */ goto L_0053697d;
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x0053693b); r_esp += 4; return;
}

void f_00536957(void)
{
    FN_ENTER(0x00536957);
    /* 00536957: mov edx, dword ptr [0xa735f4] */ r_edx = R32((u32)(0xa735f4u));
    /* 0053695d: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00536963: jmp 0x53697d */ goto L_0053697d;
L_0053697d:; BB(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x00536957); r_esp += 4; return;
}

void f_00536965(void)
{
    FN_ENTER(0x00536965);
    /* 00536965: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0053696b: mov dword ptr [0xa735f4], edx */ W32((u32)(0xa735f4u), r_edx);
    /* 00536971: and edx, 0xffff7fff */ {  u32 a = r_edx; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00536977: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x00536965); r_esp += 4; return;
}

void f_0053697d(void)
{
    FN_ENTER(0x0053697d);
    /* 0053697d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536980: mov dword ptr [0xa735f8], eax */ W32((u32)(0xa735f8u), r_eax);
    /* 00536985: ret  */ FN_RET(0x0053697d); r_esp += 4; return;
}

void f_00536988(void) /* sub_536988 */
{
    FN_ENTER(0x00536988);
    /* 00536988: mov edx, dword ptr [0xa735f8] */ r_edx = R32((u32)(0xa735f8u));
    /* 0053698e: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536991: jne 0x5369a9 */ if (!fZ) goto L_005369a9;
L_00536993:; BB(0x00536993);
    /* 00536993: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00536998: mov dword ptr [0xa735f4], eax */ W32((u32)(0xa735f4u), r_eax);
    /* 0053699d: and eax, 0xffff7fff */ {  u32 a = r_eax; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005369a2: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005369a7: jmp 0x5369b8 */ goto L_005369b8;
L_005369a9:; BB(0x005369a9);
    /* 005369a9: cmp edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005369ac: jne 0x5369b8 */ if (!fZ) goto L_005369b8;
L_005369ae:; BB(0x005369ae);
    /* 005369ae: mov eax, dword ptr [0xa735f4] */ r_eax = R32((u32)(0xa735f4u));
    /* 005369b3: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_005369b8:; BB(0x005369b8);
    /* 005369b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005369bb: mov dword ptr [0xa735f8], edx */ W32((u32)(0xa735f8u), r_edx);
    /* 005369c1: ret  */ FN_RET(0x00536988); r_esp += 4; return;
}

void f_005369c4(void) /* sub_5369C4 */
{
    FN_ENTER(0x005369c4);
    /* 005369c4: fld dword ptr [ecx + 0x304] */ FPUSH(R_F32((u32)(r_ecx+0x304u)));
    /* 005369ca: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 005369cd: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005369d3: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 005369d6: ret  */ FN_RET(0x005369c4); r_esp += 4; return;
}

void f_005369e0(void) /* sub_5369E0 */
{
    FN_ENTER(0x005369e0);
    /* 005369e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005369e1: mov ebx, esp */ r_ebx = r_esp;
    /* 005369e3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005369e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005369e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005369e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005369e9: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005369ec: mov ebp, eax */ r_ebp = r_eax;
    /* 005369ee: mov esi, edx */ r_esi = r_edx;
L_005369f0:; BB(0x005369f0);
    /* 005369f0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5369f5u); f_0082d7b0();
    /* 005369f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005369f7: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x5369fcu); f_008305ec();
    /* 005369fc: mov eax, dword ptr [0xa735cc] */ r_eax = R32((u32)(0xa735ccu));
    /* 00536a01: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 00536a04: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536a06: jne 0x536ab8 */ if (!fZ) goto L_00536ab8;
L_00536a0c:; BB(0x00536a0c);
    /* 00536a0c: mov eax, dword ptr [0xa735c0] */ r_eax = R32((u32)(0xa735c0u));
    /* 00536a11: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00536a17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536a19: mov edx, dword ptr [0xa735c0] */ r_edx = R32((u32)(0xa735c0u));
    /* 00536a1f: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00536a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536a27: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 00536a2e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x536a33u); f_00830aa0();
    /* 00536a33: mov eax, dword ptr [0xa735c0] */ r_eax = R32((u32)(0xa735c0u));
    /* 00536a38: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00536a3c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00536a3f: fadd dword ptr [0x922f44] */ ST(0) = ST(0) + R_F32((u32)(0x922f44u));
    /* 00536a45: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00536a48: fadd dword ptr [0x922f40] */ ST(0) = ST(0) + R_F32((u32)(0x922f40u));
    /* 00536a4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00536a50: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00536a53: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00536a56: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x536a5bu); f_00831650();
    /* 00536a5b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00536a60: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x536a65u); f_0082d990();
    /* 00536a65: mov eax, dword ptr [0xa735c0] */ r_eax = R32((u32)(0xa735c0u));
    /* 00536a6a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00536a6c: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00536a6f: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00536a72: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536a75: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00536a77: fchs  */ ST(0) = -ST(0);
    /* 00536a79: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00536a7c: fchs  */ ST(0) = -ST(0);
    /* 00536a7e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00536a82: fchs  */ ST(0) = -ST(0);
    /* 00536a84: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00536a88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536a8a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x536a8fu); f_00830b74();
    /* 00536a8f: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00536a93: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536a95: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x536a9au); f_00831308();
    /* 00536a9a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00536a9e: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x536aa3u); f_00831650();
    /* 00536aa3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x536aa8u); f_0082da80();
    /* 00536aa8: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00536aac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536aae: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x536ab3u); f_0083b410();
    /* 00536ab3: mov eax, dword ptr [0xa735cc] */ r_eax = R32((u32)(0xa735ccu));
L_00536ab8:; BB(0x00536ab8);
    /* 00536ab8: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536aba: jl 0x536ad7 */ if ((fS!=fO)) goto L_00536ad7;
L_00536abc:; BB(0x00536abc);
    /* 00536abc: cmp esi, dword ptr [0xa735c8] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa735c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00536ac2: jg 0x536ad7 */ if ((!fZ&&fS==fO)) goto L_00536ad7;
L_00536ac4:; BB(0x00536ac4);
    /* 00536ac4: mov ecx, dword ptr [0xa735c4] */ r_ecx = R32((u32)(0xa735c4u));
    /* 00536aca: lea eax, [ecx + 0x40] */ r_eax = (u32)(r_ecx+0x40u);
    /* 00536acd: mov dword ptr [0xa735c4], eax */ W32((u32)(0xa735c4u), r_eax);
    /* 00536ad2: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x536ad7u); f_00831650();
L_00536ad7:; BB(0x00536ad7);
    /* 00536ad7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00536ada: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536ae0: jne 0x536aee */ if (!fZ) goto L_00536aee;
L_00536ae2:; BB(0x00536ae2);
    /* 00536ae2: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00536ae5: mov edx, esi */ r_edx = r_esi;
    /* 00536ae7: call 0x5369e0 */ r_esp -= 4; W32(r_esp, 0x536aecu); f_005369e0();
    /* 00536aec: mov esi, eax */ r_esi = r_eax;
L_00536aee:; BB(0x00536aee);
    /* 00536aee: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x536af3u); f_0082da80();
    /* 00536af3: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00536af6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536af8: jne 0x5369f0 */ if (!fZ) goto L_005369f0;
L_00536afe:; BB(0x00536afe);
    /* 00536afe: mov edx, esi */ r_edx = r_esi;
    /* 00536b00: mov eax, edx */ r_eax = r_edx;
    /* 00536b02: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536b05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536b06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00536b07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00536b08: mov esp, ebx */ r_esp = r_ebx;
    /* 00536b0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00536b0b: ret  */ FN_RET(0x005369e0); r_esp += 4; return;
}

void f_00536b0c(void)
{
    FN_ENTER(0x00536b0c);
    /* 00536b0c: mov ecx, dword ptr [0xa735d0] */ r_ecx = R32((u32)(0xa735d0u));
    /* 00536b12: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536b14: je 0x536b29 */ if (fZ) goto L_00536b29;
L_00536b16:; BB(0x00536b16);
    /* 00536b16: je 0x536b1f */ if (fZ) goto L_00536b1f;
L_00536b18:; BB(0x00536b18);
    /* 00536b18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536b1a: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x536b1fu); f_0045a950();
L_00536b1f:; BB(0x00536b1f);
    /* 00536b1f: mov dword ptr [0xa735d0], 0 */ W32((u32)(0xa735d0u), 0x0u);
L_00536b29:; BB(0x00536b29);
    /* 00536b29: mov ecx, dword ptr [0xa735d4] */ r_ecx = R32((u32)(0xa735d4u));
    /* 00536b2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536b31: je 0x536b46 */ if (fZ) goto L_00536b46;
L_00536b33:; BB(0x00536b33);
    /* 00536b33: je 0x536b3c */ if (fZ) goto L_00536b3c;
L_00536b35:; BB(0x00536b35);
    /* 00536b35: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536b37: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x536b3cu); f_0044bbac();
L_00536b3c:; BB(0x00536b3c);
    /* 00536b3c: mov dword ptr [0xa735d4], 0 */ W32((u32)(0xa735d4u), 0x0u);
L_00536b46:; BB(0x00536b46);
    /* 00536b46: mov eax, dword ptr [0xa735e0] */ r_eax = R32((u32)(0xa735e0u));
    /* 00536b4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536b4d: je 0x536b60 */ if (fZ) goto L_00536b60;
L_00536b4f:; BB(0x00536b4f);
    /* 00536b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536b50: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x536b55u); f_00857e98();
    /* 00536b55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00536b56: mov dword ptr [0xa735e0], 0 */ W32((u32)(0xa735e0u), 0x0u);
L_00536b60:; BB(0x00536b60);
    /* 00536b60: mov ecx, dword ptr [0xa735a8] */ r_ecx = R32((u32)(0xa735a8u));
    /* 00536b66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00536b68: je 0x536b7d */ if (fZ) goto L_00536b7d;
L_00536b6a:; BB(0x00536b6a);
    /* 00536b6a: je 0x536b73 */ if (fZ) goto L_00536b73;
L_00536b6c:; BB(0x00536b6c);
    /* 00536b6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00536b6e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x536b73u); f_004066a8();
L_00536b73:; BB(0x00536b73);
    /* 00536b73: mov dword ptr [0xa735a8], 0 */ W32((u32)(0xa735a8u), 0x0u);
L_00536b7d:; BB(0x00536b7d);
    /* 00536b7d: ret  */ FN_RET(0x00536b0c); r_esp += 4; return;
}

void f_00536b80(void)
{
    FN_ENTER(0x00536b80);
    /* 00536b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00536b83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00536b85: push 0x8d5054 */ { u32 v = 0x8d5054u; r_esp -= 4; W32(r_esp, v); }
    /* 00536b8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00536b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536b91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00536b98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536b9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00536b9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00536ba1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00536ba4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00536ba7: push 0x4ec */ { u32 v = 0x4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00536bac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00536bb3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x536bb8u); f_005caba4();
    /* 00536bb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00536bb9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00536bbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536bbe: je 0x536bf7 */ if (fZ) goto L_00536bf7;
L_00536bc0:; BB(0x00536bc0);
    /* 00536bc0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00536bc7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536bce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00536bd1: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00536bd7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536bda: call 0x536bfc */ r_esp -= 4; W32(r_esp, 0x536bdfu); f_00536bfc();
    /* 00536bdf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00536be2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00536be9:; BB(0x00536be9);
    /* 00536be9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536bec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00536bf3: mov esp, ebp */ r_esp = r_ebp;
    /* 00536bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536bf6: ret  */ FN_RET(0x00536b80); r_esp += 4; return;
L_00536bf7:; BB(0x00536bf7);
    /* 00536bf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00536bf9: jmp 0x536be9 */ goto L_00536be9;
}

void f_00536bfc(void) /* sub_536BFC */
{
    FN_ENTER(0x00536bfc);
    /* 00536bfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536bfd: mov ebp, esp */ r_ebp = r_esp;
    /* 00536bff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00536c01: push 0x8d50b8 */ { u32 v = 0x8d50b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00536c06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00536c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536c0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00536c14: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536c17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00536c1a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00536c1d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00536c20: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00536c23: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00536c26: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00536c29: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00536c2c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00536c2f: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x536c34u); f_005216f4();
    /* 00536c34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00536c3b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c3e: mov dword ptr [ecx], 0xb02280 */ W32((u32)(r_ecx), 0xb02280u);
    /* 00536c44: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536c4a: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x536c4fu); f_005122f8();
    /* 00536c4f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00536c56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c59: add ecx, 0x404 */ {  u32 a = r_ecx; u32 b = 0x404u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00536c5f: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x536c64u); f_005122f8();
    /* 00536c64: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00536c6b: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00536c70: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536c75: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c78: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00536c7a: add eax, 0x450 */ {  u32 a = r_eax; u32 b = 0x450u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536c7f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536c81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536c82: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x536c87u); f_00858736();
    /* 00536c87: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00536c8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536c91: mov eax, dword ptr [0x9bcb64] */ r_eax = R32((u32)(0x9bcb64u));
    /* 00536c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00536c99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536c9a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00536c9d: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x536ca2u); f_0051f750();
    /* 00536ca2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536ca5: call 0x5394ec */ r_esp -= 4; W32(r_esp, 0x536caau); f_005394ec();
    /* 00536caa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00536cad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536cb0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00536cb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00536cb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536cba: ret 8 */ FN_RET(0x00536bfc); r_esp += 12; return;
}

void f_00536cc0(void) /* sub_536CC0 */
{
    FN_ENTER(0x00536cc0);
    /* 00536cc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00536cc1: mov edi, ecx */ r_edi = r_ecx;
    /* 00536cc3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x536cc8u); f_004f7c84();
    /* 00536cc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536cca: je 0x536cd8 */ if (fZ) goto L_00536cd8;
L_00536ccc:; BB(0x00536ccc);
    /* 00536ccc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00536cce: mov ecx, edi */ r_ecx = r_edi;
    /* 00536cd0: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x536cd6u); call_ind(t); }
    /* 00536cd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00536cd7: ret  */ FN_RET(0x00536cc0); r_esp += 4; return;
L_00536cd8:; BB(0x00536cd8);
    /* 00536cd8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00536cda: mov ecx, edi */ r_ecx = r_edi;
    /* 00536cdc: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x536ce2u); call_ind(t); }
    /* 00536ce2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536ce5: je 0x536d06 */ if (fZ) goto L_00536d06;
L_00536ce7:; BB(0x00536ce7);
    /* 00536ce7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00536ce9: mov ecx, edi */ r_ecx = r_edi;
    /* 00536ceb: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x536cf1u); call_ind(t); }
    /* 00536cf1: mov eax, dword ptr [edi + 0x3d8] */ r_eax = R32((u32)(r_edi+0x3d8u));
    /* 00536cf7: add eax, dword ptr [edi + 0x3d4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x3d4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00536cfd: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00536d00: mov dword ptr [edi + 0x3d8], eax */ W32((u32)(r_edi+0x3d8u), r_eax);
L_00536d06:; BB(0x00536d06);
    /* 00536d06: mov ecx, edi */ r_ecx = r_edi;
    /* 00536d08: call 0x536d20 */ r_esp -= 4; W32(r_esp, 0x536d0du); f_00536d20();
    /* 00536d0d: mov ecx, edi */ r_ecx = r_edi;
    /* 00536d0f: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x536d14u); f_006401f0();
    /* 00536d14: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00536d16: mov ecx, edi */ r_ecx = r_edi;
    /* 00536d18: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x536d1eu); call_ind(t); }
    /* 00536d1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00536d1f: ret  */ FN_RET(0x00536cc0); r_esp += 4; return;
}

void f_00536d20(void) /* sub_536D20 */
{
    FN_ENTER(0x00536d20);
    /* 00536d20: fld dword ptr [0x922f38] */ FPUSH(R_F32((u32)(0x922f38u)));
    /* 00536d26: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00536d29: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00536d2c: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00536d2f: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 00536d35: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 00536d38: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00536d3e: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 00536d44: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00536d47: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00536d4a: ret  */ FN_RET(0x00536d20); r_esp += 4; return;
}

void f_00536d4c(void) /* sub_536D4C */
{
    FN_ENTER(0x00536d4c);
    /* 00536d4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00536d4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00536d4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00536d4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00536d50: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00536d53: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00536d55: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x536d5au); f_004f7c84();
    /* 00536d5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536d5c: je 0x536d70 */ if (fZ) goto L_00536d70;
L_00536d5e:; BB(0x00536d5e);
    /* 00536d5e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00536d60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536d62: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x536d68u); call_ind(t); }
    /* 00536d68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00536d6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00536d6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00536d6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00536d6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00536d6f: ret  */ FN_RET(0x00536d4c); r_esp += 4; return;
L_00536d70:; BB(0x00536d70);
    /* 00536d70: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 00536d76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00536d78: jne 0x537021 */ if (!fZ) goto L_00537021;
L_00536d7e:; BB(0x00536d7e);
    /* 00536d7e: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x536d83u); f_00694cc8();
    /* 00536d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536d85: je 0x536daa */ if (fZ) goto L_00536daa;
L_00536d87:; BB(0x00536d87);
    /* 00536d87: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536d8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536d8e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00536d90: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 00536d96: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00536d9c: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x536d9fu); call_ind(t); }
    /* 00536d9f: mov edi, eax */ r_edi = r_eax;
    /* 00536da1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536da3: jne 0x536dc8 */ if (!fZ) goto L_00536dc8;
L_00536da5:; BB(0x00536da5);
    /* 00536da5: jmp 0x537021 */ goto L_00537021;
L_00536daa:; BB(0x00536daa);
    /* 00536daa: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536daf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536db1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00536db3: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536db8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x536dbbu); call_ind(t); }
    /* 00536dbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536dbd: je 0x537021 */ if (fZ) goto L_00537021;
L_00536dc3:; BB(0x00536dc3);
    /* 00536dc3: mov edi, 1 */ r_edi = 0x1u;
L_00536dc8:; BB(0x00536dc8);
    /* 00536dc8: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00536dcf: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536dd2: je 0x536df8 */ if (fZ) goto L_00536df8;
L_00536dd4:; BB(0x00536dd4);
    /* 00536dd4: mov dword ptr [esp], 0x40000000 */ W32((u32)(r_esp), 0x40000000u);
    /* 00536ddb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00536dde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536de0: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00536de8: mov dword ptr [esp + 8], 0x40000000 */ W32((u32)(r_esp+0x8u), 0x40000000u);
    /* 00536df0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00536df2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536df3: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x536df8u); f_00520cf8();
L_00536df8:; BB(0x00536df8);
    /* 00536df8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536dfa: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x536dffu); f_00520608();
    /* 00536dff: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00536e05: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00536e0b: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x536e10u); f_00520d08();
    /* 00536e10: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00536e16: and edx, 0xfffff7ef */ {  u32 a = r_edx; u32 b = 0xfffff7efu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00536e1c: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00536e22: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x536e27u); f_00578b38();
    /* 00536e27: mov edx, dword ptr [ebx + 0x420] */ r_edx = R32((u32)(r_ebx+0x420u));
    /* 00536e2d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00536e30: je 0x536e4e */ if (fZ) goto L_00536e4e;
L_00536e32:; BB(0x00536e32);
    /* 00536e32: mov edx, dword ptr [0xa73538] */ r_edx = R32((u32)(0xa73538u));
    /* 00536e38: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00536e3b: mov ebp, dword ptr [0xa7353c] */ r_ebp = R32((u32)(0xa7353cu));
    /* 00536e41: or dword ptr [ebp], 8 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00536e45: mov esi, dword ptr [0xa73540] */ r_esi = R32((u32)(0xa73540u));
    /* 00536e4b: or dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00536e4e:; BB(0x00536e4e);
    /* 00536e4e: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 00536e54: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00536e57: je 0x536e75 */ if (fZ) goto L_00536e75;
L_00536e59:; BB(0x00536e59);
    /* 00536e59: mov edx, dword ptr [0xa7356c] */ r_edx = R32((u32)(0xa7356cu));
    /* 00536e5f: or dword ptr [edx], 8 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00536e62: mov ebp, dword ptr [0xa73570] */ r_ebp = R32((u32)(0xa73570u));
    /* 00536e68: or dword ptr [ebp], 8 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00536e6c: mov esi, dword ptr [0xa73574] */ r_esi = R32((u32)(0xa73574u));
    /* 00536e72: or dword ptr [esi], 8 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00536e75:; BB(0x00536e75);
    /* 00536e75: mov ebp, dword ptr [0xa735dc] */ r_ebp = R32((u32)(0xa735dcu));
    /* 00536e7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00536e7d: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 00536e83: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00536e86: mov esi, dword ptr [ebx + 0x3d0] */ r_esi = R32((u32)(r_ebx+0x3d0u));
    /* 00536e8c: mov edx, dword ptr [0xa735d8] */ r_edx = R32((u32)(0xa735d8u));
    /* 00536e92: mov word ptr [edx], si */ W16((u32)(r_edx), (u16)r_esi);
    /* 00536e95: mov ebp, dword ptr [0xa735d8] */ r_ebp = R32((u32)(0xa735d8u));
    /* 00536e9b: movzx edx, word ptr [ebx + 0x3d2] */ r_edx = (u32)R16((u32)(r_ebx+0x3d2u));
    /* 00536ea2: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00536ea6: movsx edx, word ptr [ebx + 0x3d8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x3d8u));
    /* 00536ead: mov ecx, dword ptr [0xa735d4] */ r_ecx = R32((u32)(0xa735d4u));
    /* 00536eb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536eb4: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x536eb9u); f_0052ddac();
    /* 00536eb9: lea esi, [ebx + 0x450] */ r_esi = (u32)(r_ebx+0x450u);
    /* 00536ebf: mov ecx, esi */ r_ecx = r_esi;
    /* 00536ec1: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x536ec6u); f_005771a4();
    /* 00536ec6: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00536ecc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00536ecd: mov ecx, esi */ r_ecx = r_esi;
    /* 00536ecf: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x536ed4u); f_0057725c();
    /* 00536ed4: mov ebp, eax */ r_ebp = r_eax;
    /* 00536ed6: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00536ed9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x536edeu); f_00829cc8();
    /* 00536ede: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x536ee3u); f_0082d7b0();
    /* 00536ee3: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00536ee6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x536eebu); f_0082d838();
    /* 00536eeb: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00536eee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536ef0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x536ef5u); f_0082d8bc();
    /* 00536ef5: movsx edx, word ptr [ebx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00536efc: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536eff: je 0x53706e */ if (fZ) goto L_0053706e;
L_00536f05:; BB(0x00536f05);
    /* 00536f05: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00536f07: mov dword ptr [0xa735f8], edx */ W32((u32)(0xa735f8u), r_edx);
    /* 00536f0d: mov dword ptr [0xa735f4], edx */ W32((u32)(0xa735f4u), r_edx);
    /* 00536f13: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 00536f19: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00536f1c: jne 0x536f67 */ if (!fZ) goto L_00536f67;
L_00536f1e:; BB(0x00536f1e);
    /* 00536f1e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f20: jne 0x536f37 */ if (!fZ) goto L_00536f37;
L_00536f22:; BB(0x00536f22);
    /* 00536f22: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f25: je 0x537062 */ if (fZ) goto L_00537062;
L_00536f2b:; BB(0x00536f2b);
    /* 00536f2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536f2d: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x536f32u); f_007aa7b8();
    /* 00536f32: jmp 0x536fb5 */ goto L_00536fb5;
L_00536f37:; BB(0x00536f37);
    /* 00536f37: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 00536f3d: mov ecx, esi */ r_ecx = r_esi;
    /* 00536f3f: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x536f42u); call_ind(t); }
    /* 00536f42: mov ecx, 0x536988 */ r_ecx = 0x536988u;
    /* 00536f47: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x536f4cu); f_0082fac4();
    /* 00536f4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536f4e: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x536f53u); f_007aa668();
    /* 00536f53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536f55: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x536f5au); f_0082fac4();
    /* 00536f5a: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 00536f60: mov ecx, esi */ r_ecx = r_esi;
    /* 00536f62: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x536f65u); call_ind(t); }
    /* 00536f65: jmp 0x536fb5 */ goto L_00536fb5;
L_00536f67:; BB(0x00536f67);
    /* 00536f67: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00536f6d: lea ebp, [ebx + 0x3e0] */ r_ebp = (u32)(r_ebx+0x3e0u);
    /* 00536f73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00536f75: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x536f78u); call_ind(t); }
    /* 00536f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f7a: je 0x536fb5 */ if (fZ) goto L_00536fb5;
L_00536f7c:; BB(0x00536f7c);
    /* 00536f7c: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00536f82: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00536f84: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x536f87u); call_ind(t); }
    /* 00536f87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536f89: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x536f8eu); f_008173d0();
    /* 00536f8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536f90: jne 0x536faa */ if (!fZ) goto L_00536faa;
L_00536f92:; BB(0x00536f92);
    /* 00536f92: mov ecx, 0x536988 */ r_ecx = 0x536988u;
    /* 00536f97: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x536f9cu); f_0082fac4();
    /* 00536f9c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536f9e: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x536fa3u); f_007aa668();
    /* 00536fa3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00536fa5: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x536faau); f_0082fac4();
L_00536faa:; BB(0x00536faa);
    /* 00536faa: mov eax, dword ptr [ebx + 0x3e0] */ r_eax = R32((u32)(r_ebx+0x3e0u));
    /* 00536fb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00536fb2: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x536fb5u); call_ind(t); }
L_00536fb5:; BB(0x00536fb5);
    /* 00536fb5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x536fbau); f_0082da80();
    /* 00536fba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00536fbc: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x536fc1u); f_00520610();
    /* 00536fc1: mov eax, dword ptr [ebx + 0x420] */ r_eax = R32((u32)(r_ebx+0x420u));
    /* 00536fc7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00536fc9: je 0x536fe6 */ if (fZ) goto L_00536fe6;
L_00536fcb:; BB(0x00536fcb);
    /* 00536fcb: mov eax, dword ptr [0xa73538] */ r_eax = R32((u32)(0xa73538u));
    /* 00536fd0: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00536fd3: mov edx, dword ptr [0xa7353c] */ r_edx = R32((u32)(0xa7353cu));
    /* 00536fd9: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00536fdc: mov ebp, dword ptr [0xa73540] */ r_ebp = R32((u32)(0xa73540u));
    /* 00536fe2: and dword ptr [ebp], 0xfffffff7 */ { u32 ad = (u32)(r_ebp);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00536fe6:; BB(0x00536fe6);
    /* 00536fe6: mov eax, dword ptr [ebx + 0x424] */ r_eax = R32((u32)(r_ebx+0x424u));
    /* 00536fec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00536fee: je 0x53700a */ if (fZ) goto L_0053700a;
L_00536ff0:; BB(0x00536ff0);
    /* 00536ff0: mov eax, dword ptr [0xa7356c] */ r_eax = R32((u32)(0xa7356cu));
    /* 00536ff5: and dword ptr [eax], 0xfffffff7 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00536ff8: mov edx, dword ptr [0xa73570] */ r_edx = R32((u32)(0xa73570u));
    /* 00536ffe: and dword ptr [edx], 0xfffffff7 */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00537001: mov ecx, dword ptr [0xa73574] */ r_ecx = R32((u32)(0xa73574u));
    /* 00537007: and dword ptr [ecx], 0xfffffff7 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0053700a:; BB(0x0053700a);
    /* 0053700a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x53700fu); f_0082dab0();
    /* 0053700f: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00537014: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00537019: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053701c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053701d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053701e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053701f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537020: ret  */ FN_RET(0x00536d4c); r_esp += 4; return;
L_00537021:; BB(0x00537021);
    /* 00537021: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00537028: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053702b: jne 0x53705a */ if (!fZ) goto L_0053705a;
L_0053702d:; BB(0x0053702d);
    /* 0053702d: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00537030: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00537033: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 00537036: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
    /* 0053703c: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 00537042: mov dword ptr [ebx + 0x430], ebp */ W32((u32)(r_ebx+0x430u), r_ebp);
    /* 00537048: mov dword ptr [ebx + 0x434], eax */ W32((u32)(r_ebx+0x434u), r_eax);
    /* 0053704e: mov dword ptr [ebx + 0x438], edx */ W32((u32)(r_ebx+0x438u), r_edx);
    /* 00537054: mov dword ptr [ebx + 0x43c], ebp */ W32((u32)(r_ebx+0x43cu), r_ebp);
L_0053705a:; BB(0x0053705a);
    /* 0053705a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053705d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053705e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053705f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00537060: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00537061: ret  */ FN_RET(0x00536d4c); r_esp += 4; return;
L_00537062:; BB(0x00537062);
    /* 00537062: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537064: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x537069u); f_007aa668();
    /* 00537069: jmp 0x536fb5 */ goto L_00536fb5;
L_0053706e:; BB(0x0053706e);
    /* 0053706e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00537070: mov dword ptr [0xa735f8], edx */ W32((u32)(0xa735f8u), r_edx);
    /* 00537076: mov dword ptr [0xa735f4], edx */ W32((u32)(0xa735f4u), r_edx);
    /* 0053707c: lea edx, [ebx + 0x428] */ r_edx = (u32)(r_ebx+0x428u);
    /* 00537082: mov dword ptr [0xa735f0], edx */ W32((u32)(0xa735f0u), r_edx);
    /* 00537088: mov edx, dword ptr [ebx + 0x420] */ r_edx = R32((u32)(r_ebx+0x420u));
    /* 0053708e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00537091: mov dword ptr [ebx + 0x428], 0x41700000 */ W32((u32)(r_ebx+0x428u), 0x41700000u);
    /* 0053709b: mov dword ptr [ebx + 0x42c], 0 */ W32((u32)(r_ebx+0x42cu), 0x0u);
    /* 005370a5: mov dword ptr [ebx + 0x430], 0x41200000 */ W32((u32)(r_ebx+0x430u), 0x41200000u);
    /* 005370af: mov dword ptr [ebx + 0x434], 0x41700000 */ W32((u32)(r_ebx+0x434u), 0x41700000u);
    /* 005370b9: mov dword ptr [ebx + 0x438], 0 */ W32((u32)(r_ebx+0x438u), 0x0u);
    /* 005370c3: mov dword ptr [ebx + 0x43c], 0xc1200000 */ W32((u32)(r_ebx+0x43cu), 0xc1200000u);
    /* 005370cd: je 0x5370db */ if (fZ) goto L_005370db;
L_005370cf:; BB(0x005370cf);
    /* 005370cf: mov dword ptr [0xa735ec], 1 */ W32((u32)(0xa735ecu), 0x1u);
    /* 005370d9: jmp 0x5370e5 */ goto L_005370e5;
L_005370db:; BB(0x005370db);
    /* 005370db: mov dword ptr [0xa735ec], 0 */ W32((u32)(0xa735ecu), 0x0u);
L_005370e5:; BB(0x005370e5);
    /* 005370e5: mov edx, dword ptr [ebx + 0x424] */ r_edx = R32((u32)(r_ebx+0x424u));
    /* 005370eb: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005370ee: je 0x5370f7 */ if (fZ) goto L_005370f7;
L_005370f0:; BB(0x005370f0);
    /* 005370f0: mov eax, 1 */ r_eax = 0x1u;
    /* 005370f5: jmp 0x5370f9 */ goto L_005370f9;
L_005370f7:; BB(0x005370f7);
    /* 005370f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005370f9:; BB(0x005370f9);
    /* 005370f9: lea edx, [ebx + 0x404] */ r_edx = (u32)(r_ebx+0x404u);
    /* 005370ff: mov dword ptr [0xa735e4], edx */ W32((u32)(0xa735e4u), r_edx);
    /* 00537105: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537107: je 0x537153 */ if (fZ) goto L_00537153;
L_00537109:; BB(0x00537109);
    /* 00537109: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053710b: mov dword ptr [0xa735e8], eax */ W32((u32)(0xa735e8u), r_eax);
    /* 00537110: mov ecx, esi */ r_ecx = r_esi;
    /* 00537112: mov dword ptr [0xa735ec], eax */ W32((u32)(0xa735ecu), r_eax);
    /* 00537117: mov edx, dword ptr [ebx + 0x450] */ r_edx = R32((u32)(r_ebx+0x450u));
    /* 0053711d: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x537120u); call_ind(t); }
    /* 00537120: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537122: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x537127u); f_008173d0();
    /* 00537127: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537129: jne 0x537143 */ if (!fZ) goto L_00537143;
L_0053712b:; BB(0x0053712b);
    /* 0053712b: mov ecx, 0x5368a0 */ r_ecx = 0x5368a0u;
    /* 00537130: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x537135u); f_0082fac4();
    /* 00537135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537137: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x53713cu); f_007aa668();
    /* 0053713c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053713e: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x537143u); f_0082fac4();
L_00537143:; BB(0x00537143);
    /* 00537143: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 00537149: mov ecx, esi */ r_ecx = r_esi;
    /* 0053714b: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x53714eu); call_ind(t); }
    /* 0053714e: jmp 0x536fb5 */ goto L_00536fb5;
L_00537153:; BB(0x00537153);
    /* 00537153: mov dword ptr [0xa735e8], eax */ W32((u32)(0xa735e8u), r_eax);
    /* 00537158: mov ecx, 0x5368a0 */ r_ecx = 0x5368a0u;
    /* 0053715d: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x537162u); f_0082fac4();
    /* 00537162: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00537165: je 0x53717a */ if (fZ) goto L_0053717a;
L_00537167:; BB(0x00537167);
    /* 00537167: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00537169: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x53716eu); f_007aa7b8();
L_0053716e:; BB(0x0053716e);
    /* 0053716e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00537170: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x537175u); f_0082fac4();
    /* 00537175: jmp 0x536fb5 */ goto L_00536fb5;
L_0053717a:; BB(0x0053717a);
    /* 0053717a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053717c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x537181u); f_007aa668();
    /* 00537181: jmp 0x53716e */ goto L_0053716e;
}

