#include "protos.h"

void f_006931f8(void) /* sub_6931F8 */
{
    FN_ENTER(0x006931f8);
    /* 006931f8: mov eax, 0xc7 */ r_eax = 0xc7u;
    /* 006931fd: ret  */ FN_RET(0x006931f8); r_esp += 4; return;
}

void f_0069320e(void) /* sub_69320E */
{
    FN_ENTER(0x0069320e);
    /* 0069320e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069320f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693210: mov edi, eax */ r_edi = r_eax;
    /* 00693212: movzx ebx, word ptr [edx] */ r_ebx = (u32)R16((u32)(r_edx));
    /* 00693215: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00693217: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693219: movsx ebx, di */ r_ebx = (u32)(i32)(i16)(u16)r_edi;
    /* 0069321c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069321e: jl 0x693237 */ if ((fS!=fO)) goto L_00693237;
L_00693220:; BB(0x00693220);
    /* 00693220: mov eax, ebx */ r_eax = r_ebx;
    /* 00693222: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693224: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00693227: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00693229: jle 0x693231 */ if ((fZ||fS!=fO)) goto L_00693231;
L_0069322b:; BB(0x0069322b);
    /* 0069322b: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0069322e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069322f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693230: ret  */ FN_RET(0x0069320e); r_esp += 4; return;
L_00693231:; BB(0x00693231);
    /* 00693231: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00693234: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693235: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693236: ret  */ FN_RET(0x0069320e); r_esp += 4; return;
L_00693237:; BB(0x00693237);
    /* 00693237: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00693239: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
    /* 0069323c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069323d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069323e: ret  */ FN_RET(0x0069320e); r_esp += 4; return;
}

void f_00693240(void) /* sub_693240 */
{
    FN_ENTER(0x00693240);
    /* 00693240: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00693242: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00693245: and eax, 0xfdffffff */ {  u32 a = r_eax; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069324a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069324c: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0069324f: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x693254u); f_007b52c4();
    /* 00693254: ret  */ FN_RET(0x00693240); r_esp += 4; return;
}

void f_00693258(void) /* sub_693258 */
{
    FN_ENTER(0x00693258);
    /* 00693258: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693259: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069325b: je 0x69326b */ if (fZ) goto L_0069326b;
L_0069325d:; BB(0x0069325d);
    /* 0069325d: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00693264: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00693267: jne 0x69326b */ if (!fZ) goto L_0069326b;
L_00693269:; BB(0x00693269);
    /* 00693269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069326a: ret  */ FN_RET(0x00693258); r_esp += 4; return;
L_0069326b:; BB(0x0069326b);
    /* 0069326b: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069326f: mov byte ptr [esp], 0x7a */ W8((u32)(r_esp), 0x7au);
    /* 00693273: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00693278: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0069327d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00693280: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x693285u); f_008003e0();
    /* 00693285: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00693286: ret  */ FN_RET(0x00693258); r_esp += 4; return;
}

void f_00693288(void) /* sub_693288 */
{
    FN_ENTER(0x00693288);
    /* 00693288: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069328b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069328f: mov byte ptr [esp + 4], 0x7a */ W8((u32)(r_esp+0x4u), 0x7au);
    /* 00693294: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00693299: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0069329d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069329f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006932a3: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x6932a8u); f_006a9e70();
    /* 006932a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006932aa: je 0x6932c1 */ if (fZ) goto L_006932c1;
L_006932ac:; BB(0x006932ac);
    /* 006932ac: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006932b1: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6932b6u); f_0068d5ac();
    /* 006932b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006932b8: je 0x6932c1 */ if (fZ) goto L_006932c1;
L_006932ba:; BB(0x006932ba);
    /* 006932ba: mov ecx, eax */ r_ecx = r_eax;
    /* 006932bc: call 0x6932c8 */ r_esp -= 4; W32(r_esp, 0x6932c1u); f_006932c8();
L_006932c1:; BB(0x006932c1);
    /* 006932c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006932c4: ret  */ FN_RET(0x00693288); r_esp += 4; return;
}

void f_006932c8(void) /* sub_6932C8 */
{
    FN_ENTER(0x006932c8);
    /* 006932c8: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 006932cd: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 006932d3: or eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006932d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006932da: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 006932e0: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6932e5u); f_007b52c4();
    /* 006932e5: ret  */ FN_RET(0x006932c8); r_esp += 4; return;
}

void f_006932e8(void) /* sub_6932E8 */
{
    FN_ENTER(0x006932e8);
    /* 006932e8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006932eb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006932ef: mov byte ptr [esp + 4], 0x7b */ W8((u32)(r_esp+0x4u), 0x7bu);
    /* 006932f4: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 006932f9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006932fd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006932ff: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00693303: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x693308u); f_006a9e70();
    /* 00693308: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069330a: je 0x693321 */ if (fZ) goto L_00693321;
L_0069330c:; BB(0x0069330c);
    /* 0069330c: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00693311: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x693316u); f_0068d5ac();
    /* 00693316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693318: je 0x693321 */ if (fZ) goto L_00693321;
L_0069331a:; BB(0x0069331a);
    /* 0069331a: mov ecx, eax */ r_ecx = r_eax;
    /* 0069331c: call 0x693328 */ r_esp -= 4; W32(r_esp, 0x693321u); f_00693328();
L_00693321:; BB(0x00693321);
    /* 00693321: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693324: ret  */ FN_RET(0x006932e8); r_esp += 4; return;
}

void f_00693328(void) /* sub_693328 */
{
    FN_ENTER(0x00693328);
    /* 00693328: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0069332d: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00693333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00693335: and eax, 0xff7fffff */ {  u32 a = r_eax; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069333a: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00693340: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x693345u); f_007b52ec();
    /* 00693345: ret  */ FN_RET(0x00693328); r_esp += 4; return;
}

void f_00693348(void) /* sub_693348 */
{
    FN_ENTER(0x00693348);
    /* 00693348: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069334b: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00693350: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x693355u); f_0068d5ac();
    /* 00693355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693357: je 0x693369 */ if (fZ) goto L_00693369;
L_00693359:; BB(0x00693359);
    /* 00693359: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00693360: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693363: jne 0x693369 */ if (!fZ) goto L_00693369;
L_00693365:; BB(0x00693365);
    /* 00693365: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693368: ret  */ FN_RET(0x00693348); r_esp += 4; return;
L_00693369:; BB(0x00693369);
    /* 00693369: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0069336e: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x693373u); f_0068d5ac();
    /* 00693373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693375: je 0x693383 */ if (fZ) goto L_00693383;
L_00693377:; BB(0x00693377);
    /* 00693377: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069337e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693381: jne 0x6933bc */ if (!fZ) goto L_006933bc;
L_00693383:; BB(0x00693383);
    /* 00693383: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00693388: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 0069338d: movzx ecx, word ptr [esp + 0x18] */ r_ecx = (u32)R16((u32)(r_esp+0x18u));
    /* 00693392: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00693397: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0069339c: mov byte ptr [esp + 4], 0x2f */ W8((u32)(r_esp+0x4u), 0x2fu);
    /* 006933a1: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 006933a6: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006933ab: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006933af: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006933b7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6933bcu); f_008003e0();
L_006933bc:; BB(0x006933bc);
    /* 006933bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006933bf: ret  */ FN_RET(0x00693348); r_esp += 4; return;
}

void f_006933c0(void) /* sub_6933C0 */
{
    FN_ENTER(0x006933c0);
    /* 006933c0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006933c3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006933c7: mov byte ptr [esp + 4], 0x2f */ W8((u32)(r_esp+0x4u), 0x2fu);
    /* 006933cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006933ce: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 006933d3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006933d7: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 006933dc: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006933e1: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 006933e6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006933ea: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006933ec: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006933f0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006933f3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006933f7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006933fa: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006933fe: call 0x6a9a34 */ r_esp -= 4; W32(r_esp, 0x693403u); f_006a9a34();
    /* 00693403: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693405: je 0x693463 */ if (fZ) goto L_00693463;
L_00693407:; BB(0x00693407);
    /* 00693407: movzx eax, word ptr [esp + 0xe] */ r_eax = (u32)R16((u32)(r_esp+0xeu));
    /* 0069340c: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x693411u); f_0068d5ac();
    /* 00693411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693413: je 0x693463 */ if (fZ) goto L_00693463;
L_00693415:; BB(0x00693415);
    /* 00693415: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00693418: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069341e: jne 0x693463 */ if (!fZ) goto L_00693463;
L_00693420:; BB(0x00693420);
    /* 00693420: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00693424: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693426: je 0x693456 */ if (fZ) goto L_00693456;
L_00693428:; BB(0x00693428);
    /* 00693428: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069342b: jne 0x69343e */ if (!fZ) goto L_0069343e;
L_0069342d:; BB(0x0069342d);
    /* 0069342d: movsx edx, word ptr [esp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 00693432: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693433: mov ecx, eax */ r_ecx = r_eax;
    /* 00693435: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x69343au); f_007773d4();
    /* 0069343a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069343d: ret  */ FN_RET(0x006933c0); r_esp += 4; return;
L_0069343e:; BB(0x0069343e);
    /* 0069343e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693441: jne 0x693463 */ if (!fZ) goto L_00693463;
L_00693443:; BB(0x00693443);
    /* 00693443: movsx edx, word ptr [eax + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 0069344a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069344b: mov ecx, eax */ r_ecx = r_eax;
    /* 0069344d: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x693452u); f_007773d4();
    /* 00693452: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693455: ret  */ FN_RET(0x006933c0); r_esp += 4; return;
L_00693456:; BB(0x00693456);
    /* 00693456: movsx edx, word ptr [esp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 0069345b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069345c: mov ecx, eax */ r_ecx = r_eax;
    /* 0069345e: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x693463u); f_00770b58();
L_00693463:; BB(0x00693463);
    /* 00693463: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693466: ret  */ FN_RET(0x006933c0); r_esp += 4; return;
}

void f_00693468(void) /* sub_693468 */
{
    FN_ENTER(0x00693468);
    /* 00693468: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0069346c: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 00693472: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00693474: je 0x69347d */ if (fZ) goto L_0069347d;
L_00693476:; BB(0x00693476);
    /* 00693476: mov eax, 1 */ r_eax = 0x1u;
    /* 0069347b: jmp 0x69347f */ goto L_0069347f;
L_0069347d:; BB(0x0069347d);
    /* 0069347d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069347f:; BB(0x0069347f);
    /* 0069347f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693481: jne 0x69348e */ if (!fZ) goto L_0069348e;
L_00693483:; BB(0x00693483);
    /* 00693483: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00693486: cmp eax, dword ptr [0xaca374] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaca374u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069348c: je 0x693491 */ if (fZ) goto L_00693491;
L_0069348e:; BB(0x0069348e);
    /* 0069348e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00693490: ret  */ FN_RET(0x00693468); r_esp += 4; return;
L_00693491:; BB(0x00693491);
    /* 00693491: mov eax, 1 */ r_eax = 0x1u;
    /* 00693496: ret  */ FN_RET(0x00693468); r_esp += 4; return;
}

void f_00693498(void) /* sub_693498 */
{
    FN_ENTER(0x00693498);
    /* 00693498: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693499: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069349c: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006934a0: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006934a8: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 006934b0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 006934b8: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006934c0: mov byte ptr [esp + 4], 0x24 */ W8((u32)(r_esp+0x4u), 0x24u);
    /* 006934c5: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 006934ca: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006934cc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006934d0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006934d3: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006934d7: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006934db: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006934de: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006934e2: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006934e5: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006934e9: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 006934ec: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006934f0: call 0x6a9e44 */ r_esp -= 4; W32(r_esp, 0x6934f5u); f_006a9e44();
    /* 006934f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006934f7: je 0x693576 */ if (fZ) goto L_00693576;
L_006934f9:; BB(0x006934f9);
    /* 006934f9: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006934fe: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x693503u); f_0068d5ac();
    /* 00693503: mov edi, eax */ r_edi = r_eax;
    /* 00693505: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693507: je 0x693576 */ if (fZ) goto L_00693576;
L_00693509:; BB(0x00693509);
    /* 00693509: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0069350d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00693511: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 00693514: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00693518: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 0069351b: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 0069351e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00693522: mov dword ptr [edi + 0x3fc], edx */ W32((u32)(r_edi+0x3fcu), r_edx);
    /* 00693528: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 0069352b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069352d: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x693532u); f_0077a1f4();
    /* 00693532: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 00693538: or edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069353e: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 00693544: mov ecx, edi */ r_ecx = r_edi;
    /* 00693546: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x69354bu); f_0069357c();
    /* 0069354b: push 0x685490 */ { u32 v = 0x685490u; r_esp -= 4; W32(r_esp, v); }
    /* 00693550: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00693552: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00693556: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693557: call 0x697e3c */ r_esp -= 4; W32(r_esp, 0x69355cu); f_00697e3c();
    /* 0069355c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069355f: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00693566: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693569: jne 0x693576 */ if (!fZ) goto L_00693576;
L_0069356b:; BB(0x0069356b);
    /* 0069356b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069356d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069356e: call 0x4d2fb4 */ r_esp -= 4; W32(r_esp, 0x693573u); f_004d2fb4();
    /* 00693573: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00693576:; BB(0x00693576);
    /* 00693576: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693579: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069357a: ret  */ FN_RET(0x00693498); r_esp += 4; return;
}

void f_0069357c(void) /* sub_69357C */
{
    FN_ENTER(0x0069357c);
    /* 0069357c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0069357e: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693584: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x693589u); f_0069792c();
    /* 00693589: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069358b: je 0x693597 */ if (fZ) goto L_00693597;
L_0069358d:; BB(0x0069358d);
    /* 0069358d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069358f: mov ecx, eax */ r_ecx = r_eax;
    /* 00693591: call dword ptr [edx + 0xa0] */ { u32 t = R32((u32)(r_edx+0xa0u)); r_esp -= 4; W32(r_esp, 0x693597u); call_ind(t); }
L_00693597:; BB(0x00693597);
    /* 00693597: ret  */ FN_RET(0x0069357c); r_esp += 4; return;
}

void f_00693598(void) /* sub_693598 */
{
    FN_ENTER(0x00693598);
    /* 00693598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693599: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069359a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069359b: mov edi, ecx */ r_edi = r_ecx;
    /* 0069359d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069359f: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x6935a4u); f_0080c2a4();
    /* 006935a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006935a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006935a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006935a8: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 006935ad: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x6935b2u); f_00815590();
    /* 006935b2: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x6935b7u); f_007a6114();
    /* 006935b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006935b8: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 006935bc: call 0x6ac804 */ r_esp -= 4; W32(r_esp, 0x6935c1u); f_006ac804();
    /* 006935c1: mov ebp, eax */ r_ebp = r_eax;
    /* 006935c3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006935c4: call 0x6ac7d4 */ r_esp -= 4; W32(r_esp, 0x6935c9u); f_006ac7d4();
    /* 006935c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006935ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006935cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006935cc: call 0x6986ec */ r_esp -= 4; W32(r_esp, 0x6935d1u); f_006986ec();
    /* 006935d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006935d4: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006935da: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006935e0: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006935e5: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 006935eb: mov dword ptr [edi + 0x3c0], 1 */ W32((u32)(r_edi+0x3c0u), 0x1u);
    /* 006935f5: mov ecx, edi */ r_ecx = r_edi;
    /* 006935f7: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6935fcu); f_00692398();
    /* 006935fc: mov esi, dword ptr [0xac9d58] */ r_esi = R32((u32)(0xac9d58u));
    /* 00693602: call 0x7b48c8 */ r_esp -= 4; W32(r_esp, 0x693607u); f_007b48c8();
    /* 00693607: mov ebp, eax */ r_ebp = r_eax;
    /* 00693609: call 0x7b48e0 */ r_esp -= 4; W32(r_esp, 0x69360eu); f_007b48e0();
    /* 0069360e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069360f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693610: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693611: call 0x7b4234 */ r_esp -= 4; W32(r_esp, 0x693616u); f_007b4234();
    /* 00693616: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693619: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069361a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069361b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069361c: ret 4 */ FN_RET(0x00693598); r_esp += 8; return;
}

void f_00693620(void) /* sub_693620 */
{
    FN_ENTER(0x00693620);
    /* 00693620: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693621: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693622: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693623: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00693627: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693629: je 0x69365a */ if (fZ) goto L_0069365a;
L_0069362b:; BB(0x0069362b);
    /* 0069362b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069362c: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x693631u); f_006ac458();
    /* 00693631: mov esi, eax */ r_esi = r_eax;
    /* 00693633: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693634: call 0x6acc5c */ r_esp -= 4; W32(r_esp, 0x693639u); f_006acc5c();
    /* 00693639: mov ebx, eax */ r_ebx = r_eax;
    /* 0069363b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069363c: call 0x6acc80 */ r_esp -= 4; W32(r_esp, 0x693641u); f_006acc80();
    /* 00693641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693642: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693643: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693644: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693645: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00693649: call 0x69807c */ r_esp -= 4; W32(r_esp, 0x69364eu); f_0069807c();
    /* 0069364e: mov eax, 1 */ r_eax = 0x1u;
    /* 00693653: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693656: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00693657: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00693658: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00693659: ret  */ FN_RET(0x00693620); r_esp += 4; return;
L_0069365a:; BB(0x0069365a);
    /* 0069365a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069365c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069365d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069365e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069365f: ret  */ FN_RET(0x00693620); r_esp += 4; return;
}

void f_00693660(void) /* sub_693660 */
{
    FN_ENTER(0x00693660);
    /* 00693660: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00693666: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 0069366c: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693671: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00693677: or edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069367a: mov dword ptr [ecx + 0x350], edx */ W32((u32)(r_ecx+0x350u), r_edx);
    /* 00693680: ret  */ FN_RET(0x00693660); r_esp += 4; return;
}

void f_00693684(void) /* sub_693684 */
{
    FN_ENTER(0x00693684);
    /* 00693684: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0069368a: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00693690: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693695: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 0069369b: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069369e: mov dword ptr [ecx + 0x350], edx */ W32((u32)(r_ecx+0x350u), r_edx);
    /* 006936a4: ret  */ FN_RET(0x00693684); r_esp += 4; return;
}

void f_006936a8(void) /* sub_6936A8 */
{
    FN_ENTER(0x006936a8);
    /* 006936a8: add ecx, 0x428 */ {  u32 a = r_ecx; u32 b = 0x428u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006936ae: mov eax, ecx */ r_eax = r_ecx;
    /* 006936b0: ret  */ FN_RET(0x006936a8); r_esp += 4; return;
}

void f_006936b4(void) /* sub_6936B4 */
{
    FN_ENTER(0x006936b4);
    /* 006936b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006936b5: movzx ebp, word ptr [ecx + 0x980] */ r_ebp = (u32)R16((u32)(r_ecx+0x980u));
    /* 006936bc: lea edx, [ecx + 0x980] */ r_edx = (u32)(r_ecx+0x980u);
    /* 006936c2: mov eax, edx */ r_eax = r_edx;
    /* 006936c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006936c6: je 0x6936e7 */ if (fZ) goto L_006936e7;
L_006936c8:; BB(0x006936c8);
    /* 006936c8: movzx ecx, word ptr [ecx + 0x980] */ r_ecx = (u32)R16((u32)(r_ecx+0x980u));
L_006936cf:; BB(0x006936cf);
    /* 006936cf: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006936d2: jne 0x6936dc */ if (!fZ) goto L_006936dc;
L_006936d4:; BB(0x006936d4);
    /* 006936d4: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 006936d9: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_006936dc:; BB(0x006936dc);
    /* 006936dc: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 006936e0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006936e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006936e5: jne 0x6936cf */ if (!fZ) goto L_006936cf;
L_006936e7:; BB(0x006936e7);
    /* 006936e7: mov eax, edx */ r_eax = r_edx;
    /* 006936e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006936ea: ret  */ FN_RET(0x006936b4); r_esp += 4; return;
}

void f_006936ec(void) /* sub_6936EC */
{
    FN_ENTER(0x006936ec);
    /* 006936ec: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 006936f1: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 006936f7: or edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006936fa: or eax, dword ptr [0xa0f67c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f67cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693700: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693706: not eax */ r_eax = ~r_eax;
    /* 00693708: and dword ptr [ecx + 0x630], eax */ { u32 ad = (u32)(r_ecx+0x630u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0069370e: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00693714: mov dword ptr [ecx + 0x350], edx */ W32((u32)(r_ecx+0x350u), r_edx);
    /* 0069371a: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069371f: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00693725: ret  */ FN_RET(0x006936ec); r_esp += 4; return;
}

void f_00693728(void) /* sub_693728 */
{
    FN_ENTER(0x00693728);
    /* 00693728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693729: mov edi, ecx */ r_edi = r_ecx;
    /* 0069372b: mov ecx, edi */ r_ecx = r_edi;
    /* 0069372d: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00693732: or eax, dword ptr [0xa0f67c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f67cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693738: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069373e: or dword ptr [edi + 0x630], eax */ { u32 ad = (u32)(r_edi+0x630u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00693744: call 0x688d54 */ r_esp -= 4; W32(r_esp, 0x693749u); f_00688d54();
    /* 00693749: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069374f: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00693754: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0069375a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069375b: ret  */ FN_RET(0x00693728); r_esp += 4; return;
}

void f_0069375c(void) /* sub_69375C */
{
    FN_ENTER(0x0069375c);
    /* 0069375c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069375f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693761: je 0x69376f */ if (fZ) goto L_0069376f;
L_00693763:; BB(0x00693763);
    /* 00693763: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069376a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069376d: je 0x6937c2 */ if (fZ) goto L_006937c2;
L_0069376f:; BB(0x0069376f);
    /* 0069376f: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 00693774: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00693778: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00693780: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00693788: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069378d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00693791: mov byte ptr [esp], 0x2c */ W8((u32)(r_esp), 0x2cu);
    /* 00693795: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0069379a: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 0069379f: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006937a4: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006937a7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006937ab: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 006937ae: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006937b2: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 006937ba: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006937bd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6937c2u); f_008003e0();
L_006937c2:; BB(0x006937c2);
    /* 006937c2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006937c5: ret 8 */ FN_RET(0x0069375c); r_esp += 12; return;
}

void f_006937c8(void) /* sub_6937C8 */
{
    FN_ENTER(0x006937c8);
    /* 006937c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006937cb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006937cd: je 0x6937e1 */ if (fZ) goto L_006937e1;
L_006937cf:; BB(0x006937cf);
    /* 006937cf: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006937d6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006937d9: jne 0x6937e1 */ if (!fZ) goto L_006937e1;
L_006937db:; BB(0x006937db);
    /* 006937db: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006937de: ret 0x10 */ FN_RET(0x006937c8); r_esp += 20; return;
L_006937e1:; BB(0x006937e1);
    /* 006937e1: movzx edx, word ptr [esp + 0x24] */ r_edx = (u32)R16((u32)(r_esp+0x24u));
    /* 006937e6: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006937ea: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006937ee: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006937f2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006937f4: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006937fc: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00693801: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00693805: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0069380d: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 00693812: mov byte ptr [esp], 0x2c */ W8((u32)(r_esp), 0x2cu);
    /* 00693816: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 0069381b: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 00693820: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00693822: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00693826: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0069382a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069382d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00693830: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00693834: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00693838: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69383du); f_008003e0();
    /* 0069383d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00693840: ret 0x10 */ FN_RET(0x006937c8); r_esp += 20; return;
}

void f_00693844(void) /* sub_693844 */
{
    FN_ENTER(0x00693844);
    /* 00693844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693845: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00693848: mov edi, ecx */ r_edi = r_ecx;
    /* 0069384a: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0069384d: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 00693853: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00693856: fadd dword ptr [edi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x310u));
    /* 0069385c: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 0069385f: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 00693865: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00693867: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00693869: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069386c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00693870: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00693874: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00693877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693878: mov ecx, edi */ r_ecx = r_edi;
    /* 0069387a: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x69387du); call_ind(t); }
    /* 0069387d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069387f: je 0x6938ec */ if (fZ) goto L_006938ec;
L_00693881:; BB(0x00693881);
    /* 00693881: mov ecx, edi */ r_ecx = r_edi;
    /* 00693883: call 0x693900 */ r_esp -= 4; W32(r_esp, 0x693888u); f_00693900();
    /* 00693888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069388a: je 0x69389d */ if (fZ) goto L_0069389d;
L_0069388c:; BB(0x0069388c);
    /* 0069388c: mov ecx, edi */ r_ecx = r_edi;
    /* 0069388e: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x693893u); f_0077774c();
    /* 00693893: mov eax, 2 */ r_eax = 0x2u;
    /* 00693898: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069389b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069389c: ret  */ FN_RET(0x00693844); r_esp += 4; return;
L_0069389d:; BB(0x0069389d);
    /* 0069389d: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 006938a3: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 006938a6: test eax, 0x380000 */ {  u32 a = r_eax; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006938ab: je 0x6938c5 */ if (fZ) goto L_006938c5;
L_006938ad:; BB(0x006938ad);
    /* 006938ad: test eax, 0x1c00000 */ {  u32 a = r_eax; u32 b = 0x1c00000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006938b2: je 0x6938c5 */ if (fZ) goto L_006938c5;
L_006938b4:; BB(0x006938b4);
    /* 006938b4: mov ecx, edi */ r_ecx = r_edi;
    /* 006938b6: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6938bbu); f_0077774c();
    /* 006938bb: mov eax, 4 */ r_eax = 0x4u;
    /* 006938c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006938c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006938c4: ret  */ FN_RET(0x00693844); r_esp += 4; return;
L_006938c5:; BB(0x006938c5);
    /* 006938c5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006938c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006938c9: mov ecx, edi */ r_ecx = r_edi;
    /* 006938cb: call 0x694148 */ r_esp -= 4; W32(r_esp, 0x6938d0u); f_00694148();
    /* 006938d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006938d2: jne 0x6938db */ if (!fZ) goto L_006938db;
L_006938d4:; BB(0x006938d4);
    /* 006938d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006938d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006938d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006938da: ret  */ FN_RET(0x00693844); r_esp += 4; return;
L_006938db:; BB(0x006938db);
    /* 006938db: mov ecx, edi */ r_ecx = r_edi;
    /* 006938dd: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6938e2u); f_0077774c();
    /* 006938e2: mov eax, 3 */ r_eax = 0x3u;
    /* 006938e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006938ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006938eb: ret  */ FN_RET(0x00693844); r_esp += 4; return;
L_006938ec:; BB(0x006938ec);
    /* 006938ec: mov ecx, edi */ r_ecx = r_edi;
    /* 006938ee: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6938f3u); f_0077774c();
    /* 006938f3: mov eax, 1 */ r_eax = 0x1u;
    /* 006938f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006938fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006938fc: ret  */ FN_RET(0x00693844); r_esp += 4; return;
}

void f_00693900(void) /* sub_693900 */
{
    FN_ENTER(0x00693900);
    /* 00693900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00693901: mov ebx, esp */ r_ebx = r_esp;
    /* 00693903: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00693906: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00693907: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693908: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693909: sub esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069390f: mov edi, ecx */ r_edi = r_ecx;
    /* 00693911: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x693916u); f_006dc358();
    /* 00693916: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693919: jne 0x693a0f */ if (!fZ) goto L_00693a0f;
L_0069391f:; BB(0x0069391f);
    /* 0069391f: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00693925: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 0069392b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0069392d: fmul qword ptr [0x93c668] */ ST(0) = ST(0) * R_F64((u32)(0x93c668u));
    /* 00693933: fdiv qword ptr [0x93c660] */ ST(0) = ST(0) / R_F64((u32)(0x93c660u));
    /* 00693939: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0069393d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00693942: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693947: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0069394b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0069394f: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00693953: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00693957: lea ecx, [edi + 0x30c] */ r_ecx = (u32)(r_edi+0x30cu);
    /* 0069395d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00693961: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x693966u); f_0083173c();
    /* 00693966: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0069396c: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0069396f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693971: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00693975: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00693977: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x69397cu); f_0082dcbc();
    /* 0069397c: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00693980: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00693984: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00693988: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0069398c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069398e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x693993u); f_0082ddd8();
    /* 00693993: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00693997: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00693999: fld dword ptr [0x93c6d4] */ FPUSH(R_F32((u32)(0x93c6d4u)));
    /* 0069399f: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 006939a2: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 006939a5: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 006939a8: fstp dword ptr [esp + 0x130] */ W_F32((u32)(r_esp+0x130u), ST(0)); FPOP();
    /* 006939af: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 006939b6: mov dword ptr [esp + 0x12c], eax */ W32((u32)(r_esp+0x12cu), r_eax);
    /* 006939bd: fld dword ptr [esp + 0x12c] */ FPUSH(R_F32((u32)(r_esp+0x12cu)));
    /* 006939c4: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 006939c8: fstp dword ptr [esp + 0x138] */ W_F32((u32)(r_esp+0x138u), ST(0)); FPOP();
    /* 006939cf: mov dword ptr [esp + 0x134], edx */ W32((u32)(r_esp+0x134u), r_edx);
    /* 006939d6: fadd dword ptr [esp + 0x134] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x134u));
    /* 006939dd: fstp dword ptr [esp + 0x140] */ W_F32((u32)(r_esp+0x140u), ST(0)); FPOP();
    /* 006939e4: mov dword ptr [esp + 0x13c], ecx */ W32((u32)(r_esp+0x13cu), r_ecx);
    /* 006939eb: lea esi, [esp + 0x12c] */ r_esi = (u32)(r_esp+0x12cu);
    /* 006939f2: lea ebp, [esp + 0x138] */ r_ebp = (u32)(r_esp+0x138u);
    /* 006939f9: push 0x28a0 */ { u32 v = 0x28a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006939fe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006939ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00693a00: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x693a05u); f_0077fffc();
    /* 00693a05: mov ebp, eax */ r_ebp = r_eax;
    /* 00693a07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693a0a: jmp 0x694046 */ goto L_00694046;
L_00693a0f:; BB(0x00693a0f);
    /* 00693a0f: mov esi, dword ptr [edi + 0xa4] */ r_esi = R32((u32)(r_edi+0xa4u));
    /* 00693a15: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 00693a18: mov esi, dword ptr [esi + 0xc] */ r_esi = R32((u32)(r_esi+0xcu));
    /* 00693a1b: mov eax, dword ptr [edi + 0x30c] */ r_eax = R32((u32)(r_edi+0x30cu));
    /* 00693a21: mov edx, dword ptr [edi + 0x314] */ r_edx = R32((u32)(r_edi+0x314u));
    /* 00693a27: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00693a2b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 00693a33: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00693a37: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00693a3b: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00693a3f: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x693a44u); f_0083173c();
    /* 00693a44: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00693a48: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00693a4c: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 00693a50: fld dword ptr [0x93c6d4] */ FPUSH(R_F32((u32)(0x93c6d4u)));
    /* 00693a56: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 00693a59: mov ebp, dword ptr [edi + 0x38] */ r_ebp = R32((u32)(r_edi+0x38u));
    /* 00693a5c: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00693a60: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00693a64: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00693a67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00693a69: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00693a6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693a6f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00693a73: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00693a77: mov dword ptr [esp + 0x5c], 1 */ W32((u32)(r_esp+0x5cu), 0x1u);
    /* 00693a7f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00693a83: mov dword ptr [esp + 0x64], 0x28a0 */ W32((u32)(r_esp+0x64u), 0x28a0u);
    /* 00693a8b: lea edx, [esp + 0x78] */ r_edx = (u32)(r_esp+0x78u);
    /* 00693a8f: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00693a93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693a95: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00693a97: fmul qword ptr [0x93c668] */ ST(0) = ST(0) * R_F64((u32)(0x93c668u));
    /* 00693a9d: fdiv qword ptr [0x93c660] */ ST(0) = ST(0) / R_F64((u32)(0x93c660u));
    /* 00693aa3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00693aa7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00693aac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693ab1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00693ab5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00693ab9: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00693abd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00693ac1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00693ac5: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 00693ac9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x693aceu); f_0082dcbc();
    /* 00693ace: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 00693ad2: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00693ad6: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00693ada: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 00693ae2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x693ae7u); f_0082ddd8();
    /* 00693ae7: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00693aeb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00693aed: fadd dword ptr [0x93c6dc] */ ST(0) = ST(0) + R_F32((u32)(0x93c6dcu));
    /* 00693af3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693af5: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 00693afc: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00693b00: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 00693b04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693b05: call 0x780fc0 */ r_esp -= 4; W32(r_esp, 0x693b0au); f_00780fc0();
    /* 00693b0a: mov ebp, eax */ r_ebp = r_eax;
    /* 00693b0c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693b0f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693b11: je 0x693cc2 */ if (fZ) goto L_00693cc2;
L_00693b17:; BB(0x00693b17);
    /* 00693b17: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00693b1a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00693b1e: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00693b21: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693b23: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00693b26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693b28: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693b2a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693b2c: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00693b2f: lea edx, [edx + eax + 0xc] */ r_edx = (u32)(r_edx+r_eax+0xcu);
    /* 00693b33: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00693b37: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00693b3b: mov dword ptr [esp + 0xd8], edx */ W32((u32)(r_esp+0xd8u), r_edx);
    /* 00693b42: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00693b46: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 00693b4d: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00693b51: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 00693b58: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00693b5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693b60: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x693b65u); f_00782868();
    /* 00693b65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693b67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693b6a: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00693b6e: lea ecx, [esp + 0xd8] */ r_ecx = (u32)(r_esp+0xd8u);
    /* 00693b75: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x693b7au); f_0082f9e0();
    /* 00693b7a: fcomp dword ptr [0x93c6d0] */ fx_compare(ST(0), R_F32((u32)(0x93c6d0u))); FPOP();
    /* 00693b80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693b82: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00693b83: ja 0x693b9c */ if ((!fC&&!fZ)) goto L_00693b9c;
L_00693b85:; BB(0x00693b85);
    /* 00693b85: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00693b8b: mov eax, dword ptr [edi + 0x310] */ r_eax = R32((u32)(r_edi+0x310u));
    /* 00693b91: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 00693b97: jmp 0x693cd4 */ goto L_00693cd4;
L_00693b9c:; BB(0x00693b9c);
    /* 00693b9c: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00693ba0: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00693ba4: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 00693ba8: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00693bac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693bae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693bb0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00693bb3: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693bb5: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00693bb9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00693bbb: fadd dword ptr [eax + edx] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edx));
    /* 00693bbe: fstp dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0)); FPOP();
    /* 00693bc5: fadd dword ptr [eax + edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edx+0x4u));
    /* 00693bc9: fstp dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0)); FPOP();
    /* 00693bd0: fadd dword ptr [eax + edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edx+0x8u));
    /* 00693bd4: lea eax, [esp + 0xe4] */ r_eax = (u32)(r_esp+0xe4u);
    /* 00693bdb: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00693be2: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00693be9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693beb: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00693bee: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x693bf3u); f_007a8c4c();
    /* 00693bf3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693bf6: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00693bfa: lea eax, [esp + 0xd8] */ r_eax = (u32)(r_esp+0xd8u);
    /* 00693c01: lea ecx, [esp + 0xf0] */ r_ecx = (u32)(r_esp+0xf0u);
    /* 00693c08: call 0x69410c */ r_esp -= 4; W32(r_esp, 0x693c0du); f_0069410c();
    /* 00693c0d: lea ebp, [esp + 0x68] */ r_ebp = (u32)(r_esp+0x68u);
    /* 00693c11: lea eax, [esp + 0xd8] */ r_eax = (u32)(r_esp+0xd8u);
    /* 00693c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693c19: lea edx, [edi + 0x404] */ r_edx = (u32)(r_edi+0x404u);
    /* 00693c1f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693c21: call 0x7a8c4c */ r_esp -= 4; W32(r_esp, 0x693c26u); f_007a8c4c();
    /* 00693c26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693c29: mov dword ptr [esp + 0xdc], 0 */ W32((u32)(r_esp+0xdcu), 0x0u);
    /* 00693c34: lea eax, [esp + 0xd8] */ r_eax = (u32)(r_esp+0xd8u);
    /* 00693c3b: lea edx, [esp + 0xf0] */ r_edx = (u32)(r_esp+0xf0u);
    /* 00693c42: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 00693c49: call 0x694064 */ r_esp -= 4; W32(r_esp, 0x693c4eu); f_00694064();
    /* 00693c4e: fld dword ptr [esp + 0xfc] */ FPUSH(R_F32((u32)(r_esp+0xfcu)));
    /* 00693c55: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00693c58: fld dword ptr [esp + 0x104] */ FPUSH(R_F32((u32)(r_esp+0x104u)));
    /* 00693c5f: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00693c62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693c64: fstp dword ptr [edi + 0x404] */ W_F32((u32)(r_edi+0x404u), ST(0)); FPOP();
    /* 00693c6a: fstp dword ptr [edi + 0x40c] */ W_F32((u32)(r_edi+0x40cu), ST(0)); FPOP();
    /* 00693c70: lea edx, [esp + 0xf0] */ r_edx = (u32)(r_esp+0xf0u);
    /* 00693c77: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 00693c7e: lea eax, [edi + 0x30c] */ r_eax = (u32)(r_edi+0x30cu);
    /* 00693c84: call 0x694064 */ r_esp -= 4; W32(r_esp, 0x693c89u); f_00694064();
    /* 00693c89: fld dword ptr [esp + 0xfc] */ FPUSH(R_F32((u32)(r_esp+0xfcu)));
    /* 00693c90: mov eax, dword ptr [esp + 0xfc] */ r_eax = R32((u32)(r_esp+0xfcu));
    /* 00693c97: fld dword ptr [esp + 0x104] */ FPUSH(R_F32((u32)(r_esp+0x104u)));
    /* 00693c9e: mov edx, dword ptr [esp + 0x104] */ r_edx = R32((u32)(r_esp+0x104u));
    /* 00693ca5: mov dword ptr [edi + 0x30c], eax */ W32((u32)(r_edi+0x30cu), r_eax);
    /* 00693cab: mov eax, dword ptr [esp + 0x100] */ r_eax = R32((u32)(r_esp+0x100u));
    /* 00693cb2: mov dword ptr [edi + 0x310], eax */ W32((u32)(r_edi+0x310u), r_eax);
    /* 00693cb8: mov dword ptr [edi + 0x314], edx */ W32((u32)(r_edi+0x314u), r_edx);
    /* 00693cbe: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00693cc0: jmp 0x693cd4 */ goto L_00693cd4;
L_00693cc2:; BB(0x00693cc2);
    /* 00693cc2: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 00693cc8: mov eax, dword ptr [edi + 0x310] */ r_eax = R32((u32)(r_edi+0x310u));
    /* 00693cce: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
L_00693cd4:; BB(0x00693cd4);
    /* 00693cd4: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 00693cd7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00693cd9: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 00693cdd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693cdf: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 00693ce3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00693ce5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693ce7: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00693ceb: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00693cee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693cf0: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00693cf4: mov dword ptr [esp + 0x5c], 8 */ W32((u32)(r_esp+0x5cu), 0x8u);
    /* 00693cfc: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00693d00: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00693d04: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 00693d08: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00693d0c: mov ebp, eax */ r_ebp = r_eax;
    /* 00693d0e: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00693d12: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00693d16: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00693d18:; BB(0x00693d18);
    /* 00693d18: mov ecx, edi */ r_ecx = r_edi;
    /* 00693d1a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x693d1fu); f_0082dcbc();
    /* 00693d1f: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00693d23: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00693d26: mov ecx, edi */ r_ecx = r_edi;
    /* 00693d28: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 00693d2f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x693d34u); f_0082ddd8();
    /* 00693d34: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00693d38: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00693d3b: add edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693d41: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693d44: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693d47: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693d4a: jl 0x693d18 */ if ((fS!=fO)) goto L_00693d18;
L_00693d4c:; BB(0x00693d4c);
    /* 00693d4c: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00693d50: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00693d54: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00693d58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693d59: call 0x7812c8 */ r_esp -= 4; W32(r_esp, 0x693d5eu); f_007812c8();
    /* 00693d5e: mov esi, eax */ r_esi = r_eax;
    /* 00693d60: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693d63: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693d65: je 0x694046 */ if (fZ) goto L_00694046;
L_00693d6b:; BB(0x00693d6b);
    /* 00693d6b: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00693d6f: mov ebp, dword ptr [esi + 8] */ r_ebp = R32((u32)(r_esi+0x8u));
    /* 00693d72: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
    /* 00693d76: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00693d7a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693d7c: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00693d7f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693d81: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693d83: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00693d85: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00693d88: mov dword ptr [esp + 0x38], ebp */ W32((u32)(r_esp+0x38u), r_ebp);
    /* 00693d8c: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 00693d93: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00693d97: mov dword ptr [esp + 0xdc], eax */ W32((u32)(r_esp+0xdcu), r_eax);
    /* 00693d9e: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 00693da2: mov dword ptr [esp + 0xe0], eax */ W32((u32)(r_esp+0xe0u), r_eax);
    /* 00693da9: lea ebp, [edx + ebp + 0xc] */ r_ebp = (u32)(r_edx+r_ebp+0xcu);
    /* 00693dad: lea eax, [esp + 0xd8] */ r_eax = (u32)(r_esp+0xd8u);
    /* 00693db4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693db5: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x693dbau); f_00782868();
    /* 00693dba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693dbc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693dbf: lea ecx, [esp + 0xd8] */ r_ecx = (u32)(r_esp+0xd8u);
    /* 00693dc6: mov edx, ebp */ r_edx = r_ebp;
    /* 00693dc8: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x693dcdu); f_0082f9e0();
    /* 00693dcd: fcom dword ptr [0x93c6d0] */ fx_compare(ST(0), R_F32((u32)(0x93c6d0u))); 
    /* 00693dd3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693dd5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00693dd6: ja 0x693de1 */ if ((!fC&&!fZ)) goto L_00693de1;
L_00693dd8:; BB(0x00693dd8);
    /* 00693dd8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00693dda: mov ebp, esi */ r_ebp = r_esi;
    /* 00693ddc: jmp 0x694046 */ goto L_00694046;
L_00693de1:; BB(0x00693de1);
    /* 00693de1: fcomp dword ptr [0x93c6e0] */ fx_compare(ST(0), R_F32((u32)(0x93c6e0u))); FPOP();
    /* 00693de7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00693de9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00693dea: jbe 0x693df3 */ if ((fC||fZ)) goto L_00693df3;
L_00693dec:; BB(0x00693dec);
    /* 00693dec: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00693dee: jmp 0x694046 */ goto L_00694046;
L_00693df3:; BB(0x00693df3);
    /* 00693df3: fld dword ptr [0x93c6d8] */ FPUSH(R_F32((u32)(0x93c6d8u)));
    /* 00693df9: fadd dword ptr [esi + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xcu));
    /* 00693dfc: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00693e00: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00693e04: mov ebp, dword ptr [esi + 4] */ r_ebp = R32((u32)(r_esi+0x4u));
    /* 00693e07: fld dword ptr [edx + ebp + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_ebp+0xcu)));
    /* 00693e0b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00693e0d: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00693e11: fld dword ptr [edx + ebp + 0x14] */ FPUSH(R_F32((u32)(r_edx+r_ebp+0x14u)));
    /* 00693e15: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00693e19: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00693e1b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693e1d: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00693e21: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00693e23: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00693e27: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00693e29: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00693e2b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693e2d: fstp dword ptr [esp + 0x108] */ W_F32((u32)(r_esp+0x108u), ST(0)); FPOP();
    /* 00693e34: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00693e36: fstp dword ptr [esp + 0x110] */ W_F32((u32)(r_esp+0x110u), ST(0)); FPOP();
    /* 00693e3d: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 00693e44: lea edx, [edi + 0x404] */ r_edx = (u32)(r_edi+0x404u);
    /* 00693e4a: lea ebp, [esp + 0x108] */ r_ebp = (u32)(r_esp+0x108u);
    /* 00693e51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693e52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693e53: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x693e58u); f_007a90a8();
    /* 00693e58: mov ebp, eax */ r_ebp = r_eax;
    /* 00693e5a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693e5b: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00693e5e: call 0x7a8cd0 */ r_esp -= 4; W32(r_esp, 0x693e63u); f_007a8cd0();
    /* 00693e63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00693e64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00693e65: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x693e6au); f_007a8cb8();
    /* 00693e6a: mov ebp, eax */ r_ebp = r_eax;
    /* 00693e6c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00693e6f: fld dword ptr [edi + 0x6b8] */ FPUSH(R_F32((u32)(r_edi+0x6b8u)));
    /* 00693e75: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00693e79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00693e7b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x693e80u); f_0082dcbc();
    /* 00693e80: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00693e84: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00693e86: fld dword ptr [edi + 0x6b8] */ FPUSH(R_F32((u32)(r_edi+0x6b8u)));
    /* 00693e8c: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00693e90: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00693e94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00693e96: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 00693e9e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x693ea3u); f_0082ddd8();
    /* 00693ea3: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00693ea7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00693ea9: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00693ead: fld dword ptr [esp + 0x108] */ FPUSH(R_F32((u32)(r_esp+0x108u)));
    /* 00693eb4: fld dword ptr [esp + 0x110] */ FPUSH(R_F32((u32)(r_esp+0x110u)));
    /* 00693ebb: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 00693ebf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00693ec1: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 00693ec5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693ec7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00693ec9: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00693ecd: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00693ecf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00693ed1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00693ed5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693ed7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693ed9: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00693edd: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00693edf: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 00693ee3: mov edx, dword ptr [ecx + ebp] */ r_edx = R32((u32)(r_ecx+r_ebp));
    /* 00693ee6: mov dword ptr [esp + 0x114], edx */ W32((u32)(r_esp+0x114u), r_edx);
    /* 00693eed: mov edx, dword ptr [ecx + ebp + 4] */ r_edx = R32((u32)(r_ecx+r_ebp+0x4u));
    /* 00693ef1: mov dword ptr [esp + 0x118], edx */ W32((u32)(r_esp+0x118u), r_edx);
    /* 00693ef8: mov edx, dword ptr [ecx + ebp + 8] */ r_edx = R32((u32)(r_ecx+r_ebp+0x8u));
    /* 00693efc: mov dword ptr [esp + 0x11c], edx */ W32((u32)(r_esp+0x11cu), r_edx);
    /* 00693f03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693f05: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00693f07: fmul qword ptr [0x93c668] */ ST(0) = ST(0) * R_F64((u32)(0x93c668u));
    /* 00693f0d: fdiv qword ptr [0x93c660] */ ST(0) = ST(0) / R_F64((u32)(0x93c660u));
    /* 00693f13: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00693f17: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00693f1c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00693f21: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00693f25: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00693f29: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00693f2d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00693f31: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00693f35: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00693f37: lea eax, [esp + 0x78] */ r_eax = (u32)(r_esp+0x78u);
    /* 00693f3b: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00693f3f: mov esi, eax */ r_esi = r_eax;
    /* 00693f41: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00693f45: mov edi, ecx */ r_edi = r_ecx;
L_00693f47:; BB(0x00693f47);
    /* 00693f47: mov ecx, edi */ r_ecx = r_edi;
    /* 00693f49: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x693f4eu); f_0082dcbc();
    /* 00693f4e: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00693f52: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00693f54: mov ecx, edi */ r_ecx = r_edi;
    /* 00693f56: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 00693f5d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x693f62u); f_0082ddd8();
    /* 00693f62: fmul dword ptr [esp + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x3cu));
    /* 00693f66: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00693f69: add edi, 0x2000 */ {  u32 a = r_edi; u32 b = 0x2000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00693f6f: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00693f72: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693f75: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00693f78: jl 0x693f47 */ if ((fS!=fO)) goto L_00693f47;
L_00693f7a:; BB(0x00693f7a);
    /* 00693f7a: mov esi, dword ptr [esp + 0x34] */ r_esi = R32((u32)(r_esp+0x34u));
    /* 00693f7e: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00693f82: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00693f86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00693f87: call 0x7812c8 */ r_esp -= 4; W32(r_esp, 0x693f8cu); f_007812c8();
    /* 00693f8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00693f8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00693f8f: jne 0x693fae */ if (!fZ) goto L_00693fae;
L_00693f91:; BB(0x00693f91);
    /* 00693f91: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00693f95: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00693f98: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00693f9c: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00693f9f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00693fa1: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 00693fa4: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00693fa7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00693fa9: jmp 0x694046 */ goto L_00694046;
L_00693fae:; BB(0x00693fae);
    /* 00693fae: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00693fb2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00693fb5: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00693fb9: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 00693fbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693fc1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693fc3: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00693fc6: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00693fc8: mov edx, dword ptr [ebp + eax] */ r_edx = R32((u32)(r_ebp+r_eax));
    /* 00693fcc: mov dword ptr [esp + 0x120], edx */ W32((u32)(r_esp+0x120u), r_edx);
    /* 00693fd3: mov edx, dword ptr [ebp + eax + 4] */ r_edx = R32((u32)(r_ebp+r_eax+0x4u));
    /* 00693fd7: fchs  */ ST(0) = -ST(0);
    /* 00693fd9: mov dword ptr [esp + 0x124], edx */ W32((u32)(r_esp+0x124u), r_edx);
    /* 00693fe0: mov edx, dword ptr [ebp + eax + 8] */ r_edx = R32((u32)(r_ebp+r_eax+0x8u));
    /* 00693fe4: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00693fe8: mov dword ptr [esp + 0x128], edx */ W32((u32)(r_esp+0x128u), r_edx);
    /* 00693fef: mov edx, dword ptr [edi + 0x30c] */ r_edx = R32((u32)(r_edi+0x30cu));
    /* 00693ff5: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00693ff9: lea edx, [esp + 0x114] */ r_edx = (u32)(r_esp+0x114u);
    /* 00694000: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x694005u); f_0082f9e0();
    /* 00694005: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00694009: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0069400d: lea edx, [esp + 0x120] */ r_edx = (u32)(r_esp+0x120u);
    /* 00694014: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x694019u); f_0082f9e0();
    /* 00694019: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0069401d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069401f: fcomp dword ptr [0x93c6e0] */ fx_compare(ST(0), R_F32((u32)(0x93c6e0u))); FPOP();
    /* 00694025: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694027: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694028: jb 0x694044 */ if (fC) goto L_00694044;
L_0069402a:; BB(0x0069402a);
    /* 0069402a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0069402e: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00694031: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00694035: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00694038: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069403a: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0069403d: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00694040: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00694042: jmp 0x694046 */ goto L_00694046;
L_00694044:; BB(0x00694044);
    /* 00694044: mov ebp, esi */ r_ebp = r_esi;
L_00694046:; BB(0x00694046);
    /* 00694046: mov eax, ebp */ r_eax = r_ebp;
    /* 00694048: add esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069404e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069404f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694050: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694051: mov esp, ebx */ r_esp = r_ebx;
    /* 00694053: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694054: ret  */ FN_RET(0x00693900); r_esp += 4; return;
}

void f_00693fea(void)
{
    FN_ENTER(0x00693fea);
    /* 00693fea: and al, 0x28 */ {  u32 a = (u8)r_eax; u32 b = 0x28u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00693fec: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00693fee: add byte ptr [ebx + 0x30c97], cl */ { u32 ad = (u32)(r_ebx+0x30c97u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00693ff4: add byte ptr [ecx - 0x72a7dbac], cl */ { u32 ad = (u32)(r_ecx+0x8d582454u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00693ffa: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 00693ffb: and al, 0x14 */ {  u32 a = (u8)r_eax; u32 b = 0x14u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00693ffd: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00693fff: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00694001: fstp xword ptr [ecx + 0x5cd90019] */ W_F80((u32)(r_ecx+0x5cd90019u), ST(0)); FPOP();
    /* 00694007: and al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00694009: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 0069400d: lea edx, [esp + 0x120] */ r_edx = (u32)(r_esp+0x120u);
    /* 00694014: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x694019u); f_0082f9e0();
    /* 00694019: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0069401d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069401f: fcomp dword ptr [0x93c6e0] */ fx_compare(ST(0), R_F32((u32)(0x93c6e0u))); FPOP();
    /* 00694025: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00694027: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00694028: jb 0x694044 */ if (fC) goto L_00694044;
L_0069402a:; BB(0x0069402a);
    /* 0069402a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0069402e: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 00694031: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00694035: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00694038: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069403a: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0069403d: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00694040: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00694042: jmp 0x694046 */ goto L_00694046;
L_00694044:; BB(0x00694044);
    /* 00694044: mov ebp, esi */ r_ebp = r_esi;
L_00694046:; BB(0x00694046);
    /* 00694046: mov eax, ebp */ r_eax = r_ebp;
    /* 00694048: add esp, 0x144 */ {  u32 a = r_esp; u32 b = 0x144u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069404e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069404f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00694050: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00694051: mov esp, ebx */ r_esp = r_ebx;
    /* 00694053: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00694054: ret  */ FN_RET(0x00693fea); r_esp += 4; return;
}

