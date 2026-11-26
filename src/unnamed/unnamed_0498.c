#include "protos.h"

void f_00498114(void) /* sub_498114 */
{
    FN_ENTER(0x00498114);
    /* 00498114: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00498117: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049811a: call 0x49812c */ r_esp -= 4; W32(r_esp, 0x49811fu); f_0049812c();
    /* 0049811f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498122: ret  */ FN_RET(0x00498114); r_esp += 4; return;
}

void f_0049812c(void) /* sub_49812C */
{
    FN_ENTER(0x0049812c);
    /* 0049812c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049812d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049812e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00498131: mov edi, edx */ r_edi = r_edx;
    /* 00498133: mov ecx, eax */ r_ecx = r_eax;
    /* 00498135: movsx ebx, byte ptr [ecx] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ecx));
    /* 00498138: movsx eax, byte ptr [ecx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1u));
    /* 0049813c: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0049813f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00498142: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00498144: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00498146: movsx eax, byte ptr [ecx + 2] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x2u));
    /* 0049814a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049814c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0049814f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00498152: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00498156: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00498159: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049815b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049815d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049815f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00498163: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00498167: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498169: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0049816d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x498172u); f_0082dcbc();
    /* 00498172: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00498176: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00498178: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0049817a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x49817fu); f_0082ddd8();
    /* 0049817f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00498183: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00498185: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00498189: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 0049818c: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0049818f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498192: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498193: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498194: ret  */ FN_RET(0x0049812c); r_esp += 4; return;
}

void f_004981a0(void) /* sub_4981A0 */
{
    FN_ENTER(0x004981a0);
    /* 004981a0: movsx ecx, byte ptr [edx + 8] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x8u));
    /* 004981a4: mov dword ptr [eax + 0x440], ecx */ W32((u32)(r_eax+0x440u), r_ecx);
    /* 004981aa: movsx ecx, byte ptr [edx + 9] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x9u));
    /* 004981ae: mov dword ptr [eax + 0x41c], ecx */ W32((u32)(r_eax+0x41cu), r_ecx);
    /* 004981b4: movzx edx, byte ptr [edx + 0xa] */ r_edx = (u32)R8((u32)(r_edx+0xau));
    /* 004981b8: mov byte ptr [eax + 0x424], dl */ W8((u32)(r_eax+0x424u), (u8)r_edx);
    /* 004981be: ret  */ FN_RET(0x004981a0); r_esp += 4; return;
}

void f_0049823c(void) /* sub_49823C */
{
    FN_ENTER(0x0049823c);
    /* 0049823c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049823e: mov dword ptr [ecx + 0x510], eax */ W32((u32)(r_ecx+0x510u), r_eax);
    /* 00498244: mov dword ptr [ecx + 0x514], eax */ W32((u32)(r_ecx+0x514u), r_eax);
    /* 0049824a: mov dword ptr [ecx + 0x518], eax */ W32((u32)(r_ecx+0x518u), r_eax);
    /* 00498250: mov dword ptr [ecx + 0x51c], eax */ W32((u32)(r_ecx+0x51cu), r_eax);
    /* 00498256: mov dword ptr [ecx + 0x520], eax */ W32((u32)(r_ecx+0x520u), r_eax);
    /* 0049825c: mov dword ptr [ecx + 0x524], eax */ W32((u32)(r_ecx+0x524u), r_eax);
    /* 00498262: mov dword ptr [ecx + 0x528], eax */ W32((u32)(r_ecx+0x528u), r_eax);
    /* 00498268: mov dword ptr [ecx + 0x52c], eax */ W32((u32)(r_ecx+0x52cu), r_eax);
    /* 0049826e: mov dword ptr [ecx + 0x530], eax */ W32((u32)(r_ecx+0x530u), r_eax);
    /* 00498274: mov dword ptr [ecx + 0x534], eax */ W32((u32)(r_ecx+0x534u), r_eax);
    /* 0049827a: mov dword ptr [ecx + 0x538], eax */ W32((u32)(r_ecx+0x538u), r_eax);
    /* 00498280: mov dword ptr [ecx + 0x53c], eax */ W32((u32)(r_ecx+0x53cu), r_eax);
    /* 00498286: mov dword ptr [ecx + 0x540], eax */ W32((u32)(r_ecx+0x540u), r_eax);
    /* 0049828c: mov dword ptr [ecx + 0x544], eax */ W32((u32)(r_ecx+0x544u), r_eax);
    /* 00498292: mov dword ptr [ecx + 0x548], eax */ W32((u32)(r_ecx+0x548u), r_eax);
    /* 00498298: mov dword ptr [ecx + 0x54c], eax */ W32((u32)(r_ecx+0x54cu), r_eax);
    /* 0049829e: mov dword ptr [ecx + 0x550], eax */ W32((u32)(r_ecx+0x550u), r_eax);
    /* 004982a4: mov dword ptr [ecx + 0x554], eax */ W32((u32)(r_ecx+0x554u), r_eax);
    /* 004982aa: mov dword ptr [ecx + 0x558], eax */ W32((u32)(r_ecx+0x558u), r_eax);
    /* 004982b0: mov dword ptr [ecx + 0x55c], eax */ W32((u32)(r_ecx+0x55cu), r_eax);
    /* 004982b6: mov dword ptr [ecx + 0x560], eax */ W32((u32)(r_ecx+0x560u), r_eax);
    /* 004982bc: mov dword ptr [ecx + 0x564], eax */ W32((u32)(r_ecx+0x564u), r_eax);
    /* 004982c2: mov dword ptr [ecx + 0x568], eax */ W32((u32)(r_ecx+0x568u), r_eax);
    /* 004982c8: mov dword ptr [ecx + 0x56c], eax */ W32((u32)(r_ecx+0x56cu), r_eax);
    /* 004982ce: mov dword ptr [ecx + 0x570], eax */ W32((u32)(r_ecx+0x570u), r_eax);
    /* 004982d4: ret  */ FN_RET(0x0049823c); r_esp += 4; return;
}

void f_004982d8(void) /* sub_4982D8 */
{
    FN_ENTER(0x004982d8);
    /* 004982d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004982da: mov dword ptr [ecx + 0x500], eax */ W32((u32)(r_ecx+0x500u), r_eax);
    /* 004982e0: mov dword ptr [ecx + 0x504], eax */ W32((u32)(r_ecx+0x504u), r_eax);
    /* 004982e6: mov dword ptr [ecx + 0x508], eax */ W32((u32)(r_ecx+0x508u), r_eax);
    /* 004982ec: mov dword ptr [ecx + 0x50c], eax */ W32((u32)(r_ecx+0x50cu), r_eax);
    /* 004982f2: ret  */ FN_RET(0x004982d8); r_esp += 4; return;
}

void f_004982f4(void) /* sub_4982F4 */
{
    FN_ENTER(0x004982f4);
    /* 004982f4: mov dword ptr [ecx + 0x4f0], 0 */ W32((u32)(r_ecx+0x4f0u), 0x0u);
    /* 004982fe: mov dword ptr [ecx + 0x4f4], 0 */ W32((u32)(r_ecx+0x4f4u), 0x0u);
    /* 00498308: mov dword ptr [ecx + 0x4f8], 0x100 */ W32((u32)(r_ecx+0x4f8u), 0x100u);
    /* 00498312: mov dword ptr [ecx + 0x4fc], 0x14 */ W32((u32)(r_ecx+0x4fcu), 0x14u);
    /* 0049831c: ret  */ FN_RET(0x004982f4); r_esp += 4; return;
}

void f_00498320(void) /* sub_498320 */
{
    FN_ENTER(0x00498320);
    /* 00498320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498321: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498322: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00498323: mov eax, ecx */ r_eax = r_ecx;
    /* 00498325: mov edx, dword ptr [0x902760] */ r_edx = R32((u32)(0x902760u));
    /* 0049832b: mov dword ptr [eax + 0x444], edx */ W32((u32)(r_eax+0x444u), r_edx);
    /* 00498331: lea ecx, [eax + 0x44c] */ r_ecx = (u32)(r_eax+0x44cu);
    /* 00498337: mov edi, eax */ r_edi = r_eax;
    /* 00498339: mov edx, dword ptr [0x902764] */ r_edx = R32((u32)(0x902764u));
    /* 0049833f: mov dword ptr [eax + 0x448], edx */ W32((u32)(r_eax+0x448u), r_edx);
    /* 00498345: mov edx, dword ptr [0x902768] */ r_edx = R32((u32)(0x902768u));
    /* 0049834b: mov dword ptr [eax + 0x44c], edx */ W32((u32)(r_eax+0x44cu), r_edx);
    /* 00498351: mov esi, ecx */ r_esi = r_ecx;
    /* 00498353: mov edx, dword ptr [0x90276c] */ r_edx = R32((u32)(0x90276cu));
    /* 00498359: mov dword ptr [eax + 0x450], edx */ W32((u32)(r_eax+0x450u), r_edx);
    /* 0049835f: mov edx, dword ptr [0x902770] */ r_edx = R32((u32)(0x902770u));
    /* 00498365: mov dword ptr [eax + 0x454], edx */ W32((u32)(r_eax+0x454u), r_edx);
    /* 0049836b: mov edx, dword ptr [0x902774] */ r_edx = R32((u32)(0x902774u));
    /* 00498371: mov dword ptr [eax + 0x458], edx */ W32((u32)(r_eax+0x458u), r_edx);
    /* 00498377: mov edx, dword ptr [0x902778] */ r_edx = R32((u32)(0x902778u));
    /* 0049837d: mov dword ptr [eax + 0x45c], edx */ W32((u32)(r_eax+0x45cu), r_edx);
    /* 00498383: mov edx, dword ptr [0x90277c] */ r_edx = R32((u32)(0x90277cu));
    /* 00498389: mov dword ptr [eax + 0x460], edx */ W32((u32)(r_eax+0x460u), r_edx);
    /* 0049838f: mov edx, dword ptr [0x902780] */ r_edx = R32((u32)(0x902780u));
    /* 00498395: mov dword ptr [eax + 0x464], edx */ W32((u32)(r_eax+0x464u), r_edx);
    /* 0049839b: mov edx, dword ptr [0x902784] */ r_edx = R32((u32)(0x902784u));
    /* 004983a1: mov dword ptr [eax + 0x468], edx */ W32((u32)(r_eax+0x468u), r_edx);
    /* 004983a7: mov edx, dword ptr [0x902788] */ r_edx = R32((u32)(0x902788u));
    /* 004983ad: mov dword ptr [eax + 0x46c], edx */ W32((u32)(r_eax+0x46cu), r_edx);
    /* 004983b3: mov edx, dword ptr [0x90278c] */ r_edx = R32((u32)(0x90278cu));
    /* 004983b9: mov dword ptr [eax + 0x470], edx */ W32((u32)(r_eax+0x470u), r_edx);
    /* 004983bf: mov edx, dword ptr [0x902790] */ r_edx = R32((u32)(0x902790u));
    /* 004983c5: mov dword ptr [eax + 0x474], edx */ W32((u32)(r_eax+0x474u), r_edx);
    /* 004983cb: mov edx, dword ptr [0x902794] */ r_edx = R32((u32)(0x902794u));
    /* 004983d1: mov dword ptr [eax + 0x478], edx */ W32((u32)(r_eax+0x478u), r_edx);
    /* 004983d7: mov edx, dword ptr [0x902798] */ r_edx = R32((u32)(0x902798u));
    /* 004983dd: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 004983e3: mov edx, dword ptr [0x90279c] */ r_edx = R32((u32)(0x90279cu));
    /* 004983e9: mov dword ptr [eax + 0x480], edx */ W32((u32)(r_eax+0x480u), r_edx);
    /* 004983ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004983f1: mov ebx, edx */ r_ebx = r_edx;
L_004983f3:; BB(0x004983f3);
    /* 004983f3: mov eax, dword ptr [0x9027a0] */ r_eax = R32((u32)(0x9027a0u));
    /* 004983f8: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 004983ff: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00498401: mov eax, dword ptr [0x9027b4] */ r_eax = R32((u32)(0x9027b4u));
    /* 00498406: mov dword ptr [esi + 8], 0x3f000000 */ W32((u32)(r_esi+0x8u), 0x3f000000u);
    /* 0049840d: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00498410: mov dword ptr [esi + 0xc], 0 */ W32((u32)(r_esi+0xcu), 0x0u);
    /* 00498417: mov dword ptr [esi + 0x10], 0x3d888889 */ W32((u32)(r_esi+0x10u), 0x3d888889u);
    /* 0049841e: mov dword ptr [esi + 0x18], 0 */ W32((u32)(r_esi+0x18u), 0x0u);
    /* 00498425: mov ecx, dword ptr [edi + 0x404] */ r_ecx = R32((u32)(r_edi+0x404u));
    /* 0049842b: push dword ptr [ebx + 0x9a6de8] */ { u32 v = R32((u32)(r_ebx+0x9a6de8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498431: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x498436u); f_005b8638();
    /* 00498436: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00498439: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0049843b: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049843e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00498441: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00498444: jl 0x4983f3 */ if ((fS!=fO)) goto L_004983f3;
L_00498446:; BB(0x00498446);
    /* 00498446: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498449: ret  */ FN_RET(0x00498320); r_esp += 4; return;
}

void f_0049844c(void) /* sub_49844C */
{
    FN_ENTER(0x0049844c);
    /* 0049844c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0049844d: mov edi, ecx */ r_edi = r_ecx;
    /* 0049844f: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00498455: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00498458: jge 0x49846a */ if ((fS==fO)) goto L_0049846a;
L_0049845a:; BB(0x0049845a);
    /* 0049845a: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0049845c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049845d: mov ecx, edi */ r_ecx = r_edi;
    /* 0049845f: call 0x496b94 */ r_esp -= 4; W32(r_esp, 0x498464u); f_00496b94();
    /* 00498464: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
L_0049846a:; BB(0x0049846a);
    /* 0049846a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049846d: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00498473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498475: jl 0x498479 */ if ((fS!=fO)) goto L_00498479;
L_00498477:; BB(0x00498477);
    /* 00498477: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498478: ret  */ FN_RET(0x0049844c); r_esp += 4; return;
L_00498479:; BB(0x00498479);
    /* 00498479: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049847b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049847d: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498482u); f_00494c40();
    /* 00498482: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498483: ret  */ FN_RET(0x0049844c); r_esp += 4; return;
}

void f_00498484(void) /* sub_498484 */
{
    FN_ENTER(0x00498484);
    /* 00498484: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498485: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00498486: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00498489: mov edi, ecx */ r_edi = r_ecx;
    /* 0049848b: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00498491: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498493: jne 0x498529 */ if (!fZ) goto L_00498529;
L_00498499:; BB(0x00498499);
    /* 00498499: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 0049849f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004984a1: jne 0x49852f */ if (!fZ) goto L_0049852f;
L_004984a7:; BB(0x004984a7);
    /* 004984a7: mov ecx, edi */ r_ecx = r_edi;
    /* 004984a9: call 0x496910 */ r_esp -= 4; W32(r_esp, 0x4984aeu); f_00496910();
    /* 004984ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004984b0: je 0x4984c1 */ if (fZ) goto L_004984c1;
L_004984b2:; BB(0x004984b2);
    /* 004984b2: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 004984b4: mov ecx, edi */ r_ecx = r_edi;
    /* 004984b6: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x4984bbu); f_00494ae0();
    /* 004984bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004984be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004984bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004984c0: ret  */ FN_RET(0x00498484); r_esp += 4; return;
L_004984c1:; BB(0x004984c1);
    /* 004984c1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004984c3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004984c5: mov ecx, edi */ r_ecx = r_edi;
    /* 004984c7: call 0x496b54 */ r_esp -= 4; W32(r_esp, 0x4984ccu); f_00496b54();
    /* 004984cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004984ce: jne 0x4984dd */ if (!fZ) goto L_004984dd;
L_004984d0:; BB(0x004984d0);
    /* 004984d0: mov ecx, edi */ r_ecx = r_edi;
    /* 004984d2: call 0x494290 */ r_esp -= 4; W32(r_esp, 0x4984d7u); f_00494290();
    /* 004984d7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004984da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004984db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004984dc: ret  */ FN_RET(0x00498484); r_esp += 4; return;
L_004984dd:; BB(0x004984dd);
    /* 004984dd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004984df: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004984e1: mov ecx, edi */ r_ecx = r_edi;
    /* 004984e3: call 0x496b54 */ r_esp -= 4; W32(r_esp, 0x4984e8u); f_00496b54();
    /* 004984e8: mov ebx, eax */ r_ebx = r_eax;
    /* 004984ea: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 004984ec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004984ee: mov ecx, edi */ r_ecx = r_edi;
    /* 004984f0: call 0x496b54 */ r_esp -= 4; W32(r_esp, 0x4984f5u); f_00496b54();
    /* 004984f5: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 004984f7: je 0x498515 */ if (fZ) goto L_00498515;
L_004984f9:; BB(0x004984f9);
    /* 004984f9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4984feu); f_008587a5();
    /* 004984fe: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00498501: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00498504: fdiv dword ptr [0x902d04] */ ST(0) = ST(0) / R_F32((u32)(0x902d04u));
    /* 0049850a: fcomp dword ptr [0x902ca0] */ fx_compare(ST(0), R_F32((u32)(0x902ca0u))); FPOP();
    /* 00498510: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00498512: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00498513: jae 0x498522 */ if (!fC) goto L_00498522;
L_00498515:; BB(0x00498515);
    /* 00498515: mov ecx, edi */ r_ecx = r_edi;
    /* 00498517: call 0x494678 */ r_esp -= 4; W32(r_esp, 0x49851cu); f_00494678();
    /* 0049851c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049851f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498520: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498521: ret  */ FN_RET(0x00498484); r_esp += 4; return;
L_00498522:; BB(0x00498522);
    /* 00498522: mov ecx, edi */ r_ecx = r_edi;
    /* 00498524: call 0x494290 */ r_esp -= 4; W32(r_esp, 0x498529u); f_00494290();
L_00498529:; BB(0x00498529);
    /* 00498529: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049852c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049852d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049852e: ret  */ FN_RET(0x00498484); r_esp += 4; return;
L_0049852f:; BB(0x0049852f);
    /* 0049852f: mov ecx, edi */ r_ecx = r_edi;
    /* 00498531: call 0x496880 */ r_esp -= 4; W32(r_esp, 0x498536u); f_00496880();
    /* 00498536: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498538: je 0x498547 */ if (fZ) goto L_00498547;
L_0049853a:; BB(0x0049853a);
    /* 0049853a: mov ecx, edi */ r_ecx = r_edi;
    /* 0049853c: call 0x494b20 */ r_esp -= 4; W32(r_esp, 0x498541u); f_00494b20();
    /* 00498541: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498544: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498545: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498546: ret  */ FN_RET(0x00498484); r_esp += 4; return;
L_00498547:; BB(0x00498547);
    /* 00498547: mov ecx, edi */ r_ecx = r_edi;
    /* 00498549: call 0x494678 */ r_esp -= 4; W32(r_esp, 0x49854eu); f_00494678();
    /* 0049854e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498551: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498552: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498553: ret  */ FN_RET(0x00498484); r_esp += 4; return;
}

void f_00498554(void)
{
    FN_ENTER(0x00498554);
    /* 00498554: mov eax, dword ptr [ecx + 0x418] */ r_eax = R32((u32)(r_ecx+0x418u));
    /* 0049855a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049855d: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 00498563: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498565: jl 0x498568 */ if ((fS!=fO)) goto L_00498568;
L_00498567:; BB(0x00498567);
    /* 00498567: ret  */ FN_RET(0x00498554); r_esp += 4; return;
L_00498568:; BB(0x00498568);
    /* 00498568: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0049856a: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x49856fu); f_00494c40();
    /* 0049856f: ret  */ FN_RET(0x00498554); r_esp += 4; return;
}

void f_00498570(void)
{
    FN_ENTER(0x00498570);
    /* 00498570: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498571: mov edi, ecx */ r_edi = r_ecx;
    /* 00498573: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498579: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049857f: mov ecx, edi */ r_ecx = r_edi;
    /* 00498581: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498586u); f_00496d4c();
    /* 00498586: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 0049858c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049858f: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00498595: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498597: jl 0x49859b */ if ((fS!=fO)) goto L_0049859b;
L_00498599:; BB(0x00498599);
    /* 00498599: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049859a: ret  */ FN_RET(0x00498570); r_esp += 4; return;
L_0049859b:; BB(0x0049859b);
    /* 0049859b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049859d: mov ecx, edi */ r_ecx = r_edi;
    /* 0049859f: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x4985a4u); f_00494c40();
    /* 004985a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004985a5: ret  */ FN_RET(0x00498570); r_esp += 4; return;
}

void f_004985a8(void) /* sub_4985A8 */
{
    FN_ENTER(0x004985a8);
    /* 004985a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004985a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004985ab: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 004985b1: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004985b4: je 0x4985d0 */ if (fZ) goto L_004985d0;
L_004985b6:; BB(0x004985b6);
    /* 004985b6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004985b9: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 004985bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004985c1: jl 0x4985c5 */ if ((fS!=fO)) goto L_004985c5;
L_004985c3:; BB(0x004985c3);
    /* 004985c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004985c4: ret  */ FN_RET(0x004985a8); r_esp += 4; return;
L_004985c5:; BB(0x004985c5);
    /* 004985c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004985c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004985c9: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x4985ceu); f_00494c40();
    /* 004985ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004985cf: ret  */ FN_RET(0x004985a8); r_esp += 4; return;
L_004985d0:; BB(0x004985d0);
    /* 004985d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004985d2: call 0x4960a4 */ r_esp -= 4; W32(r_esp, 0x4985d7u); f_004960a4();
    /* 004985d7: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 004985dd: jmp 0x4985b6 */ goto L_004985b6;
}

void f_004985e0(void)
{
    FN_ENTER(0x004985e0);
    /* 004985e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004985e1: mov esi, ecx */ r_esi = r_ecx;
    /* 004985e3: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 004985e9: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 004985ef: mov ecx, esi */ r_ecx = r_esi;
    /* 004985f1: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x4985f6u); f_00496d4c();
    /* 004985f6: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 004985fc: cmp eax, 0x3e */ {  u32 a = r_eax; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004985ff: je 0x49860b */ if (fZ) goto L_0049860b;
L_00498601:; BB(0x00498601);
    /* 00498601: cmp eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498604: je 0x49860b */ if (fZ) goto L_0049860b;
L_00498606:; BB(0x00498606);
    /* 00498606: cmp eax, 0x52 */ {  u32 a = r_eax; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498609: jne 0x498618 */ if (!fZ) goto L_00498618;
L_0049860b:; BB(0x0049860b);
    /* 0049860b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049860d: call 0x4960a4 */ r_esp -= 4; W32(r_esp, 0x498612u); f_004960a4();
    /* 00498612: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
L_00498618:; BB(0x00498618);
    /* 00498618: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049861b: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498621: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498623: jl 0x498627 */ if ((fS!=fO)) goto L_00498627;
L_00498625:; BB(0x00498625);
    /* 00498625: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498626: ret  */ FN_RET(0x004985e0); r_esp += 4; return;
L_00498627:; BB(0x00498627);
    /* 00498627: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498629: mov ecx, esi */ r_ecx = r_esi;
    /* 0049862b: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498630u); f_00494c40();
    /* 00498630: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498631: ret  */ FN_RET(0x004985e0); r_esp += 4; return;
}

void f_00498634(void)
{
    FN_ENTER(0x00498634);
    /* 00498634: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498635: mov edi, ecx */ r_edi = r_ecx;
    /* 00498637: mov ecx, edi */ r_ecx = r_edi;
    /* 00498639: call 0x494f58 */ r_esp -= 4; W32(r_esp, 0x49863eu); f_00494f58();
    /* 0049863e: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00498644: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498647: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 0049864d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049864f: jge 0x498667 */ if ((fS==fO)) goto L_00498667;
L_00498651:; BB(0x00498651);
    /* 00498651: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00498657: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049865a: je 0x498669 */ if (fZ) goto L_00498669;
L_0049865c:; BB(0x0049865c);
    /* 0049865c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049865f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498660: mov ecx, edi */ r_ecx = r_edi;
    /* 00498662: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498667u); f_00494c40();
L_00498667:; BB(0x00498667);
    /* 00498667: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498668: ret  */ FN_RET(0x00498634); r_esp += 4; return;
L_00498669:; BB(0x00498669);
    /* 00498669: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049866b: mov ecx, edi */ r_ecx = r_edi;
    /* 0049866d: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498672u); f_00494c40();
    /* 00498672: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498673: ret  */ FN_RET(0x00498634); r_esp += 4; return;
}

void f_00498674(void)
{
    FN_ENTER(0x00498674);
    /* 00498674: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498675: mov esi, ecx */ r_esi = r_ecx;
    /* 00498677: mov ecx, esi */ r_ecx = r_esi;
    /* 00498679: call 0x494f58 */ r_esp -= 4; W32(r_esp, 0x49867eu); f_00494f58();
    /* 0049867e: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498684: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049868a: mov ecx, esi */ r_ecx = r_esi;
    /* 0049868c: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498691u); f_00496d4c();
    /* 00498691: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498697: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049869a: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 004986a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004986a2: jge 0x4986ba */ if ((fS==fO)) goto L_004986ba;
L_004986a4:; BB(0x004986a4);
    /* 004986a4: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 004986aa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004986ad: je 0x4986bc */ if (fZ) goto L_004986bc;
L_004986af:; BB(0x004986af);
    /* 004986af: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004986b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004986b3: mov ecx, esi */ r_ecx = r_esi;
    /* 004986b5: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x4986bau); f_00494c40();
L_004986ba:; BB(0x004986ba);
    /* 004986ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004986bb: ret  */ FN_RET(0x00498674); r_esp += 4; return;
L_004986bc:; BB(0x004986bc);
    /* 004986bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004986be: mov ecx, esi */ r_ecx = r_esi;
    /* 004986c0: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x4986c5u); f_00494c40();
    /* 004986c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004986c6: ret  */ FN_RET(0x00498674); r_esp += 4; return;
}

void f_004986c8(void) /* sub_4986C8 */
{
    FN_ENTER(0x004986c8);
    /* 004986c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004986c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004986cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004986cd: call 0x495508 */ r_esp -= 4; W32(r_esp, 0x4986d2u); f_00495508();
    /* 004986d2: push dword ptr [ebx + 0x414] */ { u32 v = R32((u32)(r_ebx+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 004986d8: push dword ptr [ebx + 0x418] */ { u32 v = R32((u32)(r_ebx+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 004986de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004986e0: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x4986e5u); f_00496d4c();
    /* 004986e5: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 004986eb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004986ee: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 004986f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004986f6: jge 0x498729 */ if ((fS==fO)) goto L_00498729;
L_004986f8:; BB(0x004986f8);
    /* 004986f8: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 004986fe: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498701: jne 0x49870e */ if (!fZ) goto L_0049870e;
L_00498703:; BB(0x00498703);
    /* 00498703: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00498705: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498707: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x49870cu); f_00494c40();
    /* 0049870c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049870d: ret  */ FN_RET(0x004986c8); r_esp += 4; return;
L_0049870e:; BB(0x0049870e);
    /* 0049870e: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498711: jne 0x49871e */ if (!fZ) goto L_0049871e;
L_00498713:; BB(0x00498713);
    /* 00498713: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00498715: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498717: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x49871cu); f_00494c40();
    /* 0049871c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049871d: ret  */ FN_RET(0x004986c8); r_esp += 4; return;
L_0049871e:; BB(0x0049871e);
    /* 0049871e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498721: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498722: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498724: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498729u); f_00494c40();
L_00498729:; BB(0x00498729);
    /* 00498729: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049872a: ret  */ FN_RET(0x004986c8); r_esp += 4; return;
}

void f_0049872c(void)
{
    FN_ENTER(0x0049872c);
    /* 0049872c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049872d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049872f: mov ecx, esi */ r_ecx = r_esi;
    /* 00498731: call 0x495684 */ r_esp -= 4; W32(r_esp, 0x498736u); f_00495684();
    /* 00498736: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0049873c: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498742: mov ecx, esi */ r_ecx = r_esi;
    /* 00498744: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498749u); f_00496d4c();
    /* 00498749: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 0049874f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498752: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498758: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049875a: jl 0x49875e */ if ((fS!=fO)) goto L_0049875e;
L_0049875c:; BB(0x0049875c);
    /* 0049875c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049875d: ret  */ FN_RET(0x0049872c); r_esp += 4; return;
L_0049875e:; BB(0x0049875e);
    /* 0049875e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498760: mov ecx, esi */ r_ecx = r_esi;
    /* 00498762: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498767u); f_00494c40();
    /* 00498767: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498768: ret  */ FN_RET(0x0049872c); r_esp += 4; return;
}

void f_0049876c(void)
{
    FN_ENTER(0x0049876c);
    /* 0049876c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0049876d: mov esi, ecx */ r_esi = r_ecx;
    /* 0049876f: mov ecx, dword ptr [esi + 0x4a4] */ r_ecx = R32((u32)(r_esi+0x4a4u));
    /* 00498775: mov edx, dword ptr [esi + 0x4a8] */ r_edx = R32((u32)(r_esi+0x4a8u));
    /* 0049877b: lea eax, [ecx + edx + 0x1e] */ r_eax = (u32)(r_ecx+r_edx+0x1eu);
    /* 0049877f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00498781: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 00498787: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00498789: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049878b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049878d: je 0x4987ad */ if (fZ) goto L_004987ad;
L_0049878f:; BB(0x0049878f);
    /* 0049878f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498791: jne 0x4987bc */ if (!fZ) goto L_004987bc;
L_00498793:; BB(0x00498793);
    /* 00498793: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00498795: mov ecx, esi */ r_ecx = r_esi;
    /* 00498797: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x49879cu); f_00497104();
    /* 0049879c: push 0x13 */ { u32 v = 0x13u; r_esp -= 4; W32(r_esp, v); }
    /* 0049879e: mov ecx, esi */ r_ecx = r_esi;
    /* 004987a0: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x4987a5u); f_00494ebc();
    /* 004987a5: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 004987ab: jmp 0x4987bc */ goto L_004987bc;
L_004987ad:; BB(0x004987ad);
    /* 004987ad: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004987af: mov ecx, esi */ r_ecx = r_esi;
    /* 004987b1: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x4987b6u); f_00494ebc();
    /* 004987b6: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
L_004987bc:; BB(0x004987bc);
    /* 004987bc: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 004987c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004987c3: mov ecx, esi */ r_ecx = r_esi;
    /* 004987c5: call 0x496f74 */ r_esp -= 4; W32(r_esp, 0x4987cau); f_00496f74();
    /* 004987ca: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 004987d0: cmp eax, dword ptr [esi + 0x4a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x4a8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004987d6: jg 0x4987ed */ if ((!fZ&&fS==fO)) goto L_004987ed;
L_004987d8:; BB(0x004987d8);
    /* 004987d8: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004987db: jl 0x4987ed */ if ((fS!=fO)) goto L_004987ed;
L_004987dd:; BB(0x004987dd);
    /* 004987dd: mov ecx, esi */ r_ecx = r_esi;
    /* 004987df: call 0x4967ec */ r_esp -= 4; W32(r_esp, 0x4987e4u); f_004967ec();
    /* 004987e4: mov ecx, esi */ r_ecx = r_esi;
    /* 004987e6: call 0x49592c */ r_esp -= 4; W32(r_esp, 0x4987ebu); f_0049592c();
    /* 004987eb: jmp 0x4987f4 */ goto L_004987f4;
L_004987ed:; BB(0x004987ed);
    /* 004987ed: mov ecx, esi */ r_ecx = r_esi;
    /* 004987ef: call 0x496810 */ r_esp -= 4; W32(r_esp, 0x4987f4u); f_00496810();
L_004987f4:; BB(0x004987f4);
    /* 004987f4: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 004987fa: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004987fd: jl 0x49882f */ if ((fS!=fO)) goto L_0049882f;
L_004987ff:; BB(0x004987ff);
    /* 004987ff: fld dword ptr [esi + 0x4e4] */ FPUSH(R_F32((u32)(r_esi+0x4e4u)));
    /* 00498805: fcomp dword ptr [0x902d00] */ fx_compare(ST(0), R_F32((u32)(0x902d00u))); FPOP();
    /* 0049880b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049880d: mov edx, 0x3c0 */ r_edx = 0x3c0u;
    /* 00498812: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00498813: jbe 0x49881a */ if ((fC||fZ)) goto L_0049881a;
L_00498815:; BB(0x00498815);
    /* 00498815: mov edx, 0x3c1 */ r_edx = 0x3c1u;
L_0049881a:; BB(0x0049881a);
    /* 0049881a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049881c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049881e: lea eax, [esi + 0x5d4] */ r_eax = (u32)(r_esi+0x5d4u);
    /* 00498824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498825: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00498827: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x49882cu); f_008144b0();
    /* 0049882c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0049882f:; BB(0x0049882f);
    /* 0049882f: fld dword ptr [esi + 0x4e4] */ FPUSH(R_F32((u32)(r_esi+0x4e4u)));
    /* 00498835: fcomp dword ptr [0x902d00] */ fx_compare(ST(0), R_F32((u32)(0x902d00u))); FPOP();
    /* 0049883b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049883d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0049883e: jbe 0x498849 */ if ((fC||fZ)) goto L_00498849;
L_00498840:; BB(0x00498840);
    /* 00498840: mov ecx, esi */ r_ecx = r_esi;
    /* 00498842: call 0x497130 */ r_esp -= 4; W32(r_esp, 0x498847u); f_00497130();
    /* 00498847: jmp 0x498850 */ goto L_00498850;
L_00498849:; BB(0x00498849);
    /* 00498849: mov ecx, esi */ r_ecx = r_esi;
    /* 0049884b: call 0x497138 */ r_esp -= 4; W32(r_esp, 0x498850u); f_00497138();
L_00498850:; BB(0x00498850);
    /* 00498850: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498856: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498859: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 0049885f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498861: jl 0x498865 */ if ((fS!=fO)) goto L_00498865;
L_00498863:; BB(0x00498863);
    /* 00498863: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498864: ret  */ FN_RET(0x0049876c); r_esp += 4; return;
L_00498865:; BB(0x00498865);
    /* 00498865: mov ecx, esi */ r_ecx = r_esi;
    /* 00498867: call 0x496834 */ r_esp -= 4; W32(r_esp, 0x49886cu); f_00496834();
    /* 0049886c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049886e: mov ecx, esi */ r_ecx = r_esi;
    /* 00498870: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498875u); f_00494c40();
    /* 00498875: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498876: ret  */ FN_RET(0x0049876c); r_esp += 4; return;
}

void f_00498878(void)
{
    FN_ENTER(0x00498878);
    /* 00498878: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498879: mov edi, ecx */ r_edi = r_ecx;
    /* 0049887b: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 00498881: mov edx, dword ptr [edi + 0x418] */ r_edx = R32((u32)(r_edi+0x418u));
    /* 00498887: add eax, -0xf */ {  u32 a = r_eax; u32 b = 0xfffffff1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049888a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049888c: jl 0x49889a */ if ((fS!=fO)) goto L_0049889a;
L_0049888e:; BB(0x0049888e);
    /* 0049888e: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00498890: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00498892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00498893: mov ecx, edi */ r_ecx = r_edi;
    /* 00498895: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x49889au); f_00496d4c();
L_0049889a:; BB(0x0049889a);
    /* 0049889a: mov ecx, edi */ r_ecx = r_edi;
    /* 0049889c: call 0x496858 */ r_esp -= 4; W32(r_esp, 0x4988a1u); f_00496858();
    /* 004988a1: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 004988a7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004988aa: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004988b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004988b2: jl 0x4988b6 */ if ((fS!=fO)) goto L_004988b6;
L_004988b4:; BB(0x004988b4);
    /* 004988b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004988b5: ret  */ FN_RET(0x00498878); r_esp += 4; return;
L_004988b6:; BB(0x004988b6);
    /* 004988b6: mov ecx, edi */ r_ecx = r_edi;
    /* 004988b8: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x4988bdu); f_00497e20();
    /* 004988bd: mov eax, 1 */ r_eax = 0x1u;
    /* 004988c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004988c3: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 004988c9: mov ecx, edi */ r_ecx = r_edi;
    /* 004988cb: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x4988d0u); f_00494c40();
    /* 004988d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004988d1: ret  */ FN_RET(0x00498878); r_esp += 4; return;
}

void f_004988d4(void)
{
    FN_ENTER(0x004988d4);
    /* 004988d4: mov eax, dword ptr [ecx + 0x418] */ r_eax = R32((u32)(r_ecx+0x418u));
    /* 004988da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004988dc: jne 0x4988e5 */ if (!fZ) goto L_004988e5;
L_004988de:; BB(0x004988de);
    /* 004988de: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004988e0: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x4988e5u); f_00494ae0();
L_004988e5:; BB(0x004988e5);
    /* 004988e5: ret  */ FN_RET(0x004988d4); r_esp += 4; return;
}

void f_004988e8(void)
{
    FN_ENTER(0x004988e8);
    /* 004988e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004988e9: mov esi, ecx */ r_esi = r_ecx;
    /* 004988eb: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 004988f1: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 004988f7: mov ecx, esi */ r_ecx = r_esi;
    /* 004988f9: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x4988feu); f_00496d4c();
    /* 004988fe: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00498901: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00498903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498905: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00498906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498907: push 0x3c3 */ { u32 v = 0x3c3u; r_esp -= 4; W32(r_esp, v); }
    /* 0049890c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x498911u); f_008144b0();
    /* 00498911: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00498914: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 0049891a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049891d: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498923: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498925: jl 0x498929 */ if ((fS!=fO)) goto L_00498929;
L_00498927:; BB(0x00498927);
    /* 00498927: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498928: ret  */ FN_RET(0x004988e8); r_esp += 4; return;
L_00498929:; BB(0x00498929);
    /* 00498929: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0049892b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049892d: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498932u); f_00494c40();
    /* 00498932: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498933: ret  */ FN_RET(0x004988e8); r_esp += 4; return;
}

void f_00498934(void)
{
    FN_ENTER(0x00498934);
    /* 00498934: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498935: mov esi, ecx */ r_esi = r_ecx;
    /* 00498937: fild dword ptr [esi + 0x418] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x418u)));
    /* 0049893d: fild dword ptr [esi + 0x414] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x414u)));
    /* 00498943: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00498945: fcomp dword ptr [0x902ca4] */ fx_compare(ST(0), R_F32((u32)(0x902ca4u))); FPOP();
    /* 0049894b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0049894d: mov edx, dword ptr [esi + 0x418] */ r_edx = R32((u32)(r_esi+0x418u));
    /* 00498953: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00498954: jae 0x498967 */ if (!fC) goto L_00498967;
L_00498956:; BB(0x00498956);
    /* 00498956: mov ecx, esi */ r_ecx = r_esi;
    /* 00498958: call 0x4968ac */ r_esp -= 4; W32(r_esp, 0x49895du); f_004968ac();
    /* 0049895d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049895f: jne 0x49898c */ if (!fZ) goto L_0049898c;
L_00498961:; BB(0x00498961);
    /* 00498961: mov edx, dword ptr [esi + 0x418] */ r_edx = R32((u32)(r_esi+0x418u));
L_00498967:; BB(0x00498967);
    /* 00498967: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498969: jne 0x49898a */ if (!fZ) goto L_0049898a;
L_0049896b:; BB(0x0049896b);
    /* 0049896b: mov ecx, esi */ r_ecx = r_esi;
    /* 0049896d: call 0x496840 */ r_esp -= 4; W32(r_esp, 0x498972u); f_00496840();
    /* 00498972: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498974: je 0x498981 */ if (fZ) goto L_00498981;
L_00498976:; BB(0x00498976);
    /* 00498976: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00498978: mov ecx, esi */ r_ecx = r_esi;
    /* 0049897a: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x49897fu); f_00494ae0();
    /* 0049897f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498980: ret  */ FN_RET(0x00498934); r_esp += 4; return;
L_00498981:; BB(0x00498981);
    /* 00498981: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00498983: mov ecx, esi */ r_ecx = r_esi;
    /* 00498985: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x49898au); f_00494ae0();
L_0049898a:; BB(0x0049898a);
    /* 0049898a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0049898b: ret  */ FN_RET(0x00498934); r_esp += 4; return;
L_0049898c:; BB(0x0049898c);
    /* 0049898c: mov ecx, esi */ r_ecx = r_esi;
    /* 0049898e: call 0x494290 */ r_esp -= 4; W32(r_esp, 0x498993u); f_00494290();
    /* 00498993: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498994: ret  */ FN_RET(0x00498934); r_esp += 4; return;
}

void f_00498998(void)
{
    FN_ENTER(0x00498998);
    /* 00498998: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498999: mov esi, ecx */ r_esi = r_ecx;
    /* 0049899b: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0049899e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004989a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004989a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004989a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004989a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004989a4: push 0x3c3 */ { u32 v = 0x3c3u; r_esp -= 4; W32(r_esp, v); }
    /* 004989a9: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4989aeu); f_008144b0();
    /* 004989ae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004989b1: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 004989b7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004989ba: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 004989c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004989c2: jl 0x4989c6 */ if ((fS!=fO)) goto L_004989c6;
L_004989c4:; BB(0x004989c4);
    /* 004989c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004989c5: ret  */ FN_RET(0x00498998); r_esp += 4; return;
L_004989c6:; BB(0x004989c6);
    /* 004989c6: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 004989c8: mov ecx, esi */ r_ecx = r_esi;
    /* 004989ca: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x4989cfu); f_00494c40();
    /* 004989cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004989d0: ret  */ FN_RET(0x00498998); r_esp += 4; return;
}

void f_004989ad(void)
{
    FN_ENTER(0x004989ad);
    /* 004989ad: add byte ptr [ebx - 0x7974eb3c], al */ { u32 ad = (u32)(r_ebx+0x868b14c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 004989b3: sbb byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 004989b6: add byte ptr [ebx - 0x79760040], al */ { u32 ad = (u32)(r_ebx+0x8689ffc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 004989bc: sbb byte ptr [eax + eax], al */ { u32 ad = (u32)(r_eax+r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 004989bf: add byte ptr [ebp + 0x5e027cc0], al */ { u32 ad = (u32)(r_ebp+0x5e027cc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004989c5: ret  */ FN_RET(0x004989ad); r_esp += 4; return;
}

void f_004989d4(void)
{
    FN_ENTER(0x004989d4);
    /* 004989d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004989d5: mov edi, ecx */ r_edi = r_ecx;
    /* 004989d7: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 004989dd: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 004989e3: mov ecx, edi */ r_ecx = r_edi;
    /* 004989e5: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x4989eau); f_00496d4c();
    /* 004989ea: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 004989f0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004989f3: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 004989f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004989fb: jl 0x4989ff */ if ((fS!=fO)) goto L_004989ff;
L_004989fd:; BB(0x004989fd);
    /* 004989fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004989fe: ret  */ FN_RET(0x004989d4); r_esp += 4; return;
L_004989ff:; BB(0x004989ff);
    /* 004989ff: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 00498a01: mov ecx, edi */ r_ecx = r_edi;
    /* 00498a03: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498a08u); f_00494c40();
    /* 00498a08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498a09: ret  */ FN_RET(0x004989d4); r_esp += 4; return;
}

void f_00498a0c(void)
{
    FN_ENTER(0x00498a0c);
    /* 00498a0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498a0d: mov esi, ecx */ r_esi = r_ecx;
    /* 00498a0f: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498a15: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498a1b: mov ecx, esi */ r_ecx = r_esi;
    /* 00498a1d: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498a22u); f_00496d4c();
    /* 00498a22: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498a28: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498a2b: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498a31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498a33: jl 0x498a37 */ if ((fS!=fO)) goto L_00498a37;
L_00498a35:; BB(0x00498a35);
    /* 00498a35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498a36: ret  */ FN_RET(0x00498a0c); r_esp += 4; return;
L_00498a37:; BB(0x00498a37);
    /* 00498a37: movzx eax, byte ptr [esi + 0x424] */ r_eax = (u32)R8((u32)(r_esi+0x424u));
    /* 00498a3e: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00498a41: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00498a43: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498a46: mov ecx, esi */ r_ecx = r_esi;
    /* 00498a48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498a49: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498a4eu); f_00494c40();
    /* 00498a4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498a4f: ret  */ FN_RET(0x00498a0c); r_esp += 4; return;
}

void f_00498a50(void)
{
    FN_ENTER(0x00498a50);
    /* 00498a50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498a51: mov edi, ecx */ r_edi = r_ecx;
    /* 00498a53: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00498a59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498a5b: jne 0x498a6d */ if (!fZ) goto L_00498a6d;
L_00498a5d:; BB(0x00498a5d);
    /* 00498a5d: call 0x48e134 */ r_esp -= 4; W32(r_esp, 0x498a62u); f_0048e134();
    /* 00498a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498a64: je 0x498a6d */ if (fZ) goto L_00498a6d;
L_00498a66:; BB(0x00498a66);
    /* 00498a66: mov ecx, edi */ r_ecx = r_edi;
    /* 00498a68: call 0x4945ec */ r_esp -= 4; W32(r_esp, 0x498a6du); f_004945ec();
L_00498a6d:; BB(0x00498a6d);
    /* 00498a6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498a6e: ret  */ FN_RET(0x00498a50); r_esp += 4; return;
}

void f_00498a70(void)
{
    FN_ENTER(0x00498a70);
    /* 00498a70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498a71: mov esi, ecx */ r_esi = r_ecx;
    /* 00498a73: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498a79: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498a7f: mov ecx, esi */ r_ecx = r_esi;
    /* 00498a81: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498a86u); f_00496d4c();
    /* 00498a86: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498a8c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498a8f: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498a97: jl 0x498a9b */ if ((fS!=fO)) goto L_00498a9b;
L_00498a99:; BB(0x00498a99);
    /* 00498a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498a9a: ret  */ FN_RET(0x00498a70); r_esp += 4; return;
L_00498a9b:; BB(0x00498a9b);
    /* 00498a9b: call 0x48e134 */ r_esp -= 4; W32(r_esp, 0x498aa0u); f_0048e134();
    /* 00498aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498aa2: jne 0x498aad */ if (!fZ) goto L_00498aad;
L_00498aa4:; BB(0x00498aa4);
    /* 00498aa4: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 00498aa6: mov ecx, esi */ r_ecx = r_esi;
    /* 00498aa8: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498aadu); f_00494c40();
L_00498aad:; BB(0x00498aad);
    /* 00498aad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498aae: ret  */ FN_RET(0x00498a70); r_esp += 4; return;
}

void f_00498ab0(void) /* sub_498AB0 */
{
    FN_ENTER(0x00498ab0);
    /* 00498ab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498ab1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00498ab4: mov edi, ecx */ r_edi = r_ecx;
    /* 00498ab6: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498abc: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498ac2: mov ecx, edi */ r_ecx = r_edi;
    /* 00498ac4: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498ac9u); f_00496d4c();
    /* 00498ac9: fild dword ptr [edi + 0x414] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x414u)));
    /* 00498acf: fadd dword ptr [0x902cfc] */ ST(0) = ST(0) + R_F32((u32)(0x902cfcu));
    /* 00498ad5: mov edx, dword ptr [edi + 0x418] */ r_edx = R32((u32)(r_edi+0x418u));
    /* 00498adb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00498ade: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00498ae2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00498ae7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00498aeb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00498aef: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00498af3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00498af6: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498afa: jne 0x498b06 */ if (!fZ) goto L_00498b06;
L_00498afc:; BB(0x00498afc);
    /* 00498afc: mov dword ptr [edi + 0x440], 0 */ W32((u32)(r_edi+0x440u), 0x0u);
L_00498b06:; BB(0x00498b06);
    /* 00498b06: movzx eax, byte ptr [0xa473a4] */ r_eax = (u32)R8((u32)(0xa473a4u));
    /* 00498b0d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00498b0f: jne 0x498b25 */ if (!fZ) goto L_00498b25;
L_00498b11:; BB(0x00498b11);
    /* 00498b11: mov dword ptr [0xa473a8], 0x43640000 */ W32((u32)(0xa473a8u), 0x43640000u);
    /* 00498b1b: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00498b20: mov byte ptr [0xa473a4], al */ W8((u32)(0xa473a4u), (u8)r_eax);
L_00498b25:; BB(0x00498b25);
    /* 00498b25: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00498b28: fcom dword ptr [0x902cb4] */ fx_compare(ST(0), R_F32((u32)(0x902cb4u))); 
    /* 00498b2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00498b30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00498b31: ja 0x498b4b */ if ((!fC&&!fZ)) goto L_00498b4b;
L_00498b33:; BB(0x00498b33);
    /* 00498b33: fcom dword ptr [0xa473a8] */ fx_compare(ST(0), R_F32((u32)(0xa473a8u))); 
    /* 00498b39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00498b3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00498b3c: jbe 0x498b4b */ if ((fC||fZ)) goto L_00498b4b;
L_00498b3e:; BB(0x00498b3e);
    /* 00498b3e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00498b40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498b42: mov ecx, edi */ r_ecx = r_edi;
    /* 00498b44: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x498b49u); f_00494ebc();
    /* 00498b49: jmp 0x498b75 */ goto L_00498b75;
L_00498b4b:; BB(0x00498b4b);
    /* 00498b4b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00498b4d: cmp edx, 0x46 */ {  u32 a = r_edx; u32 b = 0x46u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498b50: je 0x498bb1 */ if (fZ) goto L_00498bb1;
L_00498b52:; BB(0x00498b52);
    /* 00498b52: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498b55: jne 0x498b75 */ if (!fZ) goto L_00498b75;
L_00498b57:; BB(0x00498b57);
    /* 00498b57: mov dword ptr [edi + 0x428], 0 */ W32((u32)(r_edi+0x428u), 0x0u);
    /* 00498b61: mov dword ptr [edi + 0x42c], 0x42800000 */ W32((u32)(r_edi+0x42cu), 0x42800000u);
    /* 00498b6b: mov dword ptr [edi + 0x430], 0 */ W32((u32)(r_edi+0x430u), 0x0u);
L_00498b75:; BB(0x00498b75);
    /* 00498b75: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00498b78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00498b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498b7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498b7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00498b7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498b7e: push 0x3c6 */ { u32 v = 0x3c6u; r_esp -= 4; W32(r_esp, v); }
    /* 00498b83: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x498b88u); f_008144b0();
    /* 00498b88: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00498b8b: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00498b91: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498b94: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00498b9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00498b9c: jl 0x498ba3 */ if ((fS!=fO)) goto L_00498ba3;
L_00498b9e:; BB(0x00498b9e);
    /* 00498b9e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498ba1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498ba2: ret  */ FN_RET(0x00498ab0); r_esp += 4; return;
L_00498ba3:; BB(0x00498ba3);
    /* 00498ba3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00498ba5: mov ecx, edi */ r_ecx = r_edi;
    /* 00498ba7: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498bacu); f_00494c40();
    /* 00498bac: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498baf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498bb0: ret  */ FN_RET(0x00498ab0); r_esp += 4; return;
L_00498bb1:; BB(0x00498bb1);
    /* 00498bb1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00498bb3: mov ecx, edi */ r_ecx = r_edi;
    /* 00498bb5: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x498bbau); f_00494ebc();
    /* 00498bba: jmp 0x498b75 */ goto L_00498b75;
}

void f_00498bbc(void)
{
    FN_ENTER(0x00498bbc);
    /* 00498bbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498bbd: mov esi, ecx */ r_esi = r_ecx;
    /* 00498bbf: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498bc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498bc7: jne 0x498be8 */ if (!fZ) goto L_00498be8;
L_00498bc9:; BB(0x00498bc9);
    /* 00498bc9: mov ecx, esi */ r_ecx = r_esi;
    /* 00498bcb: call 0x49693c */ r_esp -= 4; W32(r_esp, 0x498bd0u); f_0049693c();
    /* 00498bd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498bd2: je 0x498bdf */ if (fZ) goto L_00498bdf;
L_00498bd4:; BB(0x00498bd4);
    /* 00498bd4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00498bd6: mov ecx, esi */ r_ecx = r_esi;
    /* 00498bd8: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x498bddu); f_00494ae0();
    /* 00498bdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498bde: ret  */ FN_RET(0x00498bbc); r_esp += 4; return;
L_00498bdf:; BB(0x00498bdf);
    /* 00498bdf: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00498be1: mov ecx, esi */ r_ecx = r_esi;
    /* 00498be3: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x498be8u); f_00494ae0();
L_00498be8:; BB(0x00498be8);
    /* 00498be8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498be9: ret  */ FN_RET(0x00498bbc); r_esp += 4; return;
}

void f_00498bec(void) /* sub_498BEC */
{
    FN_ENTER(0x00498bec);
    /* 00498bec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00498bed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00498bef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00498bf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498bf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498bf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498bf4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00498bf5: push 0x3c8 */ { u32 v = 0x3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00498bfa: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x498bffu); f_008144b0();
    /* 00498bff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00498c02: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00498c08: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498c0b: je 0x498c28 */ if (fZ) goto L_00498c28;
L_00498c0d:; BB(0x00498c0d);
    /* 00498c0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498c0f: jle 0x498c1c */ if ((fZ||fS!=fO)) goto L_00498c1c;
L_00498c11:; BB(0x00498c11);
    /* 00498c11: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498c14: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 00498c1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498c1b: ret  */ FN_RET(0x00498bec); r_esp += 4; return;
L_00498c1c:; BB(0x00498c1c);
    /* 00498c1c: mov dword ptr [ebx + 0x418], 0 */ W32((u32)(r_ebx+0x418u), 0x0u);
    /* 00498c26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498c27: ret  */ FN_RET(0x00498bec); r_esp += 4; return;
L_00498c28:; BB(0x00498c28);
    /* 00498c28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498c2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00498c2c: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00498c2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498c30: push 0x3b7 */ { u32 v = 0x3b7u; r_esp -= 4; W32(r_esp, v); }
    /* 00498c35: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x498c3au); f_00814298();
    /* 00498c3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00498c3d: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00498c43: jmp 0x498c0d */ goto L_00498c0d;
}

void f_00498c48(void)
{
    FN_ENTER(0x00498c48);
    /* 00498c48: mov eax, dword ptr [ecx + 0x418] */ r_eax = R32((u32)(r_ecx+0x418u));
    /* 00498c4e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498c51: mov dword ptr [ecx + 0x418], eax */ W32((u32)(r_ecx+0x418u), r_eax);
    /* 00498c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498c59: jl 0x498c5c */ if ((fS!=fO)) goto L_00498c5c;
L_00498c5b:; BB(0x00498c5b);
    /* 00498c5b: ret  */ FN_RET(0x00498c48); r_esp += 4; return;
L_00498c5c:; BB(0x00498c5c);
    /* 00498c5c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00498c5e: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498c63u); f_00494c40();
    /* 00498c63: ret  */ FN_RET(0x00498c48); r_esp += 4; return;
}

void f_00498c64(void)
{
    FN_ENTER(0x00498c64);
    /* 00498c64: mov eax, dword ptr [ecx + 0x418] */ r_eax = R32((u32)(r_ecx+0x418u));
    /* 00498c6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498c6c: jne 0x498c73 */ if (!fZ) goto L_00498c73;
L_00498c6e:; BB(0x00498c6e);
    /* 00498c6e: call 0x4945ec */ r_esp -= 4; W32(r_esp, 0x498c73u); f_004945ec();
L_00498c73:; BB(0x00498c73);
    /* 00498c73: ret  */ FN_RET(0x00498c64); r_esp += 4; return;
}

void f_00498c74(void) /* sub_498C74 */
{
    FN_ENTER(0x00498c74);
    /* 00498c74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00498c75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00498c77: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00498c7d: cmp eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498c80: je 0x498cf8 */ if (fZ) goto L_00498cf8;
L_00498c82:; BB(0x00498c82);
    /* 00498c82: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498c85: jne 0x498cab */ if (!fZ) goto L_00498cab;
L_00498c87:; BB(0x00498c87);
    /* 00498c87: mov edx, dword ptr [0x9a708c] */ r_edx = R32((u32)(0x9a708cu));
    /* 00498c8d: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 00498c93: mov edx, dword ptr [0x9a7090] */ r_edx = R32((u32)(0x9a7090u));
    /* 00498c99: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 00498c9f: mov edx, dword ptr [0x9a7094] */ r_edx = R32((u32)(0x9a7094u));
    /* 00498ca5: mov dword ptr [ebx + 0x430], edx */ W32((u32)(r_ebx+0x430u), r_edx);
L_00498cab:; BB(0x00498cab);
    /* 00498cab: cmp eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00498cae: jg 0x498cde */ if ((!fZ&&fS==fO)) goto L_00498cde;
L_00498cb0:; BB(0x00498cb0);
    /* 00498cb0: cmp eax, 0x3b */ {  u32 a = r_eax; u32 b = 0x3bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00498cb3: jle 0x498cca */ if ((fZ||fS!=fO)) goto L_00498cca;
L_00498cb5:; BB(0x00498cb5);
    /* 00498cb5: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00498cb7: add eax, -0x3b */ {  u32 a = r_eax; u32 b = 0xffffffc5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498cbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498cbd: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498cc2u); f_00496d4c();
    /* 00498cc2: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00498cc8: jmp 0x498cde */ goto L_00498cde;
L_00498cca:; BB(0x00498cca);
    /* 00498cca: push dword ptr [ebx + 0x414] */ { u32 v = R32((u32)(r_ebx+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498cd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498cd3: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498cd8u); f_00496d4c();
    /* 00498cd8: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
L_00498cde:; BB(0x00498cde);
    /* 00498cde: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498ce1: mov dword ptr [ebx + 0x418], eax */ W32((u32)(r_ebx+0x418u), r_eax);
    /* 00498ce7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498ce9: jl 0x498ced */ if ((fS!=fO)) goto L_00498ced;
L_00498ceb:; BB(0x00498ceb);
    /* 00498ceb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498cec: ret  */ FN_RET(0x00498c74); r_esp += 4; return;
L_00498ced:; BB(0x00498ced);
    /* 00498ced: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00498cef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498cf1: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498cf6u); f_00494c40();
    /* 00498cf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498cf7: ret  */ FN_RET(0x00498c74); r_esp += 4; return;
L_00498cf8:; BB(0x00498cf8);
    /* 00498cf8: mov edx, dword ptr [0x9a7080] */ r_edx = R32((u32)(0x9a7080u));
    /* 00498cfe: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 00498d04: mov edx, dword ptr [0x9a7084] */ r_edx = R32((u32)(0x9a7084u));
    /* 00498d0a: mov dword ptr [ebx + 0x42c], edx */ W32((u32)(r_ebx+0x42cu), r_edx);
    /* 00498d10: mov edx, dword ptr [0x9a7088] */ r_edx = R32((u32)(0x9a7088u));
    /* 00498d16: mov dword ptr [ebx + 0x430], edx */ W32((u32)(r_ebx+0x430u), r_edx);
    /* 00498d1c: jmp 0x498cab */ goto L_00498cab;
}

void f_00498d20(void)
{
    FN_ENTER(0x00498d20);
    /* 00498d20: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498d21: mov esi, ecx */ r_esi = r_ecx;
    /* 00498d23: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498d29: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498d2f: mov ecx, esi */ r_ecx = r_esi;
    /* 00498d31: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498d36u); f_00496d4c();
    /* 00498d36: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498d3c: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498d3f: je 0x498d52 */ if (fZ) goto L_00498d52;
L_00498d41:; BB(0x00498d41);
    /* 00498d41: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498d44: jne 0x498d61 */ if (!fZ) goto L_00498d61;
L_00498d46:; BB(0x00498d46);
    /* 00498d46: mov dword ptr [esi + 0x440], 1 */ W32((u32)(r_esi+0x440u), 0x1u);
    /* 00498d50: jmp 0x498d61 */ goto L_00498d61;
L_00498d52:; BB(0x00498d52);
    /* 00498d52: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00498d54: mov ecx, esi */ r_ecx = r_esi;
    /* 00498d56: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x498d5bu); f_00494ebc();
    /* 00498d5b: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
L_00498d61:; BB(0x00498d61);
    /* 00498d61: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498d64: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498d6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498d6c: jl 0x498d70 */ if ((fS!=fO)) goto L_00498d70;
L_00498d6e:; BB(0x00498d6e);
    /* 00498d6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498d6f: ret  */ FN_RET(0x00498d20); r_esp += 4; return;
L_00498d70:; BB(0x00498d70);
    /* 00498d70: mov ecx, esi */ r_ecx = r_esi;
    /* 00498d72: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x498d77u); f_00497e20();
    /* 00498d77: mov dword ptr [esi + 0x41c], 0 */ W32((u32)(r_esi+0x41cu), 0x0u);
    /* 00498d81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498d83: mov ecx, esi */ r_ecx = r_esi;
    /* 00498d85: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498d8au); f_00494c40();
    /* 00498d8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498d8b: ret  */ FN_RET(0x00498d20); r_esp += 4; return;
}

void f_00498d8c(void)
{
    FN_ENTER(0x00498d8c);
    /* 00498d8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498d8d: mov esi, ecx */ r_esi = r_ecx;
    /* 00498d8f: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498d95: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498d9b: mov ecx, esi */ r_ecx = r_esi;
    /* 00498d9d: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498da2u); f_00496d4c();
    /* 00498da2: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498da8: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498dae: mov ecx, esi */ r_ecx = r_esi;
    /* 00498db0: call 0x496d10 */ r_esp -= 4; W32(r_esp, 0x498db5u); f_00496d10();
    /* 00498db5: mov edx, dword ptr [esi + 0x414] */ r_edx = R32((u32)(r_esi+0x414u));
    /* 00498dbb: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 00498dc1: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 00498dc4: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00498dc7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498dc9: je 0x498ddb */ if (fZ) goto L_00498ddb;
L_00498dcb:; BB(0x00498dcb);
    /* 00498dcb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498dcd: jne 0x498dea */ if (!fZ) goto L_00498dea;
L_00498dcf:; BB(0x00498dcf);
    /* 00498dcf: mov dword ptr [esi + 0x440], 0 */ W32((u32)(r_esi+0x440u), 0x0u);
    /* 00498dd9: jmp 0x498dea */ goto L_00498dea;
L_00498ddb:; BB(0x00498ddb);
    /* 00498ddb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00498ddd: mov ecx, esi */ r_ecx = r_esi;
    /* 00498ddf: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x498de4u); f_00494ebc();
    /* 00498de4: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
L_00498dea:; BB(0x00498dea);
    /* 00498dea: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00498ded: mov dword ptr [esi + 0x418], ecx */ W32((u32)(r_esi+0x418u), r_ecx);
    /* 00498df3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498df5: jl 0x498df9 */ if ((fS!=fO)) goto L_00498df9;
L_00498df7:; BB(0x00498df7);
    /* 00498df7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498df8: ret  */ FN_RET(0x00498d8c); r_esp += 4; return;
L_00498df9:; BB(0x00498df9);
    /* 00498df9: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00498dfb: mov ecx, esi */ r_ecx = r_esi;
    /* 00498dfd: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498e02u); f_00494c40();
    /* 00498e02: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498e03: ret  */ FN_RET(0x00498d8c); r_esp += 4; return;
}

void f_00498e04(void)
{
    FN_ENTER(0x00498e04);
    /* 00498e04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498e05: mov esi, ecx */ r_esi = r_ecx;
    /* 00498e07: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498e0d: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498e13: mov ecx, esi */ r_ecx = r_esi;
    /* 00498e15: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498e1au); f_00496d4c();
    /* 00498e1a: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498e20: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498e23: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498e29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498e2b: jl 0x498e2f */ if ((fS!=fO)) goto L_00498e2f;
L_00498e2d:; BB(0x00498e2d);
    /* 00498e2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498e2e: ret  */ FN_RET(0x00498e04); r_esp += 4; return;
L_00498e2f:; BB(0x00498e2f);
    /* 00498e2f: movzx eax, byte ptr [esi + 0x424] */ r_eax = (u32)R8((u32)(r_esi+0x424u));
    /* 00498e36: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00498e39: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00498e3b: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498e3e: mov ecx, esi */ r_ecx = r_esi;
    /* 00498e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00498e41: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498e46u); f_00494c40();
    /* 00498e46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498e47: ret  */ FN_RET(0x00498e04); r_esp += 4; return;
}

void f_00498e48(void) /* sub_498E48 */
{
    FN_ENTER(0x00498e48);
    /* 00498e48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00498e49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00498e4b: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 00498e51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498e53: jne 0x498e84 */ if (!fZ) goto L_00498e84;
L_00498e55:; BB(0x00498e55);
    /* 00498e55: call 0x48e134 */ r_esp -= 4; W32(r_esp, 0x498e5au); f_0048e134();
    /* 00498e5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498e5c: je 0x498e67 */ if (fZ) goto L_00498e67;
L_00498e5e:; BB(0x00498e5e);
    /* 00498e5e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498e60: call 0x4945ec */ r_esp -= 4; W32(r_esp, 0x498e65u); f_004945ec();
    /* 00498e65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498e66: ret  */ FN_RET(0x00498e48); r_esp += 4; return;
L_00498e67:; BB(0x00498e67);
    /* 00498e67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498e69: call 0x49695c */ r_esp -= 4; W32(r_esp, 0x498e6eu); f_0049695c();
    /* 00498e6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498e70: je 0x498e7d */ if (fZ) goto L_00498e7d;
L_00498e72:; BB(0x00498e72);
    /* 00498e72: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00498e74: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498e76: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x498e7bu); f_00494ae0();
    /* 00498e7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498e7c: ret  */ FN_RET(0x00498e48); r_esp += 4; return;
L_00498e7d:; BB(0x00498e7d);
    /* 00498e7d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00498e7f: call 0x4945ec */ r_esp -= 4; W32(r_esp, 0x498e84u); f_004945ec();
L_00498e84:; BB(0x00498e84);
    /* 00498e84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00498e85: ret  */ FN_RET(0x00498e48); r_esp += 4; return;
}

void f_00498e88(void)
{
    FN_ENTER(0x00498e88);
    /* 00498e88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00498e89: mov edi, ecx */ r_edi = r_ecx;
    /* 00498e8b: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498e91: push dword ptr [edi + 0x418] */ { u32 v = R32((u32)(r_edi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498e97: mov ecx, edi */ r_ecx = r_edi;
    /* 00498e99: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498e9eu); f_00496d4c();
    /* 00498e9e: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00498ea4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498ea7: mov dword ptr [edi + 0x418], eax */ W32((u32)(r_edi+0x418u), r_eax);
    /* 00498ead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498eaf: jl 0x498eb3 */ if ((fS!=fO)) goto L_00498eb3;
L_00498eb1:; BB(0x00498eb1);
    /* 00498eb1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498eb2: ret  */ FN_RET(0x00498e88); r_esp += 4; return;
L_00498eb3:; BB(0x00498eb3);
    /* 00498eb3: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00498eb5: mov ecx, edi */ r_ecx = r_edi;
    /* 00498eb7: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498ebcu); f_00494c40();
    /* 00498ebc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00498ebd: ret  */ FN_RET(0x00498e88); r_esp += 4; return;
}

void f_00498ec0(void)
{
    FN_ENTER(0x00498ec0);
    /* 00498ec0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498ec1: mov esi, ecx */ r_esi = r_ecx;
    /* 00498ec3: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498ec9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498ecb: je 0x498eda */ if (fZ) goto L_00498eda;
L_00498ecd:; BB(0x00498ecd);
    /* 00498ecd: mov ecx, esi */ r_ecx = r_esi;
    /* 00498ecf: call 0x496978 */ r_esp -= 4; W32(r_esp, 0x498ed4u); f_00496978();
    /* 00498ed4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498ed6: jne 0x498eda */ if (!fZ) goto L_00498eda;
L_00498ed8:; BB(0x00498ed8);
    /* 00498ed8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498ed9: ret  */ FN_RET(0x00498ec0); r_esp += 4; return;
L_00498eda:; BB(0x00498eda);
    /* 00498eda: mov ecx, esi */ r_ecx = r_esi;
    /* 00498edc: call 0x4945ec */ r_esp -= 4; W32(r_esp, 0x498ee1u); f_004945ec();
    /* 00498ee1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498ee2: ret  */ FN_RET(0x00498ec0); r_esp += 4; return;
}

void f_00498ee4(void) /* sub_498EE4 */
{
    FN_ENTER(0x00498ee4);
    /* 00498ee4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498ee5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00498ee8: mov esi, ecx */ r_esi = r_ecx;
    /* 00498eea: fild dword ptr [esi + 0x414] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x414u)));
    /* 00498ef0: fadd dword ptr [0x902cf4] */ ST(0) = ST(0) + R_F32((u32)(0x902cf4u));
    /* 00498ef6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00498ef9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00498efd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00498f02: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00498f06: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00498f0a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00498f0e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00498f11: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
    /* 00498f17: cmp eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498f1b: jne 0x498f2c */ if (!fZ) goto L_00498f2c;
L_00498f1d:; BB(0x00498f1d);
    /* 00498f1d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00498f1f: mov ecx, esi */ r_ecx = r_esi;
    /* 00498f21: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x498f26u); f_00497104();
    /* 00498f26: mov eax, dword ptr [esi + 0x418] */ r_eax = R32((u32)(r_esi+0x418u));
L_00498f2c:; BB(0x00498f2c);
    /* 00498f2c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498f2f: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 00498f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00498f37: jl 0x498f3e */ if ((fS!=fO)) goto L_00498f3e;
L_00498f39:; BB(0x00498f39);
    /* 00498f39: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498f3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498f3d: ret  */ FN_RET(0x00498ee4); r_esp += 4; return;
L_00498f3e:; BB(0x00498f3e);
    /* 00498f3e: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00498f40: mov ecx, esi */ r_ecx = r_esi;
    /* 00498f42: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498f47u); f_00494c40();
    /* 00498f47: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498f4a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498f4b: ret  */ FN_RET(0x00498ee4); r_esp += 4; return;
}

void f_00498f4c(void)
{
    FN_ENTER(0x00498f4c);
    /* 00498f4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498f4d: mov esi, ecx */ r_esi = r_ecx;
    /* 00498f4f: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498f55: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498f5b: mov ecx, esi */ r_ecx = r_esi;
    /* 00498f5d: call 0x496d4c */ r_esp -= 4; W32(r_esp, 0x498f62u); f_00496d4c();
    /* 00498f62: push dword ptr [esi + 0x414] */ { u32 v = R32((u32)(r_esi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498f68: push dword ptr [esi + 0x418] */ { u32 v = R32((u32)(r_esi+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 00498f6e: mov ecx, esi */ r_ecx = r_esi;
    /* 00498f70: call 0x496d10 */ r_esp -= 4; W32(r_esp, 0x498f75u); f_00496d10();
    /* 00498f75: mov edx, dword ptr [esi + 0x414] */ r_edx = R32((u32)(r_esi+0x414u));
    /* 00498f7b: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
    /* 00498f81: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 00498f84: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00498f87: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498f89: je 0x498f9b */ if (fZ) goto L_00498f9b;
L_00498f8b:; BB(0x00498f8b);
    /* 00498f8b: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498f8d: jne 0x498faa */ if (!fZ) goto L_00498faa;
L_00498f8f:; BB(0x00498f8f);
    /* 00498f8f: mov dword ptr [esi + 0x440], 1 */ W32((u32)(r_esi+0x440u), 0x1u);
    /* 00498f99: jmp 0x498faa */ goto L_00498faa;
L_00498f9b:; BB(0x00498f9b);
    /* 00498f9b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00498f9d: mov ecx, esi */ r_ecx = r_esi;
    /* 00498f9f: call 0x494ebc */ r_esp -= 4; W32(r_esp, 0x498fa4u); f_00494ebc();
    /* 00498fa4: mov ecx, dword ptr [esi + 0x418] */ r_ecx = R32((u32)(r_esi+0x418u));
L_00498faa:; BB(0x00498faa);
    /* 00498faa: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00498fad: mov dword ptr [esi + 0x418], ecx */ W32((u32)(r_esi+0x418u), r_ecx);
    /* 00498fb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00498fb5: jl 0x498fb9 */ if ((fS!=fO)) goto L_00498fb9;
L_00498fb7:; BB(0x00498fb7);
    /* 00498fb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498fb8: ret  */ FN_RET(0x00498f4c); r_esp += 4; return;
L_00498fb9:; BB(0x00498fb9);
    /* 00498fb9: mov ecx, esi */ r_ecx = r_esi;
    /* 00498fbb: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x498fc0u); f_00497e20();
    /* 00498fc0: mov dword ptr [esi + 0x41c], 0 */ W32((u32)(r_esi+0x41cu), 0x0u);
    /* 00498fca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498fcc: mov ecx, esi */ r_ecx = r_esi;
    /* 00498fce: call 0x494c40 */ r_esp -= 4; W32(r_esp, 0x498fd3u); f_00494c40();
    /* 00498fd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00498fd4: ret  */ FN_RET(0x00498f4c); r_esp += 4; return;
}

void f_00498fd8(void)
{
    FN_ENTER(0x00498fd8);
    /* 00498fd8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00498fdb: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498fe0: je 0x498fea */ if (fZ) goto L_00498fea;
L_00498fe2:; BB(0x00498fe2);
    /* 00498fe2: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00498fe4: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x498fe9u); f_00494ae0();
    /* 00498fe9: ret  */ FN_RET(0x00498fd8); r_esp += 4; return;
L_00498fea:; BB(0x00498fea);
    /* 00498fea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00498fec: call 0x494ae0 */ r_esp -= 4; W32(r_esp, 0x498ff1u); f_00494ae0();
    /* 00498ff1: ret  */ FN_RET(0x00498fd8); r_esp += 4; return;
}

void f_00498ff4(void)
{
    FN_ENTER(0x00498ff4);
    /* 00498ff4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00498ff5: mov esi, ecx */ r_esi = r_ecx;
    /* 00498ff7: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 00498ffc: mov dword ptr [esi + 0x414], eax */ W32((u32)(r_esi+0x414u), r_eax);
    /* 00499002: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499004: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00499006: mov dword ptr [esi + 0x418], eax */ W32((u32)(r_esi+0x418u), r_eax);
    /* 0049900c: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0049900f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00499010: push 0x3c5 */ { u32 v = 0x3c5u; r_esp -= 4; W32(r_esp, v); }
    /* 00499015: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x49901au); f_00814298();
    /* 0049901a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0049901d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049901f: mov ecx, esi */ r_ecx = r_esi;
    /* 00499021: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x499026u); f_00497104();
    /* 00499026: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00499028: mov ecx, esi */ r_ecx = r_esi;
    /* 0049902a: call 0x497104 */ r_esp -= 4; W32(r_esp, 0x49902fu); f_00497104();
    /* 0049902f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00499030: ret  */ FN_RET(0x00498ff4); r_esp += 4; return;
}

