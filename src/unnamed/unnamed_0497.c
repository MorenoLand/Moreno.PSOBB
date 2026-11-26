#include "protos.h"

void f_004970a0(void) /* sub_4970A0 */
{
    FN_ENTER(0x004970a0);
    /* 004970a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004970a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004970a2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004970a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004970a7: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 004970ab: mov eax, dword ptr [ebp + ebx*4 + 0x500] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x500u));
    /* 004970b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004970b4: je 0x4970be */ if (fZ) goto L_004970be;
L_004970b6:; BB(0x004970b6);
    /* 004970b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004970b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004970ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004970bb: ret 4 */ FN_RET(0x004970a0); r_esp += 8; return;
L_004970be:; BB(0x004970be);
    /* 004970be: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004970c1: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 004970c4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004970c7: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 004970ca: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004970ce: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004970d2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004970d5: push dword ptr [ebx*8 + 0x902990] */ { u32 v = R32((u32)(r_ebx*8+0x902990u)); r_esp -= 4; W32(r_esp, v); }
    /* 004970dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004970dd: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4970e2u); f_00509590();
    /* 004970e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004970e5: mov dword ptr [ebp + ebx*4 + 0x500], eax */ W32((u32)(r_ebp+r_ebx*4+0x500u), r_eax);
    /* 004970ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004970ee: je 0x4970f9 */ if (fZ) goto L_004970f9;
L_004970f0:; BB(0x004970f0);
    /* 004970f0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004970f2: mov ecx, eax */ r_ecx = r_eax;
    /* 004970f4: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x4970f9u); f_00508efc();
L_004970f9:; BB(0x004970f9);
    /* 004970f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004970fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004970fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004970fe: ret 4 */ FN_RET(0x004970a0); r_esp += 8; return;
}

void f_00497104(void) /* sub_497104 */
{
    FN_ENTER(0x00497104);
    /* 00497104: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00497105: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00497106: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00497108: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0049710c: mov eax, dword ptr [ebp + ebx*4 + 0x500] */ r_eax = R32((u32)(r_ebp+r_ebx*4+0x500u));
    /* 00497113: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00497115: je 0x497129 */ if (fZ) goto L_00497129;
L_00497117:; BB(0x00497117);
    /* 00497117: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00497118: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x49711du); f_005cdcc0();
    /* 0049711d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049711e: mov dword ptr [ebp + ebx*4 + 0x500], 0 */ W32((u32)(r_ebp+r_ebx*4+0x500u), 0x0u);
L_00497129:; BB(0x00497129);
    /* 00497129: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049712a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049712b: ret 4 */ FN_RET(0x00497104); r_esp += 8; return;
}

void f_00497130(void) /* sub_497130 */
{
    FN_ENTER(0x00497130);
    /* 00497130: add dword ptr [ecx + 0x510], 1 */ { u32 ad = (u32)(r_ecx+0x510u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497137: ret  */ FN_RET(0x00497130); r_esp += 4; return;
}

void f_00497138(void) /* sub_497138 */
{
    FN_ENTER(0x00497138);
    /* 00497138: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00497139: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0049713a: mov eax, ecx */ r_eax = r_ecx;
    /* 0049713c: mov dword ptr [eax + 0x510], 0 */ W32((u32)(r_eax+0x510u), 0x0u);
    /* 00497146: lea edx, [eax + 0x514] */ r_edx = (u32)(r_eax+0x514u);
    /* 0049714c: add eax, 0x574 */ {  u32 a = r_eax; u32 b = 0x574u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00497151: mov ebx, eax */ r_ebx = r_eax;
    /* 00497153: mov esi, edx */ r_esi = r_edx;
L_00497155:; BB(0x00497155);
    /* 00497155: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00497157: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497159: je 0x497168 */ if (fZ) goto L_00497168;
L_0049715b:; BB(0x0049715b);
    /* 0049715b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0049715c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x497161u); f_005cdcc0();
    /* 00497161: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00497162: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00497168:; BB(0x00497168);
    /* 00497168: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049716b: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0049716d: ja 0x497155 */ if ((!fC&&!fZ)) goto L_00497155;
L_0049716f:; BB(0x0049716f);
    /* 0049716f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00497170: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00497171: ret  */ FN_RET(0x00497138); r_esp += 4; return;
}

void f_00497174(void) /* sub_497174 */
{
    FN_ENTER(0x00497174);
    /* 00497174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00497175: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00497178: mov edi, ecx */ r_edi = r_ecx;
    /* 0049717a: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0049717d: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00497180: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00497184: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00497187: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0049718b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0049718f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x497194u); f_0082d7b0();
    /* 00497194: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00497196: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x49719bu); f_00830cd8();
    /* 0049719b: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0049719e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004971a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4971a5u); f_0082d8bc();
    /* 004971a5: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004971a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004971aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004971ac: mov edx, 0x902718 */ r_edx = 0x902718u;
    /* 004971b1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x4971b6u); f_0082eab8();
    /* 004971b6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004971ba: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 004971be: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 004971c2: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 004971c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004971c8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004971cc: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004971d0: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 004971d8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4971ddu); f_0082da80();
    /* 004971dd: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 004971e0: mov dword ptr [esp + 0x24], 0x41f00000 */ W32((u32)(r_esp+0x24u), 0x41f00000u);
    /* 004971e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004971ea: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004971ee: mov dword ptr [esp + 0x28], 0x41c80000 */ W32((u32)(r_esp+0x28u), 0x41c80000u);
    /* 004971f6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004971fa: mov dword ptr [esp + 0x2c], 0x41f00000 */ W32((u32)(r_esp+0x2cu), 0x41f00000u);
    /* 00497202: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00497206: mov dword ptr [esp + 0x30], 2 */ W32((u32)(r_esp+0x30u), 0x2u);
    /* 0049720e: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00497212: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00497215: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00497216: call 0x65f960 */ r_esp -= 4; W32(r_esp, 0x49721bu); f_0065f960();
    /* 0049721b: mov dword ptr [edi + 0x688], eax */ W32((u32)(r_edi+0x688u), r_eax);
    /* 00497221: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497224: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00497225: ret  */ FN_RET(0x00497174); r_esp += 4; return;
}

void f_00497228(void) /* sub_497228 */
{
    FN_ENTER(0x00497228);
    /* 00497228: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0049722b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0049722d: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00497232: mov dword ptr [ecx + 0x4dc], 0x3f800000 */ W32((u32)(r_ecx+0x4dcu), 0x3f800000u);
    /* 0049723c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0049723e: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00497241: add ecx, 0x58c */ {  u32 a = r_ecx; u32 b = 0x58cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00497247: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00497248: push 0x3b5 */ { u32 v = 0x3b5u; r_esp -= 4; W32(r_esp, v); }
    /* 0049724d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x497252u); f_00814298();
    /* 00497252: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497255: ret  */ FN_RET(0x00497228); r_esp += 4; return;
}

void f_00497258(void) /* sub_497258 */
{
    FN_ENTER(0x00497258);
    /* 00497258: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00497259: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049725c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0049725e: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00497264: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497267: je 0x497497 */ if (fZ) goto L_00497497;
L_0049726d:; BB(0x0049726d);
    /* 0049726d: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 00497273: mov eax, 0x28 */ r_eax = 0x28u;
    /* 00497278: mov dword ptr [ebx + 0x37c], eax */ W32((u32)(r_ebx+0x37cu), r_eax);
    /* 0049727e: mov dword ptr [ebx + 0x3fc], edx */ W32((u32)(r_ebx+0x3fcu), r_edx);
    /* 00497284: mov edx, dword ptr [ebx + 0x3f4] */ r_edx = R32((u32)(r_ebx+0x3f4u));
    /* 0049728a: mov dword ptr [ebx + 0x3f8], edx */ W32((u32)(r_ebx+0x3f8u), r_edx);
    /* 00497290: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 00497296: mov dword ptr [ebx + 0x3f4], edx */ W32((u32)(r_ebx+0x3f4u), r_edx);
    /* 0049729c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004972a2: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 004972a8: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 004972ae: mov dword ptr [ebx + 0x3ec], edx */ W32((u32)(r_ebx+0x3ecu), r_edx);
    /* 004972b4: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 004972ba: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 004972c0: mov edx, dword ptr [ebx + 0x3e0] */ r_edx = R32((u32)(r_ebx+0x3e0u));
    /* 004972c6: mov dword ptr [ebx + 0x3e4], edx */ W32((u32)(r_ebx+0x3e4u), r_edx);
    /* 004972cc: mov edx, dword ptr [ebx + 0x3dc] */ r_edx = R32((u32)(r_ebx+0x3dcu));
    /* 004972d2: mov dword ptr [ebx + 0x3e0], edx */ W32((u32)(r_ebx+0x3e0u), r_edx);
    /* 004972d8: mov edx, dword ptr [ebx + 0x3d8] */ r_edx = R32((u32)(r_ebx+0x3d8u));
    /* 004972de: mov dword ptr [ebx + 0x3dc], edx */ W32((u32)(r_ebx+0x3dcu), r_edx);
    /* 004972e4: mov edx, dword ptr [ebx + 0x3d4] */ r_edx = R32((u32)(r_ebx+0x3d4u));
    /* 004972ea: mov dword ptr [ebx + 0x3d8], edx */ W32((u32)(r_ebx+0x3d8u), r_edx);
    /* 004972f0: mov edx, dword ptr [ebx + 0x3d0] */ r_edx = R32((u32)(r_ebx+0x3d0u));
    /* 004972f6: mov dword ptr [ebx + 0x3d4], edx */ W32((u32)(r_ebx+0x3d4u), r_edx);
    /* 004972fc: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 00497302: mov dword ptr [ebx + 0x3d0], edx */ W32((u32)(r_ebx+0x3d0u), r_edx);
    /* 00497308: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0049730e: mov dword ptr [ebx + 0x3cc], edx */ W32((u32)(r_ebx+0x3ccu), r_edx);
    /* 00497314: mov edx, dword ptr [ebx + 0x3c4] */ r_edx = R32((u32)(r_ebx+0x3c4u));
    /* 0049731a: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 00497320: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 00497326: mov dword ptr [ebx + 0x3c4], edx */ W32((u32)(r_ebx+0x3c4u), r_edx);
    /* 0049732c: mov edx, dword ptr [ebx + 0x3bc] */ r_edx = R32((u32)(r_ebx+0x3bcu));
    /* 00497332: mov dword ptr [ebx + 0x3c0], edx */ W32((u32)(r_ebx+0x3c0u), r_edx);
    /* 00497338: mov edx, dword ptr [ebx + 0x3b8] */ r_edx = R32((u32)(r_ebx+0x3b8u));
    /* 0049733e: mov dword ptr [ebx + 0x3bc], edx */ W32((u32)(r_ebx+0x3bcu), r_edx);
    /* 00497344: mov edx, dword ptr [ebx + 0x3b4] */ r_edx = R32((u32)(r_ebx+0x3b4u));
    /* 0049734a: mov dword ptr [ebx + 0x3b8], edx */ W32((u32)(r_ebx+0x3b8u), r_edx);
    /* 00497350: mov edx, dword ptr [ebx + 0x3b0] */ r_edx = R32((u32)(r_ebx+0x3b0u));
    /* 00497356: mov dword ptr [ebx + 0x3b4], edx */ W32((u32)(r_ebx+0x3b4u), r_edx);
    /* 0049735c: mov edx, dword ptr [ebx + 0x3ac] */ r_edx = R32((u32)(r_ebx+0x3acu));
    /* 00497362: mov dword ptr [ebx + 0x3b0], edx */ W32((u32)(r_ebx+0x3b0u), r_edx);
    /* 00497368: mov edx, dword ptr [ebx + 0x3a8] */ r_edx = R32((u32)(r_ebx+0x3a8u));
    /* 0049736e: mov dword ptr [ebx + 0x3ac], edx */ W32((u32)(r_ebx+0x3acu), r_edx);
    /* 00497374: mov edx, dword ptr [ebx + 0x3a4] */ r_edx = R32((u32)(r_ebx+0x3a4u));
    /* 0049737a: mov dword ptr [ebx + 0x3a8], edx */ W32((u32)(r_ebx+0x3a8u), r_edx);
    /* 00497380: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 00497386: mov dword ptr [ebx + 0x3a4], edx */ W32((u32)(r_ebx+0x3a4u), r_edx);
    /* 0049738c: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 00497392: mov dword ptr [ebx + 0x3a0], edx */ W32((u32)(r_ebx+0x3a0u), r_edx);
    /* 00497398: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 0049739e: mov dword ptr [ebx + 0x39c], edx */ W32((u32)(r_ebx+0x39cu), r_edx);
    /* 004973a4: mov edx, dword ptr [ebx + 0x394] */ r_edx = R32((u32)(r_ebx+0x394u));
    /* 004973aa: mov dword ptr [ebx + 0x398], edx */ W32((u32)(r_ebx+0x398u), r_edx);
    /* 004973b0: mov edx, dword ptr [ebx + 0x390] */ r_edx = R32((u32)(r_ebx+0x390u));
    /* 004973b6: mov dword ptr [ebx + 0x394], edx */ W32((u32)(r_ebx+0x394u), r_edx);
    /* 004973bc: mov edx, dword ptr [ebx + 0x38c] */ r_edx = R32((u32)(r_ebx+0x38cu));
    /* 004973c2: mov dword ptr [ebx + 0x390], edx */ W32((u32)(r_ebx+0x390u), r_edx);
    /* 004973c8: mov edx, dword ptr [ebx + 0x388] */ r_edx = R32((u32)(r_ebx+0x388u));
    /* 004973ce: mov dword ptr [ebx + 0x38c], edx */ W32((u32)(r_ebx+0x38cu), r_edx);
    /* 004973d4: mov edx, dword ptr [ebx + 0x384] */ r_edx = R32((u32)(r_ebx+0x384u));
    /* 004973da: mov dword ptr [ebx + 0x388], edx */ W32((u32)(r_ebx+0x388u), r_edx);
    /* 004973e0: mov edx, dword ptr [ebx + 0x380] */ r_edx = R32((u32)(r_ebx+0x380u));
    /* 004973e6: mov dword ptr [ebx + 0x384], edx */ W32((u32)(r_ebx+0x384u), r_edx);
    /* 004973ec: mov dword ptr [ebx + 0x380], eax */ W32((u32)(r_ebx+0x380u), r_eax);
    /* 004973f2: mov eax, dword ptr [0x9a7464] */ r_eax = R32((u32)(0x9a7464u));
    /* 004973f7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004973fa: je 0x49747f */ if (fZ) goto L_0049747f;
L_00497400:; BB(0x00497400);
    /* 00497400: cmp eax, dword ptr [ebx + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497406: je 0x49747f */ if (fZ) goto L_0049747f;
L_00497408:; BB(0x00497408);
    /* 00497408: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0049740c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00497410: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00497413: mov dword ptr [ebx + 0x444], eax */ W32((u32)(r_ebx+0x444u), r_eax);
    /* 00497419: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049741b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049741d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049741f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00497421: mov edx, dword ptr [eax + 0x9a6dc0] */ r_edx = R32((u32)(r_eax+0x9a6dc0u));
    /* 00497427: mov dword ptr [ebx + 0x448], edx */ W32((u32)(r_ebx+0x448u), r_edx);
    /* 0049742d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0049742f: lea edx, [ebx + 0x44c] */ r_edx = (u32)(r_ebx+0x44cu);
    /* 00497435: mov edi, eax */ r_edi = r_eax;
    /* 00497437: mov ebp, edx */ r_ebp = r_edx;
    /* 00497439: mov esi, ecx */ r_esi = r_ecx;
L_0049743b:; BB(0x0049743b);
    /* 0049743b: push dword ptr [edi + esi*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_edi+r_esi*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00497442: mov ecx, dword ptr [ebx + 0x404] */ r_ecx = R32((u32)(r_ebx+0x404u));
    /* 00497448: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x49744du); f_005b8638();
    /* 0049744d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00497450: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00497453: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00497456: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 00497459: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0049745c: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0049745f: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 00497466: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00497469: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0049746c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0049746f: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00497472: jl 0x49743b */ if ((fS!=fO)) goto L_0049743b;
L_00497474:; BB(0x00497474);
    /* 00497474: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00497478: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0049747c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0049747f:; BB(0x0049747f);
    /* 0049747f: mov eax, dword ptr [0x9a7468] */ r_eax = R32((u32)(0x9a7468u));
    /* 00497484: mov dword ptr [ebx + 0x420], eax */ W32((u32)(r_ebx+0x420u), r_eax);
    /* 0049748a: mov eax, dword ptr [0x9a746c] */ r_eax = R32((u32)(0x9a746cu));
    /* 0049748f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497491: je 0x497497 */ if (fZ) goto L_00497497;
L_00497493:; BB(0x00497493);
    /* 00497493: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00497495: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x497497u); call_ind(t); }
L_00497497:; BB(0x00497497);
    /* 00497497: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0049749a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0049749b: ret  */ FN_RET(0x00497258); r_esp += 4; return;
}

void f_0049749c(void) /* sub_49749C */
{
    FN_ENTER(0x0049749c);
    /* 0049749c: movzx eax, byte ptr [0xa47310] */ r_eax = (u32)R8((u32)(0xa47310u));
    /* 004974a3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 004974a5: jne 0x4974bb */ if (!fZ) goto L_004974bb;
L_004974a7:; BB(0x004974a7);
    /* 004974a7: mov dword ptr [0xa47314], 0xc1f00000 */ W32((u32)(0xa47314u), 0xc1f00000u);
    /* 004974b1: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 004974b6: mov byte ptr [0xa47310], al */ W8((u32)(0xa47310u), (u8)r_eax);
L_004974bb:; BB(0x004974bb);
    /* 004974bb: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 004974be: fcomp dword ptr [0xa47314] */ fx_compare(ST(0), R_F32((u32)(0xa47314u))); FPOP();
    /* 004974c4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004974c6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004974c7: jb 0x4974ce */ if (fC) goto L_004974ce;
L_004974c9:; BB(0x004974c9);
    /* 004974c9: call 0x7879e0 */ r_esp -= 4; W32(r_esp, 0x4974ceu); f_007879e0();
L_004974ce:; BB(0x004974ce);
    /* 004974ce: ret  */ FN_RET(0x0049749c); r_esp += 4; return;
}

void f_004974d0(void) /* sub_4974D0 */
{
    FN_ENTER(0x004974d0);
    /* 004974d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004974d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004974d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004974d5: push 0x8d02d2 */ { u32 v = 0x8d02d2u; r_esp -= 4; W32(r_esp, v); }
    /* 004974da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004974e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004974e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004974e8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004974eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004974ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004974f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004974f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004974f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004974f9: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004974fc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004974ff: push 0x68c */ { u32 v = 0x68cu; r_esp -= 4; W32(r_esp, v); }
    /* 00497504: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x497509u); f_005caba4();
    /* 00497509: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0049750a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0049750d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049750f: je 0x49757c */ if (fZ) goto L_0049757c;
L_00497511:; BB(0x00497511);
    /* 00497511: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00497518: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0049751f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00497521: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x497526u); f_005caba4();
    /* 00497526: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00497527: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0049752a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049752c: je 0x497578 */ if (fZ) goto L_00497578;
L_0049752e:; BB(0x0049752e);
    /* 0049752e: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00497535: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0049753c: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00497542: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00497545: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x49754au); f_00787a4c();
    /* 0049754a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0049754d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00497554:; BB(0x00497554);
    /* 00497554: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00497557: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049755a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049755b: call 0x497580 */ r_esp -= 4; W32(r_esp, 0x497560u); f_00497580();
    /* 00497560: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497563: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0049756a:; BB(0x0049756a);
    /* 0049756a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0049756d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00497574: mov esp, ebp */ r_esp = r_ebp;
    /* 00497576: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00497577: ret  */ FN_RET(0x004974d0); r_esp += 4; return;
L_00497578:; BB(0x00497578);
    /* 00497578: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0049757a: jmp 0x497554 */ goto L_00497554;
L_0049757c:; BB(0x0049757c);
    /* 0049757c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0049757e: jmp 0x49756a */ goto L_0049756a;
}

void f_00497580(void) /* sub_497580 */
{
    FN_ENTER(0x00497580);
    /* 00497580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00497581: mov ebp, esp */ r_ebp = r_esp;
    /* 00497583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00497585: push 0x8d02ec */ { u32 v = 0x8d02ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0049758a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00497590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00497591: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00497598: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0049759b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0049759e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004975a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004975a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004975a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004975aa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004975ad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004975b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004975b3: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x4975b8u); f_007865e8();
    /* 004975b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004975bf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004975c2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004975c5: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 004975cb: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004975ce: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 004975d4: mov dword ptr [ecx], 0xaf9820 */ W32((u32)(r_ecx), 0xaf9820u);
    /* 004975da: mov eax, dword ptr [0x9a7054] */ r_eax = R32((u32)(0x9a7054u));
    /* 004975df: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004975e2: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 004975e4: mov dword ptr [ecx + 0x400], ebx */ W32((u32)(r_ecx+0x400u), r_ebx);
    /* 004975ea: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004975ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004975ee: call dword ptr [0xaf996c] */ { u32 t = R32((u32)(0xaf996cu)); r_esp -= 4; W32(r_esp, 0x4975f4u); call_ind(t); }
    /* 004975f4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004975f7: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 004975fb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004975fd: jl 0x49763e */ if ((fS!=fO)) goto L_0049763e;
L_004975ff:; BB(0x004975ff);
    /* 004975ff: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00497605: jg 0x49763e */ if ((!fZ&&fS==fO)) goto L_0049763e;
L_00497607:; BB(0x00497607);
    /* 00497607: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 0049760d: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00497610: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00497612: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00497615: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00497617: mov edi, dword ptr [eax + edx + 8] */ r_edi = R32((u32)(r_eax+r_edx+0x8u));
    /* 0049761b: movzx esi, word ptr [eax + edx + 4] */ r_esi = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 00497620: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00497622: jl 0x49763e */ if ((fS!=fO)) goto L_0049763e;
L_00497624:; BB(0x00497624);
    /* 00497624: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0049762a: jg 0x49763e */ if ((!fZ&&fS==fO)) goto L_0049763e;
L_0049762c:; BB(0x0049762c);
    /* 0049762c: mov dword ptr [eax + edx], 0 */ W32((u32)(r_eax+r_edx), 0x0u);
    /* 00497633: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497636: mov dword ptr [eax + edx + 4], esi */ W32((u32)(r_eax+r_edx+0x4u), r_esi);
    /* 0049763a: mov dword ptr [eax + edx + 8], edi */ W32((u32)(r_eax+r_edx+0x8u), r_edi);
L_0049763e:; BB(0x0049763e);
    /* 0049763e: mov esi, dword ptr [0xa46fa0] */ r_esi = R32((u32)(0xa46fa0u));
    /* 00497644: mov eax, dword ptr [0x9a7060] */ r_eax = R32((u32)(0x9a7060u));
    /* 00497649: mov edx, dword ptr [0x9a7064] */ r_edx = R32((u32)(0x9a7064u));
    /* 0049764f: mov ebx, dword ptr [0x9a7068] */ r_ebx = R32((u32)(0x9a7068u));
    /* 00497655: mov dword ptr [ecx + 0x404], esi */ W32((u32)(r_ecx+0x404u), r_esi);
    /* 0049765b: mov esi, dword ptr [0x9029cc] */ r_esi = R32((u32)(0x9029ccu));
    /* 00497661: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00497663: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00497665: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00497668: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 0049766b: push 0x9a6f20 */ { u32 v = 0x9a6f20u; r_esp -= 4; W32(r_esp, v); }
    /* 00497670: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00497673: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 00497676: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 00497679: mov dword ptr [ecx + 0x5c], esi */ W32((u32)(r_ecx+0x5cu), r_esi);
    /* 0049767c: mov esi, dword ptr [0x9029d0] */ r_esi = R32((u32)(0x9029d0u));
    /* 00497682: mov dword ptr [ecx + 0x60], esi */ W32((u32)(r_ecx+0x60u), r_esi);
    /* 00497685: mov esi, dword ptr [0x9029d4] */ r_esi = R32((u32)(0x9029d4u));
    /* 0049768b: mov dword ptr [ecx + 0x64], esi */ W32((u32)(r_ecx+0x64u), r_esi);
    /* 0049768e: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 00497691: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 00497694: mov dword ptr [ecx + 0x7c], ebx */ W32((u32)(r_ecx+0x7cu), r_ebx);
    /* 00497697: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0049769a: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 0049769d: mov dword ptr [ecx + 0x58], ebx */ W32((u32)(r_ecx+0x58u), r_ebx);
    /* 004976a0: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 004976a3: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 004976a6: mov dword ptr [ecx + 0x4c], ebx */ W32((u32)(r_ecx+0x4cu), r_ebx);
    /* 004976a9: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x4976aeu); f_007b9a88();
    /* 004976ae: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004976b1: call 0x4931c0 */ r_esp -= 4; W32(r_esp, 0x4976b6u); f_004931c0();
    /* 004976b6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004976b9: mov dword ptr [eax + 0x314], 0 */ W32((u32)(r_eax+0x314u), 0x0u);
    /* 004976c3: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004976c5: mov dword ptr [eax + 0x310], 0 */ W32((u32)(r_eax+0x310u), 0x0u);
    /* 004976cf: mov dword ptr [eax + 0x30c], 0 */ W32((u32)(r_eax+0x30cu), 0x0u);
    /* 004976d9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4976deu); f_0077a684();
    /* 004976de: mov esi, eax */ r_esi = r_eax;
    /* 004976e0: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004976e2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4976e7u); f_0077a698();
    /* 004976e7: mov ebx, eax */ r_ebx = r_eax;
    /* 004976e9: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004976eb: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4976f0u); f_0077a6b4();
    /* 004976f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004976f3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004976f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004976f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004976f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004976f9: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x4976feu); f_007868f8();
    /* 004976fe: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497701: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 00497708: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0049770f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x497714u); f_007b4f54();
    /* 00497714: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497717: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00497719: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x49771eu); f_00787550();
    /* 0049771e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497721: call 0x498320 */ r_esp -= 4; W32(r_esp, 0x497726u); f_00498320();
    /* 00497726: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497729: add eax, 0x580 */ {  u32 a = r_eax; u32 b = 0x580u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049772e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0049772f: push 0x9027c0 */ { u32 v = 0x9027c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00497734: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x497739u); f_0058836c();
    /* 00497739: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049773c: mov dword ptr [edx + 0x65c], eax */ W32((u32)(r_edx+0x65cu), r_eax);
    /* 00497742: add edx, 0x604 */ {  u32 a = r_edx; u32 b = 0x604u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00497748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00497749: push 0x902880 */ { u32 v = 0x902880u; r_esp -= 4; W32(r_esp, v); }
    /* 0049774e: call 0x58836c */ r_esp -= 4; W32(r_esp, 0x497753u); f_0058836c();
    /* 00497753: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00497756: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497759: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0049775b: mov dword ptr [ecx + 0x658], eax */ W32((u32)(r_ecx+0x658u), r_eax);
    /* 00497761: add ecx, 0x660 */ {  u32 a = r_ecx; u32 b = 0x660u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00497767: push 0x90273c */ { u32 v = 0x90273cu; r_esp -= 4; W32(r_esp, v); }
    /* 0049776c: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x497771u); f_0048ebc4();
    /* 00497771: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497774: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00497776: add ecx, 0x674 */ {  u32 a = r_ecx; u32 b = 0x674u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0049777c: push 0x902730 */ { u32 v = 0x902730u; r_esp -= 4; W32(r_esp, v); }
    /* 00497781: call 0x48ebc4 */ r_esp -= 4; W32(r_esp, 0x497786u); f_0048ebc4();
    /* 00497786: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00497788: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0049778a: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0049778d: call 0x4a03f8 */ r_esp -= 4; W32(r_esp, 0x497792u); f_004a03f8();
    /* 00497792: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497795: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00497797: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00497799: mov dword ptr [edx + 0x408], eax */ W32((u32)(r_edx+0x408u), r_eax);
    /* 0049779f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004977a0: call 0x4a03f8 */ r_esp -= 4; W32(r_esp, 0x4977a5u); f_004a03f8();
    /* 004977a5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004977a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004977ab: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 004977ae: mov ebx, dword ptr [ecx + 0x3c] */ r_ebx = R32((u32)(r_ecx+0x3cu));
    /* 004977b1: mov esi, dword ptr [ecx + 0x40] */ r_esi = R32((u32)(r_ecx+0x40u));
    /* 004977b4: mov dword ptr [ecx + 0x40c], eax */ W32((u32)(r_ecx+0x40cu), r_eax);
    /* 004977ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004977bc: mov dword ptr [ecx + 0x434], 0 */ W32((u32)(r_ecx+0x434u), 0x0u);
    /* 004977c6: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 004977cc: mov byte ptr [ecx + 0x424], al */ W8((u32)(r_ecx+0x424u), (u8)r_eax);
    /* 004977d2: mov dword ptr [ecx + 0x428], edx */ W32((u32)(r_ecx+0x428u), r_edx);
    /* 004977d8: mov dword ptr [ecx + 0x438], 0 */ W32((u32)(r_ecx+0x438u), 0x0u);
    /* 004977e2: mov dword ptr [ecx + 0x42c], ebx */ W32((u32)(r_ecx+0x42cu), r_ebx);
    /* 004977e8: mov dword ptr [ecx + 0x430], esi */ W32((u32)(r_ecx+0x430u), r_esi);
    /* 004977ee: mov dword ptr [ecx + 0x420], eax */ W32((u32)(r_ecx+0x420u), r_eax);
    /* 004977f4: mov dword ptr [ecx + 0x43c], 0 */ W32((u32)(r_ecx+0x43cu), 0x0u);
    /* 004977fe: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 00497804: mov dword ptr [ecx + 0x384], eax */ W32((u32)(r_ecx+0x384u), r_eax);
    /* 0049780a: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 00497810: mov dword ptr [ecx + 0x440], 1 */ W32((u32)(r_ecx+0x440u), 0x1u);
    /* 0049781a: mov dword ptr [ecx + 0x38c], eax */ W32((u32)(r_ecx+0x38cu), r_eax);
    /* 00497820: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00497826: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0049782c: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 00497832: mov dword ptr [ecx + 0x39c], eax */ W32((u32)(r_ecx+0x39cu), r_eax);
    /* 00497838: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0049783e: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 00497844: mov dword ptr [ecx + 0x3a8], eax */ W32((u32)(r_ecx+0x3a8u), r_eax);
    /* 0049784a: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 00497850: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 00497856: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0049785c: mov dword ptr [ecx + 0x3b8], eax */ W32((u32)(r_ecx+0x3b8u), r_eax);
    /* 00497862: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 00497868: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 0049786e: mov dword ptr [ecx + 0x3c4], eax */ W32((u32)(r_ecx+0x3c4u), r_eax);
    /* 00497874: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 0049787a: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 00497880: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 00497886: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 0049788c: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 00497892: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 00497898: mov dword ptr [ecx + 0x3e0], eax */ W32((u32)(r_ecx+0x3e0u), r_eax);
    /* 0049789e: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 004978a4: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 004978aa: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 004978b0: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 004978b6: mov dword ptr [ecx + 0x3f4], eax */ W32((u32)(r_ecx+0x3f4u), r_eax);
    /* 004978bc: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 004978c2: mov dword ptr [ecx + 0x3fc], eax */ W32((u32)(r_ecx+0x3fcu), r_eax);
    /* 004978c8: call 0x497bc8 */ r_esp -= 4; W32(r_esp, 0x4978cdu); f_00497bc8();
    /* 004978cd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004978d0: mov dword ptr [ecx + 0x4b4], 0 */ W32((u32)(r_ecx+0x4b4u), 0x0u);
    /* 004978da: mov dword ptr [ecx + 0x4bc], 0x3f800000 */ W32((u32)(r_ecx+0x4bcu), 0x3f800000u);
    /* 004978e4: call 0x497e20 */ r_esp -= 4; W32(r_esp, 0x4978e9u); f_00497e20();
    /* 004978e9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004978ec: mov dword ptr [ecx + 0x4dc], 0 */ W32((u32)(r_ecx+0x4dcu), 0x0u);
    /* 004978f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004978f8: mov dword ptr [ecx + 0x4c0], eax */ W32((u32)(r_ecx+0x4c0u), r_eax);
    /* 004978fe: mov dword ptr [ecx + 0x4e0], 0x3f800000 */ W32((u32)(r_ecx+0x4e0u), 0x3f800000u);
    /* 00497908: mov dword ptr [ecx + 0x4c4], eax */ W32((u32)(r_ecx+0x4c4u), r_eax);
    /* 0049790e: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 00497914: mov dword ptr [ecx + 0x4cc], eax */ W32((u32)(r_ecx+0x4ccu), r_eax);
    /* 0049791a: call 0x4967dc */ r_esp -= 4; W32(r_esp, 0x49791fu); f_004967dc();
    /* 0049791f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497922: mov dword ptr [ecx + 0x4e4], 0 */ W32((u32)(r_ecx+0x4e4u), 0x0u);
    /* 0049792c: call 0x4982f4 */ r_esp -= 4; W32(r_esp, 0x497931u); f_004982f4();
    /* 00497931: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497934: mov dword ptr [ecx + 0x410], 0 */ W32((u32)(r_ecx+0x410u), 0x0u);
    /* 0049793e: call 0x4982d8 */ r_esp -= 4; W32(r_esp, 0x497943u); f_004982d8();
    /* 00497943: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497946: call 0x49823c */ r_esp -= 4; W32(r_esp, 0x49794bu); f_0049823c();
    /* 0049794b: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0049794e: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00497951: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00497954: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00497957: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00497959: mov dword ptr [esi + 0x688], eax */ W32((u32)(r_esi+0x688u), r_eax);
    /* 0049795f: mov dword ptr [esi + 0x574], ecx */ W32((u32)(r_esi+0x574u), r_ecx);
    /* 00497965: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497968: mov dword ptr [esi + 0x578], edx */ W32((u32)(r_esi+0x578u), r_edx);
    /* 0049796e: mov dword ptr [esi + 0x57c], ebx */ W32((u32)(r_esi+0x57cu), r_ebx);
    /* 00497974: mov edi, dword ptr [ecx + 0x3f8] */ r_edi = R32((u32)(r_ecx+0x3f8u));
    /* 0049797a: mov edx, dword ptr [ecx + 0x3f4] */ r_edx = R32((u32)(r_ecx+0x3f4u));
    /* 00497980: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 00497986: mov dword ptr [ecx + 0x3fc], edi */ W32((u32)(r_ecx+0x3fcu), r_edi);
    /* 0049798c: mov dword ptr [ecx + 0x3f8], edx */ W32((u32)(r_ecx+0x3f8u), r_edx);
    /* 00497992: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 00497998: mov dword ptr [ecx + 0x3f4], edx */ W32((u32)(r_ecx+0x3f4u), r_edx);
    /* 0049799e: mov edx, dword ptr [ecx + 0x3ec] */ r_edx = R32((u32)(r_ecx+0x3ecu));
    /* 004979a4: mov dword ptr [ecx + 0x3f0], edx */ W32((u32)(r_ecx+0x3f0u), r_edx);
    /* 004979aa: mov edx, dword ptr [ecx + 0x3e8] */ r_edx = R32((u32)(r_ecx+0x3e8u));
    /* 004979b0: mov dword ptr [ecx + 0x3ec], edx */ W32((u32)(r_ecx+0x3ecu), r_edx);
    /* 004979b6: mov edx, dword ptr [ecx + 0x3e4] */ r_edx = R32((u32)(r_ecx+0x3e4u));
    /* 004979bc: mov dword ptr [ecx + 0x3e8], edx */ W32((u32)(r_ecx+0x3e8u), r_edx);
    /* 004979c2: mov edx, dword ptr [ecx + 0x3e0] */ r_edx = R32((u32)(r_ecx+0x3e0u));
    /* 004979c8: mov dword ptr [ecx + 0x3e4], edx */ W32((u32)(r_ecx+0x3e4u), r_edx);
    /* 004979ce: mov edx, dword ptr [ecx + 0x3dc] */ r_edx = R32((u32)(r_ecx+0x3dcu));
    /* 004979d4: mov dword ptr [ecx + 0x3e0], edx */ W32((u32)(r_ecx+0x3e0u), r_edx);
    /* 004979da: mov edx, dword ptr [ecx + 0x3d8] */ r_edx = R32((u32)(r_ecx+0x3d8u));
    /* 004979e0: mov dword ptr [ecx + 0x3dc], edx */ W32((u32)(r_ecx+0x3dcu), r_edx);
    /* 004979e6: mov edx, dword ptr [ecx + 0x3d4] */ r_edx = R32((u32)(r_ecx+0x3d4u));
    /* 004979ec: mov dword ptr [ecx + 0x3d8], edx */ W32((u32)(r_ecx+0x3d8u), r_edx);
    /* 004979f2: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 004979f8: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
    /* 004979fe: mov edx, dword ptr [ecx + 0x3cc] */ r_edx = R32((u32)(r_ecx+0x3ccu));
    /* 00497a04: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 00497a0a: mov edx, dword ptr [ecx + 0x3c8] */ r_edx = R32((u32)(r_ecx+0x3c8u));
    /* 00497a10: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 00497a16: mov edx, dword ptr [ecx + 0x3c4] */ r_edx = R32((u32)(r_ecx+0x3c4u));
    /* 00497a1c: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 00497a22: mov edx, dword ptr [ecx + 0x3c0] */ r_edx = R32((u32)(r_ecx+0x3c0u));
    /* 00497a28: mov dword ptr [ecx + 0x3c4], edx */ W32((u32)(r_ecx+0x3c4u), r_edx);
    /* 00497a2e: mov edx, dword ptr [ecx + 0x3bc] */ r_edx = R32((u32)(r_ecx+0x3bcu));
    /* 00497a34: mov dword ptr [ecx + 0x3c0], edx */ W32((u32)(r_ecx+0x3c0u), r_edx);
    /* 00497a3a: mov edx, dword ptr [ecx + 0x3b8] */ r_edx = R32((u32)(r_ecx+0x3b8u));
    /* 00497a40: mov dword ptr [ecx + 0x3bc], edx */ W32((u32)(r_ecx+0x3bcu), r_edx);
    /* 00497a46: mov edx, dword ptr [ecx + 0x3b4] */ r_edx = R32((u32)(r_ecx+0x3b4u));
    /* 00497a4c: mov dword ptr [ecx + 0x3b8], edx */ W32((u32)(r_ecx+0x3b8u), r_edx);
    /* 00497a52: mov edx, dword ptr [ecx + 0x3b0] */ r_edx = R32((u32)(r_ecx+0x3b0u));
    /* 00497a58: mov dword ptr [ecx + 0x3b4], edx */ W32((u32)(r_ecx+0x3b4u), r_edx);
    /* 00497a5e: mov edx, dword ptr [ecx + 0x3ac] */ r_edx = R32((u32)(r_ecx+0x3acu));
    /* 00497a64: mov dword ptr [ecx + 0x3b0], edx */ W32((u32)(r_ecx+0x3b0u), r_edx);
    /* 00497a6a: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 00497a70: mov dword ptr [ecx + 0x3ac], edx */ W32((u32)(r_ecx+0x3acu), r_edx);
    /* 00497a76: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 00497a7c: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
    /* 00497a82: mov edx, dword ptr [ecx + 0x3a0] */ r_edx = R32((u32)(r_ecx+0x3a0u));
    /* 00497a88: mov dword ptr [ecx + 0x3a4], edx */ W32((u32)(r_ecx+0x3a4u), r_edx);
    /* 00497a8e: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 00497a94: mov dword ptr [ecx + 0x3a0], edx */ W32((u32)(r_ecx+0x3a0u), r_edx);
    /* 00497a9a: mov edx, dword ptr [ecx + 0x398] */ r_edx = R32((u32)(r_ecx+0x398u));
    /* 00497aa0: mov dword ptr [ecx + 0x39c], edx */ W32((u32)(r_ecx+0x39cu), r_edx);
    /* 00497aa6: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 00497aac: mov dword ptr [ecx + 0x398], edx */ W32((u32)(r_ecx+0x398u), r_edx);
    /* 00497ab2: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 00497ab8: mov dword ptr [ecx + 0x394], edx */ W32((u32)(r_ecx+0x394u), r_edx);
    /* 00497abe: mov edx, dword ptr [ecx + 0x38c] */ r_edx = R32((u32)(r_ecx+0x38cu));
    /* 00497ac4: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 00497aca: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 00497ad0: mov dword ptr [ecx + 0x38c], edx */ W32((u32)(r_ecx+0x38cu), r_edx);
    /* 00497ad6: mov edx, dword ptr [ecx + 0x384] */ r_edx = R32((u32)(r_ecx+0x384u));
    /* 00497adc: mov dword ptr [ecx + 0x388], edx */ W32((u32)(r_ecx+0x388u), r_edx);
    /* 00497ae2: mov edx, dword ptr [ecx + 0x380] */ r_edx = R32((u32)(r_ecx+0x380u));
    /* 00497ae8: mov dword ptr [ecx + 0x384], edx */ W32((u32)(r_ecx+0x384u), r_edx);
    /* 00497aee: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 00497af4: mov edi, dword ptr [0x9a70a4] */ r_edi = R32((u32)(0x9a70a4u));
    /* 00497afa: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497afd: je 0x497b91 */ if (fZ) goto L_00497b91;
L_00497b03:; BB(0x00497b03);
    /* 00497b03: cmp edi, dword ptr [ecx + 0x444] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497b09: je 0x497b91 */ if (fZ) goto L_00497b91;
L_00497b0f:; BB(0x00497b0f);
    /* 00497b0f: mov dword ptr [ecx + 0x444], edi */ W32((u32)(r_ecx+0x444u), r_edi);
    /* 00497b15: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00497b17: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00497b19: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00497b1b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00497b1d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00497b1f: mov eax, dword ptr [edi + 0x9a6dc0] */ r_eax = R32((u32)(r_edi+0x9a6dc0u));
    /* 00497b25: mov dword ptr [ecx + 0x448], eax */ W32((u32)(r_ecx+0x448u), r_eax);
L_00497b2b:; BB(0x00497b2b);
    /* 00497b2b: push dword ptr [edi + esi*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_edi+r_esi*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00497b32: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00497b35: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00497b37: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00497b3a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00497b3c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00497b3e: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00497b40: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00497b42: mov ecx, dword ptr [ecx + 0x404] */ r_ecx = R32((u32)(r_ecx+0x404u));
    /* 00497b48: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x497b4du); f_005b8638();
    /* 00497b4d: mov edx, dword ptr [ebx + 0x45c] */ r_edx = R32((u32)(r_ebx+0x45cu));
    /* 00497b53: mov ecx, dword ptr [ebx + 0x44c] */ r_ecx = R32((u32)(r_ebx+0x44cu));
    /* 00497b59: mov dword ptr [ebx + 0x458], edx */ W32((u32)(r_ebx+0x458u), r_edx);
    /* 00497b5f: mov edx, dword ptr [ebx + 0x450] */ r_edx = R32((u32)(r_ebx+0x450u));
    /* 00497b65: mov dword ptr [ebx + 0x460], ecx */ W32((u32)(r_ebx+0x460u), r_ecx);
    /* 00497b6b: mov dword ptr [ebx + 0x464], edx */ W32((u32)(r_ebx+0x464u), r_edx);
    /* 00497b71: mov dword ptr [ebx + 0x450], 0 */ W32((u32)(r_ebx+0x450u), 0x0u);
    /* 00497b7b: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 00497b81: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00497b84: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00497b87: jge 0x497b8e */ if ((fS==fO)) goto L_00497b8e;
L_00497b89:; BB(0x00497b89);
    /* 00497b89: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00497b8c: jmp 0x497b2b */ goto L_00497b2b;
L_00497b8e:; BB(0x00497b8e);
    /* 00497b8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00497b91:; BB(0x00497b91);
    /* 00497b91: mov eax, dword ptr [0x9a70a8] */ r_eax = R32((u32)(0x9a70a8u));
    /* 00497b96: mov dword ptr [ecx + 0x420], eax */ W32((u32)(r_ecx+0x420u), r_eax);
    /* 00497b9c: mov eax, dword ptr [0x9a70ac] */ r_eax = R32((u32)(0x9a70acu));
    /* 00497ba1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00497ba3: je 0x497baa */ if (fZ) goto L_00497baa;
L_00497ba5:; BB(0x00497ba5);
    /* 00497ba5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x497ba7u); call_ind(t); }
    /* 00497ba7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_00497baa:; BB(0x00497baa);
    /* 00497baa: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00497bad: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00497bb0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00497bb3: mov eax, ecx */ r_eax = r_ecx;
    /* 00497bb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00497bb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00497bbf: mov esp, ebp */ r_esp = r_ebp;
    /* 00497bc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00497bc2: ret 8 */ FN_RET(0x00497580); r_esp += 12; return;
}

void f_00497bc8(void) /* sub_497BC8 */
{
    FN_ENTER(0x00497bc8);
    /* 00497bc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00497bc9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00497bcc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00497bce: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00497bd0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x497bd5u); f_0077a6cc();
    /* 00497bd5: mov edx, eax */ r_edx = r_eax;
    /* 00497bd7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00497bda: fld dword ptr [0x9029c8] */ FPUSH(R_F32((u32)(0x9029c8u)));
    /* 00497be0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00497be2: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00497be5: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00497be9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497bee: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00497bf2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00497bf6: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00497bfa: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00497bfd: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00497c01: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00497c03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00497c05: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00497c09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00497c0a: ja 0x497c18 */ if ((!fC&&!fZ)) goto L_00497c18;
L_00497c0c:; BB(0x00497c0c);
    /* 00497c0c: mov dword ptr [ebx + 0x484], 0x14 */ W32((u32)(r_ebx+0x484u), 0x14u);
    /* 00497c16: jmp 0x497c1e */ goto L_00497c1e;
L_00497c18:; BB(0x00497c18);
    /* 00497c18: mov dword ptr [ebx + 0x484], ecx */ W32((u32)(r_ebx+0x484u), r_ecx);
L_00497c1e:; BB(0x00497c1e);
    /* 00497c1e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00497c21: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00497c24: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00497c28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497c2d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00497c31: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00497c35: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00497c39: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00497c3c: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00497c40: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00497c42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00497c44: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00497c48: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00497c49: ja 0x497c57 */ if ((!fC&&!fZ)) goto L_00497c57;
L_00497c4b:; BB(0x00497c4b);
    /* 00497c4b: mov dword ptr [ebx + 0x488], 0x14 */ W32((u32)(r_ebx+0x488u), 0x14u);
    /* 00497c55: jmp 0x497c5d */ goto L_00497c5d;
L_00497c57:; BB(0x00497c57);
    /* 00497c57: mov dword ptr [ebx + 0x488], ecx */ W32((u32)(r_ebx+0x488u), r_ecx);
L_00497c5d:; BB(0x00497c5d);
    /* 00497c5d: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00497c60: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00497c63: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00497c67: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497c6c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00497c70: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00497c74: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00497c78: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00497c7b: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00497c7f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00497c81: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00497c83: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00497c87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00497c88: ja 0x497c96 */ if ((!fC&&!fZ)) goto L_00497c96;
L_00497c8a:; BB(0x00497c8a);
    /* 00497c8a: mov dword ptr [ebx + 0x48c], 0x14 */ W32((u32)(r_ebx+0x48cu), 0x14u);
    /* 00497c94: jmp 0x497c9c */ goto L_00497c9c;
L_00497c96:; BB(0x00497c96);
    /* 00497c96: mov dword ptr [ebx + 0x48c], ecx */ W32((u32)(r_ebx+0x48cu), r_ecx);
L_00497c9c:; BB(0x00497c9c);
    /* 00497c9c: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00497c9f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00497ca2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00497ca6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497cab: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00497caf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00497cb3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00497cb7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00497cba: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00497cbe: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00497cc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00497cc2: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00497cc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00497cc7: ja 0x497cd5 */ if ((!fC&&!fZ)) goto L_00497cd5;
L_00497cc9:; BB(0x00497cc9);
    /* 00497cc9: mov dword ptr [ebx + 0x490], 0x14 */ W32((u32)(r_ebx+0x490u), 0x14u);
    /* 00497cd3: jmp 0x497cdb */ goto L_00497cdb;
L_00497cd5:; BB(0x00497cd5);
    /* 00497cd5: mov dword ptr [ebx + 0x490], ecx */ W32((u32)(r_ebx+0x490u), r_ecx);
L_00497cdb:; BB(0x00497cdb);
    /* 00497cdb: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 00497cde: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00497ce1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00497ce5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497cea: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00497cee: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00497cf2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00497cf6: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00497cf9: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00497cfd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00497cff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00497d01: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00497d05: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00497d06: ja 0x497d14 */ if ((!fC&&!fZ)) goto L_00497d14;
L_00497d08:; BB(0x00497d08);
    /* 00497d08: mov dword ptr [ebx + 0x4ac], 7 */ W32((u32)(r_ebx+0x4acu), 0x7u);
    /* 00497d12: jmp 0x497d1a */ goto L_00497d1a;
L_00497d14:; BB(0x00497d14);
    /* 00497d14: mov dword ptr [ebx + 0x4ac], ecx */ W32((u32)(r_ebx+0x4acu), r_ecx);
L_00497d1a:; BB(0x00497d1a);
    /* 00497d1a: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00497d1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00497d1f: jle 0x497e10 */ if ((fZ||fS!=fO)) goto L_00497e10;
L_00497d25:; BB(0x00497d25);
    /* 00497d25: mov dword ptr [ebx + 0x494], eax */ W32((u32)(r_ebx+0x494u), r_eax);
L_00497d2b:; BB(0x00497d2b);
    /* 00497d2b: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00497d2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00497d30: jle 0x497e01 */ if ((fZ||fS!=fO)) goto L_00497e01;
L_00497d36:; BB(0x00497d36);
    /* 00497d36: mov dword ptr [ebx + 0x498], eax */ W32((u32)(r_ebx+0x498u), r_eax);
L_00497d3c:; BB(0x00497d3c);
    /* 00497d3c: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00497d3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00497d41: jle 0x497df2 */ if ((fZ||fS!=fO)) goto L_00497df2;
L_00497d47:; BB(0x00497d47);
    /* 00497d47: mov dword ptr [ebx + 0x49c], eax */ W32((u32)(r_ebx+0x49cu), r_eax);
L_00497d4d:; BB(0x00497d4d);
    /* 00497d4d: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00497d50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00497d52: jle 0x497de3 */ if ((fZ||fS!=fO)) goto L_00497de3;
L_00497d58:; BB(0x00497d58);
    /* 00497d58: mov dword ptr [ebx + 0x4a0], eax */ W32((u32)(r_ebx+0x4a0u), r_eax);
L_00497d5e:; BB(0x00497d5e);
    /* 00497d5e: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00497d61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00497d63: jle 0x497dd7 */ if ((fZ||fS!=fO)) goto L_00497dd7;
L_00497d65:; BB(0x00497d65);
    /* 00497d65: mov dword ptr [ebx + 0x4a4], eax */ W32((u32)(r_ebx+0x4a4u), r_eax);
L_00497d6b:; BB(0x00497d6b);
    /* 00497d6b: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00497d6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00497d70: jle 0x497dcb */ if ((fZ||fS!=fO)) goto L_00497dcb;
L_00497d72:; BB(0x00497d72);
    /* 00497d72: mov dword ptr [ebx + 0x4a8], eax */ W32((u32)(r_ebx+0x4a8u), r_eax);
L_00497d78:; BB(0x00497d78);
    /* 00497d78: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00497d7a: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x497d7fu); f_0077a6cc();
    /* 00497d7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00497d80: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00497d83: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00497d86: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00497d8a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00497d8f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00497d93: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00497d97: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00497d9b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00497d9e: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00497da2: fcomp dword ptr [0x9029c8] */ fx_compare(ST(0), R_F32((u32)(0x9029c8u))); FPOP();
    /* 00497da8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00497daa: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00497dae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00497daf: ja 0x497dc0 */ if ((!fC&&!fZ)) goto L_00497dc0;
L_00497db1:; BB(0x00497db1);
    /* 00497db1: mov dword ptr [ebx + 0x4b0], 7 */ W32((u32)(r_ebx+0x4b0u), 0x7u);
    /* 00497dbb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497dbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00497dbf: ret  */ FN_RET(0x00497bc8); r_esp += 4; return;
L_00497dc0:; BB(0x00497dc0);
    /* 00497dc0: mov dword ptr [ebx + 0x4b0], edx */ W32((u32)(r_ebx+0x4b0u), r_edx);
    /* 00497dc6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497dc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00497dca: ret  */ FN_RET(0x00497bc8); r_esp += 4; return;
L_00497dcb:; BB(0x00497dcb);
    /* 00497dcb: mov dword ptr [ebx + 0x4a8], 0xb4 */ W32((u32)(r_ebx+0x4a8u), 0xb4u);
    /* 00497dd5: jmp 0x497d78 */ goto L_00497d78;
L_00497dd7:; BB(0x00497dd7);
    /* 00497dd7: mov dword ptr [ebx + 0x4a4], 0x5a */ W32((u32)(r_ebx+0x4a4u), 0x5au);
    /* 00497de1: jmp 0x497d6b */ goto L_00497d6b;
L_00497de3:; BB(0x00497de3);
    /* 00497de3: mov dword ptr [ebx + 0x4a0], 0xc8 */ W32((u32)(r_ebx+0x4a0u), 0xc8u);
    /* 00497ded: jmp 0x497d5e */ goto L_00497d5e;
L_00497df2:; BB(0x00497df2);
    /* 00497df2: mov dword ptr [ebx + 0x49c], 0xc8 */ W32((u32)(r_ebx+0x49cu), 0xc8u);
    /* 00497dfc: jmp 0x497d4d */ goto L_00497d4d;
L_00497e01:; BB(0x00497e01);
    /* 00497e01: mov dword ptr [ebx + 0x498], 0xc8 */ W32((u32)(r_ebx+0x498u), 0xc8u);
    /* 00497e0b: jmp 0x497d3c */ goto L_00497d3c;
L_00497e10:; BB(0x00497e10);
    /* 00497e10: mov dword ptr [ebx + 0x494], 0xc8 */ W32((u32)(r_ebx+0x494u), 0xc8u);
    /* 00497e1a: jmp 0x497d2b */ goto L_00497d2b;
}

void f_00497e20(void) /* sub_497E20 */
{
    FN_ENTER(0x00497e20);
    /* 00497e20: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 00497e27: mov dword ptr [ecx + 0x4b8], eax */ W32((u32)(r_ecx+0x4b8u), r_eax);
    /* 00497e2d: ret  */ FN_RET(0x00497e20); r_esp += 4; return;
}

void f_00497e30(void) /* sub_497E30 */
{
    FN_ENTER(0x00497e30);
    /* 00497e30: mov eax, dword ptr [ecx + 0x4e8] */ r_eax = R32((u32)(r_ecx+0x4e8u));
    /* 00497e36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00497e38: jle 0x497e4e */ if ((fZ||fS!=fO)) goto L_00497e4e;
L_00497e3a:; BB(0x00497e3a);
    /* 00497e3a: mov eax, dword ptr [ecx + 0x4ec] */ r_eax = R32((u32)(r_ecx+0x4ecu));
    /* 00497e40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00497e42: jl 0x497e4e */ if ((fS!=fO)) goto L_00497e4e;
L_00497e44:; BB(0x00497e44);
    /* 00497e44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497e47: mov dword ptr [ecx + 0x4ec], eax */ W32((u32)(r_ecx+0x4ecu), r_eax);
    /* 00497e4d: ret  */ FN_RET(0x00497e30); r_esp += 4; return;
L_00497e4e:; BB(0x00497e4e);
    /* 00497e4e: ret  */ FN_RET(0x00497e30); r_esp += 4; return;
}

void f_00497e50(void) /* sub_497E50 */
{
    FN_ENTER(0x00497e50);
    /* 00497e50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00497e51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00497e52: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00497e55: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00497e59: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 00497e5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00497e5e: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x497e63u); f_00786b3c();
    /* 00497e63: mov ebp, eax */ r_ebp = r_eax;
    /* 00497e65: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00497e68: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00497e6a: je 0x498106 */ if (fZ) goto L_00498106;
L_00497e70:; BB(0x00497e70);
    /* 00497e70: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 00497e73: lea edx, [ebp + 0x428] */ r_edx = (u32)(r_ebp+0x428u);
    /* 00497e79: call 0x498114 */ r_esp -= 4; W32(r_esp, 0x497e7eu); f_00498114();
    /* 00497e7e: mov eax, ebp */ r_eax = r_ebp;
    /* 00497e80: mov edx, edi */ r_edx = r_edi;
    /* 00497e82: call 0x4981a0 */ r_esp -= 4; W32(r_esp, 0x497e87u); f_004981a0();
    /* 00497e87: movsx edx, byte ptr [edi + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x4u));
    /* 00497e8b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00497e8d: jl 0x497e94 */ if ((fS!=fO)) goto L_00497e94;
L_00497e8f:; BB(0x00497e8f);
    /* 00497e8f: cmp edx, 0x29 */ {  u32 a = r_edx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00497e92: jl 0x497e9a */ if ((fS!=fO)) goto L_00497e9a;
L_00497e94:; BB(0x00497e94);
    /* 00497e94: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00497e97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00497e98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00497e99: ret  */ FN_RET(0x00497e50); r_esp += 4; return;
L_00497e9a:; BB(0x00497e9a);
    /* 00497e9a: mov edi, dword ptr [ebp + 0x3f8] */ r_edi = R32((u32)(r_ebp+0x3f8u));
    /* 00497ea0: mov dword ptr [ebp + 0x37c], edx */ W32((u32)(r_ebp+0x37cu), r_edx);
    /* 00497ea6: mov dword ptr [ebp + 0x3fc], edi */ W32((u32)(r_ebp+0x3fcu), r_edi);
    /* 00497eac: mov edi, dword ptr [ebp + 0x3f4] */ r_edi = R32((u32)(r_ebp+0x3f4u));
    /* 00497eb2: mov dword ptr [ebp + 0x3f8], edi */ W32((u32)(r_ebp+0x3f8u), r_edi);
    /* 00497eb8: mov edi, dword ptr [ebp + 0x3f0] */ r_edi = R32((u32)(r_ebp+0x3f0u));
    /* 00497ebe: mov dword ptr [ebp + 0x3f4], edi */ W32((u32)(r_ebp+0x3f4u), r_edi);
    /* 00497ec4: mov edi, dword ptr [ebp + 0x3ec] */ r_edi = R32((u32)(r_ebp+0x3ecu));
    /* 00497eca: mov dword ptr [ebp + 0x3f0], edi */ W32((u32)(r_ebp+0x3f0u), r_edi);
    /* 00497ed0: mov edi, dword ptr [ebp + 0x3e8] */ r_edi = R32((u32)(r_ebp+0x3e8u));
    /* 00497ed6: mov dword ptr [ebp + 0x3ec], edi */ W32((u32)(r_ebp+0x3ecu), r_edi);
    /* 00497edc: mov edi, dword ptr [ebp + 0x3e4] */ r_edi = R32((u32)(r_ebp+0x3e4u));
    /* 00497ee2: mov dword ptr [ebp + 0x3e8], edi */ W32((u32)(r_ebp+0x3e8u), r_edi);
    /* 00497ee8: mov edi, dword ptr [ebp + 0x3e0] */ r_edi = R32((u32)(r_ebp+0x3e0u));
    /* 00497eee: mov dword ptr [ebp + 0x3e4], edi */ W32((u32)(r_ebp+0x3e4u), r_edi);
    /* 00497ef4: mov edi, dword ptr [ebp + 0x3dc] */ r_edi = R32((u32)(r_ebp+0x3dcu));
    /* 00497efa: mov dword ptr [ebp + 0x3e0], edi */ W32((u32)(r_ebp+0x3e0u), r_edi);
    /* 00497f00: mov edi, dword ptr [ebp + 0x3d8] */ r_edi = R32((u32)(r_ebp+0x3d8u));
    /* 00497f06: mov dword ptr [ebp + 0x3dc], edi */ W32((u32)(r_ebp+0x3dcu), r_edi);
    /* 00497f0c: mov edi, dword ptr [ebp + 0x3d4] */ r_edi = R32((u32)(r_ebp+0x3d4u));
    /* 00497f12: mov dword ptr [ebp + 0x3d8], edi */ W32((u32)(r_ebp+0x3d8u), r_edi);
    /* 00497f18: mov edi, dword ptr [ebp + 0x3d0] */ r_edi = R32((u32)(r_ebp+0x3d0u));
    /* 00497f1e: mov dword ptr [ebp + 0x3d4], edi */ W32((u32)(r_ebp+0x3d4u), r_edi);
    /* 00497f24: mov edi, dword ptr [ebp + 0x3cc] */ r_edi = R32((u32)(r_ebp+0x3ccu));
    /* 00497f2a: mov dword ptr [ebp + 0x3d0], edi */ W32((u32)(r_ebp+0x3d0u), r_edi);
    /* 00497f30: mov edi, dword ptr [ebp + 0x3c8] */ r_edi = R32((u32)(r_ebp+0x3c8u));
    /* 00497f36: mov dword ptr [ebp + 0x3cc], edi */ W32((u32)(r_ebp+0x3ccu), r_edi);
    /* 00497f3c: mov edi, dword ptr [ebp + 0x3c4] */ r_edi = R32((u32)(r_ebp+0x3c4u));
    /* 00497f42: mov dword ptr [ebp + 0x3c8], edi */ W32((u32)(r_ebp+0x3c8u), r_edi);
    /* 00497f48: mov edi, dword ptr [ebp + 0x3c0] */ r_edi = R32((u32)(r_ebp+0x3c0u));
    /* 00497f4e: mov dword ptr [ebp + 0x3c4], edi */ W32((u32)(r_ebp+0x3c4u), r_edi);
    /* 00497f54: mov edi, dword ptr [ebp + 0x3bc] */ r_edi = R32((u32)(r_ebp+0x3bcu));
    /* 00497f5a: mov dword ptr [ebp + 0x3c0], edi */ W32((u32)(r_ebp+0x3c0u), r_edi);
    /* 00497f60: mov edi, dword ptr [ebp + 0x3b8] */ r_edi = R32((u32)(r_ebp+0x3b8u));
    /* 00497f66: mov dword ptr [ebp + 0x3bc], edi */ W32((u32)(r_ebp+0x3bcu), r_edi);
    /* 00497f6c: mov edi, dword ptr [ebp + 0x3b4] */ r_edi = R32((u32)(r_ebp+0x3b4u));
    /* 00497f72: mov dword ptr [ebp + 0x3b8], edi */ W32((u32)(r_ebp+0x3b8u), r_edi);
    /* 00497f78: mov edi, dword ptr [ebp + 0x3b0] */ r_edi = R32((u32)(r_ebp+0x3b0u));
    /* 00497f7e: mov dword ptr [ebp + 0x3b4], edi */ W32((u32)(r_ebp+0x3b4u), r_edi);
    /* 00497f84: mov edi, dword ptr [ebp + 0x3ac] */ r_edi = R32((u32)(r_ebp+0x3acu));
    /* 00497f8a: mov dword ptr [ebp + 0x3b0], edi */ W32((u32)(r_ebp+0x3b0u), r_edi);
    /* 00497f90: mov edi, dword ptr [ebp + 0x3a8] */ r_edi = R32((u32)(r_ebp+0x3a8u));
    /* 00497f96: mov dword ptr [ebp + 0x3ac], edi */ W32((u32)(r_ebp+0x3acu), r_edi);
    /* 00497f9c: mov edi, dword ptr [ebp + 0x3a4] */ r_edi = R32((u32)(r_ebp+0x3a4u));
    /* 00497fa2: mov dword ptr [ebp + 0x3a8], edi */ W32((u32)(r_ebp+0x3a8u), r_edi);
    /* 00497fa8: mov edi, dword ptr [ebp + 0x3a0] */ r_edi = R32((u32)(r_ebp+0x3a0u));
    /* 00497fae: mov dword ptr [ebp + 0x3a4], edi */ W32((u32)(r_ebp+0x3a4u), r_edi);
    /* 00497fb4: mov edi, dword ptr [ebp + 0x39c] */ r_edi = R32((u32)(r_ebp+0x39cu));
    /* 00497fba: mov dword ptr [ebp + 0x3a0], edi */ W32((u32)(r_ebp+0x3a0u), r_edi);
    /* 00497fc0: mov edi, dword ptr [ebp + 0x398] */ r_edi = R32((u32)(r_ebp+0x398u));
    /* 00497fc6: mov dword ptr [ebp + 0x39c], edi */ W32((u32)(r_ebp+0x39cu), r_edi);
    /* 00497fcc: mov edi, dword ptr [ebp + 0x394] */ r_edi = R32((u32)(r_ebp+0x394u));
    /* 00497fd2: mov dword ptr [ebp + 0x398], edi */ W32((u32)(r_ebp+0x398u), r_edi);
    /* 00497fd8: mov edi, dword ptr [ebp + 0x390] */ r_edi = R32((u32)(r_ebp+0x390u));
    /* 00497fde: mov dword ptr [ebp + 0x394], edi */ W32((u32)(r_ebp+0x394u), r_edi);
    /* 00497fe4: mov edi, dword ptr [ebp + 0x38c] */ r_edi = R32((u32)(r_ebp+0x38cu));
    /* 00497fea: mov dword ptr [ebp + 0x390], edi */ W32((u32)(r_ebp+0x390u), r_edi);
    /* 00497ff0: mov edi, dword ptr [ebp + 0x388] */ r_edi = R32((u32)(r_ebp+0x388u));
    /* 00497ff6: mov dword ptr [ebp + 0x38c], edi */ W32((u32)(r_ebp+0x38cu), r_edi);
    /* 00497ffc: mov edi, dword ptr [ebp + 0x384] */ r_edi = R32((u32)(r_ebp+0x384u));
    /* 00498002: mov dword ptr [ebp + 0x388], edi */ W32((u32)(r_ebp+0x388u), r_edi);
    /* 00498008: mov edi, dword ptr [ebp + 0x380] */ r_edi = R32((u32)(r_ebp+0x380u));
    /* 0049800e: mov dword ptr [ebp + 0x384], edi */ W32((u32)(r_ebp+0x384u), r_edi);
    /* 00498014: mov dword ptr [ebp + 0x380], edx */ W32((u32)(r_ebp+0x380u), r_edx);
    /* 0049801a: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0049801d: je 0x498049 */ if (fZ) goto L_00498049;
L_0049801f:; BB(0x0049801f);
    /* 0049801f: cmp edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498022: jne 0x498034 */ if (!fZ) goto L_00498034;
L_00498024:; BB(0x00498024);
    /* 00498024: add dword ptr [ebp + 0x4c4], 1 */ { u32 ad = (u32)(r_ebp+0x4c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0049802b: add dword ptr [ebp + 0x4c8], 1 */ { u32 ad = (u32)(r_ebp+0x4c8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00498032: jmp 0x498050 */ goto L_00498050;
L_00498034:; BB(0x00498034);
    /* 00498034: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498037: jne 0x498050 */ if (!fZ) goto L_00498050;
L_00498039:; BB(0x00498039);
    /* 00498039: add dword ptr [ebp + 0x4c4], 1 */ { u32 ad = (u32)(r_ebp+0x4c4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00498040: add dword ptr [ebp + 0x4cc], 1 */ { u32 ad = (u32)(r_ebp+0x4ccu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00498047: jmp 0x498050 */ goto L_00498050;
L_00498049:; BB(0x00498049);
    /* 00498049: add dword ptr [ebp + 0x4c0], 1 */ { u32 ad = (u32)(r_ebp+0x4c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00498050:; BB(0x00498050);
    /* 00498050: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00498053: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00498055: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00498057: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0049805a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049805c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0049805e: mov eax, dword ptr [edx + 0x9a70a4] */ r_eax = R32((u32)(r_edx+0x9a70a4u));
    /* 00498064: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498067: je 0x4980ea */ if (fZ) goto L_004980ea;
L_0049806d:; BB(0x0049806d);
    /* 0049806d: cmp eax, dword ptr [ebp + 0x444] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x444u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498073: je 0x4980ea */ if (fZ) goto L_004980ea;
L_00498075:; BB(0x00498075);
    /* 00498075: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00498079: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0049807d: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00498081: mov dword ptr [ebp + 0x444], eax */ W32((u32)(r_ebp+0x444u), r_eax);
    /* 00498087: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00498089: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049808b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049808d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0049808f: mov edx, dword ptr [eax + 0x9a6dc0] */ r_edx = R32((u32)(r_eax+0x9a6dc0u));
    /* 00498095: mov dword ptr [ebp + 0x448], edx */ W32((u32)(r_ebp+0x448u), r_edx);
    /* 0049809b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0049809d: lea edi, [ebp + 0x44c] */ r_edi = (u32)(r_ebp+0x44cu);
    /* 004980a3: mov esi, eax */ r_esi = r_eax;
    /* 004980a5: mov ebx, edx */ r_ebx = r_edx;
L_004980a7:; BB(0x004980a7);
    /* 004980a7: push dword ptr [esi + ebx*4 + 0x9a6dc8] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x9a6dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004980ae: mov ecx, dword ptr [ebp + 0x404] */ r_ecx = R32((u32)(r_ebp+0x404u));
    /* 004980b4: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4980b9u); f_005b8638();
    /* 004980b9: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 004980bc: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004980bf: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004980c1: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 004980c4: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 004980c7: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 004980ca: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 004980d1: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 004980d3: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004980d6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004980d9: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004980dc: jl 0x4980a7 */ if ((fS!=fO)) goto L_004980a7;
L_004980de:; BB(0x004980de);
    /* 004980de: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004980e2: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004980e6: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_004980ea:; BB(0x004980ea);
    /* 004980ea: mov edx, dword ptr [ecx*8 + 0x9a70a8] */ r_edx = R32((u32)(r_ecx*8+0x9a70a8u));
    /* 004980f1: mov dword ptr [ebp + 0x420], edx */ W32((u32)(r_ebp+0x420u), r_edx);
    /* 004980f7: mov edx, dword ptr [ecx*8 + 0x9a70ac] */ r_edx = R32((u32)(r_ecx*8+0x9a70acu));
    /* 004980fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00498100: je 0x498106 */ if (fZ) goto L_00498106;
L_00498102:; BB(0x00498102);
    /* 00498102: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00498104: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x498106u); call_ind(t); }
L_00498106:; BB(0x00498106);
    /* 00498106: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00498109: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0049810a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0049810b: ret  */ FN_RET(0x00497e50); r_esp += 4; return;
}

