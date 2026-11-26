#include "protos.h"

void f_0058335c(void)
{
    FN_ENTER(0x0058335c);
    /* 0058335c: mov ecx, dword ptr [0xa742a4] */ r_ecx = R32((u32)(0xa742a4u));
    /* 00583362: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583364: je 0x583379 */ if (fZ) goto L_00583379;
L_00583366:; BB(0x00583366);
    /* 00583366: je 0x58336f */ if (fZ) goto L_0058336f;
L_00583368:; BB(0x00583368);
    /* 00583368: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058336a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x58336fu); f_004066a8();
L_0058336f:; BB(0x0058336f);
    /* 0058336f: mov dword ptr [0xa742a4], 0 */ W32((u32)(0xa742a4u), 0x0u);
L_00583379:; BB(0x00583379);
    /* 00583379: ret  */ FN_RET(0x0058335c); r_esp += 4; return;
}

void f_005833ec(void) /* sub_5833EC */
{
    FN_ENTER(0x005833ec);
    /* 005833ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005833ed: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005833f0: mov edi, ecx */ r_edi = r_ecx;
    /* 005833f2: movzx eax, byte ptr [0xa74224] */ r_eax = (u32)R8((u32)(0xa74224u));
    /* 005833f9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005833fb: jne 0x583411 */ if (!fZ) goto L_00583411;
L_005833fd:; BB(0x005833fd);
    /* 005833fd: mov dword ptr [0xa74228], 0x41200000 */ W32((u32)(0xa74228u), 0x41200000u);
    /* 00583407: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058340c: mov byte ptr [0xa74224], al */ W8((u32)(0xa74224u), (u8)r_eax);
L_00583411:; BB(0x00583411);
    /* 00583411: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 00583414: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00583417: fadd dword ptr [0xa74228] */ ST(0) = ST(0) + R_F32((u32)(0xa74228u));
    /* 0058341d: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00583420: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00583424: mov ecx, edi */ r_ecx = r_edi;
    /* 00583426: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00583429: lea eax, [edi + 0x250] */ r_eax = (u32)(r_edi+0x250u);
    /* 0058342f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00583433: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00583436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583437: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583438: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x58343du); f_007b4c58();
    /* 0058343d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058343f: je 0x58344b */ if (fZ) goto L_0058344b;
L_00583441:; BB(0x00583441);
    /* 00583441: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00583445: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
L_0058344b:; BB(0x0058344b);
    /* 0058344b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058344e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058344f: ret  */ FN_RET(0x005833ec); r_esp += 4; return;
}

void f_00583450(void)
{
    FN_ENTER(0x00583450);
    /* 00583450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583451: mov ebp, esp */ r_ebp = r_esp;
    /* 00583453: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583455: push 0x8d7cc4 */ { u32 v = 0x8d7cc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058345a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00583460: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583461: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00583468: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058346b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058346e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00583471: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00583474: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00583477: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0058347c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00583483: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x583488u); f_008581c5();
    /* 00583488: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583489: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0058348c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058348e: je 0x58356a */ if (fZ) goto L_0058356a;
L_00583494:; BB(0x00583494);
    /* 00583494: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0058349b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005834a2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005834a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005834a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005834a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005834a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005834aa: push 0x9bf3d0 */ { u32 v = 0x9bf3d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005834af: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005834b1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x5834b6u); f_005b7a84();
    /* 005834b6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 005834b9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005834c0: mov dword ptr [0xa742a4], edi */ W32((u32)(0xa742a4u), r_edi);
    /* 005834c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005834cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005834cf: je 0x583553 */ if (fZ) goto L_00583553;
L_005834d5:; BB(0x005834d5);
    /* 005834d5: mov eax, dword ptr [0x927d38] */ r_eax = R32((u32)(0x927d38u));
    /* 005834da: movzx edx, word ptr [0x927d3c] */ r_edx = (u32)R16((u32)(0x927d3cu));
    /* 005834e1: movzx ecx, word ptr [0x927d3e] */ r_ecx = (u32)R16((u32)(0x927d3eu));
    /* 005834e8: movzx ebx, word ptr [0x927d40] */ r_ebx = (u32)R16((u32)(0x927d40u));
    /* 005834ef: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005834f5: fld dword ptr [0x927db8] */ FPUSH(R_F32((u32)(0x927db8u)));
    /* 005834fb: fmul dword ptr [0xa74284] */ ST(0) = ST(0) * R_F32((u32)(0xa74284u));
    /* 00583501: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00583504: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583507: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058350b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00583513: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00583517: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0058351d: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00583521: mov edi, 0x23 */ r_edi = 0x23u;
    /* 00583526: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0058352a: mov word ptr [esp], di */ W16((u32)(r_esp), (u16)r_edi);
    /* 0058352e: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00583531: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00583534: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00583538: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0058353b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058353f: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00583542: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00583546: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x58354bu); f_00608470();
    /* 0058354b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058354e: call 0x587220 */ r_esp -= 4; W32(r_esp, 0x583553u); f_00587220();
L_00583553:; BB(0x00583553);
    /* 00583553: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00583556: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583559: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058355c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058355f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583566: mov esp, ebp */ r_esp = r_ebp;
    /* 00583568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583569: ret  */ FN_RET(0x00583450); r_esp += 4; return;
L_0058356a:; BB(0x0058356a);
    /* 0058356a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0058356c: jmp 0x5834c0 */ f_005834c0(); return;
}

void f_00583574(void) /* sub_583574 */
{
    FN_ENTER(0x00583574);
    /* 00583574: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 0058357a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0058357d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583580: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583583: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00583586: mov dword ptr [ecx + 0x390], 0x1e */ W32((u32)(r_ecx+0x390u), 0x1eu);
    /* 00583590: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583595: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00583598: add dword ptr [ecx + 0x3f8], 1 */ { u32 ad = (u32)(r_ecx+0x3f8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058359f: mov eax, 0xb */ r_eax = 0xbu;
    /* 005835a4: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005835ab: ret  */ FN_RET(0x00583574); r_esp += 4; return;
}

void f_005835ac(void) /* sub_5835AC */
{
    FN_ENTER(0x005835ac);
    /* 005835ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005835ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005835af: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 005835b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005835b7: mov dword ptr [ebx + 0x3e4], 1 */ W32((u32)(r_ebx+0x3e4u), 0x1u);
    /* 005835c1: push 0x11e */ { u32 v = 0x11eu; r_esp -= 4; W32(r_esp, v); }
    /* 005835c6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005835c9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005835cc: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005835cf: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005835d2: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005835d7: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005835dc: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 005835df: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5835e4u); f_007879b8();
    /* 005835e4: mov ecx, eax */ r_ecx = r_eax;
    /* 005835e6: lea eax, [ebx + 0x3b4] */ r_eax = (u32)(r_ebx+0x3b4u);
    /* 005835ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005835ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005835ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005835f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005835f1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005835f2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5835f7u); f_00814298();
    /* 005835f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005835fa: push 0x11d */ { u32 v = 0x11du; r_esp -= 4; W32(r_esp, v); }
    /* 005835ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00583601: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x583606u); f_007879b8();
    /* 00583606: mov ecx, eax */ r_ecx = r_eax;
    /* 00583608: lea eax, [ebx + 0x3cc] */ r_eax = (u32)(r_ebx+0x3ccu);
    /* 0058360e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583610: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583611: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583614: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x583619u); f_00814298();
    /* 00583619: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058361c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058361e: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00583624: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583627: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058362a: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 00583630: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00583632: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x583637u); f_007a9a6c();
    /* 00583637: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 0058363d: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583640: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 00583646: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00583647: ret  */ FN_RET(0x005835ac); r_esp += 4; return;
}

void f_00583648(void) /* sub_583648 */
{
    FN_ENTER(0x00583648);
    /* 00583648: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583649: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058364c: mov esi, ecx */ r_esi = r_ecx;
    /* 0058364e: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 00583654: mov dword ptr [esi + 0x3e4], 0 */ W32((u32)(r_esi+0x3e4u), 0x0u);
    /* 0058365e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00583661: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583664: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583667: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0058366a: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058366f: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583674: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00583677: movzx eax, byte ptr [0xa7428c] */ r_eax = (u32)R8((u32)(0xa7428cu));
    /* 0058367e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00583680: jne 0x583696 */ if (!fZ) goto L_00583696;
L_00583682:; BB(0x00583682);
    /* 00583682: mov dword ptr [0xa74290], 0x41200000 */ W32((u32)(0xa74290u), 0x41200000u);
    /* 0058368c: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583691: mov byte ptr [0xa7428c], al */ W8((u32)(0xa7428cu), (u8)r_eax);
L_00583696:; BB(0x00583696);
    /* 00583696: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0058369c: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005836a2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005836a5: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005836ab: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005836af: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005836b3: fadd dword ptr [0xa74290] */ ST(0) = ST(0) + R_F32((u32)(0xa74290u));
    /* 005836b9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005836bd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005836c1: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 005836c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005836c7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005836c9: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005836cb: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 005836d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005836d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005836d2: call 0x50af30 */ r_esp -= 4; W32(r_esp, 0x5836d7u); f_0050af30();
    /* 005836d7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005836da: mov ecx, dword ptr [esi + 0x3ec] */ r_ecx = R32((u32)(r_esi+0x3ecu));
    /* 005836e0: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 005836e7: mov edx, dword ptr [esi + 0x3f0] */ r_edx = R32((u32)(r_esi+0x3f0u));
    /* 005836ed: movzx edx, word ptr [edx + 0x334] */ r_edx = (u32)R16((u32)(r_edx+0x334u));
    /* 005836f4: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005836f6: mov word ptr [esi + 0x334], ax */ W16((u32)(r_esi+0x334u), (u16)r_eax);
    /* 005836fd: call 0x5871b8 */ r_esp -= 4; W32(r_esp, 0x583702u); f_005871b8();
    /* 00583702: mov ecx, dword ptr [esi + 0x3f0] */ r_ecx = R32((u32)(r_esi+0x3f0u));
    /* 00583708: call 0x5871b8 */ r_esp -= 4; W32(r_esp, 0x58370du); f_005871b8();
    /* 0058370d: mov eax, dword ptr [0xa74288] */ r_eax = R32((u32)(0xa74288u));
    /* 00583712: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 00583718: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058371b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058371c: ret  */ FN_RET(0x00583648); r_esp += 4; return;
}

void f_00583720(void) /* sub_583720 */
{
    FN_ENTER(0x00583720);
    /* 00583720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583721: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00583723: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00583729: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0058372c: push 0x11b */ { u32 v = 0x11bu; r_esp -= 4; W32(r_esp, v); }
    /* 00583731: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583734: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583737: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0058373a: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0058373f: mov dword ptr [ebp + 0x3e4], 0 */ W32((u32)(r_ebp+0x3e4u), 0x0u);
    /* 00583749: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058374e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00583751: mov dword ptr [ebp + 0x390], 0x384 */ W32((u32)(r_ebp+0x390u), 0x384u);
    /* 0058375b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058375d: mov dword ptr [ebp + 0x400], 1 */ W32((u32)(r_ebp+0x400u), 0x1u);
    /* 00583767: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58376cu); f_007879b8();
    /* 0058376c: mov ecx, eax */ r_ecx = r_eax;
    /* 0058376e: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00583771: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583773: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583774: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583775: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583776: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00583777: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58377cu); f_00814298();
    /* 0058377c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058377f: mov ecx, dword ptr [ebp + 0x3ec] */ r_ecx = R32((u32)(r_ebp+0x3ecu));
    /* 00583785: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 0058378b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058378e: je 0x5837ca */ if (fZ) goto L_005837ca;
L_00583790:; BB(0x00583790);
    /* 00583790: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583793: je 0x5837ca */ if (fZ) goto L_005837ca;
L_00583795:; BB(0x00583795);
    /* 00583795: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00583797:; BB(0x00583797);
    /* 00583797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583799: jne 0x5837a0 */ if (!fZ) goto L_005837a0;
L_0058379b:; BB(0x0058379b);
    /* 0058379b: call 0x587050 */ r_esp -= 4; W32(r_esp, 0x5837a0u); f_00587050();
L_005837a0:; BB(0x005837a0);
    /* 005837a0: mov ecx, dword ptr [ebp + 0x3f0] */ r_ecx = R32((u32)(r_ebp+0x3f0u));
    /* 005837a6: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 005837ac: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005837af: je 0x5837c3 */ if (fZ) goto L_005837c3;
L_005837b1:; BB(0x005837b1);
    /* 005837b1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005837b4: je 0x5837c3 */ if (fZ) goto L_005837c3;
L_005837b6:; BB(0x005837b6);
    /* 005837b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005837b8:; BB(0x005837b8);
    /* 005837b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005837ba: jne 0x5837c1 */ if (!fZ) goto L_005837c1;
L_005837bc:; BB(0x005837bc);
    /* 005837bc: call 0x587050 */ r_esp -= 4; W32(r_esp, 0x5837c1u); f_00587050();
L_005837c1:; BB(0x005837c1);
    /* 005837c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005837c2: ret  */ FN_RET(0x00583720); r_esp += 4; return;
L_005837c3:; BB(0x005837c3);
    /* 005837c3: mov eax, 1 */ r_eax = 0x1u;
    /* 005837c8: jmp 0x5837b8 */ goto L_005837b8;
L_005837ca:; BB(0x005837ca);
    /* 005837ca: mov eax, 1 */ r_eax = 0x1u;
    /* 005837cf: jmp 0x583797 */ goto L_00583797;
}

void f_005837d4(void) /* sub_5837D4 */
{
    FN_ENTER(0x005837d4);
    /* 005837d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005837d5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005837d8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005837da: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 005837e0: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005837e3: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005837e6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005837e9: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005837ec: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005837f1: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005837f6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005837f9: movzx eax, byte ptr [0xa7422c] */ r_eax = (u32)R8((u32)(0xa7422cu));
    /* 00583800: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00583802: jne 0x583818 */ if (!fZ) goto L_00583818;
L_00583804:; BB(0x00583804);
    /* 00583804: mov dword ptr [0xa74230], 0x22 */ W32((u32)(0xa74230u), 0x22u);
    /* 0058380e: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583813: mov byte ptr [0xa7422c], al */ W8((u32)(0xa7422cu), (u8)r_eax);
L_00583818:; BB(0x00583818);
    /* 00583818: mov eax, dword ptr [0xa74230] */ r_eax = R32((u32)(0xa74230u));
    /* 0058381d: movzx edx, byte ptr [0xa7428c] */ r_edx = (u32)R8((u32)(0xa7428cu));
    /* 00583824: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00583827: jne 0x58383f */ if (!fZ) goto L_0058383f;
L_00583829:; BB(0x00583829);
    /* 00583829: mov dword ptr [0xa74290], 0x41200000 */ W32((u32)(0xa74290u), 0x41200000u);
    /* 00583833: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00583839: mov byte ptr [0xa7428c], dl */ W8((u32)(0xa7428cu), (u8)r_edx);
L_0058383f:; BB(0x0058383f);
    /* 0058383f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00583842: mov edx, dword ptr [ebp + 0x300] */ r_edx = R32((u32)(r_ebp+0x300u));
    /* 00583848: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0058384b: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00583851: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00583855: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00583859: fadd dword ptr [0xa74290] */ ST(0) = ST(0) + R_F32((u32)(0xa74290u));
    /* 0058385f: mov edx, dword ptr [ebp + 0x308] */ r_edx = R32((u32)(r_ebp+0x308u));
    /* 00583865: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00583869: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0058386d: lea edx, [ebp + 0x5c] */ r_edx = (u32)(r_ebp+0x5cu);
    /* 00583870: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00583872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583873: push 0x106 */ { u32 v = 0x106u; r_esp -= 4; W32(r_esp, v); }
    /* 00583878: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058387a: call 0x50af30 */ r_esp -= 4; W32(r_esp, 0x58387fu); f_0050af30();
    /* 0058387f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583882: push 0x11a */ { u32 v = 0x11au; r_esp -= 4; W32(r_esp, v); }
    /* 00583887: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00583889: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58388eu); f_007879b8();
    /* 0058388e: mov ecx, eax */ r_ecx = r_eax;
    /* 00583890: lea eax, [ebp + 0x3b4] */ r_eax = (u32)(r_ebp+0x3b4u);
    /* 00583896: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583898: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583899: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058389a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058389b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058389c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5838a1u); f_00814298();
    /* 005838a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005838a4: push 0x119 */ { u32 v = 0x119u; r_esp -= 4; W32(r_esp, v); }
    /* 005838a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005838ab: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5838b0u); f_007879b8();
    /* 005838b0: mov ecx, eax */ r_ecx = r_eax;
    /* 005838b2: lea eax, [ebp + 0x3cc] */ r_eax = (u32)(r_ebp+0x3ccu);
    /* 005838b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005838ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005838bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005838bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005838bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005838be: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5838c3u); f_00814298();
    /* 005838c3: mov eax, 0xa */ r_eax = 0xau;
    /* 005838c8: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005838cf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005838d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005838d3: ret  */ FN_RET(0x005837d4); r_esp += 4; return;
}

void f_005838d4(void) /* sub_5838D4 */
{
    FN_ENTER(0x005838d4);
    /* 005838d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005838d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005838d6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005838d9: mov esi, ecx */ r_esi = r_ecx;
    /* 005838db: push 0x109 */ { u32 v = 0x109u; r_esp -= 4; W32(r_esp, v); }
    /* 005838e0: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 005838e6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005838e9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005838ec: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005838ef: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005838f2: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005838f7: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005838fa: lea ebp, [esi + 0x3d8] */ r_ebp = (u32)(r_esi+0x3d8u);
    /* 00583900: lea eax, [esi + 0x5c] */ r_eax = (u32)(r_esi+0x5cu);
    /* 00583903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583904: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583905: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x58390au); f_0050bab4();
    /* 0058390a: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0058390d: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00583915: add eax, 0xffffc000 */ {  u32 a = r_eax; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058391a: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0058391e: mov dword ptr [esp + 0x14], 0x4000 */ W32((u32)(r_esp+0x14u), 0x4000u);
    /* 00583926: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0058392a: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 0058392f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583931: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x583936u); f_00509b24();
    /* 00583936: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583939: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0058393c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00583944: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 0058394a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58394fu); f_0082dcbc();
    /* 0058394f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00583952: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00583956: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58395bu); f_0082ddd8();
    /* 0058395b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058395f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00583963: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00583965: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583966: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583967: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583968: call 0x5880c0 */ r_esp -= 4; W32(r_esp, 0x58396du); f_005880c0();
    /* 0058396d: mov dword ptr [esi + 0x390], 0x5a */ W32((u32)(r_esi+0x390u), 0x5au);
    /* 00583977: mov eax, 9 */ r_eax = 0x9u;
    /* 0058397c: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00583983: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00583986: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583987: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00583988: ret  */ FN_RET(0x005838d4); r_esp += 4; return;
}

void f_0058398c(void) /* sub_58398C */
{
    FN_ENTER(0x0058398c);
    /* 0058398c: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 00583992: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00583995: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583998: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0058399b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0058399e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005839a3: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 005839a6: mov eax, 8 */ r_eax = 0x8u;
    /* 005839ab: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005839b2: ret  */ FN_RET(0x0058398c); r_esp += 4; return;
}

void f_005839b4(void) /* sub_5839B4 */
{
    FN_ENTER(0x005839b4);
    /* 005839b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005839b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005839b6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005839b9: mov esi, ecx */ r_esi = r_ecx;
    /* 005839bb: mov edx, dword ptr [esi + 0x398] */ r_edx = R32((u32)(r_esi+0x398u));
    /* 005839c1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 005839c4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005839cc: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005839cf: mov dword ptr [esp + 8], 0x4000 */ W32((u32)(r_esp+0x8u), 0x4000u);
    /* 005839d7: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005839da: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005839dd: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005839e2: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005839e5: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 005839e8: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005839ed: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005839f0: lea ebp, [esi + 0x3c0] */ r_ebp = (u32)(r_esi+0x3c0u);
    /* 005839f6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005839f9: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 005839fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005839ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583a00: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x583a05u); f_00509b24();
    /* 00583a05: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583a08: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00583a0b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00583a13: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 00583a19: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x583a1eu); f_0082dcbc();
    /* 00583a1e: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00583a21: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00583a25: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x583a2au); f_0082ddd8();
    /* 00583a2a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00583a2e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00583a32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00583a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583a35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583a36: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583a37: call 0x5880c0 */ r_esp -= 4; W32(r_esp, 0x583a3cu); f_005880c0();
    /* 00583a3c: mov dword ptr [esi + 0x390], 0x5a */ W32((u32)(r_esi+0x390u), 0x5au);
    /* 00583a46: mov eax, 7 */ r_eax = 0x7u;
    /* 00583a4b: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00583a52: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00583a55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583a56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00583a57: ret  */ FN_RET(0x005839b4); r_esp += 4; return;
}

void f_00583a58(void) /* sub_583A58 */
{
    FN_ENTER(0x00583a58);
    /* 00583a58: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 00583a5e: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00583a61: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583a64: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583a67: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00583a6a: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583a6f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00583a72: mov eax, 6 */ r_eax = 0x6u;
    /* 00583a77: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00583a7e: ret  */ FN_RET(0x00583a58); r_esp += 4; return;
}

void f_00583a80(void) /* sub_583A80 */
{
    FN_ENTER(0x00583a80);
    /* 00583a80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00583a81: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583a82: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583a85: mov edi, ecx */ r_edi = r_ecx;
    /* 00583a87: mov dword ptr [edi + 0x390], 0xa4 */ W32((u32)(r_edi+0x390u), 0xa4u);
    /* 00583a91: mov ecx, edi */ r_ecx = r_edi;
    /* 00583a93: call 0x787534 */ r_esp -= 4; W32(r_esp, 0x583a98u); f_00787534();
    /* 00583a98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00583a99: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x583a9eu); f_008113e4();
    /* 00583a9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583a9f: movzx eax, byte ptr [0xa74234] */ r_eax = (u32)R8((u32)(0xa74234u));
    /* 00583aa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00583aa8: jne 0x583abe */ if (!fZ) goto L_00583abe;
L_00583aaa:; BB(0x00583aaa);
    /* 00583aaa: mov dword ptr [0xa74238], 0x43480000 */ W32((u32)(0xa74238u), 0x43480000u);
    /* 00583ab4: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583ab9: mov byte ptr [0xa74234], al */ W8((u32)(0xa74234u), (u8)r_eax);
L_00583abe:; BB(0x00583abe);
    /* 00583abe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00583ac1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583ac2: mov ebp, 5 */ r_ebp = 0x5u;
    /* 00583ac7: mov ecx, edi */ r_ecx = r_edi;
    /* 00583ac9: push dword ptr [0xa74238] */ { u32 v = R32((u32)(0xa74238u)); r_esp -= 4; W32(r_esp, v); }
    /* 00583acf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x583ad4u); f_007714cc();
    /* 00583ad4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00583ad7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583adc: je 0x583b11 */ if (fZ) goto L_00583b11;
L_00583ade:; BB(0x00583ade);
    /* 00583ade: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00583ae1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x583ae6u); f_0082dcbc();
    /* 00583ae6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00583aea: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00583aed: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x583af2u); f_0082ddd8();
    /* 00583af2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00583af5: fmul dword ptr [esp + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xcu));
    /* 00583af9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00583afd: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00583aff: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00583b01: fcomp dword ptr [0x927da8] */ fx_compare(ST(0), R_F32((u32)(0x927da8u))); FPOP();
    /* 00583b07: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00583b09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00583b0a: jae 0x583b11 */ if (!fC) goto L_00583b11;
L_00583b0c:; BB(0x00583b0c);
    /* 00583b0c: mov ebp, 4 */ r_ebp = 0x4u;
L_00583b11:; BB(0x00583b11);
    /* 00583b11: push 0x123 */ { u32 v = 0x123u; r_esp -= 4; W32(r_esp, v); }
    /* 00583b16: mov word ptr [edi + 0xb8], bp */ W16((u32)(r_edi+0xb8u), (u16)r_ebp);
    /* 00583b1d: mov ecx, edi */ r_ecx = r_edi;
    /* 00583b1f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x583b24u); f_007879b8();
    /* 00583b24: lea ebp, [edi + 0x3b4] */ r_ebp = (u32)(r_edi+0x3b4u);
    /* 00583b2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583b2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b2e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583b2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583b30: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x583b35u); f_00814298();
    /* 00583b35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583b38: push 0x122 */ { u32 v = 0x122u; r_esp -= 4; W32(r_esp, v); }
    /* 00583b3d: mov ecx, edi */ r_ecx = r_edi;
    /* 00583b3f: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x583b44u); f_007879b8();
    /* 00583b44: lea ebp, [edi + 0x3cc] */ r_ebp = (u32)(r_edi+0x3ccu);
    /* 00583b4a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00583b4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00583b4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583b4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583b50: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x583b55u); f_00814298();
    /* 00583b55: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583b58: mov eax, dword ptr [edi + 0x3e4] */ r_eax = R32((u32)(r_edi+0x3e4u));
    /* 00583b5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b60: je 0x583bb2 */ if (fZ) goto L_00583bb2;
L_00583b62:; BB(0x00583b62);
    /* 00583b62: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 00583b68: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00583b6e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b71: je 0x583c01 */ if (fZ) goto L_00583c01;
L_00583b77:; BB(0x00583b77);
    /* 00583b77: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b7a: je 0x583c01 */ if (fZ) goto L_00583c01;
L_00583b80:; BB(0x00583b80);
    /* 00583b80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00583b82:; BB(0x00583b82);
    /* 00583b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b84: jne 0x583b8b */ if (!fZ) goto L_00583b8b;
L_00583b86:; BB(0x00583b86);
    /* 00583b86: call 0x5871e4 */ r_esp -= 4; W32(r_esp, 0x583b8bu); f_005871e4();
L_00583b8b:; BB(0x00583b8b);
    /* 00583b8b: mov ecx, dword ptr [edi + 0x3f0] */ r_ecx = R32((u32)(r_edi+0x3f0u));
    /* 00583b91: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00583b97: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b9a: je 0x583bfa */ if (fZ) goto L_00583bfa;
L_00583b9c:; BB(0x00583b9c);
    /* 00583b9c: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583b9f: je 0x583bfa */ if (fZ) goto L_00583bfa;
L_00583ba1:; BB(0x00583ba1);
    /* 00583ba1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00583ba3:; BB(0x00583ba3);
    /* 00583ba3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583ba5: jne 0x583bf4 */ if (!fZ) goto L_00583bf4;
L_00583ba7:; BB(0x00583ba7);
    /* 00583ba7: call 0x5871e4 */ r_esp -= 4; W32(r_esp, 0x583bacu); f_005871e4();
    /* 00583bac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00583baf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583bb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00583bb1: ret  */ FN_RET(0x00583a80); r_esp += 4; return;
L_00583bb2:; BB(0x00583bb2);
    /* 00583bb2: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 00583bb8: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00583bbe: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583bc1: je 0x583c12 */ if (fZ) goto L_00583c12;
L_00583bc3:; BB(0x00583bc3);
    /* 00583bc3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583bc6: je 0x583c12 */ if (fZ) goto L_00583c12;
L_00583bc8:; BB(0x00583bc8);
    /* 00583bc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00583bca:; BB(0x00583bca);
    /* 00583bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583bcc: jne 0x583bd3 */ if (!fZ) goto L_00583bd3;
L_00583bce:; BB(0x00583bce);
    /* 00583bce: call 0x587214 */ r_esp -= 4; W32(r_esp, 0x583bd3u); f_00587214();
L_00583bd3:; BB(0x00583bd3);
    /* 00583bd3: mov ecx, dword ptr [edi + 0x3f0] */ r_ecx = R32((u32)(r_edi+0x3f0u));
    /* 00583bd9: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 00583bdf: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583be2: je 0x583c0b */ if (fZ) goto L_00583c0b;
L_00583be4:; BB(0x00583be4);
    /* 00583be4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583be7: je 0x583c0b */ if (fZ) goto L_00583c0b;
L_00583be9:; BB(0x00583be9);
    /* 00583be9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00583beb:; BB(0x00583beb);
    /* 00583beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583bed: jne 0x583bf4 */ if (!fZ) goto L_00583bf4;
L_00583bef:; BB(0x00583bef);
    /* 00583bef: call 0x587214 */ r_esp -= 4; W32(r_esp, 0x583bf4u); f_00587214();
L_00583bf4:; BB(0x00583bf4);
    /* 00583bf4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00583bf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583bf8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00583bf9: ret  */ FN_RET(0x00583a80); r_esp += 4; return;
L_00583bfa:; BB(0x00583bfa);
    /* 00583bfa: mov eax, 1 */ r_eax = 0x1u;
    /* 00583bff: jmp 0x583ba3 */ goto L_00583ba3;
L_00583c01:; BB(0x00583c01);
    /* 00583c01: mov eax, 1 */ r_eax = 0x1u;
    /* 00583c06: jmp 0x583b82 */ goto L_00583b82;
L_00583c0b:; BB(0x00583c0b);
    /* 00583c0b: mov eax, 1 */ r_eax = 0x1u;
    /* 00583c10: jmp 0x583beb */ goto L_00583beb;
L_00583c12:; BB(0x00583c12);
    /* 00583c12: mov eax, 1 */ r_eax = 0x1u;
    /* 00583c17: jmp 0x583bca */ goto L_00583bca;
}

void f_00583c1c(void) /* sub_583C1C */
{
    FN_ENTER(0x00583c1c);
    /* 00583c1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00583c1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583c1e: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583c21: mov edi, ecx */ r_edi = r_ecx;
    /* 00583c23: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 00583c29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583c2b: jne 0x583c3e */ if (!fZ) goto L_00583c3e;
L_00583c2d:; BB(0x00583c2d);
    /* 00583c2d: mov dword ptr [edi + 0x394], 1 */ W32((u32)(r_edi+0x394u), 0x1u);
    /* 00583c37: mov esi, 2 */ r_esi = 0x2u;
    /* 00583c3c: jmp 0x583c56 */ goto L_00583c56;
L_00583c3e:; BB(0x00583c3e);
    /* 00583c3e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583c41: jne 0x583cef */ if (!fZ) goto L_00583cef;
L_00583c47:; BB(0x00583c47);
    /* 00583c47: mov dword ptr [edi + 0x394], 0 */ W32((u32)(r_edi+0x394u), 0x0u);
    /* 00583c51: mov esi, 1 */ r_esi = 0x1u;
L_00583c56:; BB(0x00583c56);
    /* 00583c56: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 00583c5c: add dword ptr [edi + 0x404], 1 */ { u32 ad = (u32)(r_edi+0x404u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00583c63: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00583c66: and eax, 0xf7ffffff */ {  u32 a = r_eax; u32 b = 0xf7ffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583c6b: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583c6e: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 00583c74: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00583c77: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583c7a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583c7d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00583c80: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583c85: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00583c88: mov ecx, edi */ r_ecx = r_edi;
    /* 00583c8a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x583c8fu); f_007751b0();
    /* 00583c8f: fmul dword ptr [0x927da4] */ ST(0) = ST(0) * R_F32((u32)(0x927da4u));
    /* 00583c95: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00583c98: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00583c9c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583ca1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00583ca5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00583ca9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00583cad: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00583cb0: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00583cb4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00583cb7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00583cbb: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00583cbf: fmul dword ptr [0xa7424c] */ ST(0) = ST(0) * R_F32((u32)(0xa7424cu));
    /* 00583cc5: mov word ptr [edi + 0xb8], si */ W16((u32)(r_edi+0xb8u), (u16)r_esi);
    /* 00583ccc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00583ccf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00583cd3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583cd8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00583cdc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00583ce0: fistp dword ptr [edi + 0x390] */ W32((u32)(r_edi+0x390u), (u32)fx_int32(ST(0))); FPOP();
    /* 00583ce6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00583ce9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00583cec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00583ced: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00583cee: ret  */ FN_RET(0x00583c1c); r_esp += 4; return;
L_00583cef:; BB(0x00583cef);
    /* 00583cef: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00583cf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00583cf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00583cf4: ret  */ FN_RET(0x00583c1c); r_esp += 4; return;
}

void f_00583cf8(void) /* sub_583CF8 */
{
    FN_ENTER(0x00583cf8);
    /* 00583cf8: mov dword ptr [ecx + 0x380], 0 */ W32((u32)(r_ecx+0x380u), 0x0u);
    /* 00583d02: mov eax, 1 */ r_eax = 0x1u;
    /* 00583d07: mov dword ptr [ecx + 0x384], 0x40f00000 */ W32((u32)(r_ecx+0x384u), 0x40f00000u);
    /* 00583d11: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 00583d17: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 00583d1d: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 00583d23: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 00583d2d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00583d30: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00583d33: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00583d36: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00583d39: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583d3e: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583d43: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00583d46: ret  */ FN_RET(0x00583cf8); r_esp += 4; return;
}

void f_00583d48(void) /* sub_583D48 */
{
    FN_ENTER(0x00583d48);
    /* 00583d48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00583d49: mov edi, ecx */ r_edi = r_ecx;
    /* 00583d4b: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 00583d4e: mov edx, dword ptr [edi + 0x54] */ r_edx = R32((u32)(r_edi+0x54u));
    /* 00583d51: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00583d54: mov eax, dword ptr [edi + 0x58] */ r_eax = R32((u32)(r_edi+0x58u));
    /* 00583d57: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00583d5a: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00583d5d: mov ecx, edi */ r_ecx = r_edi;
    /* 00583d5f: call 0x5833ec */ r_esp -= 4; W32(r_esp, 0x583d64u); f_005833ec();
    /* 00583d64: movzx eax, byte ptr [0xa7423c] */ r_eax = (u32)R8((u32)(0xa7423cu));
    /* 00583d6b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00583d6d: jne 0x583d8b */ if (!fZ) goto L_00583d8b;
L_00583d6f:; BB(0x00583d6f);
    /* 00583d6f: fld dword ptr [0x927d98] */ FPUSH(R_F32((u32)(0x927d98u)));
    /* 00583d75: fmul dword ptr [0xa74248] */ ST(0) = ST(0) * R_F32((u32)(0xa74248u));
    /* 00583d7b: fstp dword ptr [0xa74240] */ W_F32((u32)(0xa74240u), ST(0)); FPOP();
    /* 00583d81: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583d86: mov byte ptr [0xa7423c], al */ W8((u32)(0xa7423cu), (u8)r_eax);
L_00583d8b:; BB(0x00583d8b);
    /* 00583d8b: fld dword ptr [0xa74240] */ FPUSH(R_F32((u32)(0xa74240u)));
    /* 00583d91: fadd dword ptr [edi + 0x38c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38cu));
    /* 00583d97: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00583d9a: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 00583d9d: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583da2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00583da5: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 00583dab: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00583dae: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00583db1: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00583db4: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 00583dba: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00583dbd: or eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583dc2: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00583dc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583dc7: mov dword ptr [edi + 0x3e8], eax */ W32((u32)(r_edi+0x3e8u), r_eax);
    /* 00583dcd: mov dword ptr [edi + 0x3e4], eax */ W32((u32)(r_edi+0x3e4u), r_eax);
    /* 00583dd3: mov eax, dword ptr [edi + 0x480] */ r_eax = R32((u32)(r_edi+0x480u));
    /* 00583dd9: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00583ddf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00583de0: ret  */ FN_RET(0x00583d48); r_esp += 4; return;
}

void f_00583de4(void) /* sub_583DE4 */
{
    FN_ENTER(0x00583de4);
    /* 00583de4: mov eax, 1 */ r_eax = 0x1u;
    /* 00583de9: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 00583def: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 00583df5: ret  */ FN_RET(0x00583de4); r_esp += 4; return;
}

void f_00583df8(void) /* sub_583DF8 */
{
    FN_ENTER(0x00583df8);
    /* 00583df8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00583df9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00583dfb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00583dfd: call 0x583e1c */ r_esp -= 4; W32(r_esp, 0x583e02u); f_00583e1c();
    /* 00583e02: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00583e06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00583e08: jne 0x583e0e */ if (!fZ) goto L_00583e0e;
L_00583e0a:; BB(0x00583e0a);
    /* 00583e0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00583e0b: ret 4 */ FN_RET(0x00583df8); r_esp += 8; return;
L_00583e0e:; BB(0x00583e0e);
    /* 00583e0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00583e0f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x583e14u); f_005c2f74();
    /* 00583e14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00583e15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00583e16: ret 4 */ FN_RET(0x00583df8); r_esp += 8; return;
}

void f_00583e1c(void) /* sub_583E1C */
{
    FN_ENTER(0x00583e1c);
    /* 00583e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00583e1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00583e1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583e21: push 0x8d7d0e */ { u32 v = 0x8d7d0eu; r_esp -= 4; W32(r_esp, v); }
    /* 00583e26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00583e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583e2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00583e34: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583e37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00583e3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00583e3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00583e40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00583e43: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00583e46: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00583e4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583e50: mov dword ptr [ecx], 0xb07a60 */ W32((u32)(r_ecx), 0xb07a60u);
    /* 00583e56: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x583e5bu); f_007b9c8c();
    /* 00583e5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583e5e: mov ecx, dword ptr [eax + 0x3e4] */ r_ecx = R32((u32)(r_eax+0x3e4u));
    /* 00583e64: mov dword ptr [eax + 0x384], 0 */ W32((u32)(r_eax+0x384u), 0x0u);
    /* 00583e6e: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x583e73u); f_005883f0();
    /* 00583e73: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00583e7a: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00583e7f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583e82: add eax, 0x3f4 */ {  u32 a = r_eax; u32 b = 0x3f4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00583e87: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00583e89: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00583e8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00583e8c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x583e91u); f_008586d6();
    /* 00583e91: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00583e98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00583e9b: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x583ea0u); f_0078638c();
    /* 00583ea0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00583ea3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583eaa: mov esp, ebp */ r_esp = r_ebp;
    /* 00583eac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583ead: ret  */ FN_RET(0x00583e1c); r_esp += 4; return;
}

void f_00583eb0(void) /* sub_583EB0 */
{
    FN_ENTER(0x00583eb0);
    /* 00583eb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00583eb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583eb2: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00583eb5: mov esi, ecx */ r_esi = r_ecx;
    /* 00583eb7: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00583ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583ebf: je 0x583ef5 */ if (fZ) goto L_00583ef5;
L_00583ec1:; BB(0x00583ec1);
    /* 00583ec1: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x583ec6u); f_004f7c84();
    /* 00583ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583ec8: je 0x583ef5 */ if (fZ) goto L_00583ef5;
L_00583eca:; BB(0x00583eca);
    /* 00583eca: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00583ed0: cmp eax, dword ptr [esi + 0x37c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x37cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583ed6: je 0x583ede */ if (fZ) goto L_00583ede;
L_00583ed8:; BB(0x00583ed8);
    /* 00583ed8: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
L_00583ede:; BB(0x00583ede);
    /* 00583ede: mov eax, dword ptr [0x9bf580] */ r_eax = R32((u32)(0x9bf580u));
    /* 00583ee3: mov dword ptr [esi + 0x380], 0 */ W32((u32)(r_esi+0x380u), 0x0u);
    /* 00583eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583eef: je 0x583ef5 */ if (fZ) goto L_00583ef5;
L_00583ef1:; BB(0x00583ef1);
    /* 00583ef1: mov ecx, esi */ r_ecx = r_esi;
    /* 00583ef3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583ef5u); call_ind(t); }
L_00583ef5:; BB(0x00583ef5);
    /* 00583ef5: mov eax, dword ptr [esi + 0x3a8] */ r_eax = R32((u32)(r_esi+0x3a8u));
    /* 00583efb: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00583efe: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00583f01: fst dword ptr [esi + 0x3d0] */ W_F32((u32)(r_esi+0x3d0u), ST(0));
    /* 00583f07: mov dword ptr [esi + 0x3d4], 0 */ W32((u32)(r_esi+0x3d4u), 0x0u);
    /* 00583f11: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00583f14: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 00583f17: fst dword ptr [esi + 0x3d8] */ W_F32((u32)(r_esi+0x3d8u), ST(0));
    /* 00583f1d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00583f1f: fmul qword ptr [0x928370] */ ST(0) = ST(0) * R_F64((u32)(0x928370u));
    /* 00583f25: fdiv qword ptr [0x928368] */ ST(0) = ST(0) / R_F64((u32)(0x928368u));
    /* 00583f2b: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00583f2f: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00583f34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583f39: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00583f3d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00583f41: fistp dword ptr [esi + 0x3dc] */ W32((u32)(r_esi+0x3dcu), (u32)fx_int32(ST(0))); FPOP();
    /* 00583f47: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00583f4b: lea ecx, [esi + 0x3d0] */ r_ecx = (u32)(r_esi+0x3d0u);
    /* 00583f51: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x583f56u); f_0083173c();
    /* 00583f56: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00583f5c: mov eax, dword ptr [eax*8 + 0x9bf584] */ r_eax = R32((u32)(r_eax*8+0x9bf584u));
    /* 00583f63: fstp dword ptr [esi + 0x3e0] */ W_F32((u32)(r_esi+0x3e0u), ST(0)); FPOP();
    /* 00583f69: add dword ptr [esi + 0x464], 1 */ { u32 ad = (u32)(r_esi+0x464u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00583f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583f72: je 0x584188 */ if (fZ) goto L_00584188;
L_00583f78:; BB(0x00583f78);
    /* 00583f78: mov ecx, esi */ r_ecx = r_esi;
    /* 00583f7a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x583f7cu); call_ind(t); }
    /* 00583f7c: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00583f82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583f84: je 0x583f93 */ if (fZ) goto L_00583f93;
L_00583f86:; BB(0x00583f86);
    /* 00583f86: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00583f89: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00583f8e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00583f91: jmp 0x583f9e */ goto L_00583f9e;
L_00583f93:; BB(0x00583f93);
    /* 00583f93: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00583f96: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00583f9b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_00583f9e:; BB(0x00583f9e);
    /* 00583f9e: mov ecx, esi */ r_ecx = r_esi;
    /* 00583fa0: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x583fa5u); f_0078730c();
    /* 00583fa5: mov edx, dword ptr [esi + 0x380] */ r_edx = R32((u32)(r_esi+0x380u));
    /* 00583fab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583fad: je 0x584188 */ if (fZ) goto L_00584188;
L_00583fb3:; BB(0x00583fb3);
    /* 00583fb3: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00583fb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583fbb: je 0x58416f */ if (fZ) goto L_0058416f;
L_00583fc1:; BB(0x00583fc1);
    /* 00583fc1: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583fc4: je 0x583fd1 */ if (fZ) goto L_00583fd1;
L_00583fc6:; BB(0x00583fc6);
    /* 00583fc6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00583fc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00583fc9: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x583fceu); f_006946a8();
    /* 00583fce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00583fd1:; BB(0x00583fd1);
    /* 00583fd1: mov ecx, esi */ r_ecx = r_esi;
    /* 00583fd3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x583fd8u); f_007aa094();
    /* 00583fd8: mov eax, dword ptr [esi + 0x380] */ r_eax = R32((u32)(r_esi+0x380u));
    /* 00583fde: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583fe1: je 0x58408b */ if (fZ) goto L_0058408b;
L_00583fe7:; BB(0x00583fe7);
    /* 00583fe7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00583fea: jne 0x584065 */ if (!fZ) goto L_00584065;
L_00583fec:; BB(0x00583fec);
    /* 00583fec: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00583fef: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00583ff5: fdiv dword ptr [0x928234] */ ST(0) = ST(0) / R_F32((u32)(0x928234u));
    /* 00583ffb: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00584001: mov edi, dword ptr [esi + 0x304] */ r_edi = R32((u32)(r_esi+0x304u));
    /* 00584007: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0058400b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058400e: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00584014: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00584018: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058401c: lea edi, [esi + 0x394] */ r_edi = (u32)(r_esi+0x394u);
    /* 00584022: mov edx, edi */ r_edx = r_edi;
    /* 00584024: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x584029u); f_0082f9c4();
    /* 00584029: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0058402c: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00584030: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00584032: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00584036: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584038: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058403a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0058403d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00584041: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00584044: mov edx, edi */ r_edx = r_edi;
    /* 00584046: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x58404bu); f_0082ebac();
    /* 0058404b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058404e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00584050: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00584052: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00584057: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584058: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x58405du); f_00805608();
    /* 0058405d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584060: jmp 0x58416f */ goto L_0058416f;
L_00584065:; BB(0x00584065);
    /* 00584065: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584068: je 0x58416f */ if (fZ) goto L_0058416f;
L_0058406e:; BB(0x0058406e);
    /* 0058406e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00584070: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00584072: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00584078: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058407d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058407e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x584083u); f_00805608();
    /* 00584083: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00584086: jmp 0x58416f */ goto L_0058416f;
L_0058408b:; BB(0x0058408b);
    /* 0058408b: fld dword ptr [esi + 0xc0] */ FPUSH(R_F32((u32)(r_esi+0xc0u)));
    /* 00584091: fdiv dword ptr [0x928230] */ ST(0) = ST(0) / R_F32((u32)(0x928230u));
    /* 00584097: mov edx, dword ptr [esi + 0x388] */ r_edx = R32((u32)(r_esi+0x388u));
    /* 0058409d: mov edi, dword ptr [esi + 0x3a4] */ r_edi = R32((u32)(r_esi+0x3a4u));
    /* 005840a3: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005840a6: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005840aa: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005840ad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005840af: fld dword ptr [eax + edx*8 + 0x928218] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x928218u)));
    /* 005840b6: fld dword ptr [eax + edx*8 + 0x928220] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x928220u)));
    /* 005840bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005840bf: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005840c3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005840c7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5840ccu); f_0082dcbc();
    /* 005840cc: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005840d0: mov eax, dword ptr [esi + 0x3a4] */ r_eax = R32((u32)(r_esi+0x3a4u));
    /* 005840d6: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 005840d9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5840deu); f_0082ddd8();
    /* 005840de: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005840e2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005840e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005840e8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005840ea: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005840ee: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 005840f0: mov edi, dword ptr [esi + 0x3a4] */ r_edi = R32((u32)(r_esi+0x3a4u));
    /* 005840f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005840f8: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 005840fb: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005840ff: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00584103: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00584105: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00584107: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00584109: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0058410c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00584110: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00584112: fchs  */ ST(0) = -ST(0);
    /* 00584114: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584116: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00584119: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0058411b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0058411f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00584123: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584127: lea edi, [esi + 0x300] */ r_edi = (u32)(r_esi+0x300u);
    /* 0058412d: mov edx, edi */ r_edx = r_edi;
    /* 0058412f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x584134u); f_0082f9c4();
    /* 00584134: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00584138: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0058413c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058413e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00584142: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00584144: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00584146: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058414a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0058414e: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00584152: mov edx, edi */ r_edx = r_edi;
    /* 00584154: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x584159u); f_0082ebac();
    /* 00584159: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0058415d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058415f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00584161: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00584166: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00584167: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x58416cu); f_00805608();
    /* 0058416c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0058416f:; BB(0x0058416f);
    /* 0058416f: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 00584175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00584177: jne 0x584188 */ if (!fZ) goto L_00584188;
L_00584179:; BB(0x00584179);
    /* 00584179: mov edx, dword ptr [esi + 0x384] */ r_edx = R32((u32)(r_esi+0x384u));
    /* 0058417f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00584182: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00584185: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00584188:; BB(0x00584188);
    /* 00584188: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058418b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058418c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058418d: ret  */ FN_RET(0x00583eb0); r_esp += 4; return;
}

