#include "protos.h"

void f_00629050(void) /* sub_629050 */
{
    FN_ENTER(0x00629050);
    /* 00629050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629051: mov ebp, esp */ r_ebp = r_esp;
    /* 00629053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629055: push 0x8e2e82 */ { u32 v = 0x8e2e82u; r_esp -= 4; W32(r_esp, v); }
    /* 0062905a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629068: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062906b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062906e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00629071: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00629074: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00629077: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062907a: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x62907fu); f_004f7c84();
    /* 0062907f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629082: je 0x629358 */ if (fZ) goto L_00629358;
L_00629088:; BB(0x00629088);
    /* 00629088: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062908b: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 00629091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629093: je 0x62931b */ if (fZ) goto L_0062931b;
L_00629099:; BB(0x00629099);
    /* 00629099: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062909c: je 0x6292b2 */ if (fZ) goto L_006292b2;
L_006290a2:; BB(0x006290a2);
    /* 006290a2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006290a5: jne 0x62922e */ if (!fZ) goto L_0062922e;
L_006290ab:; BB(0x006290ab);
    /* 006290ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006290ae: movzx edx, word ptr [eax + 0x94] */ r_edx = (u32)R16((u32)(r_eax+0x94u));
    /* 006290b5: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006290bb: je 0x6290da */ if (fZ) goto L_006290da;
L_006290bd:; BB(0x006290bd);
    /* 006290bd: mov edx, eax */ r_edx = r_eax;
    /* 006290bf: mov dword ptr [edx + 0xac], 1 */ W32((u32)(r_edx+0xacu), 0x1u);
    /* 006290c9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006290ce: mov word ptr [edx + 0x94], ax */ W16((u32)(r_edx+0x94u), (u16)r_eax);
    /* 006290d5: jmp 0x6292c0 */ goto L_006292c0;
L_006290da:; BB(0x006290da);
    /* 006290da: mov dword ptr [eax + 0xac], 3 */ W32((u32)(r_eax+0xacu), 0x3u);
    /* 006290e4: call 0x4d83f4 */ r_esp -= 4; W32(r_esp, 0x6290e9u); f_004d83f4();
    /* 006290e9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006290ec: mov eax, dword ptr [eax + 0xd4] */ r_eax = R32((u32)(r_eax+0xd4u));
    /* 006290f2: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006290f5: jl 0x629198 */ if ((fS!=fO)) goto L_00629198;
L_006290fb:; BB(0x006290fb);
    /* 006290fb: cmp eax, 0x3e8 */ {  u32 a = r_eax; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629100: jge 0x629198 */ if ((fS==fO)) goto L_00629198;
L_00629106:; BB(0x00629106);
    /* 00629106: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 0062910c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062910e: je 0x629198 */ if (fZ) goto L_00629198;
L_00629114:; BB(0x00629114);
    /* 00629114: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x629119u); f_008173b4();
    /* 00629119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062911b: je 0x629198 */ if (fZ) goto L_00629198;
L_0062911d:; BB(0x0062911d);
    /* 0062911d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00629124: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 00629129: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62912eu); f_005caba4();
    /* 0062912e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00629131: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629134: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00629137: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629139: je 0x629307 */ if (fZ) goto L_00629307;
L_0062913f:; BB(0x0062913f);
    /* 0062913f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00629146: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062914d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00629150: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629156: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629159: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062915f: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x629164u); f_006bc800();
    /* 00629164: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0062916b:; BB(0x0062916b);
    /* 0062916b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062916e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629171: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00629177: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062917e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629180: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_00629186:; BB(0x00629186);
    /* 00629186: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062918c: mov ecx, eax */ r_ecx = r_eax;
    /* 0062918e: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x629193u); f_008172d4();
    /* 00629193: jmp 0x6292c0 */ goto L_006292c0;
L_00629198:; BB(0x00629198);
    /* 00629198: mov ecx, dword ptr [0xa95aa4] */ r_ecx = R32((u32)(0xa95aa4u));
    /* 0062919e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006291a0: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_006291a6:; BB(0x006291a6);
    /* 006291a6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6291abu); f_008173b4();
    /* 006291ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006291ad: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_006291b3:; BB(0x006291b3);
    /* 006291b3: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006291ba: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006291bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6291c4u); f_005caba4();
    /* 006291c4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006291c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006291ca: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006291cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006291cf: je 0x629311 */ if (fZ) goto L_00629311;
L_006291d5:; BB(0x006291d5);
    /* 006291d5: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006291dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006291e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006291e6: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006291ec: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006291ef: push dword ptr [0xa95aa4] */ { u32 v = R32((u32)(0xa95aa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006291f5: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6291fau); f_006bc800();
    /* 006291fa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00629201:; BB(0x00629201);
    /* 00629201: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00629204: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629207: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 0062920d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00629214: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629216: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_0062921c:; BB(0x0062921c);
    /* 0062921c: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629222: mov ecx, eax */ r_ecx = r_eax;
    /* 00629224: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x629229u); f_008172d4();
    /* 00629229: jmp 0x6292c0 */ goto L_006292c0;
L_0062922e:; BB(0x0062922e);
    /* 0062922e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629231: jne 0x6292c0 */ if (!fZ) goto L_006292c0;
L_00629237:; BB(0x00629237);
    /* 00629237: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062923a: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
    /* 00629240: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629242: je 0x6292ac */ if (fZ) goto L_006292ac;
L_00629244:; BB(0x00629244);
    /* 00629244: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x629249u); f_008173b4();
    /* 00629249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062924b: jne 0x6292a3 */ if (!fZ) goto L_006292a3;
L_0062924d:; BB(0x0062924d);
    /* 0062924d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629250: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629252: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 00629258: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 0062925e: call 0x4d7e4c */ r_esp -= 4; W32(r_esp, 0x629263u); f_004d7e4c();
    /* 00629263: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 00629269: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062926c: movzx edx, word ptr [eax + 0x94] */ r_edx = (u32)R16((u32)(r_eax+0x94u));
    /* 00629273: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629275: jne 0x6292c0 */ if (!fZ) goto L_006292c0;
L_00629277:; BB(0x00629277);
    /* 00629277: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629278: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62927du); f_0068d5a8();
    /* 0062927d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062927e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629280: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_00629282:; BB(0x00629282);
    /* 00629282: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00629288: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0062928b: je 0x629294 */ if (fZ) goto L_00629294;
L_0062928d:; BB(0x0062928d);
    /* 0062928d: mov edx, 1 */ r_edx = 0x1u;
    /* 00629292: jmp 0x629296 */ goto L_00629296;
L_00629294:; BB(0x00629294);
    /* 00629294: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00629296:; BB(0x00629296);
    /* 00629296: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629298: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_0062929a:; BB(0x0062929a);
    /* 0062929a: mov ecx, eax */ r_ecx = r_eax;
    /* 0062929c: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x6292a1u); f_00685514();
    /* 006292a1: jmp 0x6292c0 */ goto L_006292c0;
L_006292a3:; BB(0x006292a3);
    /* 006292a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006292a6: mov ecx, dword ptr [eax + 0xdc] */ r_ecx = R32((u32)(r_eax+0xdcu));
L_006292ac:; BB(0x006292ac);
    /* 006292ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006292ae: je 0x62924d */ if (fZ) goto L_0062924d;
L_006292b0:; BB(0x006292b0);
    /* 006292b0: jmp 0x6292c0 */ goto L_006292c0;
L_006292b2:; BB(0x006292b2);
    /* 006292b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006292b5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006292b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006292b8: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x6292bdu); f_006946a8();
    /* 006292bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006292c0:; BB(0x006292c0);
    /* 006292c0: fld dword ptr [0x9320d8] */ FPUSH(R_F32((u32)(0x9320d8u)));
    /* 006292c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006292c9: fadd dword ptr [edx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xb0u));
    /* 006292cf: fld dword ptr [edx + 0xb4] */ FPUSH(R_F32((u32)(r_edx+0xb4u)));
    /* 006292d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006292d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006292d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006292da: jae 0x6292e8 */ if (!fC) goto L_006292e8;
L_006292dc:; BB(0x006292dc);
    /* 006292dc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006292de: mov eax, edx */ r_eax = r_edx;
    /* 006292e0: fstp dword ptr [eax + 0xb0] */ W_F32((u32)(r_eax+0xb0u), ST(0)); FPOP();
    /* 006292e6: jmp 0x6292f2 */ goto L_006292f2;
L_006292e8:; BB(0x006292e8);
    /* 006292e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006292ea: mov eax, edx */ r_eax = r_edx;
    /* 006292ec: fstp dword ptr [eax + 0xb0] */ W_F32((u32)(r_eax+0xb0u), ST(0)); FPOP();
L_006292f2:; BB(0x006292f2);
    /* 006292f2: mov ecx, eax */ r_ecx = r_eax;
    /* 006292f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006292f6: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x6292f9u); call_ind(t); }
    /* 006292f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006292fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629303: mov esp, ebp */ r_esp = r_ebp;
    /* 00629305: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629306: ret  */ FN_RET(0x00629050); r_esp += 4; return;
L_00629307:; BB(0x00629307);
    /* 00629307: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629309: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062930c: jmp 0x62916b */ goto L_0062916b;
L_00629311:; BB(0x00629311);
    /* 00629311: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629313: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00629316: jmp 0x629201 */ goto L_00629201;
L_0062931b:; BB(0x0062931b);
    /* 0062931b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062931e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00629320: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x629323u); call_ind(t); }
    /* 00629323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629325: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_00629327:; BB(0x00629327);
    /* 00629327: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062932c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062932f: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x629334u); f_006134c8();
    /* 00629334: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629336: je 0x6292c0 */ if (fZ) goto L_006292c0;
L_00629338:; BB(0x00629338);
    /* 00629338: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062933b: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 00629341: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00629343: jle 0x6292c0 */ if ((fZ||fS!=fO)) goto L_006292c0;
L_00629349:; BB(0x00629349);
    /* 00629349: mov dword ptr [eax + 0xac], 1 */ W32((u32)(r_eax+0xacu), 0x1u);
    /* 00629353: jmp 0x6292c0 */ goto L_006292c0;
L_00629358:; BB(0x00629358);
    /* 00629358: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062935b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062935d: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x629360u); call_ind(t); }
    /* 00629360: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629363: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062936a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062936c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062936d: ret  */ FN_RET(0x00629050); r_esp += 4; return;
}

void f_006292c0(void)
{
    FN_ENTER(0x006292c0);
    /* 006292c0: fld dword ptr [0x9320d8] */ FPUSH(R_F32((u32)(0x9320d8u)));
    /* 006292c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006292c9: fadd dword ptr [edx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xb0u));
    /* 006292cf: fld dword ptr [edx + 0xb4] */ FPUSH(R_F32((u32)(r_edx+0xb4u)));
    /* 006292d5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006292d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006292d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006292da: jae 0x6292e8 */ if (!fC) goto L_006292e8;
L_006292dc:; BB(0x006292dc);
    /* 006292dc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006292de: mov eax, edx */ r_eax = r_edx;
    /* 006292e0: fstp dword ptr [eax + 0xb0] */ W_F32((u32)(r_eax+0xb0u), ST(0)); FPOP();
    /* 006292e6: jmp 0x6292f2 */ goto L_006292f2;
L_006292e8:; BB(0x006292e8);
    /* 006292e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006292ea: mov eax, edx */ r_eax = r_edx;
    /* 006292ec: fstp dword ptr [eax + 0xb0] */ W_F32((u32)(r_eax+0xb0u), ST(0)); FPOP();
L_006292f2:; BB(0x006292f2);
    /* 006292f2: mov ecx, eax */ r_ecx = r_eax;
    /* 006292f4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006292f6: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x6292f9u); call_ind(t); }
    /* 006292f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006292fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629303: mov esp, ebp */ r_esp = r_ebp;
    /* 00629305: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629306: ret  */ FN_RET(0x006292c0); r_esp += 4; return;
}

void f_00629370(void) /* sub_629370 */
{
    FN_ENTER(0x00629370);
    /* 00629370: mov dword ptr [0xa8edc4], 0x3f800000 */ W32((u32)(0xa8edc4u), 0x3f800000u);
    /* 0062937a: mov dword ptr [0xa8edc8], 0x41000000 */ W32((u32)(0xa8edc8u), 0x41000000u);
    /* 00629384: mov dword ptr [0xa8edcc], 0x3fc00000 */ W32((u32)(0xa8edccu), 0x3fc00000u);
    /* 0062938e: ret  */ FN_RET(0x00629370); r_esp += 4; return;
}

void f_00629390(void) /* sub_629390 */
{
    FN_ENTER(0x00629390);
    /* 00629390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629391: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00629393: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629395: call 0x6293b4 */ r_esp -= 4; W32(r_esp, 0x62939au); f_006293b4();
    /* 0062939a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062939e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006293a0: jne 0x6293a6 */ if (!fZ) goto L_006293a6;
L_006293a2:; BB(0x006293a2);
    /* 006293a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006293a3: ret 4 */ FN_RET(0x00629390); r_esp += 8; return;
L_006293a6:; BB(0x006293a6);
    /* 006293a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006293a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6293acu); f_005c2f74();
    /* 006293ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006293ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006293ae: ret 4 */ FN_RET(0x00629390); r_esp += 8; return;
}

void f_006293b4(void) /* sub_6293B4 */
{
    FN_ENTER(0x006293b4);
    /* 006293b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006293b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006293b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006293b9: push 0x8e2e9c */ { u32 v = 0x8e2e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006293be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006293c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006293c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006293cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006293cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006293d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006293d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006293d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006293db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006293de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006293e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006293e8: mov dword ptr [eax], 0xb295c0 */ W32((u32)(r_eax), 0xb295c0u);
    /* 006293ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006293ef: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6293f4u); f_007b4e84();
    /* 006293f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006293f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006293f8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6293fdu); f_007b9c8c();
    /* 006293fd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00629404: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629407: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x62940cu); f_007b4aec();
    /* 0062940c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062940f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629416: mov esp, ebp */ r_esp = r_ebp;
    /* 00629418: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629419: ret  */ FN_RET(0x006293b4); r_esp += 4; return;
}

void f_0062941c(void) /* sub_62941C */
{
    FN_ENTER(0x0062941c);
    /* 0062941c: mov ecx, dword ptr [0xa8edd4] */ r_ecx = R32((u32)(0xa8edd4u));
    /* 00629422: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629424: je 0x629439 */ if (fZ) goto L_00629439;
L_00629426:; BB(0x00629426);
    /* 00629426: je 0x62942f */ if (fZ) goto L_0062942f;
L_00629428:; BB(0x00629428);
    /* 00629428: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062942a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x62942fu); f_004066a8();
L_0062942f:; BB(0x0062942f);
    /* 0062942f: mov dword ptr [0xa8edd4], 0 */ W32((u32)(0xa8edd4u), 0x0u);
L_00629439:; BB(0x00629439);
    /* 00629439: ret  */ FN_RET(0x0062941c); r_esp += 4; return;
}

void f_0062943c(void) /* sub_62943C */
{
    FN_ENTER(0x0062943c);
    /* 0062943c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062943d: mov edi, ecx */ r_edi = r_ecx;
    /* 0062943f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00629441: mov ecx, edi */ r_ecx = r_edi;
    /* 00629443: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00629448: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062944d: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x629450u); call_ind(t); }
    /* 00629450: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629453: je 0x629457 */ if (fZ) goto L_00629457;
L_00629455:; BB(0x00629455);
    /* 00629455: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629456: ret  */ FN_RET(0x0062943c); r_esp += 4; return;
L_00629457:; BB(0x00629457);
    /* 00629457: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0062945a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x62945fu); f_00829cc8();
    /* 0062945f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x629464u); f_0082d7b0();
    /* 00629464: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00629467: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x62946cu); f_0082d838();
    /* 0062946c: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062946f: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629472: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 00629475: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629477: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x62947cu); f_0083a314();
    /* 0062947c: mov ecx, dword ptr [edi + 0xac] */ r_ecx = R32((u32)(r_edi+0xacu));
    /* 00629482: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x629487u); f_00831758();
    /* 00629487: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62948cu); f_0082da80();
    /* 0062948c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062948d: ret  */ FN_RET(0x0062943c); r_esp += 4; return;
}

void f_00629490(void) /* sub_629490 */
{
    FN_ENTER(0x00629490);
    /* 00629490: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629491: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629492: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00629494: mov ecx, dword ptr [ebp + 0x84] */ r_ecx = R32((u32)(r_ebp+0x84u));
    /* 0062949a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062949c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062949e: mov eax, 2 */ r_eax = 0x2u;
    /* 006294a3: jg 0x6294a7 */ if ((!fZ&&fS==fO)) goto L_006294a7;
L_006294a5:; BB(0x006294a5);
    /* 006294a5: mov ecx, edx */ r_ecx = r_edx;
L_006294a7:; BB(0x006294a7);
    /* 006294a7: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006294aa: jle 0x6294ae */ if ((fZ||fS!=fO)) goto L_006294ae;
L_006294ac:; BB(0x006294ac);
    /* 006294ac: mov ecx, eax */ r_ecx = r_eax;
L_006294ae:; BB(0x006294ae);
    /* 006294ae: mov eax, dword ptr [ecx*4 + 0x9320e4] */ r_eax = R32((u32)(r_ecx*4+0x9320e4u));
    /* 006294b5: mov dword ptr [ebp + 0xb0], ecx */ W32((u32)(r_ebp+0xb0u), r_ecx);
    /* 006294bb: call 0x6294e8 */ r_esp -= 4; W32(r_esp, 0x6294c0u); f_006294e8();
    /* 006294c0: mov ecx, dword ptr [0xa8edd4] */ r_ecx = R32((u32)(0xa8edd4u));
    /* 006294c6: mov dword ptr [ebp + 0xac], eax */ W32((u32)(r_ebp+0xacu), r_eax);
    /* 006294cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006294ce: je 0x6294dd */ if (fZ) goto L_006294dd;
L_006294d0:; BB(0x006294d0);
    /* 006294d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006294d2: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6294d7u); f_005b8624();
L_006294d7:; BB(0x006294d7);
    /* 006294d7: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 006294da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006294db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006294dc: ret  */ FN_RET(0x00629490); r_esp += 4; return;
L_006294dd:; BB(0x006294dd);
    /* 006294dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006294df: jmp 0x6294d7 */ goto L_006294d7;
}

void f_006294e8(void) /* sub_6294E8 */
{
    FN_ENTER(0x006294e8);
    /* 006294e8: mov ecx, dword ptr [0xa8edd4] */ r_ecx = R32((u32)(0xa8edd4u));
    /* 006294ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006294f0: je 0x6294f9 */ if (fZ) goto L_006294f9;
L_006294f2:; BB(0x006294f2);
    /* 006294f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006294f3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6294f8u); f_005b8610();
    /* 006294f8: ret  */ FN_RET(0x006294e8); r_esp += 4; return;
L_006294f9:; BB(0x006294f9);
    /* 006294f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006294fb: ret  */ FN_RET(0x006294e8); r_esp += 4; return;
}

void f_006294fc(void)
{
    FN_ENTER(0x006294fc);
    /* 006294fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006294fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006294ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629501: push 0x8e2ec4 */ { u32 v = 0x8e2ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 00629506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062950c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062950d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629514: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062951a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062951d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00629520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00629523: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00629528: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0062952f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x629534u); f_005caba4();
    /* 00629534: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629535: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00629538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062953a: je 0x629573 */ if (fZ) goto L_00629573;
L_0062953c:; BB(0x0062953c);
    /* 0062953c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00629543: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062954a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062954d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629553: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629556: call 0x629578 */ r_esp -= 4; W32(r_esp, 0x62955bu); f_00629578();
    /* 0062955b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062955e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00629565:; BB(0x00629565);
    /* 00629565: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629568: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062956f: mov esp, ebp */ r_esp = r_ebp;
    /* 00629571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629572: ret  */ FN_RET(0x006294fc); r_esp += 4; return;
L_00629573:; BB(0x00629573);
    /* 00629573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629575: jmp 0x629565 */ goto L_00629565;
}

void f_00629578(void) /* sub_629578 */
{
    FN_ENTER(0x00629578);
    /* 00629578: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629579: mov ebp, esp */ r_ebp = r_esp;
    /* 0062957b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062957d: push 0x8e2ee0 */ { u32 v = 0x8e2ee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00629582: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629589: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629590: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629593: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00629596: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00629599: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062959c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062959f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006295a2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006295a5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006295a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006295ab: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6295b0u); f_007b4b48();
    /* 006295b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006295b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006295ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006295bd: mov dword ptr [ecx], 0xb295c0 */ W32((u32)(r_ecx), 0xb295c0u);
    /* 006295c3: mov eax, dword ptr [0x9c5da4] */ r_eax = R32((u32)(0x9c5da4u));
    /* 006295c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006295c9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006295cc: call dword ptr [0xb295d4] */ { u32 t = R32((u32)(0xb295d4u)); r_esp -= 4; W32(r_esp, 0x6295d2u); call_ind(t); }
    /* 006295d2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006295d5: call 0x629490 */ r_esp -= 4; W32(r_esp, 0x6295dau); f_00629490();
    /* 006295da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006295dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006295df: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 006295e5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006295e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006295ea: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006295ec: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006295ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006295f0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006295f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006295f4: lea ebx, [edx + edx + 0x9c5d00] */ r_ebx = (u32)(r_edx+r_edx+0x9c5d00u);
    /* 006295fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006295fc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x629601u); f_007b9a88();
    /* 00629601: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00629604: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x629609u); f_007b4f54();
    /* 00629609: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062960c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062960f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629612: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629619: mov esp, ebp */ r_esp = r_ebp;
    /* 0062961b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062961c: ret 8 */ FN_RET(0x00629578); r_esp += 12; return;
}

void f_00629620(void) /* sub_629620 */
{
    FN_ENTER(0x00629620);
    /* 00629620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629621: mov ebp, esp */ r_ebp = r_esp;
    /* 00629623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629625: push 0x8e2f08 */ { u32 v = 0x8e2f08u; r_esp -= 4; W32(r_esp, v); }
    /* 0062962a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629631: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629638: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062963b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062963e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00629641: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00629644: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00629647: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0062964c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00629653: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x629658u); f_008581c5();
    /* 00629658: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629659: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0062965c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062965e: je 0x62969f */ if (fZ) goto L_0062969f;
L_00629660:; BB(0x00629660);
    /* 00629660: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00629667: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062966e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629671: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629675: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629676: push 0x9c5d94 */ { u32 v = 0x9c5d94u; r_esp -= 4; W32(r_esp, v); }
    /* 0062967b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062967d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x629682u); f_005b7a84();
    /* 00629682: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629685: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0062968c:; BB(0x0062968c);
    /* 0062968c: mov dword ptr [0xa8edd4], eax */ W32((u32)(0xa8edd4u), r_eax);
    /* 00629691: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629694: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062969b: mov esp, ebp */ r_esp = r_ebp;
    /* 0062969d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062969e: ret  */ FN_RET(0x00629620); r_esp += 4; return;
L_0062969f:; BB(0x0062969f);
    /* 0062969f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006296a1: jmp 0x62968c */ goto L_0062968c;
}

void f_006296a4(void) /* sub_6296A4 */
{
    FN_ENTER(0x006296a4);
    /* 006296a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006296a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006296a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006296a9: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x6296aeu); f_006296c8();
    /* 006296ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006296b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006296b4: jne 0x6296ba */ if (!fZ) goto L_006296ba;
L_006296b6:; BB(0x006296b6);
    /* 006296b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006296b7: ret 4 */ FN_RET(0x006296a4); r_esp += 8; return;
L_006296ba:; BB(0x006296ba);
    /* 006296ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006296bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6296c0u); f_005c2f74();
    /* 006296c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006296c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006296c2: ret 4 */ FN_RET(0x006296a4); r_esp += 8; return;
}

void f_006296c8(void) /* sub_6296C8 */
{
    FN_ENTER(0x006296c8);
    /* 006296c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006296c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006296cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006296cd: push 0x8e2f24 */ { u32 v = 0x8e2f24u; r_esp -= 4; W32(r_esp, v); }
    /* 006296d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006296d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006296d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006296e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006296e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006296e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006296e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006296ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006296ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006296f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006296f5: mov dword ptr [ecx], 0xb29620 */ W32((u32)(r_ecx), 0xb29620u);
    /* 006296fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00629702: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x629707u); f_006131f4();
    /* 00629707: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062970a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629711: mov esp, ebp */ r_esp = r_ebp;
    /* 00629713: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629714: ret  */ FN_RET(0x006296c8); r_esp += 4; return;
}

void f_00629718(void) /* sub_629718 */
{
    FN_ENTER(0x00629718);
    /* 00629718: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629719: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062971b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0062971e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00629720: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629724: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x629727u); call_ind(t); }
    /* 00629727: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00629729: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x62972eu); f_0062974c();
    /* 0062972e: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00629731: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00629734: mov dword ptr [ebp + 0x20], 2 */ W32((u32)(r_ebp+0x20u), 0x2u);
    /* 0062973b: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 0062973e: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00629741: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00629744: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 00629747: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629748: ret 4 */ FN_RET(0x00629718); r_esp += 8; return;
}

void f_0062974c(void) /* sub_62974C */
{
    FN_ENTER(0x0062974c);
    /* 0062974c: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00629752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629754: jl 0x62976e */ if ((fS!=fO)) goto L_0062976e;
L_00629756:; BB(0x00629756);
    /* 00629756: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062975b: jg 0x62976e */ if ((!fZ&&fS==fO)) goto L_0062976e;
L_0062975d:; BB(0x0062975d);
    /* 0062975d: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 00629767: mov dword ptr [ecx + 0xc8], eax */ W32((u32)(r_ecx+0xc8u), r_eax);
    /* 0062976d: ret  */ FN_RET(0x0062974c); r_esp += 4; return;
L_0062976e:; BB(0x0062976e);
    /* 0062976e: mov dword ptr [ecx + 0xc8], 0xffffffff */ W32((u32)(r_ecx+0xc8u), 0xffffffffu);
    /* 00629778: mov dword ptr [ecx + 0xd0], 2 */ W32((u32)(r_ecx+0xd0u), 0x2u);
    /* 00629782: ret  */ FN_RET(0x0062974c); r_esp += 4; return;
}

void f_00629784(void) /* sub_629784 */
{
    FN_ENTER(0x00629784);
    /* 00629784: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629785: mov edi, ecx */ r_edi = r_ecx;
    /* 00629787: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0062978d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629790: je 0x6297c0 */ if (fZ) goto L_006297c0;
L_00629792:; BB(0x00629792);
    /* 00629792: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 00629799: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062979a: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x62979fu); f_00816eec();
    /* 0062979f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006297a0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006297a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297a5: jne 0x6297b1 */ if (!fZ) goto L_006297b1;
L_006297a7:; BB(0x006297a7);
    /* 006297a7: mov dword ptr [edi + 0xd4], 0 */ W32((u32)(r_edi+0xd4u), 0x0u);
L_006297b1:; BB(0x006297b1);
    /* 006297b1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006297b4: jne 0x6297c0 */ if (!fZ) goto L_006297c0;
L_006297b6:; BB(0x006297b6);
    /* 006297b6: mov dword ptr [edi + 0xd4], 1 */ W32((u32)(r_edi+0xd4u), 0x1u);
L_006297c0:; BB(0x006297c0);
    /* 006297c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006297c1: ret  */ FN_RET(0x00629784); r_esp += 4; return;
}

void f_006297c4(void) /* sub_6297C4 */
{
    FN_ENTER(0x006297c4);
    /* 006297c4: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 006297ca: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297cd: je 0x6297de */ if (fZ) goto L_006297de;
L_006297cf:; BB(0x006297cf);
    /* 006297cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297d1: jne 0x6297e1 */ if (!fZ) goto L_006297e1;
L_006297d3:; BB(0x006297d3);
    /* 006297d3: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 006297d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297dc: jne 0x6297e1 */ if (!fZ) goto L_006297e1;
L_006297de:; BB(0x006297de);
    /* 006297de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006297e0: ret  */ FN_RET(0x006297c4); r_esp += 4; return;
L_006297e1:; BB(0x006297e1);
    /* 006297e1: call 0x629cc8 */ r_esp -= 4; W32(r_esp, 0x6297e6u); f_00629cc8();
    /* 006297e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006297e8: je 0x6297de */ if (fZ) goto L_006297de;
L_006297ea:; BB(0x006297ea);
    /* 006297ea: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6297efu); f_00694c6c();
    /* 006297ef: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006297f5: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006297f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006297fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006297fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006297fe: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00629805: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x62980au); f_007c1160();
    /* 0062980a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062980c: je 0x6297de */ if (fZ) goto L_006297de;
L_0062980e:; BB(0x0062980e);
    /* 0062980e: mov eax, 1 */ r_eax = 0x1u;
    /* 00629813: ret  */ FN_RET(0x006297c4); r_esp += 4; return;
}

void f_00629814(void) /* sub_629814 */
{
    FN_ENTER(0x00629814);
    /* 00629814: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00629816: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x629819u); call_ind(t); }
    /* 00629819: ret  */ FN_RET(0x00629814); r_esp += 4; return;
}

void f_0062981c(void) /* sub_62981C */
{
    FN_ENTER(0x0062981c);
    /* 0062981c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062981e: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x629821u); call_ind(t); }
    /* 00629821: ret  */ FN_RET(0x0062981c); r_esp += 4; return;
}

void f_00629824(void) /* sub_629824 */
{
    FN_ENTER(0x00629824);
    /* 00629824: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 0062982a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062982c: jne 0x62984f */ if (!fZ) goto L_0062984f;
L_0062982e:; BB(0x0062982e);
    /* 0062982e: mov eax, dword ptr [ecx + 0xd4] */ r_eax = R32((u32)(r_ecx+0xd4u));
    /* 00629834: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629836: jne 0x62986a */ if (!fZ) goto L_0062986a;
L_00629838:; BB(0x00629838);
    /* 00629838: mov eax, dword ptr [ecx + 0xe4] */ r_eax = R32((u32)(r_ecx+0xe4u));
    /* 0062983e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629841: jne 0x62986a */ if (!fZ) goto L_0062986a;
L_00629843:; BB(0x00629843);
    /* 00629843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629845: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629846: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x62984bu); f_006946a8();
    /* 0062984b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062984e: ret  */ FN_RET(0x00629824); r_esp += 4; return;
L_0062984f:; BB(0x0062984f);
    /* 0062984f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629852: jne 0x62986a */ if (!fZ) goto L_0062986a;
L_00629854:; BB(0x00629854);
    /* 00629854: mov eax, dword ptr [ecx + 0xe4] */ r_eax = R32((u32)(r_ecx+0xe4u));
    /* 0062985a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062985d: jne 0x62986a */ if (!fZ) goto L_0062986a;
L_0062985f:; BB(0x0062985f);
    /* 0062985f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00629862: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x629867u); f_006946a8();
    /* 00629867: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0062986a:; BB(0x0062986a);
    /* 0062986a: ret  */ FN_RET(0x00629824); r_esp += 4; return;
}

void f_0062986c(void) /* sub_62986C */
{
    FN_ENTER(0x0062986c);
    /* 0062986c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062986f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00629873: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00629878: mov eax, dword ptr [ecx + 0xc8] */ r_eax = R32((u32)(r_ecx+0xc8u));
    /* 0062987e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629880: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 00629884: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 00629889: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 0062988e: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 00629893: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00629898: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0062989d: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 006298a1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006298a4: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
    /* 006298a9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6298aeu); f_008003e0();
    /* 006298ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006298b1: ret  */ FN_RET(0x0062986c); r_esp += 4; return;
}

void f_006298b4(void) /* sub_6298B4 */
{
    FN_ENTER(0x006298b4);
    /* 006298b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006298b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006298b7: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x6298bcu); f_00807e78();
    /* 006298bc: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006298bf: jne 0x6298cb */ if (!fZ) goto L_006298cb;
L_006298c1:; BB(0x006298c1);
    /* 006298c1: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 006298c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006298c9: je 0x629914 */ if (fZ) goto L_00629914;
L_006298cb:; BB(0x006298cb);
    /* 006298cb: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 006298d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006298d3: jne 0x6298f3 */ if (!fZ) goto L_006298f3;
L_006298d5:; BB(0x006298d5);
    /* 006298d5: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006298d8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006298da: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006298dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006298df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006298e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006298e1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006298e2: push dword ptr [ecx + eax*8 + 0x932180] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x932180u)); r_esp -= 4; W32(r_esp, v); }
    /* 006298e9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6298eeu); f_00814298();
    /* 006298ee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006298f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006298f2: ret  */ FN_RET(0x006298b4); r_esp += 4; return;
L_006298f3:; BB(0x006298f3);
    /* 006298f3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006298f6: jne 0x629914 */ if (!fZ) goto L_00629914;
L_006298f8:; BB(0x006298f8);
    /* 006298f8: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 006298fb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006298fd: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00629900: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629902: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629903: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629904: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629905: push dword ptr [ecx + eax*8 + 0x932184] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x932184u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062990c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x629911u); f_00814298();
    /* 00629911: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00629914:; BB(0x00629914);
    /* 00629914: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629915: ret  */ FN_RET(0x006298b4); r_esp += 4; return;
}

void f_00629918(void) /* sub_629918 */
{
    FN_ENTER(0x00629918);
    /* 00629918: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629919: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062991b: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x629920u); f_00807e78();
    /* 00629920: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629923: jne 0x62992f */ if (!fZ) goto L_0062992f;
L_00629925:; BB(0x00629925);
    /* 00629925: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 0062992b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062992d: je 0x62994b */ if (fZ) goto L_0062994b;
L_0062992f:; BB(0x0062992f);
    /* 0062992f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00629932: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629934: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00629937: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062993a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062993b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062993c: push dword ptr [ecx + eax*8 + 0x932188] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x932188u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629943: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x629948u); f_00814298();
    /* 00629948: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0062994b:; BB(0x0062994b);
    /* 0062994b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062994c: ret  */ FN_RET(0x00629918); r_esp += 4; return;
}

void f_00629950(void) /* sub_629950 */
{
    FN_ENTER(0x00629950);
    /* 00629950: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629951: mov edi, ecx */ r_edi = r_ecx;
    /* 00629953: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00629957: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062995b: mov dword ptr [edi + 0xe4], 0 */ W32((u32)(r_edi+0xe4u), 0x0u);
    /* 00629965: mov ecx, edi */ r_ecx = r_edi;
    /* 00629967: call 0x7ba468 */ r_esp -= 4; W32(r_esp, 0x62996cu); f_007ba468();
    /* 0062996c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062996f: je 0x629977 */ if (fZ) goto L_00629977;
L_00629971:; BB(0x00629971);
    /* 00629971: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629973: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629974: ret 8 */ FN_RET(0x00629950); r_esp += 12; return;
L_00629977:; BB(0x00629977);
    /* 00629977: mov dword ptr [edi + 0xe4], 1 */ W32((u32)(r_edi+0xe4u), 0x1u);
    /* 00629981: mov eax, 1 */ r_eax = 0x1u;
    /* 00629986: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629987: ret 8 */ FN_RET(0x00629950); r_esp += 12; return;
}

void f_0062998c(void) /* sub_62998C */
{
    FN_ENTER(0x0062998c);
    /* 0062998c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062998d: mov edi, ecx */ r_edi = r_ecx;
    /* 0062998f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629993: mov ecx, edi */ r_ecx = r_edi;
    /* 00629995: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x62999au); f_006132e4();
    /* 0062999a: mov dword ptr [edi], 0xb29620 */ W32((u32)(r_edi), 0xb29620u);
    /* 006299a0: mov edx, dword ptr [0x9c5dc0] */ r_edx = R32((u32)(0x9c5dc0u));
    /* 006299a6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006299a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006299ab: mov dword ptr [edi + 0xc8], 0xffffffff */ W32((u32)(r_edi+0xc8u), 0xffffffffu);
    /* 006299b5: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 006299bb: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 006299c1: mov eax, 0x1c */ r_eax = 0x1cu;
    /* 006299c6: mov dword ptr [edi + 0xcc], 0x41a00000 */ W32((u32)(r_edi+0xccu), 0x41a00000u);
    /* 006299d0: mov dword ptr [edi + 0xd8], eax */ W32((u32)(r_edi+0xd8u), r_eax);
    /* 006299d6: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 006299dc: mov dword ptr [edi + 0xe4], edx */ W32((u32)(r_edi+0xe4u), r_edx);
    /* 006299e2: mov dword ptr [edi + 0xd0], 2 */ W32((u32)(r_edi+0xd0u), 0x2u);
    /* 006299ec: mov eax, edi */ r_eax = r_edi;
    /* 006299ee: mov dword ptr [edi + 0x98], 3 */ W32((u32)(r_edi+0x98u), 0x3u);
    /* 006299f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006299f9: ret 4 */ FN_RET(0x0062998c); r_esp += 8; return;
}

void f_006299e0(void)
{
    FN_ENTER(0x006299e0);
    /* 006299e0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006299e2: mov dword ptr [edi + 0xd0], 2 */ W32((u32)(r_edi+0xd0u), 0x2u);
    /* 006299ec: mov eax, edi */ r_eax = r_edi;
    /* 006299ee: mov dword ptr [edi + 0x98], 3 */ W32((u32)(r_edi+0x98u), 0x3u);
    /* 006299f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006299f9: ret 4 */ FN_RET(0x006299e0); r_esp += 8; return;
}

void f_006299fc(void) /* sub_6299FC */
{
    FN_ENTER(0x006299fc);
    /* 006299fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006299fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006299ff: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00629a01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629a03: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x629a06u); call_ind(t); }
    /* 00629a06: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 00629a0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629a0e: jne 0x629a36 */ if (!fZ) goto L_00629a36;
L_00629a10:; BB(0x00629a10);
    /* 00629a10: mov eax, dword ptr [ebx + 0xe0] */ r_eax = R32((u32)(r_ebx+0xe0u));
    /* 00629a16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629a18: je 0x629a2d */ if (fZ) goto L_00629a2d;
L_00629a1a:; BB(0x00629a1a);
    /* 00629a1a: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 00629a20: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629a23: mov dword ptr [ebx + 0xdc], eax */ W32((u32)(r_ebx+0xdcu), r_eax);
    /* 00629a29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00629a2b: jl 0x629a4e */ if ((fS!=fO)) goto L_00629a4e;
L_00629a2d:; BB(0x00629a2d);
    /* 00629a2d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00629a2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629a31: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x629a34u); call_ind(t); }
    /* 00629a34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629a35: ret  */ FN_RET(0x006299fc); r_esp += 4; return;
L_00629a36:; BB(0x00629a36);
    /* 00629a36: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629a39: jne 0x629a4c */ if (!fZ) goto L_00629a4c;
L_00629a3b:; BB(0x00629a3b);
    /* 00629a3b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00629a3d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629a3f: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x629a42u); call_ind(t); }
    /* 00629a42: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
L_00629a4c:; BB(0x00629a4c);
    /* 00629a4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629a4d: ret  */ FN_RET(0x006299fc); r_esp += 4; return;
L_00629a4e:; BB(0x00629a4e);
    /* 00629a4e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00629a50: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629a52: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x629a55u); call_ind(t); }
    /* 00629a55: mov dword ptr [ebx + 0xe0], 0 */ W32((u32)(r_ebx+0xe0u), 0x0u);
    /* 00629a5f: jmp 0x629a2d */ goto L_00629a2d;
}

void f_00629a64(void) /* sub_629A64 */
{
    FN_ENTER(0x00629a64);
    /* 00629a64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629a65: mov edi, ecx */ r_edi = r_ecx;
    /* 00629a67: mov eax, dword ptr [edi + 0x84] */ r_eax = R32((u32)(r_edi+0x84u));
    /* 00629a6d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00629a6e: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629a70: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00629a72: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00629a77: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629a79: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00629a7b: mov dword ptr [edi + 0x84], eax */ W32((u32)(r_edi+0x84u), r_eax);
    /* 00629a81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00629a83: jl 0x629a9e */ if ((fS!=fO)) goto L_00629a9e;
L_00629a85:; BB(0x00629a85);
    /* 00629a85: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629a8a: jg 0x629a9e */ if ((!fZ&&fS==fO)) goto L_00629a9e;
L_00629a8c:; BB(0x00629a8c);
    /* 00629a8c: mov dword ptr [edi + 0xd0], 0 */ W32((u32)(r_edi+0xd0u), 0x0u);
    /* 00629a96: mov dword ptr [edi + 0xc8], eax */ W32((u32)(r_edi+0xc8u), r_eax);
    /* 00629a9c: jmp 0x629ab7 */ goto L_00629ab7;
L_00629a9e:; BB(0x00629a9e);
    /* 00629a9e: mov dword ptr [edi + 0xc8], 0xffffffff */ W32((u32)(r_edi+0xc8u), 0xffffffffu);
    /* 00629aa8: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00629aad: mov dword ptr [edi + 0xd0], 2 */ W32((u32)(r_edi+0xd0u), 0x2u);
L_00629ab7:; BB(0x00629ab7);
    /* 00629ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629ab8: push 0x931930 */ { u32 v = 0x931930u; r_esp -= 4; W32(r_esp, v); }
    /* 00629abd: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00629ac2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x629ac7u); f_0061cdb0();
    /* 00629ac7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629aca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00629acc: mov ecx, edi */ r_ecx = r_edi;
    /* 00629ace: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x629ad1u); call_ind(t); }
    /* 00629ad1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629ad2: ret  */ FN_RET(0x00629a64); r_esp += 4; return;
}

void f_00629ad4(void) /* sub_629AD4 */
{
    FN_ENTER(0x00629ad4);
    /* 00629ad4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629ad5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629ad6: mov edi, ecx */ r_edi = r_ecx;
    /* 00629ad8: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00629adc: movsx edx, byte ptr [ebp + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xbu));
    /* 00629ae0: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629ae3: jne 0x629b3d */ if (!fZ) goto L_00629b3d;
L_00629ae5:; BB(0x00629ae5);
    /* 00629ae5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629ae8: je 0x629af7 */ if (fZ) goto L_00629af7;
L_00629aea:; BB(0x00629aea);
    /* 00629aea: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00629aee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629aef: call 0x816dd8 */ r_esp -= 4; W32(r_esp, 0x629af4u); f_00816dd8();
    /* 00629af4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629af5: jmp 0x629b02 */ goto L_00629b02;
L_00629af7:; BB(0x00629af7);
    /* 00629af7: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00629afb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629afc: call 0x816e60 */ r_esp -= 4; W32(r_esp, 0x629b01u); f_00816e60();
    /* 00629b01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00629b02:; BB(0x00629b02);
    /* 00629b02: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 00629b08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b0a: jne 0x629b22 */ if (!fZ) goto L_00629b22;
L_00629b0c:; BB(0x00629b0c);
    /* 00629b0c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00629b0e: mov ecx, edi */ r_ecx = r_edi;
    /* 00629b10: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x629b13u); call_ind(t); }
    /* 00629b13: mov dword ptr [edi + 0xd4], 1 */ W32((u32)(r_edi+0xd4u), 0x1u);
    /* 00629b1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629b1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629b1f: ret 4 */ FN_RET(0x00629ad4); r_esp += 8; return;
L_00629b22:; BB(0x00629b22);
    /* 00629b22: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629b25: jne 0x629b38 */ if (!fZ) goto L_00629b38;
L_00629b27:; BB(0x00629b27);
    /* 00629b27: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00629b29: mov ecx, edi */ r_ecx = r_edi;
    /* 00629b2b: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x629b2eu); call_ind(t); }
    /* 00629b2e: mov dword ptr [edi + 0xd4], 0 */ W32((u32)(r_edi+0xd4u), 0x0u);
L_00629b38:; BB(0x00629b38);
    /* 00629b38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629b39: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629b3a: ret 4 */ FN_RET(0x00629ad4); r_esp += 8; return;
L_00629b3d:; BB(0x00629b3d);
    /* 00629b3d: movsx eax, byte ptr [ebp + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xau));
    /* 00629b41: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b47: jne 0x629ae5 */ if (!fZ) goto L_00629ae5;
L_00629b49:; BB(0x00629b49);
    /* 00629b49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629b4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b4e: push 0x58e */ { u32 v = 0x58eu; r_esp -= 4; W32(r_esp, v); }
    /* 00629b53: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x629b58u); f_00814298();
    /* 00629b58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629b5b: movsx edx, byte ptr [ebp + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xbu));
    /* 00629b5f: jmp 0x629ae5 */ goto L_00629ae5;
}

void f_00629b64(void) /* sub_629B64 */
{
    FN_ENTER(0x00629b64);
    /* 00629b64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629b65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629b66: mov esi, ecx */ r_esi = r_ecx;
    /* 00629b68: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 00629b6e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629b71: je 0x629bc6 */ if (fZ) goto L_00629bc6;
L_00629b73:; BB(0x00629b73);
    /* 00629b73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629b75: jne 0x629b82 */ if (!fZ) goto L_00629b82;
L_00629b77:; BB(0x00629b77);
    /* 00629b77: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 00629b7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00629b80: je 0x629bc6 */ if (fZ) goto L_00629bc6;
L_00629b82:; BB(0x00629b82);
    /* 00629b82: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00629b87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b88: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x629b8du); f_0068d5a8();
    /* 00629b8d: mov ebp, eax */ r_ebp = r_eax;
    /* 00629b8f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629b92: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629b94: je 0x629bc6 */ if (fZ) goto L_00629bc6;
L_00629b96:; BB(0x00629b96);
    /* 00629b96: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00629b99: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00629b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629b9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629b9e: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x629ba3u); f_007a90a8();
    /* 00629ba3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629ba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629ba7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00629ba9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00629bab: call 0x694430 */ r_esp -= 4; W32(r_esp, 0x629bb0u); f_00694430();
    /* 00629bb0: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 00629bb6: mov dword ptr [esi + 0xe0], 1 */ W32((u32)(r_esi+0xe0u), 0x1u);
    /* 00629bc0: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
L_00629bc6:; BB(0x00629bc6);
    /* 00629bc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629bc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629bc8: ret 4 */ FN_RET(0x00629b64); r_esp += 8; return;
}

void f_00629bcc(void)
{
    FN_ENTER(0x00629bcc);
    /* 00629bcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629bcd: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00629bd1: movzx eax, word ptr [esi + 2] */ r_eax = (u32)R16((u32)(r_esi+0x2u));
    /* 00629bd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629bd6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x629bdbu); f_007b4d18();
    /* 00629bdb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629bde: je 0x629bea */ if (fZ) goto L_00629bea;
L_00629be0:; BB(0x00629be0);
    /* 00629be0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629be1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00629be3: mov ecx, eax */ r_ecx = r_eax;
    /* 00629be5: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x629be8u); call_ind(t); }
    /* 00629be8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629be9: ret  */ FN_RET(0x00629bcc); r_esp += 4; return;
L_00629bea:; BB(0x00629bea);
    /* 00629bea: movsx edx, byte ptr [esi + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0xbu));
    /* 00629bee: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629bf1: jne 0x629c1c */ if (!fZ) goto L_00629c1c;
L_00629bf3:; BB(0x00629bf3);
    /* 00629bf3: movsx eax, byte ptr [esi + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xau));
L_00629bf7:; BB(0x00629bf7);
    /* 00629bf7: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00629bfa: je 0x629c0c */ if (fZ) goto L_00629c0c;
L_00629bfc:; BB(0x00629bfc);
    /* 00629bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629bfd: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 00629c01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c02: call 0x816df0 */ r_esp -= 4; W32(r_esp, 0x629c07u); f_00816df0();
    /* 00629c07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00629c0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629c0b: ret  */ FN_RET(0x00629bcc); r_esp += 4; return;
L_00629c0c:; BB(0x00629c0c);
    /* 00629c0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c0d: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 00629c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c12: call 0x816e78 */ r_esp -= 4; W32(r_esp, 0x629c17u); f_00816e78();
    /* 00629c17: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00629c1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629c1b: ret  */ FN_RET(0x00629bcc); r_esp += 4; return;
L_00629c1c:; BB(0x00629c1c);
    /* 00629c1c: movsx eax, byte ptr [esi + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xau));
    /* 00629c20: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629c26: jne 0x629bf7 */ if (!fZ) goto L_00629bf7;
L_00629c28:; BB(0x00629c28);
    /* 00629c28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00629c2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c2d: push 0x58e */ { u32 v = 0x58eu; r_esp -= 4; W32(r_esp, v); }
    /* 00629c32: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x629c37u); f_00814298();
    /* 00629c37: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00629c3a: movsx edx, byte ptr [esi + 0xb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0xbu));
    /* 00629c3e: movsx eax, byte ptr [esi + 0xa] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xau));
    /* 00629c42: jmp 0x629bf7 */ goto L_00629bf7;
}

void f_00629c44(void) /* sub_629C44 */
{
    FN_ENTER(0x00629c44);
    /* 00629c44: mov dword ptr [0xa8ede0], 0x3f800000 */ W32((u32)(0xa8ede0u), 0x3f800000u);
    /* 00629c4e: mov dword ptr [0xa8ede4], 0x41000000 */ W32((u32)(0xa8ede4u), 0x41000000u);
    /* 00629c58: mov dword ptr [0xa8ede8], 0x3fc00000 */ W32((u32)(0xa8ede8u), 0x3fc00000u);
    /* 00629c62: ret  */ FN_RET(0x00629c44); r_esp += 4; return;
}

void f_00629c64(void) /* sub_629C64 */
{
    FN_ENTER(0x00629c64);
    /* 00629c64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629c65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c66: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00629c6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00629c6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00629c6f: jle 0x629cb9 */ if ((fZ||fS!=fO)) goto L_00629cb9;
L_00629c71:; BB(0x00629c71);
    /* 00629c71: mov ebx, edx */ r_ebx = r_edx;
    /* 00629c73: mov esi, ecx */ r_esi = r_ecx;
L_00629c75:; BB(0x00629c75);
    /* 00629c75: mov edx, dword ptr [ebx*4 + 0xaad720] */ r_edx = R32((u32)(r_ebx*4+0xaad720u));
    /* 00629c7c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629c7e: je 0x629cb2 */ if (fZ) goto L_00629cb2;
L_00629c80:; BB(0x00629c80);
    /* 00629c80: mov ecx, dword ptr [edx + 0x3f0] */ r_ecx = R32((u32)(r_edx+0x3f0u));
    /* 00629c86: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629c8c: jne 0x629cb2 */ if (!fZ) goto L_00629cb2;
L_00629c8e:; BB(0x00629c8e);
    /* 00629c8e: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00629c91: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00629c94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629c96: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x629c9bu); f_0078ea2c();
    /* 00629c9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00629c9e: fld dword ptr [esi + 0xcc] */ FPUSH(R_F32((u32)(r_esi+0xccu)));
    /* 00629ca4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00629ca6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00629ca8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629caa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00629cab: ja 0x629cbe */ if ((!fC&&!fZ)) goto L_00629cbe;
L_00629cad:; BB(0x00629cad);
    /* 00629cad: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_00629cb2:; BB(0x00629cb2);
    /* 00629cb2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00629cb5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629cb7: jl 0x629c75 */ if ((fS!=fO)) goto L_00629c75;
L_00629cb9:; BB(0x00629cb9);
    /* 00629cb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629cbb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629cbc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629cbd: ret  */ FN_RET(0x00629c64); r_esp += 4; return;
L_00629cbe:; BB(0x00629cbe);
    /* 00629cbe: mov eax, 1 */ r_eax = 0x1u;
    /* 00629cc3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629cc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00629cc5: ret  */ FN_RET(0x00629c64); r_esp += 4; return;
}

void f_00629cc8(void) /* sub_629CC8 */
{
    FN_ENTER(0x00629cc8);
    /* 00629cc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00629cc9: mov edi, ecx */ r_edi = r_ecx;
    /* 00629ccb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629cd1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x629cd6u); f_0068d5a8();
    /* 00629cd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629cd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629cd9: je 0x629d0f */ if (fZ) goto L_00629d0f;
L_00629cdb:; BB(0x00629cdb);
    /* 00629cdb: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00629ce1: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629ce7: jne 0x629d0f */ if (!fZ) goto L_00629d0f;
L_00629ce9:; BB(0x00629ce9);
    /* 00629ce9: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00629cec: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00629cef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629cf1: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x629cf6u); f_0078ea2c();
    /* 00629cf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00629cf9: fld dword ptr [edi + 0xcc] */ FPUSH(R_F32((u32)(r_edi+0xccu)));
    /* 00629cff: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00629d01: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00629d03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00629d05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00629d06: jbe 0x629d0f */ if ((fC||fZ)) goto L_00629d0f;
L_00629d08:; BB(0x00629d08);
    /* 00629d08: mov eax, 1 */ r_eax = 0x1u;
    /* 00629d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629d0e: ret  */ FN_RET(0x00629cc8); r_esp += 4; return;
L_00629d0f:; BB(0x00629d0f);
    /* 00629d0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629d11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00629d12: ret  */ FN_RET(0x00629cc8); r_esp += 4; return;
}

void f_00629d14(void) /* sub_629D14 */
{
    FN_ENTER(0x00629d14);
    /* 00629d14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629d15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00629d17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629d19: call 0x629d38 */ r_esp -= 4; W32(r_esp, 0x629d1eu); f_00629d38();
    /* 00629d1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00629d22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629d24: jne 0x629d2a */ if (!fZ) goto L_00629d2a;
L_00629d26:; BB(0x00629d26);
    /* 00629d26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629d27: ret 4 */ FN_RET(0x00629d14); r_esp += 8; return;
L_00629d2a:; BB(0x00629d2a);
    /* 00629d2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629d2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x629d30u); f_005c2f74();
    /* 00629d30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629d31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629d32: ret 4 */ FN_RET(0x00629d14); r_esp += 8; return;
}

void f_00629d38(void) /* sub_629D38 */
{
    FN_ENTER(0x00629d38);
    /* 00629d38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629d39: mov ebp, esp */ r_ebp = r_esp;
    /* 00629d3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629d3d: push 0x8e2f40 */ { u32 v = 0x8e2f40u; r_esp -= 4; W32(r_esp, v); }
    /* 00629d42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629d48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629d49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629d50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629d53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00629d56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00629d59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00629d5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00629d5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00629d62: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629d69: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629d6c: mov dword ptr [eax], 0xb29740 */ W32((u32)(r_eax), 0xb29740u);
    /* 00629d72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629d73: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x629d78u); f_007b4e84();
    /* 00629d78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629d79: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629d7c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x629d81u); f_007b9c8c();
    /* 00629d81: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00629d88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629d8b: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x629d90u); f_006296c8();
    /* 00629d90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629d93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629d9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00629d9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629d9d: ret  */ FN_RET(0x00629d38); r_esp += 4; return;
}

void f_00629da0(void) /* sub_629DA0 */
{
    FN_ENTER(0x00629da0);
    /* 00629da0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629da1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00629da3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629da5: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x629daau); f_0061347c();
    /* 00629daa: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00629dac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629dae: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x629db1u); call_ind(t); }
    /* 00629db1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629db2: ret  */ FN_RET(0x00629da0); r_esp += 4; return;
}

void f_00629db4(void) /* sub_629DB4 */
{
    FN_ENTER(0x00629db4);
    /* 00629db4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00629db5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00629db7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00629db9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00629dbb: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629dc1: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629dc7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x629dcau); call_ind(t); }
    /* 00629dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629dcc: je 0x629e5f */ if (fZ) goto L_00629e5f;
L_00629dd2:; BB(0x00629dd2);
    /* 00629dd2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x629dd7u); f_0082d7b0();
    /* 00629dd7: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00629dda: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x629ddfu); f_0082d838();
    /* 00629ddf: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00629de2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629de4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x629de9u); f_0082d8bc();
    /* 00629de9: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00629dec: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x629df1u); f_00829cc8();
    /* 00629df1: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 00629df7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629dfa: jne 0x629e46 */ if (!fZ) goto L_00629e46;
L_00629dfc:; BB(0x00629dfc);
    /* 00629dfc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x629e01u); f_0082d7b0();
    /* 00629e01: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00629e04: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00629e07: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x629e0cu); f_0082d838();
    /* 00629e0c: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00629e0f: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00629e12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629e14: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x629e19u); f_00830c04();
    /* 00629e19: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00629e1c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00629e1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629e21: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x629e26u); f_0082e9e4();
    /* 00629e26: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00629e29: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00629e2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00629e2e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x629e33u); f_0082d8bc();
    /* 00629e33: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00629e36: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629e39: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x629e3eu); f_008321d8();
    /* 00629e3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629e3f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x629e44u); f_0082da80();
    /* 00629e44: jmp 0x629e5a */ goto L_00629e5a;
L_00629e46:; BB(0x00629e46);
    /* 00629e46: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629e4c: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00629e4f: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 00629e55: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x629e5au); f_0083bd00();
L_00629e5a:; BB(0x00629e5a);
    /* 00629e5a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x629e5fu); f_0082da80();
L_00629e5f:; BB(0x00629e5f);
    /* 00629e5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00629e60: ret  */ FN_RET(0x00629db4); r_esp += 4; return;
}

void f_00629e64(void) /* sub_629E64 */
{
    FN_ENTER(0x00629e64);
    /* 00629e64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00629e65: mov edx, dword ptr [0xa8edf0] */ r_edx = R32((u32)(0xa8edf0u));
    /* 00629e6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629e6d: je 0x629eaf */ if (fZ) goto L_00629eaf;
L_00629e6f:; BB(0x00629e6f);
    /* 00629e6f: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00629e72: mov eax, 1 */ r_eax = 0x1u;
    /* 00629e77: mov ebx, eax */ r_ebx = r_eax;
    /* 00629e79: jmp 0x629e81 */ goto L_00629e81;
L_00629e7b:; BB(0x00629e7b);
    /* 00629e7b: mov edx, dword ptr [0xa8edf0] */ r_edx = R32((u32)(0xa8edf0u));
L_00629e81:; BB(0x00629e81);
    /* 00629e81: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00629e84: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x629e89u); f_00800b5c();
    /* 00629e89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629e8a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00629e8d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629e90: jl 0x629e7b */ if ((fS!=fO)) goto L_00629e7b;
L_00629e92:; BB(0x00629e92);
    /* 00629e92: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00629e95: mov eax, dword ptr [0xa8edf0] */ r_eax = R32((u32)(0xa8edf0u));
    /* 00629e9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629e9c: je 0x629eaf */ if (fZ) goto L_00629eaf;
L_00629e9e:; BB(0x00629e9e);
    /* 00629e9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629e9f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x629ea4u); f_00857e98();
    /* 00629ea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629ea5: mov dword ptr [0xa8edf0], 0 */ W32((u32)(0xa8edf0u), 0x0u);
L_00629eaf:; BB(0x00629eaf);
    /* 00629eaf: mov ecx, dword ptr [0xa8edf4] */ r_ecx = R32((u32)(0xa8edf4u));
    /* 00629eb5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629eb7: je 0x629ecc */ if (fZ) goto L_00629ecc;
L_00629eb9:; BB(0x00629eb9);
    /* 00629eb9: je 0x629ec2 */ if (fZ) goto L_00629ec2;
L_00629ebb:; BB(0x00629ebb);
    /* 00629ebb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629ebd: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x629ec2u); f_004066a8();
L_00629ec2:; BB(0x00629ec2);
    /* 00629ec2: mov dword ptr [0xa8edf4], 0 */ W32((u32)(0xa8edf4u), 0x0u);
L_00629ecc:; BB(0x00629ecc);
    /* 00629ecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629ecd: ret  */ FN_RET(0x00629e64); r_esp += 4; return;
}

void f_00629ed0(void)
{
    FN_ENTER(0x00629ed0);
    /* 00629ed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629ed1: mov ebp, esp */ r_ebp = r_esp;
    /* 00629ed3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629ed5: push 0x8e2f68 */ { u32 v = 0x8e2f68u; r_esp -= 4; W32(r_esp, v); }
    /* 00629eda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629ee0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629ee1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629ee8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629eeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00629eee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00629ef1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00629ef4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00629ef7: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00629efc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00629f03: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x629f08u); f_005caba4();
    /* 00629f08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00629f09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00629f0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00629f0e: je 0x629f47 */ if (fZ) goto L_00629f47;
L_00629f10:; BB(0x00629f10);
    /* 00629f10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00629f17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629f1e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629f21: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629f27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629f2a: call 0x629f4c */ r_esp -= 4; W32(r_esp, 0x629f2fu); f_00629f4c();
    /* 00629f2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00629f32: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00629f39:; BB(0x00629f39);
    /* 00629f39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00629f3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00629f43: mov esp, ebp */ r_esp = r_ebp;
    /* 00629f45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00629f46: ret  */ FN_RET(0x00629ed0); r_esp += 4; return;
L_00629f47:; BB(0x00629f47);
    /* 00629f47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00629f49: jmp 0x629f39 */ goto L_00629f39;
}

void f_00629f4c(void) /* sub_629F4C */
{
    FN_ENTER(0x00629f4c);
    /* 00629f4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00629f4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00629f4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00629f51: push 0x8e2f84 */ { u32 v = 0x8e2f84u; r_esp -= 4; W32(r_esp, v); }
    /* 00629f56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00629f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00629f5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00629f64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00629f67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00629f6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00629f6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00629f70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00629f73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00629f76: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00629f79: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00629f7c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00629f7f: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x629f84u); f_0062998c();
    /* 00629f84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00629f8b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00629f8e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00629f91: mov dword ptr [ecx], 0xb29740 */ W32((u32)(r_ecx), 0xb29740u);
    /* 00629f97: mov eax, dword ptr [0x9c5de4] */ r_eax = R32((u32)(0x9c5de4u));
    /* 00629f9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00629f9d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00629fa0: call dword ptr [0xb29754] */ { u32 t = R32((u32)(0xb29754u)); r_esp -= 4; W32(r_esp, 0x629fa6u); call_ind(t); }
    /* 00629fa6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00629fa9: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x629faeu); f_0062974c();
    /* 00629fae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00629fb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00629fb3: mov esi, dword ptr [ecx + 0x88] */ r_esi = R32((u32)(r_ecx+0x88u));
    /* 00629fb9: mov eax, 3 */ r_eax = 0x3u;
    /* 00629fbe: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00629fc1: push 0x9c5de8 */ { u32 v = 0x9c5de8u; r_esp -= 4; W32(r_esp, v); }
    /* 00629fc6: mov edx, 0 */ r_edx = 0x0u;
    /* 00629fcb: jl 0x629fcf */ if ((fS!=fO)) goto L_00629fcf;
L_00629fcd:; BB(0x00629fcd);
    /* 00629fcd: mov esi, eax */ r_esi = r_eax;
L_00629fcf:; BB(0x00629fcf);
    /* 00629fcf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00629fd1: jg 0x629fd5 */ if ((!fZ&&fS==fO)) goto L_00629fd5;
L_00629fd3:; BB(0x00629fd3);
    /* 00629fd3: mov esi, edx */ r_esi = r_edx;
L_00629fd5:; BB(0x00629fd5);
    /* 00629fd5: mov dword ptr [ecx + 0x88], esi */ W32((u32)(r_ecx+0x88u), r_esi);
    /* 00629fdb: mov ebx, dword ptr [0xa8edf0] */ r_ebx = R32((u32)(0xa8edf0u));
    /* 00629fe1: mov edx, dword ptr [0xa8edf4] */ r_edx = R32((u32)(0xa8edf4u));
    /* 00629fe7: mov edi, dword ptr [ebx + esi*4] */ r_edi = R32((u32)(r_ebx+r_esi*4));
    /* 00629fea: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00629fed: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00629ff3: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00629ff6: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00629ff9: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00629fff: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0062a002: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0062a008: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0062a00b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062a00e: mov dword ptr [ecx + 0xb8], 0x3f7d70a4 */ W32((u32)(r_ecx+0xb8u), 0x3f7d70a4u);
    /* 0062a018: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0062a01b: fadd dword ptr [edx*4 + 0x932260] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x932260u));
    /* 0062a022: fadd dword ptr [0x932278] */ ST(0) = ST(0) + R_F32((u32)(0x932278u));
    /* 0062a028: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0062a02e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62a033u); f_007b9a88();
    /* 0062a033: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062a036: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62a03bu); f_007b999c();
    /* 0062a03b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062a03c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a03f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62a044u); f_007b4f54();
    /* 0062a044: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062a047: mov eax, dword ptr [edx + 0xd0] */ r_eax = R32((u32)(r_edx+0xd0u));
    /* 0062a04d: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 0062a057: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062a05a: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 0062a064: je 0x62a080 */ if (fZ) goto L_0062a080;
L_0062a066:; BB(0x0062a066);
    /* 0062a066: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 0062a069: fcomp dword ptr [0x932270] */ fx_compare(ST(0), R_F32((u32)(0x932270u))); FPOP();
    /* 0062a06f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062a071: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062a072: jae 0x62a080 */ if (!fC) goto L_0062a080;
L_0062a074:; BB(0x0062a074);
    /* 0062a074: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
    /* 0062a07e: jmp 0x62a08a */ goto L_0062a08a;
L_0062a080:; BB(0x0062a080);
    /* 0062a080: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
L_0062a08a:; BB(0x0062a08a);
    /* 0062a08a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062a08d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062a090: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062a093: mov eax, edx */ r_eax = r_edx;
    /* 0062a095: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062a098: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062a09f: mov esp, ebp */ r_esp = r_ebp;
    /* 0062a0a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062a0a2: ret 8 */ FN_RET(0x00629f4c); r_esp += 12; return;
}

