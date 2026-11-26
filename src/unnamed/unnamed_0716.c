#include "protos.h"

void f_0071602c(void) /* sub_71602C */
{
    FN_ENTER(0x0071602c);
    /* 0071602c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00716030: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716032: je 0x71603a */ if (fZ) goto L_0071603a;
L_00716034:; BB(0x00716034);
    /* 00716034: mov eax, 1 */ r_eax = 0x1u;
    /* 00716039: ret  */ FN_RET(0x0071602c); r_esp += 4; return;
L_0071603a:; BB(0x0071603a);
    /* 0071603a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071603c: ret  */ FN_RET(0x0071602c); r_esp += 4; return;
}

void f_00716040(void) /* sub_716040 */
{
    FN_ENTER(0x00716040);
    /* 00716040: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00716044: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716046: je 0x71604e */ if (fZ) goto L_0071604e;
L_00716048:; BB(0x00716048);
    /* 00716048: mov eax, 1 */ r_eax = 0x1u;
    /* 0071604d: ret  */ FN_RET(0x00716040); r_esp += 4; return;
L_0071604e:; BB(0x0071604e);
    /* 0071604e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716050: ret  */ FN_RET(0x00716040); r_esp += 4; return;
}

void f_00716054(void) /* sub_716054 */
{
    FN_ENTER(0x00716054);
    /* 00716054: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 00716057: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716059: je 0x716061 */ if (fZ) goto L_00716061;
L_0071605b:; BB(0x0071605b);
    /* 0071605b: mov eax, 1 */ r_eax = 0x1u;
    /* 00716060: ret  */ FN_RET(0x00716054); r_esp += 4; return;
L_00716061:; BB(0x00716061);
    /* 00716061: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716063: ret  */ FN_RET(0x00716054); r_esp += 4; return;
}

void f_00716064(void) /* sub_716064 */
{
    FN_ENTER(0x00716064);
    /* 00716064: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00716068: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071606d: je 0x716075 */ if (fZ) goto L_00716075;
L_0071606f:; BB(0x0071606f);
    /* 0071606f: mov eax, 1 */ r_eax = 0x1u;
    /* 00716074: ret  */ FN_RET(0x00716064); r_esp += 4; return;
L_00716075:; BB(0x00716075);
    /* 00716075: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716077: ret  */ FN_RET(0x00716064); r_esp += 4; return;
}

void f_00716078(void) /* sub_716078 */
{
    FN_ENTER(0x00716078);
    /* 00716078: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071607c: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716081: je 0x716089 */ if (fZ) goto L_00716089;
L_00716083:; BB(0x00716083);
    /* 00716083: mov eax, 1 */ r_eax = 0x1u;
    /* 00716088: ret  */ FN_RET(0x00716078); r_esp += 4; return;
L_00716089:; BB(0x00716089);
    /* 00716089: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071608b: ret  */ FN_RET(0x00716078); r_esp += 4; return;
}

void f_0071608c(void) /* sub_71608C */
{
    FN_ENTER(0x0071608c);
    /* 0071608c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00716090: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716095: je 0x71609d */ if (fZ) goto L_0071609d;
L_00716097:; BB(0x00716097);
    /* 00716097: mov eax, 1 */ r_eax = 0x1u;
    /* 0071609c: ret  */ FN_RET(0x0071608c); r_esp += 4; return;
L_0071609d:; BB(0x0071609d);
    /* 0071609d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071609f: ret  */ FN_RET(0x0071608c); r_esp += 4; return;
}

void f_007160a0(void) /* sub_7160A0 */
{
    FN_ENTER(0x007160a0);
    /* 007160a0: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007160a4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007160a9: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007160ad: call 0x8055e4 */ r_esp -= 4; W32(r_esp, 0x7160b2u); f_008055e4();
    /* 007160b2: ret  */ FN_RET(0x007160a0); r_esp += 4; return;
}

void f_007160b4(void) /* sub_7160B4 */
{
    FN_ENTER(0x007160b4);
    /* 007160b4: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007160b8: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007160bd: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007160c1: call 0x8055c0 */ r_esp -= 4; W32(r_esp, 0x7160c6u); f_008055c0();
    /* 007160c6: ret  */ FN_RET(0x007160b4); r_esp += 4; return;
}

void f_007160c8(void) /* sub_7160C8 */
{
    FN_ENTER(0x007160c8);
    /* 007160c8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007160cc: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007160d1: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007160d5: ret  */ FN_RET(0x007160c8); r_esp += 4; return;
}

void f_007160d8(void) /* sub_7160D8 */
{
    FN_ENTER(0x007160d8);
    /* 007160d8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007160dc: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007160e1: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007160e5: ret  */ FN_RET(0x007160d8); r_esp += 4; return;
}

void f_007160e8(void) /* sub_7160E8 */
{
    FN_ENTER(0x007160e8);
    /* 007160e8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007160ec: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007160f1: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007160f5: ret  */ FN_RET(0x007160e8); r_esp += 4; return;
}

void f_007160f8(void) /* sub_7160F8 */
{
    FN_ENTER(0x007160f8);
    /* 007160f8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007160fc: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716101: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716105: ret  */ FN_RET(0x007160f8); r_esp += 4; return;
}

void f_00716108(void) /* sub_716108 */
{
    FN_ENTER(0x00716108);
    /* 00716108: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071610c: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716111: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716115: ret  */ FN_RET(0x00716108); r_esp += 4; return;
}

void f_00716118(void) /* sub_716118 */
{
    FN_ENTER(0x00716118);
    /* 00716118: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071611c: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716121: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716125: ret  */ FN_RET(0x00716118); r_esp += 4; return;
}

void f_00716128(void) /* sub_716128 */
{
    FN_ENTER(0x00716128);
    /* 00716128: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071612c: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716131: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716135: ret  */ FN_RET(0x00716128); r_esp += 4; return;
}

void f_00716138(void) /* sub_716138 */
{
    FN_ENTER(0x00716138);
    /* 00716138: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071613c: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716141: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716145: ret  */ FN_RET(0x00716138); r_esp += 4; return;
}

void f_00716148(void) /* sub_716148 */
{
    FN_ENTER(0x00716148);
    /* 00716148: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071614c: and eax, 0xffbf */ {  u32 a = r_eax; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716151: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716155: ret  */ FN_RET(0x00716148); r_esp += 4; return;
}

void f_00716158(void) /* sub_716158 */
{
    FN_ENTER(0x00716158);
    /* 00716158: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071615c: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716161: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716165: ret  */ FN_RET(0x00716158); r_esp += 4; return;
}

void f_00716168(void) /* sub_716168 */
{
    FN_ENTER(0x00716168);
    /* 00716168: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071616c: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716171: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716175: ret  */ FN_RET(0x00716168); r_esp += 4; return;
}

void f_00716178(void) /* sub_716178 */
{
    FN_ENTER(0x00716178);
    /* 00716178: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071617c: and eax, 0xff7f */ {  u32 a = r_eax; u32 b = 0xff7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716181: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716185: ret  */ FN_RET(0x00716178); r_esp += 4; return;
}

void f_00716188(void) /* sub_716188 */
{
    FN_ENTER(0x00716188);
    /* 00716188: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071618c: or eax, 0xffff0180 */ {  u32 a = r_eax; u32 b = 0xffff0180u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716191: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00716195: ret  */ FN_RET(0x00716188); r_esp += 4; return;
}

void f_00716198(void) /* sub_716198 */
{
    FN_ENTER(0x00716198);
    /* 00716198: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0071619c: and eax, 0xfe7f */ {  u32 a = r_eax; u32 b = 0xfe7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007161a1: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007161a5: ret  */ FN_RET(0x00716198); r_esp += 4; return;
}

void f_007161a8(void) /* sub_7161A8 */
{
    FN_ENTER(0x007161a8);
    /* 007161a8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007161ac: and eax, 0xfdff */ {  u32 a = r_eax; u32 b = 0xfdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007161b1: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 007161b5: ret  */ FN_RET(0x007161a8); r_esp += 4; return;
}

void f_007161b8(void) /* sub_7161B8 */
{
    FN_ENTER(0x007161b8);
    /* 007161b8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007161bd: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007161c2: je 0x7161f2 */ if (fZ) goto L_007161f2;
L_007161c4:; BB(0x007161c4);
    /* 007161c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007161c5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7161cau); f_007b4d18();
    /* 007161ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007161cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007161cd: je 0x7161fb */ if (fZ) goto L_007161fb;
L_007161cf:; BB(0x007161cf);
    /* 007161cf: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007161d3: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 007161d6: fsub dword ptr [eax + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x38u));
    /* 007161d9: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007161db: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 007161de: fsub dword ptr [eax + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x3cu));
    /* 007161e1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007161e3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007161e5: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 007161e8: fsub dword ptr [eax + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x40u));
    /* 007161eb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007161ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007161ef: ret 8 */ FN_RET(0x007161b8); r_esp += 12; return;
L_007161f2:; BB(0x007161f2);
    /* 007161f2: fld dword ptr [0x96fe94] */ FPUSH(R_F32((u32)(0x96fe94u)));
    /* 007161f8: ret 8 */ FN_RET(0x007161b8); r_esp += 12; return;
L_007161fb:; BB(0x007161fb);
    /* 007161fb: fld dword ptr [0x96fe94] */ FPUSH(R_F32((u32)(0x96fe94u)));
    /* 00716201: ret 8 */ FN_RET(0x007161b8); r_esp += 12; return;
}

void f_00716204(void) /* sub_716204 */
{
    FN_ENTER(0x00716204);
    /* 00716204: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716205: movzx esi, word ptr [esp + 8] */ r_esi = (u32)R16((u32)(r_esp+0x8u));
    /* 0071620a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071620b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x716210u); f_007b4d18();
    /* 00716210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716211: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716213: je 0x716225 */ if (fZ) goto L_00716225;
L_00716215:; BB(0x00716215);
    /* 00716215: movzx edx, word ptr [eax + 0x96] */ r_edx = (u32)R16((u32)(r_eax+0x96u));
    /* 0071621c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0071621f: jne 0x716225 */ if (!fZ) goto L_00716225;
L_00716221:; BB(0x00716221);
    /* 00716221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716223: jne 0x71623d */ if (!fZ) goto L_0071623d;
L_00716225:; BB(0x00716225);
    /* 00716225: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00716229: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0071622d: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00716233: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00716239: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071623a: ret 0xc */ FN_RET(0x00716204); r_esp += 16; return;
L_0071623d:; BB(0x0071623d);
    /* 0071623d: mov edx, dword ptr [eax + 0x2b4] */ r_edx = R32((u32)(r_eax+0x2b4u));
    /* 00716243: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716245: je 0x71629f */ if (fZ) goto L_0071629f;
L_00716247:; BB(0x00716247);
    /* 00716247: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0071624a: fmul dword ptr [0x96fe90] */ ST(0) = ST(0) * R_F32((u32)(0x96fe90u));
    /* 00716250: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00716254: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
L_00716256:; BB(0x00716256);
    /* 00716256: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0071625d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716260: je 0x716267 */ if (fZ) goto L_00716267;
L_00716262:; BB(0x00716262);
    /* 00716262: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00716265: jne 0x716291 */ if (!fZ) goto L_00716291;
L_00716267:; BB(0x00716267);
    /* 00716267: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716268: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71626du); f_0068d5a8();
    /* 0071626d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071626e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716270: je 0x716283 */ if (fZ) goto L_00716283;
L_00716272:; BB(0x00716272);
    /* 00716272: mov ecx, eax */ r_ecx = r_eax;
    /* 00716274: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x716279u); f_006936b4();
    /* 00716279: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0071627d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0071627f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00716280: ret 0xc */ FN_RET(0x00716204); r_esp += 16; return;
L_00716283:; BB(0x00716283);
    /* 00716283: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00716287: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0071628d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071628e: ret 0xc */ FN_RET(0x00716204); r_esp += 16; return;
L_00716291:; BB(0x00716291);
    /* 00716291: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00716295: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0071629b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071629c: ret 0xc */ FN_RET(0x00716204); r_esp += 16; return;
L_0071629f:; BB(0x0071629f);
    /* 0071629f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007162a3: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 007162a9: jmp 0x716256 */ goto L_00716256;
}

void f_007162ac(void) /* sub_7162AC */
{
    FN_ENTER(0x007162ac);
    /* 007162ac: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007162b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007162b4: je 0x7162cd */ if (fZ) goto L_007162cd;
L_007162b6:; BB(0x007162b6);
    /* 007162b6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007162ba: mov dword ptr [0xa98478], 0 */ W32((u32)(0xa98478u), 0x0u);
    /* 007162c4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007162c9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007162cd:; BB(0x007162cd);
    /* 007162cd: call 0x73b62c */ r_esp -= 4; W32(r_esp, 0x7162d2u); f_0073b62c();
    /* 007162d2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7162d7u); f_0061cdb0();
    /* 007162d7: call 0x7162e4 */ r_esp -= 4; W32(r_esp, 0x7162dcu); f_007162e4();
    /* 007162dc: call 0x71631c */ r_esp -= 4; W32(r_esp, 0x7162e1u); f_0071631c();
    /* 007162e1: ret  */ FN_RET(0x007162ac); r_esp += 4; return;
}

void f_007162e4(void) /* sub_7162E4 */
{
    FN_ENTER(0x007162e4);
    /* 007162e4: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 007162eb: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 007162f1: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007162f6: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 007162fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007162fe: je 0x71631b */ if (fZ) goto L_0071631b;
L_00716300:; BB(0x00716300);
    /* 00716300: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 00716303: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716305: je 0x71631b */ if (fZ) goto L_0071631b;
L_00716307:; BB(0x00716307);
    /* 00716307: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0071630b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716310: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00716314: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_0071631b:; BB(0x0071631b);
    /* 0071631b: ret  */ FN_RET(0x007162e4); r_esp += 4; return;
}

void f_0071631c(void) /* sub_71631C */
{
    FN_ENTER(0x0071631c);
    /* 0071631c: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00716323: mov ecx, dword ptr [0xa98478] */ r_ecx = R32((u32)(0xa98478u));
    /* 00716329: and eax, 0xffbf */ {  u32 a = r_eax; u32 b = 0xffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071632e: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 00716334: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716336: je 0x716353 */ if (fZ) goto L_00716353;
L_00716338:; BB(0x00716338);
    /* 00716338: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 0071633b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071633d: je 0x716353 */ if (fZ) goto L_00716353;
L_0071633f:; BB(0x0071633f);
    /* 0071633f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00716343: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716348: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0071634c: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
L_00716353:; BB(0x00716353);
    /* 00716353: ret  */ FN_RET(0x0071631c); r_esp += 4; return;
}

void f_00716354(void) /* sub_716354 */
{
    FN_ENTER(0x00716354);
    /* 00716354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00716355: mov ebp, esp */ r_ebp = r_esp;
    /* 00716357: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00716359: push 0x8f08b0 */ { u32 v = 0x8f08b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071635e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00716364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716365: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071636c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071636f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00716372: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00716375: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00716378: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0071637b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071637e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00716381: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x716386u); f_008193cc();
    /* 00716386: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071638d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00716390: mov dword ptr [ecx], 0xb3f8b0 */ W32((u32)(r_ecx), 0xb3f8b0u);
    /* 00716396: mov eax, dword ptr [0x9f1ff4] */ r_eax = R32((u32)(0x9f1ff4u));
    /* 0071639b: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007163a1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007163a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007163a6: je 0x7163b8 */ if (fZ) goto L_007163b8;
L_007163a8:; BB(0x007163a8);
    /* 007163a8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007163ab: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007163af: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007163b4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_007163b8:; BB(0x007163b8);
    /* 007163b8: mov dword ptr [0xa98478], ecx */ W32((u32)(0xa98478u), r_ecx);
    /* 007163be: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007163c3: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 007163c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007163c7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 007163ca: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 007163ce: mov word ptr [ecx + 0x1e], dx */ W16((u32)(r_ecx+0x1eu), (u16)r_edx);
    /* 007163d2: mov word ptr [ecx + 0x20], dx */ W16((u32)(r_ecx+0x20u), (u16)r_edx);
    /* 007163d6: mov word ptr [ecx + 0x22], dx */ W16((u32)(r_ecx+0x22u), (u16)r_edx);
    /* 007163da: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 007163dd: mov word ptr [ecx + 0x28], ax */ W16((u32)(r_ecx+0x28u), (u16)r_eax);
    /* 007163e1: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 007163e4: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 007163e7: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 007163ea: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 007163ed: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 007163f0: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 007163f3: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 007163f6: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 007163f9: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 007163fc: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 007163ff: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 00716402: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 00716405: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00716408: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 0071640b: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0071640e: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 00716411: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00716414: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00716417: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 0071641a: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 0071641d: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00716420: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 00716426: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 0071642c: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 00716432: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 00716438: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 0071643e: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 00716444: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 0071644a: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 00716450: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x716455u); f_005caba4();
    /* 00716455: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00716458: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071645b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0071645e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716460: je 0x716601 */ if (fZ) goto L_00716601;
L_00716466:; BB(0x00716466);
    /* 00716466: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0071646d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00716474: mov ecx, eax */ r_ecx = r_eax;
    /* 00716476: call 0x712dd8 */ r_esp -= 4; W32(r_esp, 0x71647bu); f_00712dd8();
    /* 0071647b: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00716482:; BB(0x00716482);
    /* 00716482: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00716485: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716488: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0071648b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00716492: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00716499: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0071649b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7164a0u); f_005caba4();
    /* 007164a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007164a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007164a6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 007164a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007164ab: je 0x7165f7 */ if (fZ) goto L_007165f7;
L_007164b1:; BB(0x007164b1);
    /* 007164b1: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 007164b8: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007164bf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007164c2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007164c5: add eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007164ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007164cb: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 007164d1: call 0x713540 */ r_esp -= 4; W32(r_esp, 0x7164d6u); f_00713540();
    /* 007164d6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_007164dd:; BB(0x007164dd);
    /* 007164dd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007164e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007164e3: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007164e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007164ed: mov edx, eax */ r_edx = r_eax;
    /* 007164ef: movzx eax, word ptr [edx + 0x1e] */ r_eax = (u32)R16((u32)(r_edx+0x1eu));
    /* 007164f3: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 007164fa: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007164ff: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00716501: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 00716505: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71650au); f_005caba4();
    /* 0071650a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071650d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00716510: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00716513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716515: je 0x7165ed */ if (fZ) goto L_007165ed;
L_0071651b:; BB(0x0071651b);
    /* 0071651b: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00716522: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00716529: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071652f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00716532: mov ecx, eax */ r_ecx = r_eax;
    /* 00716534: call 0x71a3d0 */ r_esp -= 4; W32(r_esp, 0x716539u); f_0071a3d0();
    /* 00716539: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00716540:; BB(0x00716540);
    /* 00716540: mov ecx, dword ptr [0xa9c4f4] */ r_ecx = R32((u32)(0xa9c4f4u));
    /* 00716546: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00716549: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071654c: mov dword ptr [edx + ecx*4 + 0x54], eax */ W32((u32)(r_edx+r_ecx*4+0x54u), r_eax);
    /* 00716550: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00716557: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00716559:; BB(0x00716559);
    /* 00716559: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x71655eu); f_0080a640();
    /* 0071655e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716560: jne 0x716581 */ if (!fZ) goto L_00716581;
L_00716562:; BB(0x00716562);
    /* 00716562: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00716563: call 0x73ea0c */ r_esp -= 4; W32(r_esp, 0x716568u); f_0073ea0c();
    /* 00716568: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716569: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071656c: mov dword ptr [edx + ebx*4 + 0x84], eax */ W32((u32)(r_edx+r_ebx*4+0x84u), r_eax);
    /* 00716573: movzx ecx, word ptr [eax + 8] */ r_ecx = (u32)R16((u32)(r_eax+0x8u));
    /* 00716577: or ecx, 0xffff0004 */ {  u32 a = r_ecx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0071657d: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
L_00716581:; BB(0x00716581);
    /* 00716581: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00716584: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716587: jl 0x716559 */ if ((fS!=fO)) goto L_00716559;
L_00716589:; BB(0x00716589);
    /* 00716589: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 0071658e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716591: je 0x7165e6 */ if (fZ) goto L_007165e6;
L_00716593:; BB(0x00716593);
    /* 00716593: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00716599: mov dword ptr [ebp - 0x34], 0x41000000 */ W32((u32)(r_ebp+0xffffffccu), 0x41000000u);
    /* 007165a0: mov dword ptr [ebp - 0x30], 0x43be0000 */ W32((u32)(r_ebp+0xffffffd0u), 0x43be0000u);
    /* 007165a7: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 007165aa: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 007165ad: mov dword ptr [ebp - 0x28], 0x42bc0000 */ W32((u32)(r_ebp+0xffffffd8u), 0x42bc0000u);
    /* 007165b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007165b5: mov dword ptr [ebp - 0x2c], 0x441c0000 */ W32((u32)(r_ebp+0xffffffd4u), 0x441c0000u);
    /* 007165bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007165bd: call 0x721558 */ r_esp -= 4; W32(r_esp, 0x7165c2u); f_00721558();
    /* 007165c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007165c5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007165c8: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007165cb: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007165ce: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007165d1: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 007165d4: mov eax, edx */ r_eax = r_edx;
    /* 007165d6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007165d9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007165e0: mov esp, ebp */ r_esp = r_ebp;
    /* 007165e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007165e3: ret 4 */ FN_RET(0x00716354); r_esp += 8; return;
L_007165e6:; BB(0x007165e6);
    /* 007165e6: call 0x71660c */ r_esp -= 4; W32(r_esp, 0x7165ebu); f_0071660c();
    /* 007165eb: jmp 0x716593 */ goto L_00716593;
L_007165ed:; BB(0x007165ed);
    /* 007165ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007165ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007165f2: jmp 0x716540 */ goto L_00716540;
L_007165f7:; BB(0x007165f7);
    /* 007165f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007165f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007165fc: jmp 0x7164dd */ goto L_007164dd;
L_00716601:; BB(0x00716601);
    /* 00716601: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00716603: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00716606: jmp 0x716482 */ goto L_00716482;
}

void f_0071660c(void) /* sub_71660C */
{
    FN_ENTER(0x0071660c);
    /* 0071660c: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00716611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716613: je 0x71661c */ if (fZ) goto L_0071661c;
L_00716615:; BB(0x00716615);
    /* 00716615: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 00716618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071661a: je 0x71661d */ if (fZ) goto L_0071661d;
L_0071661c:; BB(0x0071661c);
    /* 0071661c: ret  */ FN_RET(0x0071660c); r_esp += 4; return;
L_0071661d:; BB(0x0071661d);
    /* 0071661d: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 00716622: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x716627u); f_0079317c();
    /* 00716627: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716628: call 0x710b3c */ r_esp -= 4; W32(r_esp, 0x71662du); f_00710b3c();
    /* 0071662d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00716630: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716636: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00716639: ret  */ FN_RET(0x0071660c); r_esp += 4; return;
}

void f_0071663c(void) /* sub_71663C */
{
    FN_ENTER(0x0071663c);
    /* 0071663c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071663d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071663f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716641: call 0x716654 */ r_esp -= 4; W32(r_esp, 0x716646u); f_00716654();
    /* 00716646: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716648: call 0x716858 */ r_esp -= 4; W32(r_esp, 0x71664du); f_00716858();
    /* 0071664d: call 0x825a5c */ r_esp -= 4; W32(r_esp, 0x716652u); f_00825a5c();
    /* 00716652: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716653: ret  */ FN_RET(0x0071663c); r_esp += 4; return;
}

void f_00716654(void) /* sub_716654 */
{
    FN_ENTER(0x00716654);
    /* 00716654: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716655: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00716658: mov edi, ecx */ r_edi = r_ecx;
    /* 0071665a: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071665e: movsx ecx, word ptr [edi + 0x1e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1eu));
    /* 00716662: cmp cx, word ptr [edx*2 + 0x96fe20] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx*2+0x96fe20u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0071666a: jne 0x71680e */ if (!fZ) goto L_0071680e;
L_00716670:; BB(0x00716670);
    /* 00716670: mov eax, dword ptr [edi + edx*4 + 0x84] */ r_eax = R32((u32)(r_edi+r_edx*4+0x84u));
    /* 00716677: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716679: je 0x716807 */ if (fZ) goto L_00716807;
L_0071667f:; BB(0x0071667f);
    /* 0071667f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00716684: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00716688: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071668e: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00716692: call 0x73ec60 */ r_esp -= 4; W32(r_esp, 0x716697u); f_0073ec60();
    /* 00716697: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716698: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071669c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007166a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007166a2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 007166a6: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007166a9: mov ebp, eax */ r_ebp = r_eax;
L_007166ab:; BB(0x007166ab);
    /* 007166ab: mov esi, dword ptr [edi + ebp*4 + 0x84] */ r_esi = R32((u32)(r_edi+r_ebp*4+0x84u));
    /* 007166b2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007166b5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007166b7: je 0x7167d9 */ if (fZ) goto L_007167d9;
L_007166bd:; BB(0x007166bd);
    /* 007166bd: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 007166c1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007166c4: jne 0x7167d9 */ if (!fZ) goto L_007167d9;
L_007166ca:; BB(0x007166ca);
    /* 007166ca: movsx edx, word ptr [esi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 007166ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007166cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7166d4u); f_0068d5a8();
    /* 007166d4: mov ebx, eax */ r_ebx = r_eax;
    /* 007166d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007166d9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007166db: je 0x716792 */ if (fZ) goto L_00716792;
L_007166e1:; BB(0x007166e1);
    /* 007166e1: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007166e6: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007166ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007166ee: je 0x71684e */ if (fZ) goto L_0071684e;
L_007166f4:; BB(0x007166f4);
    /* 007166f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007166f6: jl 0x716847 */ if ((fS!=fO)) goto L_00716847;
L_007166fc:; BB(0x007166fc);
    /* 007166fc: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007166ff: jl 0x716705 */ if ((fS!=fO)) goto L_00716705;
L_00716701:; BB(0x00716701);
    /* 00716701: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716703: jmp 0x716709 */ goto L_00716709;
L_00716705:; BB(0x00716705);
    /* 00716705: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716709:; BB(0x00716709);
    /* 00716709: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071670b: je 0x716840 */ if (fZ) goto L_00716840;
L_00716711:; BB(0x00716711);
    /* 00716711: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x716716u); f_0071b354();
L_00716716:; BB(0x00716716);
    /* 00716716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716718: jne 0x716792 */ if (!fZ) goto L_00716792;
L_0071671a:; BB(0x0071671a);
    /* 0071671a: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0071671f: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716727: je 0x716839 */ if (fZ) goto L_00716839;
L_0071672d:; BB(0x0071672d);
    /* 0071672d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0071672f: jl 0x716832 */ if ((fS!=fO)) goto L_00716832;
L_00716735:; BB(0x00716735);
    /* 00716735: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716738: jl 0x71673e */ if ((fS!=fO)) goto L_0071673e;
L_0071673a:; BB(0x0071673a);
    /* 0071673a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071673c: jmp 0x716742 */ goto L_00716742;
L_0071673e:; BB(0x0071673e);
    /* 0071673e: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716742:; BB(0x00716742);
    /* 00716742: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716744: je 0x71682b */ if (fZ) goto L_0071682b;
L_0071674a:; BB(0x0071674a);
    /* 0071674a: call 0x71602c */ r_esp -= 4; W32(r_esp, 0x71674fu); f_0071602c();
L_0071674f:; BB(0x0071674f);
    /* 0071674f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716751: jne 0x716792 */ if (!fZ) goto L_00716792;
L_00716753:; BB(0x00716753);
    /* 00716753: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00716757: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071675a: jne 0x716792 */ if (!fZ) goto L_00716792;
L_0071675c:; BB(0x0071675c);
    /* 0071675c: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00716763: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716766: jne 0x71676f */ if (!fZ) goto L_0071676f;
L_00716768:; BB(0x00716768);
    /* 00716768: mov edx, 1 */ r_edx = 0x1u;
    /* 0071676d: jmp 0x716771 */ goto L_00716771;
L_0071676f:; BB(0x0071676f);
    /* 0071676f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716771:; BB(0x00716771);
    /* 00716771: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716773: jne 0x716792 */ if (!fZ) goto L_00716792;
L_00716775:; BB(0x00716775);
    /* 00716775: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716778: jne 0x716781 */ if (!fZ) goto L_00716781;
L_0071677a:; BB(0x0071677a);
    /* 0071677a: mov edx, 1 */ r_edx = 0x1u;
    /* 0071677f: jmp 0x716783 */ goto L_00716783;
L_00716781:; BB(0x00716781);
    /* 00716781: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716783:; BB(0x00716783);
    /* 00716783: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716785: je 0x7167aa */ if (fZ) goto L_007167aa;
L_00716787:; BB(0x00716787);
    /* 00716787: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716789: call 0x69052c */ r_esp -= 4; W32(r_esp, 0x71678eu); f_0069052c();
    /* 0071678e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716790: je 0x71679b */ if (fZ) goto L_0071679b;
L_00716792:; BB(0x00716792);
    /* 00716792: mov ecx, esi */ r_ecx = r_esi;
    /* 00716794: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x716799u); f_007127c8();
    /* 00716799: jmp 0x7167d9 */ goto L_007167d9;
L_0071679b:; BB(0x0071679b);
    /* 0071679b: movzx edx, word ptr [ebx + 0x750] */ r_edx = (u32)R16((u32)(r_ebx+0x750u));
    /* 007167a2: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007167a8: je 0x716792 */ if (fZ) goto L_00716792;
L_007167aa:; BB(0x007167aa);
    /* 007167aa: mov ecx, esi */ r_ecx = r_esi;
    /* 007167ac: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x7167b1u); f_00712714();
    /* 007167b1: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007167b5: fcomp dword ptr [esi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x34u))); FPOP();
    /* 007167b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007167ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007167bb: je 0x7167cb */ if (fZ) goto L_007167cb;
L_007167bd:; BB(0x007167bd);
    /* 007167bd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007167c1: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 007167c4: mov dword ptr [esi + 0x50], 0xf */ W32((u32)(r_esi+0x50u), 0xfu);
L_007167cb:; BB(0x007167cb);
    /* 007167cb: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007167cf: fadd dword ptr [0x96fe7c] */ ST(0) = ST(0) + R_F32((u32)(0x96fe7cu));
    /* 007167d5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_007167d9:; BB(0x007167d9);
    /* 007167d9: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007167dc: jb 0x7166ab */ if (fC) goto L_007166ab;
L_007167e2:; BB(0x007167e2);
    /* 007167e2: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007167e6: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 007167ea: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007167ed: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 007167f1: mov edx, dword ptr [edi + eax*4 + 0x84] */ r_edx = R32((u32)(r_edi+r_eax*4+0x84u));
    /* 007167f8: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
    /* 007167ff: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00716803: movsx ecx, word ptr [edi + 0x1e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1eu));
L_00716807:; BB(0x00716807);
    /* 00716807: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071680a: mov word ptr [edi + 0x20], dx */ W16((u32)(r_edi+0x20u), (u16)r_edx);
L_0071680e:; BB(0x0071680e);
    /* 0071680e: cmp ecx, 0x7530 */ {  u32 a = r_ecx; u32 b = 0x7530u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716814: jle 0x71681f */ if ((fZ||fS!=fO)) goto L_0071681f;
L_00716816:; BB(0x00716816);
    /* 00716816: add ecx, 0xffffd8f0 */ {  u32 a = r_ecx; u32 b = 0xffffd8f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0071681c: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
L_0071681f:; BB(0x0071681f);
    /* 0071681f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00716822: mov word ptr [edi + 0x1e], cx */ W16((u32)(r_edi+0x1eu), (u16)r_ecx);
    /* 00716826: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00716829: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071682a: ret  */ FN_RET(0x00716654); r_esp += 4; return;
L_0071682b:; BB(0x0071682b);
    /* 0071682b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071682d: jmp 0x71674f */ goto L_0071674f;
L_00716832:; BB(0x00716832);
    /* 00716832: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716834: jmp 0x716742 */ goto L_00716742;
L_00716839:; BB(0x00716839);
    /* 00716839: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071683b: jmp 0x716742 */ goto L_00716742;
L_00716840:; BB(0x00716840);
    /* 00716840: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00716842: jmp 0x716716 */ goto L_00716716;
L_00716847:; BB(0x00716847);
    /* 00716847: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716849: jmp 0x716709 */ goto L_00716709;
L_0071684e:; BB(0x0071684e);
    /* 0071684e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716850: jmp 0x716709 */ goto L_00716709;
}

void f_00716858(void) /* sub_716858 */
{
    FN_ENTER(0x00716858);
    /* 00716858: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716859: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071685a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071685b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071685c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071685d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071685f: push 0xbc */ { u32 v = 0xbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00716864: call 0x73ec60 */ r_esp -= 4; W32(r_esp, 0x716869u); f_0073ec60();
    /* 00716869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071686a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071686d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071686f: mov esi, eax */ r_esi = r_eax;
L_00716871:; BB(0x00716871);
    /* 00716871: mov edi, dword ptr [ebx + esi*4 + 0x84] */ r_edi = R32((u32)(r_ebx+r_esi*4+0x84u));
    /* 00716878: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0071687b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071687d: je 0x71699b */ if (fZ) goto L_0071699b;
L_00716883:; BB(0x00716883);
    /* 00716883: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 00716887: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071688a: jne 0x71699b */ if (!fZ) goto L_0071699b;
L_00716890:; BB(0x00716890);
    /* 00716890: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00716894: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00716895: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71689au); f_0068d5a8();
    /* 0071689a: mov ebp, eax */ r_ebp = r_eax;
    /* 0071689c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071689f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007168a1: je 0x716958 */ if (fZ) goto L_00716958;
L_007168a7:; BB(0x007168a7);
    /* 007168a7: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007168ac: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007168b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007168b4: je 0x716a59 */ if (fZ) goto L_00716a59;
L_007168ba:; BB(0x007168ba);
    /* 007168ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007168bc: jl 0x716a52 */ if ((fS!=fO)) goto L_00716a52;
L_007168c2:; BB(0x007168c2);
    /* 007168c2: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007168c5: jl 0x7168cb */ if ((fS!=fO)) goto L_007168cb;
L_007168c7:; BB(0x007168c7);
    /* 007168c7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007168c9: jmp 0x7168cf */ goto L_007168cf;
L_007168cb:; BB(0x007168cb);
    /* 007168cb: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_007168cf:; BB(0x007168cf);
    /* 007168cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007168d1: je 0x716a4b */ if (fZ) goto L_00716a4b;
L_007168d7:; BB(0x007168d7);
    /* 007168d7: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x7168dcu); f_0071b354();
L_007168dc:; BB(0x007168dc);
    /* 007168dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007168de: jne 0x716958 */ if (!fZ) goto L_00716958;
L_007168e0:; BB(0x007168e0);
    /* 007168e0: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007168e5: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007168eb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007168ed: je 0x716a44 */ if (fZ) goto L_00716a44;
L_007168f3:; BB(0x007168f3);
    /* 007168f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007168f5: jl 0x716a3d */ if ((fS!=fO)) goto L_00716a3d;
L_007168fb:; BB(0x007168fb);
    /* 007168fb: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007168fe: jl 0x716904 */ if ((fS!=fO)) goto L_00716904;
L_00716900:; BB(0x00716900);
    /* 00716900: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716902: jmp 0x716908 */ goto L_00716908;
L_00716904:; BB(0x00716904);
    /* 00716904: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716908:; BB(0x00716908);
    /* 00716908: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071690a: je 0x716a36 */ if (fZ) goto L_00716a36;
L_00716910:; BB(0x00716910);
    /* 00716910: call 0x71602c */ r_esp -= 4; W32(r_esp, 0x716915u); f_0071602c();
L_00716915:; BB(0x00716915);
    /* 00716915: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716917: jne 0x716958 */ if (!fZ) goto L_00716958;
L_00716919:; BB(0x00716919);
    /* 00716919: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0071691d: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716920: jne 0x716958 */ if (!fZ) goto L_00716958;
L_00716922:; BB(0x00716922);
    /* 00716922: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00716929: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071692c: jne 0x716935 */ if (!fZ) goto L_00716935;
L_0071692e:; BB(0x0071692e);
    /* 0071692e: mov edx, 1 */ r_edx = 0x1u;
    /* 00716933: jmp 0x716937 */ goto L_00716937;
L_00716935:; BB(0x00716935);
    /* 00716935: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716937:; BB(0x00716937);
    /* 00716937: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716939: jne 0x716958 */ if (!fZ) goto L_00716958;
L_0071693b:; BB(0x0071693b);
    /* 0071693b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071693e: jne 0x716947 */ if (!fZ) goto L_00716947;
L_00716940:; BB(0x00716940);
    /* 00716940: mov edx, 1 */ r_edx = 0x1u;
    /* 00716945: jmp 0x716949 */ goto L_00716949;
L_00716947:; BB(0x00716947);
    /* 00716947: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716949:; BB(0x00716949);
    /* 00716949: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071694b: je 0x716970 */ if (fZ) goto L_00716970;
L_0071694d:; BB(0x0071694d);
    /* 0071694d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071694f: call 0x69052c */ r_esp -= 4; W32(r_esp, 0x716954u); f_0069052c();
    /* 00716954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716956: je 0x716961 */ if (fZ) goto L_00716961;
L_00716958:; BB(0x00716958);
    /* 00716958: mov ecx, edi */ r_ecx = r_edi;
    /* 0071695a: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x71695fu); f_007127c8();
    /* 0071695f: jmp 0x71699b */ goto L_0071699b;
L_00716961:; BB(0x00716961);
    /* 00716961: movzx edx, word ptr [ebp + 0x750] */ r_edx = (u32)R16((u32)(r_ebp+0x750u));
    /* 00716968: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071696e: je 0x716958 */ if (fZ) goto L_00716958;
L_00716970:; BB(0x00716970);
    /* 00716970: mov ecx, edi */ r_ecx = r_edi;
    /* 00716972: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x716977u); f_00712714();
    /* 00716977: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071697a: fcomp dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); FPOP();
    /* 0071697d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071697f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00716980: je 0x71698f */ if (fZ) goto L_0071698f;
L_00716982:; BB(0x00716982);
    /* 00716982: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00716985: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 00716988: mov dword ptr [edi + 0x50], 0xf */ W32((u32)(r_edi+0x50u), 0xfu);
L_0071698f:; BB(0x0071698f);
    /* 0071698f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00716992: fadd dword ptr [0x96fe78] */ ST(0) = ST(0) + R_F32((u32)(0x96fe78u));
    /* 00716998: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071699b:; BB(0x0071699b);
    /* 0071699b: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0071699e: jb 0x716871 */ if (fC) goto L_00716871;
L_007169a4:; BB(0x007169a4);
    /* 007169a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007169a6: call 0x716a60 */ r_esp -= 4; W32(r_esp, 0x7169abu); f_00716a60();
    /* 007169ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007169ad: call 0x716c3c */ r_esp -= 4; W32(r_esp, 0x7169b2u); f_00716c3c();
    /* 007169b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007169b4: call 0x716d68 */ r_esp -= 4; W32(r_esp, 0x7169b9u); f_00716d68();
    /* 007169b9: lea edx, [ebx + 0x90] */ r_edx = (u32)(r_ebx+0x90u);
    /* 007169bf: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 007169c5: mov esi, eax */ r_esi = r_eax;
    /* 007169c7: mov edi, edx */ r_edi = r_edx;
L_007169c9:; BB(0x007169c9);
    /* 007169c9: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 007169cb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007169cd: je 0x7169f8 */ if (fZ) goto L_007169f8;
L_007169cf:; BB(0x007169cf);
    /* 007169cf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007169d1: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x7169d6u); f_008173b4();
    /* 007169d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007169d8: jne 0x7169f8 */ if (!fZ) goto L_007169f8;
L_007169da:; BB(0x007169da);
    /* 007169da: movzx ecx, word ptr [ebp + 0x8a] */ r_ecx = (u32)R16((u32)(r_ebp+0x8au));
    /* 007169e1: movzx ebp, word ptr [ebx + 0x28] */ r_ebp = (u32)R16((u32)(r_ebx+0x28u));
    /* 007169e5: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007169e7: jne 0x7169f2 */ if (!fZ) goto L_007169f2;
L_007169e9:; BB(0x007169e9);
    /* 007169e9: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 007169ee: mov word ptr [ebx + 0x28], cx */ W16((u32)(r_ebx+0x28u), (u16)r_ecx);
L_007169f2:; BB(0x007169f2);
    /* 007169f2: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_007169f8:; BB(0x007169f8);
    /* 007169f8: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007169fb: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007169fd: ja 0x7169c9 */ if ((!fC&&!fZ)) goto L_007169c9;
L_007169ff:; BB(0x007169ff);
    /* 007169ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a01: call 0x716e60 */ r_esp -= 4; W32(r_esp, 0x716a06u); f_00716e60();
    /* 00716a06: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a08: call 0x716f54 */ r_esp -= 4; W32(r_esp, 0x716a0du); f_00716f54();
    /* 00716a0d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a0f: call 0x716f94 */ r_esp -= 4; W32(r_esp, 0x716a14u); f_00716f94();
    /* 00716a14: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a16: call 0x716fc4 */ r_esp -= 4; W32(r_esp, 0x716a1bu); f_00716fc4();
    /* 00716a1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a1d: call 0x717118 */ r_esp -= 4; W32(r_esp, 0x716a22u); f_00717118();
    /* 00716a22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a24: call 0x717754 */ r_esp -= 4; W32(r_esp, 0x716a29u); f_00717754();
    /* 00716a29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716a2b: call 0x717920 */ r_esp -= 4; W32(r_esp, 0x716a30u); f_00717920();
    /* 00716a30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716a31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716a32: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716a33: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00716a34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00716a35: ret  */ FN_RET(0x00716858); r_esp += 4; return;
L_00716a36:; BB(0x00716a36);
    /* 00716a36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00716a38: jmp 0x716915 */ goto L_00716915;
L_00716a3d:; BB(0x00716a3d);
    /* 00716a3d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716a3f: jmp 0x716908 */ goto L_00716908;
L_00716a44:; BB(0x00716a44);
    /* 00716a44: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716a46: jmp 0x716908 */ goto L_00716908;
L_00716a4b:; BB(0x00716a4b);
    /* 00716a4b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00716a4d: jmp 0x7168dc */ goto L_007168dc;
L_00716a52:; BB(0x00716a52);
    /* 00716a52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716a54: jmp 0x7168cf */ goto L_007168cf;
L_00716a59:; BB(0x00716a59);
    /* 00716a59: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716a5b: jmp 0x7168cf */ goto L_007168cf;
}

void f_00716a60(void) /* sub_716A60 */
{
    FN_ENTER(0x00716a60);
    /* 00716a60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716a61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00716a62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716a63: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00716a65: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00716a68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716a6a: je 0x716b8f */ if (fZ) goto L_00716b8f;
L_00716a70:; BB(0x00716a70);
    /* 00716a70: movsx eax, word ptr [ebp + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x22u));
    /* 00716a74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00716a76: jle 0x716a7f */ if ((fZ||fS!=fO)) goto L_00716a7f;
L_00716a78:; BB(0x00716a78);
    /* 00716a78: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00716a7b: mov word ptr [ebp + 0x22], ax */ W16((u32)(r_ebp+0x22u), (u16)r_eax);
L_00716a7f:; BB(0x00716a7f);
    /* 00716a7f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00716a85: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x716a8au); f_0068d5a8();
    /* 00716a8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716a8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716a8d: je 0x716b93 */ if (fZ) goto L_00716b93;
L_00716a93:; BB(0x00716a93);
    /* 00716a93: call 0x69b6a8 */ r_esp -= 4; W32(r_esp, 0x716a98u); f_0069b6a8();
    /* 00716a98: mov edi, eax */ r_edi = r_eax;
    /* 00716a9a: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716aa0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716aa2: je 0x716aad */ if (fZ) goto L_00716aad;
L_00716aa4:; BB(0x00716aa4);
    /* 00716aa4: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00716aa8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716aab: jne 0x716ae9 */ if (!fZ) goto L_00716ae9;
L_00716aad:; BB(0x00716aad);
    /* 00716aad: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716ab2: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x716ab7u); f_00716ba4();
    /* 00716ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716ab9: jne 0x716ae9 */ if (!fZ) goto L_00716ae9;
L_00716abb:; BB(0x00716abb);
    /* 00716abb: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716ac0: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x716ac5u); f_00716bd8();
    /* 00716ac5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716ac7: jne 0x716ae9 */ if (!fZ) goto L_00716ae9;
L_00716ac9:; BB(0x00716ac9);
    /* 00716ac9: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716ace: call 0x716c0c */ r_esp -= 4; W32(r_esp, 0x716ad3u); f_00716c0c();
    /* 00716ad3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716ad5: jne 0x716ae9 */ if (!fZ) goto L_00716ae9;
L_00716ad7:; BB(0x00716ad7);
    /* 00716ad7: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 00716ada: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716adf: je 0x716af5 */ if (fZ) goto L_00716af5;
L_00716ae1:; BB(0x00716ae1);
    /* 00716ae1: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716ae7: je 0x716af5 */ if (fZ) goto L_00716af5;
L_00716ae9:; BB(0x00716ae9);
    /* 00716ae9: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716aec: call 0x713fdc */ r_esp -= 4; W32(r_esp, 0x716af1u); f_00713fdc();
    /* 00716af1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716af2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716af3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00716af4: ret  */ FN_RET(0x00716a60); r_esp += 4; return;
L_00716af5:; BB(0x00716af5);
    /* 00716af5: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716af8: call 0x713f80 */ r_esp -= 4; W32(r_esp, 0x716afdu); f_00713f80();
    /* 00716afd: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716b00: movzx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)R16((u32)(r_ecx+0x1eu));
    /* 00716b04: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716b06: je 0x716b0f */ if (fZ) goto L_00716b0f;
L_00716b08:; BB(0x00716b08);
    /* 00716b08: mov edx, 1 */ r_edx = 0x1u;
    /* 00716b0d: jmp 0x716b11 */ goto L_00716b11;
L_00716b0f:; BB(0x00716b0f);
    /* 00716b0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716b11:; BB(0x00716b11);
    /* 00716b11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716b13: je 0x716b5c */ if (fZ) goto L_00716b5c;
L_00716b15:; BB(0x00716b15);
    /* 00716b15: lea eax, [ebp + 0xa0] */ r_eax = (u32)(r_ebp+0xa0u);
    /* 00716b1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716b1c: call 0x77d6e4 */ r_esp -= 4; W32(r_esp, 0x716b21u); f_0077d6e4();
    /* 00716b21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716b22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716b24: jne 0x716b2f */ if (!fZ) goto L_00716b2f;
L_00716b26:; BB(0x00716b26);
    /* 00716b26: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716b29: movzx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)R16((u32)(r_ecx+0x1eu));
    /* 00716b2d: jmp 0x716b5c */ goto L_00716b5c;
L_00716b2f:; BB(0x00716b2f);
    /* 00716b2f: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716b32: movzx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)R16((u32)(r_ecx+0x1eu));
    /* 00716b36: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716b38: je 0x716b41 */ if (fZ) goto L_00716b41;
L_00716b3a:; BB(0x00716b3a);
    /* 00716b3a: mov edx, 1 */ r_edx = 0x1u;
    /* 00716b3f: jmp 0x716b43 */ goto L_00716b43;
L_00716b41:; BB(0x00716b41);
    /* 00716b41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716b43:; BB(0x00716b43);
    /* 00716b43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716b45: je 0x716b5c */ if (fZ) goto L_00716b5c;
L_00716b47:; BB(0x00716b47);
    /* 00716b47: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00716b4c: mov word ptr [ecx + 0x1e], ax */ W16((u32)(r_ecx+0x1eu), (u16)r_eax);
    /* 00716b50: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x716b55u); f_007138e0();
    /* 00716b55: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716b58: movzx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)R16((u32)(r_ecx+0x1eu));
L_00716b5c:; BB(0x00716b5c);
    /* 00716b5c: mov ebp, eax */ r_ebp = r_eax;
    /* 00716b5e: and ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00716b61: je 0x716b6a */ if (fZ) goto L_00716b6a;
L_00716b63:; BB(0x00716b63);
    /* 00716b63: mov edx, 1 */ r_edx = 0x1u;
    /* 00716b68: jmp 0x716b6c */ goto L_00716b6c;
L_00716b6a:; BB(0x00716b6a);
    /* 00716b6a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716b6c:; BB(0x00716b6c);
    /* 00716b6c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716b6e: je 0x716b8f */ if (fZ) goto L_00716b8f;
L_00716b70:; BB(0x00716b70);
    /* 00716b70: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716b72: je 0x716b7b */ if (fZ) goto L_00716b7b;
L_00716b74:; BB(0x00716b74);
    /* 00716b74: mov edx, 1 */ r_edx = 0x1u;
    /* 00716b79: jmp 0x716b7d */ goto L_00716b7d;
L_00716b7b:; BB(0x00716b7b);
    /* 00716b7b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00716b7d:; BB(0x00716b7d);
    /* 00716b7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716b7f: je 0x716b8f */ if (fZ) goto L_00716b8f;
L_00716b81:; BB(0x00716b81);
    /* 00716b81: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00716b86: mov word ptr [ecx + 0x1e], ax */ W16((u32)(r_ecx+0x1eu), (u16)r_eax);
    /* 00716b8a: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x716b8fu); f_007138e0();
L_00716b8f:; BB(0x00716b8f);
    /* 00716b8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716b90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716b91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00716b92: ret  */ FN_RET(0x00716a60); r_esp += 4; return;
L_00716b93:; BB(0x00716b93);
    /* 00716b93: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00716b96: call 0x713fdc */ r_esp -= 4; W32(r_esp, 0x716b9bu); f_00713fdc();
    /* 00716b9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716b9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716b9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00716b9e: ret  */ FN_RET(0x00716a60); r_esp += 4; return;
}

void f_00716ba0(void) /* sub_716BA0 */
{
    FN_ENTER(0x00716ba0);
    /* 00716ba0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00716ba4: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716baa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716bac: je 0x716bd0 */ if (fZ) goto L_00716bd0;
L_00716bae:; BB(0x00716bae);
    /* 00716bae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00716bb0: jl 0x716bcc */ if ((fS!=fO)) goto L_00716bcc;
L_00716bb2:; BB(0x00716bb2);
    /* 00716bb2: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716bb5: jl 0x716bbb */ if ((fS!=fO)) goto L_00716bbb;
L_00716bb7:; BB(0x00716bb7);
    /* 00716bb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bb9: jmp 0x716bbf */ goto L_00716bbf;
L_00716bbb:; BB(0x00716bbb);
    /* 00716bbb: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716bbf:; BB(0x00716bbf);
    /* 00716bbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716bc1: je 0x716bc9 */ if (fZ) goto L_00716bc9;
L_00716bc3:; BB(0x00716bc3);
    /* 00716bc3: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x716bc8u); f_0071b354();
    /* 00716bc8: ret  */ FN_RET(0x00716ba0); r_esp += 4; return;
L_00716bc9:; BB(0x00716bc9);
    /* 00716bc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716bcb: ret  */ FN_RET(0x00716ba0); r_esp += 4; return;
L_00716bcc:; BB(0x00716bcc);
    /* 00716bcc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bce: jmp 0x716bbf */ goto L_00716bbf;
L_00716bd0:; BB(0x00716bd0);
    /* 00716bd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bd2: jmp 0x716bbf */ goto L_00716bbf;
}

void f_00716ba4(void) /* sub_716BA4 */
{
    FN_ENTER(0x00716ba4);
    /* 00716ba4: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716baa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716bac: je 0x716bd0 */ if (fZ) goto L_00716bd0;
L_00716bae:; BB(0x00716bae);
    /* 00716bae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00716bb0: jl 0x716bcc */ if ((fS!=fO)) goto L_00716bcc;
L_00716bb2:; BB(0x00716bb2);
    /* 00716bb2: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716bb5: jl 0x716bbb */ if ((fS!=fO)) goto L_00716bbb;
L_00716bb7:; BB(0x00716bb7);
    /* 00716bb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bb9: jmp 0x716bbf */ goto L_00716bbf;
L_00716bbb:; BB(0x00716bbb);
    /* 00716bbb: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716bbf:; BB(0x00716bbf);
    /* 00716bbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716bc1: je 0x716bc9 */ if (fZ) goto L_00716bc9;
L_00716bc3:; BB(0x00716bc3);
    /* 00716bc3: call 0x71b354 */ r_esp -= 4; W32(r_esp, 0x716bc8u); f_0071b354();
    /* 00716bc8: ret  */ FN_RET(0x00716ba4); r_esp += 4; return;
L_00716bc9:; BB(0x00716bc9);
    /* 00716bc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716bcb: ret  */ FN_RET(0x00716ba4); r_esp += 4; return;
L_00716bcc:; BB(0x00716bcc);
    /* 00716bcc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bce: jmp 0x716bbf */ goto L_00716bbf;
L_00716bd0:; BB(0x00716bd0);
    /* 00716bd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bd2: jmp 0x716bbf */ goto L_00716bbf;
}

void f_00716bd8(void) /* sub_716BD8 */
{
    FN_ENTER(0x00716bd8);
    /* 00716bd8: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716bde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716be0: je 0x716c04 */ if (fZ) goto L_00716c04;
L_00716be2:; BB(0x00716be2);
    /* 00716be2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00716be4: jl 0x716c00 */ if ((fS!=fO)) goto L_00716c00;
L_00716be6:; BB(0x00716be6);
    /* 00716be6: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716be9: jl 0x716bef */ if ((fS!=fO)) goto L_00716bef;
L_00716beb:; BB(0x00716beb);
    /* 00716beb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716bed: jmp 0x716bf3 */ goto L_00716bf3;
L_00716bef:; BB(0x00716bef);
    /* 00716bef: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716bf3:; BB(0x00716bf3);
    /* 00716bf3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716bf5: je 0x716bfd */ if (fZ) goto L_00716bfd;
L_00716bf7:; BB(0x00716bf7);
    /* 00716bf7: call 0x71602c */ r_esp -= 4; W32(r_esp, 0x716bfcu); f_0071602c();
    /* 00716bfc: ret  */ FN_RET(0x00716bd8); r_esp += 4; return;
L_00716bfd:; BB(0x00716bfd);
    /* 00716bfd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716bff: ret  */ FN_RET(0x00716bd8); r_esp += 4; return;
L_00716c00:; BB(0x00716c00);
    /* 00716c00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c02: jmp 0x716bf3 */ goto L_00716bf3;
L_00716c04:; BB(0x00716c04);
    /* 00716c04: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c06: jmp 0x716bf3 */ goto L_00716bf3;
}

void f_00716c08(void) /* sub_716C08 */
{
    FN_ENTER(0x00716c08);
    /* 00716c08: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00716c0c: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716c12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c14: je 0x716c38 */ if (fZ) goto L_00716c38;
L_00716c16:; BB(0x00716c16);
    /* 00716c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00716c18: jl 0x716c34 */ if ((fS!=fO)) goto L_00716c34;
L_00716c1a:; BB(0x00716c1a);
    /* 00716c1a: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716c1d: jl 0x716c23 */ if ((fS!=fO)) goto L_00716c23;
L_00716c1f:; BB(0x00716c1f);
    /* 00716c1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c21: jmp 0x716c27 */ goto L_00716c27;
L_00716c23:; BB(0x00716c23);
    /* 00716c23: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716c27:; BB(0x00716c27);
    /* 00716c27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c29: je 0x716c31 */ if (fZ) goto L_00716c31;
L_00716c2b:; BB(0x00716c2b);
    /* 00716c2b: call 0x716054 */ r_esp -= 4; W32(r_esp, 0x716c30u); f_00716054();
    /* 00716c30: ret  */ FN_RET(0x00716c08); r_esp += 4; return;
L_00716c31:; BB(0x00716c31);
    /* 00716c31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716c33: ret  */ FN_RET(0x00716c08); r_esp += 4; return;
L_00716c34:; BB(0x00716c34);
    /* 00716c34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c36: jmp 0x716c27 */ goto L_00716c27;
L_00716c38:; BB(0x00716c38);
    /* 00716c38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c3a: jmp 0x716c27 */ goto L_00716c27;
}

void f_00716c0c(void)
{
    FN_ENTER(0x00716c0c);
    /* 00716c0c: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 00716c12: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c14: je 0x716c38 */ if (fZ) goto L_00716c38;
L_00716c16:; BB(0x00716c16);
    /* 00716c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00716c18: jl 0x716c34 */ if ((fS!=fO)) goto L_00716c34;
L_00716c1a:; BB(0x00716c1a);
    /* 00716c1a: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716c1d: jl 0x716c23 */ if ((fS!=fO)) goto L_00716c23;
L_00716c1f:; BB(0x00716c1f);
    /* 00716c1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c21: jmp 0x716c27 */ goto L_00716c27;
L_00716c23:; BB(0x00716c23);
    /* 00716c23: mov ecx, dword ptr [edx + eax*4 + 0x54] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x54u));
L_00716c27:; BB(0x00716c27);
    /* 00716c27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c29: je 0x716c31 */ if (fZ) goto L_00716c31;
L_00716c2b:; BB(0x00716c2b);
    /* 00716c2b: call 0x716054 */ r_esp -= 4; W32(r_esp, 0x716c30u); f_00716054();
    /* 00716c30: ret  */ FN_RET(0x00716c0c); r_esp += 4; return;
L_00716c31:; BB(0x00716c31);
    /* 00716c31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716c33: ret  */ FN_RET(0x00716c0c); r_esp += 4; return;
L_00716c34:; BB(0x00716c34);
    /* 00716c34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c36: jmp 0x716c27 */ goto L_00716c27;
L_00716c38:; BB(0x00716c38);
    /* 00716c38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716c3a: jmp 0x716c27 */ goto L_00716c27;
}

void f_00716c3c(void) /* sub_716C3C */
{
    FN_ENTER(0x00716c3c);
    /* 00716c3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00716c3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00716c3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00716c41: push 0x8f08d8 */ { u32 v = 0x8f08d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00716c46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00716c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716c4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00716c54: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00716c57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00716c5a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00716c5d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00716c60: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00716c63: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00716c66: mov ecx, dword ptr [ecx + 0x3c] */ r_ecx = R32((u32)(r_ecx+0x3cu));
    /* 00716c69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c6b: je 0x716c80 */ if (fZ) goto L_00716c80;
L_00716c6d:; BB(0x00716c6d);
    /* 00716c6d: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x716c72u); f_008173b4();
    /* 00716c72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c74: jne 0x716c80 */ if (!fZ) goto L_00716c80;
L_00716c76:; BB(0x00716c76);
    /* 00716c76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716c79: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
L_00716c80:; BB(0x00716c80);
    /* 00716c80: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00716c87: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716c89: je 0x716cc6 */ if (fZ) goto L_00716cc6;
L_00716c8b:; BB(0x00716c8b);
    /* 00716c8b: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716c91: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x716c96u); f_00716ba4();
    /* 00716c96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716c99: jne 0x716cc6 */ if (!fZ) goto L_00716cc6;
L_00716c9b:; BB(0x00716c9b);
    /* 00716c9b: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716ca0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716ca1: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x716ca6u); f_00716bd8();
    /* 00716ca6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716ca9: jne 0x716cc6 */ if (!fZ) goto L_00716cc6;
L_00716cab:; BB(0x00716cab);
    /* 00716cab: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00716cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716cb2: je 0x716cbc */ if (fZ) goto L_00716cbc;
L_00716cb4:; BB(0x00716cb4);
    /* 00716cb4: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00716cb8: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716cba: jne 0x716cc6 */ if (!fZ) goto L_00716cc6;
L_00716cbc:; BB(0x00716cbc);
    /* 00716cbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716cbf: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00716cc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716cc4: je 0x716cf5 */ if (fZ) goto L_00716cf5;
L_00716cc6:; BB(0x00716cc6);
    /* 00716cc6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716cc9: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00716ccc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716cce: je 0x716ce7 */ if (fZ) goto L_00716ce7;
L_00716cd0:; BB(0x00716cd0);
    /* 00716cd0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00716cd4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716cd9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00716cdd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00716ce0: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
L_00716ce7:; BB(0x00716ce7);
    /* 00716ce7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00716cea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00716cf1: mov esp, ebp */ r_esp = r_ebp;
    /* 00716cf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716cf4: ret  */ FN_RET(0x00716c3c); r_esp += 4; return;
L_00716cf5:; BB(0x00716cf5);
    /* 00716cf5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00716cf8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716cfa: je 0x716d05 */ if (fZ) goto L_00716d05;
L_00716cfc:; BB(0x00716cfc);
    /* 00716cfc: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x716d01u); f_00714090();
    /* 00716d01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716d03: jne 0x716cc6 */ if (!fZ) goto L_00716cc6;
L_00716d05:; BB(0x00716d05);
    /* 00716d05: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00716d0c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716d0e: jne 0x716cc6 */ if (!fZ) goto L_00716cc6;
L_00716d10:; BB(0x00716d10);
    /* 00716d10: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716d13: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00716d16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716d18: jne 0x716ce7 */ if (!fZ) goto L_00716ce7;
L_00716d1a:; BB(0x00716d1a);
    /* 00716d1a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00716d21: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00716d23: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x716d28u); f_005caba4();
    /* 00716d28: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00716d2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00716d2e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00716d31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716d33: je 0x716d61 */ if (fZ) goto L_00716d61;
L_00716d35:; BB(0x00716d35);
    /* 00716d35: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00716d3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00716d43: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716d46: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00716d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716d4a: call 0x720f90 */ r_esp -= 4; W32(r_esp, 0x716d4fu); f_00720f90();
    /* 00716d4f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00716d56:; BB(0x00716d56);
    /* 00716d56: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00716d59: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00716d5c: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 00716d5f: jmp 0x716ce7 */ goto L_00716ce7;
L_00716d61:; BB(0x00716d61);
    /* 00716d61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716d63: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00716d66: jmp 0x716d56 */ goto L_00716d56;
}

void f_00716d68(void) /* sub_716D68 */
{
    FN_ENTER(0x00716d68);
    /* 00716d68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00716d69: mov ebp, esp */ r_ebp = r_esp;
    /* 00716d6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00716d6d: push 0x8f0900 */ { u32 v = 0x8f0900u; r_esp -= 4; W32(r_esp, v); }
    /* 00716d72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00716d78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716d79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00716d80: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00716d83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00716d86: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00716d89: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00716d8c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00716d8f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00716d92: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 00716d99: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00716d9b: je 0x716dc7 */ if (fZ) goto L_00716dc7;
L_00716d9d:; BB(0x00716d9d);
    /* 00716d9d: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716da2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716da3: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x716da8u); f_00716ba4();
    /* 00716da8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716da9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716dab: jne 0x716dc7 */ if (!fZ) goto L_00716dc7;
L_00716dad:; BB(0x00716dad);
    /* 00716dad: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716db2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716db3: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x716db8u); f_00716bd8();
    /* 00716db8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716dbb: jne 0x716dc7 */ if (!fZ) goto L_00716dc7;
L_00716dbd:; BB(0x00716dbd);
    /* 00716dbd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716dc0: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00716dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716dc5: je 0x716df6 */ if (fZ) goto L_00716df6;
L_00716dc7:; BB(0x00716dc7);
    /* 00716dc7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716dca: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00716dcd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716dcf: je 0x716de8 */ if (fZ) goto L_00716de8;
L_00716dd1:; BB(0x00716dd1);
    /* 00716dd1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00716dd5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716dda: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00716dde: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00716de1: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
L_00716de8:; BB(0x00716de8);
    /* 00716de8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00716deb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00716df2: mov esp, ebp */ r_esp = r_ebp;
    /* 00716df4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716df5: ret  */ FN_RET(0x00716d68); r_esp += 4; return;
L_00716df6:; BB(0x00716df6);
    /* 00716df6: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00716df9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716dfb: je 0x716e06 */ if (fZ) goto L_00716e06;
L_00716dfd:; BB(0x00716dfd);
    /* 00716dfd: call 0x714090 */ r_esp -= 4; W32(r_esp, 0x716e02u); f_00714090();
    /* 00716e02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716e04: jne 0x716dc7 */ if (!fZ) goto L_00716dc7;
L_00716e06:; BB(0x00716e06);
    /* 00716e06: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716e09: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00716e0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716e0e: jne 0x716de8 */ if (!fZ) goto L_00716de8;
L_00716e10:; BB(0x00716e10);
    /* 00716e10: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00716e17: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00716e19: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x716e1eu); f_005caba4();
    /* 00716e1e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00716e21: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00716e24: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00716e27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716e29: je 0x716e57 */ if (fZ) goto L_00716e57;
L_00716e2b:; BB(0x00716e2b);
    /* 00716e2b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00716e32: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00716e39: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716e3c: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00716e3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716e40: call 0x761478 */ r_esp -= 4; W32(r_esp, 0x716e45u); f_00761478();
    /* 00716e45: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00716e4c:; BB(0x00716e4c);
    /* 00716e4c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00716e4f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00716e52: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 00716e55: jmp 0x716de8 */ goto L_00716de8;
L_00716e57:; BB(0x00716e57);
    /* 00716e57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716e59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00716e5c: jmp 0x716e4c */ goto L_00716e4c;
}

void f_00716e60(void) /* sub_716E60 */
{
    FN_ENTER(0x00716e60);
    /* 00716e60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00716e61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716e62: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00716e64: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x716e69u); f_007917b8();
    /* 00716e69: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00716e6c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00716e6f: je 0x716e74 */ if (fZ) goto L_00716e74;
L_00716e71:; BB(0x00716e71);
    /* 00716e71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716e72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716e73: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
L_00716e74:; BB(0x00716e74);
    /* 00716e74: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716e79: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x716e7eu); f_00716bd8();
    /* 00716e7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716e80: je 0x716e85 */ if (fZ) goto L_00716e85;
L_00716e82:; BB(0x00716e82);
    /* 00716e82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716e83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716e84: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
L_00716e85:; BB(0x00716e85);
    /* 00716e85: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00716e8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00716e8d: call 0x716f1c */ r_esp -= 4; W32(r_esp, 0x716e92u); f_00716f1c();
    /* 00716e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716e94: je 0x716e99 */ if (fZ) goto L_00716e99;
L_00716e96:; BB(0x00716e96);
    /* 00716e96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716e97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716e98: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
L_00716e99:; BB(0x00716e99);
    /* 00716e99: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716e9e: call 0x716ba4 */ r_esp -= 4; W32(r_esp, 0x716ea3u); f_00716ba4();
    /* 00716ea3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716ea5: jne 0x716f06 */ if (!fZ) goto L_00716f06;
L_00716ea7:; BB(0x00716ea7);
    /* 00716ea7: mov eax, dword ptr [0xa9c4ac] */ r_eax = R32((u32)(0xa9c4acu));
    /* 00716eac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716eae: je 0x716ebf */ if (fZ) goto L_00716ebf;
L_00716eb0:; BB(0x00716eb0);
    /* 00716eb0: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00716eb2: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x716eb7u); f_007bfff8();
    /* 00716eb7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716eb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716eba: jne 0x716f09 */ if (!fZ) goto L_00716f09;
L_00716ebc:; BB(0x00716ebc);
    /* 00716ebc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716ebd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716ebe: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
L_00716ebf:; BB(0x00716ebf);
    /* 00716ebf: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x716ec4u); f_0080a640();
    /* 00716ec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716ec6: jne 0x716ecb */ if (!fZ) goto L_00716ecb;
L_00716ec8:; BB(0x00716ec8);
    /* 00716ec8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716ec9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716eca: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
L_00716ecb:; BB(0x00716ecb);
    /* 00716ecb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00716ecd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00716ed3: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x716ed8u); f_007be19c();
    /* 00716ed8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00716edb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716edd: je 0x716ee6 */ if (fZ) goto L_00716ee6;
L_00716edf:; BB(0x00716edf);
    /* 00716edf: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 00716ee4: jmp 0x716eeb */ goto L_00716eeb;
L_00716ee6:; BB(0x00716ee6);
    /* 00716ee6: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_00716eeb:; BB(0x00716eeb);
    /* 00716eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716eec: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00716ef1: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x716ef6u); f_007c1160();
    /* 00716ef6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716ef8: jne 0x716f09 */ if (!fZ) goto L_00716f09;
L_00716efa:; BB(0x00716efa);
    /* 00716efa: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00716efc: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x716f01u); f_007bfff8();
    /* 00716f01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716f02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716f04: jne 0x716f09 */ if (!fZ) goto L_00716f09;
L_00716f06:; BB(0x00716f06);
    /* 00716f06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716f07: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716f08: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
L_00716f09:; BB(0x00716f09);
    /* 00716f09: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00716f0f: call 0x78a328 */ r_esp -= 4; W32(r_esp, 0x716f14u); f_0078a328();
    /* 00716f14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00716f17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00716f18: ret  */ FN_RET(0x00716e60); r_esp += 4; return;
}

void f_00716f1c(void) /* sub_716F1C */
{
    FN_ENTER(0x00716f1c);
    /* 00716f1c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00716f20: mov eax, dword ptr [0xa98478] */ r_eax = R32((u32)(0xa98478u));
    /* 00716f25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716f27: je 0x716f4f */ if (fZ) goto L_00716f4f;
L_00716f29:; BB(0x00716f29);
    /* 00716f29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00716f2b: jl 0x716f4b */ if ((fS!=fO)) goto L_00716f4b;
L_00716f2d:; BB(0x00716f2d);
    /* 00716f2d: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00716f30: jl 0x716f36 */ if ((fS!=fO)) goto L_00716f36;
L_00716f32:; BB(0x00716f32);
    /* 00716f32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716f34: jmp 0x716f3a */ goto L_00716f3a;
L_00716f36:; BB(0x00716f36);
    /* 00716f36: mov ecx, dword ptr [eax + edx*4 + 0x54] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x54u));
L_00716f3a:; BB(0x00716f3a);
    /* 00716f3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716f3c: je 0x716f46 */ if (fZ) goto L_00716f46;
L_00716f3e:; BB(0x00716f3e);
    /* 00716f3e: call 0x716040 */ r_esp -= 4; W32(r_esp, 0x716f43u); f_00716040();
    /* 00716f43: ret 4 */ FN_RET(0x00716f1c); r_esp += 8; return;
L_00716f46:; BB(0x00716f46);
    /* 00716f46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716f48: ret 4 */ FN_RET(0x00716f1c); r_esp += 8; return;
L_00716f4b:; BB(0x00716f4b);
    /* 00716f4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716f4d: jmp 0x716f3a */ goto L_00716f3a;
L_00716f4f:; BB(0x00716f4f);
    /* 00716f4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00716f51: jmp 0x716f3a */ goto L_00716f3a;
}

void f_00716f54(void) /* sub_716F54 */
{
    FN_ENTER(0x00716f54);
    /* 00716f54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00716f55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716f56: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00716f58: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00716f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716f5d: je 0x716f91 */ if (fZ) goto L_00716f91;
L_00716f5f:; BB(0x00716f5f);
    /* 00716f5f: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716f64: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x716f69u); f_00716bd8();
    /* 00716f69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716f6b: jne 0x716f7e */ if (!fZ) goto L_00716f7e;
L_00716f6d:; BB(0x00716f6d);
    /* 00716f6d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00716f73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00716f75: call 0x716f1c */ r_esp -= 4; W32(r_esp, 0x716f7au); f_00716f1c();
    /* 00716f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716f7c: je 0x716f89 */ if (fZ) goto L_00716f89;
L_00716f7e:; BB(0x00716f7e);
    /* 00716f7e: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00716f81: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x716f86u); f_007127c8();
    /* 00716f86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716f87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716f88: ret  */ FN_RET(0x00716f54); r_esp += 4; return;
L_00716f89:; BB(0x00716f89);
    /* 00716f89: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 00716f8c: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x716f91u); f_00712714();
L_00716f91:; BB(0x00716f91);
    /* 00716f91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716f92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00716f93: ret  */ FN_RET(0x00716f54); r_esp += 4; return;
}

void f_00716f94(void) /* sub_716F94 */
{
    FN_ENTER(0x00716f94);
    /* 00716f94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716f95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00716f96: mov esi, ecx */ r_esi = r_ecx;
    /* 00716f98: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00716f9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716f9d: je 0x716fc0 */ if (fZ) goto L_00716fc0;
L_00716f9f:; BB(0x00716f9f);
    /* 00716f9f: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00716fa4: call 0x716bd8 */ r_esp -= 4; W32(r_esp, 0x716fa9u); f_00716bd8();
    /* 00716fa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00716fab: je 0x716fb8 */ if (fZ) goto L_00716fb8;
L_00716fad:; BB(0x00716fad);
    /* 00716fad: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00716fb0: call 0x7127c8 */ r_esp -= 4; W32(r_esp, 0x716fb5u); f_007127c8();
    /* 00716fb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716fb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00716fb7: ret  */ FN_RET(0x00716f94); r_esp += 4; return;
L_00716fb8:; BB(0x00716fb8);
    /* 00716fb8: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00716fbb: call 0x712714 */ r_esp -= 4; W32(r_esp, 0x716fc0u); f_00712714();
L_00716fc0:; BB(0x00716fc0);
    /* 00716fc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716fc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00716fc2: ret  */ FN_RET(0x00716f94); r_esp += 4; return;
}

void f_00716fc4(void) /* sub_716FC4 */
{
    FN_ENTER(0x00716fc4);
    /* 00716fc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00716fc5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00716fc8: mov edi, ecx */ r_edi = r_ecx;
    /* 00716fca: movsx ecx, word ptr [edi + 0x1e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1eu));
    /* 00716fce: fld dword ptr [0x96fe70] */ FPUSH(R_F32((u32)(0x96fe70u)));
    /* 00716fd4: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 00716fd9: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00716fdb: shr edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00716fde: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00716fe1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00716fe3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00716fe5: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 00716fe8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00716fea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00716fec: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00716fee: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00716ff1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00716ff4: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00716ff7: fadd dword ptr [ecx*4 + 0x96fe28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x96fe28u));
    /* 00716ffe: fcom dword ptr [0x96fe74] */ fx_compare(ST(0), R_F32((u32)(0x96fe74u))); 
    /* 00717004: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00717006: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00717007: jbe 0x71700b */ if ((fC||fZ)) goto L_0071700b;
L_00717009:; BB(0x00717009);
    /* 00717009: fsubr st(1) */ ST(0) = ST(1) - ST(0);
L_0071700b:; BB(0x0071700b);
    /* 0071700b: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071700d: fmul dword ptr [0x96fe6c] */ ST(0) = ST(0) * R_F32((u32)(0x96fe6cu));
    /* 00717013: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00717017: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0071701c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00717021: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00717025: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00717029: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071702d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00717031: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00717035: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71703au); f_0082ddd8();
    /* 0071703a: fld dword ptr [0x96fe68] */ FPUSH(R_F32((u32)(0x96fe68u)));
    /* 00717040: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00717042: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00717044: fmul dword ptr [0x96fe64] */ ST(0) = ST(0) * R_F32((u32)(0x96fe64u));
    /* 0071704a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0071704c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071704e: fld dword ptr [0x96fe60] */ FPUSH(R_F32((u32)(0x96fe60u)));
    /* 00717054: fld dword ptr [0x96fe5c] */ FPUSH(R_F32((u32)(0x96fe5cu)));
    /* 0071705a: fld dword ptr [0x96fe54] */ FPUSH(R_F32((u32)(0x96fe54u)));
    /* 00717060: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00717061: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00717063: jbe 0x717067 */ if ((fC||fZ)) goto L_00717067;
L_00717065:; BB(0x00717065);
    /* 00717065: fst st(3) */ ST(3) = ST(0);
L_00717067:; BB(0x00717067);
    /* 00717067: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00717069: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0071706b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071706d: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071706f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00717071: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00717073: fmul dword ptr [0x96fe4c] */ ST(0) = ST(0) * R_F32((u32)(0x96fe4cu));
    /* 00717079: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071707b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071707d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071707f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00717083: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00717088: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071708d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00717091: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00717095: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00717099: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0071709d: fld dword ptr [0x96fe58] */ FPUSH(R_F32((u32)(0x96fe58u)));
    /* 007170a3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007170a5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007170a7: fmul dword ptr [0x96fe50] */ ST(0) = ST(0) * R_F32((u32)(0x96fe50u));
    /* 007170ad: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007170af: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007170b1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007170b3: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007170b7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007170bb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007170c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007170c5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007170c9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007170cd: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 007170d1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007170d5: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 007170da: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 007170de: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 007170e3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007170e8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007170ec: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007170f0: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 007170f4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007170f8: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 007170fd: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00717100: or ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00717106: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00717109: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0071710b: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0071710d: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 00717110: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00717113: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00717114: ret  */ FN_RET(0x00716fc4); r_esp += 4; return;
}

