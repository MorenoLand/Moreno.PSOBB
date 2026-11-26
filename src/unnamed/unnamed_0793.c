#include "protos.h"

void f_00793000(void) /* sub_793000 */
{
    FN_ENTER(0x00793000);
    /* 00793000: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793004: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 0079300a: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 0079300d: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00793010: ret  */ FN_RET(0x00793000); r_esp += 4; return;
}

void f_00793014(void) /* sub_793014 */
{
    FN_ENTER(0x00793014);
    /* 00793014: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00793018: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0079301a: mov eax, 0 */ r_eax = 0x0u;
    /* 0079301f: jl 0x793023 */ if ((fS!=fO)) goto L_00793023;
L_00793021:; BB(0x00793021);
    /* 00793021: mov eax, edx */ r_eax = r_edx;
L_00793023:; BB(0x00793023);
    /* 00793023: cmp eax, 0x6d */ {  u32 a = r_eax; u32 b = 0x6du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00793026: jl 0x79302a */ if ((fS!=fO)) goto L_0079302a;
L_00793028:; BB(0x00793028);
    /* 00793028: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0079302a:; BB(0x0079302a);
    /* 0079302a: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00793030: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00793033: jl 0x793042 */ if ((fS!=fO)) goto L_00793042;
L_00793035:; BB(0x00793035);
    /* 00793035: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 0079303b: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0079303e: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00793041: ret  */ FN_RET(0x00793014); r_esp += 4; return;
L_00793042:; BB(0x00793042);
    /* 00793042: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793048: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0079304b: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0079304e: ret  */ FN_RET(0x00793014); r_esp += 4; return;
}

void f_00793050(void) /* sub_793050 */
{
    FN_ENTER(0x00793050);
    /* 00793050: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793054: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 0079305a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0079305d: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00793060: ret  */ FN_RET(0x00793050); r_esp += 4; return;
}

void f_00793064(void) /* sub_793064 */
{
    FN_ENTER(0x00793064);
    /* 00793064: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793068: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 0079306e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00793071: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00793074: ret  */ FN_RET(0x00793064); r_esp += 4; return;
}

void f_00793078(void) /* sub_793078 */
{
    FN_ENTER(0x00793078);
    /* 00793078: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079307c: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793082: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00793085: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00793088: ret  */ FN_RET(0x00793078); r_esp += 4; return;
}

void f_0079308c(void) /* sub_79308C */
{
    FN_ENTER(0x0079308c);
    /* 0079308c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793090: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793096: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00793099: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0079309c: ret  */ FN_RET(0x0079308c); r_esp += 4; return;
}

void f_007930a0(void) /* sub_7930A0 */
{
    FN_ENTER(0x007930a0);
    /* 007930a0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007930a4: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 007930aa: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 007930ad: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 007930b0: ret  */ FN_RET(0x007930a0); r_esp += 4; return;
}

void f_007930b4(void) /* sub_7930B4 */
{
    FN_ENTER(0x007930b4);
    /* 007930b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007930b8: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 007930be: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 007930c1: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 007930c4: ret  */ FN_RET(0x007930b4); r_esp += 4; return;
}

void f_007930c8(void) /* sub_7930C8 */
{
    FN_ENTER(0x007930c8);
    /* 007930c8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007930cc: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 007930d2: mov ecx, dword ptr [edx + 0x120] */ r_ecx = R32((u32)(r_edx+0x120u));
    /* 007930d8: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 007930db: ret  */ FN_RET(0x007930c8); r_esp += 4; return;
}

void f_007930dc(void) /* sub_7930DC */
{
    FN_ENTER(0x007930dc);
    /* 007930dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007930e0: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 007930e6: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007930e9: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 007930ec: ret  */ FN_RET(0x007930dc); r_esp += 4; return;
}

void f_007930f0(void) /* sub_7930F0 */
{
    FN_ENTER(0x007930f0);
    /* 007930f0: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 007930f6: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 007930f9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007930fb: ret  */ FN_RET(0x007930f0); r_esp += 4; return;
}

void f_007930fc(void) /* sub_7930FC */
{
    FN_ENTER(0x007930fc);
    /* 007930fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793100: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793102: jne 0x79311f */ if (!fZ) goto L_0079311f;
L_00793104:; BB(0x00793104);
    /* 00793104: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793106: jne 0x79312c */ if (!fZ) goto L_0079312c;
L_00793108:; BB(0x00793108);
    /* 00793108: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079310d: je 0x79311c */ if (fZ) goto L_0079311c;
L_0079310f:; BB(0x0079310f);
    /* 0079310f: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793115: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00793118: mov eax, dword ptr [ecx + 0x14] */ r_eax = R32((u32)(r_ecx+0x14u));
    /* 0079311b: ret  */ FN_RET(0x007930fc); r_esp += 4; return;
L_0079311c:; BB(0x0079311c);
    /* 0079311c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079311e: ret  */ FN_RET(0x007930fc); r_esp += 4; return;
L_0079311f:; BB(0x0079311f);
    /* 0079311f: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793125: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00793128: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0079312b: ret  */ FN_RET(0x007930fc); r_esp += 4; return;
L_0079312c:; BB(0x0079312c);
    /* 0079312c: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793132: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 00793135: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 00793138: ret  */ FN_RET(0x007930fc); r_esp += 4; return;
}

void f_0079313c(void) /* sub_79313C */
{
    FN_ENTER(0x0079313c);
    /* 0079313c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00793140: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00793143: jne 0x793154 */ if (!fZ) goto L_00793154;
L_00793145:; BB(0x00793145);
    /* 00793145: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0079314a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079314d: jl 0x793154 */ if ((fS!=fO)) goto L_00793154;
L_0079314f:; BB(0x0079314f);
    /* 0079314f: mov edx, 0xe */ r_edx = 0xeu;
L_00793154:; BB(0x00793154);
    /* 00793154: mov ecx, dword ptr [0xa9cd50] */ r_ecx = R32((u32)(0xa9cd50u));
    /* 0079315a: mov eax, dword ptr [edx*4 + 0x97c660] */ r_eax = R32((u32)(r_edx*4+0x97c660u));
    /* 00793161: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00793164: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00793167: ret  */ FN_RET(0x0079313c); r_esp += 4; return;
}

void f_00793168(void) /* sub_793168 */
{
    FN_ENTER(0x00793168);
    /* 00793168: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079316c: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793172: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 00793175: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00793178: ret  */ FN_RET(0x00793168); r_esp += 4; return;
}

void f_0079317c(void) /* sub_79317C */
{
    FN_ENTER(0x0079317c);
    /* 0079317c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793180: mov edx, dword ptr [0xa9cd50] */ r_edx = R32((u32)(0xa9cd50u));
    /* 00793186: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00793189: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0079318c: ret  */ FN_RET(0x0079317c); r_esp += 4; return;
}

void f_00793190(void) /* sub_793190 */
{
    FN_ENTER(0x00793190);
    /* 00793190: call 0x79319c */ r_esp -= 4; W32(r_esp, 0x793195u); f_0079319c();
    /* 00793195: call 0x7931d0 */ r_esp -= 4; W32(r_esp, 0x79319au); f_007931d0();
    /* 0079319a: ret  */ FN_RET(0x00793190); r_esp += 4; return;
}

void f_0079319c(void) /* sub_79319C */
{
    FN_ENTER(0x0079319c);
    /* 0079319c: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 007931a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007931a4: je 0x7931cc */ if (fZ) goto L_007931cc;
L_007931a6:; BB(0x007931a6);
    /* 007931a6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007931a8: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 007931ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007931ad: je 0x7931ba */ if (fZ) goto L_007931ba;
L_007931af:; BB(0x007931af);
    /* 007931af: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x7931b4u); f_00829de0();
    /* 007931b4: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
L_007931ba:; BB(0x007931ba);
    /* 007931ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007931bb: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7931c0u); f_0082e960();
    /* 007931c0: mov dword ptr [0xa9cd48], 0 */ W32((u32)(0xa9cd48u), 0x0u);
    /* 007931ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007931cb: ret  */ FN_RET(0x0079319c); r_esp += 4; return;
L_007931cc:; BB(0x007931cc);
    /* 007931cc: ret  */ FN_RET(0x0079319c); r_esp += 4; return;
}

void f_007931d0(void) /* sub_7931D0 */
{
    FN_ENTER(0x007931d0);
    /* 007931d0: mov ecx, dword ptr [0xa9cd54] */ r_ecx = R32((u32)(0xa9cd54u));
    /* 007931d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007931d8: je 0x7931e1 */ if (fZ) goto L_007931e1;
L_007931da:; BB(0x007931da);
    /* 007931da: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007931dc: call 0x6dbd5c */ r_esp -= 4; W32(r_esp, 0x7931e1u); f_006dbd5c();
L_007931e1:; BB(0x007931e1);
    /* 007931e1: push dword ptr [0xa9cd58] */ { u32 v = R32((u32)(0xa9cd58u)); r_esp -= 4; W32(r_esp, v); }
    /* 007931e7: mov dword ptr [0xa9cd54], 0 */ W32((u32)(0xa9cd54u), 0x0u);
    /* 007931f1: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x7931f6u); f_005b9bac();
    /* 007931f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007931f8: mov dword ptr [0xa9cd40], eax */ W32((u32)(0xa9cd40u), r_eax);
    /* 007931fd: mov dword ptr [0xa9cd50], eax */ W32((u32)(0xa9cd50u), r_eax);
    /* 00793202: mov dword ptr [0xa9cd58], eax */ W32((u32)(0xa9cd58u), r_eax);
    /* 00793207: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793208: ret  */ FN_RET(0x007931d0); r_esp += 4; return;
}

void f_0079320c(void) /* sub_79320C */
{
    FN_ENTER(0x0079320c);
    /* 0079320c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793210: cmp eax, dword ptr [0xa9cd4c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9cd4cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00793216: jne 0x793219 */ if (!fZ) goto L_00793219;
L_00793218:; BB(0x00793218);
    /* 00793218: ret  */ FN_RET(0x0079320c); r_esp += 4; return;
L_00793219:; BB(0x00793219);
    /* 00793219: mov dword ptr [0xa9cd4c], eax */ W32((u32)(0xa9cd4cu), r_eax);
    /* 0079321e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079321f: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x793224u); f_00841978();
    /* 00793224: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793225: ret  */ FN_RET(0x0079320c); r_esp += 4; return;
}

void f_00793228(void) /* sub_793228 */
{
    FN_ENTER(0x00793228);
    /* 00793228: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79322du); f_006dc358();
    /* 0079322d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00793230: jne 0x793238 */ if (!fZ) goto L_00793238;
L_00793232:; BB(0x00793232);
    /* 00793232: mov eax, 5 */ r_eax = 0x5u;
    /* 00793237: ret  */ FN_RET(0x00793228); r_esp += 4; return;
L_00793238:; BB(0x00793238);
    /* 00793238: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079323a: jne 0x79323f */ if (!fZ) goto L_0079323f;
L_0079323c:; BB(0x0079323c);
    /* 0079323c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079323e: ret  */ FN_RET(0x00793228); r_esp += 4; return;
L_0079323f:; BB(0x0079323f);
    /* 0079323f: mov eax, 1 */ r_eax = 0x1u;
    /* 00793244: ret  */ FN_RET(0x00793228); r_esp += 4; return;
}

void f_0079324c(void) /* sub_79324C */
{
    FN_ENTER(0x0079324c);
    /* 0079324c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079324d: mov ebp, eax */ r_ebp = r_eax;
    /* 0079324f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00793254: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x793259u); f_0082aab8();
    /* 00793259: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079325b: je 0x7932d5 */ if (fZ) goto L_007932d5;
L_0079325d:; BB(0x0079325d);
    /* 0079325d: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793260: je 0x7932c3 */ if (fZ) goto L_007932c3;
L_00793262:; BB(0x00793262);
    /* 00793262: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793265: je 0x7932ac */ if (fZ) goto L_007932ac;
L_00793267:; BB(0x00793267);
    /* 00793267: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079326a: jne 0x79327e */ if (!fZ) goto L_0079327e;
L_0079326c:; BB(0x0079326c);
    /* 0079326c: push 0x97c81c */ { u32 v = 0x97c81cu; r_esp -= 4; W32(r_esp, v); }
    /* 00793271: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x793276u); f_008009dc();
    /* 00793276: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793277: mov dword ptr [0xa9cd48], eax */ W32((u32)(0xa9cd48u), r_eax);
    /* 0079327c: jmp 0x7932bc */ goto L_007932bc;
L_0079327e:; BB(0x0079327e);
    /* 0079327e: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00793281: jl 0x79329a */ if ((fS!=fO)) goto L_0079329a;
L_00793283:; BB(0x00793283);
    /* 00793283: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00793286: jg 0x79329a */ if ((!fZ&&fS==fO)) goto L_0079329a;
L_00793288:; BB(0x00793288);
    /* 00793288: push 0x97c830 */ { u32 v = 0x97c830u; r_esp -= 4; W32(r_esp, v); }
    /* 0079328d: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x793292u); f_008009dc();
    /* 00793292: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793293: mov dword ptr [0xa9cd48], eax */ W32((u32)(0xa9cd48u), r_eax);
    /* 00793298: jmp 0x7932bc */ goto L_007932bc;
L_0079329a:; BB(0x0079329a);
    /* 0079329a: push 0x97c844 */ { u32 v = 0x97c844u; r_esp -= 4; W32(r_esp, v); }
    /* 0079329f: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x7932a4u); f_008009dc();
    /* 007932a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007932a5: mov dword ptr [0xa9cd48], eax */ W32((u32)(0xa9cd48u), r_eax);
    /* 007932aa: jmp 0x7932bc */ goto L_007932bc;
L_007932ac:; BB(0x007932ac);
    /* 007932ac: push 0x97c808 */ { u32 v = 0x97c808u; r_esp -= 4; W32(r_esp, v); }
    /* 007932b1: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x7932b6u); f_008009dc();
    /* 007932b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007932b7: mov dword ptr [0xa9cd48], eax */ W32((u32)(0xa9cd48u), r_eax);
L_007932bc:; BB(0x007932bc);
    /* 007932bc: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x7932c1u); f_0082aac0();
    /* 007932c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007932c2: ret  */ FN_RET(0x0079324c); r_esp += 4; return;
L_007932c3:; BB(0x007932c3);
    /* 007932c3: push 0x97c7f4 */ { u32 v = 0x97c7f4u; r_esp -= 4; W32(r_esp, v); }
    /* 007932c8: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x7932cdu); f_008009dc();
    /* 007932cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007932ce: mov dword ptr [0xa9cd48], eax */ W32((u32)(0xa9cd48u), r_eax);
    /* 007932d3: jmp 0x7932bc */ goto L_007932bc;
L_007932d5:; BB(0x007932d5);
    /* 007932d5: push 0x97c7e0 */ { u32 v = 0x97c7e0u; r_esp -= 4; W32(r_esp, v); }
    /* 007932da: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x7932dfu); f_008009dc();
    /* 007932df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007932e0: mov dword ptr [0xa9cd48], eax */ W32((u32)(0xa9cd48u), r_eax);
    /* 007932e5: jmp 0x7932bc */ goto L_007932bc;
}

void f_007932e8(void) /* sub_7932E8 */
{
    FN_ENTER(0x007932e8);
    /* 007932e8: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x7932edu); f_00793228();
    /* 007932ed: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007932f0: mov dword ptr [0xa9cd44], eax */ W32((u32)(0xa9cd44u), r_eax);
    /* 007932f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007932f6: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x7932fbu); f_00841978();
    /* 007932fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007932fc: ret  */ FN_RET(0x007932e8); r_esp += 4; return;
}

void f_00793304(void) /* sub_793304 */
{
    FN_ENTER(0x00793304);
    /* 00793304: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793305: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793308: mov ebp, eax */ r_ebp = r_eax;
    /* 0079330a: mov edx, 0x97c730 */ r_edx = 0x97c730u;
    /* 0079330f: mov dword ptr [esp], 0x97c720 */ W32((u32)(r_esp), 0x97c720u);
    /* 00793316: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0079331a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0079331e: mov dword ptr [esp + 8], 0x97c73c */ W32((u32)(r_esp+0x8u), 0x97c73cu);
    /* 00793326: mov dword ptr [esp + 0xc], 0x97c748 */ W32((u32)(r_esp+0xcu), 0x97c748u);
    /* 0079332e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00793332: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00793336: mov dword ptr [esp + 0x10], 0x97c754 */ W32((u32)(r_esp+0x10u), 0x97c754u);
    /* 0079333e: mov dword ptr [esp + 0x20], 0x97c760 */ W32((u32)(r_esp+0x20u), 0x97c760u);
    /* 00793346: mov dword ptr [esp + 0x24], 0x97c770 */ W32((u32)(r_esp+0x24u), 0x97c770u);
    /* 0079334e: mov dword ptr [esp + 0x28], 0x97c780 */ W32((u32)(r_esp+0x28u), 0x97c780u);
    /* 00793356: mov dword ptr [esp + 0x2c], 0x97c790 */ W32((u32)(r_esp+0x2cu), 0x97c790u);
    /* 0079335e: mov dword ptr [esp + 0x30], 0x97c7a0 */ W32((u32)(r_esp+0x30u), 0x97c7a0u);
    /* 00793366: mov dword ptr [esp + 0x34], 0x97c7b0 */ W32((u32)(r_esp+0x34u), 0x97c7b0u);
    /* 0079336e: mov dword ptr [esp + 0x38], 0x97c7c0 */ W32((u32)(r_esp+0x38u), 0x97c7c0u);
    /* 00793376: mov dword ptr [esp + 0x3c], 0x97c7d0 */ W32((u32)(r_esp+0x3cu), 0x97c7d0u);
    /* 0079337e: push dword ptr [esp + ebp*4] */ { u32 v = R32((u32)(r_esp+r_ebp*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00793381: call 0x5b9714 */ r_esp -= 4; W32(r_esp, 0x793386u); f_005b9714();
    /* 00793386: push dword ptr [esp + ebp*4 + 0x24] */ { u32 v = R32((u32)(r_esp+r_ebp*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079338a: mov dword ptr [0xa9cd58], eax */ W32((u32)(0xa9cd58u), r_eax);
    /* 0079338f: call 0x70b084 */ r_esp -= 4; W32(r_esp, 0x793394u); f_0070b084();
    /* 00793394: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793397: mov edx, dword ptr [0xa9cd58] */ r_edx = R32((u32)(0xa9cd58u));
    /* 0079339d: mov dword ptr [0xa9cd54], eax */ W32((u32)(0xa9cd54u), r_eax);
    /* 007933a2: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 007933a4: mov ecx, eax */ r_ecx = r_eax;
    /* 007933a6: mov dword ptr [0xa9cd40], ebp */ W32((u32)(0xa9cd40u), r_ebp);
    /* 007933ac: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x7933b1u); f_0070b070();
    /* 007933b1: mov dword ptr [0xa9cd50], eax */ W32((u32)(0xa9cd50u), r_eax);
    /* 007933b6: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007933b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007933ba: ret  */ FN_RET(0x00793304); r_esp += 4; return;
}

void f_007933bc(void) /* sub_7933BC */
{
    FN_ENTER(0x007933bc);
    /* 007933bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007933bd: mov eax, dword ptr [0xa9cd54] */ r_eax = R32((u32)(0xa9cd54u));
    /* 007933c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007933c4: je 0x7933c8 */ if (fZ) goto L_007933c8;
L_007933c6:; BB(0x007933c6);
    /* 007933c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007933c7: ret  */ FN_RET(0x007933bc); r_esp += 4; return;
L_007933c8:; BB(0x007933c8);
    /* 007933c8: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x7933cdu); f_007932e8();
    /* 007933cd: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 007933d2: call 0x793304 */ r_esp -= 4; W32(r_esp, 0x7933d7u); f_00793304();
    /* 007933d7: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 007933dc: call 0x79324c */ r_esp -= 4; W32(r_esp, 0x7933e1u); f_0079324c();
    /* 007933e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007933e2: ret  */ FN_RET(0x007933bc); r_esp += 4; return;
}

void f_007933e4(void) /* sub_7933E4 */
{
    FN_ENTER(0x007933e4);
    /* 007933e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007933e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007933e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007933e9: call 0x793408 */ r_esp -= 4; W32(r_esp, 0x7933eeu); f_00793408();
    /* 007933ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007933f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007933f4: jne 0x7933fa */ if (!fZ) goto L_007933fa;
L_007933f6:; BB(0x007933f6);
    /* 007933f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007933f7: ret 4 */ FN_RET(0x007933e4); r_esp += 8; return;
L_007933fa:; BB(0x007933fa);
    /* 007933fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007933fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x793400u); f_005c2f74();
    /* 00793400: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793401: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00793402: ret 4 */ FN_RET(0x007933e4); r_esp += 8; return;
}

void f_00793408(void) /* sub_793408 */
{
    FN_ENTER(0x00793408);
    /* 00793408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793409: mov ebp, esp */ r_ebp = r_esp;
    /* 0079340b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079340d: push 0x8f501c */ { u32 v = 0x8f501cu; r_esp -= 4; W32(r_esp, v); }
    /* 00793412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793420: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00793429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0079342c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0079342f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00793432: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793435: mov dword ptr [ecx], 0xb456e0 */ W32((u32)(r_ecx), 0xb456e0u);
    /* 0079343b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00793442: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x793447u); f_008171e8();
    /* 00793447: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079344a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793451: mov esp, ebp */ r_esp = r_ebp;
    /* 00793453: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793454: ret  */ FN_RET(0x00793408); r_esp += 4; return;
}

void f_00793458(void) /* sub_793458 */
{
    FN_ENTER(0x00793458);
    /* 00793458: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793459: mov ebp, esp */ r_ebp = r_esp;
    /* 0079345b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079345d: push 0x8f517e */ { u32 v = 0x8f517eu; r_esp -= 4; W32(r_esp, v); }
    /* 00793462: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793469: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793470: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793476: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793479: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079347c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0079347f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00793482: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00793488: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0079348b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x793490u); f_008193cc();
    /* 00793490: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793497: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079349a: mov dword ptr [edx], 0xb456e0 */ W32((u32)(r_edx), 0xb456e0u);
    /* 007934a0: mov eax, dword ptr [0x9ff400] */ r_eax = R32((u32)(0x9ff400u));
    /* 007934a5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007934a7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007934aa: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7934afu); f_007a6198();
    /* 007934af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007934b0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007934b3: mov dword ptr [0xa9cd68], 0 */ W32((u32)(0xa9cd68u), 0x0u);
    /* 007934bd: call 0x793a00 */ r_esp -= 4; W32(r_esp, 0x7934c2u); f_00793a00();
    /* 007934c2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007934c5: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007934c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007934ca: jne 0x7934f3 */ if (!fZ) goto L_007934f3;
L_007934cc:; BB(0x007934cc);
    /* 007934cc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007934ce: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7934d3u); f_007a60dc();
    /* 007934d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007934d4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007934d7: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 007934db: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007934e1: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 007934e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007934e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007934ef: mov esp, ebp */ r_esp = r_ebp;
    /* 007934f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007934f2: ret  */ FN_RET(0x00793458); r_esp += 4; return;
L_007934f3:; BB(0x007934f3);
    /* 007934f3: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
    /* 007934fd: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007934ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793504u); f_005caba4();
    /* 00793504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793505: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0079350b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079350d: je 0x793534 */ if (fZ) goto L_00793534;
L_0079350f:; BB(0x0079350f);
    /* 0079350f: mov dword ptr [ebp - 0xc8], 1 */ W32((u32)(r_ebp+0xffffff38u), 0x1u);
    /* 00793519: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00793520: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00793523: mov ecx, eax */ r_ecx = r_eax;
    /* 00793525: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x79352au); f_004010b0();
    /* 0079352a: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_00793534:; BB(0x00793534);
    /* 00793534: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079353b: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
    /* 00793545: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00793547: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79354cu); f_005caba4();
    /* 0079354c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079354d: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00793553: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793555: je 0x79357c */ if (fZ) goto L_0079357c;
L_00793557:; BB(0x00793557);
    /* 00793557: mov dword ptr [ebp - 0xc0], 1 */ W32((u32)(r_ebp+0xffffff40u), 0x1u);
    /* 00793561: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00793568: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079356b: mov ecx, eax */ r_ecx = r_eax;
    /* 0079356d: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x793572u); f_004012cc();
    /* 00793572: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0079357c:; BB(0x0079357c);
    /* 0079357c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793583: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
    /* 0079358d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0079358f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793594u); f_005caba4();
    /* 00793594: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793595: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 0079359b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079359d: je 0x7935c4 */ if (fZ) goto L_007935c4;
L_0079359f:; BB(0x0079359f);
    /* 0079359f: mov dword ptr [ebp - 0xb8], 1 */ W32((u32)(r_ebp+0xffffff48u), 0x1u);
    /* 007935a9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007935b0: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007935b3: mov ecx, eax */ r_ecx = r_eax;
    /* 007935b5: call 0x410934 */ r_esp -= 4; W32(r_esp, 0x7935bau); f_00410934();
    /* 007935ba: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_007935c4:; BB(0x007935c4);
    /* 007935c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007935cb: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 007935d5: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 007935da: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7935dfu); f_005caba4();
    /* 007935df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007935e0: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 007935e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007935e8: je 0x793611 */ if (fZ) goto L_00793611;
L_007935ea:; BB(0x007935ea);
    /* 007935ea: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 007935f4: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007935fb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007935fd: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00793600: mov ecx, eax */ r_ecx = r_eax;
    /* 00793602: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x793607u); f_00415154();
    /* 00793607: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00793611:; BB(0x00793611);
    /* 00793611: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793618: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
    /* 00793622: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00793627: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79362cu); f_005caba4();
    /* 0079362c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079362d: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 00793633: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793635: je 0x79365c */ if (fZ) goto L_0079365c;
L_00793637:; BB(0x00793637);
    /* 00793637: mov dword ptr [ebp - 0xa8], 1 */ W32((u32)(r_ebp+0xffffff58u), 0x1u);
    /* 00793641: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00793648: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079364b: mov ecx, eax */ r_ecx = r_eax;
    /* 0079364d: call 0x41571c */ r_esp -= 4; W32(r_esp, 0x793652u); f_0041571c();
    /* 00793652: mov dword ptr [ebp - 0xa8], 0 */ W32((u32)(r_ebp+0xffffff58u), 0x0u);
L_0079365c:; BB(0x0079365c);
    /* 0079365c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793663: mov eax, 0x97c860 */ r_eax = 0x97c860u;
    /* 00793668: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079366a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0079366d: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00793670: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00793673: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00793676: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0079367c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0079367f: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 00793685: mov dword ptr [ebp - 0x98], ebx */ W32((u32)(r_ebp+0xffffff68u), r_ebx);
    /* 0079368b: mov dword ptr [ebp - 0x94], esi */ W32((u32)(r_ebp+0xffffff6cu), r_esi);
    /* 00793691: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 00793697: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0079369d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 007936a0: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 007936a6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007936a9: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 007936af: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 007936b2: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 007936b5: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 007936b8: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 007936bb: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007936be: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 007936c1: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 007936c4: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 007936c7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007936ca: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 007936cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007936cf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 007936d2: je 0x7936f0 */ if (fZ) goto L_007936f0;
L_007936d4:; BB(0x007936d4);
    /* 007936d4: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007936d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007936d9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007936dc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007936de: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007936e1: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007936e3: mov dword ptr [ebp + edx - 0xa0], 0xffffffff */ W32((u32)(r_ebp+r_edx+0xffffff60u), 0xffffffffu);
    /* 007936ee: jb 0x7936d4 */ if (fC) goto L_007936d4;
L_007936f0:; BB(0x007936f0);
    /* 007936f0: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 007936f7: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007936fc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793701u); f_005caba4();
    /* 00793701: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793702: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00793705: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793707: je 0x793732 */ if (fZ) goto L_00793732;
L_00793709:; BB(0x00793709);
    /* 00793709: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00793710: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00793717: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0079371a: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 00793720: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00793722: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793723: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00793726: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x79372bu); f_00412f2c();
    /* 0079372b: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_00793732:; BB(0x00793732);
    /* 00793732: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793739: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00793740: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00793745: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x79374au); f_005caba4();
    /* 0079374a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079374b: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0079374e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793750: je 0x79377b */ if (fZ) goto L_0079377b;
L_00793752:; BB(0x00793752);
    /* 00793752: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 00793759: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00793760: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00793763: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 00793769: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079376b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079376c: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079376f: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x793774u); f_00412f2c();
    /* 00793774: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_0079377b:; BB(0x0079377b);
    /* 0079377b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793782: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 00793789: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079378e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793793u); f_005caba4();
    /* 00793793: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793794: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00793797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793799: je 0x7937c4 */ if (fZ) goto L_007937c4;
L_0079379b:; BB(0x0079379b);
    /* 0079379b: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 007937a2: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 007937a9: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 007937ac: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 007937b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007937b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007937b5: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007937b8: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x7937bdu); f_00412f2c();
    /* 007937bd: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_007937c4:; BB(0x007937c4);
    /* 007937c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007937cb: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 007937d2: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 007937d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7937dcu); f_005caba4();
    /* 007937dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007937dd: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 007937e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007937e2: je 0x79380a */ if (fZ) goto L_0079380a;
L_007937e4:; BB(0x007937e4);
    /* 007937e4: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 007937eb: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 007937f2: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 007937f5: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 007937f8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007937fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007937fb: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007937fe: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x793803u); f_00412f2c();
    /* 00793803: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_0079380a:; BB(0x0079380a);
    /* 0079380a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793811: mov dword ptr [ebp - 0x5c], 0x43970000 */ W32((u32)(r_ebp+0xffffffa4u), 0x43970000u);
    /* 00793818: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0079381d: mov dword ptr [ebp - 0x58], 0x41e00000 */ W32((u32)(r_ebp+0xffffffa8u), 0x41e00000u);
    /* 00793824: mov dword ptr [ebp - 0x54], 0x43570000 */ W32((u32)(r_ebp+0xffffffacu), 0x43570000u);
    /* 0079382b: mov dword ptr [ebp - 0x50], 0x43120000 */ W32((u32)(r_ebp+0xffffffb0u), 0x43120000u);
    /* 00793832: mov dword ptr [ebp - 0x4c], 0x43390000 */ W32((u32)(r_ebp+0xffffffb4u), 0x43390000u);
    /* 00793839: mov dword ptr [ebp - 0x48], 0x43460000 */ W32((u32)(r_ebp+0xffffffb8u), 0x43460000u);
    /* 00793840: mov dword ptr [ebp - 0x44], 0x431b0000 */ W32((u32)(r_ebp+0xffffffbcu), 0x431b0000u);
    /* 00793847: mov dword ptr [ebp - 0x40], 0x437a0000 */ W32((u32)(r_ebp+0xffffffc0u), 0x437a0000u);
    /* 0079384e: mov dword ptr [ebp - 0x3c], 0x42fa0000 */ W32((u32)(r_ebp+0xffffffc4u), 0x42fa0000u);
    /* 00793855: mov dword ptr [ebp - 0x38], 0x43970000 */ W32((u32)(r_ebp+0xffffffc8u), 0x43970000u);
    /* 0079385c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00793863: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793868u); f_005caba4();
    /* 00793868: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079386b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079386e: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00793871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793873: je 0x7939f4 */ if (fZ) goto L_007939f4;
L_00793879:; BB(0x00793879);
    /* 00793879: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00793880: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00793887: mov ecx, eax */ r_ecx = r_eax;
    /* 00793889: lea edx, [ebp - 0x54] */ r_edx = (u32)(r_ebp+0xffffffacu);
    /* 0079388c: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0079388f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00793891: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793892: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00793893: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00793896: call 0x412354 */ r_esp -= 4; W32(r_esp, 0x79389bu); f_00412354();
    /* 0079389b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_007938a2:; BB(0x007938a2);
    /* 007938a2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007938a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007938a8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007938ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007938b2: mov ecx, eax */ r_ecx = r_eax;
    /* 007938b4: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 007938b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007938b8: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x7938bdu); f_00412094();
    /* 007938bd: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7938c2u); f_00694c6c();
    /* 007938c2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007938c5: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 007938c8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007938cf: mov dword ptr [ecx + 0x200], eax */ W32((u32)(r_ecx+0x200u), r_eax);
    /* 007938d5: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 007938d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7938dcu); f_005caba4();
    /* 007938dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007938df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007938e2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007938e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007938e7: je 0x7939ea */ if (fZ) goto L_007939ea;
L_007938ed:; BB(0x007938ed);
    /* 007938ed: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007938f4: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 007938fb: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007938fe: mov ecx, eax */ r_ecx = r_eax;
    /* 00793900: call 0x40b72c */ r_esp -= 4; W32(r_esp, 0x793905u); f_0040b72c();
    /* 00793905: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0079390c:; BB(0x0079390c);
    /* 0079390c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079390f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00793912: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00793915: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079391c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079391e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00793920: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x793925u); f_00792fe8();
    /* 00793925: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793928: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079392b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079392c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079392e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 00793931: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x793936u); f_0040b7b4();
    /* 00793936: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00793938: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079393a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x79393fu); f_00792fe8();
    /* 0079393f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793942: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00793945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793946: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00793948: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 0079394b: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x793950u); f_0040b7b4();
    /* 00793950: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00793953: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 00793956: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793959: je 0x7939b4 */ if (fZ) goto L_007939b4;
L_0079395b:; BB(0x0079395b);
    /* 0079395b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079395e: jne 0x793980 */ if (!fZ) goto L_00793980;
L_00793960:; BB(0x00793960);
    /* 00793960: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00793963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793964: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00793967: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x79396cu); f_00412094();
    /* 0079396c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079396f: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00793972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793973: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00793976: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x79397bu); f_00412094();
    /* 0079397b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079397e: jmp 0x7939c3 */ goto L_007939c3;
L_00793980:; BB(0x00793980);
    /* 00793980: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793983: jne 0x7939c3 */ if (!fZ) goto L_007939c3;
L_00793985:; BB(0x00793985);
    /* 00793985: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00793988: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793989: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0079398c: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x793991u); f_00412094();
    /* 00793991: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00793994: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 00793997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793998: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0079399b: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x7939a0u); f_00412094();
    /* 007939a0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007939a3: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 007939a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007939a7: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 007939aa: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x7939afu); f_00412094();
    /* 007939af: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007939b2: jmp 0x7939c3 */ goto L_007939c3;
L_007939b4:; BB(0x007939b4);
    /* 007939b4: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 007939b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007939b8: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 007939bb: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x7939c0u); f_00412094();
    /* 007939c0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_007939c3:; BB(0x007939c3);
    /* 007939c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007939c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007939c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007939c8: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x7939cdu); f_004088b8();
    /* 007939cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007939d0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007939d3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007939d6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007939d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007939dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007939df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007939e6: mov esp, ebp */ r_esp = r_ebp;
    /* 007939e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007939e9: ret  */ FN_RET(0x00793458); r_esp += 4; return;
L_007939ea:; BB(0x007939ea);
    /* 007939ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007939ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007939ef: jmp 0x79390c */ goto L_0079390c;
L_007939f4:; BB(0x007939f4);
    /* 007939f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007939f6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007939f9: jmp 0x7938a2 */ goto L_007938a2;
}

void f_00793a00(void) /* sub_793A00 */
{
    FN_ENTER(0x00793a00);
    /* 00793a00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00793a01: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a05: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x793a0au); f_006bb450();
    /* 00793a0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793a0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793a0f: je 0x793a18 */ if (fZ) goto L_00793a18;
L_00793a11:; BB(0x00793a11);
    /* 00793a11: mov edi, 1 */ r_edi = 0x1u;
    /* 00793a16: jmp 0x793a31 */ goto L_00793a31;
L_00793a18:; BB(0x00793a18);
    /* 00793a18: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a1c: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x793a21u); f_006bb450();
    /* 00793a21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793a26: je 0x793a2f */ if (fZ) goto L_00793a2f;
L_00793a28:; BB(0x00793a28);
    /* 00793a28: mov edi, 1 */ r_edi = 0x1u;
    /* 00793a2d: jmp 0x793a31 */ goto L_00793a31;
L_00793a2f:; BB(0x00793a2f);
    /* 00793a2f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00793a31:; BB(0x00793a31);
    /* 00793a31: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a35: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x793a3au); f_006bb450();
    /* 00793a3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793a3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793a3f: je 0x793a48 */ if (fZ) goto L_00793a48;
L_00793a41:; BB(0x00793a41);
    /* 00793a41: mov eax, 1 */ r_eax = 0x1u;
    /* 00793a46: jmp 0x793a61 */ goto L_00793a61;
L_00793a48:; BB(0x00793a48);
    /* 00793a48: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a4c: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x793a51u); f_006bb450();
    /* 00793a51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793a56: je 0x793a5f */ if (fZ) goto L_00793a5f;
L_00793a58:; BB(0x00793a58);
    /* 00793a58: mov eax, 1 */ r_eax = 0x1u;
    /* 00793a5d: jmp 0x793a61 */ goto L_00793a61;
L_00793a5f:; BB(0x00793a5f);
    /* 00793a5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00793a61:; BB(0x00793a61);
    /* 00793a61: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a63: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a65: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00793a67: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x793a6cu); f_006bb450();
    /* 00793a6c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793a6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793a71: je 0x793a7a */ if (fZ) goto L_00793a7a;
L_00793a73:; BB(0x00793a73);
    /* 00793a73: mov eax, 1 */ r_eax = 0x1u;
    /* 00793a78: jmp 0x793a93 */ goto L_00793a93;
L_00793a7a:; BB(0x00793a7a);
    /* 00793a7a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a7c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00793a7e: call 0x6bb450 */ r_esp -= 4; W32(r_esp, 0x793a83u); f_006bb450();
    /* 00793a83: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793a86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793a88: je 0x793a91 */ if (fZ) goto L_00793a91;
L_00793a8a:; BB(0x00793a8a);
    /* 00793a8a: mov eax, 1 */ r_eax = 0x1u;
    /* 00793a8f: jmp 0x793a93 */ goto L_00793a93;
L_00793a91:; BB(0x00793a91);
    /* 00793a91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00793a93:; BB(0x00793a93);
    /* 00793a93: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00793a95: mov eax, edi */ r_eax = r_edi;
    /* 00793a97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00793a98: ret  */ FN_RET(0x00793a00); r_esp += 4; return;
}

void f_00793a9c(void) /* sub_793A9C */
{
    FN_ENTER(0x00793a9c);
    /* 00793a9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00793a9d: mov edi, ecx */ r_edi = r_ecx;
    /* 00793a9f: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x793aa4u); f_0081e1f4();
    /* 00793aa4: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00793aa7: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 00793aaa: cmp eax, dword ptr [0xa9cd68] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9cd68u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793ab0: je 0x793ad1 */ if (fZ) goto L_00793ad1;
L_00793ab2:; BB(0x00793ab2);
    /* 00793ab2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793ab6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00793ab8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x793abdu); f_00792fe8();
    /* 00793abd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793ac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793ac1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00793ac3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 00793ac6: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x793acbu); f_0040b7b4();
    /* 00793acb: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00793ace: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
L_00793ad1:; BB(0x00793ad1);
    /* 00793ad1: mov dword ptr [0xa9cd68], eax */ W32((u32)(0xa9cd68u), r_eax);
    /* 00793ad6: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 00793ad9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793adb: je 0x793aec */ if (fZ) goto L_00793aec;
L_00793add:; BB(0x00793add);
    /* 00793add: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793ae0: jne 0x793aec */ if (!fZ) goto L_00793aec;
L_00793ae2:; BB(0x00793ae2);
    /* 00793ae2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00793ae4: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x793ae9u); f_007a60dc();
    /* 00793ae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793aea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00793aeb: ret  */ FN_RET(0x00793a9c); r_esp += 4; return;
L_00793aec:; BB(0x00793aec);
    /* 00793aec: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x793af1u); f_00694c6c();
    /* 00793af1: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 00793af7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00793af9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00793afb: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00793afe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793b00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793b02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793b04: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00793b0b: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00793b0d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00793b0e: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x793b13u); f_007c0c6c();
    /* 00793b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793b15: je 0x793b2e */ if (fZ) goto L_00793b2e;
L_00793b17:; BB(0x00793b17);
    /* 00793b17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00793b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793b1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793b1c: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00793b21: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x793b26u); f_00814298();
    /* 00793b26: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00793b29: call 0x821580 */ r_esp -= 4; W32(r_esp, 0x793b2eu); f_00821580();
L_00793b2e:; BB(0x00793b2e);
    /* 00793b2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00793b2f: ret  */ FN_RET(0x00793a9c); r_esp += 4; return;
}

void f_00793b30(void) /* sub_793B30 */
{
    FN_ENTER(0x00793b30);
    /* 00793b30: mov dword ptr [0xa9cd5c], 0x3f800000 */ W32((u32)(0xa9cd5cu), 0x3f800000u);
    /* 00793b3a: mov dword ptr [0xa9cd60], 0x41000000 */ W32((u32)(0xa9cd60u), 0x41000000u);
    /* 00793b44: mov dword ptr [0xa9cd64], 0x3fc00000 */ W32((u32)(0xa9cd64u), 0x3fc00000u);
    /* 00793b4e: ret  */ FN_RET(0x00793b30); r_esp += 4; return;
}

void f_00793b50(void) /* sub_793B50 */
{
    FN_ENTER(0x00793b50);
    /* 00793b50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00793b51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00793b53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00793b55: call 0x793c44 */ r_esp -= 4; W32(r_esp, 0x793b5au); f_00793c44();
    /* 00793b5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00793b5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793b60: jne 0x793b66 */ if (!fZ) goto L_00793b66;
L_00793b62:; BB(0x00793b62);
    /* 00793b62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00793b63: ret 4 */ FN_RET(0x00793b50); r_esp += 8; return;
L_00793b66:; BB(0x00793b66);
    /* 00793b66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00793b67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x793b6cu); f_005c2f74();
    /* 00793b6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793b6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00793b6e: ret 4 */ FN_RET(0x00793b50); r_esp += 8; return;
}

void f_00793b74(void) /* sub_793B74 */
{
    FN_ENTER(0x00793b74);
    /* 00793b74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00793b75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00793b77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00793b79: call 0x793b98 */ r_esp -= 4; W32(r_esp, 0x793b7eu); f_00793b98();
    /* 00793b7e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00793b82: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793b84: jne 0x793b8a */ if (!fZ) goto L_00793b8a;
L_00793b86:; BB(0x00793b86);
    /* 00793b86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00793b87: ret 4 */ FN_RET(0x00793b74); r_esp += 8; return;
L_00793b8a:; BB(0x00793b8a);
    /* 00793b8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00793b8b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x793b90u); f_005c2f74();
    /* 00793b90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793b91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00793b92: ret 4 */ FN_RET(0x00793b74); r_esp += 8; return;
}

void f_00793b98(void) /* sub_793B98 */
{
    FN_ENTER(0x00793b98);
    /* 00793b98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793b99: mov ebp, esp */ r_ebp = r_esp;
    /* 00793b9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00793b9d: push 0x8f5198 */ { u32 v = 0x8f5198u; r_esp -= 4; W32(r_esp, v); }
    /* 00793ba2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793ba9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793bb0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793bb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793bb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00793bb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00793bbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00793bbf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00793bc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793bc5: mov dword ptr [ecx], 0xb45838 */ W32((u32)(r_ecx), 0xb45838u);
    /* 00793bcb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00793bd2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x793bd7u); f_008171e8();
    /* 00793bd7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00793bda: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793be1: mov esp, ebp */ r_esp = r_ebp;
    /* 00793be3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793be4: ret  */ FN_RET(0x00793b98); r_esp += 4; return;
}

void f_00793be8(void) /* sub_793BE8 */
{
    FN_ENTER(0x00793be8);
    /* 00793be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793be9: mov ebp, esp */ r_ebp = r_esp;
    /* 00793beb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00793bed: push 0x8f51b4 */ { u32 v = 0x8f51b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00793bf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793bf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793bf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793c00: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793c03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793c06: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00793c09: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00793c0c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00793c0f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00793c12: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00793c15: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00793c1c: call 0x793c44 */ r_esp -= 4; W32(r_esp, 0x793c21u); f_00793c44();
    /* 00793c21: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00793c24: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793c26: jne 0x793c38 */ if (!fZ) goto L_00793c38;
L_00793c28:; BB(0x00793c28);
    /* 00793c28: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00793c2b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793c32: mov esp, ebp */ r_esp = r_ebp;
    /* 00793c34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793c35: ret 4 */ FN_RET(0x00793be8); r_esp += 8; return;
L_00793c38:; BB(0x00793c38);
    /* 00793c38: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00793c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793c3c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x793c41u); f_005c2f74();
    /* 00793c41: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793c42: jmp 0x793c28 */ goto L_00793c28;
}

void f_00793c44(void) /* sub_793C44 */
{
    FN_ENTER(0x00793c44);
    /* 00793c44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793c45: mov ebp, esp */ r_ebp = r_esp;
    /* 00793c47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00793c49: push 0x8f51d0 */ { u32 v = 0x8f51d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00793c4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793c55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793c5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793c5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793c62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00793c65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00793c68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00793c6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00793c6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793c71: mov dword ptr [ecx], 0xb45828 */ W32((u32)(r_ecx), 0xb45828u);
    /* 00793c77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00793c7e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x793c83u); f_008171e8();
    /* 00793c83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00793c86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793c8d: mov esp, ebp */ r_esp = r_ebp;
    /* 00793c8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793c90: ret  */ FN_RET(0x00793c44); r_esp += 4; return;
}

void f_00793c94(void) /* sub_793C94 */
{
    FN_ENTER(0x00793c94);
    /* 00793c94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793c95: mov ebp, esp */ r_ebp = r_esp;
    /* 00793c97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00793c99: push 0x8f51ec */ { u32 v = 0x8f51ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00793c9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793ca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793ca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793cac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793caf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793cb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00793cb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00793cb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00793cbb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00793cbe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00793cc1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00793cc8: call 0x793c44 */ r_esp -= 4; W32(r_esp, 0x793ccdu); f_00793c44();
    /* 00793ccd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00793cd0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793cd2: jne 0x793ce4 */ if (!fZ) goto L_00793ce4;
L_00793cd4:; BB(0x00793cd4);
    /* 00793cd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00793cd7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793cde: mov esp, ebp */ r_esp = r_ebp;
    /* 00793ce0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793ce1: ret 4 */ FN_RET(0x00793c94); r_esp += 8; return;
L_00793ce4:; BB(0x00793ce4);
    /* 00793ce4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00793ce7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793ce8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x793cedu); f_005c2f74();
    /* 00793ced: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793cee: jmp 0x793cd4 */ goto L_00793cd4;
}

void f_00793cf0(void) /* sub_793CF0 */
{
    FN_ENTER(0x00793cf0);
    /* 00793cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793cf1: mov ebp, esp */ r_ebp = r_esp;
    /* 00793cf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00793cf5: push 0x8f522e */ { u32 v = 0x8f522eu; r_esp -= 4; W32(r_esp, v); }
    /* 00793cfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793d01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793d08: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793d0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793d0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00793d11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00793d14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00793d17: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00793d1a: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00793d1d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00793d1f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00793d22: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00793d25: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 00793d28: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00793d2b: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00793d2e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x793d33u); f_0083173c();
    /* 00793d33: fcomp dword ptr [0x97c904] */ fx_compare(ST(0), R_F32((u32)(0x97c904u))); FPOP();
    /* 00793d39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00793d3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00793d3c: je 0x793d48 */ if (fZ) goto L_00793d48;
L_00793d3e:; BB(0x00793d3e);
    /* 00793d3e: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 00793d41: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x793d46u); f_0082df08();
    /* 00793d46: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00793d48:; BB(0x00793d48);
    /* 00793d48: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00793d4b: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00793d4e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00793d51: mov dword ptr [0xa9d460], eax */ W32((u32)(0xa9d460u), r_eax);
    /* 00793d56: mov dword ptr [0xa9d464], edx */ W32((u32)(0xa9d464u), r_edx);
    /* 00793d5c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00793d63: mov dword ptr [0xa9d468], ecx */ W32((u32)(0xa9d468u), r_ecx);
    /* 00793d69: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00793d6b: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 00793d6e: mov dword ptr [0xa9d478], esi */ W32((u32)(0xa9d478u), r_esi);
    /* 00793d74: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 00793d77: mov dword ptr [0xa9d47c], edi */ W32((u32)(0xa9d47cu), r_edi);
    /* 00793d7d: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00793d80: mov dword ptr [0xa9d480], eax */ W32((u32)(0xa9d480u), r_eax);
    /* 00793d85: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00793d88: mov dword ptr [0xa9d488], eax */ W32((u32)(0xa9d488u), r_eax);
    /* 00793d8d: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00793d90: mov dword ptr [0xa9d48c], eax */ W32((u32)(0xa9d48cu), r_eax);
    /* 00793d95: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00793d98: mov dword ptr [0xa9d490], eax */ W32((u32)(0xa9d490u), r_eax);
    /* 00793d9d: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00793da0: mov dword ptr [0xa9d498], eax */ W32((u32)(0xa9d498u), r_eax);
    /* 00793da5: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00793da8: mov dword ptr [0xa9d49c], eax */ W32((u32)(0xa9d49cu), r_eax);
    /* 00793dad: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00793db0: mov dword ptr [0xa9d4a0], eax */ W32((u32)(0xa9d4a0u), r_eax);
    /* 00793db5: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00793db8: mov dword ptr [0xa9d46c], eax */ W32((u32)(0xa9d46cu), r_eax);
    /* 00793dbd: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00793dc0: mov dword ptr [0xa9d470], eax */ W32((u32)(0xa9d470u), r_eax);
    /* 00793dc5: mov ebx, dword ptr [ebx + 0x14] */ r_ebx = R32((u32)(r_ebx+0x14u));
    /* 00793dc8: mov dword ptr [0xa9d474], ebx */ W32((u32)(0xa9d474u), r_ebx);
    /* 00793dce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793dd3u); f_005caba4();
    /* 00793dd3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793dd4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00793dd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793dd9: je 0x793dfe */ if (fZ) goto L_00793dfe;
L_00793ddb:; BB(0x00793ddb);
    /* 00793ddb: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00793de2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793de9: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793def: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00793df2: call 0x793e58 */ r_esp -= 4; W32(r_esp, 0x793df7u); f_00793e58();
    /* 00793df7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00793dfe:; BB(0x00793dfe);
    /* 00793dfe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00793e05: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00793e0c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00793e0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x793e13u); f_005caba4();
    /* 00793e13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793e14: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00793e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793e19: je 0x793e3e */ if (fZ) goto L_00793e3e;
L_00793e1b:; BB(0x00793e1b);
    /* 00793e1b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00793e22: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00793e29: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793e2f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793e32: call 0x793f0c */ r_esp -= 4; W32(r_esp, 0x793e37u); f_00793f0c();
    /* 00793e37: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00793e3e:; BB(0x00793e3e);
    /* 00793e3e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00793e41: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00793e44: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00793e47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00793e4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793e51: mov esp, ebp */ r_esp = r_ebp;
    /* 00793e53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793e54: ret  */ FN_RET(0x00793cf0); r_esp += 4; return;
}

void f_00793e58(void) /* sub_793E58 */
{
    FN_ENTER(0x00793e58);
    /* 00793e58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793e59: mov ebp, esp */ r_ebp = r_esp;
    /* 00793e5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00793e5d: push 0x8f5248 */ { u32 v = 0x8f5248u; r_esp -= 4; W32(r_esp, v); }
    /* 00793e62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00793e68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793e69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00793e70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793e73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00793e76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00793e79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00793e7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00793e7f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793e82: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00793e85: call 0x793ed4 */ r_esp -= 4; W32(r_esp, 0x793e8au); f_00793ed4();
    /* 00793e8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00793e91: push 0xa9d46c */ { u32 v = 0xa9d46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00793e96: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793e99: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00793e9b: mov edx, 0xa9d460 */ r_edx = 0xa9d460u;
    /* 00793ea0: mov dword ptr [eax], 0xb45848 */ W32((u32)(r_eax), 0xb45848u);
    /* 00793ea6: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x793eabu); f_0082eab8();
    /* 00793eab: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793eae: call 0x795898 */ r_esp -= 4; W32(r_esp, 0x793eb3u); f_00795898();
    /* 00793eb3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793eb6: call 0x793ef0 */ r_esp -= 4; W32(r_esp, 0x793ebbu); f_00793ef0();
    /* 00793ebb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00793ebe: mov dword ptr [0xa9d4d8], eax */ W32((u32)(0xa9d4d8u), r_eax);
    /* 00793ec3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00793ec6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00793ecd: mov esp, ebp */ r_esp = r_ebp;
    /* 00793ecf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793ed0: ret 4 */ FN_RET(0x00793e58); r_esp += 8; return;
}

void f_00793ed4(void) /* sub_793ED4 */
{
    FN_ENTER(0x00793ed4);
    /* 00793ed4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793ed5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00793ed7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793edb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00793edd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x793ee2u); f_008193cc();
    /* 00793ee2: mov dword ptr [ebp], 0xb45828 */ W32((u32)(r_ebp), 0xb45828u);
    /* 00793ee9: mov eax, ebp */ r_eax = r_ebp;
    /* 00793eeb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793eec: ret 4 */ FN_RET(0x00793ed4); r_esp += 8; return;
}

void f_00793ef0(void) /* sub_793EF0 */
{
    FN_ENTER(0x00793ef0);
    /* 00793ef0: push dword ptr [0xa9d490] */ { u32 v = R32((u32)(0xa9d490u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793ef6: push dword ptr [0xa9d48c] */ { u32 v = R32((u32)(0xa9d48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00793efc: push dword ptr [0xa9d488] */ { u32 v = R32((u32)(0xa9d488u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793f02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00793f04: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x793f09u); f_00843a38();
    /* 00793f09: ret  */ FN_RET(0x00793ef0); r_esp += 4; return;
}

void f_00793f0c(void) /* sub_793F0C */
{
    FN_ENTER(0x00793f0c);
    /* 00793f0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00793f0d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00793f0f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00793f13: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00793f15: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x793f1au); f_008193cc();
    /* 00793f1a: mov dword ptr [ebp], 0xb45838 */ W32((u32)(r_ebp), 0xb45838u);
    /* 00793f21: mov eax, ebp */ r_eax = r_ebp;
    /* 00793f23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00793f24: ret 4 */ FN_RET(0x00793f0c); r_esp += 8; return;
}

void f_00793f28(void) /* sub_793F28 */
{
    FN_ENTER(0x00793f28);
    /* 00793f28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00793f2c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00793f30: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00793f34: mov dword ptr [0xa9d488], eax */ W32((u32)(0xa9d488u), r_eax);
    /* 00793f39: mov dword ptr [0xa9d48c], edx */ W32((u32)(0xa9d48cu), r_edx);
    /* 00793f3f: mov dword ptr [0xa9d490], ecx */ W32((u32)(0xa9d490u), r_ecx);
    /* 00793f45: ret  */ FN_RET(0x00793f28); r_esp += 4; return;
}

void f_00793f48(void) /* sub_793F48 */
{
    FN_ENTER(0x00793f48);
    /* 00793f48: mov eax, dword ptr [0xa9d4e4] */ r_eax = R32((u32)(0xa9d4e4u));
    /* 00793f4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00793f4f: je 0x793f62 */ if (fZ) goto L_00793f62;
L_00793f51:; BB(0x00793f51);
    /* 00793f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00793f52: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x793f57u); f_0082e960();
    /* 00793f57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00793f58: mov dword ptr [0xa9d4e4], 0 */ W32((u32)(0xa9d4e4u), 0x0u);
L_00793f62:; BB(0x00793f62);
    /* 00793f62: ret  */ FN_RET(0x00793f48); r_esp += 4; return;
}

void f_00793f64(void) /* sub_793F64 */
{
    FN_ENTER(0x00793f64);
    /* 00793f64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00793f65: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00793f68: mov eax, dword ptr [0xa9d4e4] */ r_eax = R32((u32)(0xa9d4e4u));
    /* 00793f6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793f6f: je 0x794021 */ if (fZ) goto L_00794021;
L_00793f75:; BB(0x00793f75);
    /* 00793f75: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x793f7au); f_00807ac0();
    /* 00793f7a: mov esi, eax */ r_esi = r_eax;
    /* 00793f7c: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x793f81u); f_0078b220();
    /* 00793f81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00793f83: je 0x793f88 */ if (fZ) goto L_00793f88;
L_00793f85:; BB(0x00793f85);
    /* 00793f85: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00793f88:; BB(0x00793f88);
    /* 00793f88: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00793f8a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00793f8c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00793f8f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793f91: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793f93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793f95: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793f97: add eax, dword ptr [0xa9d4e4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9d4e4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00793f9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00793f9f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00793fa2: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 00793fa5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00793fa8: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00793fab: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00793faf: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00793fb3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00793fb7: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00793fba: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00793fbe: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00793fc1: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00793fc5: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00793fc8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00793fcc: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00793fcf: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00793fd3: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00793fd6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00793fda: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00793fdd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00793fe1: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00793fe4: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00793fe8: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00793feb: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00793fef: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00793ff2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00793ff6: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00793ff9: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00793ffd: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00794000: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00794004: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00794007: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0079400a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0079400e: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00794012: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00794015: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794016: call 0x794034 */ r_esp -= 4; W32(r_esp, 0x79401bu); f_00794034();
    /* 0079401b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079401c: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079401f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794020: ret  */ FN_RET(0x00793f64); r_esp += 4; return;
L_00794021:; BB(0x00794021);
    /* 00794021: push 0x9ff420 */ { u32 v = 0x9ff420u; r_esp -= 4; W32(r_esp, v); }
    /* 00794026: call 0x794034 */ r_esp -= 4; W32(r_esp, 0x79402bu); f_00794034();
    /* 0079402b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079402c: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079402f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794030: ret  */ FN_RET(0x00793f64); r_esp += 4; return;
}

