#include "protos.h"

void f_00790149(void) /* def_79004A */
{
    FN_ENTER(0x00790149);
    goto L_00790149;
L_0078ffbd:; BB(0x0078ffbd);
    /* 0078ffbd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078ffbf: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 0078ffc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffc4: je 0x78ffce */ if (fZ) goto L_0078ffce;
L_0078ffc6:; BB(0x0078ffc6);
    /* 0078ffc6: mov ebx, dword ptr [edx + esi*4 + 4] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 0078ffca: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffcc: jne 0x79003a */ if (!fZ) goto L_0079003a;
L_0078ffce:; BB(0x0078ffce);
    /* 0078ffce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffd0: jne 0x78ffd6 */ if (!fZ) goto L_0078ffd6;
L_0078ffd2:; BB(0x0078ffd2);
    /* 0078ffd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffd4: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078ffd6:; BB(0x0078ffd6);
    /* 0078ffd6: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffd9: jne 0x78ffdf */ if (!fZ) goto L_0078ffdf;
L_0078ffdb:; BB(0x0078ffdb);
    /* 0078ffdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffdd: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078ffdf:; BB(0x0078ffdf);
    /* 0078ffdf: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffe2: jne 0x78ffe8 */ if (!fZ) goto L_0078ffe8;
L_0078ffe4:; BB(0x0078ffe4);
    /* 0078ffe4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffe6: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078ffe8:; BB(0x0078ffe8);
    /* 0078ffe8: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ffeb: jne 0x78fff1 */ if (!fZ) goto L_0078fff1;
L_0078ffed:; BB(0x0078ffed);
    /* 0078ffed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ffef: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078fff1:; BB(0x0078fff1);
    /* 0078fff1: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fff4: jne 0x78fffa */ if (!fZ) goto L_0078fffa;
L_0078fff6:; BB(0x0078fff6);
    /* 0078fff6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078fff8: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0078fffa:; BB(0x0078fffa);
    /* 0078fffa: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078fffd: jne 0x790003 */ if (!fZ) goto L_00790003;
L_0078ffff:; BB(0x0078ffff);
    /* 0078ffff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790001: jne 0x790030 */ if (!fZ) goto L_00790030;
L_00790003:; BB(0x00790003);
    /* 00790003: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790006: jne 0x79000c */ if (!fZ) goto L_0079000c;
L_00790008:; BB(0x00790008);
    /* 00790008: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079000a: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0079000c:; BB(0x0079000c);
    /* 0079000c: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079000f: jne 0x790015 */ if (!fZ) goto L_00790015;
L_00790011:; BB(0x00790011);
    /* 00790011: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790013: jne 0x790030 */ if (!fZ) goto L_00790030;
L_00790015:; BB(0x00790015);
    /* 00790015: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790018: jne 0x79001e */ if (!fZ) goto L_0079001e;
L_0079001a:; BB(0x0079001a);
    /* 0079001a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079001c: jne 0x790030 */ if (!fZ) goto L_00790030;
L_0079001e:; BB(0x0079001e);
    /* 0079001e: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00790021: jne 0x790027 */ if (!fZ) goto L_00790027;
L_00790023:; BB(0x00790023);
    /* 00790023: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790025: jne 0x790030 */ if (!fZ) goto L_00790030;
L_00790027:; BB(0x00790027);
    /* 00790027: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079002a: jne 0x79003a */ if (!fZ) goto L_0079003a;
L_0079002c:; BB(0x0079002c);
    /* 0079002c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079002e: je 0x79003a */ if (fZ) goto L_0079003a;
L_00790030:; BB(0x00790030);
    /* 00790030: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00790037: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790038: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00790039: ret  */ FN_RET(0x00790149); r_esp += 4; return;
L_0079003a:; BB(0x0079003a);
    /* 0079003a: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079003d: ja 0x790149 */ if ((!fC&&!fZ)) goto L_00790149;
L_00790043:; BB(0x00790043);
    /* 00790043: mov ebx, dword ptr [ecx*4 + 0x97abb0] */ r_ebx = R32((u32)(r_ecx*4+0x97abb0u));
    /* 0079004a: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00790149:; BB(0x00790149);
    /* 00790149: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079014c: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079014f: jl 0x78ffbd */ if ((fS!=fO)) goto L_0078ffbd;
L_00790155:; BB(0x00790155);
    /* 00790155: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 0079015b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079015d: je 0x790178 */ if (fZ) goto L_00790178;
L_0079015f:; BB(0x0079015f);
    /* 0079015f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00790161: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00790163: je 0x790178 */ if (fZ) goto L_00790178;
L_00790165:; BB(0x00790165);
    /* 00790165: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00790167:; BB(0x00790167);
    /* 00790167: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 0079016b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079016e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00790171: jge 0x7901dd */ if ((fS==fO)) goto L_007901dd;
L_00790173:; BB(0x00790173);
    /* 00790173: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00790176: jl 0x790167 */ if ((fS!=fO)) goto L_00790167;
L_00790178:; BB(0x00790178);
    /* 00790178: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00790179: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079017a: ret  */ FN_RET(0x00790149); r_esp += 4; return;
L_007901dd:; BB(0x007901dd);
    /* 007901dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007901df: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x7901e4u); f_00792f98();
    /* 007901e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007901e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007901e6: ret  */ FN_RET(0x00790149); r_esp += 4; return;
}

void f_00792a77(void) /* def_792978 */
{
    FN_ENTER(0x00792a77);
    goto L_00792a77;
L_007928e9:; BB(0x007928e9);
    /* 007928e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007928eb: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 007928ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f0: je 0x7928fa */ if (fZ) goto L_007928fa;
L_007928f2:; BB(0x007928f2);
    /* 007928f2: mov ebx, dword ptr [edx + esi*4 + 4] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 007928f6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f8: jne 0x792968 */ if (!fZ) goto L_00792968;
L_007928fa:; BB(0x007928fa);
    /* 007928fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928fc: jne 0x792902 */ if (!fZ) goto L_00792902;
L_007928fe:; BB(0x007928fe);
    /* 007928fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792900: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792902:; BB(0x00792902);
    /* 00792902: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792905: jne 0x79290b */ if (!fZ) goto L_0079290b;
L_00792907:; BB(0x00792907);
    /* 00792907: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792909: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079290b:; BB(0x0079290b);
    /* 0079290b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079290e: jne 0x792914 */ if (!fZ) goto L_00792914;
L_00792910:; BB(0x00792910);
    /* 00792910: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792912: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792914:; BB(0x00792914);
    /* 00792914: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792917: jne 0x79291d */ if (!fZ) goto L_0079291d;
L_00792919:; BB(0x00792919);
    /* 00792919: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079291b: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079291d:; BB(0x0079291d);
    /* 0079291d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792920: jne 0x792926 */ if (!fZ) goto L_00792926;
L_00792922:; BB(0x00792922);
    /* 00792922: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792924: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792926:; BB(0x00792926);
    /* 00792926: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792929: jne 0x79292f */ if (!fZ) goto L_0079292f;
L_0079292b:; BB(0x0079292b);
    /* 0079292b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079292d: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079292f:; BB(0x0079292f);
    /* 0079292f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792932: jne 0x792938 */ if (!fZ) goto L_00792938;
L_00792934:; BB(0x00792934);
    /* 00792934: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792936: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792938:; BB(0x00792938);
    /* 00792938: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293b: jne 0x792941 */ if (!fZ) goto L_00792941;
L_0079293d:; BB(0x0079293d);
    /* 0079293d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293f: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792941:; BB(0x00792941);
    /* 00792941: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792944: jne 0x79294a */ if (!fZ) goto L_0079294a;
L_00792946:; BB(0x00792946);
    /* 00792946: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792948: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079294a:; BB(0x0079294a);
    /* 0079294a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079294d: jne 0x792953 */ if (!fZ) goto L_00792953;
L_0079294f:; BB(0x0079294f);
    /* 0079294f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792951: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792953:; BB(0x00792953);
    /* 00792953: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792956: jne 0x792968 */ if (!fZ) goto L_00792968;
L_00792958:; BB(0x00792958);
    /* 00792958: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079295a: je 0x792968 */ if (fZ) goto L_00792968;
L_0079295c:; BB(0x0079295c);
    /* 0079295c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792963: jmp 0x792aaa */ f_00792aaa(); return;
L_00792968:; BB(0x00792968);
    /* 00792968: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079296b: ja 0x792a77 */ if ((!fC&&!fZ)) goto L_00792a77;
L_00792971:; BB(0x00792971);
    /* 00792971: mov ebx, dword ptr [ecx*4 + 0x97ac28] */ r_ebx = R32((u32)(r_ecx*4+0x97ac28u));
    /* 00792978: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792a77:; BB(0x00792a77);
    /* 00792a77: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792a7a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a7d: jl 0x7928e9 */ if ((fS!=fO)) goto L_007928e9;
L_00792a83:; BB(0x00792a83);
    /* 00792a83: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792a89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a8b: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a8d:; BB(0x00792a8d);
    /* 00792a8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792a8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a91: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a93:; BB(0x00792a93);
    /* 00792a93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792a95:; BB(0x00792a95);
    /* 00792a95: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792a99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792a9c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a9f: jge 0x792b2c */ if ((fS==fO)) goto L_00792b2c;
L_00792aa5:; BB(0x00792aa5);
    /* 00792aa5: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792aa8: jl 0x792a95 */ if ((fS!=fO)) goto L_00792a95;
L_00792aaa:; BB(0x00792aaa);
    /* 00792aaa: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00792ab0: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x792ab5u); f_00792c64();
    /* 00792ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792ab7: ret  */ FN_RET(0x00792a77); r_esp += 4; return;
L_00792b2c:; BB(0x00792b2c);
    /* 00792b2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792b2e: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792b33u); f_00792f98();
    /* 00792b33: jmp 0x792aaa */ f_00792aaa(); return;
}

