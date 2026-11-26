#include "protos.h"

void f_006130e8(void) /* sub_6130E8 */
{
    FN_ENTER(0x006130e8);
    /* 006130e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006130e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006130eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006130ed: push 0x8e0ff8 */ { u32 v = 0x8e0ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 006130f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006130f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006130f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613100: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613106: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613109: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061310c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061310f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00613114: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061311b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x613120u); f_008581c5();
    /* 00613120: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613121: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00613124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613126: je 0x6131cc */ if (fZ) goto L_006131cc;
L_0061312c:; BB(0x0061312c);
    /* 0061312c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00613133: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061313a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061313d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061313f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613142: push 0x9c4860 */ { u32 v = 0x9c4860u; r_esp -= 4; W32(r_esp, v); }
    /* 00613147: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613149: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61314eu); f_005b7a84();
    /* 0061314e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613151: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00613158:; BB(0x00613158);
    /* 00613158: mov dword ptr [0xa8ea50], ecx */ W32((u32)(0xa8ea50u), r_ecx);
    /* 0061315e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613165: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613167: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61316cu); f_005b8610();
    /* 0061316c: mov dword ptr [0xa8ea4c], eax */ W32((u32)(0xa8ea4cu), r_eax);
    /* 00613171: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00613173: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x613178u); f_008581c5();
    /* 00613178: push 0x92ff64 */ { u32 v = 0x92ff64u; r_esp -= 4; W32(r_esp, v); }
    /* 0061317d: mov dword ptr [0xa8ea48], eax */ W32((u32)(0xa8ea48u), r_eax);
    /* 00613182: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x613187u); f_008009dc();
    /* 00613187: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061318a: mov edx, dword ptr [0xa8ea48] */ r_edx = R32((u32)(0xa8ea48u));
    /* 00613190: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613192: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00613194: mov ecx, dword ptr [0xa8ea50] */ r_ecx = R32((u32)(0xa8ea50u));
    /* 0061319a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61319fu); f_005b8624();
    /* 0061319f: mov edx, dword ptr [0xa8ea48] */ r_edx = R32((u32)(0xa8ea48u));
    /* 006131a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006131a7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006131aa: mov ecx, dword ptr [0xa8ea50] */ r_ecx = R32((u32)(0xa8ea50u));
    /* 006131b0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6131b5u); f_005b8624();
    /* 006131b5: mov edx, dword ptr [0xa8ea48] */ r_edx = R32((u32)(0xa8ea48u));
    /* 006131bb: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006131be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006131c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006131c8: mov esp, ebp */ r_esp = r_ebp;
    /* 006131ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006131cb: ret  */ FN_RET(0x006130e8); r_esp += 4; return;
L_006131cc:; BB(0x006131cc);
    /* 006131cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006131ce: jmp 0x613158 */ goto L_00613158;
}

void f_006131d0(void) /* sub_6131D0 */
{
    FN_ENTER(0x006131d0);
    /* 006131d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006131d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006131d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006131d5: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x6131dau); f_006131f4();
    /* 006131da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006131de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006131e0: jne 0x6131e6 */ if (!fZ) goto L_006131e6;
L_006131e2:; BB(0x006131e2);
    /* 006131e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006131e3: ret 4 */ FN_RET(0x006131d0); r_esp += 8; return;
L_006131e6:; BB(0x006131e6);
    /* 006131e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006131e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6131ecu); f_005c2f74();
    /* 006131ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006131ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006131ee: ret 4 */ FN_RET(0x006131d0); r_esp += 8; return;
}

void f_006131f4(void) /* sub_6131F4 */
{
    FN_ENTER(0x006131f4);
    /* 006131f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006131f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006131f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006131f9: push 0x8e1014 */ { u32 v = 0x8e1014u; r_esp -= 4; W32(r_esp, v); }
    /* 006131fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061320c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061320f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613212: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613215: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613218: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061321b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061321e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613221: mov dword ptr [ecx], 0xb25048 */ W32((u32)(r_ecx), 0xb25048u);
    /* 00613227: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061322e: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x613233u); f_007b4aec();
    /* 00613233: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613236: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061323d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061323f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613240: ret  */ FN_RET(0x006131f4); r_esp += 4; return;
}

void f_00613244(void) /* sub_613244 */
{
    FN_ENTER(0x00613244);
    /* 00613244: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613245: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613248: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061324a: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00613250: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613252: je 0x61329f */ if (fZ) goto L_0061329f;
L_00613254:; BB(0x00613254);
    /* 00613254: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613256: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613258: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x61325du); f_007b5264();
    /* 0061325d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00613260: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00613264: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00613267: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00613269: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061326b: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061326e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613270: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00613274: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00613275: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00613277: jae 0x61327b */ if (!fC) goto L_0061327b;
L_00613279:; BB(0x00613279);
    /* 00613279: fst st(1) */ ST(1) = ST(0);
L_0061327b:; BB(0x0061327b);
    /* 0061327b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061327d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00613280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613281: mov edx, ebx */ r_edx = r_ebx;
    /* 00613283: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x613288u); f_00830aa0();
    /* 00613288: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0061328b: fchs  */ ST(0) = -ST(0);
    /* 0061328d: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00613291: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00613293: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00613294: jae 0x61329f */ if (!fC) goto L_0061329f;
L_00613296:; BB(0x00613296);
    /* 00613296: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00613298: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061329b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061329c: ret 4 */ FN_RET(0x00613244); r_esp += 8; return;
L_0061329f:; BB(0x0061329f);
    /* 0061329f: mov eax, 1 */ r_eax = 0x1u;
    /* 006132a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006132a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006132a8: ret 4 */ FN_RET(0x00613244); r_esp += 8; return;
}

void f_006132ac(void) /* sub_6132AC */
{
    FN_ENTER(0x006132ac);
    /* 006132ac: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006132b0: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 006132b6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006132b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006132ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006132bb: jbe 0x6132d8 */ if ((fC||fZ)) goto L_006132d8;
L_006132bd:; BB(0x006132bd);
    /* 006132bd: fld dword ptr [ecx + 0xb8] */ FPUSH(R_F32((u32)(r_ecx+0xb8u)));
    /* 006132c3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 006132c5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006132c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006132c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006132ca: jb 0x6132d8 */ if (fC) goto L_006132d8;
L_006132cc:; BB(0x006132cc);
    /* 006132cc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006132ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006132d0: mov eax, 1 */ r_eax = 0x1u;
    /* 006132d5: ret 4 */ FN_RET(0x006132ac); r_esp += 8; return;
L_006132d8:; BB(0x006132d8);
    /* 006132d8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006132da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006132dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006132de: ret 4 */ FN_RET(0x006132ac); r_esp += 8; return;
}

void f_006132e4(void) /* sub_6132E4 */
{
    FN_ENTER(0x006132e4);
    /* 006132e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006132e5: mov edi, ecx */ r_edi = r_ecx;
    /* 006132e7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006132eb: mov ecx, edi */ r_ecx = r_edi;
    /* 006132ed: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6132f2u); f_007b4b48();
    /* 006132f2: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006132f5: mov dword ptr [edi], 0xb25048 */ W32((u32)(r_edi), 0xb25048u);
    /* 006132fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006132fd: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 00613303: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 0061330d: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613312: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 00613318: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
    /* 00613322: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00613325: mov eax, edi */ r_eax = r_edi;
    /* 00613327: mov dword ptr [edi + 0xb8], 0x3f800000 */ W32((u32)(r_edi+0xb8u), 0x3f800000u);
    /* 00613331: mov dword ptr [edi + 0xc0], 0x44480000 */ W32((u32)(r_edi+0xc0u), 0x44480000u);
    /* 0061333b: mov dword ptr [edi + 0xc4], 0x41f00000 */ W32((u32)(r_edi+0xc4u), 0x41f00000u);
    /* 00613345: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00613346: ret 4 */ FN_RET(0x006132e4); r_esp += 8; return;
}

void f_0061334c(void) /* sub_61334C */
{
    FN_ENTER(0x0061334c);
    /* 0061334c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061334d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061334e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061334f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613352: mov edi, ecx */ r_edi = r_ecx;
    /* 00613354: fld dword ptr [0x92ff8c] */ FPUSH(R_F32((u32)(0x92ff8cu)));
    /* 0061335a: fmul dword ptr [edi + 0xc0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xc0u));
    /* 00613360: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 00613366: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 00613368: mov edx, dword ptr [edi + 0xc4] */ r_edx = R32((u32)(r_edi+0xc4u));
    /* 0061336e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613371: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00613374: mov ecx, edi */ r_ecx = r_edi;
    /* 00613376: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0061337a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0061337e: call dword ptr [ebp + 0x20] */ { u32 t = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, 0x613381u); call_ind(t); }
    /* 00613381: mov esi, eax */ r_esi = r_eax;
    /* 00613383: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613385: je 0x613421 */ if (fZ) goto L_00613421;
L_0061338b:; BB(0x0061338b);
    /* 0061338b: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00613391: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613393: je 0x613457 */ if (fZ) goto L_00613457;
L_00613399:; BB(0x00613399);
    /* 00613399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061339b: mov ecx, edi */ r_ecx = r_edi;
    /* 0061339d: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x6133a2u); f_007b5264();
    /* 006133a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006133a5: fld dword ptr [0x92ff88] */ FPUSH(R_F32((u32)(0x92ff88u)));
    /* 006133ab: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006133ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006133b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006133b2: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 006133b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006133b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006133b8: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006133bc: mov edx, ebp */ r_edx = r_ebp;
    /* 006133be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006133c0: jae 0x6133c4 */ if (!fC) goto L_006133c4;
L_006133c2:; BB(0x006133c2);
    /* 006133c2: fst st(1) */ ST(1) = ST(0);
L_006133c4:; BB(0x006133c4);
    /* 006133c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006133c6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006133c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006133ca: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6133cfu); f_00830aa0();
    /* 006133cf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006133d2: fchs  */ ST(0) = -ST(0);
    /* 006133d4: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 006133d8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006133da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006133db: jb 0x613421 */ if (fC) goto L_00613421;
L_006133dd:; BB(0x006133dd);
    /* 006133dd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6133e2u); f_0082d7b0();
    /* 006133e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006133e4: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6133e9u); f_0082d838();
    /* 006133e9: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006133ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006133ee: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6133f3u); f_0082d8bc();
    /* 006133f3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006133f6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6133fbu); f_00829cc8();
    /* 006133fb: mov edx, dword ptr [edi + 0xbc] */ r_edx = R32((u32)(r_edi+0xbcu));
    /* 00613401: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613403: je 0x61343c */ if (fZ) goto L_0061343c;
L_00613405:; BB(0x00613405);
    /* 00613405: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613408: je 0x613428 */ if (fZ) goto L_00613428;
L_0061340a:; BB(0x0061340a);
    /* 0061340a: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613410: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613411: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613414: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x613419u); f_0083046c();
    /* 00613419: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0061341c:; BB(0x0061341c);
    /* 0061341c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x613421u); f_0082da80();
L_00613421:; BB(0x00613421);
    /* 00613421: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00613424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613425: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613426: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00613427: ret  */ FN_RET(0x0061334c); r_esp += 4; return;
L_00613428:; BB(0x00613428);
    /* 00613428: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061342e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061342f: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613432: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x613437u); f_0083046c();
    /* 00613437: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061343a: jmp 0x61341c */ goto L_0061341c;
L_0061343c:; BB(0x0061343c);
    /* 0061343c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061343f: je 0x61344c */ if (fZ) goto L_0061344c;
L_00613441:; BB(0x00613441);
    /* 00613441: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613444: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x613449u); f_0082e1e8();
    /* 00613449: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061344a: jmp 0x61341c */ goto L_0061341c;
L_0061344c:; BB(0x0061344c);
    /* 0061344c: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061344f: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x613454u); f_0082e1e8();
    /* 00613454: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613455: jmp 0x61341c */ goto L_0061341c;
L_00613457:; BB(0x00613457);
    /* 00613457: lea ebp, [edi + 0x38] */ r_ebp = (u32)(r_edi+0x38u);
    /* 0061345a: jmp 0x6133dd */ goto L_006133dd;
}

void f_0061345c(void) /* sub_61345C */
{
    FN_ENTER(0x0061345c);
    /* 0061345c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061345d: mov edi, ecx */ r_edi = r_ecx;
    /* 0061345f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x613464u); f_004f7c84();
    /* 00613464: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00613467: je 0x61347a */ if (fZ) goto L_0061347a;
L_00613469:; BB(0x00613469);
    /* 00613469: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 0061346f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613471: je 0x61347a */ if (fZ) goto L_0061347a;
L_00613473:; BB(0x00613473);
    /* 00613473: mov ecx, edi */ r_ecx = r_edi;
    /* 00613475: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x61347au); f_0061347c();
L_0061347a:; BB(0x0061347a);
    /* 0061347a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061347b: ret  */ FN_RET(0x0061345c); r_esp += 4; return;
}

void f_0061347c(void) /* sub_61347C */
{
    FN_ENTER(0x0061347c);
    /* 0061347c: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 00613482: fadd dword ptr [ecx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb8u));
    /* 00613488: fld dword ptr [ecx + 0xb4] */ FPUSH(R_F32((u32)(r_ecx+0xb4u)));
    /* 0061348e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00613490: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00613492: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00613493: jae 0x61349e */ if (!fC) goto L_0061349e;
L_00613495:; BB(0x00613495);
    /* 00613495: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00613497: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 0061349d: ret  */ FN_RET(0x0061347c); r_esp += 4; return;
L_0061349e:; BB(0x0061349e);
    /* 0061349e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006134a0: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 006134a6: ret  */ FN_RET(0x0061347c); r_esp += 4; return;
}

void f_006134a8(void) /* sub_6134A8 */
{
    FN_ENTER(0x006134a8);
    /* 006134a8: mov dword ptr [0xa8ea58], 0x3f800000 */ W32((u32)(0xa8ea58u), 0x3f800000u);
    /* 006134b2: mov dword ptr [0xa8ea5c], 0x41000000 */ W32((u32)(0xa8ea5cu), 0x41000000u);
    /* 006134bc: mov dword ptr [0xa8ea60], 0x3fc00000 */ W32((u32)(0xa8ea60u), 0x3fc00000u);
    /* 006134c6: ret  */ FN_RET(0x006134a8); r_esp += 4; return;
}

void f_006134c8(void) /* sub_6134C8 */
{
    FN_ENTER(0x006134c8);
    /* 006134c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006134c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006134ca: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 006134cf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006134d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006134d3: jle 0x613526 */ if ((fZ||fS!=fO)) goto L_00613526;
L_006134d5:; BB(0x006134d5);
    /* 006134d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006134d7: mov esi, ecx */ r_esi = r_ecx;
L_006134d9:; BB(0x006134d9);
    /* 006134d9: mov edx, dword ptr [edx*4 + 0xaad720] */ r_edx = R32((u32)(r_edx*4+0xaad720u));
    /* 006134e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006134e2: je 0x61351c */ if (fZ) goto L_0061351c;
L_006134e4:; BB(0x006134e4);
    /* 006134e4: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006134e8: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006134ee: jge 0x61351c */ if ((fS==fO)) goto L_0061351c;
L_006134f0:; BB(0x006134f0);
    /* 006134f0: mov ecx, dword ptr [edx + 0x3f0] */ r_ecx = R32((u32)(r_edx+0x3f0u));
    /* 006134f6: cmp ecx, dword ptr [0xaafca0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006134fc: jne 0x61351c */ if (!fZ) goto L_0061351c;
L_006134fe:; BB(0x006134fe);
    /* 006134fe: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00613501: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613504: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00613505: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613506: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x61350bu); f_007a9180();
    /* 0061350b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0061350e: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 00613512: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00613514: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00613515: jb 0x61352d */ if (fC) goto L_0061352d;
L_00613517:; BB(0x00613517);
    /* 00613517: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0061351c:; BB(0x0061351c);
    /* 0061351c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0061351f: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 00613522: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613524: jl 0x6134d9 */ if ((fS!=fO)) goto L_006134d9;
L_00613526:; BB(0x00613526);
    /* 00613526: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613528: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613529: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061352a: ret 4 */ FN_RET(0x006134c8); r_esp += 8; return;
L_0061352d:; BB(0x0061352d);
    /* 0061352d: mov eax, 1 */ r_eax = 0x1u;
    /* 00613532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613533: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613534: ret 4 */ FN_RET(0x006134c8); r_esp += 8; return;
}

void f_00613538(void) /* sub_613538 */
{
    FN_ENTER(0x00613538);
    /* 00613538: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613539: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061353b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061353d: call 0x61355c */ r_esp -= 4; W32(r_esp, 0x613542u); f_0061355c();
    /* 00613542: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00613546: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613548: jne 0x61354e */ if (!fZ) goto L_0061354e;
L_0061354a:; BB(0x0061354a);
    /* 0061354a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061354b: ret 4 */ FN_RET(0x00613538); r_esp += 8; return;
L_0061354e:; BB(0x0061354e);
    /* 0061354e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061354f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x613554u); f_005c2f74();
    /* 00613554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613555: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613556: ret 4 */ FN_RET(0x00613538); r_esp += 8; return;
}

void f_0061355c(void) /* sub_61355C */
{
    FN_ENTER(0x0061355c);
    /* 0061355c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061355d: mov ebp, esp */ r_ebp = r_esp;
    /* 0061355f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613561: push 0x8e1030 */ { u32 v = 0x8e1030u; r_esp -= 4; W32(r_esp, v); }
    /* 00613566: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061356c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061356d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613574: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613577: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061357a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061357d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613580: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00613583: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613586: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061358d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613590: mov dword ptr [eax], 0xb25118 */ W32((u32)(r_eax), 0xb25118u);
    /* 00613596: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613597: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61359cu); f_007b4e84();
    /* 0061359c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061359d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006135a0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6135a5u); f_007b9c8c();
    /* 006135a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006135ac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006135af: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x6135b4u); f_007b4aec();
    /* 006135b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006135b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006135be: mov esp, ebp */ r_esp = r_ebp;
    /* 006135c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006135c1: ret  */ FN_RET(0x0061355c); r_esp += 4; return;
}

void f_006135c4(void) /* sub_6135C4 */
{
    FN_ENTER(0x006135c4);
    /* 006135c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006135c5: mov esi, ecx */ r_esi = r_ecx;
    /* 006135c7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006135c9: mov ecx, esi */ r_ecx = r_esi;
    /* 006135cb: push dword ptr [esi + 0xd4] */ { u32 v = R32((u32)(r_esi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006135d1: push dword ptr [esi + 0xd0] */ { u32 v = R32((u32)(r_esi+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006135d7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6135dau); call_ind(t); }
    /* 006135da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006135dc: je 0x613641 */ if (fZ) goto L_00613641;
L_006135de:; BB(0x006135de);
    /* 006135de: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6135e3u); f_0082d7b0();
    /* 006135e3: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006135e6: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6135ebu); f_0082d838();
    /* 006135eb: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006135ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006135f0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6135f5u); f_0082d8bc();
    /* 006135f5: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006135f8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6135fdu); f_00829cc8();
    /* 006135fd: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00613600: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x613605u); f_00831758();
    /* 00613605: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0061360b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061360e: je 0x61363c */ if (fZ) goto L_0061363c;
L_00613610:; BB(0x00613610);
    /* 00613610: mov ecx, dword ptr [esi + 0xc8] */ r_ecx = R32((u32)(r_esi+0xc8u));
    /* 00613616: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61361bu); f_00829cc8();
    /* 0061361b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x613620u); f_0082dbac();
    /* 00613620: push dword ptr [esi + 0xb8] */ { u32 v = R32((u32)(r_esi+0xb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613626: mov ecx, dword ptr [esi + 0xc4] */ r_ecx = R32((u32)(r_esi+0xc4u));
    /* 0061362c: mov edx, dword ptr [esi + 0xcc] */ r_edx = R32((u32)(r_esi+0xccu));
    /* 00613632: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x613637u); f_0083bd00();
    /* 00613637: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61363cu); f_0082dab0();
L_0061363c:; BB(0x0061363c);
    /* 0061363c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x613641u); f_0082da80();
L_00613641:; BB(0x00613641);
    /* 00613641: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613642: ret  */ FN_RET(0x006135c4); r_esp += 4; return;
}

void f_00613644(void) /* sub_613644 */
{
    FN_ENTER(0x00613644);
    /* 00613644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613645: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00613647: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x61364cu); f_004f7c84();
    /* 0061364c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061364f: je 0x613690 */ if (fZ) goto L_00613690;
L_00613651:; BB(0x00613651);
    /* 00613651: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 00613657: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061365a: je 0x613690 */ if (fZ) goto L_00613690;
L_0061365c:; BB(0x0061365c);
    /* 0061365c: push dword ptr [ebp + 0xb4] */ { u32 v = R32((u32)(r_ebp+0xb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613662: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613668: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x61366du); f_006bc260();
    /* 0061366d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613670: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613672: je 0x613689 */ if (fZ) goto L_00613689;
L_00613674:; BB(0x00613674);
    /* 00613674: mov eax, 1 */ r_eax = 0x1u;
    /* 00613679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061367a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061367c: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 00613682: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00613684: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x613689u); f_007b52ec();
L_00613689:; BB(0x00613689);
    /* 00613689: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0061368b: call 0x613694 */ r_esp -= 4; W32(r_esp, 0x613690u); f_00613694();
L_00613690:; BB(0x00613690);
    /* 00613690: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613691: ret  */ FN_RET(0x00613644); r_esp += 4; return;
}

void f_00613694(void) /* sub_613694 */
{
    FN_ENTER(0x00613694);
    /* 00613694: fld dword ptr [ecx + 0xb8] */ FPUSH(R_F32((u32)(r_ecx+0xb8u)));
    /* 0061369a: fadd dword ptr [ecx + 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc0u));
    /* 006136a0: fld dword ptr [ecx + 0xbc] */ FPUSH(R_F32((u32)(r_ecx+0xbcu)));
    /* 006136a6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006136a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006136aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006136ab: jae 0x6136b6 */ if (!fC) goto L_006136b6;
L_006136ad:; BB(0x006136ad);
    /* 006136ad: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 006136af: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 006136b5: ret  */ FN_RET(0x00613694); r_esp += 4; return;
L_006136b6:; BB(0x006136b6);
    /* 006136b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006136b8: fstp dword ptr [ecx + 0xb8] */ W_F32((u32)(r_ecx+0xb8u), ST(0)); FPOP();
    /* 006136be: ret  */ FN_RET(0x00613694); r_esp += 4; return;
}

void f_006136c0(void) /* sub_6136C0 */
{
    FN_ENTER(0x006136c0);
    /* 006136c0: mov ecx, dword ptr [0xa8ea70] */ r_ecx = R32((u32)(0xa8ea70u));
    /* 006136c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006136c8: je 0x6136dd */ if (fZ) goto L_006136dd;
L_006136ca:; BB(0x006136ca);
    /* 006136ca: je 0x6136d3 */ if (fZ) goto L_006136d3;
L_006136cc:; BB(0x006136cc);
    /* 006136cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006136ce: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6136d3u); f_004066a8();
L_006136d3:; BB(0x006136d3);
    /* 006136d3: mov dword ptr [0xa8ea70], 0 */ W32((u32)(0xa8ea70u), 0x0u);
L_006136dd:; BB(0x006136dd);
    /* 006136dd: ret  */ FN_RET(0x006136c0); r_esp += 4; return;
}

void f_006136e0(void)
{
    FN_ENTER(0x006136e0);
    /* 006136e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006136e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006136e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006136e5: push 0x8e1058 */ { u32 v = 0x8e1058u; r_esp -= 4; W32(r_esp, v); }
    /* 006136ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006136f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006136f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006136f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006136fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006136fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613701: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613704: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00613707: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061370c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00613713: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x613718u); f_005caba4();
    /* 00613718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613719: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061371c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061371e: je 0x613751 */ if (fZ) goto L_00613751;
L_00613720:; BB(0x00613720);
    /* 00613720: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00613727: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061372e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613731: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613734: call 0x613758 */ r_esp -= 4; W32(r_esp, 0x613739u); f_00613758();
    /* 00613739: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061373c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00613743:; BB(0x00613743);
    /* 00613743: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613746: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061374d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061374f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613750: ret  */ FN_RET(0x006136e0); r_esp += 4; return;
L_00613751:; BB(0x00613751);
    /* 00613751: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613753: jmp 0x613743 */ goto L_00613743;
}

void f_00613758(void) /* sub_613758 */
{
    FN_ENTER(0x00613758);
    /* 00613758: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613759: mov ebp, esp */ r_ebp = r_esp;
    /* 0061375b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061375d: push 0x8e1074 */ { u32 v = 0x8e1074u; r_esp -= 4; W32(r_esp, v); }
    /* 00613762: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613769: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613770: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613773: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613776: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00613779: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061377c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061377f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00613782: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613788: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061378b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061378e: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x613793u); f_007b4b48();
    /* 00613793: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061379a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061379d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006137a0: mov dword ptr [ecx], 0xb25118 */ W32((u32)(r_ecx), 0xb25118u);
    /* 006137a6: mov eax, dword ptr [0x9c491c] */ r_eax = R32((u32)(0x9c491cu));
    /* 006137ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006137ac: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006137af: call dword ptr [0xb2512c] */ { u32 t = R32((u32)(0xb2512cu)); r_esp -= 4; W32(r_esp, 0x6137b5u); call_ind(t); }
    /* 006137b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006137b8: mov ecx, dword ptr [0xa8ea70] */ r_ecx = R32((u32)(0xa8ea70u));
    /* 006137be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006137c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006137c1: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 006137c7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6137ccu); f_005b8610();
    /* 006137cc: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006137cf: mov ecx, dword ptr [0xa8ea70] */ r_ecx = R32((u32)(0xa8ea70u));
    /* 006137d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006137d7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006137da: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6137dfu); f_005b8624();
    /* 006137df: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006137e2: mov ecx, dword ptr [0xa8ea70] */ r_ecx = R32((u32)(0xa8ea70u));
    /* 006137e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006137ea: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006137ed: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6137f2u); f_005b8610();
    /* 006137f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006137f5: mov ecx, dword ptr [0xa8ea70] */ r_ecx = R32((u32)(0xa8ea70u));
    /* 006137fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006137fd: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00613803: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x613808u); f_005b8624();
    /* 00613808: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061380b: mov ecx, dword ptr [0xa8ea70] */ r_ecx = R32((u32)(0xa8ea70u));
    /* 00613811: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613813: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 00613819: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x61381eu); f_005b8638();
    /* 0061381e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613821: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
    /* 0061382b: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 00613831: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00613834: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00613836: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00613839: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061383c: fadd dword ptr [edx*4 + 0x92ffa0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92ffa0u));
    /* 00613843: fadd dword ptr [0x92ffc0] */ ST(0) = ST(0) + R_F32((u32)(0x92ffc0u));
    /* 00613849: mov dword ptr [ecx + 0xc0], 0x3f800000 */ W32((u32)(r_ecx+0xc0u), 0x3f800000u);
    /* 00613853: fstp dword ptr [ecx + 0xbc] */ W_F32((u32)(r_ecx+0xbcu), ST(0)); FPOP();
    /* 00613859: push 0x9c48a0 */ { u32 v = 0x9c48a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061385e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x613863u); f_007b9a88();
    /* 00613863: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00613866: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61386bu); f_007b999c();
    /* 0061386b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061386c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061386f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x613874u); f_007b4f54();
    /* 00613874: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00613877: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0061387a: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00613880: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613882: or edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00613888: mov dword ptr [ebx + 0xd0], 0x43c80000 */ W32((u32)(r_ebx+0xd0u), 0x43c80000u);
    /* 00613892: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00613895: mov dword ptr [ebx + 0xd4], 0x42200000 */ W32((u32)(r_ebx+0xd4u), 0x42200000u);
    /* 0061389f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006138a1: jg 0x6138a5 */ if ((!fZ&&fS==fO)) goto L_006138a5;
L_006138a3:; BB(0x006138a3);
    /* 006138a3: mov eax, ecx */ r_eax = r_ecx;
L_006138a5:; BB(0x006138a5);
    /* 006138a5: mov dword ptr [ebx + 0xb4], eax */ W32((u32)(r_ebx+0xb4u), r_eax);
    /* 006138ab: mov eax, ebx */ r_eax = r_ebx;
    /* 006138ad: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006138b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006138b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006138ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006138bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006138bd: ret 4 */ FN_RET(0x00613758); r_esp += 8; return;
}

void f_006138c0(void) /* sub_6138C0 */
{
    FN_ENTER(0x006138c0);
    /* 006138c0: mov dword ptr [0xa8ea64], 0x3f800000 */ W32((u32)(0xa8ea64u), 0x3f800000u);
    /* 006138ca: mov dword ptr [0xa8ea68], 0x41000000 */ W32((u32)(0xa8ea68u), 0x41000000u);
    /* 006138d4: mov dword ptr [0xa8ea6c], 0x3fc00000 */ W32((u32)(0xa8ea6cu), 0x3fc00000u);
    /* 006138de: ret  */ FN_RET(0x006138c0); r_esp += 4; return;
}

void f_006138e0(void) /* sub_6138E0 */
{
    FN_ENTER(0x006138e0);
    /* 006138e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006138e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006138e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006138e5: push 0x8e109c */ { u32 v = 0x8e109cu; r_esp -= 4; W32(r_esp, v); }
    /* 006138ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006138f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006138f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006138f8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006138fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006138fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613901: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613904: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00613907: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061390c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00613913: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x613918u); f_008581c5();
    /* 00613918: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613919: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061391c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061391e: je 0x61395f */ if (fZ) goto L_0061395f;
L_00613920:; BB(0x00613920);
    /* 00613920: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00613927: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061392e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613931: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00613933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613934: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613935: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613936: push 0x9c490c */ { u32 v = 0x9c490cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061393b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061393d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x613942u); f_005b7a84();
    /* 00613942: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613945: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061394c:; BB(0x0061394c);
    /* 0061394c: mov dword ptr [0xa8ea70], eax */ W32((u32)(0xa8ea70u), r_eax);
    /* 00613951: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613954: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061395b: mov esp, ebp */ r_esp = r_ebp;
    /* 0061395d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061395e: ret  */ FN_RET(0x006138e0); r_esp += 4; return;
L_0061395f:; BB(0x0061395f);
    /* 0061395f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613961: jmp 0x61394c */ goto L_0061394c;
}

void f_00613964(void) /* sub_613964 */
{
    FN_ENTER(0x00613964);
    /* 00613964: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613965: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00613967: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613969: call 0x613a28 */ r_esp -= 4; W32(r_esp, 0x61396eu); f_00613a28();
    /* 0061396e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00613972: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613974: jne 0x61397a */ if (!fZ) goto L_0061397a;
L_00613976:; BB(0x00613976);
    /* 00613976: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613977: ret 4 */ FN_RET(0x00613964); r_esp += 8; return;
L_0061397a:; BB(0x0061397a);
    /* 0061397a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061397b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x613980u); f_005c2f74();
    /* 00613980: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613981: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613982: ret 4 */ FN_RET(0x00613964); r_esp += 8; return;
}

void f_00613988(void) /* sub_613988 */
{
    FN_ENTER(0x00613988);
    /* 00613988: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613989: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061398b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061398d: call 0x6139ac */ r_esp -= 4; W32(r_esp, 0x613992u); f_006139ac();
    /* 00613992: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00613996: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613998: jne 0x61399e */ if (!fZ) goto L_0061399e;
L_0061399a:; BB(0x0061399a);
    /* 0061399a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061399b: ret 4 */ FN_RET(0x00613988); r_esp += 8; return;
L_0061399e:; BB(0x0061399e);
    /* 0061399e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061399f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6139a4u); f_005c2f74();
    /* 006139a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006139a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006139a6: ret 4 */ FN_RET(0x00613988); r_esp += 8; return;
}

void f_006139ac(void) /* sub_6139AC */
{
    FN_ENTER(0x006139ac);
    /* 006139ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006139ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006139af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006139b1: push 0x8e10b8 */ { u32 v = 0x8e10b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006139b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006139bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006139bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006139c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006139c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006139ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006139cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006139d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006139d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006139d6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006139dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006139e0: mov eax, dword ptr [ecx + 0xbc] */ r_eax = R32((u32)(r_ecx+0xbcu));
    /* 006139e6: mov dword ptr [ecx], 0xb2530c */ W32((u32)(r_ecx), 0xb2530cu);
    /* 006139ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006139ee: je 0x6139fa */ if (fZ) goto L_006139fa;
L_006139f0:; BB(0x006139f0);
    /* 006139f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006139f1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6139f6u); f_00857e98();
    /* 006139f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006139f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006139fa:; BB(0x006139fa);
    /* 006139fa: mov eax, dword ptr [ecx + 0xc0] */ r_eax = R32((u32)(r_ecx+0xc0u));
    /* 00613a00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613a02: je 0x613a0e */ if (fZ) goto L_00613a0e;
L_00613a04:; BB(0x00613a04);
    /* 00613a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613a05: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613a0au); f_00857e98();
    /* 00613a0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613a0b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613a0e:; BB(0x00613a0e);
    /* 00613a0e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613a15: call 0x613a28 */ r_esp -= 4; W32(r_esp, 0x613a1au); f_00613a28();
    /* 00613a1a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613a1d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613a24: mov esp, ebp */ r_esp = r_ebp;
    /* 00613a26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613a27: ret  */ FN_RET(0x006139ac); r_esp += 4; return;
}

void f_00613a28(void) /* sub_613A28 */
{
    FN_ENTER(0x00613a28);
    /* 00613a28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613a29: mov ebp, esp */ r_ebp = r_esp;
    /* 00613a2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613a2d: push 0x8e10d4 */ { u32 v = 0x8e10d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00613a32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613a38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613a39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613a40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613a43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613a46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613a49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613a4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00613a4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613a52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613a55: mov dword ptr [ecx], 0xb252e0 */ W32((u32)(r_ecx), 0xb252e0u);
    /* 00613a5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613a62: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x613a67u); f_007ba1f0();
    /* 00613a67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613a6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613a71: mov esp, ebp */ r_esp = r_ebp;
    /* 00613a73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613a74: ret  */ FN_RET(0x00613a28); r_esp += 4; return;
}

void f_00613a78(void) /* sub_613A78 */
{
    FN_ENTER(0x00613a78);
    /* 00613a78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613a79: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00613a7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613a7d: call 0x613a9c */ r_esp -= 4; W32(r_esp, 0x613a82u); f_00613a9c();
    /* 00613a82: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00613a86: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613a88: jne 0x613a8e */ if (!fZ) goto L_00613a8e;
L_00613a8a:; BB(0x00613a8a);
    /* 00613a8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613a8b: ret 4 */ FN_RET(0x00613a78); r_esp += 8; return;
L_00613a8e:; BB(0x00613a8e);
    /* 00613a8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613a8f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x613a94u); f_005c2f74();
    /* 00613a94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613a95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613a96: ret 4 */ FN_RET(0x00613a78); r_esp += 8; return;
}

void f_00613a9c(void) /* sub_613A9C */
{
    FN_ENTER(0x00613a9c);
    /* 00613a9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613a9d: mov ebp, esp */ r_ebp = r_esp;
    /* 00613a9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613aa1: push 0x8e10f0 */ { u32 v = 0x8e10f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613aa6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613aad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613ab4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613ab7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613aba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613abd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613ac0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00613ac3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613ac6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613ac9: mov dword ptr [ecx], 0xb25338 */ W32((u32)(r_ecx), 0xb25338u);
    /* 00613acf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613ad6: call 0x613a28 */ r_esp -= 4; W32(r_esp, 0x613adbu); f_00613a28();
    /* 00613adb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613ade: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613ae5: mov esp, ebp */ r_esp = r_ebp;
    /* 00613ae7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613ae8: ret  */ FN_RET(0x00613a9c); r_esp += 4; return;
}

void f_00613aec(void) /* sub_613AEC */
{
    FN_ENTER(0x00613aec);
    /* 00613aec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613aed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00613aef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613af1: call 0x613b10 */ r_esp -= 4; W32(r_esp, 0x613af6u); f_00613b10();
    /* 00613af6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00613afa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613afc: jne 0x613b02 */ if (!fZ) goto L_00613b02;
L_00613afe:; BB(0x00613afe);
    /* 00613afe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613aff: ret 4 */ FN_RET(0x00613aec); r_esp += 8; return;
L_00613b02:; BB(0x00613b02);
    /* 00613b02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613b03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x613b08u); f_005c2f74();
    /* 00613b08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613b09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613b0a: ret 4 */ FN_RET(0x00613aec); r_esp += 8; return;
}

void f_00613b10(void) /* sub_613B10 */
{
    FN_ENTER(0x00613b10);
    /* 00613b10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613b11: mov ebp, esp */ r_ebp = r_esp;
    /* 00613b13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613b15: push 0x8e110c */ { u32 v = 0x8e110cu; r_esp -= 4; W32(r_esp, v); }
    /* 00613b1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613b21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613b28: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613b2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613b2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00613b31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00613b34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00613b37: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00613b3a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00613b41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00613b44: mov eax, dword ptr [ecx + 0xa0] */ r_eax = R32((u32)(r_ecx+0xa0u));
    /* 00613b4a: mov dword ptr [ecx], 0xb25364 */ W32((u32)(r_ecx), 0xb25364u);
    /* 00613b50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613b52: je 0x613b5e */ if (fZ) goto L_00613b5e;
L_00613b54:; BB(0x00613b54);
    /* 00613b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613b55: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613b5au); f_00857e98();
    /* 00613b5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613b5b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613b5e:; BB(0x00613b5e);
    /* 00613b5e: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00613b64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613b66: je 0x613b72 */ if (fZ) goto L_00613b72;
L_00613b68:; BB(0x00613b68);
    /* 00613b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613b69: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613b6eu); f_00857e98();
    /* 00613b6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613b6f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613b72:; BB(0x00613b72);
    /* 00613b72: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 00613b78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613b7a: je 0x613b86 */ if (fZ) goto L_00613b86;
L_00613b7c:; BB(0x00613b7c);
    /* 00613b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613b7d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613b82u); f_00857e98();
    /* 00613b82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613b83: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613b86:; BB(0x00613b86);
    /* 00613b86: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00613b8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613b8e: je 0x613b9a */ if (fZ) goto L_00613b9a;
L_00613b90:; BB(0x00613b90);
    /* 00613b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613b91: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613b96u); f_00857e98();
    /* 00613b96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613b97: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613b9a:; BB(0x00613b9a);
    /* 00613b9a: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 00613ba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613ba2: je 0x613bae */ if (fZ) goto L_00613bae;
L_00613ba4:; BB(0x00613ba4);
    /* 00613ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613ba5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613baau); f_00857e98();
    /* 00613baa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613bab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613bae:; BB(0x00613bae);
    /* 00613bae: mov eax, dword ptr [ecx + 0xb4] */ r_eax = R32((u32)(r_ecx+0xb4u));
    /* 00613bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613bb6: je 0x613bc2 */ if (fZ) goto L_00613bc2;
L_00613bb8:; BB(0x00613bb8);
    /* 00613bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613bb9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x613bbeu); f_00857e98();
    /* 00613bbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00613bbf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00613bc2:; BB(0x00613bc2);
    /* 00613bc2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00613bc9: call 0x613a28 */ r_esp -= 4; W32(r_esp, 0x613bceu); f_00613a28();
    /* 00613bce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00613bd1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00613bd8: mov esp, ebp */ r_esp = r_ebp;
    /* 00613bda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613bdb: ret  */ FN_RET(0x00613b10); r_esp += 4; return;
}

void f_00613bdc(void) /* sub_613BDC */
{
    FN_ENTER(0x00613bdc);
    /* 00613bdc: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00613be2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00613be4: je 0x613bf9 */ if (fZ) goto L_00613bf9;
L_00613be6:; BB(0x00613be6);
    /* 00613be6: je 0x613bef */ if (fZ) goto L_00613bef;
L_00613be8:; BB(0x00613be8);
    /* 00613be8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00613bea: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x613befu); f_004066a8();
L_00613bef:; BB(0x00613bef);
    /* 00613bef: mov dword ptr [0xa8ea78], 0 */ W32((u32)(0xa8ea78u), 0x0u);
L_00613bf9:; BB(0x00613bf9);
    /* 00613bf9: ret  */ FN_RET(0x00613bdc); r_esp += 4; return;
}

void f_00613bfc(void) /* sub_613BFC */
{
    FN_ENTER(0x00613bfc);
    /* 00613bfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613bfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00613bff: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613c05: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613c07: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x613c0cu); f_007ba278();
    /* 00613c0c: mov dword ptr [ebx], 0xb252e0 */ W32((u32)(r_ebx), 0xb252e0u);
    /* 00613c12: mov edx, dword ptr [0x9c4954] */ r_edx = R32((u32)(0x9c4954u));
    /* 00613c18: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00613c1b: mov eax, ebx */ r_eax = r_ebx;
    /* 00613c1d: mov dword ptr [ebx + 0x90], 0x44fa0000 */ W32((u32)(r_ebx+0x90u), 0x44fa0000u);
    /* 00613c27: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 00613c31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613c32: ret  */ FN_RET(0x00613bfc); r_esp += 4; return;
}

void f_00613c34(void) /* sub_613C34 */
{
    FN_ENTER(0x00613c34);
    /* 00613c34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00613c35: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613c38: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00613c3a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00613c3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613c3e: push dword ptr [ebx + 0x94] */ { u32 v = R32((u32)(r_ebx+0x94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613c44: push dword ptr [ebx + 0x90] */ { u32 v = R32((u32)(r_ebx+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613c4a: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x613c4du); call_ind(t); }
    /* 00613c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613c4f: je 0x613d01 */ if (fZ) goto L_00613d01;
L_00613c55:; BB(0x00613c55);
    /* 00613c55: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x613c5au); f_0082d7b0();
    /* 00613c5a: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00613c5d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x613c62u); f_0082d838();
    /* 00613c62: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00613c65: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x613c6au); f_00829cc8();
    /* 00613c6a: mov edx, dword ptr [ebx + 0xb8] */ r_edx = R32((u32)(r_ebx+0xb8u));
    /* 00613c70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00613c72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00613c74: jle 0x613cfc */ if ((fZ||fS!=fO)) goto L_00613cfc;
L_00613c7a:; BB(0x00613c7a);
    /* 00613c7a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00613c7e: mov esi, eax */ r_esi = r_eax;
    /* 00613c80: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00613c83: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00613c86: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613c88: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00613c8b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00613c8d: mov edi, ebx */ r_edi = r_ebx;
    /* 00613c8f: mov ebx, edx */ r_ebx = r_edx;
L_00613c91:; BB(0x00613c91);
    /* 00613c91: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x613c96u); f_0082d7b0();
    /* 00613c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613c98: push dword ptr [edi + 0xd4] */ { u32 v = R32((u32)(r_edi+0xd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613c9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613ca0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613ca2: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x613ca7u); f_00830b74();
    /* 00613ca7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00613ca9: add ecx, dword ptr [edi + 0xbc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0xbcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613caf: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x613cb4u); f_0082d838();
    /* 00613cb4: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00613cb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613cb9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x613cbeu); f_0082d8bc();
    /* 00613cbe: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 00613cc4: mov edx, dword ptr [eax + esi*4] */ r_edx = R32((u32)(r_eax+r_esi*4));
    /* 00613cc7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613cc9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x613cceu); f_0082d8bc();
    /* 00613cce: push dword ptr [edi + 0xa4] */ { u32 v = R32((u32)(r_edi+0xa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613cd4: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00613cd7: mov edx, dword ptr [edi + 0x98] */ r_edx = R32((u32)(r_edi+0x98u));
    /* 00613cdd: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x613ce2u); f_0083bd00();
    /* 00613ce2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x613ce7u); f_0082da80();
    /* 00613ce7: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00613cea: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00613ced: cmp esi, dword ptr [edi + 0xb8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0xb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613cf3: jl 0x613c91 */ if ((fS!=fO)) goto L_00613c91;
L_00613cf5:; BB(0x00613cf5);
    /* 00613cf5: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00613cf9: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00613cfc:; BB(0x00613cfc);
    /* 00613cfc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x613d01u); f_0082da80();
L_00613d01:; BB(0x00613d01);
    /* 00613d01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00613d04: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00613d05: ret  */ FN_RET(0x00613c34); r_esp += 4; return;
}

void f_00613d08(void) /* sub_613D08 */
{
    FN_ENTER(0x00613d08);
    /* 00613d08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00613d09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613d0a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613d0d: mov esi, ecx */ r_esi = r_ecx;
    /* 00613d0f: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 00613d15: fadd dword ptr [esi + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa0u));
    /* 00613d1b: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 00613d21: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00613d23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00613d25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00613d26: jae 0x613d32 */ if (!fC) goto L_00613d32;
L_00613d28:; BB(0x00613d28);
    /* 00613d28: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00613d2a: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 00613d30: jmp 0x613d3a */ goto L_00613d3a;
L_00613d32:; BB(0x00613d32);
    /* 00613d32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00613d34: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
L_00613d3a:; BB(0x00613d3a);
    /* 00613d3a: mov ecx, dword ptr [esi + 0xe0] */ r_ecx = R32((u32)(r_esi+0xe0u));
    /* 00613d40: add ecx, dword ptr [esi + 0xdc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xdcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00613d46: mov dword ptr [esi + 0xe0], ecx */ W32((u32)(r_esi+0xe0u), r_ecx);
    /* 00613d4c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x613d51u); f_0082dcbc();
    /* 00613d51: fld dword ptr [esi + 0xd0] */ FPUSH(R_F32((u32)(r_esi+0xd0u)));
    /* 00613d57: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00613d59: mov eax, dword ptr [esi + 0xb4] */ r_eax = R32((u32)(r_esi+0xb4u));
    /* 00613d5f: fstp dword ptr [esi + 0xd4] */ W_F32((u32)(r_esi+0xd4u), ST(0)); FPOP();
    /* 00613d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613d67: jne 0x613e61 */ if (!fZ) goto L_00613e61;
L_00613d6d:; BB(0x00613d6d);
    /* 00613d6d: mov dword ptr [esi + 0xb4], 1 */ W32((u32)(r_esi+0xb4u), 0x1u);
    /* 00613d77: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 00613d81: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x613d86u); f_008587a5();
    /* 00613d86: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00613d89: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00613d8c: fdiv dword ptr [0x93014c] */ ST(0) = ST(0) / R_F32((u32)(0x93014cu));
    /* 00613d92: fmul dword ptr [esi + 0xac] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xacu));
    /* 00613d98: fstp dword ptr [0xaab4f4] */ W_F32((u32)(0xaab4f4u), ST(0)); FPOP();
    /* 00613d9e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x613da3u); f_008587a5();
    /* 00613da3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00613da7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00613dab: fdiv dword ptr [0x93014c] */ ST(0) = ST(0) / R_F32((u32)(0x93014cu));
    /* 00613db1: fmul dword ptr [esi + 0xb0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xb0u));
    /* 00613db7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00613dbc: fstp dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0)); FPOP();
    /* 00613dc2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x613dc7u); f_0082d990();
    /* 00613dc7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x613dccu); f_008587a5();
    /* 00613dcc: fld dword ptr [0x930148] */ FPUSH(R_F32((u32)(0x930148u)));
    /* 00613dd2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00613dd6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00613dda: fdiv dword ptr [0x93014c] */ ST(0) = ST(0) / R_F32((u32)(0x93014cu));
    /* 00613de0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00613de2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613de4: fmul dword ptr [0x930144] */ ST(0) = ST(0) * R_F32((u32)(0x930144u));
    /* 00613dea: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00613dec: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00613df0: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00613df5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00613dfa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00613dfe: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00613e02: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00613e06: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00613e0a: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00613e0e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x613e13u); f_0082d8bc();
    /* 00613e13: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00613e18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613e1a: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00613e1f: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x613e24u); f_0082eab8();
    /* 00613e24: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00613e29: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x613e2eu); f_0082eb80();
    /* 00613e2e: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00613e31: mov ebp, dword ptr [esi + 0x54] */ r_ebp = R32((u32)(r_esi+0x54u));
    /* 00613e34: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00613e37: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
    /* 00613e3d: mov dword ptr [esi + 0xc8], ebp */ W32((u32)(r_esi+0xc8u), r_ebp);
    /* 00613e43: mov dword ptr [esi + 0xcc], edx */ W32((u32)(r_esi+0xccu), r_edx);
    /* 00613e49: add esi, 0xc4 */ {  u32 a = r_esi; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00613e4f: mov ecx, esi */ r_ecx = r_esi;
    /* 00613e51: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 00613e56: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x613e5bu); f_0082ebac();
    /* 00613e5b: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00613e5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613e5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613e60: ret  */ FN_RET(0x00613d08); r_esp += 4; return;
L_00613e61:; BB(0x00613e61);
    /* 00613e61: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613e64: jne 0x613f8a */ if (!fZ) goto L_00613f8a;
L_00613e6a:; BB(0x00613e6a);
    /* 00613e6a: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 00613e70: mov ebp, dword ptr [esi + 0xc8] */ r_ebp = R32((u32)(r_esi+0xc8u));
    /* 00613e76: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 00613e7b: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 00613e81: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 00613e86: mov dword ptr [0xaab4f4], ebp */ W32((u32)(0xaab4f4u), r_ebp);
    /* 00613e8c: mov dword ptr [0xaab4f8], eax */ W32((u32)(0xaab4f8u), r_eax);
    /* 00613e91: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00613e94: mov edx, ebp */ r_edx = r_ebp;
    /* 00613e96: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x613e9bu); f_0082f9c4();
    /* 00613e9b: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00613ea1: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00613ea7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00613ea9: fmul qword ptr [0x9300d8] */ ST(0) = ST(0) * R_F64((u32)(0x9300d8u));
    /* 00613eaf: fdiv qword ptr [0x9300d0] */ ST(0) = ST(0) / R_F64((u32)(0x9300d0u));
    /* 00613eb5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00613eb9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00613ebe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00613ec3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00613ec7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00613ecb: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00613ecf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00613ed3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00613ed7: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00613edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613edd: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00613ee0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x613ee5u); f_007a8c74();
    /* 00613ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613ee8: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 00613ef2: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00613ef5: mov eax, dword ptr [esi + 0xa8] */ r_eax = R32((u32)(r_esi+0xa8u));
    /* 00613efb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00613f00: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00613f0a: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00613f0f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x613f14u); f_0082d990();
    /* 00613f14: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00613f17: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613f19: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x613f1eu); f_0082d8bc();
    /* 00613f1e: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00613f23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00613f25: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00613f2a: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x613f2fu); f_0082eab8();
    /* 00613f2f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00613f34: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x613f39u); f_0082eb80();
    /* 00613f39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00613f3b: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00613f40: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x613f45u); f_0082ebac();
    /* 00613f45: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613f46: lea eax, [esi + 0xc4] */ r_eax = (u32)(r_esi+0xc4u);
    /* 00613f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613f4d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x613f52u); f_007a9180();
    /* 00613f52: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613f55: fcomp dword ptr [esi + 0xb0] */ fx_compare(ST(0), R_F32((u32)(r_esi+0xb0u))); FPOP();
    /* 00613f5b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00613f5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00613f5e: jb 0x613f7c */ if (fC) goto L_00613f7c;
L_00613f60:; BB(0x00613f60);
    /* 00613f60: mov eax, dword ptr [esi + 0xe4] */ r_eax = R32((u32)(r_esi+0xe4u));
    /* 00613f66: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00613f69: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00613f6e: jg 0x613f7c */ if ((!fZ&&fS==fO)) goto L_00613f7c;
L_00613f70:; BB(0x00613f70);
    /* 00613f70: mov dword ptr [esi + 0xe4], edx */ W32((u32)(r_esi+0xe4u), r_edx);
    /* 00613f76: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00613f79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613f7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613f7b: ret  */ FN_RET(0x00613d08); r_esp += 4; return;
L_00613f7c:; BB(0x00613f7c);
    /* 00613f7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00613f7e: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 00613f84: mov dword ptr [esi + 0xe4], eax */ W32((u32)(r_esi+0xe4u), r_eax);
L_00613f8a:; BB(0x00613f8a);
    /* 00613f8a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00613f8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00613f8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00613f8f: ret  */ FN_RET(0x00613d08); r_esp += 4; return;
}

void f_00613f90(void)
{
    FN_ENTER(0x00613f90);
    /* 00613f90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00613f91: mov ebp, esp */ r_ebp = r_esp;
    /* 00613f93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00613f95: push 0x8e114c */ { u32 v = 0x8e114cu; r_esp -= 4; W32(r_esp, v); }
    /* 00613f9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00613fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00613fa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00613fa8: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00613fae: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00613fb1: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00613fb4: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00613fb7: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00613fba: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00613fbf: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00613fc9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x613fceu); f_005caba4();
    /* 00613fce: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00613fd1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00613fd4: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00613fda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00613fdc: je 0x614310 */ if (fZ) goto L_00614310;
L_00613fe2:; BB(0x00613fe2);
    /* 00613fe2: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 00613fec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00613ff3: mov ecx, eax */ r_ecx = r_eax;
    /* 00613ff5: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00613ffb: call 0x613bfc */ r_esp -= 4; W32(r_esp, 0x614000u); f_00613bfc();
    /* 00614000: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00614007: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061400a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061400d: mov dword ptr [ecx], 0xb2530c */ W32((u32)(r_ecx), 0xb2530cu);
    /* 00614013: mov eax, dword ptr [0x9c4958] */ r_eax = R32((u32)(0x9c4958u));
    /* 00614018: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061401b: call dword ptr [0xb25320] */ { u32 t = R32((u32)(0xb25320u)); r_esp -= 4; W32(r_esp, 0x614021u); call_ind(t); }
    /* 00614021: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614027: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00614029: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61402eu); f_005b8610();
    /* 0061402e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00614031: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614037: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00614039: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0061403c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061403f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00614042: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 00614048: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61404du); f_005b8624();
    /* 0061404d: mov edx, ebx */ r_edx = r_ebx;
    /* 0061404f: mov ecx, dword ptr [0xa8ea78] */ r_ecx = R32((u32)(0xa8ea78u));
    /* 00614055: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00614057: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0061405a: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x61405fu); f_005b8638();
    /* 0061405f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00614061: fld dword ptr [0x930170] */ FPUSH(R_F32((u32)(0x930170u)));
    /* 00614067: fadd dword ptr [ecx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x68u));
    /* 0061406a: fld dword ptr [0x93016c] */ FPUSH(R_F32((u32)(0x93016cu)));
    /* 00614070: fadd dword ptr [ecx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x6cu));
    /* 00614073: fld dword ptr [0x930168] */ FPUSH(R_F32((u32)(0x930168u)));
    /* 00614079: fadd dword ptr [ecx + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x70u));
    /* 0061407c: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
    /* 00614082: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00614085: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00614088: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0061408a: fstp dword ptr [ecx + 0xa8] */ W_F32((u32)(r_ecx+0xa8u), ST(0)); FPOP();
    /* 00614090: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00614092: fstp dword ptr [ecx + 0xac] */ W_F32((u32)(r_ecx+0xacu), ST(0)); FPOP();
    /* 00614098: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 0061409e: mov dword ptr [ecx + 0xa0], 0x3f800000 */ W32((u32)(r_ecx+0xa0u), 0x3f800000u);
    /* 006140a8: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006140ab: fadd dword ptr [edx*4 + 0x9300c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9300c8u));
    /* 006140b2: fadd dword ptr [0x930140] */ ST(0) = ST(0) + R_F32((u32)(0x930140u));
    /* 006140b8: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 006140be: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
    /* 006140c8: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 006140d2: mov ecx, dword ptr [ecx + 0x84] */ r_ecx = R32((u32)(r_ecx+0x84u));
    /* 006140d8: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006140db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006140dd: jl 0x6142fa */ if ((fS!=fO)) goto L_006142fa;
L_006140e3:; BB(0x006140e3);
    /* 006140e3: mov edx, ebx */ r_edx = r_ebx;
    /* 006140e5: mov eax, 6 */ r_eax = 0x6u;
    /* 006140ea: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006140ed: jl 0x6140f1 */ if ((fS!=fO)) goto L_006140f1;
L_006140ef:; BB(0x006140ef);
    /* 006140ef: mov ecx, eax */ r_ecx = r_eax;
L_006140f1:; BB(0x006140f1);
    /* 006140f1: mov dword ptr [edx + 0xb8], ecx */ W32((u32)(r_edx+0xb8u), r_ecx);
    /* 006140f7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006140f9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006140fb: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 006140fe: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614101: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x614106u); f_008581c5();
    /* 00614106: mov edx, ebx */ r_edx = r_ebx;
    /* 00614108: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0061410e: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00614114: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614116: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00614118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00614119: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61411eu); f_008581c5();
    /* 0061411e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00614121: mov edx, ebx */ r_edx = r_ebx;
    /* 00614123: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00614129: mov eax, 0x930080 */ r_eax = 0x930080u;
    /* 0061412e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00614130: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00614133: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00614136: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00614139: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0061413c: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00614142: mov dword ptr [ebp - 0x84], ebx */ W32((u32)(r_ebp+0xffffff7cu), r_ebx);
    /* 00614148: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 0061414b: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 0061414e: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 00614151: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00614154: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 00614157: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0061415a: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0061415d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00614160: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00614163: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00614166: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00614169: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0061416c: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0061416f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00614172: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00614175: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00614178: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0061417b: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0061417e: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00614181: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00614184: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00614187: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0061418a: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0061418d: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00614190: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00614193: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00614196: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 00614199: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0061419c: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0061419f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006141a2: mov edx, dword ptr [eax + 0xb8] */ r_edx = R32((u32)(r_eax+0xb8u));
    /* 006141a8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006141aa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006141ac: jle 0x6141f6 */ if ((fZ||fS!=fO)) goto L_006141f6;
L_006141ae:; BB(0x006141ae);
    /* 006141ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006141b1: mov eax, dword ptr [edx + 0xbc] */ r_eax = R32((u32)(r_edx+0xbcu));
    /* 006141b7: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 006141ba: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006141bc: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 006141bf: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006141c1: mov edi, dword ptr [ebp + ecx - 0x88] */ r_edi = R32((u32)(r_ebp+r_ecx+0xffffff78u));
    /* 006141c8: mov dword ptr [eax + ecx], edi */ W32((u32)(r_eax+r_ecx), r_edi);
    /* 006141cb: mov esi, dword ptr [ebp + ecx - 0x84] */ r_esi = R32((u32)(r_ebp+r_ecx+0xffffff7cu));
    /* 006141d2: mov dword ptr [eax + ecx + 4], esi */ W32((u32)(r_eax+r_ecx+0x4u), r_esi);
    /* 006141d6: mov esi, dword ptr [ebp + ecx - 0x80] */ r_esi = R32((u32)(r_ebp+r_ecx+0xffffff80u));
    /* 006141da: mov dword ptr [eax + ecx + 8], esi */ W32((u32)(r_eax+r_ecx+0x8u), r_esi);
    /* 006141de: mov eax, dword ptr [edx + 0xc0] */ r_eax = R32((u32)(r_edx+0xc0u));
    /* 006141e4: mov dword ptr [eax + ebx*4], 0x8000 */ W32((u32)(r_eax+r_ebx*4), 0x8000u);
    /* 006141eb: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006141ee: cmp ebx, dword ptr [edx + 0xb8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0xb8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006141f4: jl 0x6141ae */ if ((fS!=fO)) goto L_006141ae;
L_006141f6:; BB(0x006141f6);
    /* 006141f6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006141f9: fild dword ptr [edx + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x88u)));
    /* 006141ff: fmul dword ptr [0x930134] */ ST(0) = ST(0) * R_F32((u32)(0x930134u));
    /* 00614205: fadd dword ptr [0x930164] */ ST(0) = ST(0) + R_F32((u32)(0x930164u));
    /* 0061420b: fld dword ptr [0x930130] */ FPUSH(R_F32((u32)(0x930130u)));
    /* 00614211: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00614213: fst dword ptr [edx + 0xd8] */ W_F32((u32)(r_edx+0xd8u), ST(0));
    /* 00614219: fdivr dword ptr [0x93012c] */ ST(0) = R_F32((u32)(0x93012cu)) / ST(0);
    /* 0061421f: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00614221: fmul dword ptr [0x930128] */ ST(0) = ST(0) * R_F32((u32)(0x930128u));
    /* 00614227: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00614229: mov dword ptr [edx + 0xcc], 0 */ W32((u32)(r_edx+0xccu), 0x0u);
    /* 00614233: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614236: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0061423a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061423f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614242: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614245: fistp dword ptr [edx + 0xdc] */ W32((u32)(r_edx+0xdcu), (u32)fx_int32(ST(0))); FPOP();
    /* 0061424b: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0061424e: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00614258: mov dword ptr [edx + 0xc4], 0 */ W32((u32)(r_edx+0xc4u), 0x0u);
    /* 00614262: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x614267u); f_008587a5();
    /* 00614267: fld dword ptr [0x930130] */ FPUSH(R_F32((u32)(0x930130u)));
    /* 0061426d: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00614270: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00614273: fdiv dword ptr [0x930124] */ ST(0) = ST(0) / R_F32((u32)(0x930124u));
    /* 00614279: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0061427b: fmul dword ptr [0x930128] */ ST(0) = ST(0) * R_F32((u32)(0x930128u));
    /* 00614281: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00614283: fnstcw word ptr [ebp - 0x40] */ W16((u32)(r_ebp+0xffffffc0u), fcw);
    /* 00614286: movzx eax, word ptr [ebp - 0x40] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc0u));
    /* 0061428a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061428f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00614292: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 00614295: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00614298: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 0061429b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0061429e: fild dword ptr [eax + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x8cu)));
    /* 006142a4: fmul dword ptr [0x930134] */ ST(0) = ST(0) * R_F32((u32)(0x930134u));
    /* 006142aa: fadd dword ptr [0x930160] */ ST(0) = ST(0) + R_F32((u32)(0x930160u));
    /* 006142b0: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006142b3: fstp dword ptr [eax + 0xd0] */ W_F32((u32)(r_eax+0xd0u), ST(0)); FPOP();
    /* 006142b9: mov dword ptr [eax + 0xe0], ecx */ W32((u32)(r_eax+0xe0u), r_ecx);
    /* 006142bf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6142c4u); f_0082dcbc();
    /* 006142c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006142c7: fld dword ptr [eax + 0xd0] */ FPUSH(R_F32((u32)(r_eax+0xd0u)));
    /* 006142cd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006142cf: fstp dword ptr [eax + 0xd4] */ W_F32((u32)(r_eax+0xd4u), ST(0)); FPOP();
    /* 006142d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006142d7: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 006142dd: mov dword ptr [eax + 0xe4], edx */ W32((u32)(r_eax+0xe4u), r_edx);
L_006142e3:; BB(0x006142e3);
    /* 006142e3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006142e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006142e9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006142ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006142ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006142f6: mov esp, ebp */ r_esp = r_ebp;
    /* 006142f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006142f9: ret  */ FN_RET(0x00613f90); r_esp += 4; return;
L_006142fa:; BB(0x006142fa);
    /* 006142fa: mov eax, ebx */ r_eax = r_ebx;
    /* 006142fc: mov dword ptr [eax + 0xb8], 1 */ W32((u32)(r_eax+0xb8u), 0x1u);
    /* 00614306: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0061430b: jmp 0x6140f7 */ f_006140f7(); return;
L_00614310:; BB(0x00614310);
    /* 00614310: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00614312: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00614315: jmp 0x6142e3 */ goto L_006142e3;
}

