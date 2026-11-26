#include "protos.h"

void f_007660c4(void) /* sub_7660C4 */
{
    FN_ENTER(0x007660c4);
    /* 007660c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007660c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007660c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007660c9: call 0x7660e8 */ r_esp -= 4; W32(r_esp, 0x7660ceu); f_007660e8();
    /* 007660ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007660d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007660d4: jne 0x7660da */ if (!fZ) goto L_007660da;
L_007660d6:; BB(0x007660d6);
    /* 007660d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007660d7: ret 4 */ FN_RET(0x007660c4); r_esp += 8; return;
L_007660da:; BB(0x007660da);
    /* 007660da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007660db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7660e0u); f_005c2f74();
    /* 007660e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007660e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007660e2: ret 4 */ FN_RET(0x007660c4); r_esp += 8; return;
}

void f_007660e8(void) /* sub_7660E8 */
{
    FN_ENTER(0x007660e8);
    /* 007660e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007660e9: mov ebp, esp */ r_ebp = r_esp;
    /* 007660eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007660ed: push 0x8f38a8 */ { u32 v = 0x8f38a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007660f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007660f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007660f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00766100: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00766103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00766106: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00766109: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076610c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076610f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00766112: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00766119: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076611c: mov dword ptr [eax], 0xb434b8 */ W32((u32)(r_eax), 0xb434b8u);
    /* 00766122: mov eax, dword ptr [eax + 0x70] */ r_eax = R32((u32)(r_eax+0x70u));
    /* 00766125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766127: je 0x76615d */ if (fZ) goto L_0076615d;
L_0076612d:; BB(0x0076612d);
    /* 0076612d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076612e: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x766133u); f_007b4e84();
    /* 00766133: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766134: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766137: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0076613a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x76613fu); f_007b9c8c();
    /* 0076613f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766142: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766145: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00766148: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0076614c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00766152: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00766156: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
L_0076615d:; BB(0x0076615d);
    /* 0076615d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00766164: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00766169: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076616c: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076616f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00766171: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00766173: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766174: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x766179u); f_008586d6();
    /* 00766179: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00766180: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766183: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x766188u); f_00765570();
    /* 00766188: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076618b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076618e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766195: mov esp, ebp */ r_esp = r_ebp;
    /* 00766197: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766198: ret  */ FN_RET(0x007660e8); r_esp += 4; return;
}

void f_0076619c(void) /* sub_76619C */
{
    FN_ENTER(0x0076619c);
    /* 0076619c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076619d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076619f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007661a1: push 0x8f38fc */ { u32 v = 0x8f38fcu; r_esp -= 4; W32(r_esp, v); }
    /* 007661a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007661ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007661ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007661b4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007661b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007661ba: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 007661bd: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 007661c0: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 007661c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007661c6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007661c9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 007661cc: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 007661cf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007661d2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007661d5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 007661d8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007661db: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 007661de: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007661e1: call 0x765a14 */ r_esp -= 4; W32(r_esp, 0x7661e6u); f_00765a14();
    /* 007661e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007661ed: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007661f2: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 007661f7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007661fa: mov dword ptr [eax], 0xb434b8 */ W32((u32)(r_eax), 0xb434b8u);
    /* 00766200: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00766203: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00766205: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00766207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766208: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x76620du); f_00858736();
    /* 0076620d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00766214: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00766217: mov eax, dword ptr [0x9f5aac] */ r_eax = R32((u32)(0x9f5aacu));
    /* 0076621c: mov ecx, dword ptr [0xa9b018] */ r_ecx = R32((u32)(0xa9b018u));
    /* 00766222: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00766225: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766227: je 0x76635e */ if (fZ) goto L_0076635e;
L_0076622d:; BB(0x0076622d);
    /* 0076622d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766231: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x766236u); f_005b8610();
    /* 00766236: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00766239: mov ecx, dword ptr [0xa9b018] */ r_ecx = R32((u32)(0xa9b018u));
    /* 0076623f: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00766242: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766245: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766246: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x76624bu); f_005b8624();
    /* 0076624b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076624e: mov ecx, dword ptr [0xa9b018] */ r_ecx = R32((u32)(0xa9b018u));
    /* 00766254: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00766257: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076625a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076625b: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x766260u); f_005b8638();
    /* 00766260: mov edx, eax */ r_edx = r_eax;
    /* 00766262: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00766265: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00766268: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076626b: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00766270: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00766273: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0076627a: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0076627d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00766280: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766283: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00766286: fadd dword ptr [ecx*4 + 0x976160] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x976160u));
    /* 0076628d: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 00766290: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00766293: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00766295: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00766298: mov dword ptr [eax + 0x4c], edi */ W32((u32)(r_eax+0x4cu), r_edi);
    /* 0076629b: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 0076629e: mov dword ptr [eax + 0x48], ebx */ W32((u32)(r_eax+0x48u), r_ebx);
    /* 007662a1: mov dword ptr [eax + 0x5c], edi */ W32((u32)(r_eax+0x5cu), r_edi);
    /* 007662a4: mov dword ptr [eax + 0x68], edi */ W32((u32)(r_eax+0x68u), r_edi);
    /* 007662a7: mov dword ptr [eax + 0x6c], esi */ W32((u32)(r_eax+0x6cu), r_esi);
    /* 007662aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7662afu); f_005caba4();
    /* 007662af: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007662b2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007662b5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007662b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007662ba: je 0x766357 */ if (fZ) goto L_00766357;
L_007662c0:; BB(0x007662c0);
    /* 007662c0: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 007662c7: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007662ce: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007662d1: mov ecx, eax */ r_ecx = r_eax;
    /* 007662d3: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x7662d8u); f_007b4b48();
    /* 007662d8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_007662df:; BB(0x007662df);
    /* 007662df: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 007662e2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007662e5: mov dword ptr [edx + 0x70], eax */ W32((u32)(r_edx+0x70u), r_eax);
    /* 007662e8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007662ef: mov ecx, eax */ r_ecx = r_eax;
    /* 007662f1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007662f3: push 0x9f5ae8 */ { u32 v = 0x9f5ae8u; r_esp -= 4; W32(r_esp, v); }
    /* 007662f8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x7662fdu); f_007b9a88();
    /* 007662fd: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00766300: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 00766303: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x766308u); f_007b4f54();
    /* 00766308: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0076630a:; BB(0x0076630a);
    /* 0076630a: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076630d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00766310: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00766312: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00766315: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00766317: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00766319: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0076631b: lea ecx, [edx + esi + 0x74] */ r_ecx = (u32)(r_edx+r_esi+0x74u);
    /* 0076631f: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x766324u); f_0057739c();
    /* 00766324: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766327: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0076632a: jb 0x76630a */ if (fC) goto L_0076630a;
L_0076632c:; BB(0x0076632c);
    /* 0076632c: push 0x9f5ae0 */ { u32 v = 0x9f5ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766331: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00766334: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00766336: call 0x765638 */ r_esp -= 4; W32(r_esp, 0x76633bu); f_00765638();
    /* 0076633b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0076633e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00766341: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766344: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076634a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766351: mov esp, ebp */ r_esp = r_ebp;
    /* 00766353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766354: ret 0x14 */ FN_RET(0x0076619c); r_esp += 24; return;
L_00766357:; BB(0x00766357);
    /* 00766357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766359: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076635c: jmp 0x7662df */ goto L_007662df;
L_0076635e:; BB(0x0076635e);
    /* 0076635e: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00766362: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766368: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 0076636c: mov eax, ebx */ r_eax = r_ebx;
    /* 0076636e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766371: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766374: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076637b: mov esp, ebp */ r_esp = r_ebp;
    /* 0076637d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076637e: ret 0x14 */ FN_RET(0x0076619c); r_esp += 24; return;
}

void f_00766384(void) /* sub_766384 */
{
    FN_ENTER(0x00766384);
    /* 00766384: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00766385: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00766388: mov esi, ecx */ r_esi = r_ecx;
    /* 0076638a: mov ecx, esi */ r_ecx = r_esi;
    /* 0076638c: call 0x765a40 */ r_esp -= 4; W32(r_esp, 0x766391u); f_00765a40();
    /* 00766391: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00766394: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00766397: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076639a: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 0076639d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007663a1: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 007663a4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007663a8: mov ecx, esi */ r_ecx = r_esi;
    /* 007663aa: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007663ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007663ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007663b0: call 0x7657f8 */ r_esp -= 4; W32(r_esp, 0x7663b5u); f_007657f8();
    /* 007663b5: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 007663b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007663ba: jne 0x7663c8 */ if (!fZ) goto L_007663c8;
L_007663bc:; BB(0x007663bc);
    /* 007663bc: mov ecx, esi */ r_ecx = r_esi;
    /* 007663be: call 0x766800 */ r_esp -= 4; W32(r_esp, 0x7663c3u); f_00766800();
    /* 007663c3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007663c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007663c7: ret  */ FN_RET(0x00766384); r_esp += 4; return;
L_007663c8:; BB(0x007663c8);
    /* 007663c8: mov ecx, esi */ r_ecx = r_esi;
    /* 007663ca: call 0x7663d4 */ r_esp -= 4; W32(r_esp, 0x7663cfu); f_007663d4();
    /* 007663cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007663d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007663d3: ret  */ FN_RET(0x00766384); r_esp += 4; return;
}

void f_007663d4(void) /* sub_7663D4 */
{
    FN_ENTER(0x007663d4);
    /* 007663d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007663d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007663d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007663d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007663d8: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007663db: mov edi, ecx */ r_edi = r_ecx;
    /* 007663dd: fld dword ptr [0x976198] */ FPUSH(R_F32((u32)(0x976198u)));
    /* 007663e3: fadd dword ptr [edi + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30u));
    /* 007663e6: fcom dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); 
    /* 007663e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007663eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007663ec: jb 0x7663f9 */ if (fC) goto L_007663f9;
L_007663ee:; BB(0x007663ee);
    /* 007663ee: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007663f0: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 007663f7: jmp 0x7663fc */ goto L_007663fc;
L_007663f9:; BB(0x007663f9);
    /* 007663f9: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
L_007663fc:; BB(0x007663fc);
    /* 007663fc: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 007663ff: cmp edx, dword ptr [0xa9b008] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9b008u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00766405: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00766408: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 0076640b: jg 0x766418 */ if ((!fZ&&fS==fO)) goto L_00766418;
L_0076640d:; BB(0x0076640d);
    /* 0076640d: lea ebp, [edi + 0x50] */ r_ebp = (u32)(r_edi+0x50u);
    /* 00766410: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00766413: jmp 0x7665c6 */ goto L_007665c6;
L_00766418:; BB(0x00766418);
    /* 00766418: mov ebp, dword ptr [0xaae168] */ r_ebp = R32((u32)(0xaae168u));
    /* 0076641e: mov ebx, dword ptr [edi + 0x6c] */ r_ebx = R32((u32)(r_edi+0x6cu));
    /* 00766421: lea ecx, [ebp + ebx] */ r_ecx = (u32)(r_ebp+r_ebx);
    /* 00766425: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00766427: jge 0x7667a0 */ if ((fS==fO)) goto L_007667a0;
L_0076642d:; BB(0x0076642d);
    /* 0076642d: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 00766431: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_00766434:; BB(0x00766434);
    /* 00766434: mov eax, ebx */ r_eax = r_ebx;
    /* 00766436: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00766437: idiv ebp */ { i32 d = (i32)r_ebp; if (!d) UNSUP(0x00766437, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00766437, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00766439: mov edi, dword ptr [edx*4 + 0xaad720] */ r_edi = R32((u32)(r_edx*4+0xaad720u));
    /* 00766440: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766442: je 0x76647d */ if (fZ) goto L_0076647d;
L_00766444:; BB(0x00766444);
    /* 00766444: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00766447: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076644c: jne 0x76647d */ if (!fZ) goto L_0076647d;
L_0076644e:; BB(0x0076644e);
    /* 0076644e: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00766454: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076645a: jne 0x76647d */ if (!fZ) goto L_0076647d;
L_0076645c:; BB(0x0076645c);
    /* 0076645c: lea ecx, [edi + 0x300] */ r_ecx = (u32)(r_edi+0x300u);
    /* 00766462: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00766463: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00766464: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x766469u); f_00780d3c();
    /* 00766469: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076646c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076646e: je 0x766795 */ if (fZ) goto L_00766795;
L_00766474:; BB(0x00766474);
    /* 00766474: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 00766478: mov ecx, dword ptr [ecx + 0x6c] */ r_ecx = R32((u32)(r_ecx+0x6cu));
    /* 0076647b: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0076647d:; BB(0x0076647d);
    /* 0076647d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766480: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00766482: jl 0x766434 */ if ((fS!=fO)) goto L_00766434;
L_00766484:; BB(0x00766484);
    /* 00766484: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
L_00766488:; BB(0x00766488);
    /* 00766488: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0076648a:; BB(0x0076648a);
    /* 0076648a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076648c: je 0x7665a8 */ if (fZ) goto L_007665a8;
L_00766492:; BB(0x00766492);
    /* 00766492: lea ebp, [edi + 0x50] */ r_ebp = (u32)(r_edi+0x50u);
    /* 00766495: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766497: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x76649cu); f_0083173c();
    /* 0076649c: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007664a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007664a4: fsub dword ptr [0x97618c] */ ST(0) = ST(0) - R_F32((u32)(0x97618cu));
    /* 007664aa: fld dword ptr [0x976188] */ FPUSH(R_F32((u32)(0x976188u)));
    /* 007664b0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007664b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007664b4: mov edx, esi */ r_edx = r_esi;
    /* 007664b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007664b7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007664bb: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 007664c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007664c5: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 007664cb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007664cf: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 007664d5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007664d9: jbe 0x7664dd */ if ((fC||fZ)) goto L_007664dd;
L_007664db:; BB(0x007664db);
    /* 007664db: fst st(1) */ ST(1) = ST(0);
L_007664dd:; BB(0x007664dd);
    /* 007664dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007664df: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007664e3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7664e8u); f_0082f9c4();
    /* 007664e8: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007664ec: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7664f1u); f_0083173c();
    /* 007664f1: fld dword ptr [0x976184] */ FPUSH(R_F32((u32)(0x976184u)));
    /* 007664f7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007664f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007664fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007664fc: jae 0x766500 */ if (!fC) goto L_00766500;
L_007664fe:; BB(0x007664fe);
    /* 007664fe: fst st(1) */ ST(1) = ST(0);
L_00766500:; BB(0x00766500);
    /* 00766500: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766502: fcom dword ptr [0x976180] */ fx_compare(ST(0), R_F32((u32)(0x976180u))); 
    /* 00766508: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076650a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076650b: ja 0x766511 */ if ((!fC&&!fZ)) goto L_00766511;
L_0076650d:; BB(0x0076650d);
    /* 0076650d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076650f: jmp 0x766551 */ goto L_00766551;
L_00766511:; BB(0x00766511);
    /* 00766511: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00766515: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00766519: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076651c: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x766521u); f_0078ea90();
    /* 00766521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766523: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00766527: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766529: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x76652eu); f_0082ebac();
    /* 0076652e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00766532: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00766536: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00766539: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x76653eu); f_0078ea90();
    /* 0076653e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766540: lea edx, [edi + 0x44] */ r_edx = (u32)(r_edi+0x44u);
    /* 00766543: lea eax, [edi + 0x48] */ r_eax = (u32)(r_edi+0x48u);
    /* 00766546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00766548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766549: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x76654eu); f_007a8d04();
    /* 0076654e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00766551:; BB(0x00766551);
    /* 00766551: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00766555: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 00766558: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0076655b: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766560: je 0x7665ab */ if (fZ) goto L_007665ab;
L_00766562:; BB(0x00766562);
    /* 00766562: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00766569: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076656a: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x76656fu); f_0078ea2c();
    /* 0076656f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00766573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766576: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766578: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076657b: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x766580u); f_007b5264();
    /* 00766580: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00766584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766586: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766589: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x76658eu); f_007b5264();
    /* 0076658e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00766592: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00766594: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00766598: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0076659a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076659c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076659d: jae 0x7665ab */ if (!fC) goto L_007665ab;
L_0076659f:; BB(0x0076659f);
    /* 0076659f: mov dword ptr [edi + 0x68], 0xf0 */ W32((u32)(r_edi+0x68u), 0xf0u);
    /* 007665a6: jmp 0x7665ab */ goto L_007665ab;
L_007665a8:; BB(0x007665a8);
    /* 007665a8: lea ebp, [edi + 0x50] */ r_ebp = (u32)(r_edi+0x50u);
L_007665ab:; BB(0x007665ab);
    /* 007665ab: mov ebx, dword ptr [edi + 0x64] */ r_ebx = R32((u32)(r_edi+0x64u));
    /* 007665ae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007665b0: je 0x7665c6 */ if (fZ) goto L_007665c6;
L_007665b2:; BB(0x007665b2);
    /* 007665b2: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 007665b6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007665bb: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 007665bf: mov dword ptr [edi + 0x64], 0 */ W32((u32)(r_edi+0x64u), 0x0u);
L_007665c6:; BB(0x007665c6);
    /* 007665c6: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007665ca: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007665cd: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 007665d0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007665d4: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007665d7: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 007665db: mov edx, ebp */ r_edx = r_ebp;
    /* 007665dd: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007665e1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7665e6u); f_0082ebac();
    /* 007665e6: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007665ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007665ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007665ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007665ee: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7665f3u); f_0077fffc();
    /* 007665f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007665f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007665f8: je 0x76661d */ if (fZ) goto L_0076661d;
L_007665fa:; BB(0x007665fa);
    /* 007665fa: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007665fd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007665ff: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00766602: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00766605: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00766608: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0076660b: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 0076660e: mov ecx, edi */ r_ecx = r_edi;
    /* 00766610: call 0x7667a8 */ r_esp -= 4; W32(r_esp, 0x766615u); f_007667a8();
    /* 00766615: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766618: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076661a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076661b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076661c: ret  */ FN_RET(0x007663d4); r_esp += 4; return;
L_0076661d:; BB(0x0076661d);
    /* 0076661d: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 00766620: cmp eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00766625: jg 0x766786 */ if ((!fZ&&fS==fO)) goto L_00766786;
L_0076662b:; BB(0x0076662b);
    /* 0076662b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0076662f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00766633: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00766637: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0076663a: mov dword ptr [edi + 0x3c], ebx */ W32((u32)(r_edi+0x3cu), r_ebx);
    /* 0076663d: mov ebx, dword ptr [edi + 0x70] */ r_ebx = R32((u32)(r_edi+0x70u));
    /* 00766640: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00766643: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00766645: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00766648: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0076664b: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0076664e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00766651: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00766654: mov ebx, dword ptr [edi + 0x70] */ r_ebx = R32((u32)(r_edi+0x70u));
    /* 00766657: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 0076665a: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0076665d: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00766660: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00766663: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 00766666: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 00766669: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076666c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x766671u); f_007b999c();
    /* 00766671: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766672: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00766676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766679: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076667c: call 0x7b5218 */ r_esp -= 4; W32(r_esp, 0x766681u); f_007b5218();
    /* 00766681: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00766685: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00766689: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0076668d: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766690: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00766694: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 00766698: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0076669c: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 007666a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007666a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007666a3: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x7666a8u); f_007b4c58();
    /* 007666a8: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007666ac: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007666b0: fld dword ptr [0x976190] */ FPUSH(R_F32((u32)(0x976190u)));
    /* 007666b6: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 007666b9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007666bb: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007666bf: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007666c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007666c3: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007666c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007666c9: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007666cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007666cf: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x7666d4u); f_007b5264();
    /* 007666d4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007666d6: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007666da: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007666dc: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 007666de: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007666e2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007666e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007666e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007666e7: ja 0x76673d */ if ((!fC&&!fZ)) goto L_0076673d;
L_007666e9:; BB(0x007666e9);
    /* 007666e9: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 007666ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007666ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007666f0: ja 0x76673d */ if ((!fC&&!fZ)) goto L_0076673d;
L_007666f2:; BB(0x007666f2);
    /* 007666f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007666f4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007666f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007666f8: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 007666fb: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x766700u); f_007b52ec();
    /* 00766700: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00766702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766704: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766707: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x76670cu); f_007b52c4();
    /* 0076670c: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076670f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x766714u); f_007b6894();
    /* 00766714: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00766719: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076671b: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076671e: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x766723u); f_007b5290();
    /* 00766723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766725: je 0x766757 */ if (fZ) goto L_00766757;
L_00766727:; BB(0x00766727);
    /* 00766727: mov ecx, edi */ r_ecx = r_edi;
    /* 00766729: call 0x7667e4 */ r_esp -= 4; W32(r_esp, 0x76672eu); f_007667e4();
    /* 0076672e: mov ecx, edi */ r_ecx = r_edi;
    /* 00766730: call 0x7667a8 */ r_esp -= 4; W32(r_esp, 0x766735u); f_007667a8();
    /* 00766735: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766738: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076673a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076673b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076673c: ret  */ FN_RET(0x007663d4); r_esp += 4; return;
L_0076673d:; BB(0x0076673d);
    /* 0076673d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076673f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00766741: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766743: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766746: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x76674bu); f_007b52c4();
    /* 0076674b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076674d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076674f: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766752: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x766757u); f_007b52ec();
L_00766757:; BB(0x00766757);
    /* 00766757: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076675b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076675d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076675e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x766763u); f_00805608();
    /* 00766763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766766: mov ebx, dword ptr [edi + 0x64] */ r_ebx = R32((u32)(r_edi+0x64u));
    /* 00766769: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076676b: je 0x76677e */ if (fZ) goto L_0076677e;
L_0076676d:; BB(0x0076676d);
    /* 0076676d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0076676f: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00766772: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00766775: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 00766778: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0076677b: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
L_0076677e:; BB(0x0076677e);
    /* 0076677e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766781: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766783: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00766784: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766785: ret  */ FN_RET(0x007663d4); r_esp += 4; return;
L_00766786:; BB(0x00766786);
    /* 00766786: mov ecx, edi */ r_ecx = r_edi;
    /* 00766788: call 0x7667a8 */ r_esp -= 4; W32(r_esp, 0x76678du); f_007667a8();
    /* 0076678d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766790: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766792: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00766793: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766794: ret  */ FN_RET(0x007663d4); r_esp += 4; return;
L_00766795:; BB(0x00766795);
    /* 00766795: mov ebx, edi */ r_ebx = r_edi;
    /* 00766797: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0076679b: jmp 0x76648a */ goto L_0076648a;
L_007667a0:; BB(0x007667a0);
    /* 007667a0: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 007667a3: jmp 0x766488 */ goto L_00766488;
}

void f_007667a0(void)
{
    FN_ENTER(0x007667a0);
    goto L_007667a0;
L_00766488:; BB(0x00766488);
    /* 00766488: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0076648a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076648c: je 0x7665a8 */ if (fZ) goto L_007665a8;
L_00766492:; BB(0x00766492);
    /* 00766492: lea ebp, [edi + 0x50] */ r_ebp = (u32)(r_edi+0x50u);
    /* 00766495: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766497: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x76649cu); f_0083173c();
    /* 0076649c: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007664a0: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007664a4: fsub dword ptr [0x97618c] */ ST(0) = ST(0) - R_F32((u32)(0x97618cu));
    /* 007664aa: fld dword ptr [0x976188] */ FPUSH(R_F32((u32)(0x976188u)));
    /* 007664b0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007664b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007664b4: mov edx, esi */ r_edx = r_esi;
    /* 007664b6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007664b7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007664bb: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 007664c1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007664c5: mov eax, dword ptr [ebx + 0x304] */ r_eax = R32((u32)(r_ebx+0x304u));
    /* 007664cb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007664cf: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 007664d5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007664d9: jbe 0x7664dd */ if ((fC||fZ)) goto L_007664dd;
L_007664db:; BB(0x007664db);
    /* 007664db: fst st(1) */ ST(1) = ST(0);
L_007664dd:; BB(0x007664dd);
    /* 007664dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007664df: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007664e3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7664e8u); f_0082f9c4();
    /* 007664e8: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 007664ec: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7664f1u); f_0083173c();
    /* 007664f1: fld dword ptr [0x976184] */ FPUSH(R_F32((u32)(0x976184u)));
    /* 007664f7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007664f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007664fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007664fc: jae 0x766500 */ if (!fC) goto L_00766500;
L_007664fe:; BB(0x007664fe);
    /* 007664fe: fst st(1) */ ST(1) = ST(0);
L_00766500:; BB(0x00766500);
    /* 00766500: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766502: fcom dword ptr [0x976180] */ fx_compare(ST(0), R_F32((u32)(0x976180u))); 
    /* 00766508: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076650a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076650b: ja 0x766511 */ if ((!fC&&!fZ)) goto L_00766511;
L_0076650d:; BB(0x0076650d);
    /* 0076650d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076650f: jmp 0x766551 */ goto L_00766551;
L_00766511:; BB(0x00766511);
    /* 00766511: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00766515: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00766519: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0076651c: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x766521u); f_0078ea90();
    /* 00766521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766523: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00766527: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766529: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x76652eu); f_0082ebac();
    /* 0076652e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00766532: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00766536: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00766539: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x76653eu); f_0078ea90();
    /* 0076653e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766540: lea edx, [edi + 0x44] */ r_edx = (u32)(r_edi+0x44u);
    /* 00766543: lea eax, [edi + 0x48] */ r_eax = (u32)(r_edi+0x48u);
    /* 00766546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766547: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00766548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766549: call 0x7a8d04 */ r_esp -= 4; W32(r_esp, 0x76654eu); f_007a8d04();
    /* 0076654e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00766551:; BB(0x00766551);
    /* 00766551: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00766555: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 00766558: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0076655b: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766560: je 0x7665ab */ if (fZ) goto L_007665ab;
L_00766562:; BB(0x00766562);
    /* 00766562: add ebx, 0x300 */ {  u32 a = r_ebx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00766569: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076656a: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x76656fu); f_0078ea2c();
    /* 0076656f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00766573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766576: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766578: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076657b: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x766580u); f_007b5264();
    /* 00766580: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00766584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766586: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766589: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x76658eu); f_007b5264();
    /* 0076658e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00766592: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00766594: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00766598: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0076659a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076659c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076659d: jae 0x7665ab */ if (!fC) goto L_007665ab;
L_0076659f:; BB(0x0076659f);
    /* 0076659f: mov dword ptr [edi + 0x68], 0xf0 */ W32((u32)(r_edi+0x68u), 0xf0u);
    /* 007665a6: jmp 0x7665ab */ goto L_007665ab;
L_007665a8:; BB(0x007665a8);
    /* 007665a8: lea ebp, [edi + 0x50] */ r_ebp = (u32)(r_edi+0x50u);
L_007665ab:; BB(0x007665ab);
    /* 007665ab: mov ebx, dword ptr [edi + 0x64] */ r_ebx = R32((u32)(r_edi+0x64u));
    /* 007665ae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007665b0: je 0x7665c6 */ if (fZ) goto L_007665c6;
L_007665b2:; BB(0x007665b2);
    /* 007665b2: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 007665b6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007665bb: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 007665bf: mov dword ptr [edi + 0x64], 0 */ W32((u32)(r_edi+0x64u), 0x0u);
L_007665c6:; BB(0x007665c6);
    /* 007665c6: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 007665ca: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007665cd: mov ebx, dword ptr [edi + 0x3c] */ r_ebx = R32((u32)(r_edi+0x3cu));
    /* 007665d0: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007665d4: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007665d7: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 007665db: mov edx, ebp */ r_edx = r_ebp;
    /* 007665dd: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007665e1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x7665e6u); f_0082ebac();
    /* 007665e6: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 007665ea: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007665ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007665ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007665ee: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7665f3u); f_0077fffc();
    /* 007665f3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007665f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007665f8: je 0x76661d */ if (fZ) goto L_0076661d;
L_007665fa:; BB(0x007665fa);
    /* 007665fa: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 007665fd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007665ff: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00766602: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00766605: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00766608: mov ebp, dword ptr [ebx + 8] */ r_ebp = R32((u32)(r_ebx+0x8u));
    /* 0076660b: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 0076660e: mov ecx, edi */ r_ecx = r_edi;
    /* 00766610: call 0x7667a8 */ r_esp -= 4; W32(r_esp, 0x766615u); f_007667a8();
    /* 00766615: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766618: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076661a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076661b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076661c: ret  */ FN_RET(0x007667a0); r_esp += 4; return;
L_0076661d:; BB(0x0076661d);
    /* 0076661d: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 00766620: cmp eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00766625: jg 0x766786 */ if ((!fZ&&fS==fO)) goto L_00766786;
L_0076662b:; BB(0x0076662b);
    /* 0076662b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0076662f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00766633: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00766637: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0076663a: mov dword ptr [edi + 0x3c], ebx */ W32((u32)(r_edi+0x3cu), r_ebx);
    /* 0076663d: mov ebx, dword ptr [edi + 0x70] */ r_ebx = R32((u32)(r_edi+0x70u));
    /* 00766640: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 00766643: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00766645: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00766648: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0076664b: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0076664e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00766651: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00766654: mov ebx, dword ptr [edi + 0x70] */ r_ebx = R32((u32)(r_edi+0x70u));
    /* 00766657: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 0076665a: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 0076665d: mov eax, dword ptr [edi + 0x48] */ r_eax = R32((u32)(r_edi+0x48u));
    /* 00766660: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00766663: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 00766666: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 00766669: push dword ptr [edi + 0x70] */ { u32 v = R32((u32)(r_edi+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076666c: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x766671u); f_007b999c();
    /* 00766671: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766672: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00766676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766677: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766679: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076667c: call 0x7b5218 */ r_esp -= 4; W32(r_esp, 0x766681u); f_007b5218();
    /* 00766681: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00766685: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00766689: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0076668d: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766690: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00766694: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 00766698: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 0076669c: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 007666a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007666a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007666a3: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x7666a8u); f_007b4c58();
    /* 007666a8: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007666ac: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007666b0: fld dword ptr [0x976190] */ FPUSH(R_F32((u32)(0x976190u)));
    /* 007666b6: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 007666b9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007666bb: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007666bf: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007666c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007666c3: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007666c7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007666c9: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007666cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007666cf: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x7666d4u); f_007b5264();
    /* 007666d4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007666d6: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007666da: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007666dc: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 007666de: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007666e2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007666e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007666e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007666e7: ja 0x76673d */ if ((!fC&&!fZ)) goto L_0076673d;
L_007666e9:; BB(0x007666e9);
    /* 007666e9: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 007666ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007666ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007666f0: ja 0x76673d */ if ((!fC&&!fZ)) goto L_0076673d;
L_007666f2:; BB(0x007666f2);
    /* 007666f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007666f4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007666f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007666f8: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 007666fb: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x766700u); f_007b52ec();
    /* 00766700: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00766702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766704: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766707: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x76670cu); f_007b52c4();
    /* 0076670c: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076670f: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x766714u); f_007b6894();
    /* 00766714: push 0x80000 */ { u32 v = 0x80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00766719: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076671b: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 0076671e: call 0x7b5290 */ r_esp -= 4; W32(r_esp, 0x766723u); f_007b5290();
    /* 00766723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766725: je 0x766757 */ if (fZ) goto L_00766757;
L_00766727:; BB(0x00766727);
    /* 00766727: mov ecx, edi */ r_ecx = r_edi;
    /* 00766729: call 0x7667e4 */ r_esp -= 4; W32(r_esp, 0x76672eu); f_007667e4();
    /* 0076672e: mov ecx, edi */ r_ecx = r_edi;
    /* 00766730: call 0x7667a8 */ r_esp -= 4; W32(r_esp, 0x766735u); f_007667a8();
    /* 00766735: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766738: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076673a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076673b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076673c: ret  */ FN_RET(0x007667a0); r_esp += 4; return;
L_0076673d:; BB(0x0076673d);
    /* 0076673d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076673f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00766741: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766743: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766746: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x76674bu); f_007b52c4();
    /* 0076674b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076674d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076674f: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00766752: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x766757u); f_007b52ec();
L_00766757:; BB(0x00766757);
    /* 00766757: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766759: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076675b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076675d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076675e: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x766763u); f_00805608();
    /* 00766763: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766766: mov ebx, dword ptr [edi + 0x64] */ r_ebx = R32((u32)(r_edi+0x64u));
    /* 00766769: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076676b: je 0x76677e */ if (fZ) goto L_0076677e;
L_0076676d:; BB(0x0076676d);
    /* 0076676d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0076676f: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00766772: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00766775: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 00766778: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0076677b: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
L_0076677e:; BB(0x0076677e);
    /* 0076677e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766781: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766782: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766783: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00766784: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766785: ret  */ FN_RET(0x007667a0); r_esp += 4; return;
L_00766786:; BB(0x00766786);
    /* 00766786: mov ecx, edi */ r_ecx = r_edi;
    /* 00766788: call 0x7667a8 */ r_esp -= 4; W32(r_esp, 0x76678du); f_007667a8();
    /* 0076678d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766790: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766792: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00766793: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766794: ret  */ FN_RET(0x007667a0); r_esp += 4; return;
L_007667a0:; BB(0x007667a0);
    /* 007667a0: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 007667a3: jmp 0x766488 */ goto L_00766488;
}

void f_007667a8(void) /* sub_7667A8 */
{
    FN_ENTER(0x007667a8);
    /* 007667a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007667a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007667aa: mov edi, ecx */ r_edi = r_ecx;
    /* 007667ac: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 007667b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007667b4: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 007667b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007667b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007667ba: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007667bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007667bd: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x7667c2u); f_00661448();
    /* 007667c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007667c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007667c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007667c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007667c7: push 0x6f7 */ { u32 v = 0x6f7u; r_esp -= 4; W32(r_esp, v); }
    /* 007667cc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7667d1u); f_00814298();
    /* 007667d1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 007667d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007667da: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 007667de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007667e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007667e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007667e3: ret  */ FN_RET(0x007667a8); r_esp += 4; return;
}

void f_007667e4(void) /* sub_7667E4 */
{
    FN_ENTER(0x007667e4);
    /* 007667e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007667e6: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007667e9: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 007667ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007667ef: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 007667f5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007667f7: call 0x76a724 */ r_esp -= 4; W32(r_esp, 0x7667fcu); f_0076a724();
    /* 007667fc: ret  */ FN_RET(0x007667e4); r_esp += 4; return;
}

void f_00766800(void) /* sub_766800 */
{
    FN_ENTER(0x00766800);
    /* 00766800: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00766801: mov edi, ecx */ r_edi = r_ecx;
    /* 00766803: mov ecx, edi */ r_ecx = r_edi;
    /* 00766805: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766807: call 0x765a90 */ r_esp -= 4; W32(r_esp, 0x76680cu); f_00765a90();
    /* 0076680c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076680e: je 0x766817 */ if (fZ) goto L_00766817;
L_00766810:; BB(0x00766810);
    /* 00766810: mov ecx, edi */ r_ecx = r_edi;
    /* 00766812: call 0x76681c */ r_esp -= 4; W32(r_esp, 0x766817u); f_0076681c();
L_00766817:; BB(0x00766817);
    /* 00766817: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766818: ret  */ FN_RET(0x00766800); r_esp += 4; return;
}

void f_0076681c(void) /* sub_76681C */
{
    FN_ENTER(0x0076681c);
    /* 0076681c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076681d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076681e: mov edi, ecx */ r_edi = r_ecx;
    /* 00766820: mov esi, dword ptr [edi + 0x60] */ r_esi = R32((u32)(r_edi+0x60u));
    /* 00766823: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00766826: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 00766829: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0076682c: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0076682f: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 00766832: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00766835: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 00766838: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x76683du); f_0082ddd8();
    /* 0076683d: fld dword ptr [0x976174] */ FPUSH(R_F32((u32)(0x976174u)));
    /* 00766843: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00766845: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 00766848: fstp dword ptr [edi + 0x58] */ W_F32((u32)(r_edi+0x58u), ST(0)); FPOP();
    /* 0076684b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x766850u); f_0082dcbc();
    /* 00766850: fld dword ptr [0x976174] */ FPUSH(R_F32((u32)(0x976174u)));
    /* 00766856: mov ecx, dword ptr [0xa9b068] */ r_ecx = R32((u32)(0xa9b068u));
    /* 0076685c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0076685e: fstp dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0)); FPOP();
    /* 00766861: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 00766864: mov dword ptr [edi + 0x54], 0 */ W32((u32)(r_edi+0x54u), 0x0u);
    /* 0076686b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076686d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076686e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076686f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766870: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00766872: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00766873: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x766878u); f_00661448();
    /* 00766878: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 0076687b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076687d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076687e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076687f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00766880: push 0x6f6 */ { u32 v = 0x6f6u; r_esp -= 4; W32(r_esp, v); }
    /* 00766885: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x76688au); f_00814298();
    /* 0076688a: mov dword ptr [edi + 0x5c], 1 */ W32((u32)(r_edi+0x5cu), 0x1u);
    /* 00766891: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766894: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00766895: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766896: ret  */ FN_RET(0x0076681c); r_esp += 4; return;
}

void f_00766898(void) /* sub_766898 */
{
    FN_ENTER(0x00766898);
    /* 00766898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00766899: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076689a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076689b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076689c: mov edi, ecx */ r_edi = r_ecx;
    /* 0076689e: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 007668a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007668a3: je 0x766922 */ if (fZ) goto L_00766922;
L_007668a5:; BB(0x007668a5);
    /* 007668a5: lea esi, [edi + 0x74] */ r_esi = (u32)(r_edi+0x74u);
    /* 007668a8: mov ecx, esi */ r_ecx = r_esi;
    /* 007668aa: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x7668afu); f_005771a4();
    /* 007668af: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x7668b4u); f_007bb6d0();
    /* 007668b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007668b5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7668bau); f_0068d5a8();
    /* 007668ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007668bb: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 007668be: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007668c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007668c2: mov ecx, esi */ r_ecx = r_esi;
    /* 007668c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007668c5: call 0x5772e0 */ r_esp -= 4; W32(r_esp, 0x7668cau); f_005772e0();
    /* 007668ca: mov ebx, eax */ r_ebx = r_eax;
    /* 007668cc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7668d1u); f_0082d7b0();
    /* 007668d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007668d3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x7668d8u); f_0082d838();
    /* 007668d8: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 007668db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007668dd: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x7668e2u); f_0082e9e4();
    /* 007668e2: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 007668e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007668e7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7668ecu); f_0082d8bc();
    /* 007668ec: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 007668ef: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7668f4u); f_00829cc8();
    /* 007668f4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007668f6: je 0x766900 */ if (fZ) goto L_00766900;
L_007668f8:; BB(0x007668f8);
    /* 007668f8: mov edx, dword ptr [edi + 0x74] */ r_edx = R32((u32)(r_edi+0x74u));
    /* 007668fb: mov ecx, esi */ r_ecx = r_esi;
    /* 007668fd: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x766900u); call_ind(t); }
L_00766900:; BB(0x00766900);
    /* 00766900: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766903: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00766906: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766909: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x76690eu); f_00830a28();
    /* 0076690e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766911: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766913: je 0x76691d */ if (fZ) goto L_0076691d;
L_00766915:; BB(0x00766915);
    /* 00766915: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 00766918: mov ecx, esi */ r_ecx = r_esi;
    /* 0076691a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x76691du); call_ind(t); }
L_0076691d:; BB(0x0076691d);
    /* 0076691d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x766922u); f_0082da80();
L_00766922:; BB(0x00766922);
    /* 00766922: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766923: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766924: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00766925: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00766926: ret  */ FN_RET(0x00766898); r_esp += 4; return;
}

void f_00766928(void) /* sub_766928 */
{
    FN_ENTER(0x00766928);
    /* 00766928: mov ecx, dword ptr [0xa9b018] */ r_ecx = R32((u32)(0xa9b018u));
    /* 0076692e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766930: je 0x766945 */ if (fZ) goto L_00766945;
L_00766932:; BB(0x00766932);
    /* 00766932: je 0x76693b */ if (fZ) goto L_0076693b;
L_00766934:; BB(0x00766934);
    /* 00766934: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766936: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76693bu); f_004066a8();
L_0076693b:; BB(0x0076693b);
    /* 0076693b: mov dword ptr [0xa9b018], 0 */ W32((u32)(0xa9b018u), 0x0u);
L_00766945:; BB(0x00766945);
    /* 00766945: ret  */ FN_RET(0x00766928); r_esp += 4; return;
}

void f_00766974(void) /* sub_766974 */
{
    FN_ENTER(0x00766974);
    /* 00766974: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766975: mov ebp, esp */ r_ebp = r_esp;
    /* 00766977: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00766979: push 0x8f3924 */ { u32 v = 0x8f3924u; r_esp -= 4; W32(r_esp, v); }
    /* 0076697e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00766984: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766985: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076698c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076698f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00766992: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00766995: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00766998: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076699b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 007669a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007669a7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7669acu); f_008581c5();
    /* 007669ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007669ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007669b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007669b2: je 0x766a55 */ if (fZ) goto L_00766a55;
L_007669b8:; BB(0x007669b8);
    /* 007669b8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007669bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007669c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007669c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007669cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007669cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007669cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007669ce: push 0x9f5ad0 */ { u32 v = 0x9f5ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 007669d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007669d5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x7669dau); f_005b7a84();
    /* 007669da: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007669dd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007669e4:; BB(0x007669e4);
    /* 007669e4: mov dword ptr [0xa9b018], edx */ W32((u32)(0xa9b018u), r_edx);
    /* 007669ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007669f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007669f3: je 0x766a17 */ if (fZ) goto L_00766a17;
L_007669f5:; BB(0x007669f5);
    /* 007669f5: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 007669fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007669fd: je 0x766a17 */ if (fZ) goto L_00766a17;
L_007669ff:; BB(0x007669ff);
    /* 007669ff: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00766a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766a07: je 0x766a17 */ if (fZ) goto L_00766a17;
L_00766a09:; BB(0x00766a09);
    /* 00766a09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766a0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766a13: mov esp, ebp */ r_esp = r_ebp;
    /* 00766a15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766a16: ret  */ FN_RET(0x00766974); r_esp += 4; return;
L_00766a17:; BB(0x00766a17);
    /* 00766a17: push dword ptr [0x9f5ad0] */ { u32 v = R32((u32)(0x9f5ad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766a1d: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 00766a22: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x766a27u); f_0061cdb0();
    /* 00766a27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766a2a: mov ecx, dword ptr [0xa9b018] */ r_ecx = R32((u32)(0xa9b018u));
    /* 00766a30: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766a32: je 0x766a47 */ if (fZ) goto L_00766a47;
L_00766a34:; BB(0x00766a34);
    /* 00766a34: je 0x766a3d */ if (fZ) goto L_00766a3d;
L_00766a36:; BB(0x00766a36);
    /* 00766a36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766a38: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x766a3du); f_004066a8();
L_00766a3d:; BB(0x00766a3d);
    /* 00766a3d: mov dword ptr [0xa9b018], 0 */ W32((u32)(0xa9b018u), 0x0u);
L_00766a47:; BB(0x00766a47);
    /* 00766a47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766a4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766a51: mov esp, ebp */ r_esp = r_ebp;
    /* 00766a53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766a54: ret  */ FN_RET(0x00766974); r_esp += 4; return;
L_00766a55:; BB(0x00766a55);
    /* 00766a55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00766a57: jmp 0x7669e4 */ goto L_007669e4;
}

void f_00766a5c(void) /* sub_766A5C */
{
    FN_ENTER(0x00766a5c);
    /* 00766a5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00766a5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00766a5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00766a61: call 0x766a80 */ r_esp -= 4; W32(r_esp, 0x766a66u); f_00766a80();
    /* 00766a66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00766a6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766a6c: jne 0x766a72 */ if (!fZ) goto L_00766a72;
L_00766a6e:; BB(0x00766a6e);
    /* 00766a6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766a6f: ret 4 */ FN_RET(0x00766a5c); r_esp += 8; return;
L_00766a72:; BB(0x00766a72);
    /* 00766a72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00766a73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x766a78u); f_005c2f74();
    /* 00766a78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766a79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766a7a: ret 4 */ FN_RET(0x00766a5c); r_esp += 8; return;
}

void f_00766a80(void) /* sub_766A80 */
{
    FN_ENTER(0x00766a80);
    /* 00766a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766a81: mov ebp, esp */ r_ebp = r_esp;
    /* 00766a83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00766a85: push 0x8f3940 */ { u32 v = 0x8f3940u; r_esp -= 4; W32(r_esp, v); }
    /* 00766a8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00766a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766a91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00766a98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00766a9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00766a9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00766aa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00766aa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00766aa7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00766aaa: mov dword ptr [ecx], 0xb43548 */ W32((u32)(r_ecx), 0xb43548u);
    /* 00766ab0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00766ab7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766aba: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00766abd: call 0x521ac0 */ r_esp -= 4; W32(r_esp, 0x766ac2u); f_00521ac0();
    /* 00766ac2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00766ac9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766acc: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x766ad1u); f_00765570();
    /* 00766ad1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766ad4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766adb: mov esp, ebp */ r_esp = r_ebp;
    /* 00766add: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766ade: ret  */ FN_RET(0x00766a80); r_esp += 4; return;
}

void f_00766ae0(void) /* sub_766AE0 */
{
    FN_ENTER(0x00766ae0);
    /* 00766ae0: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
    /* 00766ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766ae7: jne 0x766b0c */ if (!fZ) goto L_00766b0c;
L_00766ae9:; BB(0x00766ae9);
    /* 00766ae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766aeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766aec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766aed: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x766af2u); f_00765834();
    /* 00766af2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766af4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766af6: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x766afbu); f_00765834();
    /* 00766afb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766afd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00766aff: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x766b04u); f_00765834();
    /* 00766b04: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766b07: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
L_00766b0c:; BB(0x00766b0c);
    /* 00766b0c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766b0f: mov dword ptr [0xa9afe8], eax */ W32((u32)(0xa9afe8u), r_eax);
    /* 00766b14: ret  */ FN_RET(0x00766ae0); r_esp += 4; return;
}

void f_00766b18(void) /* sub_766B18 */
{
    FN_ENTER(0x00766b18);
    /* 00766b18: add dword ptr [0xa9afe8], 1 */ { u32 ad = (u32)(0xa9afe8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766b1f: ret  */ FN_RET(0x00766b18); r_esp += 4; return;
}

void f_00766b20(void) /* sub_766B20 */
{
    FN_ENTER(0x00766b20);
    /* 00766b20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766b21: mov ebp, esp */ r_ebp = r_esp;
    /* 00766b23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00766b25: push 0x8f396e */ { u32 v = 0x8f396eu; r_esp -= 4; W32(r_esp, v); }
    /* 00766b2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00766b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766b31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00766b38: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00766b3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00766b3e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00766b41: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00766b44: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00766b47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00766b4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766b4d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00766b50: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00766b53: call 0x765a14 */ r_esp -= 4; W32(r_esp, 0x766b58u); f_00765a14();
    /* 00766b58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00766b5f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766b62: mov dword ptr [ecx], 0xb43548 */ W32((u32)(r_ecx), 0xb43548u);
    /* 00766b68: add ecx, 0x58 */ {  u32 a = r_ecx; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00766b6b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00766b6d: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x766b72u); f_00521a4c();
    /* 00766b72: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00766b79: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766b7c: mov edx, dword ptr [0x9f5b14] */ r_edx = R32((u32)(0x9f5b14u));
    /* 00766b82: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00766b85: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00766b87:; BB(0x00766b87);
    /* 00766b87: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00766b8a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00766b8c: mov ebx, dword ptr [edx + edi*8 + 0x9f5b20] */ r_ebx = R32((u32)(r_edx+r_edi*8+0x9f5b20u));
    /* 00766b93: mov esi, dword ptr [edx + edi*8 + 0x9f5b24] */ r_esi = R32((u32)(r_edx+r_edi*8+0x9f5b24u));
    /* 00766b9a: mov ecx, dword ptr [ebx*4 + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx*4+0xa9b02cu));
    /* 00766ba1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766ba3: je 0x766c33 */ if (fZ) goto L_00766c33;
L_00766ba9:; BB(0x00766ba9);
    /* 00766ba9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00766baa: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x766bafu); f_005b8610();
    /* 00766baf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00766bb0: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00766bb3: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00766bb6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766bb9: mov dword ptr [edx + edi*4 + 0x24], eax */ W32((u32)(r_edx+r_edi*4+0x24u), r_eax);
    /* 00766bbd: mov ecx, dword ptr [ebx*4 + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx*4+0xa9b02cu));
    /* 00766bc4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x766bc9u); f_005b8624();
    /* 00766bc9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766bcc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00766bcf: mov dword ptr [edx + ecx*2 + 0x30], eax */ W32((u32)(r_edx+r_ecx*2+0x30u), r_eax);
    /* 00766bd3: mov ecx, dword ptr [ebx*4 + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx*4+0xa9b02cu));
    /* 00766bda: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00766bdb: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x766be0u); f_005b8638();
    /* 00766be0: mov edx, eax */ r_edx = r_eax;
    /* 00766be2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766be5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00766be8: mov dword ptr [eax + ecx*2 + 0x48], 0 */ W32((u32)(r_eax+r_ecx*2+0x48u), 0x0u);
    /* 00766bf0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00766bf3: mov dword ptr [eax + ecx*2 + 0x3c], edx */ W32((u32)(r_eax+r_ecx*2+0x3cu), r_edx);
    /* 00766bf7: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00766bfa: jl 0x766b87 */ if ((fS!=fO)) goto L_00766b87;
L_00766bfc:; BB(0x00766bfc);
    /* 00766bfc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00766bff: push 0x9f5b8c */ { u32 v = 0x9f5b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00766c04: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 00766c06: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 00766c0d: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00766c10: mov ecx, eax */ r_ecx = r_eax;
    /* 00766c12: call 0x765638 */ r_esp -= 4; W32(r_esp, 0x766c17u); f_00765638();
    /* 00766c17: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00766c1a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766c1d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766c20: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00766c23: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766c26: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766c2d: mov esp, ebp */ r_esp = r_ebp;
    /* 00766c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766c30: ret 8 */ FN_RET(0x00766b20); r_esp += 12; return;
L_00766c33:; BB(0x00766c33);
    /* 00766c33: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766c36: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766c39: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00766c3c: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00766c40: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766c46: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00766c4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766c4d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766c54: mov esp, ebp */ r_esp = r_ebp;
    /* 00766c56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766c57: ret 8 */ FN_RET(0x00766b20); r_esp += 12; return;
}

void f_00766c5c(void) /* sub_766C5C */
{
    FN_ENTER(0x00766c5c);
    /* 00766c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00766c5d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00766c60: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00766c62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00766c64: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00766c6b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00766c73: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00766c7b: call 0x765a40 */ r_esp -= 4; W32(r_esp, 0x766c80u); f_00765a40();
    /* 00766c80: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00766c82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00766c84: call 0x765a90 */ r_esp -= 4; W32(r_esp, 0x766c89u); f_00765a90();
    /* 00766c89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766c8b: jne 0x766c92 */ if (!fZ) goto L_00766c92;
L_00766c8d:; BB(0x00766c8d);
    /* 00766c8d: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 00766c90: jmp 0x766cc4 */ goto L_00766cc4;
L_00766c92:; BB(0x00766c92);
    /* 00766c92: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 00766c95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00766c97: jle 0x766e31 */ if ((fZ||fS!=fO)) goto L_00766e31;
L_00766c9d:; BB(0x00766c9d);
    /* 00766c9d: mov edx, 1 */ r_edx = 0x1u;
L_00766ca2:; BB(0x00766ca2);
    /* 00766ca2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766ca4: jne 0x766cbe */ if (!fZ) goto L_00766cbe;
L_00766ca6:; BB(0x00766ca6);
    /* 00766ca6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00766ca9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766cab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766cad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766cae: push 0x6f7 */ { u32 v = 0x6f7u; r_esp -= 4; W32(r_esp, v); }
    /* 00766cb3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x766cb8u); f_00814298();
    /* 00766cb8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766cbb: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
L_00766cbe:; BB(0x00766cbe);
    /* 00766cbe: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00766cc1: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
L_00766cc4:; BB(0x00766cc4);
    /* 00766cc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00766cc6: jle 0x766e2a */ if ((fZ||fS!=fO)) goto L_00766e2a;
L_00766ccc:; BB(0x00766ccc);
    /* 00766ccc: mov edx, 1 */ r_edx = 0x1u;
L_00766cd1:; BB(0x00766cd1);
    /* 00766cd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766cd3: je 0x766d58 */ if (fZ) goto L_00766d58;
L_00766cd9:; BB(0x00766cd9);
    /* 00766cd9: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 00766cdf: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00766ce3: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00766ce7: fmul dword ptr [0x976234] */ ST(0) = ST(0) * R_F32((u32)(0x976234u));
    /* 00766ced: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00766cf1: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00766cf4: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00766cf8: mov esi, ecx */ r_esi = r_ecx;
    /* 00766cfa: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00766cfe: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 00766d01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766d03: mov edi, eax */ r_edi = r_eax;
L_00766d05:; BB(0x00766d05);
    /* 00766d05: fld dword ptr [edi*4 + 0x976224] */ FPUSH(R_F32((u32)(r_edi*4+0x976224u)));
    /* 00766d0c: mov ecx, dword ptr [edi*4 + 0x976224] */ r_ecx = R32((u32)(r_edi*4+0x976224u));
    /* 00766d13: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00766d17: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00766d19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00766d1b: lea edx, [edi + 6] */ r_edx = (u32)(r_edi+0x6u);
    /* 00766d1e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00766d1f: jbe 0x766df7 */ if ((fC||fZ)) goto L_00766df7;
L_00766d25:; BB(0x00766d25);
    /* 00766d25: fadd dword ptr [0x976234] */ ST(0) = ST(0) + R_F32((u32)(0x976234u));
    /* 00766d2b: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00766d2f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00766d31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00766d33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00766d34: ja 0x766d48 */ if ((!fC&&!fZ)) goto L_00766d48;
L_00766d36:; BB(0x00766d36);
    /* 00766d36: lea eax, [ebx + 0x58] */ r_eax = (u32)(r_ebx+0x58u);
    /* 00766d39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766d3a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00766d3b: mov ecx, esi */ r_ecx = r_esi;
    /* 00766d3d: push 0xa9b020 */ { u32 v = 0xa9b020u; r_esp -= 4; W32(r_esp, v); }
    /* 00766d42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00766d43: call 0x76a724 */ r_esp -= 4; W32(r_esp, 0x766d48u); f_0076a724();
L_00766d48:; BB(0x00766d48);
    /* 00766d48: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00766d4b: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00766d4e: jb 0x766d05 */ if (fC) goto L_00766d05;
L_00766d50:; BB(0x00766d50);
    /* 00766d50: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00766d54: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_00766d58:; BB(0x00766d58);
    /* 00766d58: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 00766d5b: fcom dword ptr [0x976248] */ fx_compare(ST(0), R_F32((u32)(0x976248u))); 
    /* 00766d61: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00766d63: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00766d64: jb 0x766d88 */ if (fC) goto L_00766d88;
L_00766d66:; BB(0x00766d66);
    /* 00766d66: fcomp dword ptr [0x976244] */ fx_compare(ST(0), R_F32((u32)(0x976244u))); FPOP();
    /* 00766d6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00766d6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00766d6f: ja 0x766d8a */ if ((!fC&&!fZ)) goto L_00766d8a;
L_00766d71:; BB(0x00766d71);
    /* 00766d71: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00766d74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766d76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766d79: push 0x6fc */ { u32 v = 0x6fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00766d7e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x766d83u); f_00814298();
    /* 00766d83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766d86: jmp 0x766d8a */ goto L_00766d8a;
L_00766d88:; BB(0x00766d88);
    /* 00766d88: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00766d8a:; BB(0x00766d8a);
    /* 00766d8a: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 00766d8d: fcom dword ptr [0x976240] */ fx_compare(ST(0), R_F32((u32)(0x976240u))); 
    /* 00766d93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00766d95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00766d96: jb 0x766dbd */ if (fC) goto L_00766dbd;
L_00766d98:; BB(0x00766d98);
    /* 00766d98: fcom dword ptr [0x97623c] */ fx_compare(ST(0), R_F32((u32)(0x97623cu))); 
    /* 00766d9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00766da0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00766da1: ja 0x766dbd */ if ((!fC&&!fZ)) goto L_00766dbd;
L_00766da3:; BB(0x00766da3);
    /* 00766da3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766da5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00766da8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766daa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766dac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766dad: push 0x6fd */ { u32 v = 0x6fdu; r_esp -= 4; W32(r_esp, v); }
    /* 00766db2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x766db7u); f_00814298();
    /* 00766db7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766dba: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
L_00766dbd:; BB(0x00766dbd);
    /* 00766dbd: fld dword ptr [0x976238] */ FPUSH(R_F32((u32)(0x976238u)));
    /* 00766dc3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00766dc5: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 00766dc8: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 00766dcb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00766dcd: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 00766dd0: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00766dd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00766dd4: fstp dword ptr [ebx + 0x48] */ W_F32((u32)(r_ebx+0x48u), ST(0)); FPOP();
    /* 00766dd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00766dd9: jle 0x766df3 */ if ((fZ||fS!=fO)) goto L_00766df3;
L_00766ddb:; BB(0x00766ddb);
    /* 00766ddb: mov eax, 1 */ r_eax = 0x1u;
L_00766de0:; BB(0x00766de0);
    /* 00766de0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766de2: je 0x766dec */ if (fZ) goto L_00766dec;
L_00766de4:; BB(0x00766de4);
    /* 00766de4: fld dword ptr [ebx + 0x50] */ FPUSH(R_F32((u32)(r_ebx+0x50u)));
    /* 00766de7: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00766de9: fstp dword ptr [ebx + 0x50] */ W_F32((u32)(r_ebx+0x50u), ST(0)); FPOP();
L_00766dec:; BB(0x00766dec);
    /* 00766dec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766dee: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00766df1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766df2: ret  */ FN_RET(0x00766c5c); r_esp += 4; return;
L_00766df3:; BB(0x00766df3);
    /* 00766df3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766df5: jmp 0x766de0 */ goto L_00766de0;
L_00766df7:; BB(0x00766df7);
    /* 00766df7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00766df9: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00766dfd: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00766e01: mov ecx, esi */ r_ecx = r_esi;
    /* 00766e03: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00766e07: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766e0a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00766e0e: mov dword ptr [esp + 4], 0xa9b020 */ W32((u32)(r_esp+0x4u), 0xa9b020u);
    /* 00766e16: lea eax, [ebx + 0x58] */ r_eax = (u32)(r_ebx+0x58u);
    /* 00766e19: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00766e1c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00766e20: call 0x76a724 */ r_esp -= 4; W32(r_esp, 0x766e25u); f_0076a724();
    /* 00766e25: jmp 0x766d58 */ goto L_00766d58;
L_00766e2a:; BB(0x00766e2a);
    /* 00766e2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00766e2c: jmp 0x766cd1 */ goto L_00766cd1;
L_00766e31:; BB(0x00766e31);
    /* 00766e31: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00766e33: jmp 0x766ca2 */ goto L_00766ca2;
}

void f_00766e38(void) /* sub_766E38 */
{
    FN_ENTER(0x00766e38);
    /* 00766e38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766e39: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00766e3b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x766e40u); f_0082d7b0();
    /* 00766e40: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 00766e43: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00766e45: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x766e4au); f_00831308();
    /* 00766e4a: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 00766e4d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x766e52u); f_00829cc8();
    /* 00766e52: push 0x766ae0 */ { u32 v = 0x766ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766e57: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766e59: call 0x7657c8 */ r_esp -= 4; W32(r_esp, 0x766e5eu); f_007657c8();
    /* 00766e5e: push dword ptr [ebp + 0x48] */ { u32 v = R32((u32)(r_ebp+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766e61: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00766e64: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766e67: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x766e6cu); f_00830a28();
    /* 00766e6c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766e71: call 0x7657e4 */ r_esp -= 4; W32(r_esp, 0x766e76u); f_007657e4();
    /* 00766e76: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x766e7bu); f_0082da80();
    /* 00766e7b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x766e80u); f_0082d7b0();
    /* 00766e80: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00766e83: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x766e88u); f_00829cc8();
    /* 00766e88: push 0x766b18 */ { u32 v = 0x766b18u; r_esp -= 4; W32(r_esp, v); }
    /* 00766e8d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766e8f: call 0x7657c8 */ r_esp -= 4; W32(r_esp, 0x766e94u); f_007657c8();
    /* 00766e94: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00766e97: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766e9a: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766e9d: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x766ea2u); f_00830a28();
    /* 00766ea2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766ea5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00766ea7: call 0x7657e4 */ r_esp -= 4; W32(r_esp, 0x766eacu); f_007657e4();
    /* 00766eac: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x766eb1u); f_0082da80();
    /* 00766eb1: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 00766eb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00766eb6: jle 0x766ee8 */ if ((fZ||fS!=fO)) goto L_00766ee8;
L_00766eb8:; BB(0x00766eb8);
    /* 00766eb8: mov eax, 1 */ r_eax = 0x1u;
L_00766ebd:; BB(0x00766ebd);
    /* 00766ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766ebf: je 0x766ee6 */ if (fZ) goto L_00766ee6;
L_00766ec1:; BB(0x00766ec1);
    /* 00766ec1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x766ec6u); f_0082d7b0();
    /* 00766ec6: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00766ec9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x766eceu); f_00829cc8();
    /* 00766ece: push dword ptr [ebp + 0x50] */ { u32 v = R32((u32)(r_ebp+0x50u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766ed1: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766ed4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00766ed6: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00766ed9: call 0x830a70 */ r_esp -= 4; W32(r_esp, 0x766edeu); f_00830a70();
    /* 00766ede: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00766ee1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x766ee6u); f_0082da80();
L_00766ee6:; BB(0x00766ee6);
    /* 00766ee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766ee7: ret  */ FN_RET(0x00766e38); r_esp += 4; return;
L_00766ee8:; BB(0x00766ee8);
    /* 00766ee8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766eea: jmp 0x766ebd */ goto L_00766ebd;
}

void f_00766eec(void) /* sub_766EEC */
{
    FN_ENTER(0x00766eec);
    /* 00766eec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00766eed: mov eax, 4 */ r_eax = 0x4u;
    /* 00766ef2: mov ebx, eax */ r_ebx = r_eax;
L_00766ef4:; BB(0x00766ef4);
    /* 00766ef4: mov ecx, dword ptr [ebx + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx+0xa9b02cu));
    /* 00766efa: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766efd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766eff: je 0x766f14 */ if (fZ) goto L_00766f14;
L_00766f01:; BB(0x00766f01);
    /* 00766f01: je 0x766f0a */ if (fZ) goto L_00766f0a;
L_00766f03:; BB(0x00766f03);
    /* 00766f03: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f05: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x766f0au); f_004066a8();
L_00766f0a:; BB(0x00766f0a);
    /* 00766f0a: mov dword ptr [ebx + 0xa9b030], 0 */ W32((u32)(r_ebx+0xa9b030u), 0x0u);
L_00766f14:; BB(0x00766f14);
    /* 00766f14: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00766f16: jge 0x766ef4 */ if ((fS==fO)) goto L_00766ef4;
L_00766f18:; BB(0x00766f18);
    /* 00766f18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00766f19: ret  */ FN_RET(0x00766eec); r_esp += 4; return;
}

void f_00766f1c(void) /* sub_766F1C */
{
    FN_ENTER(0x00766f1c);
    /* 00766f1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00766f1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00766f1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00766f21: push 0x8f3994 */ { u32 v = 0x8f3994u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00766f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00766f34: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00766f37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00766f3a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00766f3d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00766f40: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00766f43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766f45: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00766f48:; BB(0x00766f48);
    /* 00766f48: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00766f4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f54: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x766f59u); f_008581c5();
    /* 00766f59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766f5a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00766f5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766f5f: je 0x767035 */ if (fZ) goto L_00767035;
L_00766f65:; BB(0x00766f65);
    /* 00766f65: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00766f6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00766f73: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00766f76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766f79: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00766f7c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766f7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f83: push dword ptr [ebx + 0x9f5b18] */ { u32 v = R32((u32)(r_ebx+0x9f5b18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766f89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f8b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x766f90u); f_005b7a84();
    /* 00766f90: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766f93: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00766f9a:; BB(0x00766f9a);
    /* 00766f9a: mov dword ptr [ebx + 0xa9b02c], edx */ W32((u32)(r_ebx+0xa9b02cu), r_edx);
    /* 00766fa0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00766fa7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fa9: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fab:; BB(0x00766fab);
    /* 00766fab: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00766fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fb3: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fb5:; BB(0x00766fb5);
    /* 00766fb5: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00766fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fbd: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fbf:; BB(0x00766fbf);
    /* 00766fbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766fc2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00766fc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00766fc8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00766fcb: jl 0x766f48 */ if ((fS!=fO)) goto L_00766f48;
L_00766fd1:; BB(0x00766fd1);
    /* 00766fd1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766fd4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00766fd7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00766fda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766fdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 00766fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766fe7: ret  */ FN_RET(0x00766f1c); r_esp += 4; return;
L_00766fe8:; BB(0x00766fe8);
    /* 00766fe8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766feb: mov edx, dword ptr [eax*4 + 0x9f5b18] */ r_edx = R32((u32)(r_eax*4+0x9f5b18u));
    /* 00766ff2: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00766ff4: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 00766ff9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x766ffeu); f_0061cdb0();
    /* 00766ffe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767001: mov ecx, dword ptr [ebx + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx+0xa9b02cu));
    /* 00767007: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767009: je 0x76701e */ if (fZ) goto L_0076701e;
L_0076700b:; BB(0x0076700b);
    /* 0076700b: je 0x767014 */ if (fZ) goto L_00767014;
L_0076700d:; BB(0x0076700d);
    /* 0076700d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076700f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x767014u); f_004066a8();
L_00767014:; BB(0x00767014);
    /* 00767014: mov dword ptr [ebx + 0xa9b02c], 0 */ W32((u32)(r_ebx+0xa9b02cu), 0x0u);
L_0076701e:; BB(0x0076701e);
    /* 0076701e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767021: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00767024: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00767027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076702a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00767031: mov esp, ebp */ r_esp = r_ebp;
    /* 00767033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767034: ret  */ FN_RET(0x00766f1c); r_esp += 4; return;
L_00767035:; BB(0x00767035);
    /* 00767035: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00767038: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076703a: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0076703d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076703f: jmp 0x766f9a */ goto L_00766f9a;
}

void f_00766f4e(void)
{
    FN_ENTER(0x00766f4e);
    goto L_00766f4e;
L_00766f48:; BB(0x00766f48);
    /* 00766f48: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00766f4e:; BB(0x00766f4e);
    /* 00766f4e: add byte ptr [eax + 0x40], ch */ { u32 ad = (u32)(r_eax+0x40u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f51: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00766f53: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (r < a); }
    /* 00766f54: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x766f59u); f_008581c5();
    /* 00766f55: insb byte ptr es:[edi], dx */ UNSUP(0x00766f55, "insb byte ptr es:[edi], dx");
    /* 00766f56: adc cl, byte ptr [edi] */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = R8((u32)(r_edi)); u32 r = (a + b + c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00766f58: add byte ptr [ecx - 0x77], bl */ { u32 ad = (u32)(r_ecx+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766f5a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00766f5b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00766f5c: fadd qword ptr [ebp - 0x2f7bf040] */ ST(0) = ST(0) + R_F64((u32)(r_ebp+0xd0840fc0u));
    /* 00766f5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766f5f: je 0x767035 */ if (fZ) goto L_00767035;
    /* 00766f62: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f64: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
L_00766f65:; BB(0x00766f65);
    /* 00766f65: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00766f66: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00766f67: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00766f69: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f6b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00766f6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00766f6d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00766f6e: cld  */ rt_df = 0;
    /* 00766f6f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f71: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f73: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00766f76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766f79: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00766f7c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766f7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f83: push dword ptr [ebx + 0x9f5b18] */ { u32 v = R32((u32)(r_ebx+0x9f5b18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766f89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f8b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x766f90u); f_005b7a84();
    /* 00766f90: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766f93: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00766f9a:; BB(0x00766f9a);
    /* 00766f9a: mov dword ptr [ebx + 0xa9b02c], edx */ W32((u32)(r_ebx+0xa9b02cu), r_edx);
    /* 00766fa0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00766fa7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fa9: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fab:; BB(0x00766fab);
    /* 00766fab: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00766fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fb3: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fb5:; BB(0x00766fb5);
    /* 00766fb5: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00766fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fbd: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fbf:; BB(0x00766fbf);
    /* 00766fbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766fc2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00766fc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00766fc8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00766fcb: jl 0x766f48 */ if ((fS!=fO)) goto L_00766f48;
L_00766fd1:; BB(0x00766fd1);
    /* 00766fd1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766fd4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00766fd7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00766fda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766fdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 00766fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766fe7: ret  */ FN_RET(0x00766f4e); r_esp += 4; return;
L_00766fe8:; BB(0x00766fe8);
    /* 00766fe8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766feb: mov edx, dword ptr [eax*4 + 0x9f5b18] */ r_edx = R32((u32)(r_eax*4+0x9f5b18u));
    /* 00766ff2: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00766ff4: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 00766ff9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x766ffeu); f_0061cdb0();
    /* 00766ffe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767001: mov ecx, dword ptr [ebx + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx+0xa9b02cu));
    /* 00767007: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767009: je 0x76701e */ if (fZ) goto L_0076701e;
L_0076700b:; BB(0x0076700b);
    /* 0076700b: je 0x767014 */ if (fZ) goto L_00767014;
L_0076700d:; BB(0x0076700d);
    /* 0076700d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076700f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x767014u); f_004066a8();
L_00767014:; BB(0x00767014);
    /* 00767014: mov dword ptr [ebx + 0xa9b02c], 0 */ W32((u32)(r_ebx+0xa9b02cu), 0x0u);
L_0076701e:; BB(0x0076701e);
    /* 0076701e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767021: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00767024: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00767027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076702a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00767031: mov esp, ebp */ r_esp = r_ebp;
    /* 00767033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767034: ret  */ FN_RET(0x00766f4e); r_esp += 4; return;
L_00767035:; BB(0x00767035);
    /* 00767035: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00767038: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076703a: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0076703d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076703f: jmp 0x766f9a */ goto L_00766f9a;
}

void f_00766f6d(void)
{
    FN_ENTER(0x00766f6d);
    goto L_00766f6d;
L_00766f48:; BB(0x00766f48);
    /* 00766f48: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00766f4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f54: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x766f59u); f_008581c5();
    /* 00766f59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00766f5a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00766f5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766f5f: je 0x767035 */ if (fZ) goto L_00767035;
L_00766f65:; BB(0x00766f65);
    /* 00766f65: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00766f6c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_00766f6d:; BB(0x00766f6d);
    /* 00766f6d: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00766f6e: cld  */ rt_df = 0;
    /* 00766f6f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f71: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00766f73: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00766f76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766f79: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00766f7c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00766f7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00766f80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00766f83: push dword ptr [ebx + 0x9f5b18] */ { u32 v = R32((u32)(r_ebx+0x9f5b18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00766f89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00766f8b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x766f90u); f_005b7a84();
    /* 00766f90: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00766f93: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00766f9a:; BB(0x00766f9a);
    /* 00766f9a: mov dword ptr [ebx + 0xa9b02c], edx */ W32((u32)(r_ebx+0xa9b02cu), r_edx);
    /* 00766fa0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00766fa7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fa9: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fab:; BB(0x00766fab);
    /* 00766fab: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 00766fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fb3: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fb5:; BB(0x00766fb5);
    /* 00766fb5: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00766fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00766fbd: je 0x766fe8 */ if (fZ) goto L_00766fe8;
L_00766fbf:; BB(0x00766fbf);
    /* 00766fbf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766fc2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00766fc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00766fc8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00766fcb: jl 0x766f48 */ if ((fS!=fO)) goto L_00766f48;
L_00766fd1:; BB(0x00766fd1);
    /* 00766fd1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00766fd4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00766fd7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00766fda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00766fdd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00766fe4: mov esp, ebp */ r_esp = r_ebp;
    /* 00766fe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00766fe7: ret  */ FN_RET(0x00766f6d); r_esp += 4; return;
L_00766fe8:; BB(0x00766fe8);
    /* 00766fe8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00766feb: mov edx, dword ptr [eax*4 + 0x9f5b18] */ r_edx = R32((u32)(r_eax*4+0x9f5b18u));
    /* 00766ff2: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00766ff4: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 00766ff9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x766ffeu); f_0061cdb0();
    /* 00766ffe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767001: mov ecx, dword ptr [ebx + 0xa9b02c] */ r_ecx = R32((u32)(r_ebx+0xa9b02cu));
    /* 00767007: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767009: je 0x76701e */ if (fZ) goto L_0076701e;
L_0076700b:; BB(0x0076700b);
    /* 0076700b: je 0x767014 */ if (fZ) goto L_00767014;
L_0076700d:; BB(0x0076700d);
    /* 0076700d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076700f: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x767014u); f_004066a8();
L_00767014:; BB(0x00767014);
    /* 00767014: mov dword ptr [ebx + 0xa9b02c], 0 */ W32((u32)(r_ebx+0xa9b02cu), 0x0u);
L_0076701e:; BB(0x0076701e);
    /* 0076701e: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767021: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00767024: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00767027: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076702a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00767031: mov esp, ebp */ r_esp = r_ebp;
    /* 00767033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767034: ret  */ FN_RET(0x00766f6d); r_esp += 4; return;
L_00767035:; BB(0x00767035);
    /* 00767035: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00767038: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076703a: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0076703d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076703f: jmp 0x766f9a */ goto L_00766f9a;
}

