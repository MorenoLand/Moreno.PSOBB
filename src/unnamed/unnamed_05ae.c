#include "protos.h"

void f_005ae3cc(void) /* sub_5AE3CC */
{
    FN_ENTER(0x005ae3cc);
    /* 005ae3cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ae3cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ae3ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ae3cf: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ae3d2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ae3d4: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 005ae3db: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae3de: jne 0x5ae408 */ if (!fZ) goto L_005ae408;
L_005ae3e0:; BB(0x005ae3e0);
    /* 005ae3e0: fld dword ptr [0x92a734] */ FPUSH(R_F32((u32)(0x92a734u)));
    /* 005ae3e6: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 005ae3ec: mov ecx, dword ptr [eax*4 + 0xa748f4] */ r_ecx = R32((u32)(r_eax*4+0xa748f4u));
    /* 005ae3f3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005ae3f7: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae3fd: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5ae402u); f_00579de0();
    /* 005ae402: mov edi, eax */ r_edi = r_eax;
    /* 005ae404: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ae406: jmp 0x5ae43a */ goto L_005ae43a;
L_005ae408:; BB(0x005ae408);
    /* 005ae408: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae40b: jne 0x5ae4f4 */ if (!fZ) goto L_005ae4f4;
L_005ae411:; BB(0x005ae411);
    /* 005ae411: fld dword ptr [0x92a738] */ FPUSH(R_F32((u32)(0x92a738u)));
    /* 005ae417: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 005ae41d: mov ecx, dword ptr [eax*4 + 0xa74900] */ r_ecx = R32((u32)(r_eax*4+0xa74900u));
    /* 005ae424: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005ae428: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae42e: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x5ae433u); f_00579de0();
    /* 005ae433: mov edi, eax */ r_edi = r_eax;
    /* 005ae435: mov edx, 1 */ r_edx = 0x1u;
L_005ae43a:; BB(0x005ae43a);
    /* 005ae43a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005ae43e: fcomp dword ptr [ebp + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc0u))); FPOP();
    /* 005ae444: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ae446: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ae447: jbe 0x5ae4f4 */ if ((fC||fZ)) goto L_005ae4f4;
L_005ae44d:; BB(0x005ae44d);
    /* 005ae44d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae44f: je 0x5ae4f4 */ if (fZ) goto L_005ae4f4;
L_005ae455:; BB(0x005ae455);
    /* 005ae455: mov eax, dword ptr [ebp + edx*4 + 0x3cc] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x3ccu));
    /* 005ae45c: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 005ae45f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae461: je 0x5ae4f4 */ if (fZ) goto L_005ae4f4;
L_005ae467:; BB(0x005ae467);
    /* 005ae467: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5ae46cu); f_0082d7b0();
    /* 005ae46c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae46e: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x5ae473u); f_00830cd8();
    /* 005ae473: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 005ae476: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5ae47bu); f_0082d838();
    /* 005ae47b: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005ae47e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae480: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ae485u); f_0082d8bc();
    /* 005ae485: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005ae489: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae48b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae48c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae48e: mov edx, edi */ r_edx = r_edi;
    /* 005ae490: call 0x82f940 */ r_esp -= 4; W32(r_esp, 0x5ae495u); f_0082f940();
    /* 005ae495: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5ae49au); f_0082da80();
    /* 005ae49a: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 005ae4a0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae4a3: jne 0x5ae4de */ if (!fZ) goto L_005ae4de;
L_005ae4a5:; BB(0x005ae4a5);
    /* 005ae4a5: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
    /* 005ae4a9: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005ae4ad: mov ecx, edi */ r_ecx = r_edi;
    /* 005ae4af: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5ae4b4u); f_0082f9c4();
    /* 005ae4b4: mov ecx, edi */ r_ecx = r_edi;
    /* 005ae4b6: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5ae4bbu); f_0083173c();
    /* 005ae4bb: fld dword ptr [0x92a730] */ FPUSH(R_F32((u32)(0x92a730u)));
    /* 005ae4c1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ae4c3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005ae4c7: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005ae4ca: call 0x78ea90 */ r_esp -= 4; W32(r_esp, 0x5ae4cfu); f_0078ea90();
    /* 005ae4cf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005ae4d1: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005ae4d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005ae4d7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5ae4dcu); f_0082ebac();
    /* 005ae4dc: jmp 0x5ae4e2 */ goto L_005ae4e2;
L_005ae4de:; BB(0x005ae4de);
    /* 005ae4de: lea edi, [esp + 0x14] */ r_edi = (u32)(r_esp+0x14u);
L_005ae4e2:; BB(0x005ae4e2);
    /* 005ae4e2: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005ae4e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ae4e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae4e8: mov ecx, dword ptr [ebp + esi*2 + 0x3cc] */ r_ecx = R32((u32)(r_ebp+r_esi*2+0x3ccu));
    /* 005ae4ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ae4f1: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x5ae4f4u); call_ind(t); }
L_005ae4f4:; BB(0x005ae4f4);
    /* 005ae4f4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae4f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ae4f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ae4f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ae4fa: ret  */ FN_RET(0x005ae3cc); r_esp += 4; return;
}

void f_005ae4fc(void) /* sub_5AE4FC */
{
    FN_ENTER(0x005ae4fc);
    /* 005ae4fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae4fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ae4ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ae501: call 0x5ae520 */ r_esp -= 4; W32(r_esp, 0x5ae506u); f_005ae520();
    /* 005ae506: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ae50a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ae50c: jne 0x5ae512 */ if (!fZ) goto L_005ae512;
L_005ae50e:; BB(0x005ae50e);
    /* 005ae50e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ae50f: ret 4 */ FN_RET(0x005ae4fc); r_esp += 8; return;
L_005ae512:; BB(0x005ae512);
    /* 005ae512: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae513: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ae518u); f_005c2f74();
    /* 005ae518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ae519: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ae51a: ret 4 */ FN_RET(0x005ae4fc); r_esp += 8; return;
}

void f_005ae520(void) /* sub_5AE520 */
{
    FN_ENTER(0x005ae520);
    /* 005ae520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ae521: mov ebp, esp */ r_ebp = r_esp;
    /* 005ae523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae525: push 0x8d8f62 */ { u32 v = 0x8d8f62u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ae530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ae538: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ae53b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ae53e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ae541: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ae544: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ae547: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ae54a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005ae551: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae554: mov ecx, dword ptr [eax + 0x424] */ r_ecx = R32((u32)(r_eax+0x424u));
    /* 005ae55a: mov dword ptr [eax], 0xb0b1c0 */ W32((u32)(r_eax), 0xb0b1c0u);
    /* 005ae560: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae562: je 0x5ae589 */ if (fZ) goto L_005ae589;
L_005ae564:; BB(0x005ae564);
    /* 005ae564: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5ae569u); f_007b9c8c();
    /* 005ae569: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae56c: mov ecx, dword ptr [eax + 0x424] */ r_ecx = R32((u32)(r_eax+0x424u));
    /* 005ae572: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae574: je 0x5ae57f */ if (fZ) goto L_005ae57f;
L_005ae576:; BB(0x005ae576);
    /* 005ae576: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae578: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ae57a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x5ae57cu); call_ind(t); }
    /* 005ae57c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005ae57f:; BB(0x005ae57f);
    /* 005ae57f: mov dword ptr [eax + 0x424], 0 */ W32((u32)(r_eax+0x424u), 0x0u);
L_005ae589:; BB(0x005ae589);
    /* 005ae589: mov ecx, eax */ r_ecx = r_eax;
    /* 005ae58b: call 0x5ae5dc */ r_esp -= 4; W32(r_esp, 0x5ae590u); f_005ae5dc();
    /* 005ae590: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae593: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 005ae599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae59b: je 0x5ae5a5 */ if (fZ) goto L_005ae5a5;
L_005ae59d:; BB(0x005ae59d);
    /* 005ae59d: call 0x5ae620 */ r_esp -= 4; W32(r_esp, 0x5ae5a2u); f_005ae620();
    /* 005ae5a2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_005ae5a5:; BB(0x005ae5a5);
    /* 005ae5a5: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5ae5aau); f_007b9c8c();
    /* 005ae5aa: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005ae5b1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae5b4: add ecx, 0x484 */ {  u32 a = r_ecx; u32 b = 0x484u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae5ba: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5ae5bfu); f_005769f8();
    /* 005ae5bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ae5c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae5c9: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x5ae5ceu); f_0051f4fc();
    /* 005ae5ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ae5d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ae5d8: mov esp, ebp */ r_esp = r_ebp;
    /* 005ae5da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ae5db: ret  */ FN_RET(0x005ae520); r_esp += 4; return;
}

void f_005ae5dc(void) /* sub_5AE5DC */
{
    FN_ENTER(0x005ae5dc);
    /* 005ae5dc: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae5e2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae5e3: mov ecx, 0xa74980 */ r_ecx = 0xa74980u;
    /* 005ae5e8: call 0x51b158 */ r_esp -= 4; W32(r_esp, 0x5ae5edu); f_0051b158();
    /* 005ae5ed: ret  */ FN_RET(0x005ae5dc); r_esp += 4; return;
}

void f_005ae5f0(void) /* sub_5AE5F0 */
{
    FN_ENTER(0x005ae5f0);
    /* 005ae5f0: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005ae5f2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae5f4: je 0x5ae615 */ if (fZ) goto L_005ae615;
L_005ae5f6:; BB(0x005ae5f6);
    /* 005ae5f6: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ae5f9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_005ae5fc:; BB(0x005ae5fc);
    /* 005ae5fc: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005ae5ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ae601: je 0x5ae60a */ if (fZ) goto L_005ae60a;
L_005ae603:; BB(0x005ae603);
    /* 005ae603: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ae605: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae607: ret 8 */ FN_RET(0x005ae5f0); r_esp += 12; return;
L_005ae60a:; BB(0x005ae60a);
    /* 005ae60a: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005ae60e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005ae610: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae612: ret 8 */ FN_RET(0x005ae5f0); r_esp += 12; return;
L_005ae615:; BB(0x005ae615);
    /* 005ae615: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005ae619: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 005ae61c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005ae61e: jmp 0x5ae5fc */ goto L_005ae5fc;
}

void f_005ae620(void) /* sub_5AE620 */
{
    FN_ENTER(0x005ae620);
    /* 005ae620: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae626: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae627: mov ecx, 0xa74978 */ r_ecx = 0xa74978u;
    /* 005ae62c: call 0x51b158 */ r_esp -= 4; W32(r_esp, 0x5ae631u); f_0051b158();
    /* 005ae631: ret  */ FN_RET(0x005ae620); r_esp += 4; return;
}

void f_005ae634(void) /* sub_5AE634 */
{
    FN_ENTER(0x005ae634);
    /* 005ae634: push dword ptr [0xa74960] */ { u32 v = R32((u32)(0xa74960u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae63a: call 0x5022dc */ r_esp -= 4; W32(r_esp, 0x5ae63fu); f_005022dc();
    /* 005ae63f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ae640: mov eax, dword ptr [0xa74974] */ r_eax = R32((u32)(0xa74974u));
    /* 005ae645: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae648: jl 0x5ae64f */ if ((fS!=fO)) goto L_005ae64f;
L_005ae64a:; BB(0x005ae64a);
    /* 005ae64a: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae64d: jl 0x5ae658 */ if ((fS!=fO)) goto L_005ae658;
L_005ae64f:; BB(0x005ae64f);
    /* 005ae64f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae652: mov dword ptr [0xa74974], eax */ W32((u32)(0xa74974u), r_eax);
    /* 005ae657: ret  */ FN_RET(0x005ae634); r_esp += 4; return;
L_005ae658:; BB(0x005ae658);
    /* 005ae658: mov edx, dword ptr [0xa74970] */ r_edx = R32((u32)(0xa74970u));
    /* 005ae65e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae660: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ae665u); f_0082d8bc();
    /* 005ae665: mov eax, dword ptr [0xa74974] */ r_eax = R32((u32)(0xa74974u));
    /* 005ae66a: jmp 0x5ae64f */ goto L_005ae64f;
}

void f_005ae660(void)
{
    FN_ENTER(0x005ae660);
    goto L_005ae660;
L_005ae64f:; BB(0x005ae64f);
    /* 005ae64f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae652: mov dword ptr [0xa74974], eax */ W32((u32)(0xa74974u), r_eax);
    /* 005ae657: ret  */ FN_RET(0x005ae660); r_esp += 4; return;
L_005ae660:; BB(0x005ae660);
    /* 005ae660: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5ae665u); f_0082d8bc();
    /* 005ae665: mov eax, dword ptr [0xa74974] */ r_eax = R32((u32)(0xa74974u));
    /* 005ae66a: jmp 0x5ae64f */ goto L_005ae64f;
}

void f_005ae66c(void) /* sub_5AE66C */
{
    FN_ENTER(0x005ae66c);
    /* 005ae66c: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 005ae672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae674: je 0x5ae681 */ if (fZ) goto L_005ae681;
L_005ae676:; BB(0x005ae676);
    /* 005ae676: push 0x44098000 */ { u32 v = 0x44098000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae67b: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5ae680u); f_00520ea0();
    /* 005ae680: ret  */ FN_RET(0x005ae66c); r_esp += 4; return;
L_005ae681:; BB(0x005ae681);
    /* 005ae681: push 0x43e10000 */ { u32 v = 0x43e10000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae686: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5ae68bu); f_00520ea0();
    /* 005ae68b: ret  */ FN_RET(0x005ae66c); r_esp += 4; return;
}

void f_005ae68c(void) /* sub_5AE68C */
{
    FN_ENTER(0x005ae68c);
    /* 005ae68c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae68d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ae690: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ae692: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 005ae695: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5ae69au); f_0082dcbc();
    /* 005ae69a: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005ae69e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005ae6a2: fmul dword ptr [0x92ab84] */ ST(0) = ST(0) * R_F32((u32)(0x92ab84u));
    /* 005ae6a8: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 005ae6ab: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 005ae6ae: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005ae6b2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5ae6b7u); f_0082ddd8();
    /* 005ae6b7: fmul dword ptr [0x92ab84] */ ST(0) = ST(0) * R_F32((u32)(0x92ab84u));
    /* 005ae6bd: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 005ae6c0: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005ae6c6: fsubr dword ptr [eax + 0x40] */ ST(0) = R_F32((u32)(r_eax+0x40u)) - ST(0);
    /* 005ae6c9: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 005ae6cc: fsub dword ptr [esp + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x18u));
    /* 005ae6d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005ae6d2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005ae6d4: fmul qword ptr [0x92a940] */ ST(0) = ST(0) * R_F64((u32)(0x92a940u));
    /* 005ae6da: fdiv qword ptr [0x92a938] */ ST(0) = ST(0) / R_F64((u32)(0x92a938u));
    /* 005ae6e0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005ae6e3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005ae6e7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ae6ec: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005ae6f0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005ae6f4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005ae6f8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005ae6fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ae6fd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ae701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae702: call 0x5ae70c */ r_esp -= 4; W32(r_esp, 0x5ae707u); f_005ae70c();
    /* 005ae707: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae70a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ae70b: ret  */ FN_RET(0x005ae68c); r_esp += 4; return;
}

void f_005ae70c(void) /* sub_5AE70C */
{
    FN_ENTER(0x005ae70c);
    /* 005ae70c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ae70d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae70e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ae710: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae714: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae717: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5ae71cu); f_007a900c();
    /* 005ae71c: mov ebx, eax */ r_ebx = r_eax;
    /* 005ae71e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae721: mov eax, dword ptr [ebp + 0x3f8] */ r_eax = R32((u32)(r_ebp+0x3f8u));
    /* 005ae727: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005ae72c: cmp ebx, 0xffffc000 */ {  u32 a = r_ebx; u32 b = 0xffffc000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae732: jge 0x5ae736 */ if ((fS==fO)) goto L_005ae736;
L_005ae734:; BB(0x005ae734);
    /* 005ae734: mov ebx, edx */ r_ebx = r_edx;
L_005ae736:; BB(0x005ae736);
    /* 005ae736: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 005ae73b: cmp ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ae741: jl 0x5ae745 */ if ((fS!=fO)) goto L_005ae745;
L_005ae743:; BB(0x005ae743);
    /* 005ae743: mov ebx, edx */ r_ebx = r_edx;
L_005ae745:; BB(0x005ae745);
    /* 005ae745: mov edx, ebx */ r_edx = r_ebx;
    /* 005ae747: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ae74a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ae74c: jl 0x5ae76d */ if ((fS!=fO)) goto L_005ae76d;
L_005ae74e:; BB(0x005ae74e);
    /* 005ae74e: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae753: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae755: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5ae75au); f_007a8c74();
    /* 005ae75a: mov edx, eax */ r_edx = r_eax;
    /* 005ae75c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ae75f:; BB(0x005ae75f);
    /* 005ae75f: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 005ae762: mov dword ptr [ebp + 0x3f8], eax */ W32((u32)(r_ebp+0x3f8u), r_eax);
    /* 005ae768: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ae769: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ae76a: ret 4 */ FN_RET(0x005ae70c); r_esp += 8; return;
L_005ae76d:; BB(0x005ae76d);
    /* 005ae76d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae76e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae76f: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x5ae774u); f_007a900c();
    /* 005ae774: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ae777: mov edx, dword ptr [ebp + 0x3f8] */ r_edx = R32((u32)(r_ebp+0x3f8u));
    /* 005ae77d: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005ae780: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ae782: jl 0x5ae798 */ if ((fS!=fO)) goto L_005ae798;
L_005ae784:; BB(0x005ae784);
    /* 005ae784: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ae786: jl 0x5ae790 */ if ((fS!=fO)) goto L_005ae790;
L_005ae788:; BB(0x005ae788);
    /* 005ae788: add edx, 0xfffff800 */ {  u32 a = r_edx; u32 b = 0xfffff800u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae78e: jmp 0x5ae75f */ goto L_005ae75f;
L_005ae790:; BB(0x005ae790);
    /* 005ae790: add edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae796: jmp 0x5ae75f */ goto L_005ae75f;
L_005ae798:; BB(0x005ae798);
    /* 005ae798: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae79d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae79e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae79f: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5ae7a4u); f_007a8c74();
    /* 005ae7a4: mov edx, eax */ r_edx = r_eax;
    /* 005ae7a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ae7a9: jmp 0x5ae75f */ goto L_005ae75f;
}

void f_005ae7ac(void) /* sub_5AE7AC */
{
    FN_ENTER(0x005ae7ac);
    /* 005ae7ac: mov ecx, dword ptr [0xa7493c] */ r_ecx = R32((u32)(0xa7493cu));
    /* 005ae7b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ae7b4: je 0x5ae7c9 */ if (fZ) goto L_005ae7c9;
L_005ae7b6:; BB(0x005ae7b6);
    /* 005ae7b6: je 0x5ae7bf */ if (fZ) goto L_005ae7bf;
L_005ae7b8:; BB(0x005ae7b8);
    /* 005ae7b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7ba: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5ae7bfu); f_004066a8();
L_005ae7bf:; BB(0x005ae7bf);
    /* 005ae7bf: mov dword ptr [0xa7493c], 0 */ W32((u32)(0xa7493cu), 0x0u);
L_005ae7c9:; BB(0x005ae7c9);
    /* 005ae7c9: ret  */ FN_RET(0x005ae7ac); r_esp += 4; return;
}

void f_005ae7cc(void)
{
    FN_ENTER(0x005ae7cc);
    /* 005ae7cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005ae7cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7d1: push 0x8d8f88 */ { u32 v = 0x8d8f88u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ae7dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ae7e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ae7e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ae7ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ae7ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ae7f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ae7f3: push 0x4a4 */ { u32 v = 0x4a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae7f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ae7ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ae804u); f_005caba4();
    /* 005ae804: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ae805: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ae808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae80a: je 0x5ae843 */ if (fZ) goto L_005ae843;
L_005ae80c:; BB(0x005ae80c);
    /* 005ae80c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ae813: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ae81a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae81d: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae823: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae826: call 0x5ae848 */ r_esp -= 4; W32(r_esp, 0x5ae82bu); f_005ae848();
    /* 005ae82b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ae82e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ae835:; BB(0x005ae835);
    /* 005ae835: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ae838: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ae83f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ae841: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ae842: ret  */ FN_RET(0x005ae7cc); r_esp += 4; return;
L_005ae843:; BB(0x005ae843);
    /* 005ae843: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ae845: jmp 0x5ae835 */ goto L_005ae835;
}

void f_005ae848(void) /* sub_5AE848 */
{
    FN_ENTER(0x005ae848);
    /* 005ae848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ae849: mov ebp, esp */ r_ebp = r_esp;
    /* 005ae84b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ae84d: push 0x8d8fd6 */ { u32 v = 0x8d8fd6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae852: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ae858: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae859: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ae860: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ae863: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ae866: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ae869: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ae86c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ae86f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ae872: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae875: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 005ae878: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ae87b: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x5ae880u); f_005216f4();
    /* 005ae880: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ae887: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae88a: mov dword ptr [ecx], 0xb0b1c0 */ W32((u32)(r_ecx), 0xb0b1c0u);
    /* 005ae890: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae896: call 0x564e84 */ r_esp -= 4; W32(r_esp, 0x5ae89bu); f_00564e84();
    /* 005ae89b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ae8a2: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae8a5: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae8ab: call 0x564e84 */ r_esp -= 4; W32(r_esp, 0x5ae8b0u); f_00564e84();
    /* 005ae8b0: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ae8b7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae8ba: add ecx, 0x484 */ {  u32 a = r_ecx; u32 b = 0x484u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ae8c0: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5ae8c5u); f_00576a48();
    /* 005ae8c5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005ae8cc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae8cf: mov eax, dword ptr [0x9c161c] */ r_eax = R32((u32)(0x9c161cu));
    /* 005ae8d4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ae8d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8d8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005ae8db: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x5ae8e0u); f_0051f750();
    /* 005ae8e0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae8e3: call 0x5aec2c */ r_esp -= 4; W32(r_esp, 0x5ae8e8u); f_005aec2c();
    /* 005ae8e8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae8eb: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x5ae8f0u); f_00521840();
    /* 005ae8f0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae8f3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8f5: push 0x9c12a0 */ { u32 v = 0x9c12a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae8fa: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x5ae8ffu); f_0051ff3c();
    /* 005ae8ff: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae902: mov eax, dword ptr [0xa7493c] */ r_eax = R32((u32)(0xa7493cu));
    /* 005ae907: mov dword ptr [ecx + 0xd8], 0x9c1340 */ W32((u32)(r_ecx+0xd8u), 0x9c1340u);
    /* 005ae911: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005ae917: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 005ae91d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ae91f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ae920: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 005ae927: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5ae92cu); f_007aa4c8();
    /* 005ae92c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae92f: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005ae936: mov edx, dword ptr [ecx + 0x3ec] */ r_edx = R32((u32)(r_ecx+0x3ecu));
    /* 005ae93c: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005ae943: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae945: je 0x5ae94e */ if (fZ) goto L_005ae94e;
L_005ae947:; BB(0x005ae947);
    /* 005ae947: mov eax, 1 */ r_eax = 0x1u;
    /* 005ae94c: jmp 0x5ae950 */ goto L_005ae950;
L_005ae94e:; BB(0x005ae94e);
    /* 005ae94e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ae950:; BB(0x005ae950);
    /* 005ae950: push dword ptr [eax*4 + 0xa74948] */ { u32 v = R32((u32)(r_eax*4+0xa74948u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae957: push dword ptr [eax*4 + 0xa74950] */ { u32 v = R32((u32)(r_eax*4+0xa74950u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae95e: push dword ptr [eax*4 + 0xa74958] */ { u32 v = R32((u32)(r_eax*4+0xa74958u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ae965: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5ae96au); f_00520c70();
    /* 005ae96a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae96d: call 0x520350 */ r_esp -= 4; W32(r_esp, 0x5ae972u); f_00520350();
    /* 005ae972: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae975: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 005ae97b: mov dword ptr [ecx + 0x358], 0x9c1620 */ W32((u32)(r_ecx+0x358u), 0x9c1620u);
    /* 005ae985: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae987: je 0x5ae992 */ if (fZ) goto L_005ae992;
L_005ae989:; BB(0x005ae989);
    /* 005ae989: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae98b: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5ae990u); f_00520390();
    /* 005ae990: jmp 0x5ae999 */ goto L_005ae999;
L_005ae992:; BB(0x005ae992);
    /* 005ae992: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005ae994: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x5ae999u); f_00520390();
L_005ae999:; BB(0x005ae999);
    /* 005ae999: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae99c: mov dword ptr [ecx + 0x384], 0x41700000 */ W32((u32)(r_ecx+0x384u), 0x41700000u);
    /* 005ae9a6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9a8: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5ae9adu); f_00521820();
    /* 005ae9ad: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae9b0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9b2: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5ae9b7u); f_005217fc();
    /* 005ae9b7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae9ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9bb: lea ecx, [eax + 0x3d4] */ r_ecx = (u32)(r_eax+0x3d4u);
    /* 005ae9c1: call 0x51b708 */ r_esp -= 4; W32(r_esp, 0x5ae9c6u); f_0051b708();
    /* 005ae9c6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae9c9: call 0x5aecc0 */ r_esp -= 4; W32(r_esp, 0x5ae9ceu); f_005aecc0();
    /* 005ae9ce: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae9d1: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 005ae9d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ae9d9: je 0x5ae9f2 */ if (fZ) goto L_005ae9f2;
L_005ae9db:; BB(0x005ae9db);
    /* 005ae9db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ae9dc: lea ecx, [eax + 0x3e0] */ r_ecx = (u32)(r_eax+0x3e0u);
    /* 005ae9e2: call 0x51b708 */ r_esp -= 4; W32(r_esp, 0x5ae9e7u); f_0051b708();
    /* 005ae9e7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005ae9ea: call 0x5aed14 */ r_esp -= 4; W32(r_esp, 0x5ae9efu); f_005aed14();
    /* 005ae9ef: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_005ae9f2:; BB(0x005ae9f2);
    /* 005ae9f2: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005ae9f5: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 005ae9f8: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 005ae9fb: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 005aea00: mov word ptr [eax + 0x3f4], dx */ W16((u32)(r_eax+0x3f4u), (u16)r_edx);
    /* 005aea07: mov dword ptr [eax + 0x414], 0 */ W32((u32)(r_eax+0x414u), 0x0u);
    /* 005aea11: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 005aea16: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005aea18: mov dword ptr [eax + 0x418], 0 */ W32((u32)(r_eax+0x418u), 0x0u);
    /* 005aea22: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 005aea25: mov dword ptr [eax + 0x3f8], edi */ W32((u32)(r_eax+0x3f8u), r_edi);
    /* 005aea2b: mov dword ptr [eax + 0x420], 0 */ W32((u32)(r_eax+0x420u), 0x0u);
    /* 005aea35: mov dword ptr [eax + 0x3fc], ecx */ W32((u32)(r_eax+0x3fcu), r_ecx);
    /* 005aea3b: mov dword ptr [eax + 0x400], ebx */ W32((u32)(r_eax+0x400u), r_ebx);
    /* 005aea41: mov dword ptr [eax + 0x404], esi */ W32((u32)(r_eax+0x404u), r_esi);
    /* 005aea47: mov dword ptr [eax + 0x408], ecx */ W32((u32)(r_eax+0x408u), r_ecx);
    /* 005aea4d: mov dword ptr [eax + 0x40c], ebx */ W32((u32)(r_eax+0x40cu), r_ebx);
    /* 005aea53: mov dword ptr [eax + 0x410], esi */ W32((u32)(r_eax+0x410u), r_esi);
    /* 005aea59: mov dword ptr [eax + 0x41c], edi */ W32((u32)(r_eax+0x41cu), r_edi);
    /* 005aea5f: mov dword ptr [eax + 0x3cc], edi */ W32((u32)(r_eax+0x3ccu), r_edi);
    /* 005aea65: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5aea6au); f_005caba4();
    /* 005aea6a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aea6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aea70: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005aea73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aea75: je 0x5aec22 */ if (fZ) goto L_005aec22;
L_005aea7b:; BB(0x005aea7b);
    /* 005aea7b: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005aea82: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005aea89: mov ecx, eax */ r_ecx = r_eax;
    /* 005aea8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005aea8d: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x5aea92u); f_007b4b48();
    /* 005aea92: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005aea99:; BB(0x005aea99);
    /* 005aea99: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aea9c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005aea9f: mov dword ptr [edx + 0x424], eax */ W32((u32)(r_edx+0x424u), r_eax);
    /* 005aeaa5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005aeaac: mov ecx, eax */ r_ecx = r_eax;
    /* 005aeaae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeab0: push 0x9c12cc */ { u32 v = 0x9c12ccu; r_esp -= 4; W32(r_esp, v); }
    /* 005aeab5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5aeabau); f_007b9a88();
    /* 005aeaba: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeabd: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005aeabf: mov dword ptr [ecx + 0x428], 0 */ W32((u32)(r_ecx+0x428u), 0x0u);
    /* 005aeac9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005aeace: mov word ptr [ecx + 0x42c], ax */ W16((u32)(r_ecx+0x42cu), (u16)r_eax);
    /* 005aead5: call dword ptr [edx + 0x190] */ { u32 t = R32((u32)(r_edx+0x190u)); r_esp -= 4; W32(r_esp, 0x5aeadbu); call_ind(t); }
    /* 005aeadb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeade: mov dword ptr [ecx + 0x448], 0 */ W32((u32)(r_ecx+0x448u), 0x0u);
    /* 005aeae8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aeaea: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 005aeaf0: mov dword ptr [ecx + 0x44c], 0 */ W32((u32)(r_ecx+0x44cu), 0x0u);
    /* 005aeafa: mov dword ptr [ecx + 0x434], eax */ W32((u32)(r_ecx+0x434u), r_eax);
    /* 005aeb00: mov dword ptr [ecx + 0x438], eax */ W32((u32)(r_ecx+0x438u), r_eax);
    /* 005aeb06: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 005aeb0c: mov dword ptr [ecx + 0x450], 0 */ W32((u32)(r_ecx+0x450u), 0x0u);
    /* 005aeb16: mov dword ptr [ecx + 0x440], eax */ W32((u32)(r_ecx+0x440u), r_eax);
    /* 005aeb1c: mov dword ptr [ecx + 0x444], eax */ W32((u32)(r_ecx+0x444u), r_eax);
    /* 005aeb22: mov dword ptr [ecx + 0x47c], eax */ W32((u32)(r_ecx+0x47cu), r_eax);
    /* 005aeb28: mov dword ptr [ecx + 0x454], 0 */ W32((u32)(r_ecx+0x454u), 0x0u);
    /* 005aeb32: mov dword ptr [ecx + 0x458], 0 */ W32((u32)(r_ecx+0x458u), 0x0u);
    /* 005aeb3c: mov dword ptr [ecx + 0x45c], 0 */ W32((u32)(r_ecx+0x45cu), 0x0u);
    /* 005aeb46: mov dword ptr [ecx + 0x460], 0 */ W32((u32)(r_ecx+0x460u), 0x0u);
    /* 005aeb50: mov dword ptr [ecx + 0x464], 0 */ W32((u32)(r_ecx+0x464u), 0x0u);
    /* 005aeb5a: mov dword ptr [ecx + 0x468], 0 */ W32((u32)(r_ecx+0x468u), 0x0u);
    /* 005aeb64: mov dword ptr [ecx + 0x46c], 0 */ W32((u32)(r_ecx+0x46cu), 0x0u);
    /* 005aeb6e: mov dword ptr [ecx + 0x470], 0 */ W32((u32)(r_ecx+0x470u), 0x0u);
    /* 005aeb78: mov dword ptr [ecx + 0x474], 0 */ W32((u32)(r_ecx+0x474u), 0x0u);
    /* 005aeb82: mov dword ptr [ecx + 0x478], 0 */ W32((u32)(r_ecx+0x478u), 0x0u);
    /* 005aeb8c: call 0x5aed28 */ r_esp -= 4; W32(r_esp, 0x5aeb91u); f_005aed28();
    /* 005aeb91: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeb94: call 0x5aed5c */ r_esp -= 4; W32(r_esp, 0x5aeb99u); f_005aed5c();
    /* 005aeb99: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeb9c: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x5aeba1u); f_0051ffdc();
    /* 005aeba1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aeba4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeba6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aeba8: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005aebaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aebb0: call 0x5aed74 */ r_esp -= 4; W32(r_esp, 0x5aebb5u); f_005aed74();
    /* 005aebb5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aebb8: mov edx, dword ptr [ecx + 0x3ec] */ r_edx = R32((u32)(r_ecx+0x3ecu));
    /* 005aebbe: mov ebx, dword ptr [edx*4 + 0xa74940] */ r_ebx = R32((u32)(r_edx*4+0xa74940u));
    /* 005aebc5: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005aebc7: fmul dword ptr [0x92ab7c] */ ST(0) = ST(0) * R_F32((u32)(0x92ab7cu));
    /* 005aebcd: fdiv dword ptr [0x92ab78] */ ST(0) = ST(0) / R_F32((u32)(0x92ab78u));
    /* 005aebd3: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 005aebd6: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 005aebda: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aebdf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005aebe2: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 005aebe5: fistp dword ptr [ecx + 0x3d0] */ W32((u32)(r_ecx+0x3d0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005aebeb: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 005aebee: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005aebf1: mov dword ptr [ecx + 0x480], 3 */ W32((u32)(r_ecx+0x480u), 0x3u);
    /* 005aebfb: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 005aec01: call 0x5b10fc */ r_esp -= 4; W32(r_esp, 0x5aec06u); f_005b10fc();
    /* 005aec06: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005aec09: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005aec0c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005aec0f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005aec12: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005aec15: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005aec1c: mov esp, ebp */ r_esp = r_ebp;
    /* 005aec1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005aec1f: ret 8 */ FN_RET(0x005ae848); r_esp += 12; return;
L_005aec22:; BB(0x005aec22);
    /* 005aec22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005aec24: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005aec27: jmp 0x5aea99 */ goto L_005aea99;
}

void f_005aec2c(void) /* sub_5AEC2C */
{
    FN_ENTER(0x005aec2c);
    /* 005aec2c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005aec2f: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 005aec35: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 005aec3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005aec3d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005aec40: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005aec44: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005aec49: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005aec4e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005aec52: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005aec56: fistp dword ptr [ecx + 0x3f0] */ W32((u32)(r_ecx+0x3f0u), (u32)fx_int32(ST(0))); FPOP();
    /* 005aec5c: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005aec5f: fcomp dword ptr [0x92ab70] */ fx_compare(ST(0), R_F32((u32)(0x92ab70u))); FPOP();
    /* 005aec65: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005aec67: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005aec68: jb 0x5aec95 */ if (fC) goto L_005aec95;
L_005aec6a:; BB(0x005aec6a);
    /* 005aec6a: mov eax, dword ptr [0xa7493c] */ r_eax = R32((u32)(0xa7493cu));
    /* 005aec6f: mov dword ptr [ecx + 0x3ec], 1 */ W32((u32)(r_ecx+0x3ecu), 0x1u);
    /* 005aec79: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005aec7f: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005aec82: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 005aec85: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005aec8b: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005aec8e: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005aec91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aec94: ret  */ FN_RET(0x005aec2c); r_esp += 4; return;
L_005aec95:; BB(0x005aec95);
    /* 005aec95: mov eax, dword ptr [0xa7493c] */ r_eax = R32((u32)(0xa7493cu));
    /* 005aec9a: mov dword ptr [ecx + 0x3ec], 0 */ W32((u32)(r_ecx+0x3ecu), 0x0u);
    /* 005aeca4: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005aecaa: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 005aecad: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 005aecb0: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 005aecb6: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 005aecb9: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005aecbc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005aecbf: ret  */ FN_RET(0x005aec2c); r_esp += 4; return;
}

void f_005aecc0(void) /* sub_5AECC0 */
{
    FN_ENTER(0x005aecc0);
    /* 005aecc0: add ecx, 0x3d4 */ {  u32 a = r_ecx; u32 b = 0x3d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005aecc6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aecc7: mov ecx, 0xa74980 */ r_ecx = 0xa74980u;
    /* 005aeccc: call 0x5aecd4 */ r_esp -= 4; W32(r_esp, 0x5aecd1u); f_005aecd4();
    /* 005aecd1: ret  */ FN_RET(0x005aecc0); r_esp += 4; return;
}

void f_005aecd4(void) /* sub_5AECD4 */
{
    FN_ENTER(0x005aecd4);
    /* 005aecd4: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 005aecd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aecd8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aecd9: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005aecdd: call 0x5aece8 */ r_esp -= 4; W32(r_esp, 0x5aece2u); f_005aece8();
    /* 005aece2: ret 4 */ FN_RET(0x005aecd4); r_esp += 8; return;
}

void f_005aece8(void) /* sub_5AECE8 */
{
    FN_ENTER(0x005aece8);
    /* 005aece8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005aecec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aecee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aecf0: je 0x5aed05 */ if (fZ) goto L_005aed05;
L_005aecf2:; BB(0x005aecf2);
    /* 005aecf2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005aecf4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005aecf6: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
L_005aecf9:; BB(0x005aecf9);
    /* 005aecf9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005aecfb: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 005aed02: ret 8 */ FN_RET(0x005aece8); r_esp += 12; return;
L_005aed05:; BB(0x005aed05);
    /* 005aed05: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005aed09: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 005aed0f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 005aed11: jmp 0x5aecf9 */ goto L_005aecf9;
}

void f_005aed14(void) /* sub_5AED14 */
{
    FN_ENTER(0x005aed14);
    /* 005aed14: add ecx, 0x3e0 */ {  u32 a = r_ecx; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005aed1a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aed1b: mov ecx, 0xa74978 */ r_ecx = 0xa74978u;
    /* 005aed20: call 0x5aecd4 */ r_esp -= 4; W32(r_esp, 0x5aed25u); f_005aecd4();
    /* 005aed25: ret  */ FN_RET(0x005aed14); r_esp += 4; return;
}

void f_005aed28(void) /* sub_5AED28 */
{
    FN_ENTER(0x005aed28);
    /* 005aed28: fld dword ptr [0x92ab6c] */ FPUSH(R_F32((u32)(0x92ab6cu)));
    /* 005aed2e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 005aed31: fadd dword ptr [ecx + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x420u));
    /* 005aed37: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 005aed3a: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 005aed3d: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 005aed43: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 005aed46: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 005aed4c: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 005aed52: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 005aed55: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 005aed58: ret  */ FN_RET(0x005aed28); r_esp += 4; return;
}

void f_005aed5c(void) /* sub_5AED5C */
{
    FN_ENTER(0x005aed5c);
    /* 005aed5c: fld dword ptr [0x92ab6c] */ FPUSH(R_F32((u32)(0x92ab6cu)));
    /* 005aed62: fadd dword ptr [ecx + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x420u));
    /* 005aed68: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005aed6e: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 005aed71: ret  */ FN_RET(0x005aed5c); r_esp += 4; return;
}

void f_005aed74(void) /* sub_5AED74 */
{
    FN_ENTER(0x005aed74);
    /* 005aed74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005aed75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005aed76: mov edi, ecx */ r_edi = r_ecx;
    /* 005aed78: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005aed7c: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005aed7f: ja 0x5aef53 */ if ((!fC&&!fZ)) goto L_005aef53;
L_005aed85:; BB(0x005aed85);
    /* 005aed85: mov eax, dword ptr [eax*4 + 0x92a840] */ r_eax = R32((u32)(r_eax*4+0x92a840u));
    /* 005aed8c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aed74); r_esp += 12; return;
}

void f_005aed8e(void)
{
    FN_ENTER(0x005aed8e);
    /* 005aed8e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aed92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aed93: mov ecx, edi */ r_ecx = r_edi;
    /* 005aed95: call 0x5af034 */ r_esp -= 4; W32(r_esp, 0x5aed9au); f_005af034();
    /* 005aed9a: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aed8e); r_esp += 12; return;
}

void f_005aed9f(void)
{
    FN_ENTER(0x005aed9f);
    /* 005aed9f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aeda3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aeda4: mov ecx, edi */ r_ecx = r_edi;
    /* 005aeda6: call 0x571174 */ r_esp -= 4; W32(r_esp, 0x5aedabu); f_00571174();
    /* 005aedab: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aed9f); r_esp += 12; return;
}

void f_005aedb0(void)
{
    FN_ENTER(0x005aedb0);
    /* 005aedb0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aedb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aedb5: mov ecx, edi */ r_ecx = r_edi;
    /* 005aedb7: call 0x5af0a4 */ r_esp -= 4; W32(r_esp, 0x5aedbcu); f_005af0a4();
    /* 005aedbc: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aedb0); r_esp += 12; return;
}

void f_005aedc1(void)
{
    FN_ENTER(0x005aedc1);
    /* 005aedc1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aedc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aedc6: mov ecx, edi */ r_ecx = r_edi;
    /* 005aedc8: call 0x5af54c */ r_esp -= 4; W32(r_esp, 0x5aedcdu); f_005af54c();
    /* 005aedcd: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aedc1); r_esp += 12; return;
}

void f_005aedd2(void)
{
    FN_ENTER(0x005aedd2);
    /* 005aedd2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aedd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aedd7: mov ecx, edi */ r_ecx = r_edi;
    /* 005aedd9: call 0x5af740 */ r_esp -= 4; W32(r_esp, 0x5aeddeu); f_005af740();
    /* 005aedde: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aedd2); r_esp += 12; return;
}

void f_005aede3(void)
{
    FN_ENTER(0x005aede3);
    /* 005aede3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aede7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aede8: mov ecx, edi */ r_ecx = r_edi;
    /* 005aedea: call 0x5af904 */ r_esp -= 4; W32(r_esp, 0x5aedefu); f_005af904();
    /* 005aedef: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aede3); r_esp += 12; return;
}

void f_005aedf4(void)
{
    FN_ENTER(0x005aedf4);
    /* 005aedf4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aedf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aedf9: mov ecx, edi */ r_ecx = r_edi;
    /* 005aedfb: call 0x5afc80 */ r_esp -= 4; W32(r_esp, 0x5aee00u); f_005afc80();
    /* 005aee00: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aedf4); r_esp += 12; return;
}

void f_005aee00(void)
{
    FN_ENTER(0x005aee00);
    /* 005aee00: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee00); r_esp += 12; return;
}

void f_005aee05(void)
{
    FN_ENTER(0x005aee05);
    /* 005aee05: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aee0a: mov ecx, edi */ r_ecx = r_edi;
    /* 005aee0c: call 0x5aff38 */ r_esp -= 4; W32(r_esp, 0x5aee11u); f_005aff38();
    /* 005aee11: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee05); r_esp += 12; return;
}

void f_005aee16(void)
{
    FN_ENTER(0x005aee16);
    /* 005aee16: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aee1b: mov ecx, edi */ r_ecx = r_edi;
    /* 005aee1d: call 0x5b0210 */ r_esp -= 4; W32(r_esp, 0x5aee22u); f_005b0210();
    /* 005aee22: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee16); r_esp += 12; return;
}

void f_005aee27(void)
{
    FN_ENTER(0x005aee27);
    /* 005aee27: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aee2c: mov ecx, edi */ r_ecx = r_edi;
    /* 005aee2e: call 0x5b08b0 */ r_esp -= 4; W32(r_esp, 0x5aee33u); f_005b08b0();
    /* 005aee33: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee27); r_esp += 12; return;
}

void f_005aee38(void)
{
    FN_ENTER(0x005aee38);
    /* 005aee38: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aee3d: mov ecx, edi */ r_ecx = r_edi;
    /* 005aee3f: call 0x5b0bdc */ r_esp -= 4; W32(r_esp, 0x5aee44u); f_005b0bdc();
    /* 005aee44: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee38); r_esp += 12; return;
}

void f_005aee49(void)
{
    FN_ENTER(0x005aee49);
    /* 005aee49: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aee4e: mov ecx, edi */ r_ecx = r_edi;
    /* 005aee50: call 0x5b0dfc */ r_esp -= 4; W32(r_esp, 0x5aee55u); f_005b0dfc();
    /* 005aee55: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee49); r_esp += 12; return;
}

void f_005aee5a(void)
{
    FN_ENTER(0x005aee5a);
    /* 005aee5a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee5e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aee61: je 0x5af004 */ if (fZ) goto L_005af004;
L_005aee67:; BB(0x005aee67);
    /* 005aee67: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee6b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aee6e: je 0x5aeefa */ if (fZ) goto L_005aeefa;
L_005aee74:; BB(0x005aee74);
    /* 005aee74: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aee78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aee7a: jne 0x5aef53 */ if (!fZ) goto L_005aef53;
L_005aee80:; BB(0x005aee80);
    /* 005aee80: add dword ptr [edi + 0x430], 1 */ { u32 ad = (u32)(r_edi+0x430u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005aee87: mov ecx, edi */ r_ecx = r_edi;
    /* 005aee89: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5aee8eu); f_007aa094();
    /* 005aee8e: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005aee95: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aee98: je 0x5aeff3 */ if (fZ) goto L_005aeff3;
L_005aee9e:; BB(0x005aee9e);
    /* 005aee9e: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeea1: je 0x5aefaa */ if (fZ) goto L_005aefaa;
L_005aeea7:; BB(0x005aeea7);
    /* 005aeea7: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 005aeead: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeeb0: je 0x5aef61 */ if (fZ) goto L_005aef61;
L_005aeeb6:; BB(0x005aeeb6);
    /* 005aeeb6: mov ecx, edi */ r_ecx = r_edi;
    /* 005aeeb8: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5aeebdu); f_0052126c();
    /* 005aeebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeebf: je 0x5aeedd */ if (fZ) goto L_005aeedd;
L_005aeec1:; BB(0x005aeec1);
    /* 005aeec1: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 005aeec8: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aeecb: je 0x5aef58 */ if (fZ) goto L_005aef58;
L_005aeed1:; BB(0x005aeed1);
    /* 005aeed1: mov dword ptr [edi + 0x3f8], 0 */ W32((u32)(r_edi+0x3f8u), 0x0u);
    /* 005aeedb: jmp 0x5aeee4 */ goto L_005aeee4;
L_005aeedd:; BB(0x005aeedd);
    /* 005aeedd: mov ecx, edi */ r_ecx = r_edi;
    /* 005aeedf: call 0x5ae66c */ r_esp -= 4; W32(r_esp, 0x5aeee4u); f_005ae66c();
L_005aeee4:; BB(0x005aeee4);
    /* 005aeee4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005aeee6: mov ecx, edi */ r_ecx = r_edi;
    /* 005aeee8: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5aeeeeu); call_ind(t); }
    /* 005aeeee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005aeef0: mov ecx, edi */ r_ecx = r_edi;
    /* 005aeef2: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5aeef8u); call_ind(t); }
    /* 005aeef8: jmp 0x5aef53 */ goto L_005aef53;
L_005aeefa:; BB(0x005aeefa);
    /* 005aeefa: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005aef00: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005aef02: je 0x5aef53 */ if (fZ) goto L_005aef53;
L_005aef04:; BB(0x005aef04);
    /* 005aef04: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005aef06: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef08: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5aef0du); f_0051f62c();
    /* 005aef0d: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aee5a); r_esp += 12; return;
L_005aef58:; BB(0x005aef58);
    /* 005aef58: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef5a: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5aef5fu); f_005ae68c();
    /* 005aef5f: jmp 0x5aeee4 */ goto L_005aeee4;
L_005aef61:; BB(0x005aef61);
    /* 005aef61: mov eax, dword ptr [0xa74978] */ r_eax = R32((u32)(0xa74978u));
    /* 005aef66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aef68: je 0x5aeeb6 */ if (fZ) goto L_005aeeb6;
L_005aef6e:; BB(0x005aef6e);
    /* 005aef6e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005aef71: mov ebx, eax */ r_ebx = r_eax;
L_005aef73:; BB(0x005aef73);
    /* 005aef73: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005aef77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aef78: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5aef7du); f_007b4d18();
    /* 005aef7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef7e: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 005aef84: cmp edx, dword ptr [edi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aef8a: jne 0x5aef9b */ if (!fZ) goto L_005aef9b;
L_005aef8c:; BB(0x005aef8c);
    /* 005aef8c: mov edx, dword ptr [eax + 0x41c] */ r_edx = R32((u32)(r_eax+0x41cu));
    /* 005aef92: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005aef95: mov dword ptr [eax + 0x41c], edx */ W32((u32)(r_eax+0x41cu), r_edx);
L_005aef9b:; BB(0x005aef9b);
    /* 005aef9b: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 005aef9e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aefa0: jne 0x5aef73 */ if (!fZ) goto L_005aef73;
L_005aefa2:; BB(0x005aefa2);
    /* 005aefa2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005aefa5: jmp 0x5aeeb6 */ goto L_005aeeb6;
L_005aefaa:; BB(0x005aefaa);
    /* 005aefaa: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aefaf: mov ecx, edi */ r_ecx = r_edi;
    /* 005aefb1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aefb6u); f_007aaa30();
    /* 005aefb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005aefb8: je 0x5aeea7 */ if (fZ) goto L_005aeea7;
L_005aefbe:; BB(0x005aefbe);
    /* 005aefbe: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5aefc3u); f_00807ac0();
    /* 005aefc3: push dword ptr [eax*4 + 0x9c1438] */ { u32 v = R32((u32)(r_eax*4+0x9c1438u)); r_esp -= 4; W32(r_esp, v); }
    /* 005aefca: mov ecx, edi */ r_ecx = r_edi;
    /* 005aefcc: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5aefd1u); f_007879b8();
    /* 005aefd1: mov ecx, eax */ r_ecx = r_eax;
    /* 005aefd3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005aefd6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005aefd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aefd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005aefda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aefdb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005aefdc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5aefe1u); f_00814298();
    /* 005aefe1: push 0xfffffe00 */ { u32 v = 0xfffffe00u; r_esp -= 4; W32(r_esp, v); }
    /* 005aefe6: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5aefebu); f_00814680();
    /* 005aefeb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005aefee: jmp 0x5aeea7 */ goto L_005aeea7;
L_005aeff3:; BB(0x005aeff3);
    /* 005aeff3: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005aeff8: mov ecx, edi */ r_ecx = r_edi;
    /* 005aeffa: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5aefffu); f_007aaa30();
    /* 005aefff: jmp 0x5aeea7 */ goto L_005aeea7;
L_005af004:; BB(0x005af004);
    /* 005af004: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005af006: mov eax, 0x10 */ r_eax = 0x10u;
    /* 005af00b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005af012: mov ecx, edi */ r_ecx = r_edi;
    /* 005af014: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5af019u); f_0051f664();
    /* 005af019: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005af01b: mov ecx, edi */ r_ecx = r_edi;
    /* 005af01d: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5af023u); call_ind(t); }
    /* 005af023: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
    /* 005af02d: jmp 0x5aef53 */ goto L_005aef53;
}

void f_005aef0f(void)
{
    FN_ENTER(0x005aef0f);
    /* 005aef0f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aef13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aef14: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef16: call 0x5b1114 */ r_esp -= 4; W32(r_esp, 0x5aef1bu); f_005b1114();
    /* 005aef1b: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aef0f); r_esp += 12; return;
}

void f_005aef1d(void)
{
    FN_ENTER(0x005aef1d);
    /* 005aef1d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aef21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aef22: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef24: call 0x5b11cc */ r_esp -= 4; W32(r_esp, 0x5aef29u); f_005b11cc();
    /* 005aef29: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aef1d); r_esp += 12; return;
}

void f_005aef2b(void)
{
    FN_ENTER(0x005aef2b);
    /* 005aef2b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aef2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aef30: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef32: call 0x5b12a8 */ r_esp -= 4; W32(r_esp, 0x5aef37u); f_005b12a8();
    /* 005aef37: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aef2b); r_esp += 12; return;
}

void f_005aef39(void)
{
    FN_ENTER(0x005aef39);
    /* 005aef39: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aef3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aef3e: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef40: call 0x5b13a0 */ r_esp -= 4; W32(r_esp, 0x5aef45u); f_005b13a0();
    /* 005aef45: jmp 0x5aef53 */ goto L_005aef53;
L_005aef53:; BB(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aef39); r_esp += 12; return;
}

void f_005aef47(void)
{
    FN_ENTER(0x005aef47);
    /* 005aef47: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005aef4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005aef4c: mov ecx, edi */ r_ecx = r_edi;
    /* 005aef4e: call 0x5b232c */ r_esp -= 4; W32(r_esp, 0x5aef53u); f_005b232c();
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aef47); r_esp += 12; return;
}

void f_005aef53(void)
{
    FN_ENTER(0x005aef53);
    /* 005aef53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005aef54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005aef55: ret 8 */ FN_RET(0x005aef53); r_esp += 12; return;
}

