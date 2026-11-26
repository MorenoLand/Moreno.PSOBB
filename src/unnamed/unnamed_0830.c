#include "protos.h"

void f_00830082(void)
{
    FN_ENTER(0x00830082);
    /* 00830082: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00830085: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00830088: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0083008a: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 0083008d: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 00830094: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00830098: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0083009f: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008300a1: jmp 0x8300b9 */ goto L_008300b9;
L_008300b9:; BB(0x008300b9);
    /* 008300b9: call 0x82fc94 */ r_esp -= 4; W32(r_esp, 0x8300beu); f_0082fc94();
    /* 008300be: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300c1: je 0x8300ed */ if (fZ) goto L_008300ed;
L_008300c3:; BB(0x008300c3);
    /* 008300c3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300c5: jne 0x8300db */ if (!fZ) goto L_008300db;
L_008300c7:; BB(0x008300c7);
    /* 008300c7: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 008300cb: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008300cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008300d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008300d1: call 0x846fac */ r_esp -= 4; W32(r_esp, 0x8300d6u); f_00846fac();
    /* 008300d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008300d9: jmp 0x8300ed */ goto L_008300ed;
L_008300db:; BB(0x008300db);
    /* 008300db: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 008300df: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 008300e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008300e4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008300e5: call 0x847074 */ r_esp -= 4; W32(r_esp, 0x8300eau); f_00847074();
    /* 008300ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008300ed:; BB(0x008300ed);
    /* 008300ed: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300f0: je 0x83011c */ if (fZ) goto L_0083011c;
L_008300f2:; BB(0x008300f2);
    /* 008300f2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008300f4: jne 0x83010a */ if (!fZ) goto L_0083010a;
L_008300f6:; BB(0x008300f6);
    /* 008300f6: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008300fa: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 008300fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008300ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00830100: call 0x846fac */ r_esp -= 4; W32(r_esp, 0x830105u); f_00846fac();
    /* 00830105: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00830108: jmp 0x83011c */ goto L_0083011c;
L_0083010a:; BB(0x0083010a);
    /* 0083010a: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0083010e: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00830112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00830114: call 0x847074 */ r_esp -= 4; W32(r_esp, 0x830119u); f_00847074();
    /* 00830119: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0083011c:; BB(0x0083011c);
    /* 0083011c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00830120: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 00830127: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830129: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083012d: fld dword ptr [esp + 0x8c] */ FPUSH(R_F32((u32)(r_esp+0x8cu)));
    /* 00830134: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830136: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830138: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083013a: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 00830141: mov ecx, dword ptr [esp + 0x74] */ r_ecx = R32((u32)(r_esp+0x74u));
    /* 00830145: mov ebx, dword ptr [esp + 0x78] */ r_ebx = R32((u32)(r_esp+0x78u));
    /* 00830149: mov ebp, dword ptr [esp + 0x7c] */ r_ebp = R32((u32)(r_esp+0x7cu));
    /* 0083014d: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 00830151: mov esi, dword ptr [esp + 0x80] */ r_esi = R32((u32)(r_esp+0x80u));
    /* 00830158: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083015a: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0083015c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0083015e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00830160: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 00830167: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00830169: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083016b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083016d: mov ecx, dword ptr [esp + 0xac] */ r_ecx = R32((u32)(r_esp+0xacu));
    /* 00830174: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00830177: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00830179: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083017b: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0083017e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830180: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830182: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00830185: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 00830189: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083018d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083018f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830192: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830194: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830196: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00830198: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083019a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083019c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0083019e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008301a0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008301a2: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 008301a5: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 008301a9: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 008301ab: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008301ad: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008301af: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008301b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008301b3: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 008301b6: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 008301ba: push dword ptr [esp + 0xb0] */ { u32 v = R32((u32)(r_esp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008301c1: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 008301c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008301c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008301c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008301c8: call 0x84713c */ r_esp -= 4; W32(r_esp, 0x8301cdu); f_0084713c();
    /* 008301cd: mov eax, 2 */ r_eax = 0x2u;
    /* 008301d2: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008301d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008301d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008301da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008301db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008301dc: ret 0xc */ FN_RET(0x00830082); r_esp += 16; return;
}

void f_008302c4(void) /* sub_8302C4 */
{
    FN_ENTER(0x008302c4);
    /* 008302c4: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x8302c9u); f_0082e344();
    /* 008302c9: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008302cd: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008302d1: call 0x830328 */ r_esp -= 4; W32(r_esp, 0x8302d6u); f_00830328();
    /* 008302d6: mov eax, dword ptr [0xae6dc8] */ r_eax = R32((u32)(0xae6dc8u));
    /* 008302db: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008302dd: je 0x8302f8 */ if (fZ) goto L_008302f8;
L_008302df:; BB(0x008302df);
    /* 008302df: mov eax, dword ptr [0xa22734] */ r_eax = R32((u32)(0xa22734u));
    /* 008302e4: mov dword ptr [0xaeb520], 0xaeb4a0 */ W32((u32)(0xaeb520u), 0xaeb4a0u);
    /* 008302ee: mov dword ptr [0xaeb508], eax */ W32((u32)(0xaeb508u), r_eax);
    /* 008302f3: mov dword ptr [0xaeb4c8], eax */ W32((u32)(0xaeb4c8u), r_eax);
L_008302f8:; BB(0x008302f8);
    /* 008302f8: mov eax, dword ptr [0xa22b60] */ r_eax = R32((u32)(0xa22b60u));
    /* 008302fd: mov edx, dword ptr [0xae6dc0] */ r_edx = R32((u32)(0xae6dc0u));
    /* 00830303: mov dword ptr [eax + 0xc], 0x82e6c8 */ W32((u32)(r_eax+0xcu), 0x82e6c8u);
    /* 0083030a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083030c: je 0x83031d */ if (fZ) goto L_0083031d;
L_0083030e:; BB(0x0083030e);
    /* 0083030e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00830312: call 0x847364 */ r_esp -= 4; W32(r_esp, 0x830317u); f_00847364();
L_00830317:; BB(0x00830317);
    /* 00830317: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x83031cu); f_0082e4f4();
    /* 0083031c: ret  */ FN_RET(0x008302c4); r_esp += 4; return;
L_0083031d:; BB(0x0083031d);
    /* 0083031d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00830321: call 0x8473ac */ r_esp -= 4; W32(r_esp, 0x830326u); f_008473ac();
    /* 00830326: jmp 0x830317 */ goto L_00830317;
}

void f_00830328(void) /* sub_830328 */
{
    FN_ENTER(0x00830328);
    /* 00830328: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00830329: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083032b: mov dword ptr [0xaeb520], 0xaeb4e0 */ W32((u32)(0xaeb520u), 0xaeb4e0u);
    /* 00830335: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00830338: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0083033b: call 0x830364 */ r_esp -= 4; W32(r_esp, 0x830340u); f_00830364();
    /* 00830340: mov dword ptr [0xaeb520], 0xaeb4a0 */ W32((u32)(0xaeb520u), 0xaeb4a0u);
    /* 0083034a: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083034d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0083034f: call 0x830364 */ r_esp -= 4; W32(r_esp, 0x830354u); f_00830364();
    /* 00830354: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00830358: mov dword ptr [0xaeb524], eax */ W32((u32)(0xaeb524u), r_eax);
    /* 0083035d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083035e: ret 4 */ FN_RET(0x00830328); r_esp += 8; return;
}

void f_00830364(void) /* sub_830364 */
{
    FN_ENTER(0x00830364);
    /* 00830364: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830368: call 0x8303dc */ r_esp -= 4; W32(r_esp, 0x83036du); f_008303dc();
    /* 0083036d: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00830373: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00830376: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00830378: je 0x830383 */ if (fZ) goto L_00830383;
L_0083037a:; BB(0x0083037a);
    /* 0083037a: mov dword ptr [edx + 0x30], 0x847a98 */ W32((u32)(r_edx+0x30u), 0x847a98u);
    /* 00830381: jmp 0x83038a */ goto L_0083038a;
L_00830383:; BB(0x00830383);
    /* 00830383: mov dword ptr [edx + 0x30], 0x6dc358 */ W32((u32)(r_edx+0x30u), 0x6dc358u);
L_0083038a:; BB(0x0083038a);
    /* 0083038a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083038c: je 0x83039e */ if (fZ) goto L_0083039e;
L_0083038e:; BB(0x0083038e);
    /* 0083038e: mov dword ptr [edx + 0x34], 0x847b20 */ W32((u32)(r_edx+0x34u), 0x847b20u);
    /* 00830395: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 0083039c: jmp 0x8303c3 */ goto L_008303c3;
L_0083039e:; BB(0x0083039e);
    /* 0083039e: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008303a3: je 0x8303b5 */ if (fZ) goto L_008303b5;
L_008303a5:; BB(0x008303a5);
    /* 008303a5: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 008303ac: mov dword ptr [edx + 0x3c], 0x847b64 */ W32((u32)(r_edx+0x3cu), 0x847b64u);
    /* 008303b3: jmp 0x8303c3 */ goto L_008303c3;
L_008303b5:; BB(0x008303b5);
    /* 008303b5: mov dword ptr [edx + 0x34], 0x6dc358 */ W32((u32)(r_edx+0x34u), 0x6dc358u);
    /* 008303bc: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
L_008303c3:; BB(0x008303c3);
    /* 008303c3: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008303c5: je 0x8303d1 */ if (fZ) goto L_008303d1;
L_008303c7:; BB(0x008303c7);
    /* 008303c7: mov dword ptr [edx + 0x38], 0x847a98 */ W32((u32)(r_edx+0x38u), 0x847a98u);
    /* 008303ce: ret 4 */ FN_RET(0x00830364); r_esp += 8; return;
L_008303d1:; BB(0x008303d1);
    /* 008303d1: mov dword ptr [edx + 0x38], 0x6dc358 */ W32((u32)(r_edx+0x38u), 0x6dc358u);
    /* 008303d8: ret 4 */ FN_RET(0x00830364); r_esp += 8; return;
}

void f_008303dc(void) /* sub_8303DC */
{
    FN_ENTER(0x008303dc);
    /* 008303dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008303dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008303df: jne 0x8303e6 */ if (!fZ) goto L_008303e6;
L_008303e1:; BB(0x008303e1);
    /* 008303e1: mov ecx, 0x98a514 */ r_ecx = 0x98a514u;
L_008303e6:; BB(0x008303e6);
    /* 008303e6: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 008303eb: movzx ebx, word ptr [ecx + 0xa] */ r_ebx = (u32)R16((u32)(r_ecx+0xau));
    /* 008303ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008303f1: and ebx, 0xc0 */ {  u32 a = r_ebx; u32 b = 0xc0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008303f7: sar ebx, 6 */ { u32 c = (6u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008303fa: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 008303fc: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 00830401: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00830404: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00830407: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0083040b: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0083040e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00830412: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00830419: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0083041c: movzx ecx, word ptr [ecx + 0xa] */ r_ecx = (u32)R16((u32)(r_ecx+0xau));
    /* 00830420: and ecx, 0xffffff3f */ {  u32 a = r_ecx; u32 b = 0xffffff3fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00830426: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00830427: call 0x8472b0 */ r_esp -= 4; W32(r_esp, 0x83042cu); f_008472b0();
    /* 0083042c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083042d: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 00830432: mov edx, dword ptr [ebx*4 + 0xa2271c] */ r_edx = R32((u32)(r_ebx*4+0xa2271cu));
    /* 00830439: mov ecx, dword ptr [0xae6dc8] */ r_ecx = R32((u32)(0xae6dc8u));
    /* 0083043f: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00830442: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00830445: je 0x830452 */ if (fZ) goto L_00830452;
L_00830447:; BB(0x00830447);
    /* 00830447: mov edx, dword ptr [0xa22734] */ r_edx = R32((u32)(0xa22734u));
    /* 0083044d: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00830450: jmp 0x83045c */ goto L_0083045c;
L_00830452:; BB(0x00830452);
    /* 00830452: mov edx, dword ptr [ebx*4 + 0xa22728] */ r_edx = R32((u32)(r_ebx*4+0xa22728u));
    /* 00830459: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
L_0083045c:; BB(0x0083045c);
    /* 0083045c: mov edx, dword ptr [0xa22738] */ r_edx = R32((u32)(0xa22738u));
    /* 00830462: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00830465: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00830466: ret 4 */ FN_RET(0x008303dc); r_esp += 8; return;
}

void f_0083046c(void) /* sub_83046C */
{
    FN_ENTER(0x0083046c);
    /* 0083046c: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x830471u); f_0082e344();
    /* 00830471: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00830475: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00830479: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x83047eu); f_008304c8();
    /* 0083047e: mov eax, dword ptr [0xa22b60] */ r_eax = R32((u32)(0xa22b60u));
    /* 00830483: mov edx, dword ptr [0xae6dc8] */ r_edx = R32((u32)(0xae6dc8u));
    /* 00830489: mov dword ptr [eax + 0xc], 0x82e6c8 */ W32((u32)(r_eax+0xcu), 0x82e6c8u);
    /* 00830490: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00830493: je 0x8304a3 */ if (fZ) goto L_008304a3;
L_00830495:; BB(0x00830495);
    /* 00830495: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 0083049b: mov eax, dword ptr [0xa22734] */ r_eax = R32((u32)(0xa22734u));
    /* 008304a0: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_008304a3:; BB(0x008304a3);
    /* 008304a3: mov eax, dword ptr [0xae6dc0] */ r_eax = R32((u32)(0xae6dc0u));
    /* 008304a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008304aa: je 0x8304bb */ if (fZ) goto L_008304bb;
L_008304ac:; BB(0x008304ac);
    /* 008304ac: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008304b0: call 0x8472dc */ r_esp -= 4; W32(r_esp, 0x8304b5u); f_008472dc();
L_008304b5:; BB(0x008304b5);
    /* 008304b5: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x8304bau); f_0082e4f4();
    /* 008304ba: ret  */ FN_RET(0x0083046c); r_esp += 4; return;
L_008304bb:; BB(0x008304bb);
    /* 008304bb: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008304bf: call 0x847324 */ r_esp -= 4; W32(r_esp, 0x8304c4u); f_00847324();
    /* 008304c4: jmp 0x8304b5 */ goto L_008304b5;
}

void f_008304c8(void) /* sub_8304C8 */
{
    FN_ENTER(0x008304c8);
    /* 008304c8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008304cc: mov dword ptr [0xaeb520], 0xaeb4a0 */ W32((u32)(0xaeb520u), 0xaeb4a0u);
    /* 008304d6: call 0x830364 */ r_esp -= 4; W32(r_esp, 0x8304dbu); f_00830364();
    /* 008304db: ret 4 */ FN_RET(0x008304c8); r_esp += 8; return;
}

void f_008304e0(void) /* sub_8304E0 */
{
    FN_ENTER(0x008304e0);
    /* 008304e0: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x8304e5u); f_0082e344();
    /* 008304e5: push 0x82e6c8 */ { u32 v = 0x82e6c8u; r_esp -= 4; W32(r_esp, v); }
    /* 008304ea: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008304ee: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008304f2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008304f6: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008304fa: call 0x84785c */ r_esp -= 4; W32(r_esp, 0x8304ffu); f_0084785c();
    /* 008304ff: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00830502: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x830507u); f_0082e4f4();
    /* 00830507: ret  */ FN_RET(0x008304e0); r_esp += 4; return;
}

void f_00830508(void) /* sub_830508 */
{
    FN_ENTER(0x00830508);
    /* 00830508: mov eax, dword ptr [0xaeb5a0] */ r_eax = R32((u32)(0xaeb5a0u));
    /* 0083050d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0083050f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00830511: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00830514: mov eax, dword ptr [0xaeb5a0] */ r_eax = R32((u32)(0xaeb5a0u));
    /* 00830519: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 00830520: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00830523: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00830527: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0083052a: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0083052e: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00830531: movzx eax, word ptr [ecx + 0xa] */ r_eax = (u32)R16((u32)(r_ecx+0xau));
    /* 00830535: and eax, 0xffffff3f */ {  u32 a = r_eax; u32 b = 0xffffff3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0083053a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083053b: call 0x847830 */ r_esp -= 4; W32(r_esp, 0x830540u); f_00847830();
    /* 00830540: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830541: ret 4 */ FN_RET(0x00830508); r_esp += 8; return;
}

void f_00830544(void) /* sub_830544 */
{
    FN_ENTER(0x00830544);
    /* 00830544: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00830546: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00830548: lea eax, [ecx + ecx*8 + 0xaeb540] */ r_eax = (u32)(r_ecx+r_ecx*8+0xaeb540u);
    /* 0083054f: mov dword ptr [0xaeb5a0], eax */ W32((u32)(0xaeb5a0u), r_eax);
    /* 00830554: ret  */ FN_RET(0x00830544); r_esp += 4; return;
}

void f_00830558(void) /* sub_830558 */
{
    FN_ENTER(0x00830558);
    /* 00830558: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00830559: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083055a: call 0x8473ec */ r_esp -= 4; W32(r_esp, 0x83055fu); f_008473ec();
    /* 0083055f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00830562: call 0x830568 */ r_esp -= 4; W32(r_esp, 0x830567u); f_00830568();
    /* 00830567: ret  */ FN_RET(0x00830558); r_esp += 4; return;
}

void f_00830568(void) /* sub_830568 */
{
    FN_ENTER(0x00830568);
    /* 00830568: mov edx, dword ptr [0xaeb5a0] */ r_edx = R32((u32)(0xaeb5a0u));
    /* 0083056e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00830571: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00830573: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00830575: mov edx, dword ptr [0xaeb5a0] */ r_edx = R32((u32)(0xaeb5a0u));
    /* 0083057b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0083057e: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00830585: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00830588: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083058a: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0083058d: ret  */ FN_RET(0x00830568); r_esp += 4; return;
}

void f_00830590(void) /* sub_830590 */
{
    FN_ENTER(0x00830590);
    /* 00830590: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00830591: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00830593: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830597: mov ecx, edx */ r_ecx = r_edx;
    /* 00830599: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x83059eu); f_008304c8();
    /* 0083059e: mov eax, dword ptr [0xae6dc8] */ r_eax = R32((u32)(0xae6dc8u));
    /* 008305a3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008305a5: je 0x8305b5 */ if (fZ) goto L_008305b5;
L_008305a7:; BB(0x008305a7);
    /* 008305a7: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 008305ad: mov eax, dword ptr [0xa22734] */ r_eax = R32((u32)(0xa22734u));
    /* 008305b2: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_008305b5:; BB(0x008305b5);
    /* 008305b5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x8305bau); f_0082d7b0();
    /* 008305ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008305bc: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x8305c1u); f_008305ec();
    /* 008305c1: mov eax, dword ptr [0xae6dc0] */ r_eax = R32((u32)(0xae6dc0u));
    /* 008305c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008305c8: je 0x8305ce */ if (fZ) goto L_008305ce;
L_008305ca:; BB(0x008305ca);
    /* 008305ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008305cb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8305cdu); call_ind(t); }
    /* 008305cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008305ce:; BB(0x008305ce);
    /* 008305ce: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 008305d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008305d3: je 0x8305da */ if (fZ) goto L_008305da;
L_008305d5:; BB(0x008305d5);
    /* 008305d5: call 0x83080c */ r_esp -= 4; W32(r_esp, 0x8305dau); f_0083080c();
L_008305da:; BB(0x008305da);
    /* 008305da: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x8305dfu); f_0082da80();
    /* 008305df: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 008305e2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008305e4: jne 0x8305b5 */ if (!fZ) goto L_008305b5;
L_008305e6:; BB(0x008305e6);
    /* 008305e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008305e7: ret 4 */ FN_RET(0x00830590); r_esp += 8; return;
}

void f_008305ec(void) /* sub_8305EC */
{
    FN_ENTER(0x008305ec);
    /* 008305ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008305ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008305ee: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008305f1: mov edi, ecx */ r_edi = r_ecx;
    /* 008305f3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008305f5: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008305f7: je 0x830682 */ if (fZ) goto L_00830682;
L_008305fd:; BB(0x008305fd);
    /* 008305fd: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00830600: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00830603: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 00830606: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0083060a: mov ebp, dword ptr [edi + 0x10] */ r_ebp = R32((u32)(r_edi+0x10u));
    /* 0083060d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00830611: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00830614: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00830618: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0083061b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0083061f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00830622: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00830626: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00830628: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083062d: je 0x830655 */ if (fZ) goto L_00830655;
L_0083062f:; BB(0x0083062f);
    /* 0083062f: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00830632: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00830636: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 00830639: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0083063d: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 00830640: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00830644: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 00830647: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0083064c: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 00830650: jmp 0x830753 */ goto L_00830753;
L_00830655:; BB(0x00830655);
    /* 00830655: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00830658: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0083065c: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0083065f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00830663: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 00830666: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0083066a: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0083066c: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083066f: je 0x83067b */ if (fZ) goto L_0083067b;
L_00830671:; BB(0x00830671);
    /* 00830671: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00830676: jmp 0x830753 */ goto L_00830753;
L_0083067b:; BB(0x0083067b);
    /* 0083067b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083067d: jmp 0x830753 */ goto L_00830753;
L_00830682:; BB(0x00830682);
    /* 00830682: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00830688: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083068b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083068c: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x83068fu); call_ind(t); }
    /* 0083068f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830690: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830692: jne 0x8306a8 */ if (!fZ) goto L_008306a8;
L_00830694:; BB(0x00830694);
    /* 00830694: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00830697: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0083069a: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0083069d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008306a1: mov ebp, dword ptr [edi + 0x10] */ r_ebp = R32((u32)(r_edi+0x10u));
    /* 008306a4: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_008306a8:; BB(0x008306a8);
    /* 008306a8: mov ebp, dword ptr [0xaeb520] */ r_ebp = R32((u32)(0xaeb520u));
    /* 008306ae: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 008306b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008306b3: je 0x830799 */ if (fZ) goto L_00830799;
L_008306b9:; BB(0x008306b9);
    /* 008306b9: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008306bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008306be: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x8306c0u); call_ind(t); }
    /* 008306c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008306c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008306c3: je 0x8306d6 */ if (fZ) goto L_008306d6;
L_008306c5:; BB(0x008306c5);
    /* 008306c5: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008306c7: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008306c9: je 0x8306d2 */ if (fZ) goto L_008306d2;
L_008306cb:; BB(0x008306cb);
    /* 008306cb: mov ebp, 1 */ r_ebp = 0x1u;
    /* 008306d0: jmp 0x830726 */ goto L_00830726;
L_008306d2:; BB(0x008306d2);
    /* 008306d2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008306d4: jmp 0x830726 */ goto L_00830726;
L_008306d6:; BB(0x008306d6);
    /* 008306d6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008306d8: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008306dd: je 0x830702 */ if (fZ) goto L_00830702;
L_008306df:; BB(0x008306df);
    /* 008306df: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 008306e2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 008306e6: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 008306e9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008306ed: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 008306f0: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 008306f4: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 008306f7: mov ebp, 2 */ r_ebp = 0x2u;
    /* 008306fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00830700: jmp 0x830726 */ goto L_00830726;
L_00830702:; BB(0x00830702);
    /* 00830702: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 00830705: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00830709: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0083070c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00830710: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 00830713: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00830717: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00830719: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083071b: je 0x830724 */ if (fZ) goto L_00830724;
L_0083071d:; BB(0x0083071d);
    /* 0083071d: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00830722: jmp 0x830726 */ goto L_00830726;
L_00830724:; BB(0x00830724);
    /* 00830724: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00830726:; BB(0x00830726);
    /* 00830726: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 0083072c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00830730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830731: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x830734u); call_ind(t); }
    /* 00830734: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830737: jne 0x83074e */ if (!fZ) goto L_0083074e;
L_00830739:; BB(0x00830739);
    /* 00830739: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0083073c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00830740: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 00830743: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00830747: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 0083074a: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
L_0083074e:; BB(0x0083074e);
    /* 0083074e: call 0x82fc94 */ r_esp -= 4; W32(r_esp, 0x830753u); f_0082fc94();
L_00830753:; BB(0x00830753);
    /* 00830753: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00830756: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x83075bu); f_0082d838();
    /* 0083075b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083075d: jne 0x83076c */ if (!fZ) goto L_0083076c;
L_0083075f:; BB(0x0083075f);
    /* 0083075f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00830763: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00830765: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x83076au); f_00830df8();
    /* 0083076a: jmp 0x83078a */ goto L_0083078a;
L_0083076c:; BB(0x0083076c);
    /* 0083076c: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083076f: jne 0x830781 */ if (!fZ) goto L_00830781;
L_00830771:; BB(0x00830771);
    /* 00830771: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00830775: mov edx, 1 */ r_edx = 0x1u;
    /* 0083077a: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x83077fu); f_00830df8();
    /* 0083077f: jmp 0x83078a */ goto L_0083078a;
L_00830781:; BB(0x00830781);
    /* 00830781: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00830785: call 0x8431a4 */ r_esp -= 4; W32(r_esp, 0x83078au); f_008431a4();
L_0083078a:; BB(0x0083078a);
    /* 0083078a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0083078e: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x830793u); f_00831290();
    /* 00830793: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00830796: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00830797: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00830798: ret  */ FN_RET(0x008305ec); r_esp += 4; return;
L_00830799:; BB(0x00830799);
    /* 00830799: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0083079d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083079e: call dword ptr [ebp + 0x3c] */ { u32 t = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, 0x8307a1u); call_ind(t); }
    /* 008307a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008307a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008307a4: je 0x8307b0 */ if (fZ) goto L_008307b0;
L_008307a6:; BB(0x008307a6);
    /* 008307a6: mov ebp, 2 */ r_ebp = 0x2u;
    /* 008307ab: jmp 0x830726 */ goto L_00830726;
L_008307b0:; BB(0x008307b0);
    /* 008307b0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008307b2: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008307b7: je 0x8307df */ if (fZ) goto L_008307df;
L_008307b9:; BB(0x008307b9);
    /* 008307b9: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 008307bc: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 008307c0: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 008307c3: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 008307c7: mov ebp, dword ptr [edi + 0x18] */ r_ebp = R32((u32)(r_edi+0x18u));
    /* 008307ca: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 008307ce: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 008307d1: mov ebp, 2 */ r_ebp = 0x2u;
    /* 008307d6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008307da: jmp 0x830726 */ goto L_00830726;
L_008307df:; BB(0x008307df);
    /* 008307df: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008307e2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008307e6: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 008307e9: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 008307ed: mov ebp, dword ptr [edi + 0x1c] */ r_ebp = R32((u32)(r_edi+0x1cu));
    /* 008307f0: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 008307f4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008307f6: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008307f8: je 0x830804 */ if (fZ) goto L_00830804;
L_008307fa:; BB(0x008307fa);
    /* 008307fa: mov ebp, 1 */ r_ebp = 0x1u;
    /* 008307ff: jmp 0x830726 */ goto L_00830726;
L_00830804:; BB(0x00830804);
    /* 00830804: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00830806: jmp 0x830726 */ goto L_00830726;
}

void f_0083080c(void) /* sub_83080C */
{
    FN_ENTER(0x0083080c);
    /* 0083080c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083080d: mov eax, ecx */ r_eax = r_ecx;
    /* 0083080f: mov ebx, eax */ r_ebx = r_eax;
L_00830811:; BB(0x00830811);
    /* 00830811: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x830816u); f_0082d7b0();
    /* 00830816: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00830818: call 0x8305ec */ r_esp -= 4; W32(r_esp, 0x83081du); f_008305ec();
    /* 0083081d: mov edx, dword ptr [0xae6dc0] */ r_edx = R32((u32)(0xae6dc0u));
    /* 00830823: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830825: je 0x83082b */ if (fZ) goto L_0083082b;
L_00830827:; BB(0x00830827);
    /* 00830827: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00830828: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x83082au); call_ind(t); }
    /* 0083082a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083082b:; BB(0x0083082b);
    /* 0083082b: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0083082e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830830: je 0x830837 */ if (fZ) goto L_00830837;
L_00830832:; BB(0x00830832);
    /* 00830832: call 0x83080c */ r_esp -= 4; W32(r_esp, 0x830837u); f_0083080c();
L_00830837:; BB(0x00830837);
    /* 00830837: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x83083cu); f_0082da80();
    /* 0083083c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 0083083f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00830841: jne 0x830811 */ if (!fZ) goto L_00830811;
L_00830843:; BB(0x00830843);
    /* 00830843: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00830844: ret  */ FN_RET(0x0083080c); r_esp += 4; return;
}

void f_00830848(void) /* sub_830848 */
{
    FN_ENTER(0x00830848);
    /* 00830848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00830849: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083084a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083084b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083084c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083084f: mov eax, edx */ r_eax = r_edx;
    /* 00830851: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00830853: mov ecx, eax */ r_ecx = r_eax;
    /* 00830855: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00830859: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0083085b: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0083085e: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00830861: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00830864: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 00830867: mov dword ptr [0xaeb520], 0xaeb4a0 */ W32((u32)(0xaeb520u), 0xaeb4a0u);
    /* 00830871: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00830875: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830879: call 0x8303dc */ r_esp -= 4; W32(r_esp, 0x83087eu); f_008303dc();
    /* 0083087e: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 00830883: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 00830886: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083088c: jne 0x8308a1 */ if (!fZ) goto L_008308a1;
L_0083088e:; BB(0x0083088e);
    /* 0083088e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00830890: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00830893: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00830896: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00830899: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0083089c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0083089f: jmp 0x8308bd */ goto L_008308bd;
L_008308a1:; BB(0x008308a1);
    /* 008308a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008308a2: call 0x847a98 */ r_esp -= 4; W32(r_esp, 0x8308a7u); f_00847a98();
    /* 008308a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008308a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008308aa: jne 0x8308bd */ if (!fZ) goto L_008308bd;
L_008308ac:; BB(0x008308ac);
    /* 008308ac: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008308ae: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 008308b1: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 008308b4: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 008308b7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008308ba: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008308bd:; BB(0x008308bd);
    /* 008308bd: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008308c3: je 0x8308ce */ if (fZ) goto L_008308ce;
L_008308c5:; BB(0x008308c5);
    /* 008308c5: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 008308ca: add dword ptr [eax + 0x1c], 1 */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008308ce:; BB(0x008308ce);
    /* 008308ce: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008308d4: je 0x8308df */ if (fZ) goto L_008308df;
L_008308d6:; BB(0x008308d6);
    /* 008308d6: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 008308db: add dword ptr [eax + 0x1c], 1 */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008308df:; BB(0x008308df);
    /* 008308df: test edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008308e5: jne 0x830920 */ if (!fZ) goto L_00830920;
L_008308e7:; BB(0x008308e7);
    /* 008308e7: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008308ed: jne 0x830902 */ if (!fZ) goto L_00830902;
L_008308ef:; BB(0x008308ef);
    /* 008308ef: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008308f2: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008308f4: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008308f7: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 008308fa: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 008308fd: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00830900: jmp 0x830959 */ goto L_00830959;
L_00830902:; BB(0x00830902);
    /* 00830902: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00830903: call 0x847a98 */ r_esp -= 4; W32(r_esp, 0x830908u); f_00847a98();
    /* 00830908: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083090b: jne 0x830959 */ if (!fZ) goto L_00830959;
L_0083090d:; BB(0x0083090d);
    /* 0083090d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00830910: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00830912: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00830915: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00830918: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 0083091b: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 0083091e: jmp 0x830959 */ goto L_00830959;
L_00830920:; BB(0x00830920);
    /* 00830920: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00830921: call 0x847a98 */ r_esp -= 4; W32(r_esp, 0x830926u); f_00847a98();
    /* 00830926: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830927: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830929: je 0x830948 */ if (fZ) goto L_00830948;
L_0083092b:; BB(0x0083092b);
    /* 0083092b: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0083092d: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 00830930: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00830933: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00830936: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00830938: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0083093a: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 0083093d: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00830940: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 00830943: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00830946: jmp 0x830959 */ goto L_00830959;
L_00830948:; BB(0x00830948);
    /* 00830948: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0083094b: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0083094d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00830950: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00830953: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 00830956: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
L_00830959:; BB(0x00830959);
    /* 00830959: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083095f: je 0x83096a */ if (fZ) goto L_0083096a;
L_00830961:; BB(0x00830961);
    /* 00830961: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 00830966: add dword ptr [eax + 0x1c], 1 */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0083096a:; BB(0x0083096a);
    /* 0083096a: test edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830970: je 0x83097b */ if (fZ) goto L_0083097b;
L_00830972:; BB(0x00830972);
    /* 00830972: mov eax, dword ptr [0xaeb520] */ r_eax = R32((u32)(0xaeb520u));
    /* 00830977: add dword ptr [eax + 0x1c], 1 */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0083097b:; BB(0x0083097b);
    /* 0083097b: test edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830981: je 0x830999 */ if (fZ) goto L_00830999;
L_00830983:; BB(0x00830983);
    /* 00830983: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00830986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830987: call 0x847adc */ r_esp -= 4; W32(r_esp, 0x83098cu); f_00847adc();
    /* 0083098c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083098d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083098f: jne 0x830999 */ if (!fZ) goto L_00830999;
L_00830991:; BB(0x00830991);
    /* 00830991: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00830994: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00830997: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_00830999:; BB(0x00830999);
    /* 00830999: test edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083099f: jne 0x8309b4 */ if (!fZ) goto L_008309b4;
L_008309a1:; BB(0x008309a1);
    /* 008309a1: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008309a5: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008309a8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008309aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008309ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008309ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008309af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008309b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008309b1: ret 8 */ FN_RET(0x00830848); r_esp += 12; return;
L_008309b4:; BB(0x008309b4);
    /* 008309b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008309b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008309b9: call 0x847adc */ r_esp -= 4; W32(r_esp, 0x8309beu); f_00847adc();
    /* 008309be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008309bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008309c1: jne 0x8309cc */ if (!fZ) goto L_008309cc;
L_008309c3:; BB(0x008309c3);
    /* 008309c3: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008309c7: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 008309ca: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_008309cc:; BB(0x008309cc);
    /* 008309cc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008309cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008309d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008309d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008309d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008309d3: ret 8 */ FN_RET(0x00830848); r_esp += 12; return;
}

void f_008309d8(void) /* sub_8309D8 */
{
    FN_ENTER(0x008309d8);
    /* 008309d8: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x8309ddu); f_0082e344();
    /* 008309dd: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008309e1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008309e5: call 0x830328 */ r_esp -= 4; W32(r_esp, 0x8309eau); f_00830328();
    /* 008309ea: mov eax, dword ptr [0xae6dc8] */ r_eax = R32((u32)(0xae6dc8u));
    /* 008309ef: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008309f1: je 0x830a0c */ if (fZ) goto L_00830a0c;
L_008309f3:; BB(0x008309f3);
    /* 008309f3: mov eax, dword ptr [0xa22734] */ r_eax = R32((u32)(0xa22734u));
    /* 008309f8: mov dword ptr [0xaeb520], 0xaeb4a0 */ W32((u32)(0xaeb520u), 0xaeb4a0u);
    /* 00830a02: mov dword ptr [0xaeb508], eax */ W32((u32)(0xaeb508u), r_eax);
    /* 00830a07: mov dword ptr [0xaeb4c8], eax */ W32((u32)(0xaeb4c8u), r_eax);
L_00830a0c:; BB(0x00830a0c);
    /* 00830a0c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a10: mov eax, dword ptr [0xa22b60] */ r_eax = R32((u32)(0xa22b60u));
    /* 00830a15: mov dword ptr [eax + 0xc], 0x82e818 */ W32((u32)(r_eax+0xcu), 0x82e818u);
    /* 00830a1c: call 0x847a40 */ r_esp -= 4; W32(r_esp, 0x830a21u); f_00847a40();
    /* 00830a21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830a22: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x830a27u); f_0082e4f4();
    /* 00830a27: ret  */ FN_RET(0x008309d8); r_esp += 4; return;
}

void f_00830a28(void) /* sub_830A28 */
{
    FN_ENTER(0x00830a28);
    /* 00830a28: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x830a2du); f_0082e344();
    /* 00830a2d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a31: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00830a35: call 0x8304c8 */ r_esp -= 4; W32(r_esp, 0x830a3au); f_008304c8();
    /* 00830a3a: mov eax, dword ptr [0xa22b60] */ r_eax = R32((u32)(0xa22b60u));
    /* 00830a3f: mov edx, dword ptr [0xae6dc8] */ r_edx = R32((u32)(0xae6dc8u));
    /* 00830a45: mov dword ptr [eax + 0xc], 0x82e818 */ W32((u32)(r_eax+0xcu), 0x82e818u);
    /* 00830a4c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00830a4f: je 0x830a5f */ if (fZ) goto L_00830a5f;
L_00830a51:; BB(0x00830a51);
    /* 00830a51: mov edx, dword ptr [0xaeb520] */ r_edx = R32((u32)(0xaeb520u));
    /* 00830a57: mov eax, dword ptr [0xa22734] */ r_eax = R32((u32)(0xa22734u));
    /* 00830a5c: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_00830a5f:; BB(0x00830a5f);
    /* 00830a5f: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a63: call 0x8479e8 */ r_esp -= 4; W32(r_esp, 0x830a68u); f_008479e8();
    /* 00830a68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00830a69: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x830a6eu); f_0082e4f4();
    /* 00830a6e: ret  */ FN_RET(0x00830a28); r_esp += 4; return;
}

void f_00830a70(void) /* sub_830A70 */
{
    FN_ENTER(0x00830a70);
    /* 00830a70: call 0x82e344 */ r_esp -= 4; W32(r_esp, 0x830a75u); f_0082e344();
    /* 00830a75: push 0x82e818 */ { u32 v = 0x82e818u; r_esp -= 4; W32(r_esp, v); }
    /* 00830a7a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a7e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a82: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a86: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00830a8a: call 0x84785c */ r_esp -= 4; W32(r_esp, 0x830a8fu); f_0084785c();
    /* 00830a8f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00830a92: call 0x82e4f4 */ r_esp -= 4; W32(r_esp, 0x830a97u); f_0082e4f4();
    /* 00830a97: ret  */ FN_RET(0x00830a70); r_esp += 4; return;
}

void f_00830a98(void) /* sub_830A98 */
{
    FN_ENTER(0x00830a98);
    /* 00830a98: mov dword ptr [0xaeb5a4], ecx */ W32((u32)(0xaeb5a4u), r_ecx);
    /* 00830a9e: ret  */ FN_RET(0x00830a98); r_esp += 4; return;
}

void f_00830aa0(void) /* sub_830AA0 */
{
    FN_ENTER(0x00830aa0);
    /* 00830aa0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00830aa4: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00830aa6: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00830aa9: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00830aac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00830aae: je 0x830afe */ if (fZ) goto L_00830afe;
L_00830ab0:; BB(0x00830ab0);
    /* 00830ab0: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00830ab2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830ab4: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00830ab7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830ab9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830abb: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00830abe: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00830ac0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830ac2: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 00830ac5: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00830ac7: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00830aca: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830acc: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00830acf: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830ad1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830ad3: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00830ad6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00830ad8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830ada: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 00830add: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00830ae0: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00830ae3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00830ae5: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00830ae8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00830aea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830aec: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830aee: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00830af1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00830af3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830af5: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 00830af8: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
    /* 00830afb: ret 4 */ FN_RET(0x00830aa0); r_esp += 8; return;
L_00830afe:; BB(0x00830afe);
    /* 00830afe: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 00830b04: jmp 0x830ab0 */ goto L_00830ab0;
}

void f_00830b08(void) /* sub_830B08 */
{
    FN_ENTER(0x00830b08);
    /* 00830b08: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00830b0c: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00830b12: mov dword ptr [0xacc100], eax */ W32((u32)(0xacc100u), r_eax);
    /* 00830b17: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00830b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830b1a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00830b1d: call dword ptr [ecx + 0xc8] */ { u32 t = R32((u32)(r_ecx+0xc8u)); r_esp -= 4; W32(r_esp, 0x830b23u); call_ind(t); }
    /* 00830b23: ret  */ FN_RET(0x00830b08); r_esp += 4; return;
}

void f_00830b24(void) /* sub_830B24 */
{
    FN_ENTER(0x00830b24);
    /* 00830b24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00830b28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830b2a: je 0x830b61 */ if (fZ) goto L_00830b61;
L_00830b2c:; BB(0x00830b2c);
    /* 00830b2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00830b2f: je 0x830b60 */ if (fZ) goto L_00830b60;
L_00830b31:; BB(0x00830b31);
    /* 00830b31: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830b34: jne 0x830b49 */ if (!fZ) goto L_00830b49;
L_00830b36:; BB(0x00830b36);
    /* 00830b36: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00830b3b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b3d: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b3f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00830b41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830b42: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x830b48u); call_ind(t); }
    /* 00830b48: ret  */ FN_RET(0x00830b24); r_esp += 4; return;
L_00830b49:; BB(0x00830b49);
    /* 00830b49: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00830b4c: jne 0x830b60 */ if (!fZ) goto L_00830b60;
L_00830b4e:; BB(0x00830b4e);
    /* 00830b4e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00830b53: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b55: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b57: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00830b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830b5a: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x830b60u); call_ind(t); }
L_00830b60:; BB(0x00830b60);
    /* 00830b60: ret  */ FN_RET(0x00830b24); r_esp += 4; return;
L_00830b61:; BB(0x00830b61);
    /* 00830b61: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00830b66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b68: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00830b6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00830b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830b6d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x830b73u); call_ind(t); }
    /* 00830b73: ret  */ FN_RET(0x00830b24); r_esp += 4; return;
}

void f_00830b74(void) /* sub_830B74 */
{
    FN_ENTER(0x00830b74);
    /* 00830b74: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830b78: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00830b7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00830b7e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00830b82: je 0x830bfa */ if (fZ) goto L_00830bfa;
L_00830b84:; BB(0x00830b84);
    /* 00830b84: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00830b86: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830b88: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 00830b8b: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00830b8e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830b90: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830b92: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 00830b95: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00830b97: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830b99: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00830b9c: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00830b9f: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 00830ba2: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00830ba5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830ba7: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 00830ba9: fadd dword ptr [ecx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x34u));
    /* 00830bac: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00830bae: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00830bb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830bb2: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00830bb4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830bb6: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 00830bb8: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 00830bbb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00830bbd: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00830bc0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830bc2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830bc4: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00830bc7: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00830bca: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830bcc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830bce: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 00830bd1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00830bd3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830bd5: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00830bd8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00830bda: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830bdc: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00830bdf: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 00830be2: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00830be4: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 00830be7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00830be9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830beb: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 00830bee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830bf0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830bf2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830bf4: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00830bf7: ret 0xc */ FN_RET(0x00830b74); r_esp += 16; return;
L_00830bfa:; BB(0x00830bfa);
    /* 00830bfa: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 00830c00: jmp 0x830b84 */ goto L_00830b84;
}

void f_00830c04(void) /* sub_830C04 */
{
    FN_ENTER(0x00830c04);
    /* 00830c04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00830c05: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00830c08: mov edi, ecx */ r_edi = r_ecx;
    /* 00830c0a: mov ecx, edx */ r_ecx = r_edx;
    /* 00830c0c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00830c0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830c10: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00830c14: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x830c19u); f_008451f8();
    /* 00830c19: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830c1b: je 0x830ccb */ if (fZ) goto L_00830ccb;
L_00830c21:; BB(0x00830c21);
    /* 00830c21: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830c25: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 00830c28: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830c2b: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00830c2d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830c2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830c31: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830c33: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00830c36: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00830c39: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 00830c3c: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 00830c3f: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 00830c42: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00830c44: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00830c46: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830c4a: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00830c4c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830c4f: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00830c51: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830c53: fstp dword ptr [edi + 4] */ W_F32((u32)(r_edi+0x4u), ST(0)); FPOP();
    /* 00830c56: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830c5a: fmul dword ptr [edi + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x18u));
    /* 00830c5d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830c60: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00830c62: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830c64: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 00830c67: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830c6b: fmul dword ptr [edi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1cu));
    /* 00830c6e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830c71: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830c73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830c75: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 00830c78: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830c7b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830c7f: fchs  */ ST(0) = -ST(0);
    /* 00830c81: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00830c83: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00830c85: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830c87: fstp dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0)); FPOP();
    /* 00830c8a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830c8c: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830c8f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830c93: fchs  */ ST(0) = -ST(0);
    /* 00830c95: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00830c97: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830c99: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 00830c9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830c9e: fstp dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0)); FPOP();
    /* 00830ca1: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830ca4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830ca8: fchs  */ ST(0) = -ST(0);
    /* 00830caa: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00830cac: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830cae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830cb0: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00830cb3: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00830cb6: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830cb9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830cbd: fchs  */ ST(0) = -ST(0);
    /* 00830cbf: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00830cc1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830cc3: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00830cc6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00830cc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00830cca: ret  */ FN_RET(0x00830c04); r_esp += 4; return;
L_00830ccb:; BB(0x00830ccb);
    /* 00830ccb: mov edi, dword ptr [0xaf0328] */ r_edi = R32((u32)(0xaf0328u));
    /* 00830cd1: jmp 0x830c21 */ goto L_00830c21;
}

void f_00830cd8(void) /* sub_830CD8 */
{
    FN_ENTER(0x00830cd8);
    /* 00830cd8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00830cda: je 0x830d61 */ if (fZ) goto L_00830d61;
L_00830ce0:; BB(0x00830ce0);
    /* 00830ce0: mov eax, dword ptr [0xa21740] */ r_eax = R32((u32)(0xa21740u));
    /* 00830ce5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00830ce7: mov edx, dword ptr [0xa21744] */ r_edx = R32((u32)(0xa21744u));
    /* 00830ced: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00830cf0: mov eax, dword ptr [0xa21748] */ r_eax = R32((u32)(0xa21748u));
    /* 00830cf5: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00830cf8: mov eax, dword ptr [0xa2174c] */ r_eax = R32((u32)(0xa2174cu));
    /* 00830cfd: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00830d00: mov eax, dword ptr [0xa21750] */ r_eax = R32((u32)(0xa21750u));
    /* 00830d05: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00830d08: mov eax, dword ptr [0xa21754] */ r_eax = R32((u32)(0xa21754u));
    /* 00830d0d: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00830d10: mov eax, dword ptr [0xa21758] */ r_eax = R32((u32)(0xa21758u));
    /* 00830d15: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00830d18: mov eax, dword ptr [0xa2175c] */ r_eax = R32((u32)(0xa2175cu));
    /* 00830d1d: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00830d20: mov eax, dword ptr [0xa21760] */ r_eax = R32((u32)(0xa21760u));
    /* 00830d25: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00830d28: mov eax, dword ptr [0xa21764] */ r_eax = R32((u32)(0xa21764u));
    /* 00830d2d: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00830d30: mov eax, dword ptr [0xa21768] */ r_eax = R32((u32)(0xa21768u));
    /* 00830d35: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00830d38: mov eax, dword ptr [0xa2176c] */ r_eax = R32((u32)(0xa2176cu));
    /* 00830d3d: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00830d40: mov eax, dword ptr [0xa21770] */ r_eax = R32((u32)(0xa21770u));
    /* 00830d45: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00830d48: mov eax, dword ptr [0xa21774] */ r_eax = R32((u32)(0xa21774u));
    /* 00830d4d: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 00830d50: mov eax, dword ptr [0xa21778] */ r_eax = R32((u32)(0xa21778u));
    /* 00830d55: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 00830d58: mov eax, dword ptr [0xa2177c] */ r_eax = R32((u32)(0xa2177cu));
    /* 00830d5d: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00830d60: ret  */ FN_RET(0x00830cd8); r_esp += 4; return;
L_00830d61:; BB(0x00830d61);
    /* 00830d61: mov eax, dword ptr [0xaf0328] */ r_eax = R32((u32)(0xaf0328u));
    /* 00830d66: mov edx, dword ptr [0xa21740] */ r_edx = R32((u32)(0xa21740u));
    /* 00830d6c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00830d6e: mov ecx, dword ptr [0xa21744] */ r_ecx = R32((u32)(0xa21744u));
    /* 00830d74: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00830d77: mov edx, dword ptr [0xa21748] */ r_edx = R32((u32)(0xa21748u));
    /* 00830d7d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00830d80: mov edx, dword ptr [0xa2174c] */ r_edx = R32((u32)(0xa2174cu));
    /* 00830d86: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00830d89: mov edx, dword ptr [0xa21750] */ r_edx = R32((u32)(0xa21750u));
    /* 00830d8f: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00830d92: mov edx, dword ptr [0xa21754] */ r_edx = R32((u32)(0xa21754u));
    /* 00830d98: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00830d9b: mov edx, dword ptr [0xa21758] */ r_edx = R32((u32)(0xa21758u));
    /* 00830da1: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00830da4: mov edx, dword ptr [0xa2175c] */ r_edx = R32((u32)(0xa2175cu));
    /* 00830daa: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00830dad: mov edx, dword ptr [0xa21760] */ r_edx = R32((u32)(0xa21760u));
    /* 00830db3: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00830db6: mov edx, dword ptr [0xa21764] */ r_edx = R32((u32)(0xa21764u));
    /* 00830dbc: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00830dbf: mov edx, dword ptr [0xa21768] */ r_edx = R32((u32)(0xa21768u));
    /* 00830dc5: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00830dc8: mov edx, dword ptr [0xa2176c] */ r_edx = R32((u32)(0xa2176cu));
    /* 00830dce: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00830dd1: mov edx, dword ptr [0xa21770] */ r_edx = R32((u32)(0xa21770u));
    /* 00830dd7: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00830dda: mov edx, dword ptr [0xa21774] */ r_edx = R32((u32)(0xa21774u));
    /* 00830de0: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00830de3: mov edx, dword ptr [0xa21778] */ r_edx = R32((u32)(0xa21778u));
    /* 00830de9: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00830dec: mov edx, dword ptr [0xa2177c] */ r_edx = R32((u32)(0xa2177cu));
    /* 00830df2: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 00830df5: ret  */ FN_RET(0x00830cd8); r_esp += 4; return;
}

void f_00830df8(void) /* sub_830DF8 */
{
    FN_ENTER(0x00830df8);
    /* 00830df8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00830df9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00830dfa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00830dfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00830dff: mov ebp, dword ptr [0xaf0328] */ r_ebp = R32((u32)(0xaf0328u));
    /* 00830e05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830e07: je 0x83104e */ if (fZ) goto L_0083104e;
L_00830e0d:; BB(0x00830e0d);
    /* 00830e0d: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00830e10: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830e12: je 0x830ecb */ if (fZ) goto L_00830ecb;
L_00830e18:; BB(0x00830e18);
    /* 00830e18: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00830e1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830e1c: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00830e20: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x830e25u); f_008451f8();
    /* 00830e25: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830e29: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830e2c: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00830e2f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830e31: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00830e34: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00830e37: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00830e3a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00830e3d: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00830e40: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00830e42: fchs  */ ST(0) = -ST(0);
    /* 00830e44: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00830e46: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 00830e48: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00830e4a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00830e4d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830e51: fchs  */ ST(0) = -ST(0);
    /* 00830e53: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00830e55: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830e58: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00830e5a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830e5c: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 00830e5f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830e63: fchs  */ ST(0) = -ST(0);
    /* 00830e65: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00830e68: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830e6b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830e6d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830e6f: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00830e72: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830e76: fchs  */ ST(0) = -ST(0);
    /* 00830e78: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 00830e7b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830e7e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00830e80: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830e82: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00830e85: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00830e87: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830e8a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830e8c: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00830e90: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00830e92: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00830e94: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00830e97: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830e99: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830e9c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830e9e: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00830ea2: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00830ea4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00830ea6: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00830ea9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830eab: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00830eaf: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00830eb2: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830eb5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830eb7: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 00830eba: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00830ebd: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830ec0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830ec2: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00830ec6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830ec8: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_00830ecb:; BB(0x00830ecb);
    /* 00830ecb: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00830ecd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830ecf: je 0x830f89 */ if (fZ) goto L_00830f89;
L_00830ed5:; BB(0x00830ed5);
    /* 00830ed5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00830ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830ed9: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00830edd: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x830ee2u); f_008451f8();
    /* 00830ee2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830ee6: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 00830ee9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830eec: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00830eef: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830ef1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830ef3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830ef5: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00830ef8: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00830efb: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00830efe: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00830f01: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00830f04: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00830f06: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00830f09: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f0d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00830f0f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830f12: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00830f14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830f16: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00830f19: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f1d: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00830f20: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830f23: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00830f25: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830f27: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00830f2a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f2e: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 00830f31: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830f34: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830f36: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830f38: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00830f3b: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830f3e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f42: fchs  */ ST(0) = -ST(0);
    /* 00830f44: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00830f46: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00830f48: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830f4a: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00830f4d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00830f4f: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830f52: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f56: fchs  */ ST(0) = -ST(0);
    /* 00830f58: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00830f5a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830f5c: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00830f5f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830f61: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00830f64: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830f67: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f6b: fchs  */ ST(0) = -ST(0);
    /* 00830f6d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00830f6f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830f71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830f73: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 00830f76: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00830f79: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830f7c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830f80: fchs  */ ST(0) = -ST(0);
    /* 00830f82: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00830f84: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830f86: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_00830f89:; BB(0x00830f89);
    /* 00830f89: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00830f8c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00830f8e: je 0x831289 */ if (fZ) goto L_00831289;
L_00830f94:; BB(0x00830f94);
    /* 00830f94: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00830f97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00830f98: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00830f9c: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x830fa1u); f_008451f8();
    /* 00830fa1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830fa5: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 00830fa8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830fab: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00830fae: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00830fb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00830fb2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00830fb4: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00830fb7: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00830fba: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00830fbd: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00830fc0: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00830fc3: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00830fc5: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00830fc8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830fcc: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00830fce: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830fd1: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00830fd3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830fd5: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 00830fd8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830fdc: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 00830fdf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830fe2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00830fe4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830fe6: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00830fe9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00830fed: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 00830ff0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00830ff3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00830ff5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00830ff7: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00830ffa: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00830ffd: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831001: fchs  */ ST(0) = -ST(0);
    /* 00831003: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00831005: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00831007: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00831009: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 0083100c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083100e: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00831011: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831015: fchs  */ ST(0) = -ST(0);
    /* 00831017: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00831019: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083101b: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0083101e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831020: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00831023: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00831026: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083102a: fchs  */ ST(0) = -ST(0);
    /* 0083102c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083102e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00831030: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831032: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00831035: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00831038: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083103b: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083103f: fchs  */ ST(0) = -ST(0);
    /* 00831041: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00831043: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831045: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00831048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083104b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083104c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083104d: ret  */ FN_RET(0x00830df8); r_esp += 4; return;
L_0083104e:; BB(0x0083104e);
    /* 0083104e: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00831051: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831053: je 0x83110d */ if (fZ) goto L_0083110d;
L_00831059:; BB(0x00831059);
    /* 00831059: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083105c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083105d: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00831061: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x831066u); f_008451f8();
    /* 00831066: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083106a: fmul dword ptr [ebp + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x10u));
    /* 0083106d: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00831070: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00831073: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00831075: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831077: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00831079: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0083107c: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0083107f: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00831082: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 00831085: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 00831088: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083108a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0083108d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831091: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00831093: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00831096: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00831098: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083109a: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0083109d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008310a1: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 008310a4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008310a7: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008310a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008310ab: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 008310ae: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008310b2: fmul dword ptr [ebp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x1cu));
    /* 008310b5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008310b8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008310ba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008310bc: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 008310bf: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008310c2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008310c6: fchs  */ ST(0) = -ST(0);
    /* 008310c8: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 008310ca: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008310cc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008310ce: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 008310d1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008310d3: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008310d6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008310da: fchs  */ ST(0) = -ST(0);
    /* 008310dc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 008310de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008310e0: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 008310e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008310e5: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 008310e8: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008310eb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008310ef: fchs  */ ST(0) = -ST(0);
    /* 008310f1: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008310f3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008310f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008310f7: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 008310fa: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008310fd: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00831100: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831104: fchs  */ ST(0) = -ST(0);
    /* 00831106: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00831108: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083110a: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
L_0083110d:; BB(0x0083110d);
    /* 0083110d: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00831110: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00831112: je 0x8311cb */ if (fZ) goto L_008311cb;
L_00831118:; BB(0x00831118);
    /* 00831118: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083111b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083111c: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00831120: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x831125u); f_008451f8();
    /* 00831125: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831129: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083112c: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0083112f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00831131: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00831134: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00831137: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0083113a: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 0083113d: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00831140: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00831142: fchs  */ ST(0) = -ST(0);
    /* 00831144: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00831146: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 00831148: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083114a: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0083114d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831151: fchs  */ ST(0) = -ST(0);
    /* 00831153: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00831155: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00831158: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083115a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083115c: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0083115f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831163: fchs  */ ST(0) = -ST(0);
    /* 00831165: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00831168: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083116b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083116d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083116f: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 00831172: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831176: fchs  */ ST(0) = -ST(0);
    /* 00831178: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 0083117b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083117e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00831180: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831182: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00831185: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00831187: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083118a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083118c: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 00831190: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00831192: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00831194: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00831197: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00831199: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083119c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083119e: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 008311a2: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 008311a4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008311a6: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 008311a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008311ab: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 008311af: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 008311b2: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008311b5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008311b7: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 008311ba: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 008311bd: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 008311c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008311c2: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 008311c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008311c8: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_008311cb:; BB(0x008311cb);
    /* 008311cb: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008311cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008311cf: je 0x831289 */ if (fZ) goto L_00831289;
L_008311d5:; BB(0x008311d5);
    /* 008311d5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008311d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008311d9: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 008311dd: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x8311e2u); f_008451f8();
    /* 008311e2: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008311e6: fmul dword ptr [ebp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x20u));
    /* 008311e9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008311ec: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 008311ef: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 008311f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008311f3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008311f5: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 008311f8: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 008311fb: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 008311fe: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00831201: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00831204: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00831206: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00831209: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083120d: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083120f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00831212: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00831214: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831216: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00831219: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083121d: fmul dword ptr [ebp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x28u));
    /* 00831220: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00831223: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00831225: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831227: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0083122a: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083122e: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 00831231: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00831234: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00831236: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831238: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0083123b: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083123e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831242: fchs  */ ST(0) = -ST(0);
    /* 00831244: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00831246: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00831248: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083124a: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 0083124d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083124f: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00831252: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831256: fchs  */ ST(0) = -ST(0);
    /* 00831258: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083125a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083125c: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0083125f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831261: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00831264: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 00831267: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083126b: fchs  */ ST(0) = -ST(0);
    /* 0083126d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083126f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00831271: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00831273: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 00831276: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00831279: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083127c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00831280: fchs  */ ST(0) = -ST(0);
    /* 00831282: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00831284: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00831286: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
L_00831289:; BB(0x00831289);
    /* 00831289: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083128c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083128d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083128e: ret  */ FN_RET(0x00830df8); r_esp += 4; return;
}

