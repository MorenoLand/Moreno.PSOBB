#include "protos.h"

void f_00841008(void) /* sub_841008 */
{
    FN_ENTER(0x00841008);
    /* 00841008: mov eax, dword ptr [0xadc938] */ r_eax = R32((u32)(0xadc938u));
    /* 0084100d: ret  */ FN_RET(0x00841008); r_esp += 4; return;
}

void f_00841010(void) /* sub_841010 */
{
    FN_ENTER(0x00841010);
    /* 00841010: mov eax, dword ptr [0xadc92c] */ r_eax = R32((u32)(0xadc92cu));
    /* 00841015: ret  */ FN_RET(0x00841010); r_esp += 4; return;
}

void f_00841018(void) /* sub_841018 */
{
    FN_ENTER(0x00841018);
    /* 00841018: mov eax, dword ptr [0xadc93c] */ r_eax = R32((u32)(0xadc93cu));
    /* 0084101d: ret  */ FN_RET(0x00841018); r_esp += 4; return;
}

void f_00841020(void) /* sub_841020 */
{
    FN_ENTER(0x00841020);
    /* 00841020: mov eax, dword ptr [0xadc930] */ r_eax = R32((u32)(0xadc930u));
    /* 00841025: ret  */ FN_RET(0x00841020); r_esp += 4; return;
}

void f_00841028(void) /* sub_841028 */
{
    FN_ENTER(0x00841028);
    /* 00841028: mov eax, dword ptr [0xadc940] */ r_eax = R32((u32)(0xadc940u));
    /* 0084102d: ret  */ FN_RET(0x00841028); r_esp += 4; return;
}

void f_00841030(void) /* sub_841030 */
{
    FN_ENTER(0x00841030);
    /* 00841030: push dword ptr [0xa21cc0] */ { u32 v = R32((u32)(0xa21cc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841036: push 0xadb3e0 */ { u32 v = 0xadb3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084103b: call 0x85aa95 */ r_esp -= 4; W32(r_esp, 0x841040u); f_0085aa95();
    /* 00841040: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841043: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841045: jne 0x84104a */ if (!fZ) goto L_0084104a;
L_00841047:; BB(0x00841047);
    /* 00841047: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841049: ret  */ FN_RET(0x00841030); r_esp += 4; return;
L_0084104a:; BB(0x0084104a);
    /* 0084104a: mov eax, 1 */ r_eax = 0x1u;
    /* 0084104f: ret  */ FN_RET(0x00841030); r_esp += 4; return;
}

void f_00841050(void) /* sub_841050 */
{
    FN_ENTER(0x00841050);
    /* 00841050: mov eax, dword ptr [0xadc904] */ r_eax = R32((u32)(0xadc904u));
    /* 00841055: ret  */ FN_RET(0x00841050); r_esp += 4; return;
}

void f_00841058(void) /* sub_841058 */
{
    FN_ENTER(0x00841058);
    /* 00841058: mov eax, dword ptr [0xadc908] */ r_eax = R32((u32)(0xadc908u));
    /* 0084105d: ret  */ FN_RET(0x00841058); r_esp += 4; return;
}

void f_00841060(void) /* sub_841060 */
{
    FN_ENTER(0x00841060);
    /* 00841060: mov dword ptr [0xadc908], 0 */ W32((u32)(0xadc908u), 0x0u);
    /* 0084106a: ret  */ FN_RET(0x00841060); r_esp += 4; return;
}

void f_0084106c(void) /* sub_84106C */
{
    FN_ENTER(0x0084106c);
    /* 0084106c: mov eax, 1 */ r_eax = 0x1u;
    /* 00841071: mov dword ptr [0xadc944], eax */ W32((u32)(0xadc944u), r_eax);
    /* 00841076: mov dword ptr [0xadc948], eax */ W32((u32)(0xadc948u), r_eax);
    /* 0084107b: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x841080u); f_0082d2a4();
    /* 00841080: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841082: je 0x84108a */ if (fZ) goto L_0084108a;
L_00841084:; BB(0x00841084);
    /* 00841084: mov eax, 1 */ r_eax = 0x1u;
    /* 00841089: ret  */ FN_RET(0x0084106c); r_esp += 4; return;
L_0084108a:; BB(0x0084108a);
    /* 0084108a: call 0x841090 */ r_esp -= 4; W32(r_esp, 0x84108fu); f_00841090();
    /* 0084108f: ret  */ FN_RET(0x0084106c); r_esp += 4; return;
}

void f_00841090(void) /* sub_841090 */
{
    FN_ENTER(0x00841090);
    /* 00841090: mov eax, dword ptr [0xadc944] */ r_eax = R32((u32)(0xadc944u));
    /* 00841095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841097: je 0x8410ce */ if (fZ) goto L_008410ce;
L_00841099:; BB(0x00841099);
    /* 00841099: mov eax, dword ptr [0xadc948] */ r_eax = R32((u32)(0xadc948u));
    /* 0084109e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008410a0: je 0x8410bf */ if (fZ) goto L_008410bf;
L_008410a2:; BB(0x008410a2);
    /* 008410a2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008410a5: jne 0x8410ae */ if (!fZ) goto L_008410ae;
L_008410a7:; BB(0x008410a7);
    /* 008410a7: call 0x8410d4 */ r_esp -= 4; W32(r_esp, 0x8410acu); f_008410d4();
    /* 008410ac: jmp 0x8410c4 */ goto L_008410c4;
L_008410ae:; BB(0x008410ae);
    /* 008410ae: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008410b1: jne 0x8410c4 */ if (!fZ) goto L_008410c4;
L_008410b3:; BB(0x008410b3);
    /* 008410b3: call 0x8410d4 */ r_esp -= 4; W32(r_esp, 0x8410b8u); f_008410d4();
    /* 008410b8: call 0x84083c */ r_esp -= 4; W32(r_esp, 0x8410bdu); f_0084083c();
    /* 008410bd: jmp 0x8410c4 */ goto L_008410c4;
L_008410bf:; BB(0x008410bf);
    /* 008410bf: call 0x84113c */ r_esp -= 4; W32(r_esp, 0x8410c4u); f_0084113c();
L_008410c4:; BB(0x008410c4);
    /* 008410c4: mov dword ptr [0xadc944], 0 */ W32((u32)(0xadc944u), 0x0u);
L_008410ce:; BB(0x008410ce);
    /* 008410ce: mov eax, 1 */ r_eax = 0x1u;
    /* 008410d3: ret  */ FN_RET(0x00841090); r_esp += 4; return;
}

void f_008410d4(void) /* sub_8410D4 */
{
    FN_ENTER(0x008410d4);
    /* 008410d4: mov eax, dword ptr [0xa21ccc] */ r_eax = R32((u32)(0xa21cccu));
    /* 008410d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008410dc: je 0x8410e8 */ if (fZ) goto L_008410e8;
L_008410de:; BB(0x008410de);
    /* 008410de: mov ecx, 0x98b224 */ r_ecx = 0x98b224u;
    /* 008410e3: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x8410e8u); f_0083c070();
L_008410e8:; BB(0x008410e8);
    /* 008410e8: mov edx, dword ptr [0xadc8f8] */ r_edx = R32((u32)(0xadc8f8u));
    /* 008410ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008410f0: mov dword ptr [0xa21ccc], eax */ W32((u32)(0xa21cccu), r_eax);
    /* 008410f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008410f7: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 008410fc: je 0x841115 */ if (fZ) goto L_00841115;
L_008410fe:; BB(0x008410fe);
    /* 008410fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00841100: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00841106: call 0x8c0b12 */ r_esp -= 4; W32(r_esp, 0x84110bu); f_008c0b12();
    /* 0084110b: mov dword ptr [0xadc900], 1 */ W32((u32)(0xadc900u), 0x1u);
L_00841115:; BB(0x00841115);
    /* 00841115: mov dword ptr [0xadc924], 0 */ W32((u32)(0xadc924u), 0x0u);
    /* 0084111f: push 0xadc920 */ { u32 v = 0xadc920u; r_esp -= 4; W32(r_esp, v); }
    /* 00841124: push 0xadc91c */ { u32 v = 0xadc91cu; r_esp -= 4; W32(r_esp, v); }
    /* 00841129: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084112f: call 0x8c0b30 */ r_esp -= 4; W32(r_esp, 0x841134u); f_008c0b30();
    /* 00841134: mov eax, 1 */ r_eax = 0x1u;
    /* 00841139: ret  */ FN_RET(0x008410d4); r_esp += 4; return;
}

void f_0084113c(void) /* sub_84113C */
{
    FN_ENTER(0x0084113c);
    /* 0084113c: mov eax, dword ptr [0xa21ccc] */ r_eax = R32((u32)(0xa21cccu));
    /* 00841141: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841143: jne 0x841189 */ if (!fZ) goto L_00841189;
L_00841145:; BB(0x00841145);
    /* 00841145: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 0084114a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084114c: je 0x841165 */ if (fZ) goto L_00841165;
L_0084114e:; BB(0x0084114e);
    /* 0084114e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00841150: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00841156: call 0x8c0b12 */ r_esp -= 4; W32(r_esp, 0x84115bu); f_008c0b12();
    /* 0084115b: mov dword ptr [0xadc900], 0 */ W32((u32)(0xadc900u), 0x0u);
L_00841165:; BB(0x00841165);
    /* 00841165: mov dword ptr [0xa21ccc], 1 */ W32((u32)(0xa21cccu), 0x1u);
    /* 0084116f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841171: mov eax, 1 */ r_eax = 0x1u;
    /* 00841176: mov dword ptr [0xadc924], edx */ W32((u32)(0xadc924u), r_edx);
    /* 0084117c: mov dword ptr [0xadc91c], edx */ W32((u32)(0xadc91cu), r_edx);
    /* 00841182: mov dword ptr [0xadc920], edx */ W32((u32)(0xadc920u), r_edx);
    /* 00841188: ret  */ FN_RET(0x0084113c); r_esp += 4; return;
L_00841189:; BB(0x00841189);
    /* 00841189: mov ecx, 0x98b240 */ r_ecx = 0x98b240u;
    /* 0084118e: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x841193u); f_0083c070();
    /* 00841193: jmp 0x841145 */ goto L_00841145;
}

void f_00841198(void) /* sub_841198 */
{
    FN_ENTER(0x00841198);
    /* 00841198: mov dword ptr [0xadc944], 1 */ W32((u32)(0xadc944u), 0x1u);
    /* 008411a2: mov dword ptr [0xadc948], 0 */ W32((u32)(0xadc948u), 0x0u);
    /* 008411ac: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x8411b1u); f_0082d2a4();
    /* 008411b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008411b3: je 0x8411bb */ if (fZ) goto L_008411bb;
L_008411b5:; BB(0x008411b5);
    /* 008411b5: mov eax, 1 */ r_eax = 0x1u;
    /* 008411ba: ret  */ FN_RET(0x00841198); r_esp += 4; return;
L_008411bb:; BB(0x008411bb);
    /* 008411bb: call 0x841090 */ r_esp -= 4; W32(r_esp, 0x8411c0u); f_00841090();
    /* 008411c0: ret  */ FN_RET(0x00841198); r_esp += 4; return;
}

void f_008411c4(void) /* sub_8411C4 */
{
    FN_ENTER(0x008411c4);
    /* 008411c4: mov dword ptr [0xadc944], 1 */ W32((u32)(0xadc944u), 0x1u);
    /* 008411ce: mov dword ptr [0xadc948], 2 */ W32((u32)(0xadc948u), 0x2u);
    /* 008411d8: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x8411ddu); f_0082d2a4();
    /* 008411dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008411df: je 0x8411e7 */ if (fZ) goto L_008411e7;
L_008411e1:; BB(0x008411e1);
    /* 008411e1: mov eax, 1 */ r_eax = 0x1u;
    /* 008411e6: ret  */ FN_RET(0x008411c4); r_esp += 4; return;
L_008411e7:; BB(0x008411e7);
    /* 008411e7: call 0x841090 */ r_esp -= 4; W32(r_esp, 0x8411ecu); f_00841090();
    /* 008411ec: ret  */ FN_RET(0x008411c4); r_esp += 4; return;
}

void f_008411f0(void) /* sub_8411F0 */
{
    FN_ENTER(0x008411f0);
    /* 008411f0: mov eax, dword ptr [0xadc918] */ r_eax = R32((u32)(0xadc918u));
    /* 008411f5: ret  */ FN_RET(0x008411f0); r_esp += 4; return;
}

void f_008411f8(void) /* sub_8411F8 */
{
    FN_ENTER(0x008411f8);
    /* 008411f8: mov eax, 1 */ r_eax = 0x1u;
    /* 008411fd: mov dword ptr [0xadc94c], eax */ W32((u32)(0xadc94cu), r_eax);
    /* 00841202: mov dword ptr [0xadc950], eax */ W32((u32)(0xadc950u), r_eax);
    /* 00841207: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x84120cu); f_0082d2a4();
    /* 0084120c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084120e: jne 0x841215 */ if (!fZ) goto L_00841215;
L_00841210:; BB(0x00841210);
    /* 00841210: call 0x841218 */ r_esp -= 4; W32(r_esp, 0x841215u); f_00841218();
L_00841215:; BB(0x00841215);
    /* 00841215: ret  */ FN_RET(0x008411f8); r_esp += 4; return;
}

void f_00841218(void) /* sub_841218 */
{
    FN_ENTER(0x00841218);
    /* 00841218: mov eax, dword ptr [0xadc94c] */ r_eax = R32((u32)(0xadc94cu));
    /* 0084121d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084121f: je 0x841255 */ if (fZ) goto L_00841255;
L_00841221:; BB(0x00841221);
    /* 00841221: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841227: call 0x8c0b4e */ r_esp -= 4; W32(r_esp, 0x84122cu); f_008c0b4e();
    /* 0084122c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084122e: je 0x84126e */ if (fZ) goto L_0084126e;
L_00841230:; BB(0x00841230);
    /* 00841230: mov eax, dword ptr [0xadc950] */ r_eax = R32((u32)(0xadc950u));
    /* 00841235: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841237: jne 0x84124b */ if (!fZ) goto L_0084124b;
L_00841239:; BB(0x00841239);
    /* 00841239: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084123b: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841241: call 0x8c0b54 */ r_esp -= 4; W32(r_esp, 0x841246u); f_008c0b54();
    /* 00841246: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
L_0084124b:; BB(0x0084124b);
    /* 0084124b: mov dword ptr [0xadc94c], 0 */ W32((u32)(0xadc94cu), 0x0u);
L_00841255:; BB(0x00841255);
    /* 00841255: mov eax, dword ptr [0xadc954] */ r_eax = R32((u32)(0xadc954u));
    /* 0084125a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084125c: je 0x84126d */ if (fZ) goto L_0084126d;
L_0084125e:; BB(0x0084125e);
    /* 0084125e: call 0x84128c */ r_esp -= 4; W32(r_esp, 0x841263u); f_0084128c();
    /* 00841263: mov dword ptr [0xadc954], 0 */ W32((u32)(0xadc954u), 0x0u);
L_0084126d:; BB(0x0084126d);
    /* 0084126d: ret  */ FN_RET(0x00841218); r_esp += 4; return;
L_0084126e:; BB(0x0084126e);
    /* 0084126e: mov eax, dword ptr [0xadc950] */ r_eax = R32((u32)(0xadc950u));
    /* 00841273: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841275: je 0x84124b */ if (fZ) goto L_0084124b;
L_00841277:; BB(0x00841277);
    /* 00841277: push dword ptr [0xadc8fc] */ { u32 v = R32((u32)(0xadc8fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084127d: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841283: call 0x8c0b54 */ r_esp -= 4; W32(r_esp, 0x841288u); f_008c0b54();
    /* 00841288: jmp 0x84124b */ goto L_0084124b;
}

void f_0084128c(void) /* sub_84128C */
{
    FN_ENTER(0x0084128c);
    /* 0084128c: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 00841291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841293: je 0x8412aa */ if (fZ) goto L_008412aa;
L_00841295:; BB(0x00841295);
    /* 00841295: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 0084129a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084129c: je 0x8412b0 */ if (fZ) goto L_008412b0;
L_0084129e:; BB(0x0084129e);
    /* 0084129e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008412a0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008412a2: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 008412a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008412a5: call 0x8c0b5a */ r_esp -= 4; W32(r_esp, 0x8412aau); f_008c0b5a();
L_008412aa:; BB(0x008412aa);
    /* 008412aa: mov eax, 1 */ r_eax = 0x1u;
    /* 008412af: ret  */ FN_RET(0x0084128c); r_esp += 4; return;
L_008412b0:; BB(0x008412b0);
    /* 008412b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008412b2: ret  */ FN_RET(0x0084128c); r_esp += 4; return;
}

void f_008412b4(void) /* sub_8412B4 */
{
    FN_ENTER(0x008412b4);
    /* 008412b4: mov dword ptr [0xadc950], 0 */ W32((u32)(0xadc950u), 0x0u);
    /* 008412be: mov eax, 1 */ r_eax = 0x1u;
    /* 008412c3: mov dword ptr [0xadc94c], eax */ W32((u32)(0xadc94cu), r_eax);
    /* 008412c8: mov dword ptr [0xadc954], eax */ W32((u32)(0xadc954u), r_eax);
    /* 008412cd: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x8412d2u); f_0082d2a4();
    /* 008412d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008412d4: jne 0x8412db */ if (!fZ) goto L_008412db;
L_008412d6:; BB(0x008412d6);
    /* 008412d6: call 0x841218 */ r_esp -= 4; W32(r_esp, 0x8412dbu); f_00841218();
L_008412db:; BB(0x008412db);
    /* 008412db: ret  */ FN_RET(0x008412b4); r_esp += 4; return;
}

void f_008412dc(void) /* sub_8412DC */
{
    FN_ENTER(0x008412dc);
    /* 008412dc: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x8412e1u); f_0082d2a4();
    /* 008412e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008412e3: jne 0x8412e6 */ if (!fZ) goto L_008412e6;
L_008412e5:; BB(0x008412e5);
    /* 008412e5: ret  */ FN_RET(0x008412dc); r_esp += 4; return;
L_008412e6:; BB(0x008412e6);
    /* 008412e6: call 0x841300 */ r_esp -= 4; W32(r_esp, 0x8412ebu); f_00841300();
    /* 008412eb: call 0x841318 */ r_esp -= 4; W32(r_esp, 0x8412f0u); f_00841318();
    /* 008412f0: call 0x841218 */ r_esp -= 4; W32(r_esp, 0x8412f5u); f_00841218();
    /* 008412f5: call 0x841090 */ r_esp -= 4; W32(r_esp, 0x8412fau); f_00841090();
    /* 008412fa: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x8412ffu); f_00841720();
    /* 008412ff: ret  */ FN_RET(0x008412dc); r_esp += 4; return;
}

void f_00841300(void) /* sub_841300 */
{
    FN_ENTER(0x00841300);
    /* 00841300: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x841305u); f_0082d2a4();
    /* 00841305: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841307: jne 0x84130a */ if (!fZ) goto L_0084130a;
L_00841309:; BB(0x00841309);
    /* 00841309: ret  */ FN_RET(0x00841300); r_esp += 4; return;
L_0084130a:; BB(0x0084130a);
    /* 0084130a: push 0xadc8e0 */ { u32 v = 0xadc8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084130f: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x841315u); call_ind(t); }
    /* 00841315: ret  */ FN_RET(0x00841300); r_esp += 4; return;
}

void f_00841318(void) /* sub_841318 */
{
    FN_ENTER(0x00841318);
    /* 00841318: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 0084131d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084131f: jne 0x841327 */ if (!fZ) goto L_00841327;
L_00841321:; BB(0x00841321);
    /* 00841321: call 0x8414e4 */ r_esp -= 4; W32(r_esp, 0x841326u); f_008414e4();
    /* 00841326: ret  */ FN_RET(0x00841318); r_esp += 4; return;
L_00841327:; BB(0x00841327);
    /* 00841327: call 0x841330 */ r_esp -= 4; W32(r_esp, 0x84132cu); f_00841330();
    /* 0084132c: ret  */ FN_RET(0x00841318); r_esp += 4; return;
}

void f_00841330(void) /* sub_841330 */
{
    FN_ENTER(0x00841330);
    /* 00841330: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00841331: mov ebp, esp */ r_ebp = r_esp;
    /* 00841333: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00841335: push 0x98b0e8 */ { u32 v = 0x98b0e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0084133a: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0084133f: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00841345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841346: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0084134d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00841350: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00841353: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00841356: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00841359: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0084135c: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 00841361: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00841368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084136a: je 0x841412 */ if (fZ) goto L_00841412;
L_00841370:; BB(0x00841370);
    /* 00841370: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00841377: jmp 0x841382 */ goto L_00841382;
L_00841382:; BB(0x00841382);
    /* 00841382: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00841384: call dword ptr [0x8ec39c] */ { u32 t = R32((u32)(0x8ec39cu)); r_esp -= 4; W32(r_esp, 0x84138au); call_ind(t); }
    /* 0084138a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084138b: call 0x841440 */ r_esp -= 4; W32(r_esp, 0x841390u); f_00841440();
    /* 00841390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841393: je 0x841409 */ if (fZ) goto L_00841409;
L_00841395:; BB(0x00841395);
    /* 00841395: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0084139c:; BB(0x0084139c);
    /* 0084139c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0084139f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008413a1: jne 0x8413e3 */ if (!fZ) goto L_008413e3;
L_008413a3:; BB(0x008413a3);
    /* 008413a3: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 008413a8: mov ecx, dword ptr [0xadc958] */ r_ecx = R32((u32)(0xadc958u));
    /* 008413ae: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008413b1: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 008413b6: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x8413bbu); f_00841448();
    /* 008413bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008413be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008413c0: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 008413c5: mov dword ptr [0xadc8f8], eax */ W32((u32)(0xadc8f8u), r_eax);
    /* 008413ca: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 008413cf: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 008413d4: mov dword ptr [0xadc91c], eax */ W32((u32)(0xadc91cu), r_eax);
    /* 008413d9: mov dword ptr [0xadc920], eax */ W32((u32)(0xadc920u), r_eax);
    /* 008413de: call 0x841454 */ r_esp -= 4; W32(r_esp, 0x8413e3u); f_00841454();
L_008413e3:; BB(0x008413e3);
    /* 008413e3: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008413e6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008413e9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008413ec: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008413ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008413f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008413f9: mov esp, ebp */ r_esp = r_ebp;
    /* 008413fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008413fc: ret  */ FN_RET(0x00841330); r_esp += 4; return;
L_00841409:; BB(0x00841409);
    /* 00841409: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00841410: jmp 0x84139c */ goto L_0084139c;
L_00841412:; BB(0x00841412);
    /* 00841412: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841417: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00841418: call 0x841438 */ r_esp -= 4; W32(r_esp, 0x84141du); f_00841438();
    /* 0084141d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084141e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841420: jne 0x841370 */ if (!fZ) goto L_00841370;
L_00841426:; BB(0x00841426);
    /* 00841426: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0084142d: jmp 0x84139c */ goto L_0084139c;
}

void f_00841345(void)
{
    FN_ENTER(0x00841345);
    /* 00841345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841346: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0084134d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00841350: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00841353: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00841356: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00841359: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0084135c: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 00841361: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00841368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084136a: je 0x841412 */ if (fZ) goto L_00841412;
L_00841370:; BB(0x00841370);
    /* 00841370: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00841377: jmp 0x841382 */ goto L_00841382;
L_00841382:; BB(0x00841382);
    /* 00841382: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00841384: call dword ptr [0x8ec39c] */ { u32 t = R32((u32)(0x8ec39cu)); r_esp -= 4; W32(r_esp, 0x84138au); call_ind(t); }
    /* 0084138a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0084138b: call 0x841440 */ r_esp -= 4; W32(r_esp, 0x841390u); f_00841440();
    /* 00841390: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841391: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841393: je 0x841409 */ if (fZ) goto L_00841409;
L_00841395:; BB(0x00841395);
    /* 00841395: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0084139c:; BB(0x0084139c);
    /* 0084139c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0084139f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008413a1: jne 0x8413e3 */ if (!fZ) goto L_008413e3;
L_008413a3:; BB(0x008413a3);
    /* 008413a3: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 008413a8: mov ecx, dword ptr [0xadc958] */ r_ecx = R32((u32)(0xadc958u));
    /* 008413ae: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008413b1: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 008413b6: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x8413bbu); f_00841448();
    /* 008413bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008413be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008413c0: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 008413c5: mov dword ptr [0xadc8f8], eax */ W32((u32)(0xadc8f8u), r_eax);
    /* 008413ca: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 008413cf: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 008413d4: mov dword ptr [0xadc91c], eax */ W32((u32)(0xadc91cu), r_eax);
    /* 008413d9: mov dword ptr [0xadc920], eax */ W32((u32)(0xadc920u), r_eax);
    /* 008413de: call 0x841454 */ r_esp -= 4; W32(r_esp, 0x8413e3u); f_00841454();
L_008413e3:; BB(0x008413e3);
    /* 008413e3: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008413e6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008413e9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008413ec: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008413ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008413f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008413f9: mov esp, ebp */ r_esp = r_ebp;
    /* 008413fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008413fc: ret  */ FN_RET(0x00841345); r_esp += 4; return;
L_00841409:; BB(0x00841409);
    /* 00841409: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00841410: jmp 0x84139c */ goto L_0084139c;
L_00841412:; BB(0x00841412);
    /* 00841412: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841417: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00841418: call 0x841438 */ r_esp -= 4; W32(r_esp, 0x84141du); f_00841438();
    /* 0084141d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084141e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841420: jne 0x841370 */ if (!fZ) goto L_00841370;
L_00841426:; BB(0x00841426);
    /* 00841426: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0084142d: jmp 0x84139c */ goto L_0084139c;
}

void f_008413fd(void)
{
    FN_ENTER(0x008413fd);
    goto L_008413fd;
L_0084139c:; BB(0x0084139c);
    /* 0084139c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0084139f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008413a1: jne 0x8413e3 */ if (!fZ) goto L_008413e3;
L_008413a3:; BB(0x008413a3);
    /* 008413a3: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 008413a8: mov ecx, dword ptr [0xadc958] */ r_ecx = R32((u32)(0xadc958u));
    /* 008413ae: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008413b1: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 008413b6: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x8413bbu); f_00841448();
    /* 008413bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008413be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008413c0: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 008413c5: mov dword ptr [0xadc8f8], eax */ W32((u32)(0xadc8f8u), r_eax);
    /* 008413ca: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 008413cf: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 008413d4: mov dword ptr [0xadc91c], eax */ W32((u32)(0xadc91cu), r_eax);
    /* 008413d9: mov dword ptr [0xadc920], eax */ W32((u32)(0xadc920u), r_eax);
    /* 008413de: call 0x841454 */ r_esp -= 4; W32(r_esp, 0x8413e3u); f_00841454();
L_008413e3:; BB(0x008413e3);
    /* 008413e3: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008413e6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008413e9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008413ec: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008413ef: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008413f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008413f9: mov esp, ebp */ r_esp = r_ebp;
    /* 008413fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008413fc: ret  */ FN_RET(0x008413fd); r_esp += 4; return;
L_008413fd:; BB(0x008413fd);
    /* 008413fd: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00841400: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00841407: jmp 0x84139c */ goto L_0084139c;
}

void f_00841432(void)
{
    FN_ENTER(0x00841432);
    /* 00841432: mov eax, 1 */ r_eax = 0x1u;
    /* 00841437: ret  */ FN_RET(0x00841432); r_esp += 4; return;
}

void f_00841438(void) /* sub_841438 */
{
    FN_ENTER(0x00841438);
    /* 00841438: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841439: call 0x8c0b4e */ r_esp -= 4; W32(r_esp, 0x84143eu); f_008c0b4e();
    /* 0084143e: ret  */ FN_RET(0x00841438); r_esp += 4; return;
}

void f_00841440(void) /* sub_841440 */
{
    FN_ENTER(0x00841440);
    /* 00841440: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841441: call 0x8c0b60 */ r_esp -= 4; W32(r_esp, 0x841446u); f_008c0b60();
    /* 00841446: ret  */ FN_RET(0x00841440); r_esp += 4; return;
}

void f_00841448(void) /* sub_841448 */
{
    FN_ENTER(0x00841448);
    /* 00841448: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841449: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0084144b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084144c: call dword ptr [0x8f83a0] */ { u32 t = R32((u32)(0x8f83a0u)); r_esp -= 4; W32(r_esp, 0x841452u); call_ind(t); }
    /* 00841452: ret  */ FN_RET(0x00841448); r_esp += 4; return;
}

void f_00841454(void) /* sub_841454 */
{
    FN_ENTER(0x00841454);
    /* 00841454: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00841456: mov word ptr [0xadb7e0], ax */ W16((u32)(0xadb7e0u), (u16)r_eax);
    /* 0084145c: mov word ptr [0xadb5e0], ax */ W16((u32)(0xadb5e0u), (u16)r_eax);
    /* 00841462: mov word ptr [0xadc6e0], ax */ W16((u32)(0xadc6e0u), (u16)r_eax);
    /* 00841468: mov dword ptr [0xadc910], eax */ W32((u32)(0xadc910u), r_eax);
    /* 0084146d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084146f:; BB(0x0084146f);
    /* 0084146f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00841471: mov byte ptr [eax + 0xadc5e0], dl */ W8((u32)(r_eax+0xadc5e0u), (u8)r_edx);
    /* 00841477: mov byte ptr [eax + 0xadc5e1], dl */ W8((u32)(r_eax+0xadc5e1u), (u8)r_edx);
    /* 0084147d: mov byte ptr [eax + 0xadc5e2], dl */ W8((u32)(r_eax+0xadc5e2u), (u8)r_edx);
    /* 00841483: mov byte ptr [eax + 0xadc5e3], dl */ W8((u32)(r_eax+0xadc5e3u), (u8)r_edx);
    /* 00841489: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084148c: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841491: jl 0x84146f */ if ((fS!=fO)) goto L_0084146f;
L_00841493:; BB(0x00841493);
    /* 00841493: mov dword ptr [0xadc914], 2 */ W32((u32)(0xadc914u), 0x2u);
    /* 0084149d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084149f:; BB(0x0084149f);
    /* 0084149f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008414a1: mov word ptr [eax + 0xadb9e0], dx */ W16((u32)(r_eax+0xadb9e0u), (u16)r_edx);
    /* 008414a8: mov word ptr [eax + 0xadb9f0], dx */ W16((u32)(r_eax+0xadb9f0u), (u16)r_edx);
    /* 008414af: mov word ptr [eax + 0xadba00], dx */ W16((u32)(r_eax+0xadba00u), (u16)r_edx);
    /* 008414b6: mov word ptr [eax + 0xadba10], dx */ W16((u32)(r_eax+0xadba10u), (u16)r_edx);
    /* 008414bd: mov word ptr [eax + 0xadba20], dx */ W16((u32)(r_eax+0xadba20u), (u16)r_edx);
    /* 008414c4: mov word ptr [eax + 0xadba30], dx */ W16((u32)(r_eax+0xadba30u), (u16)r_edx);
    /* 008414cb: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008414ce: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008414d3: jl 0x84149f */ if ((fS!=fO)) goto L_0084149f;
L_008414d5:; BB(0x008414d5);
    /* 008414d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008414d7: mov word ptr [0xadb3e0], ax */ W16((u32)(0xadb3e0u), (u16)r_eax);
    /* 008414dd: mov dword ptr [0xadc940], eax */ W32((u32)(0xadc940u), r_eax);
    /* 008414e2: ret  */ FN_RET(0x00841454); r_esp += 4; return;
}

void f_008414e4(void) /* sub_8414E4 */
{
    FN_ENTER(0x008414e4);
    /* 008414e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008414e5: mov ebp, esp */ r_ebp = r_esp;
    /* 008414e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008414e9: push 0x98b0dc */ { u32 v = 0x98b0dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008414ee: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008414f3: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008414f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008414fa: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00841501: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00841504: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00841507: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0084150a: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0084150d: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00841510: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00841512: mov dword ptr [0xadc8f8], eax */ W32((u32)(0xadc8f8u), r_eax);
    /* 00841517: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 0084151c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00841523: jmp 0x84152e */ goto L_0084152e;
L_0084152e:; BB(0x0084152e);
    /* 0084152e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00841530: call dword ptr [0x8f83a8] */ { u32 t = R32((u32)(0x8f83a8u)); r_esp -= 4; W32(r_esp, 0x841536u); call_ind(t); }
    /* 00841536: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00841539: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00841540: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841543: call 0x841994 */ r_esp -= 4; W32(r_esp, 0x841548u); f_00841994();
    /* 00841548: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841549: mov dword ptr [0xadc90c], eax */ W32((u32)(0xadc90cu), r_eax);
    /* 0084154e: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841553: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00841554: call 0x841438 */ r_esp -= 4; W32(r_esp, 0x841559u); f_00841438();
    /* 00841559: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084155a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0084155d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084155f: je 0x84159e */ if (fZ) goto L_0084159e;
L_00841561:; BB(0x00841561);
    /* 00841561: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00841564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00841565: call 0x841440 */ r_esp -= 4; W32(r_esp, 0x84156au); f_00841440();
    /* 0084156a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0084156b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084156d: je 0x84159e */ if (fZ) goto L_0084159e;
L_0084156f:; BB(0x0084156f);
    /* 0084156f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00841572: mov dword ptr [0xadc8f8], 1 */ W32((u32)(0xadc8f8u), 0x1u);
    /* 0084157c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084157f: mov edx, 1 */ r_edx = 0x1u;
    /* 00841584: call 0x84169c */ r_esp -= 4; W32(r_esp, 0x841589u); f_0084169c();
    /* 00841589: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084158c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084158e: je 0x841684 */ if (fZ) goto L_00841684;
L_00841594:; BB(0x00841594);
    /* 00841594: mov dword ptr [0xadc900], 1 */ W32((u32)(0xadc900u), 0x1u);
L_0084159e:; BB(0x0084159e);
    /* 0084159e: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 008415a3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008415a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008415a8: mov word ptr [0xadb5e0], dx */ W16((u32)(0xadb5e0u), (u16)r_edx);
    /* 008415af: mov word ptr [0xadc6e0], dx */ W16((u32)(0xadc6e0u), (u16)r_edx);
    /* 008415b6: mov dword ptr [0xadc910], edx */ W32((u32)(0xadc910u), r_edx);
    /* 008415bc: call 0x8416a4 */ r_esp -= 4; W32(r_esp, 0x8415c1u); f_008416a4();
    /* 008415c1: mov dword ptr [0xadc914], 2 */ W32((u32)(0xadc914u), 0x2u);
    /* 008415cb: call 0x8416cc */ r_esp -= 4; W32(r_esp, 0x8415d0u); f_008416cc();
    /* 008415d0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008415d3: mov ecx, dword ptr [0xadc8f8] */ r_ecx = R32((u32)(0xadc8f8u));
    /* 008415d9: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 008415df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008415e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008415e3: mov word ptr [0xadb3e0], ax */ W16((u32)(0xadb3e0u), (u16)r_eax);
    /* 008415e9: mov dword ptr [0xadc940], eax */ W32((u32)(0xadc940u), r_eax);
    /* 008415ee: je 0x841662 */ if (fZ) goto L_00841662;
L_008415f0:; BB(0x008415f0);
    /* 008415f0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008415f3: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 008415f8: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x8415fdu); f_008408a8();
    /* 008415fd: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 00841602: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841605: mov edx, 0xadc91c */ r_edx = 0xadc91cu;
    /* 0084160a: mov ecx, 0xadc920 */ r_ecx = 0xadc920u;
    /* 0084160f: call 0x841708 */ r_esp -= 4; W32(r_esp, 0x841614u); f_00841708();
    /* 00841614: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841617: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 0084161c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084161f: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 00841624: call 0x841714 */ r_esp -= 4; W32(r_esp, 0x841629u); f_00841714();
    /* 00841629: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084162c: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 00841631: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841636: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841639: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 0084163e: mov ecx, 0x83ff58 */ r_ecx = 0x83ff58u;
    /* 00841643: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x841648u); f_00841448();
    /* 00841648: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084164b: mov eax, dword ptr [0xa21ccc] */ r_eax = R32((u32)(0xa21cccu));
    /* 00841650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841652: jne 0x841662 */ if (!fZ) goto L_00841662;
L_00841654:; BB(0x00841654);
    /* 00841654: mov eax, dword ptr [0xadc924] */ r_eax = R32((u32)(0xadc924u));
    /* 00841659: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084165b: je 0x841662 */ if (fZ) goto L_00841662;
L_0084165d:; BB(0x0084165d);
    /* 0084165d: call 0x84083c */ r_esp -= 4; W32(r_esp, 0x841662u); f_0084083c();
L_00841662:; BB(0x00841662);
    /* 00841662: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00841665: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00841668: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0084166b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0084166e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00841671: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00841678: mov esp, ebp */ r_esp = r_ebp;
    /* 0084167a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084167b: ret  */ FN_RET(0x008414e4); r_esp += 4; return;
L_00841684:; BB(0x00841684);
    /* 00841684: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00841687: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0084168a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00841691: mov esp, ebp */ r_esp = r_ebp;
    /* 00841693: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00841694: ret  */ FN_RET(0x008414e4); r_esp += 4; return;
}

void f_0084167c(void)
{
    FN_ENTER(0x0084167c);
    goto L_0084167c;
L_0084159e:; BB(0x0084159e);
    /* 0084159e: mov eax, dword ptr [0xadc914] */ r_eax = R32((u32)(0xadc914u));
    /* 008415a3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008415a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008415a8: mov word ptr [0xadb5e0], dx */ W16((u32)(0xadb5e0u), (u16)r_edx);
    /* 008415af: mov word ptr [0xadc6e0], dx */ W16((u32)(0xadc6e0u), (u16)r_edx);
    /* 008415b6: mov dword ptr [0xadc910], edx */ W32((u32)(0xadc910u), r_edx);
    /* 008415bc: call 0x8416a4 */ r_esp -= 4; W32(r_esp, 0x8415c1u); f_008416a4();
    /* 008415c1: mov dword ptr [0xadc914], 2 */ W32((u32)(0xadc914u), 0x2u);
    /* 008415cb: call 0x8416cc */ r_esp -= 4; W32(r_esp, 0x8415d0u); f_008416cc();
    /* 008415d0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008415d3: mov ecx, dword ptr [0xadc8f8] */ r_ecx = R32((u32)(0xadc8f8u));
    /* 008415d9: mov dword ptr [0xadc914], edx */ W32((u32)(0xadc914u), r_edx);
    /* 008415df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008415e1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008415e3: mov word ptr [0xadb3e0], ax */ W16((u32)(0xadb3e0u), (u16)r_eax);
    /* 008415e9: mov dword ptr [0xadc940], eax */ W32((u32)(0xadc940u), r_eax);
    /* 008415ee: je 0x841662 */ if (fZ) goto L_00841662;
L_008415f0:; BB(0x008415f0);
    /* 008415f0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008415f3: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 008415f8: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x8415fdu); f_008408a8();
    /* 008415fd: mov eax, dword ptr [0xadc8fc] */ r_eax = R32((u32)(0xadc8fcu));
    /* 00841602: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841605: mov edx, 0xadc91c */ r_edx = 0xadc91cu;
    /* 0084160a: mov ecx, 0xadc920 */ r_ecx = 0xadc920u;
    /* 0084160f: call 0x841708 */ r_esp -= 4; W32(r_esp, 0x841614u); f_00841708();
    /* 00841614: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841617: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 0084161c: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084161f: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 00841624: call 0x841714 */ r_esp -= 4; W32(r_esp, 0x841629u); f_00841714();
    /* 00841629: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084162c: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 00841631: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841636: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841639: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 0084163e: mov ecx, 0x83ff58 */ r_ecx = 0x83ff58u;
    /* 00841643: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x841648u); f_00841448();
    /* 00841648: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084164b: mov eax, dword ptr [0xa21ccc] */ r_eax = R32((u32)(0xa21cccu));
    /* 00841650: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841652: jne 0x841662 */ if (!fZ) goto L_00841662;
L_00841654:; BB(0x00841654);
    /* 00841654: mov eax, dword ptr [0xadc924] */ r_eax = R32((u32)(0xadc924u));
    /* 00841659: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084165b: je 0x841662 */ if (fZ) goto L_00841662;
L_0084165d:; BB(0x0084165d);
    /* 0084165d: call 0x84083c */ r_esp -= 4; W32(r_esp, 0x841662u); f_0084083c();
L_00841662:; BB(0x00841662);
    /* 00841662: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00841665: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00841668: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0084166b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0084166e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00841671: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00841678: mov esp, ebp */ r_esp = r_ebp;
    /* 0084167a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084167b: ret  */ FN_RET(0x0084167c); r_esp += 4; return;
L_0084167c:; BB(0x0084167c);
    /* 0084167c: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084167f: jmp 0x84159e */ goto L_0084159e;
}

void f_00841695(void)
{
    FN_ENTER(0x00841695);
    /* 00841695: mov eax, 1 */ r_eax = 0x1u;
    /* 0084169a: ret  */ FN_RET(0x00841695); r_esp += 4; return;
}

void f_0084169c(void) /* sub_84169C */
{
    FN_ENTER(0x0084169c);
    /* 0084169c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084169d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084169e: call 0x8c0b12 */ r_esp -= 4; W32(r_esp, 0x8416a3u); f_008c0b12();
    /* 008416a3: ret  */ FN_RET(0x0084169c); r_esp += 4; return;
}

void f_008416a4(void) /* sub_8416A4 */
{
    FN_ENTER(0x008416a4);
    /* 008416a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008416a6:; BB(0x008416a6);
    /* 008416a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008416a8: mov byte ptr [eax + 0xadc5e0], dl */ W8((u32)(r_eax+0xadc5e0u), (u8)r_edx);
    /* 008416ae: mov byte ptr [eax + 0xadc5e1], dl */ W8((u32)(r_eax+0xadc5e1u), (u8)r_edx);
    /* 008416b4: mov byte ptr [eax + 0xadc5e2], dl */ W8((u32)(r_eax+0xadc5e2u), (u8)r_edx);
    /* 008416ba: mov byte ptr [eax + 0xadc5e3], dl */ W8((u32)(r_eax+0xadc5e3u), (u8)r_edx);
    /* 008416c0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008416c3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008416c8: jl 0x8416a6 */ if ((fS!=fO)) goto L_008416a6;
L_008416ca:; BB(0x008416ca);
    /* 008416ca: ret  */ FN_RET(0x008416a4); r_esp += 4; return;
}

void f_008416cc(void) /* sub_8416CC */
{
    FN_ENTER(0x008416cc);
    /* 008416cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008416ce:; BB(0x008416ce);
    /* 008416ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008416d0: mov word ptr [eax + 0xadb9e0], dx */ W16((u32)(r_eax+0xadb9e0u), (u16)r_edx);
    /* 008416d7: mov word ptr [eax + 0xadb9f0], dx */ W16((u32)(r_eax+0xadb9f0u), (u16)r_edx);
    /* 008416de: mov word ptr [eax + 0xadba00], dx */ W16((u32)(r_eax+0xadba00u), (u16)r_edx);
    /* 008416e5: mov word ptr [eax + 0xadba10], dx */ W16((u32)(r_eax+0xadba10u), (u16)r_edx);
    /* 008416ec: mov word ptr [eax + 0xadba20], dx */ W16((u32)(r_eax+0xadba20u), (u16)r_edx);
    /* 008416f3: mov word ptr [eax + 0xadba30], dx */ W16((u32)(r_eax+0xadba30u), (u16)r_edx);
    /* 008416fa: add eax, 0x60 */ {  u32 a = r_eax; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008416fd: cmp eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841702: jl 0x8416ce */ if ((fS!=fO)) goto L_008416ce;
L_00841704:; BB(0x00841704);
    /* 00841704: ret  */ FN_RET(0x008416cc); r_esp += 4; return;
}

void f_00841708(void) /* sub_841708 */
{
    FN_ENTER(0x00841708);
    /* 00841708: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841709: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084170a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084170b: call 0x8c0b30 */ r_esp -= 4; W32(r_esp, 0x841710u); f_008c0b30();
    /* 00841710: ret  */ FN_RET(0x00841708); r_esp += 4; return;
}

void f_00841714(void) /* sub_841714 */
{
    FN_ENTER(0x00841714);
    /* 00841714: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 00841716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841717: call dword ptr [0x8f83ac] */ { u32 t = R32((u32)(0x8f83acu)); r_esp -= 4; W32(r_esp, 0x84171du); call_ind(t); }
    /* 0084171d: ret  */ FN_RET(0x00841714); r_esp += 4; return;
}

void f_00841720(void) /* sub_841720 */
{
    FN_ENTER(0x00841720);
    /* 00841720: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x841725u); f_0082d2a4();
    /* 00841725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841727: jne 0x84172a */ if (!fZ) goto L_0084172a;
L_00841729:; BB(0x00841729);
    /* 00841729: ret  */ FN_RET(0x00841720); r_esp += 4; return;
L_0084172a:; BB(0x0084172a);
    /* 0084172a: push 0xadc8e0 */ { u32 v = 0xadc8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084172f: call dword ptr [0x8f81b8] */ { u32 t = R32((u32)(0x8f81b8u)); r_esp -= 4; W32(r_esp, 0x841735u); call_ind(t); }
    /* 00841735: ret  */ FN_RET(0x00841720); r_esp += 4; return;
}

void f_00841738(void) /* sub_841738 */
{
    FN_ENTER(0x00841738);
    /* 00841738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00841739: mov ebp, esp */ r_ebp = r_esp;
    /* 0084173b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0084173d: push 0x98b0d0 */ { u32 v = 0x98b0d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00841742: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00841747: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0084174d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084174e: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00841755: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00841758: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0084175b: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0084175e: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00841761: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00841764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00841766: mov edx, dword ptr [0xadc8fc] */ r_edx = R32((u32)(0xadc8fcu));
    /* 0084176c: mov dword ptr [0xadc8f8], eax */ W32((u32)(0xadc8f8u), r_eax);
    /* 00841771: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841773: mov dword ptr [0xadc900], eax */ W32((u32)(0xadc900u), r_eax);
    /* 00841778: mov dword ptr [0xadc904], eax */ W32((u32)(0xadc904u), r_eax);
    /* 0084177d: mov dword ptr [0xadc908], eax */ W32((u32)(0xadc908u), r_eax);
    /* 00841782: jne 0x8418a4 */ if (!fZ) goto L_008418a4;
L_00841788:; BB(0x00841788);
    /* 00841788: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0084178f: jmp 0x84179a */ goto L_0084179a;
L_0084179a:; BB(0x0084179a);
    /* 0084179a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084179c: call dword ptr [0x8f83a8] */ { u32 t = R32((u32)(0x8f83a8u)); r_esp -= 4; W32(r_esp, 0x8417a2u); call_ind(t); }
    /* 008417a2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008417a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008417ac: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008417af: call 0x841994 */ r_esp -= 4; W32(r_esp, 0x8417b4u); f_00841994();
    /* 008417b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008417b5: mov dword ptr [0xadc90c], eax */ W32((u32)(0xadc90cu), r_eax);
    /* 008417ba: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 008417bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008417c0: call 0x841438 */ r_esp -= 4; W32(r_esp, 0x8417c5u); f_00841438();
    /* 008417c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008417c6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008417c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008417cb: je 0x84180a */ if (fZ) goto L_0084180a;
L_008417cd:; BB(0x008417cd);
    /* 008417cd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008417d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008417d1: call 0x841440 */ r_esp -= 4; W32(r_esp, 0x8417d6u); f_00841440();
    /* 008417d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008417d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008417d9: je 0x84180a */ if (fZ) goto L_0084180a;
L_008417db:; BB(0x008417db);
    /* 008417db: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008417de: mov dword ptr [0xadc8f8], 1 */ W32((u32)(0xadc8f8u), 0x1u);
    /* 008417e8: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008417eb: mov edx, 1 */ r_edx = 0x1u;
    /* 008417f0: call 0x84169c */ r_esp -= 4; W32(r_esp, 0x8417f5u); f_0084169c();
    /* 008417f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008417f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008417fa: je 0x841887 */ if (fZ) goto L_00841887;
L_00841800:; BB(0x00841800);
    /* 00841800: mov dword ptr [0xadc900], 1 */ W32((u32)(0xadc900u), 0x1u);
L_0084180a:; BB(0x0084180a);
    /* 0084180a: call 0x841454 */ r_esp -= 4; W32(r_esp, 0x84180fu); f_00841454();
    /* 0084180f: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 00841814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841816: je 0x841859 */ if (fZ) goto L_00841859;
L_00841818:; BB(0x00841818);
    /* 00841818: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0084181b: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 00841820: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x841825u); f_008408a8();
    /* 00841825: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 0084182a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084182d: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 00841832: call 0x841714 */ r_esp -= 4; W32(r_esp, 0x841837u); f_00841714();
    /* 00841837: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084183a: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 0084183f: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841844: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841847: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 0084184c: mov ecx, 0x83ff58 */ r_ecx = 0x83ff58u;
    /* 00841851: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x841856u); f_00841448();
    /* 00841856: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00841859:; BB(0x00841859);
    /* 00841859: mov dword ptr [0xa21ccc], 1 */ W32((u32)(0xa21cccu), 0x1u);
    /* 00841863: mov eax, 1 */ r_eax = 0x1u;
    /* 00841868: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084186b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0084186e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00841871: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00841874: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00841877: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084187e: mov esp, ebp */ r_esp = r_ebp;
    /* 00841880: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00841881: ret  */ FN_RET(0x00841738); r_esp += 4; return;
L_00841887:; BB(0x00841887);
    /* 00841887: mov ecx, 0x98b144 */ r_ecx = 0x98b144u;
    /* 0084188c: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x841891u); f_0083c070();
    /* 00841891: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841893: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00841896: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00841899: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008418a0: mov esp, ebp */ r_esp = r_ebp;
    /* 008418a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008418a3: ret  */ FN_RET(0x00841738); r_esp += 4; return;
L_008418a4:; BB(0x008418a4);
    /* 008418a4: mov ecx, 0x98b10c */ r_ecx = 0x98b10cu;
    /* 008418a9: call 0x83c070 */ r_esp -= 4; W32(r_esp, 0x8418aeu); f_0083c070();
    /* 008418ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008418b0: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008418b3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008418b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008418bd: mov esp, ebp */ r_esp = r_ebp;
    /* 008418bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008418c0: ret  */ FN_RET(0x00841738); r_esp += 4; return;
}

void f_00841882(void)
{
    FN_ENTER(0x00841882);
    goto L_00841882;
L_0084180a:; BB(0x0084180a);
    /* 0084180a: call 0x841454 */ r_esp -= 4; W32(r_esp, 0x84180fu); f_00841454();
    /* 0084180f: mov eax, dword ptr [0xadc8f8] */ r_eax = R32((u32)(0xadc8f8u));
    /* 00841814: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841816: je 0x841859 */ if (fZ) goto L_00841859;
L_00841818:; BB(0x00841818);
    /* 00841818: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0084181b: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
    /* 00841820: call 0x8408a8 */ r_esp -= 4; W32(r_esp, 0x841825u); f_008408a8();
    /* 00841825: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 0084182a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084182d: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 00841832: call 0x841714 */ r_esp -= 4; W32(r_esp, 0x841837u); f_00841714();
    /* 00841837: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0084183a: mov dword ptr [0xadc958], eax */ W32((u32)(0xadc958u), r_eax);
    /* 0084183f: mov eax, dword ptr [0xacbed8] */ r_eax = R32((u32)(0xacbed8u));
    /* 00841844: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841847: mov edx, 0xfffffffc */ r_edx = 0xfffffffcu;
    /* 0084184c: mov ecx, 0x83ff58 */ r_ecx = 0x83ff58u;
    /* 00841851: call 0x841448 */ r_esp -= 4; W32(r_esp, 0x841856u); f_00841448();
    /* 00841856: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00841859:; BB(0x00841859);
    /* 00841859: mov dword ptr [0xa21ccc], 1 */ W32((u32)(0xa21cccu), 0x1u);
    /* 00841863: mov eax, 1 */ r_eax = 0x1u;
    /* 00841868: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0084186b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0084186e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00841871: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00841874: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00841877: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0084187e: mov esp, ebp */ r_esp = r_ebp;
    /* 00841880: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00841881: ret  */ FN_RET(0x00841882); r_esp += 4; return;
L_00841882:; BB(0x00841882);
    /* 00841882: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00841885: jmp 0x84180a */ goto L_0084180a;
}

void f_008418c1(void)
{
    FN_ENTER(0x008418c1);
    /* 008418c1: mov eax, 1 */ r_eax = 0x1u;
    /* 008418c6: ret  */ FN_RET(0x008418c1); r_esp += 4; return;
}

void f_008418c8(void) /* sub_8418C8 */
{
    FN_ENTER(0x008418c8);
    /* 008418c8: mov eax, dword ptr [0xacbef0] */ r_eax = R32((u32)(0xacbef0u));
    /* 008418cd: mov dword ptr [0xadc918], 0 */ W32((u32)(0xadc918u), 0x0u);
    /* 008418d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008418d9: je 0x8418ef */ if (fZ) goto L_008418ef;
L_008418db:; BB(0x008418db);
    /* 008418db: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x8418e0u); f_006dc358();
    /* 008418e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008418e3: jne 0x8418ef */ if (!fZ) goto L_008418ef;
L_008418e5:; BB(0x008418e5);
    /* 008418e5: mov dword ptr [0xadc918], 1 */ W32((u32)(0xadc918u), 0x1u);
L_008418ef:; BB(0x008418ef);
    /* 008418ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008418f1: mov dword ptr [0xadc944], eax */ W32((u32)(0xadc944u), r_eax);
    /* 008418f6: mov dword ptr [0xadc948], eax */ W32((u32)(0xadc948u), r_eax);
    /* 008418fb: mov dword ptr [0xadc94c], eax */ W32((u32)(0xadc94cu), r_eax);
    /* 00841900: mov dword ptr [0xadc950], eax */ W32((u32)(0xadc950u), r_eax);
    /* 00841905: mov dword ptr [0xadc954], eax */ W32((u32)(0xadc954u), r_eax);
    /* 0084190a: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x84190fu); f_0082d2a4();
    /* 0084190f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841911: je 0x84191e */ if (fZ) goto L_0084191e;
L_00841913:; BB(0x00841913);
    /* 00841913: push 0xadc8e0 */ { u32 v = 0xadc8e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00841918: call dword ptr [0x8f81bc] */ { u32 t = R32((u32)(0x8f81bcu)); r_esp -= 4; W32(r_esp, 0x84191eu); call_ind(t); }
L_0084191e:; BB(0x0084191e);
    /* 0084191e: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841924: call 0x8c0b0c */ r_esp -= 4; W32(r_esp, 0x841929u); f_008c0b0c();
    /* 00841929: call 0x841738 */ r_esp -= 4; W32(r_esp, 0x84192eu); f_00841738();
    /* 0084192e: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841934: call 0x8c0b4e */ r_esp -= 4; W32(r_esp, 0x841939u); f_008c0b4e();
    /* 00841939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084193b: je 0x84194f */ if (fZ) goto L_0084194f;
L_0084193d:; BB(0x0084193d);
    /* 0084193d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084193f: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00841945: call 0x8c0b54 */ r_esp -= 4; W32(r_esp, 0x84194au); f_008c0b54();
    /* 0084194a: mov dword ptr [0xadc8fc], eax */ W32((u32)(0xadc8fcu), r_eax);
L_0084194f:; BB(0x0084194f);
    /* 0084194f: ret  */ FN_RET(0x008418c8); r_esp += 4; return;
}

void f_00841950(void) /* sub_841950 */
{
    FN_ENTER(0x00841950);
    /* 00841950: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841951: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00841955: call 0x841a7c */ r_esp -= 4; W32(r_esp, 0x84195au); f_00841a7c();
    /* 0084195a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0084195d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084195f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00841961: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841963: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841965: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841967: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841969: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0084196b: movzx eax, word ptr [edx*4 + 0xa22120] */ r_eax = (u32)R16((u32)(r_edx*4+0xa22120u));
    /* 00841973: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841974: ret  */ FN_RET(0x00841950); r_esp += 4; return;
}

void f_00841978(void) /* sub_841978 */
{
    FN_ENTER(0x00841978);
    /* 00841978: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841979: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0084197d: call 0x841a7c */ r_esp -= 4; W32(r_esp, 0x841982u); f_00841a7c();
    /* 00841982: mov dword ptr [0xadc960], eax */ W32((u32)(0xadc960u), r_eax);
    /* 00841987: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841988: ret  */ FN_RET(0x00841978); r_esp += 4; return;
}

void f_0084198c(void) /* sub_84198C */
{
    FN_ENTER(0x0084198c);
    /* 0084198c: mov eax, dword ptr [0xadc960] */ r_eax = R32((u32)(0xadc960u));
    /* 00841991: ret  */ FN_RET(0x0084198c); r_esp += 4; return;
}

void f_00841994(void) /* sub_841994 */
{
    FN_ENTER(0x00841994);
    /* 00841994: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00841999: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0084199e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008419a1: je 0x8419d3 */ if (fZ) goto L_008419d3;
L_008419a3:; BB(0x008419a3);
    /* 008419a3: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419a6: je 0x841a09 */ if (fZ) goto L_00841a09;
L_008419a8:; BB(0x008419a8);
    /* 008419a8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419ab: je 0x841a03 */ if (fZ) goto L_00841a03;
L_008419ad:; BB(0x008419ad);
    /* 008419ad: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008419b0: je 0x8419f4 */ if (fZ) goto L_008419f4;
L_008419b2:; BB(0x008419b2);
    /* 008419b2: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419b5: je 0x8419cd */ if (fZ) goto L_008419cd;
L_008419b7:; BB(0x008419b7);
    /* 008419b7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419ba: jne 0x8419c2 */ if (!fZ) goto L_008419c2;
L_008419bc:; BB(0x008419bc);
    /* 008419bc: mov eax, 4 */ r_eax = 0x4u;
    /* 008419c1: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_008419c2:; BB(0x008419c2);
    /* 008419c2: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419c5: jne 0x8419f4 */ if (!fZ) goto L_008419f4;
L_008419c7:; BB(0x008419c7);
    /* 008419c7: mov eax, 1 */ r_eax = 0x1u;
    /* 008419cc: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_008419cd:; BB(0x008419cd);
    /* 008419cd: mov eax, 7 */ r_eax = 0x7u;
    /* 008419d2: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_008419d3:; BB(0x008419d3);
    /* 008419d3: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 008419d8: sar eax, 0xa */ { u32 c = (10u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008419db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419de: je 0x8419fd */ if (fZ) goto L_008419fd;
L_008419e0:; BB(0x008419e0);
    /* 008419e0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419e3: je 0x8419fd */ if (fZ) goto L_008419fd;
L_008419e5:; BB(0x008419e5);
    /* 008419e5: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419e8: je 0x8419fd */ if (fZ) goto L_008419fd;
L_008419ea:; BB(0x008419ea);
    /* 008419ea: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419ed: je 0x8419f7 */ if (fZ) goto L_008419f7;
L_008419ef:; BB(0x008419ef);
    /* 008419ef: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008419f2: je 0x8419f7 */ if (fZ) goto L_008419f7;
L_008419f4:; BB(0x008419f4);
    /* 008419f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008419f6: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_008419f7:; BB(0x008419f7);
    /* 008419f7: mov eax, 5 */ r_eax = 0x5u;
    /* 008419fc: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_008419fd:; BB(0x008419fd);
    /* 008419fd: mov eax, 6 */ r_eax = 0x6u;
    /* 00841a02: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_00841a03:; BB(0x00841a03);
    /* 00841a03: mov eax, 3 */ r_eax = 0x3u;
    /* 00841a08: ret  */ FN_RET(0x00841994); r_esp += 4; return;
L_00841a09:; BB(0x00841a09);
    /* 00841a09: mov eax, 2 */ r_eax = 0x2u;
    /* 00841a0e: ret  */ FN_RET(0x00841994); r_esp += 4; return;
}

void f_00841a10(void) /* sub_841A10 */
{
    FN_ENTER(0x00841a10);
    /* 00841a10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841a11: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00841a15: call 0x841a34 */ r_esp -= 4; W32(r_esp, 0x841a1au); f_00841a34();
    /* 00841a1a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00841a1d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841a1f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00841a21: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 00841a24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00841a26: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00841a28: lea eax, [ecx + ecx + 0xa21ce0] */ r_eax = (u32)(r_ecx+r_ecx+0xa21ce0u);
    /* 00841a2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841a30: ret  */ FN_RET(0x00841a10); r_esp += 4; return;
}

void f_00841a34(void) /* sub_841A34 */
{
    FN_ENTER(0x00841a34);
    /* 00841a34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841a36: jl 0x841a3d */ if ((fS!=fO)) goto L_00841a3d;
L_00841a38:; BB(0x00841a38);
    /* 00841a38: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841a3b: jl 0x841a43 */ if ((fS!=fO)) goto L_00841a43;
L_00841a3d:; BB(0x00841a3d);
    /* 00841a3d: mov eax, 1 */ r_eax = 0x1u;
    /* 00841a42: ret  */ FN_RET(0x00841a34); r_esp += 4; return;
L_00841a43:; BB(0x00841a43);
    /* 00841a43: ret  */ FN_RET(0x00841a34); r_esp += 4; return;
}

void f_00841a44(void) /* sub_841A44 */
{
    FN_ENTER(0x00841a44);
    /* 00841a44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841a45: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00841a4a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841a4f: jg 0x841a55 */ if ((!fZ&&fS==fO)) goto L_00841a55;
L_00841a51:; BB(0x00841a51);
    /* 00841a51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841a53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841a54: ret  */ FN_RET(0x00841a44); r_esp += 4; return;
L_00841a55:; BB(0x00841a55);
    /* 00841a55: mov eax, dword ptr [0xadc960] */ r_eax = R32((u32)(0xadc960u));
    /* 00841a5a: call 0x841a7c */ r_esp -= 4; W32(r_esp, 0x841a5fu); f_00841a7c();
    /* 00841a5f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00841a62: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841a64: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00841a66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841a68: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841a6a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841a6c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841a6e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841a70: mov eax, dword ptr [edx*4 + 0xa221d8] */ r_eax = R32((u32)(r_edx*4+0xa221d8u));
    /* 00841a77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841a78: ret  */ FN_RET(0x00841a44); r_esp += 4; return;
}

void f_00841a7c(void) /* sub_841A7C */
{
    FN_ENTER(0x00841a7c);
    /* 00841a7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841a7e: jl 0x841a85 */ if ((fS!=fO)) goto L_00841a85;
L_00841a80:; BB(0x00841a80);
    /* 00841a80: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841a83: jl 0x841a88 */ if ((fS!=fO)) goto L_00841a88;
L_00841a85:; BB(0x00841a85);
    /* 00841a85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841a87: ret  */ FN_RET(0x00841a7c); r_esp += 4; return;
L_00841a88:; BB(0x00841a88);
    /* 00841a88: ret  */ FN_RET(0x00841a7c); r_esp += 4; return;
}

void f_00841a8c(void) /* sub_841A8C */
{
    FN_ENTER(0x00841a8c);
    /* 00841a8c: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 00841a91: movzx ecx, word ptr [0xa22120] */ r_ecx = (u32)R16((u32)(0xa22120u));
    /* 00841a98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00841a9a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841a9c: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841a9e:; BB(0x00841a9e);
    /* 00841a9e: movzx ecx, word ptr [0xa221dc] */ r_ecx = (u32)R16((u32)(0xa221dcu));
    /* 00841aa5: mov eax, 1 */ r_eax = 0x1u;
    /* 00841aaa: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841aac: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841aae:; BB(0x00841aae);
    /* 00841aae: movzx ecx, word ptr [0xa22298] */ r_ecx = (u32)R16((u32)(0xa22298u));
    /* 00841ab5: mov eax, 2 */ r_eax = 0x2u;
    /* 00841aba: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841abc: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841abe:; BB(0x00841abe);
    /* 00841abe: movzx ecx, word ptr [0xa22354] */ r_ecx = (u32)R16((u32)(0xa22354u));
    /* 00841ac5: mov eax, 3 */ r_eax = 0x3u;
    /* 00841aca: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841acc: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841ace:; BB(0x00841ace);
    /* 00841ace: movzx ecx, word ptr [0xa22410] */ r_ecx = (u32)R16((u32)(0xa22410u));
    /* 00841ad5: mov eax, 4 */ r_eax = 0x4u;
    /* 00841ada: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841adc: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841ade:; BB(0x00841ade);
    /* 00841ade: movzx ecx, word ptr [0xa224cc] */ r_ecx = (u32)R16((u32)(0xa224ccu));
    /* 00841ae5: mov eax, 5 */ r_eax = 0x5u;
    /* 00841aea: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841aec: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841aee:; BB(0x00841aee);
    /* 00841aee: movzx ecx, word ptr [0xa22588] */ r_ecx = (u32)R16((u32)(0xa22588u));
    /* 00841af5: mov eax, 6 */ r_eax = 0x6u;
    /* 00841afa: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841afc: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841afe:; BB(0x00841afe);
    /* 00841afe: movzx ecx, word ptr [0xa22644] */ r_ecx = (u32)R16((u32)(0xa22644u));
    /* 00841b05: mov eax, 7 */ r_eax = 0x7u;
    /* 00841b0a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841b0c: je 0x841b14 */ if (fZ) goto L_00841b14;
L_00841b0e:; BB(0x00841b0e);
    /* 00841b0e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00841b13: ret  */ FN_RET(0x00841a8c); r_esp += 4; return;
L_00841b14:; BB(0x00841b14);
    /* 00841b14: ret  */ FN_RET(0x00841a8c); r_esp += 4; return;
}

void f_00841b18(void) /* sub_841B18 */
{
    FN_ENTER(0x00841b18);
    /* 00841b18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841b19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00841b1a: mov edx, 0xa21ce0 */ r_edx = 0xa21ce0u;
    /* 00841b1f: mov dword ptr [0xadc960], 0 */ W32((u32)(0xadc960u), 0x0u);
    /* 00841b29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00841b2b: mov ebx, eax */ r_ebx = r_eax;
    /* 00841b2d: mov esi, edx */ r_esi = r_edx;
L_00841b2f:; BB(0x00841b2f);
    /* 00841b2f: lea eax, [esi + 0x78] */ r_eax = (u32)(r_esi+0x78u);
    /* 00841b32: lea ecx, [esi + 0x18] */ r_ecx = (u32)(r_esi+0x18u);
    /* 00841b35: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841b37: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x841b3cu); f_0082d3c0();
    /* 00841b3c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00841b3f: add esi, 0xd8 */ {  u32 a = r_esi; u32 b = 0xd8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00841b45: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00841b48: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00841b4b: jb 0x841b2f */ if (fC) goto L_00841b2f;
L_00841b4d:; BB(0x00841b4d);
    /* 00841b4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00841b4e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00841b4f: ret  */ FN_RET(0x00841b18); r_esp += 4; return;
}

void f_00841b50(void) /* sub_841B50 */
{
    FN_ENTER(0x00841b50);
    /* 00841b50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841b51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00841b52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841b53: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00841b55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00841b57: mov ebx, eax */ r_ebx = r_eax;
    /* 00841b59: mov esi, edx */ r_esi = r_edx;
L_00841b5b:; BB(0x00841b5b);
    /* 00841b5b: mov ecx, dword ptr [ebx + 0xadc9bc] */ r_ecx = R32((u32)(r_ebx+0xadc9bcu));
    /* 00841b61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841b63: je 0x841b8e */ if (fZ) goto L_00841b8e;
L_00841b65:; BB(0x00841b65);
    /* 00841b65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841b66: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00841b68: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x841b6bu); call_ind(t); }
    /* 00841b6b: mov ecx, dword ptr [ebx + 0xadc9bc] */ r_ecx = R32((u32)(r_ebx+0xadc9bcu));
    /* 00841b71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841b72: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00841b74: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x841b77u); call_ind(t); }
    /* 00841b77: mov ecx, dword ptr [ebx + 0xadc9c0] */ r_ecx = R32((u32)(r_ebx+0xadc9c0u));
    /* 00841b7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841b7f: je 0x841b87 */ if (fZ) goto L_00841b87;
L_00841b81:; BB(0x00841b81);
    /* 00841b81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841b82: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00841b84: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x841b87u); call_ind(t); }
L_00841b87:; BB(0x00841b87);
    /* 00841b87: mov eax, esi */ r_eax = r_esi;
    /* 00841b89: call 0x841bb8 */ r_esp -= 4; W32(r_esp, 0x841b8eu); f_00841bb8();
L_00841b8e:; BB(0x00841b8e);
    /* 00841b8e: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00841b91: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00841b94: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841b97: jb 0x841b5b */ if (fC) goto L_00841b5b;
L_00841b99:; BB(0x00841b99);
    /* 00841b99: mov eax, dword ptr [0xadcda0] */ r_eax = R32((u32)(0xadcda0u));
    /* 00841b9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841ba0: je 0x841bb2 */ if (fZ) goto L_00841bb2;
L_00841ba2:; BB(0x00841ba2);
    /* 00841ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00841ba3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00841ba5: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x841ba8u); call_ind(t); }
    /* 00841ba8: mov dword ptr [0xadcda0], 0 */ W32((u32)(0xadcda0u), 0x0u);
L_00841bb2:; BB(0x00841bb2);
    /* 00841bb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841bb3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00841bb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00841bb5: ret  */ FN_RET(0x00841b50); r_esp += 4; return;
}

void f_00841bb8(void) /* sub_841BB8 */
{
    FN_ENTER(0x00841bb8);
    /* 00841bb8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00841bbb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841bbd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00841bbf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00841bc1: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 00841bc4: mov dword ptr [eax*4 + 0xadc990], 0x2c */ W32((u32)(r_eax*4+0xadc990u), 0x2cu);
    /* 00841bcf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00841bd1: mov dword ptr [eax*4 + 0xadc9bc], ecx */ W32((u32)(r_eax*4+0xadc9bcu), r_ecx);
    /* 00841bd8: mov dword ptr [eax*4 + 0xadc9c0], ecx */ W32((u32)(r_eax*4+0xadc9c0u), r_ecx);
    /* 00841bdf: mov dword ptr [eax*4 + 0xadc9fc], ecx */ W32((u32)(r_eax*4+0xadc9fcu), r_ecx);
    /* 00841be6: mov dword ptr [eax*4 + 0xadca00], ecx */ W32((u32)(r_eax*4+0xadca00u), r_ecx);
    /* 00841bed: ret  */ FN_RET(0x00841bb8); r_esp += 4; return;
}

void f_00841bf0(void) /* sub_841BF0 */
{
    FN_ENTER(0x00841bf0);
    /* 00841bf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00841bf1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841bf2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00841bf3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00841bf4: sub esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00841bfa: mov edx, dword ptr [0xadc980] */ r_edx = R32((u32)(0xadc980u));
    /* 00841c00: mov eax, 0xadc990 */ r_eax = 0xadc990u;
    /* 00841c05: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00841c0a: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00841c0e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841c10: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 00841c14: mov ebx, eax */ r_ebx = r_eax;
    /* 00841c16: mov ebp, edx */ r_ebp = r_edx;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841bf0); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f08(void)
{
    FN_ENTER(0x00841f08);
    goto L_00841f08;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f08:; BB(0x00841f08);
    /* 00841f08: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00841f0c: mov eax, dword ptr [ebx + 0x68] */ r_eax = R32((u32)(r_ebx+0x68u));
    /* 00841f0f: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 00841f12: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f17u); f_008423f0();
    /* 00841f17: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f08); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f1c(void)
{
    FN_ENTER(0x00841f1c);
    goto L_00841f1c;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f1c:; BB(0x00841f1c);
    /* 00841f1c: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00841f20: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00841f23: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 00841f26: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f2bu); f_008423f0();
    /* 00841f2b: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f1c); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f30(void)
{
    FN_ENTER(0x00841f30);
    goto L_00841f30;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f30:; BB(0x00841f30);
    /* 00841f30: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00841f34: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00841f37: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00841f3a: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f3fu); f_008423f0();
    /* 00841f3f: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f30); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f44(void)
{
    FN_ENTER(0x00841f44);
    goto L_00841f44;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f44:; BB(0x00841f44);
    /* 00841f44: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00841f48: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00841f4b: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 00841f4e: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f53u); f_008423f0();
    /* 00841f53: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f44); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f58(void)
{
    FN_ENTER(0x00841f58);
    goto L_00841f58;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f58:; BB(0x00841f58);
    /* 00841f58: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00841f5c: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00841f5f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 00841f62: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f67u); f_008423f0();
    /* 00841f67: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f58); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f6c(void)
{
    FN_ENTER(0x00841f6c);
    goto L_00841f6c;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f6c:; BB(0x00841f6c);
    /* 00841f6c: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00841f70: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00841f73: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00841f76: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f7bu); f_008423f0();
    /* 00841f7b: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f6c); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f80(void)
{
    FN_ENTER(0x00841f80);
    goto L_00841f80;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f80:; BB(0x00841f80);
    /* 00841f80: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00841f84: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00841f87: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 00841f8a: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841f8fu); f_008423f0();
    /* 00841f8f: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f80); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841f94(void)
{
    FN_ENTER(0x00841f94);
    goto L_00841f94;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841f94:; BB(0x00841f94);
    /* 00841f94: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00841f98: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 00841f9b: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 00841f9e: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841fa3u); f_008423f0();
    /* 00841fa3: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841f94); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841fa5(void)
{
    FN_ENTER(0x00841fa5);
    goto L_00841fa5;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841fa5:; BB(0x00841fa5);
    /* 00841fa5: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00841fa9: mov eax, dword ptr [ebx + 0x5c] */ r_eax = R32((u32)(r_ebx+0x5cu));
    /* 00841fac: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00841faf: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841fb4u); f_008423f0();
    /* 00841fb4: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841fa5); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841fb6(void)
{
    FN_ENTER(0x00841fb6);
    goto L_00841fb6;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841fb6:; BB(0x00841fb6);
    /* 00841fb6: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00841fba: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 00841fbd: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 00841fc0: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841fc5u); f_008423f0();
    /* 00841fc5: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841fb6); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841fc7(void)
{
    FN_ENTER(0x00841fc7);
    goto L_00841fc7;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841fc7:; BB(0x00841fc7);
    /* 00841fc7: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00841fcb: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 00841fce: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 00841fd1: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841fd6u); f_008423f0();
    /* 00841fd6: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841fc7); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841fd8(void)
{
    FN_ENTER(0x00841fd8);
    goto L_00841fd8;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841fd8:; BB(0x00841fd8);
    /* 00841fd8: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00841fdc: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00841fdf: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00841fe2: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841fe7u); f_008423f0();
    /* 00841fe7: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841fd8); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841fe9(void)
{
    FN_ENTER(0x00841fe9);
    goto L_00841fe9;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841fe9:; BB(0x00841fe9);
    /* 00841fe9: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00841fed: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00841ff0: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00841ff3: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x841ff8u); f_008423f0();
    /* 00841ff8: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841fe9); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

void f_00841ffa(void)
{
    FN_ENTER(0x00841ffa);
    goto L_00841ffa;
L_00841c18:; BB(0x00841c18);
    /* 00841c18: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00841c1b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00841c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00841c22: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00841c24: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00841c27: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00841c2a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 00841c2d: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00841c30: mov word ptr [ebp + 0x1c], di */ W16((u32)(r_ebp+0x1cu), (u16)r_edi);
    /* 00841c34: mov word ptr [ebp + 0x1e], di */ W16((u32)(r_ebp+0x1eu), (u16)r_edi);
    /* 00841c38: mov word ptr [ebp + 0x20], di */ W16((u32)(r_ebp+0x20u), (u16)r_edi);
    /* 00841c3c: mov word ptr [ebp + 0x22], di */ W16((u32)(r_ebp+0x22u), (u16)r_edi);
    /* 00841c40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c42: je 0x84239c */ if (fZ) goto L_0084239c;
L_00841c48:; BB(0x00841c48);
    /* 00841c48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c49: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00841c4b: call dword ptr [ecx + 0x64] */ { u32 t = R32((u32)(r_ecx+0x64u)); r_esp -= 4; W32(r_esp, 0x841c4eu); call_ind(t); }
    /* 00841c4e: cmp eax, 0x8007000c */ {  u32 a = r_eax; u32 b = 0x8007000cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c53: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c59:; BB(0x00841c59);
    /* 00841c59: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c5e: je 0x84238f */ if (fZ) goto L_0084238f;
L_00841c64:; BB(0x00841c64);
    /* 00841c64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00841c66: jl 0x84239c */ if ((fS!=fO)) goto L_0084239c;
L_00841c6c:; BB(0x00841c6c);
    /* 00841c6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00841c6f: jg 0x84239c */ if ((!fZ&&fS==fO)) goto L_0084239c;
L_00841c75:; BB(0x00841c75);
    /* 00841c75: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00841c79: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7a: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 00841c7f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00841c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00841c82: call dword ptr [edi + 0x24] */ { u32 t = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, 0x841c85u); call_ind(t); }
    /* 00841c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c87: jne 0x84239c */ if (!fZ) goto L_0084239c;
L_00841c8d:; BB(0x00841c8d);
    /* 00841c8d: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00841c91: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841c93: je 0x841cb5 */ if (fZ) goto L_00841cb5;
L_00841c95:; BB(0x00841c95);
    /* 00841c95: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 00841c99: mov edi, 0xadcb60 */ r_edi = 0xadcb60u;
    /* 00841c9e: mov ecx, 0x110 */ r_ecx = 0x110u;
    /* 00841ca3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00841ca4: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00841ca7: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00841ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00841caa: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cad: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00841caf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00841cb1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
L_00841cb5:; BB(0x00841cb5);
    /* 00841cb5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00841cb9: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 00841cbc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841cc2: je 0x8423e5 */ if (fZ) goto L_008423e5;
L_00841cc8:; BB(0x00841cc8);
    /* 00841cc8: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00841ccd: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00841ccf: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00841cd2: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cd8: jb 0x841ce7 */ if (fC) goto L_00841ce7;
L_00841cda:; BB(0x00841cda);
    /* 00841cda: cmp edx, 0x167 */ {  u32 a = r_edx; u32 b = 0x167u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ce0: jbe 0x841cec */ if ((fC||fZ)) goto L_00841cec;
L_00841ce2:; BB(0x00841ce2);
    /* 00841ce2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841ce5: jmp 0x841d4d */ goto L_00841d4d;
L_00841ce7:; BB(0x00841ce7);
    /* 00841ce7: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841cea: ja 0x841d03 */ if ((!fC&&!fZ)) goto L_00841d03;
L_00841cec:; BB(0x00841cec);
    /* 00841cec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00841cef: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841cf5: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841cf8: jb 0x8423c1 */ if (fC) goto L_008423c1;
L_00841cfe:; BB(0x00841cfe);
    /* 00841cfe: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00841d01: jmp 0x841d06 */ goto L_00841d06;
L_00841d03:; BB(0x00841d03);
    /* 00841d03: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_00841d06:; BB(0x00841d06);
    /* 00841d06: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d0c: ja 0x841d21 */ if ((!fC&&!fZ)) goto L_00841d21;
L_00841d0e:; BB(0x00841d0e);
    /* 00841d0e: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d14: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d1a: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_00841d1c:; BB(0x00841d1c);
    /* 00841d1c: jmp 0x8423d5 */ goto L_008423d5;
L_00841d21:; BB(0x00841d21);
    /* 00841d21: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d27: ja 0x841d3c */ if ((!fC&&!fZ)) goto L_00841d3c;
L_00841d29:; BB(0x00841d29);
    /* 00841d29: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d2f: cmp edx, 0xe1 */ {  u32 a = r_edx; u32 b = 0xe1u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00841d35: jae 0x841d44 */ if (!fC) goto L_00841d44;
L_00841d37:; BB(0x00841d37);
    /* 00841d37: jmp 0x8423dd */ goto L_008423dd;
L_00841d3c:; BB(0x00841d3c);
    /* 00841d3c: cmp edx, 0x13b */ {  u32 a = r_edx; u32 b = 0x13bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841d42: ja 0x841d4d */ if ((!fC&&!fZ)) goto L_00841d4d;
L_00841d44:; BB(0x00841d44);
    /* 00841d44: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d4a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d4d:; BB(0x00841d4d);
    /* 00841d4d: movzx ecx, byte ptr [esp + 0x48] */ r_ecx = (u32)R8((u32)(r_esp+0x48u));
    /* 00841d52: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d58: je 0x841d60 */ if (fZ) goto L_00841d60;
L_00841d5a:; BB(0x00841d5a);
    /* 00841d5a: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d5d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d60:; BB(0x00841d60);
    /* 00841d60: movzx ecx, byte ptr [esp + 0x49] */ r_ecx = (u32)R8((u32)(r_esp+0x49u));
    /* 00841d65: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d6b: je 0x841d73 */ if (fZ) goto L_00841d73;
L_00841d6d:; BB(0x00841d6d);
    /* 00841d6d: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d70: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d73:; BB(0x00841d73);
    /* 00841d73: movzx ecx, byte ptr [esp + 0x4a] */ r_ecx = (u32)R8((u32)(r_esp+0x4au));
    /* 00841d78: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d7e: je 0x841d86 */ if (fZ) goto L_00841d86;
L_00841d80:; BB(0x00841d80);
    /* 00841d80: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d83: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d86:; BB(0x00841d86);
    /* 00841d86: movzx ecx, byte ptr [esp + 0x4b] */ r_ecx = (u32)R8((u32)(r_esp+0x4bu));
    /* 00841d8b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841d91: je 0x841d99 */ if (fZ) goto L_00841d99;
L_00841d93:; BB(0x00841d93);
    /* 00841d93: or esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841d96: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841d99:; BB(0x00841d99);
    /* 00841d99: movzx ecx, byte ptr [esp + 0x4c] */ r_ecx = (u32)R8((u32)(r_esp+0x4cu));
    /* 00841d9e: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841da4: je 0x841dac */ if (fZ) goto L_00841dac;
L_00841da6:; BB(0x00841da6);
    /* 00841da6: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841da9: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dac:; BB(0x00841dac);
    /* 00841dac: movzx ecx, byte ptr [esp + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+0x4du));
    /* 00841db1: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841db7: je 0x841dbf */ if (fZ) goto L_00841dbf;
L_00841db9:; BB(0x00841db9);
    /* 00841db9: or esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dbc: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dbf:; BB(0x00841dbf);
    /* 00841dbf: movzx ecx, byte ptr [esp + 0x4e] */ r_ecx = (u32)R8((u32)(r_esp+0x4eu));
    /* 00841dc4: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841dca: je 0x841dd2 */ if (fZ) goto L_00841dd2;
L_00841dcc:; BB(0x00841dcc);
    /* 00841dcc: or esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dcf: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dd2:; BB(0x00841dd2);
    /* 00841dd2: movzx ecx, byte ptr [esp + 0x4f] */ r_ecx = (u32)R8((u32)(r_esp+0x4fu));
    /* 00841dd7: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ddd: je 0x841de8 */ if (fZ) goto L_00841de8;
L_00841ddf:; BB(0x00841ddf);
    /* 00841ddf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841de5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841de8:; BB(0x00841de8);
    /* 00841de8: movzx ecx, byte ptr [esp + 0x50] */ r_ecx = (u32)R8((u32)(r_esp+0x50u));
    /* 00841ded: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841df3: je 0x841dfe */ if (fZ) goto L_00841dfe;
L_00841df5:; BB(0x00841df5);
    /* 00841df5: or esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841dfb: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841dfe:; BB(0x00841dfe);
    /* 00841dfe: movzx ecx, byte ptr [esp + 0x51] */ r_ecx = (u32)R8((u32)(r_esp+0x51u));
    /* 00841e03: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e09: je 0x841e14 */ if (fZ) goto L_00841e14;
L_00841e0b:; BB(0x00841e0b);
    /* 00841e0b: or esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e11: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e14:; BB(0x00841e14);
    /* 00841e14: movzx ecx, byte ptr [esp + 0x52] */ r_ecx = (u32)R8((u32)(r_esp+0x52u));
    /* 00841e19: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e1f: je 0x841e2a */ if (fZ) goto L_00841e2a;
L_00841e21:; BB(0x00841e21);
    /* 00841e21: or esi, 0x400 */ {  u32 a = r_esi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e27: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e2a:; BB(0x00841e2a);
    /* 00841e2a: movzx ecx, byte ptr [esp + 0x53] */ r_ecx = (u32)R8((u32)(r_esp+0x53u));
    /* 00841e2f: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e35: je 0x841e40 */ if (fZ) goto L_00841e40;
L_00841e37:; BB(0x00841e37);
    /* 00841e37: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e3d: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e40:; BB(0x00841e40);
    /* 00841e40: movzx ecx, byte ptr [esp + 0x54] */ r_ecx = (u32)R8((u32)(r_esp+0x54u));
    /* 00841e45: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e4b: je 0x841e56 */ if (fZ) goto L_00841e56;
L_00841e4d:; BB(0x00841e4d);
    /* 00841e4d: or esi, 0x1000 */ {  u32 a = r_esi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e53: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e56:; BB(0x00841e56);
    /* 00841e56: movzx ecx, byte ptr [esp + 0x55] */ r_ecx = (u32)R8((u32)(r_esp+0x55u));
    /* 00841e5b: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e61: je 0x841e6c */ if (fZ) goto L_00841e6c;
L_00841e63:; BB(0x00841e63);
    /* 00841e63: or esi, 0x2000 */ {  u32 a = r_esi; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e69: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e6c:; BB(0x00841e6c);
    /* 00841e6c: movzx ecx, byte ptr [esp + 0x56] */ r_ecx = (u32)R8((u32)(r_esp+0x56u));
    /* 00841e71: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e77: je 0x841e82 */ if (fZ) goto L_00841e82;
L_00841e79:; BB(0x00841e79);
    /* 00841e79: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e7f: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e82:; BB(0x00841e82);
    /* 00841e82: movzx ecx, byte ptr [esp + 0x57] */ r_ecx = (u32)R8((u32)(r_esp+0x57u));
    /* 00841e87: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841e8d: je 0x841e98 */ if (fZ) goto L_00841e98;
L_00841e8f:; BB(0x00841e8f);
    /* 00841e8f: or esi, 0x8000 */ {  u32 a = r_esi; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841e95: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841e98:; BB(0x00841e98);
    /* 00841e98: movzx ecx, byte ptr [esp + 0x58] */ r_ecx = (u32)R8((u32)(r_esp+0x58u));
    /* 00841e9d: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ea3: je 0x841eae */ if (fZ) goto L_00841eae;
L_00841ea5:; BB(0x00841ea5);
    /* 00841ea5: or esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eab: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eae:; BB(0x00841eae);
    /* 00841eae: movzx ecx, byte ptr [esp + 0x59] */ r_ecx = (u32)R8((u32)(r_esp+0x59u));
    /* 00841eb3: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841eb9: je 0x841ec4 */ if (fZ) goto L_00841ec4;
L_00841ebb:; BB(0x00841ebb);
    /* 00841ebb: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ec1: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ec4:; BB(0x00841ec4);
    /* 00841ec4: movzx ecx, byte ptr [esp + 0x5a] */ r_ecx = (u32)R8((u32)(r_esp+0x5au));
    /* 00841ec9: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ecf: je 0x841eda */ if (fZ) goto L_00841eda;
L_00841ed1:; BB(0x00841ed1);
    /* 00841ed1: or esi, 0x40000 */ {  u32 a = r_esi; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841ed7: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841eda:; BB(0x00841eda);
    /* 00841eda: movzx ecx, byte ptr [esp + 0x5b] */ r_ecx = (u32)R8((u32)(r_esp+0x5bu));
    /* 00841edf: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00841ee5: je 0x841ef0 */ if (fZ) goto L_00841ef0;
L_00841ee7:; BB(0x00841ee7);
    /* 00841ee7: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00841eed: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
L_00841ef0:; BB(0x00841ef0);
    /* 00841ef0: mov ecx, dword ptr [0xadcd90] */ r_ecx = R32((u32)(0xadcd90u));
    /* 00841ef6: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00841ef9: ja 0x84200b */ if ((!fC&&!fZ)) goto L_0084200b;
L_00841eff:; BB(0x00841eff);
    /* 00841eff: mov ecx, dword ptr [ecx*4 + 0x98b310] */ r_ecx = R32((u32)(r_ecx*4+0x98b310u));
    /* 00841f06: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_00841ffa:; BB(0x00841ffa);
    /* 00841ffa: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00841ffe: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00842001: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00842004: call 0x8423f0 */ r_esp -= 4; W32(r_esp, 0x842009u); f_008423f0();
    /* 00842009: jmp 0x84200d */ goto L_0084200d;
L_0084200b:; BB(0x0084200b);
    /* 0084200b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0084200d:; BB(0x0084200d);
    /* 0084200d: mov ecx, dword ptr [0xadcd94] */ r_ecx = R32((u32)(0xadcd94u));
    /* 00842013: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00842017: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084201a: ja 0x84212c */ if ((!fC&&!fZ)) goto L_0084212c;
L_00842020:; BB(0x00842020);
    /* 00842020: mov ecx, dword ptr [ecx*4 + 0x98b2d8] */ r_ecx = R32((u32)(r_ecx*4+0x98b2d8u));
    /* 00842027: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084212c:; BB(0x0084212c);
    /* 0084212c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084212e: mov ecx, dword ptr [0xadcd98] */ r_ecx = R32((u32)(0xadcd98u));
    /* 00842134: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00842138: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084213b: ja 0x84224d */ if ((!fC&&!fZ)) goto L_0084224d;
L_00842141:; BB(0x00842141);
    /* 00842141: mov ecx, dword ptr [ecx*4 + 0x98b2a0] */ r_ecx = R32((u32)(r_ecx*4+0x98b2a0u));
    /* 00842148: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084224d:; BB(0x0084224d);
    /* 0084224d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084224f: mov ecx, dword ptr [0xadcd9c] */ r_ecx = R32((u32)(0xadcd9cu));
    /* 00842255: mov word ptr [ebp + 0x20], ax */ W16((u32)(r_ebp+0x20u), (u16)r_eax);
    /* 00842259: cmp ecx, 0xd */ {  u32 a = r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0084225c: ja 0x84236e */ if ((!fC&&!fZ)) goto L_0084236e;
L_00842262:; BB(0x00842262);
    /* 00842262: mov ecx, dword ptr [ecx*4 + 0x98b268] */ r_ecx = R32((u32)(r_ecx*4+0x98b268u));
    /* 00842269: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_0084236e:; BB(0x0084236e);
    /* 0084236e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00842370: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00842374: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
    /* 00842378: mov ecx, esi */ r_ecx = r_esi;
    /* 0084237a: not ecx */ r_ecx = ~r_ecx;
    /* 0084237c: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0084237f: mov ecx, edi */ r_ecx = r_edi;
    /* 00842381: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00842383: and esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00842385: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 00842388: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0084238a: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 0084238d: jmp 0x84239c */ goto L_0084239c;
L_0084238f:; BB(0x0084238f);
    /* 0084238f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00842390: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00842392: call dword ptr [ecx + 0x1c] */ { u32 t = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, 0x842395u); call_ind(t); }
    /* 00842395: cmp eax, 0x8007001e */ {  u32 a = r_eax; u32 b = 0x8007001eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084239a: je 0x84238f */ if (fZ) goto L_0084238f;
L_0084239c:; BB(0x0084239c);
    /* 0084239c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008423a0: add ebx, 0x74 */ {  u32 a = r_ebx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008423a3: add ebp, 0x34 */ {  u32 a = r_ebp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008423a6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008423a9: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008423ac: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008423b0: jl 0x841c18 */ if ((fS!=fO)) goto L_00841c18;
L_008423b6:; BB(0x008423b6);
    /* 008423b6: add esp, 0x128 */ {  u32 a = r_esp; u32 b = 0x128u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008423bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008423bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008423be: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008423bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008423c0: ret  */ FN_RET(0x00841ffa); r_esp += 4; return;
L_008423c1:; BB(0x008423c1);
    /* 008423c1: cmp edx, 0x87 */ {  u32 a = r_edx; u32 b = 0x87u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008423c7: jae 0x841d29 */ if (!fC) goto L_00841d29;
L_008423cd:; BB(0x008423cd);
    /* 008423cd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d0: jmp 0x841d4d */ goto L_00841d4d;
L_008423d5:; BB(0x008423d5);
    /* 008423d5: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423d8: jmp 0x841d4d */ goto L_00841d4d;
L_008423dd:; BB(0x008423dd);
    /* 008423dd: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008423e0: jmp 0x841d4d */ goto L_00841d4d;
L_008423e5:; BB(0x008423e5);
    /* 008423e5: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008423e8: jmp 0x841d4d */ goto L_00841d4d;
}

