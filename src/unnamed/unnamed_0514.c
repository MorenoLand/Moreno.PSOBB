#include "protos.h"

void f_00514378(void) /* sub_514378 */
{
    FN_ENTER(0x00514378);
    /* 00514378: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514379: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051437a: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051437d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051437f: movsx eax, word ptr [ebx + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 00514386: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514388: je 0x514472 */ if (fZ) goto L_00514472;
L_0051438e:; BB(0x0051438e);
    /* 0051438e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514391: je 0x5144a5 */ if (fZ) goto L_005144a5;
L_00514397:; BB(0x00514397);
    /* 00514397: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051439a: jne 0x514467 */ if (!fZ) goto L_00514467;
L_005143a0:; BB(0x005143a0);
    /* 005143a0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005143a2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5143a7u); f_007aa094();
    /* 005143a7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005143a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005143ab: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5143b0u); f_007aaa30();
    /* 005143b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005143b2: je 0x5143c3 */ if (fZ) goto L_005143c3;
L_005143b4:; BB(0x005143b4);
    /* 005143b4: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 005143ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005143bd: je 0x5146e5 */ if (fZ) goto L_005146e5;
L_005143c3:; BB(0x005143c3);
    /* 005143c3: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 005143c9: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005143cc: je 0x51445c */ if (fZ) goto L_0051445c;
L_005143d2:; BB(0x005143d2);
    /* 005143d2: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 005143d8: movsx esi, word ptr [ebx + 0x344] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x344u));
    /* 005143df: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005143e2: movsx edx, si */ r_edx = (u32)(i32)(i16)(u16)r_esi;
    /* 005143e5: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005143e9: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005143ed: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005143ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005143f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005143f2: jb 0x514400 */ if (fC) goto L_00514400;
L_005143f4:; BB(0x005143f4);
    /* 005143f4: mov word ptr [ebx + 0x344], si */ W16((u32)(r_ebx+0x344u), (u16)r_esi);
    /* 005143fb: jmp 0x5146c3 */ goto L_005146c3;
L_00514400:; BB(0x00514400);
    /* 00514400: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00514402: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00514407: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00514409: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051440a: mov word ptr [ebx + 0x344], si */ W16((u32)(r_ebx+0x344u), (u16)r_esi);
    /* 00514411: mov eax, 1 */ r_eax = 0x1u;
    /* 00514416: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0051441d: mov dword ptr [ebx + 0x390], esi */ W32((u32)(r_ebx+0x390u), r_esi);
    /* 00514423: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 0051442a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051442c: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x514431u); f_007706b0();
    /* 00514431: mov eax, dword ptr [ebx + 0x38c] */ r_eax = R32((u32)(r_ebx+0x38cu));
    /* 00514437: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051443a: jl 0x514446 */ if ((fS!=fO)) goto L_00514446;
L_0051443c:; BB(0x0051443c);
    /* 0051443c: mov dword ptr [ebx + 0x38c], 0xffffffff */ W32((u32)(r_ebx+0x38cu), 0xffffffffu);
L_00514446:; BB(0x00514446);
    /* 00514446: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 0051444c: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0051444f: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00514454: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00514457: jmp 0x5146c3 */ goto L_005146c3;
L_0051445c:; BB(0x0051445c);
    /* 0051445c: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 00514462: jmp 0x5146c3 */ goto L_005146c3;
L_00514467:; BB(0x00514467);
    /* 00514467: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 0051446d: jmp 0x5146c3 */ goto L_005146c3;
L_00514472:; BB(0x00514472);
    /* 00514472: mov eax, dword ptr [0xa72d3c] */ r_eax = R32((u32)(0xa72d3cu));
    /* 00514477: mov edx, dword ptr [ebx + 0x370] */ r_edx = R32((u32)(r_ebx+0x370u));
    /* 0051447d: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 00514480: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00514482: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00514488: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0051448e: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00514493: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 00514499: mov eax, 1 */ r_eax = 0x1u;
    /* 0051449e: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
L_005144a5:; BB(0x005144a5);
    /* 005144a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005144a7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5144acu); f_007aa094();
    /* 005144ac: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 005144b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005144b3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5144b8u); f_007aaa30();
    /* 005144b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005144ba: je 0x5144e3 */ if (fZ) goto L_005144e3;
L_005144bc:; BB(0x005144bc);
    /* 005144bc: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005144c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005144c3: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5144c8u); f_007879b8();
    /* 005144c8: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 005144cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005144cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005144ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005144cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005144d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005144d1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5144d6u); f_00814298();
    /* 005144d6: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005144db: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5144e0u); f_00814680();
    /* 005144e0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005144e3:; BB(0x005144e3);
    /* 005144e3: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005144e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005144ea: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5144efu); f_007aaa30();
    /* 005144ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005144f1: je 0x5145a5 */ if (fZ) goto L_005145a5;
L_005144f7:; BB(0x005144f7);
    /* 005144f7: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005144fa: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005144fc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00514501: je 0x514509 */ if (fZ) goto L_00514509;
L_00514503:; BB(0x00514503);
    /* 00514503: add eax, dword ptr [0xaae164] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00514509:; BB(0x00514509);
    /* 00514509: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0051450b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051450d: jle 0x5145a5 */ if ((fZ||fS!=fO)) goto L_005145a5;
L_00514513:; BB(0x00514513);
    /* 00514513: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 00514517: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 0051451b: mov ebp, eax */ r_ebp = r_eax;
L_0051451d:; BB(0x0051451d);
    /* 0051451d: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 00514524: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514526: je 0x51471e */ if (fZ) goto L_0051471e;
L_0051452c:; BB(0x0051452c);
    /* 0051452c: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051452e: je 0x514711 */ if (fZ) goto L_00514711;
L_00514534:; BB(0x00514534);
    /* 00514534: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 0051453b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051453e: jne 0x514596 */ if (!fZ) goto L_00514596;
L_00514540:; BB(0x00514540);
    /* 00514540: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00514543: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514549: jne 0x514596 */ if (!fZ) goto L_00514596;
L_0051454b:; BB(0x0051454b);
    /* 0051454b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514551: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00514553: mov ecx, edi */ r_ecx = r_edi;
    /* 00514555: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x514558u); call_ind(t); }
    /* 00514558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051455a: je 0x514596 */ if (fZ) goto L_00514596;
L_0051455c:; BB(0x0051455c);
    /* 0051455c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514561: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514562: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00514564: mov ecx, edi */ r_ecx = r_edi;
    /* 00514566: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x514569u); call_ind(t); }
    /* 00514569: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0051456b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051456e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00514572: mov ecx, edi */ r_ecx = r_edi;
    /* 00514574: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00514577: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x51457au); call_ind(t); }
    /* 0051457a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051457c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x514581u); f_007751b0();
    /* 00514581: fcomp dword ptr [0x920914] */ fx_compare(ST(0), R_F32((u32)(0x920914u))); FPOP();
    /* 00514587: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514589: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051458a: jbe 0x514596 */ if ((fC||fZ)) goto L_00514596;
L_0051458c:; BB(0x0051458c);
    /* 0051458c: mov dword ptr [ebx + 0x390], 1 */ W32((u32)(r_ebx+0x390u), 0x1u);
L_00514596:; BB(0x00514596);
    /* 00514596: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00514599: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051459b: jl 0x51451d */ if ((fS!=fO)) goto L_0051451d;
L_0051459d:; BB(0x0051459d);
    /* 0051459d: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 005145a1: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_005145a5:; BB(0x005145a5);
    /* 005145a5: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005145ab: fcom dword ptr [0xa72d24] */ fx_compare(ST(0), R_F32((u32)(0xa72d24u))); 
    /* 005145b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005145b3: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 005145b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005145ba: jb 0x514625 */ if (fC) goto L_00514625;
L_005145bc:; BB(0x005145bc);
    /* 005145bc: fcomp dword ptr [0x920910] */ fx_compare(ST(0), R_F32((u32)(0x920910u))); FPOP();
    /* 005145c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005145c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005145c5: ja 0x514627 */ if ((!fC&&!fZ)) goto L_00514627;
L_005145c7:; BB(0x005145c7);
    /* 005145c7: mov ecx, dword ptr [0xa72d4c] */ r_ecx = R32((u32)(0xa72d4cu));
    /* 005145cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005145ce: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5145d3u); f_00579de0();
    /* 005145d3: mov esi, eax */ r_esi = r_eax;
    /* 005145d5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005145d7: je 0x514627 */ if (fZ) goto L_00514627;
L_005145d9:; BB(0x005145d9);
    /* 005145d9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5145deu); f_0082d7b0();
    /* 005145de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005145e0: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5145e5u); f_00830cd8();
    /* 005145e5: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005145e8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5145edu); f_0082d838();
    /* 005145ed: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005145f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005145f2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5145f7u); f_0082d8bc();
    /* 005145f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005145fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005145fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005145fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005145ff: mov edx, esi */ r_edx = r_esi;
    /* 00514601: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x514606u); f_0082f940();
    /* 00514606: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51460bu); f_0082da80();
    /* 0051460b: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
    /* 00514611: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514613: je 0x514627 */ if (fZ) goto L_00514627;
L_00514615:; BB(0x00514615);
    /* 00514615: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 00514618: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0051461c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051461d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051461f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514620: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x514623u); call_ind(t); }
    /* 00514623: jmp 0x514627 */ goto L_00514627;
L_00514625:; BB(0x00514625);
    /* 00514625: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00514627:; BB(0x00514627);
    /* 00514627: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0051462d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514630: je 0x5146bd */ if (fZ) goto L_005146bd;
L_00514636:; BB(0x00514636);
    /* 00514636: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0051463c: add dword ptr [ebx + 0x38c], 1 */ { u32 ad = (u32)(r_ebx+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00514643: mov eax, 2 */ r_eax = 0x2u;
    /* 00514648: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0051464f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514652: jne 0x514671 */ if (!fZ) goto L_00514671;
L_00514654:; BB(0x00514654);
    /* 00514654: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 0051465a: mov eax, 1 */ r_eax = 0x1u;
    /* 0051465f: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00514666: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514668: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 0051466f: jmp 0x5146c3 */ goto L_005146c3;
L_00514671:; BB(0x00514671);
    /* 00514671: mov esi, dword ptr [0xa72d3c] */ r_esi = R32((u32)(0xa72d3cu));
    /* 00514677: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 0051467d: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00514683: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514685: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0051468c: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0051468f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00514692: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00514696: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0051469b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005146a0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005146a4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005146a8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 005146ac: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005146b0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005146b4: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 005146bb: jmp 0x5146c3 */ goto L_005146c3;
L_005146bd:; BB(0x005146bd);
    /* 005146bd: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
L_005146c3:; BB(0x005146c3);
    /* 005146c3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005146c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005146c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005146cb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005146d3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5146d8u); f_00772b44();
    /* 005146d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005146da: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5146dfu); f_007b6880();
    /* 005146df: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005146e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005146e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005146e4: ret  */ FN_RET(0x00514378); r_esp += 4; return;
L_005146e5:; BB(0x005146e5);
    /* 005146e5: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 005146ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005146ec: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5146f1u); f_007879b8();
    /* 005146f1: lea esi, [ebx + 0x38] */ r_esi = (u32)(r_ebx+0x38u);
    /* 005146f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005146f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005146f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005146f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005146f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005146fa: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5146ffu); f_00814298();
    /* 005146ff: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00514704: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x514709u); f_00814680();
    /* 00514709: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051470c: jmp 0x5143c3 */ goto L_005143c3;
L_00514711:; BB(0x00514711);
    /* 00514711: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00514715: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00514719: jmp 0x5145a5 */ goto L_005145a5;
L_0051471e:; BB(0x0051471e);
    /* 0051471e: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00514722: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00514726: jmp 0x5145a5 */ goto L_005145a5;
}

void f_00514552(void)
{
    FN_ENTER(0x00514552);
    goto L_00514552;
L_0051451d:; BB(0x0051451d);
    /* 0051451d: mov edi, dword ptr [esi*4 + 0xaad720] */ r_edi = R32((u32)(r_esi*4+0xaad720u));
    /* 00514524: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514526: je 0x51471e */ if (fZ) goto L_0051471e;
L_0051452c:; BB(0x0051452c);
    /* 0051452c: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051452e: je 0x514711 */ if (fZ) goto L_00514711;
L_00514534:; BB(0x00514534);
    /* 00514534: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 0051453b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051453e: jne 0x514596 */ if (!fZ) goto L_00514596;
L_00514540:; BB(0x00514540);
    /* 00514540: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00514543: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514549: jne 0x514596 */ if (!fZ) goto L_00514596;
L_0051454b:; BB(0x0051454b);
    /* 0051454b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514551: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
L_00514552:; BB(0x00514552);
    /* 00514552: pop ss */ UNSUP(0x00514552, "pop ss");
    /* 00514553: mov ecx, edi */ r_ecx = r_edi;
    /* 00514555: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x514558u); call_ind(t); }
    /* 00514558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051455a: je 0x514596 */ if (fZ) goto L_00514596;
L_0051455c:; BB(0x0051455c);
    /* 0051455c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514561: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514562: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00514564: mov ecx, edi */ r_ecx = r_edi;
    /* 00514566: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x514569u); call_ind(t); }
    /* 00514569: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0051456b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051456e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00514572: mov ecx, edi */ r_ecx = r_edi;
    /* 00514574: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00514577: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x51457au); call_ind(t); }
    /* 0051457a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051457c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x514581u); f_007751b0();
    /* 00514581: fcomp dword ptr [0x920914] */ fx_compare(ST(0), R_F32((u32)(0x920914u))); FPOP();
    /* 00514587: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514589: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051458a: jbe 0x514596 */ if ((fC||fZ)) goto L_00514596;
L_0051458c:; BB(0x0051458c);
    /* 0051458c: mov dword ptr [ebx + 0x390], 1 */ W32((u32)(r_ebx+0x390u), 0x1u);
L_00514596:; BB(0x00514596);
    /* 00514596: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00514599: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051459b: jl 0x51451d */ if ((fS!=fO)) goto L_0051451d;
L_0051459d:; BB(0x0051459d);
    /* 0051459d: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 005145a1: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
L_005145a5:; BB(0x005145a5);
    /* 005145a5: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005145ab: fcom dword ptr [0xa72d24] */ fx_compare(ST(0), R_F32((u32)(0xa72d24u))); 
    /* 005145b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005145b3: mov edx, dword ptr [ebx + 0xc0] */ r_edx = R32((u32)(r_ebx+0xc0u));
    /* 005145b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005145ba: jb 0x514625 */ if (fC) goto L_00514625;
L_005145bc:; BB(0x005145bc);
    /* 005145bc: fcomp dword ptr [0x920910] */ fx_compare(ST(0), R_F32((u32)(0x920910u))); FPOP();
    /* 005145c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005145c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005145c5: ja 0x514627 */ if ((!fC&&!fZ)) goto L_00514627;
L_005145c7:; BB(0x005145c7);
    /* 005145c7: mov ecx, dword ptr [0xa72d4c] */ r_ecx = R32((u32)(0xa72d4cu));
    /* 005145cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005145ce: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5145d3u); f_00579de0();
    /* 005145d3: mov esi, eax */ r_esi = r_eax;
    /* 005145d5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005145d7: je 0x514627 */ if (fZ) goto L_00514627;
L_005145d9:; BB(0x005145d9);
    /* 005145d9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5145deu); f_0082d7b0();
    /* 005145de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005145e0: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5145e5u); f_00830cd8();
    /* 005145e5: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 005145e8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5145edu); f_0082d838();
    /* 005145ed: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 005145f0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005145f2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5145f7u); f_0082d8bc();
    /* 005145f7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005145fa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005145fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005145fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005145ff: mov edx, esi */ r_edx = r_esi;
    /* 00514601: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x514606u); f_0082f940();
    /* 00514606: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x51460bu); f_0082da80();
    /* 0051460b: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
    /* 00514611: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514613: je 0x514627 */ if (fZ) goto L_00514627;
L_00514615:; BB(0x00514615);
    /* 00514615: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 00514618: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0051461c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051461d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0051461f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514620: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x514623u); call_ind(t); }
    /* 00514623: jmp 0x514627 */ goto L_00514627;
L_00514625:; BB(0x00514625);
    /* 00514625: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00514627:; BB(0x00514627);
    /* 00514627: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0051462d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514630: je 0x5146bd */ if (fZ) goto L_005146bd;
L_00514636:; BB(0x00514636);
    /* 00514636: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 0051463c: add dword ptr [ebx + 0x38c], 1 */ { u32 ad = (u32)(r_ebx+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00514643: mov eax, 2 */ r_eax = 0x2u;
    /* 00514648: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0051464f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514652: jne 0x514671 */ if (!fZ) goto L_00514671;
L_00514654:; BB(0x00514654);
    /* 00514654: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 0051465a: mov eax, 1 */ r_eax = 0x1u;
    /* 0051465f: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 00514666: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514668: mov word ptr [ebx + 0x344], dx */ W16((u32)(r_ebx+0x344u), (u16)r_edx);
    /* 0051466f: jmp 0x5146c3 */ goto L_005146c3;
L_00514671:; BB(0x00514671);
    /* 00514671: mov esi, dword ptr [0xa72d3c] */ r_esi = R32((u32)(0xa72d3cu));
    /* 00514677: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
    /* 0051467d: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 00514683: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514685: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 0051468c: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0051468f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00514692: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00514696: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0051469b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005146a0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005146a4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005146a8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 005146ac: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005146b0: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 005146b4: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 005146bb: jmp 0x5146c3 */ goto L_005146c3;
L_005146bd:; BB(0x005146bd);
    /* 005146bd: fld dword ptr [0x920924] */ FPUSH(R_F32((u32)(0x920924u)));
L_005146c3:; BB(0x005146c3);
    /* 005146c3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005146c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005146c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005146cb: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005146d3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5146d8u); f_00772b44();
    /* 005146d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005146da: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5146dfu); f_007b6880();
    /* 005146df: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005146e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005146e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005146e4: ret  */ FN_RET(0x00514552); r_esp += 4; return;
L_00514711:; BB(0x00514711);
    /* 00514711: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00514715: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00514719: jmp 0x5145a5 */ goto L_005145a5;
L_0051471e:; BB(0x0051471e);
    /* 0051471e: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00514722: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00514726: jmp 0x5145a5 */ goto L_005145a5;
}

void f_0051472c(void) /* sub_51472C */
{
    FN_ENTER(0x0051472c);
    /* 0051472c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051472d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051472e: mov esi, ecx */ r_esi = r_ecx;
    /* 00514730: mov ecx, esi */ r_ecx = r_esi;
    /* 00514732: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x514737u); f_00770738();
    /* 00514737: mov ebp, eax */ r_ebp = r_eax;
    /* 00514739: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00514740: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514742: jne 0x514835 */ if (!fZ) goto L_00514835;
L_00514748:; BB(0x00514748);
    /* 00514748: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051474a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051474c: mov ecx, esi */ r_ecx = r_esi;
    /* 0051474e: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x514753u); f_00772b44();
    /* 00514753: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514755: mov ecx, esi */ r_ecx = r_esi;
    /* 00514757: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51475cu); f_007aaa30();
    /* 0051475c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051475e: je 0x514789 */ if (fZ) goto L_00514789;
L_00514760:; BB(0x00514760);
    /* 00514760: push 0xc3 */ { u32 v = 0xc3u; r_esp -= 4; W32(r_esp, v); }
    /* 00514765: mov ecx, esi */ r_ecx = r_esi;
    /* 00514767: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51476cu); f_007879b8();
    /* 0051476c: mov ecx, eax */ r_ecx = r_eax;
    /* 0051476e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00514771: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514774: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514776: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514777: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51477cu); f_00814298();
    /* 0051477c: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 00514781: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x514786u); f_00814680();
    /* 00514786: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00514789:; BB(0x00514789);
    /* 00514789: mov edx, dword ptr [esi + 0xb4] */ r_edx = R32((u32)(r_esi+0xb4u));
    /* 0051478f: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514792: je 0x514927 */ if (fZ) goto L_00514927;
L_00514798:; BB(0x00514798);
    /* 00514798: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051479a: je 0x514927 */ if (fZ) goto L_00514927;
L_005147a0:; BB(0x005147a0);
    /* 005147a0: mov edx, dword ptr [0xa72d3c] */ r_edx = R32((u32)(0xa72d3cu));
    /* 005147a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005147a8: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 005147ae: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 005147b1: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 005147b4: mov dword ptr [esi + 0xd0], edx */ W32((u32)(r_esi+0xd0u), r_edx);
    /* 005147ba: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 005147c0: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005147c6: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 005147cc: mov edx, 2 */ r_edx = 0x2u;
    /* 005147d1: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 005147d8: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005147de: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 005147e4: mov ecx, esi */ r_ecx = r_esi;
    /* 005147e6: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 005147ec: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x5147f1u); f_00771c8c();
    /* 005147f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005147f3: je 0x51480e */ if (fZ) goto L_0051480e;
L_005147f5:; BB(0x005147f5);
    /* 005147f5: push dword ptr [esi + 0x308] */ { u32 v = R32((u32)(r_esi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 005147fb: push dword ptr [esi + 0x304] */ { u32 v = R32((u32)(r_esi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514801: mov ecx, esi */ r_ecx = r_esi;
    /* 00514803: push dword ptr [esi + 0x300] */ { u32 v = R32((u32)(r_esi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514809: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x51480eu); f_00771f1c();
L_0051480e:; BB(0x0051480e);
    /* 0051480e: mov dword ptr [esi + 0x390], 0 */ W32((u32)(r_esi+0x390u), 0x0u);
    /* 00514818: mov eax, 1 */ r_eax = 0x1u;
    /* 0051481d: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00514824: mov edx, 0x96 */ r_edx = 0x96u;
    /* 00514829: mov word ptr [esi + 0x344], dx */ W16((u32)(r_esi+0x344u), (u16)r_edx);
    /* 00514830: jmp 0x514927 */ goto L_00514927;
L_00514835:; BB(0x00514835);
    /* 00514835: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514837: je 0x5148e0 */ if (fZ) goto L_005148e0;
L_0051483d:; BB(0x0051483d);
    /* 0051483d: mov edx, dword ptr [0xa72d3c] */ r_edx = R32((u32)(0xa72d3cu));
    /* 00514843: push dword ptr [ebp + 0x308] */ { u32 v = R32((u32)(r_ebp+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514849: push dword ptr [ebp + 0x304] */ { u32 v = R32((u32)(r_ebp+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051484f: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 00514855: push dword ptr [ebp + 0x300] */ { u32 v = R32((u32)(r_ebp+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051485b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0051485e: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00514864: mov ecx, esi */ r_ecx = r_esi;
    /* 00514866: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514869: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051486e: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514871: call 0x7726d0 */ r_esp -= 4; W32(r_esp, 0x514876u); f_007726d0();
    /* 00514876: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 0051487c: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0051487e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514880: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00514882: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514884: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00514885: jae 0x514890 */ if (!fC) goto L_00514890;
L_00514887:; BB(0x00514887);
    /* 00514887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514889: mov ecx, esi */ r_ecx = r_esi;
    /* 0051488b: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x514890u); f_007706b0();
L_00514890:; BB(0x00514890);
    /* 00514890: lea edx, [esi + 0x2a4] */ r_edx = (u32)(r_esi+0x2a4u);
    /* 00514896: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00514899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051489a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051489b: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5148a0u); f_007a9180();
    /* 005148a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005148a3: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 005148a9: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005148ac: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 005148b2: fadd dword ptr [ebp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xcu));
    /* 005148b5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005148b7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005148b9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005148bb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005148bc: ja 0x5148d6 */ if ((!fC&&!fZ)) goto L_005148d6;
L_005148be:; BB(0x005148be);
    /* 005148be: movsx eax, word ptr [esi + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x344u));
    /* 005148c5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005148c8: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005148cf: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005148d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005148d4: jge 0x5148e0 */ if ((fS==fO)) goto L_005148e0;
L_005148d6:; BB(0x005148d6);
    /* 005148d6: mov dword ptr [esi + 0x38c], 0 */ W32((u32)(r_esi+0x38cu), 0x0u);
L_005148e0:; BB(0x005148e0);
    /* 005148e0: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005148e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005148e7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5148ecu); f_007aaa30();
    /* 005148ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005148ee: jne 0x514900 */ if (!fZ) goto L_00514900;
L_005148f0:; BB(0x005148f0);
    /* 005148f0: push 0x41980000 */ { u32 v = 0x41980000u; r_esp -= 4; W32(r_esp, v); }
    /* 005148f5: mov ecx, esi */ r_ecx = r_esi;
    /* 005148f7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5148fcu); f_007aaa30();
    /* 005148fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005148fe: je 0x514927 */ if (fZ) goto L_00514927;
L_00514900:; BB(0x00514900);
    /* 00514900: push 0xba */ { u32 v = 0xbau; r_esp -= 4; W32(r_esp, v); }
    /* 00514905: mov ecx, esi */ r_ecx = r_esi;
    /* 00514907: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51490cu); f_007879b8();
    /* 0051490c: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0051490f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514911: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514912: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514913: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00514914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514915: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51491au); f_00814298();
    /* 0051491a: push 0xfffffc00 */ { u32 v = 0xfffffc00u; r_esp -= 4; W32(r_esp, v); }
    /* 0051491f: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x514924u); f_00814680();
    /* 00514924: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00514927:; BB(0x00514927);
    /* 00514927: mov ecx, esi */ r_ecx = r_esi;
    /* 00514929: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51492eu); f_007aa094();
    /* 0051492e: mov ecx, esi */ r_ecx = r_esi;
    /* 00514930: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x514935u); f_007b6880();
    /* 00514935: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00514936: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00514937: ret  */ FN_RET(0x0051472c); r_esp += 4; return;
}

void f_00514938(void) /* sub_514938 */
{
    FN_ENTER(0x00514938);
    /* 00514938: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514939: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051493a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051493d: mov esi, ecx */ r_esi = r_ecx;
    /* 0051493f: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00514942: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00514947: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0051494a: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00514950: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00514953: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00514956: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00514959: mov ecx, esi */ r_ecx = r_esi;
    /* 0051495b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x514960u); f_007aa094();
    /* 00514960: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00514967: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051496a: jne 0x514ae4 */ if (!fZ) goto L_00514ae4;
L_00514970:; BB(0x00514970);
    /* 00514970: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514975: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00514978: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 0051497e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00514981: fadd dword ptr [esi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x310u));
    /* 00514987: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0051498a: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00514990: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00514992: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00514995: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00514998: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 0051499b: mov ecx, esi */ r_ecx = r_esi;
    /* 0051499d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5149a2u); f_007aaa30();
    /* 005149a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005149a4: je 0x514cb2 */ if (fZ) goto L_00514cb2;
L_005149aa:; BB(0x005149aa);
    /* 005149aa: mov eax, 2 */ r_eax = 0x2u;
    /* 005149af: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 005149b6: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 005149bb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005149bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005149bf: jle 0x514a9f */ if ((fZ||fS!=fO)) goto L_00514a9f;
L_005149c5:; BB(0x005149c5);
    /* 005149c5: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
L_005149c9:; BB(0x005149c9);
    /* 005149c9: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 005149d0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005149d2: je 0x514cc1 */ if (fZ) goto L_00514cc1;
L_005149d8:; BB(0x005149d8);
    /* 005149d8: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 005149dc: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005149e2: jge 0x514cb8 */ if ((fS==fO)) goto L_00514cb8;
L_005149e8:; BB(0x005149e8);
    /* 005149e8: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 005149ef: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005149f2: jne 0x514a90 */ if (!fZ) goto L_00514a90;
L_005149f8:; BB(0x005149f8);
    /* 005149f8: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005149fe: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00514a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514a05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a06: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x514a0bu); f_007a9180();
    /* 00514a0b: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00514a0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a12: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00514a16: fcomp dword ptr [0x9208ec] */ fx_compare(ST(0), R_F32((u32)(0x9208ecu))); FPOP();
    /* 00514a1c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514a1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00514a1f: ja 0x514a56 */ if ((!fC&&!fZ)) goto L_00514a56;
L_00514a21:; BB(0x00514a21);
    /* 00514a21: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00514a23: mov dword ptr [esp + 4], 0x41c80000 */ W32((u32)(r_esp+0x4u), 0x41c80000u);
    /* 00514a2b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00514a2d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00514a32: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00514a35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a37: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514a38: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a3d: mov ecx, edi */ r_ecx = r_edi;
    /* 00514a3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514a42: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x514a45u); call_ind(t); }
    /* 00514a45: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00514a47: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514a4a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00514a4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00514a50: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00514a53: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x514a56u); call_ind(t); }
L_00514a56:; BB(0x00514a56);
    /* 00514a56: fld dword ptr [0xa72d20] */ FPUSH(R_F32((u32)(0xa72d20u)));
    /* 00514a5c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514a5e: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00514a62: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00514a64: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514a66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00514a67: jbe 0x514a70 */ if ((fC||fZ)) goto L_00514a70;
L_00514a69:; BB(0x00514a69);
    /* 00514a69: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00514a6e: jmp 0x514a90 */ goto L_00514a90;
L_00514a70:; BB(0x00514a70);
    /* 00514a70: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00514a74: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514a7a: je 0x514a83 */ if (fZ) goto L_00514a83;
L_00514a7c:; BB(0x00514a7c);
    /* 00514a7c: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00514a81: jmp 0x514a90 */ goto L_00514a90;
L_00514a83:; BB(0x00514a83);
    /* 00514a83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514a85: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x514a8au); f_004d4288();
    /* 00514a8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00514a8b: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_00514a90:; BB(0x00514a90);
    /* 00514a90: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00514a93: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514a95: jl 0x5149c9 */ if ((fS!=fO)) goto L_005149c9;
L_00514a9b:; BB(0x00514a9b);
    /* 00514a9b: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00514a9f:; BB(0x00514a9f);
    /* 00514a9f: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00514aa4: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00514aa7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514aa8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x514aadu); f_0050b510();
    /* 00514aad: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ab2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514ab3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x514ab8u); f_0050b510();
    /* 00514ab8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514abb: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00514ac0: mov ecx, esi */ r_ecx = r_esi;
    /* 00514ac2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x514ac7u); f_007879b8();
    /* 00514ac7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514ac9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514aca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514acb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514acd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x514ad2u); f_00814298();
    /* 00514ad2: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 00514ad7: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x514adcu); f_00814680();
    /* 00514adc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514adf: jmp 0x514cb2 */ goto L_00514cb2;
L_00514ae4:; BB(0x00514ae4);
    /* 00514ae4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514ae7: jne 0x514b3b */ if (!fZ) goto L_00514b3b;
L_00514ae9:; BB(0x00514ae9);
    /* 00514ae9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514aeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514aed: mov ecx, esi */ r_ecx = r_esi;
    /* 00514aef: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x514af4u); f_00772b44();
    /* 00514af4: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00514afa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514afd: je 0x514cb2 */ if (fZ) goto L_00514cb2;
L_00514b03:; BB(0x00514b03);
    /* 00514b03: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00514b06: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 00514b0c: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00514b11: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00514b14: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00514b17: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00514b1a: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00514b1d: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00514b27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00514b29: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00514b30: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00514b36: jmp 0x514cb2 */ goto L_00514cb2;
L_00514b3b:; BB(0x00514b3b);
    /* 00514b3b: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00514b3e: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 00514b41: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 00514b46: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00514b49: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00514b4c: mov dword ptr [0xaab4f4], ebx */ W32((u32)(0xaab4f4u), r_ebx);
    /* 00514b52: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 00514b57: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 00514b5c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x514b61u); f_0082f9c4();
    /* 00514b61: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00514b67: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00514b6d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00514b6f: fmul qword ptr [0x920848] */ ST(0) = ST(0) * R_F64((u32)(0x920848u));
    /* 00514b75: fdiv qword ptr [0x920840] */ ST(0) = ST(0) / R_F64((u32)(0x920840u));
    /* 00514b7b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00514b7f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00514b84: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00514b89: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00514b8d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00514b91: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00514b95: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00514b99: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00514b9f: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00514ba3: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514ba6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514ba7: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00514baa: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x514bafu); f_007a8c74();
    /* 00514baf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514bb2: mov edx, dword ptr [esi + 0x358] */ r_edx = R32((u32)(r_esi+0x358u));
    /* 00514bb8: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00514bbb: cmp eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514bbe: jge 0x514cb2 */ if ((fS==fO)) goto L_00514cb2;
L_00514bc4:; BB(0x00514bc4);
    /* 00514bc4: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514bc9: mov eax, 5 */ r_eax = 0x5u;
    /* 00514bce: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00514bd5: mov ecx, esi */ r_ecx = r_esi;
    /* 00514bd7: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x514bdcu); f_007aaa30();
    /* 00514bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514bde: je 0x514cb2 */ if (fZ) goto L_00514cb2;
L_00514be4:; BB(0x00514be4);
    /* 00514be4: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00514bea: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514bec: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00514bf2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514bf4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00514bf6: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00514bf9: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 00514bfc: mov ebx, dword ptr [esi + 0x58] */ r_ebx = R32((u32)(r_esi+0x58u));
    /* 00514bff: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00514c05: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00514c08: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00514c0e: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00514c14: mov dword ptr [esi + 0x298], eax */ W32((u32)(r_esi+0x298u), r_eax);
    /* 00514c1a: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00514c1d: mov dword ptr [esi + 0x29c], eax */ W32((u32)(r_esi+0x29cu), r_eax);
    /* 00514c23: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00514c26: mov dword ptr [esi + 0x2a0], eax */ W32((u32)(r_esi+0x2a0u), r_eax);
    /* 00514c2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00514c2d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00514c30: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x514c35u); f_0082dc9c();
    /* 00514c35: fld dword ptr [0x9208f8] */ FPUSH(R_F32((u32)(0x9208f8u)));
    /* 00514c3b: fdiv dword ptr [esi + 0xc8] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xc8u));
    /* 00514c41: mov eax, dword ptr [esi + 0x298] */ r_eax = R32((u32)(r_esi+0x298u));
    /* 00514c47: mov edx, dword ptr [esi + 0x29c] */ r_edx = R32((u32)(r_esi+0x29cu));
    /* 00514c4d: mov ebx, dword ptr [esi + 0x2a0] */ r_ebx = R32((u32)(r_esi+0x2a0u));
    /* 00514c53: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00514c55: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00514c59: fst dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0));
    /* 00514c5f: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514c62: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00514c65: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00514c69: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 00514c6f: mov ecx, esi */ r_ecx = r_esi;
    /* 00514c71: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00514c75: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00514c79: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00514c7d: mov eax, dword ptr [esi + 0x2a8] */ r_eax = R32((u32)(r_esi+0x2a8u));
    /* 00514c83: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00514c87: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 00514c8d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00514c91: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x514c96u); f_00771f5c();
    /* 00514c96: fld dword ptr [0xaab4f4] */ FPUSH(R_F32((u32)(0xaab4f4u)));
    /* 00514c9c: fdiv dword ptr [esp + 0x20] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x20u));
    /* 00514ca0: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 00514ca6: mov eax, 1 */ r_eax = 0x1u;
    /* 00514cab: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_00514cb2:; BB(0x00514cb2);
    /* 00514cb2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00514cb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00514cb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00514cb7: ret  */ FN_RET(0x00514938); r_esp += 4; return;
L_00514cb8:; BB(0x00514cb8);
    /* 00514cb8: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00514cbc: jmp 0x514a9f */ goto L_00514a9f;
L_00514cc1:; BB(0x00514cc1);
    /* 00514cc1: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 00514cc5: jmp 0x514a9f */ goto L_00514a9f;
}

void f_00514ccc(void) /* sub_514CCC */
{
    FN_ENTER(0x00514ccc);
    /* 00514ccc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514ccd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514cce: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00514cd1: mov esi, ecx */ r_esi = r_ecx;
    /* 00514cd3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00514cd6: or eax, 0x6000000 */ {  u32 a = r_eax; u32 b = 0x6000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00514cdb: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00514cde: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 00514ce4: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00514ce7: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00514cea: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00514ced: mov ecx, esi */ r_ecx = r_esi;
    /* 00514cef: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x514cf4u); f_007aa094();
    /* 00514cf4: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00514cfb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514cfe: jne 0x514e79 */ if (!fZ) goto L_00514e79;
L_00514d04:; BB(0x00514d04);
    /* 00514d04: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514d09: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00514d0c: fadd dword ptr [esi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x30cu));
    /* 00514d12: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00514d15: fadd dword ptr [esi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x310u));
    /* 00514d1b: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00514d1e: fadd dword ptr [esi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x314u));
    /* 00514d24: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00514d26: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00514d29: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00514d2c: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 00514d2f: mov ecx, esi */ r_ecx = r_esi;
    /* 00514d31: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x514d36u); f_007aaa30();
    /* 00514d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514d38: je 0x51507d */ if (fZ) goto L_0051507d;
L_00514d3e:; BB(0x00514d3e);
    /* 00514d3e: mov eax, 2 */ r_eax = 0x2u;
    /* 00514d43: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00514d4a: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00514d4f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00514d51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00514d53: jle 0x514e34 */ if ((fZ||fS!=fO)) goto L_00514e34;
L_00514d59:; BB(0x00514d59);
    /* 00514d59: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
L_00514d5d:; BB(0x00514d5d);
    /* 00514d5d: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00514d64: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514d66: je 0x51508c */ if (fZ) goto L_0051508c;
L_00514d6c:; BB(0x00514d6c);
    /* 00514d6c: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00514d70: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514d76: jge 0x515083 */ if ((fS==fO)) goto L_00515083;
L_00514d7c:; BB(0x00514d7c);
    /* 00514d7c: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 00514d83: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514d86: jne 0x514e25 */ if (!fZ) goto L_00514e25;
L_00514d8c:; BB(0x00514d8c);
    /* 00514d8c: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 00514d92: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00514d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514d99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514d9a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x514d9fu); f_007a9180();
    /* 00514d9f: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00514da3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514da6: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00514daa: fcomp dword ptr [0x9208cc] */ fx_compare(ST(0), R_F32((u32)(0x9208ccu))); FPOP();
    /* 00514db0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514db2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00514db3: ja 0x514deb */ if ((!fC&&!fZ)) goto L_00514deb;
L_00514db5:; BB(0x00514db5);
    /* 00514db5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00514db7: mov dword ptr [esp + 0x28], 0x41c80000 */ W32((u32)(r_esp+0x28u), 0x41c80000u);
    /* 00514dbf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00514dc1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00514dc6: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00514dca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514dcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514dcc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00514dcd: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514dd2: mov ecx, edi */ r_ecx = r_edi;
    /* 00514dd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514dd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00514dd7: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x514ddau); call_ind(t); }
    /* 00514dda: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00514ddc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514ddf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00514de3: mov ecx, edi */ r_ecx = r_edi;
    /* 00514de5: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00514de8: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x514debu); call_ind(t); }
L_00514deb:; BB(0x00514deb);
    /* 00514deb: fld dword ptr [0xa72d20] */ FPUSH(R_F32((u32)(0xa72d20u)));
    /* 00514df1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514df3: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00514df7: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00514df9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00514dfb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00514dfc: jbe 0x514e05 */ if ((fC||fZ)) goto L_00514e05;
L_00514dfe:; BB(0x00514dfe);
    /* 00514dfe: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00514e03: jmp 0x514e25 */ goto L_00514e25;
L_00514e05:; BB(0x00514e05);
    /* 00514e05: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00514e09: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e0f: je 0x514e18 */ if (fZ) goto L_00514e18;
L_00514e11:; BB(0x00514e11);
    /* 00514e11: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 00514e16: jmp 0x514e25 */ goto L_00514e25;
L_00514e18:; BB(0x00514e18);
    /* 00514e18: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e1a: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x514e1fu); f_004d4288();
    /* 00514e1f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00514e20: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_00514e25:; BB(0x00514e25);
    /* 00514e25: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00514e28: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00514e2a: jl 0x514d5d */ if ((fS!=fO)) goto L_00514d5d;
L_00514e30:; BB(0x00514e30);
    /* 00514e30: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_00514e34:; BB(0x00514e34);
    /* 00514e34: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00514e39: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00514e3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e3d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x514e42u); f_0050b510();
    /* 00514e42: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e48: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x514e4du); f_0050b510();
    /* 00514e4d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514e50: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00514e55: mov ecx, esi */ r_ecx = r_esi;
    /* 00514e57: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x514e5cu); f_007879b8();
    /* 00514e5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00514e5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00514e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514e62: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x514e67u); f_00814298();
    /* 00514e67: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e6c: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x514e71u); f_00814680();
    /* 00514e71: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00514e74: jmp 0x51507d */ goto L_0051507d;
L_00514e79:; BB(0x00514e79);
    /* 00514e79: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e7c: jne 0x514ed0 */ if (!fZ) goto L_00514ed0;
L_00514e7e:; BB(0x00514e7e);
    /* 00514e7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e80: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00514e82: mov ecx, esi */ r_ecx = r_esi;
    /* 00514e84: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x514e89u); f_00772b44();
    /* 00514e89: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00514e8f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e92: je 0x51507d */ if (fZ) goto L_0051507d;
L_00514e98:; BB(0x00514e98);
    /* 00514e98: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00514e9b: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 00514ea1: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00514ea6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00514ea9: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00514eac: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00514eaf: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00514eb2: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00514ebc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00514ebe: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00514ec5: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00514ecb: jmp 0x51507d */ goto L_0051507d;
L_00514ed0:; BB(0x00514ed0);
    /* 00514ed0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00514ed7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00514edc: mov dword ptr [esp + 4], 0xc3fa0000 */ W32((u32)(r_esp+0x4u), 0xc3fa0000u);
    /* 00514ee4: mov dword ptr [esp + 8], 0x43480000 */ W32((u32)(r_esp+0x8u), 0x43480000u);
    /* 00514eec: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x514ef1u); f_0082d990();
    /* 00514ef1: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00514ef4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00514ef6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x514efbu); f_0082d8bc();
    /* 00514efb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00514efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00514eff: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00514f03: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00514f05: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x514f0au); f_0082eab8();
    /* 00514f0a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00514f0f: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x514f14u); f_0082eb80();
    /* 00514f14: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00514f18: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00514f1b: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00514f1e: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 00514f21: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00514f25: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 00514f28: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00514f2c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00514f30: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x514f35u); f_0082f9c4();
    /* 00514f35: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00514f39: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00514f3d: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00514f41: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00514f44: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00514f47: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 00514f4a: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00514f4f: mov ecx, esi */ r_ecx = r_esi;
    /* 00514f51: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x514f56u); f_007aaa30();
    /* 00514f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514f58: je 0x51507d */ if (fZ) goto L_0051507d;
L_00514f5e:; BB(0x00514f5e);
    /* 00514f5e: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00514f61: mov ebx, dword ptr [esi + 0x54] */ r_ebx = R32((u32)(r_esi+0x54u));
    /* 00514f64: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00514f67: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00514f6a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00514f70: mov dword ptr [esi + 0x2a8], ebx */ W32((u32)(r_esi+0x2a8u), r_ebx);
    /* 00514f76: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00514f7a: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00514f7e: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00514f82: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 00514f88: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 00514f8e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00514f91: mov dword ptr [esi + 0x29c], ecx */ W32((u32)(r_esi+0x29cu), r_ecx);
    /* 00514f97: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00514f9a: mov dword ptr [esi + 0x2a0], ecx */ W32((u32)(r_esi+0x2a0u), r_ecx);
    /* 00514fa0: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00514fa4: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00514fa7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x514facu); f_0082f9c4();
    /* 00514fac: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00514fb0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00514fb4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00514fb6: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00514fba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00514fbc: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00514fc0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00514fc2: fmul qword ptr [0x920838] */ ST(0) = ST(0) * R_F64((u32)(0x920838u));
    /* 00514fc8: fdiv qword ptr [0x920830] */ ST(0) = ST(0) / R_F64((u32)(0x920830u));
    /* 00514fce: fnstcw word ptr [esp + 0x2c] */ W16((u32)(r_esp+0x2cu), fcw);
    /* 00514fd2: movzx eax, word ptr [esp + 0x2c] */ r_eax = (u32)R16((u32)(r_esp+0x2cu));
    /* 00514fd7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00514fdc: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00514fe0: fldcw word ptr [esp + 0x34] */ fcw = R16((u32)(r_esp+0x34u));
    /* 00514fe4: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00514fe7: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00514feb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00514fec: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00514ff0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514ff2: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00514ff6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00514ff8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00514ffa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00514ffd: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x515002u); f_0082dc9c();
    /* 00515002: fld dword ptr [0x9208d4] */ FPUSH(R_F32((u32)(0x9208d4u)));
    /* 00515008: fdiv dword ptr [esi + 0xc8] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0xc8u));
    /* 0051500e: mov eax, dword ptr [esi + 0x298] */ r_eax = R32((u32)(r_esi+0x298u));
    /* 00515014: mov edx, dword ptr [esi + 0x29c] */ r_edx = R32((u32)(r_esi+0x29cu));
    /* 0051501a: mov ebx, dword ptr [esi + 0x2a0] */ r_ebx = R32((u32)(r_esi+0x2a0u));
    /* 00515020: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00515022: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00515026: fst dword ptr [esi + 0x380] */ W_F32((u32)(r_esi+0x380u), ST(0));
    /* 0051502c: add esp, -0x1c */ {  u32 a = r_esp; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051502f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00515032: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00515036: mov eax, dword ptr [esi + 0x2a4] */ r_eax = R32((u32)(r_esi+0x2a4u));
    /* 0051503c: mov ecx, esi */ r_ecx = r_esi;
    /* 0051503e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00515042: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 00515046: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051504a: mov eax, dword ptr [esi + 0x2a8] */ r_eax = R32((u32)(r_esi+0x2a8u));
    /* 00515050: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00515054: mov eax, dword ptr [esi + 0x2ac] */ r_eax = R32((u32)(r_esi+0x2acu));
    /* 0051505a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0051505e: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x515063u); f_00771f5c();
    /* 00515063: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00515067: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 0051506b: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 00515071: mov eax, 1 */ r_eax = 0x1u;
    /* 00515076: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_0051507d:; BB(0x0051507d);
    /* 0051507d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515080: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515082: ret  */ FN_RET(0x00514ccc); r_esp += 4; return;
L_00515083:; BB(0x00515083);
    /* 00515083: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00515087: jmp 0x514e34 */ goto L_00514e34;
L_0051508c:; BB(0x0051508c);
    /* 0051508c: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00515090: jmp 0x514e34 */ goto L_00514e34;
}

void f_00514e8b(void)
{
    FN_ENTER(0x00514e8b);
    /* 00514e8b: mov ah, 0 */ r_eax = (r_eax & 0xffff00ffu) | (((0x0u) & 0xffu) << 8);
    /* 00514e8d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00514e8f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00514e92: je 0x51507d */ if (fZ) goto L_0051507d;
L_00514e98:; BB(0x00514e98);
    /* 00514e98: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00514e9b: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 00514ea1: and eax, 0xf9dfffff */ {  u32 a = r_eax; u32 b = 0xf9dfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00514ea6: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00514ea9: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 00514eac: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00514eaf: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00514eb2: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 00514ebc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00514ebe: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 00514ec5: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00514ecb: jmp 0x51507d */ goto L_0051507d;
L_0051507d:; BB(0x0051507d);
    /* 0051507d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00515080: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00515081: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00515082: ret  */ FN_RET(0x00514e8b); r_esp += 4; return;
}

