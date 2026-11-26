#include "protos.h"

void f_00577004(void) /* sub_577004 */
{
    FN_ENTER(0x00577004);
    /* 00577004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577005: mov ebp, esp */ r_ebp = r_esp;
    /* 00577007: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577009: push 0x8d73d8 */ { u32 v = 0x8d73d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0057700e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577015: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057701c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057701f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00577022: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00577025: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00577028: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057702b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057702e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577031: mov dword ptr [ecx], 0xb06a28 */ W32((u32)(r_ecx), 0xb06a28u);
    /* 00577037: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057703e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x577043u); f_008171e8();
    /* 00577043: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577046: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057704d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057704f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577050: ret  */ FN_RET(0x00577004); r_esp += 4; return;
}

void f_00577054(void) /* sub_577054 */
{
    FN_ENTER(0x00577054);
    /* 00577054: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00577055: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00577057: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057705b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057705d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x577062u); f_008193cc();
    /* 00577062: mov dword ptr [ebx], 0xb06a28 */ W32((u32)(r_ebx), 0xb06a28u);
    /* 00577068: mov edx, dword ptr [0x9beda4] */ r_edx = R32((u32)(0x9beda4u));
    /* 0057706e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00577071: mov eax, ebx */ r_eax = r_ebx;
    /* 00577073: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 0057707a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057707b: ret 4 */ FN_RET(0x00577054); r_esp += 8; return;
}

void f_00577080(void) /* sub_577080 */
{
    FN_ENTER(0x00577080);
    /* 00577080: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00577081: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00577083: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00577085: call 0x576e14 */ r_esp -= 4; W32(r_esp, 0x57708au); f_00576e14();
    /* 0057708a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057708e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00577090: jne 0x577096 */ if (!fZ) goto L_00577096;
L_00577092:; BB(0x00577092);
    /* 00577092: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00577093: ret 4 */ FN_RET(0x00577080); r_esp += 8; return;
L_00577096:; BB(0x00577096);
    /* 00577096: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00577097: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57709cu); f_005c2f74();
    /* 0057709c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057709d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057709e: ret 4 */ FN_RET(0x00577080); r_esp += 8; return;
}

void f_005770a4(void) /* sub_5770A4 */
{
    FN_ENTER(0x005770a4);
    /* 005770a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005770a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005770a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005770a9: call 0x577004 */ r_esp -= 4; W32(r_esp, 0x5770aeu); f_00577004();
    /* 005770ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005770b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005770b4: jne 0x5770ba */ if (!fZ) goto L_005770ba;
L_005770b6:; BB(0x005770b6);
    /* 005770b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005770b7: ret 4 */ FN_RET(0x005770a4); r_esp += 8; return;
L_005770ba:; BB(0x005770ba);
    /* 005770ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005770bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5770c0u); f_005c2f74();
    /* 005770c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005770c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005770c2: ret 4 */ FN_RET(0x005770a4); r_esp += 8; return;
}

void f_005770c8(void) /* sub_5770C8 */
{
    FN_ENTER(0x005770c8);
    /* 005770c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005770c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005770cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005770cd: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x5770d2u); f_005770ec();
    /* 005770d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005770d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005770d8: jne 0x5770de */ if (!fZ) goto L_005770de;
L_005770da:; BB(0x005770da);
    /* 005770da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005770db: ret 4 */ FN_RET(0x005770c8); r_esp += 8; return;
L_005770de:; BB(0x005770de);
    /* 005770de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005770df: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5770e4u); f_00857e98();
    /* 005770e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005770e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005770e6: ret 4 */ FN_RET(0x005770c8); r_esp += 8; return;
}

void f_005770ec(void) /* sub_5770EC */
{
    FN_ENTER(0x005770ec);
    /* 005770ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005770ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005770ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005770f1: push 0x8d73f4 */ { u32 v = 0x8d73f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005770f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005770fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005770fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00577104: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577107: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057710a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057710d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00577110: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00577113: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00577116: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577119: mov dword ptr [ecx], 0xb06aa8 */ W32((u32)(r_ecx), 0xb06aa8u);
    /* 0057711f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00577126: call 0x579464 */ r_esp -= 4; W32(r_esp, 0x57712bu); f_00579464();
    /* 0057712b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057712e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00577135: mov esp, ebp */ r_esp = r_ebp;
    /* 00577137: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577138: ret  */ FN_RET(0x005770ec); r_esp += 4; return;
}

void f_0057713c(void) /* sub_57713C */
{
    FN_ENTER(0x0057713c);
    /* 0057713c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057713d: mov ebp, esp */ r_ebp = r_esp;
    /* 0057713f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577141: push 0x8d7410 */ { u32 v = 0x8d7410u; r_esp -= 4; W32(r_esp, v); }
    /* 00577146: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057714c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057714d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00577154: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577157: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057715a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057715d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00577160: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00577163: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00577166: call 0x57946c */ r_esp -= 4; W32(r_esp, 0x57716bu); f_0057946c();
    /* 0057716b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577172: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577175: mov dword ptr [ecx], 0xb06aa8 */ W32((u32)(r_ecx), 0xb06aa8u);
    /* 0057717b: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x577180u); f_0057739c();
    /* 00577180: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577183: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577186: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057718d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057718f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577190: ret  */ FN_RET(0x0057713c); r_esp += 4; return;
}

void f_00577194(void) /* sub_577194 */
{
    FN_ENTER(0x00577194);
    /* 00577194: call 0x579530 */ r_esp -= 4; W32(r_esp, 0x577199u); f_00579530();
    /* 00577199: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 0057719e: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x5771a3u); f_0082e1c4();
    /* 005771a3: ret  */ FN_RET(0x00577194); r_esp += 4; return;
}

void f_005771a4(void) /* sub_5771A4 */
{
    FN_ENTER(0x005771a4);
    /* 005771a4: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 005771a7: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005771aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005771ac: jne 0x5771cb */ if (!fZ) goto L_005771cb;
L_005771ae:; BB(0x005771ae);
    /* 005771ae: fld dword ptr [0x9272b0] */ FPUSH(R_F32((u32)(0x9272b0u)));
    /* 005771b4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005771b6: fcom dword ptr [0x9272ac] */ fx_compare(ST(0), R_F32((u32)(0x9272acu))); 
    /* 005771bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005771be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005771bf: jae 0x5771e6 */ if (!fC) goto L_005771e6;
L_005771c1:; BB(0x005771c1);
    /* 005771c1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005771c3: fld dword ptr [0x9272b4] */ FPUSH(R_F32((u32)(0x9272b4u)));
    /* 005771c9: jmp 0x5771e6 */ goto L_005771e6;
L_005771cb:; BB(0x005771cb);
    /* 005771cb: fld dword ptr [0x9272b0] */ FPUSH(R_F32((u32)(0x9272b0u)));
    /* 005771d1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005771d3: fcom dword ptr [0x9272b8] */ fx_compare(ST(0), R_F32((u32)(0x9272b8u))); 
    /* 005771d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005771db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005771dc: jbe 0x5771e6 */ if ((fC||fZ)) goto L_005771e6;
L_005771de:; BB(0x005771de);
    /* 005771de: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005771e0: fld dword ptr [0x9272b8] */ FPUSH(R_F32((u32)(0x9272b8u)));
L_005771e6:; BB(0x005771e6);
    /* 005771e6: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 005771e9: ret  */ FN_RET(0x005771a4); r_esp += 4; return;
}

void f_005771ec(void) /* sub_5771EC */
{
    FN_ENTER(0x005771ec);
    /* 005771ec: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 005771ef: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 005771f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005771f4: jne 0x577213 */ if (!fZ) goto L_00577213;
L_005771f6:; BB(0x005771f6);
    /* 005771f6: fld dword ptr [0xa74060] */ FPUSH(R_F32((u32)(0xa74060u)));
    /* 005771fc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005771fe: fcom dword ptr [0x9272ac] */ fx_compare(ST(0), R_F32((u32)(0x9272acu))); 
    /* 00577204: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00577206: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00577207: jae 0x57722e */ if (!fC) goto L_0057722e;
L_00577209:; BB(0x00577209);
    /* 00577209: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057720b: fld dword ptr [0x9272a4] */ FPUSH(R_F32((u32)(0x9272a4u)));
    /* 00577211: jmp 0x57722e */ goto L_0057722e;
L_00577213:; BB(0x00577213);
    /* 00577213: fld dword ptr [0xa74060] */ FPUSH(R_F32((u32)(0xa74060u)));
    /* 00577219: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057721b: fcom dword ptr [0x9272a8] */ fx_compare(ST(0), R_F32((u32)(0x9272a8u))); 
    /* 00577221: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00577223: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00577224: jbe 0x57722e */ if ((fC||fZ)) goto L_0057722e;
L_00577226:; BB(0x00577226);
    /* 00577226: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00577228: fld dword ptr [0x9272a8] */ FPUSH(R_F32((u32)(0x9272a8u)));
L_0057722e:; BB(0x0057722e);
    /* 0057722e: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00577231: ret  */ FN_RET(0x005771ec); r_esp += 4; return;
}

void f_0057723c(void) /* sub_57723C */
{
    FN_ENTER(0x0057723c);
    /* 0057723c: mov dword ptr [ecx + 0x18], 1 */ W32((u32)(r_ecx+0x18u), 0x1u);
    /* 00577243: ret  */ FN_RET(0x0057723c); r_esp += 4; return;
}

void f_00577244(void) /* sub_577244 */
{
    FN_ENTER(0x00577244);
    /* 00577244: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00577247: fcomp dword ptr [0x9272a0] */ fx_compare(ST(0), R_F32((u32)(0x9272a0u))); FPOP();
    /* 0057724d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057724f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00577251: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00577252: mov eax, 1 */ r_eax = 0x1u;
    /* 00577257: jb 0x57725b */ if (fC) goto L_0057725b;
L_00577259:; BB(0x00577259);
    /* 00577259: mov eax, edx */ r_eax = r_edx;
L_0057725b:; BB(0x0057725b);
    /* 0057725b: ret  */ FN_RET(0x00577244); r_esp += 4; return;
}

void f_0057725c(void) /* sub_57725C */
{
    FN_ENTER(0x0057725c);
    /* 0057725c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057725d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577260: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00577262: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 00577267: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00577269: jne 0x5772d6 */ if (!fZ) goto L_005772d6;
L_0057726b:; BB(0x0057726b);
    /* 0057726b: fld dword ptr [0x927294] */ FPUSH(R_F32((u32)(0x927294u)));
    /* 00577271: fld dword ptr [0x92729c] */ FPUSH(R_F32((u32)(0x92729cu)));
    /* 00577277: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00577279: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057727b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057727d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057727e: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00577282: ja 0x577286 */ if ((!fC&&!fZ)) goto L_00577286;
L_00577284:; BB(0x00577284);
    /* 00577284: fst st(1) */ ST(1) = ST(0);
L_00577286:; BB(0x00577286);
    /* 00577286: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00577288: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057728b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057728c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00577290: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x577295u); f_00830aa0();
    /* 00577295: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00577299: fchs  */ ST(0) = -ST(0);
    /* 0057729b: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0057729e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005772a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005772a1: jae 0x5772ac */ if (!fC) goto L_005772ac;
L_005772a3:; BB(0x005772a3);
    /* 005772a3: mov dword ptr [ebx + 0x18], 0 */ W32((u32)(r_ebx+0x18u), 0x0u);
    /* 005772aa: jmp 0x5772b3 */ goto L_005772b3;
L_005772ac:; BB(0x005772ac);
    /* 005772ac: mov dword ptr [ebx + 0x18], 1 */ W32((u32)(r_ebx+0x18u), 0x1u);
L_005772b3:; BB(0x005772b3);
    /* 005772b3: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 005772b6: fcomp dword ptr [0x927298] */ fx_compare(ST(0), R_F32((u32)(0x927298u))); FPOP();
    /* 005772bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005772be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005772bf: jae 0x5772cd */ if (!fC) goto L_005772cd;
L_005772c1:; BB(0x005772c1);
    /* 005772c1: mov eax, 1 */ r_eax = 0x1u;
    /* 005772c6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005772c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005772ca: ret 4 */ FN_RET(0x0057725c); r_esp += 8; return;
L_005772cd:; BB(0x005772cd);
    /* 005772cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005772cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005772d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005772d3: ret 4 */ FN_RET(0x0057725c); r_esp += 8; return;
L_005772d6:; BB(0x005772d6);
    /* 005772d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005772d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005772db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005772dc: ret 4 */ FN_RET(0x0057725c); r_esp += 8; return;
}

void f_005772e0(void) /* sub_5772E0 */
{
    FN_ENTER(0x005772e0);
    /* 005772e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005772e1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005772e4: mov edi, ecx */ r_edi = r_ecx;
    /* 005772e6: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005772ea: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005772ef: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005772f1: jne 0x577385 */ if (!fZ) goto L_00577385;
L_005772f7:; BB(0x005772f7);
    /* 005772f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005772f9: jne 0x577306 */ if (!fZ) goto L_00577306;
L_005772fb:; BB(0x005772fb);
    /* 005772fb: fld dword ptr [0x927290] */ FPUSH(R_F32((u32)(0x927290u)));
    /* 00577301: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00577304: jmp 0x57731b */ goto L_0057731b;
L_00577306:; BB(0x00577306);
    /* 00577306: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0057730a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057730b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057730d: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x577312u); f_00830aa0();
    /* 00577312: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00577316: fchs  */ ST(0) = -ST(0);
    /* 00577318: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0057731b:; BB(0x0057731b);
    /* 0057731b: fld dword ptr [0x927294] */ FPUSH(R_F32((u32)(0x927294u)));
    /* 00577321: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00577324: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00577326: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00577328: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057732a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057732b: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0057732f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577331: jbe 0x577335 */ if ((fC||fZ)) goto L_00577335;
L_00577333:; BB(0x00577333);
    /* 00577333: fst st(1) */ ST(1) = ST(0);
L_00577335:; BB(0x00577335);
    /* 00577335: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00577337: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057733a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057733b: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0057733f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x577344u); f_00830aa0();
    /* 00577344: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00577348: fchs  */ ST(0) = -ST(0);
    /* 0057734a: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 0057734d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057734f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00577350: jae 0x57735b */ if (!fC) goto L_0057735b;
L_00577352:; BB(0x00577352);
    /* 00577352: mov dword ptr [edi + 0x18], 0 */ W32((u32)(r_edi+0x18u), 0x0u);
    /* 00577359: jmp 0x577362 */ goto L_00577362;
L_0057735b:; BB(0x0057735b);
    /* 0057735b: mov dword ptr [edi + 0x18], 1 */ W32((u32)(r_edi+0x18u), 0x1u);
L_00577362:; BB(0x00577362);
    /* 00577362: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00577365: fcomp dword ptr [0x92728c] */ fx_compare(ST(0), R_F32((u32)(0x92728cu))); FPOP();
    /* 0057736b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057736d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057736e: jae 0x57737c */ if (!fC) goto L_0057737c;
L_00577370:; BB(0x00577370);
    /* 00577370: mov eax, 1 */ r_eax = 0x1u;
    /* 00577375: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00577378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00577379: ret 8 */ FN_RET(0x005772e0); r_esp += 12; return;
L_0057737c:; BB(0x0057737c);
    /* 0057737c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057737e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00577381: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00577382: ret 8 */ FN_RET(0x005772e0); r_esp += 12; return;
L_00577385:; BB(0x00577385);
    /* 00577385: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00577387: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057738a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057738b: ret 8 */ FN_RET(0x005772e0); r_esp += 12; return;
}

void f_00577360(void)
{
    FN_ENTER(0x00577360);
    /* 00577360: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00577362: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00577365: fcomp dword ptr [0x92728c] */ fx_compare(ST(0), R_F32((u32)(0x92728cu))); FPOP();
    /* 0057736b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057736d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057736e: jae 0x57737c */ if (!fC) goto L_0057737c;
L_00577370:; BB(0x00577370);
    /* 00577370: mov eax, 1 */ r_eax = 0x1u;
    /* 00577375: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00577378: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00577379: ret 8 */ FN_RET(0x00577360); r_esp += 12; return;
L_0057737c:; BB(0x0057737c);
    /* 0057737c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057737e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00577381: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00577382: ret 8 */ FN_RET(0x00577360); r_esp += 12; return;
}

void f_00577390(void) /* sub_577390 */
{
    FN_ENTER(0x00577390);
    /* 00577390: mov dword ptr [0xa74060], 0x3e6eeeef */ W32((u32)(0xa74060u), 0x3e6eeeefu);
    /* 0057739a: ret  */ FN_RET(0x00577390); r_esp += 4; return;
}

void f_0057739c(void) /* sub_57739C */
{
    FN_ENTER(0x0057739c);
    /* 0057739c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0057739e: mov dword ptr [ecx + 0x18], 1 */ W32((u32)(r_ecx+0x18u), 0x1u);
    /* 005773a5: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x5773a8u); call_ind(t); }
    /* 005773a8: ret  */ FN_RET(0x0057739c); r_esp += 4; return;
}

void f_005773ac(void) /* sub_5773AC */
{
    FN_ENTER(0x005773ac);
    /* 005773ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005773ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005773af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005773b1: call 0x577444 */ r_esp -= 4; W32(r_esp, 0x5773b6u); f_00577444();
    /* 005773b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005773ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005773bc: jne 0x5773c2 */ if (!fZ) goto L_005773c2;
L_005773be:; BB(0x005773be);
    /* 005773be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005773bf: ret 4 */ FN_RET(0x005773ac); r_esp += 8; return;
L_005773c2:; BB(0x005773c2);
    /* 005773c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005773c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5773c8u); f_005c2f74();
    /* 005773c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005773c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005773ca: ret 4 */ FN_RET(0x005773ac); r_esp += 8; return;
}

void f_005773d0(void) /* sub_5773D0 */
{
    FN_ENTER(0x005773d0);
    /* 005773d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005773d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005773d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005773d5: call 0x5773f4 */ r_esp -= 4; W32(r_esp, 0x5773dau); f_005773f4();
    /* 005773da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005773de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005773e0: jne 0x5773e6 */ if (!fZ) goto L_005773e6;
L_005773e2:; BB(0x005773e2);
    /* 005773e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005773e3: ret 4 */ FN_RET(0x005773d0); r_esp += 8; return;
L_005773e6:; BB(0x005773e6);
    /* 005773e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005773e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5773ecu); f_005c2f74();
    /* 005773ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005773ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005773ee: ret 4 */ FN_RET(0x005773d0); r_esp += 8; return;
}

void f_005773f4(void) /* sub_5773F4 */
{
    FN_ENTER(0x005773f4);
    /* 005773f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005773f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005773f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005773f9: push 0x8d742c */ { u32 v = 0x8d742cu; r_esp -= 4; W32(r_esp, v); }
    /* 005773fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577404: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577405: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057740c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057740f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00577412: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00577415: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00577418: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057741b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057741e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577421: mov dword ptr [ecx], 0xb06b34 */ W32((u32)(r_ecx), 0xb06b34u);
    /* 00577427: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057742e: call 0x577444 */ r_esp -= 4; W32(r_esp, 0x577433u); f_00577444();
    /* 00577433: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577436: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057743d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057743f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577440: ret  */ FN_RET(0x005773f4); r_esp += 4; return;
}

void f_00577444(void) /* sub_577444 */
{
    FN_ENTER(0x00577444);
    /* 00577444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577445: mov ebp, esp */ r_ebp = r_esp;
    /* 00577447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577449: push 0x8d7448 */ { u32 v = 0x8d7448u; r_esp -= 4; W32(r_esp, v); }
    /* 0057744e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577455: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057745c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057745f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00577462: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00577465: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00577468: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057746b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057746e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577471: mov dword ptr [ecx], 0xb06b20 */ W32((u32)(r_ecx), 0xb06b20u);
    /* 00577477: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057747e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x577483u); f_008171e8();
    /* 00577483: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577486: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057748d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057748f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577490: ret  */ FN_RET(0x00577444); r_esp += 4; return;
}

void f_00577494(void) /* sub_577494 */
{
    FN_ENTER(0x00577494);
    /* 00577494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00577495: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577496: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577499: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057749b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5774a0u); f_008587a5();
    /* 005774a0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005774a4: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 005774a8: fdiv dword ptr [0x9272d0] */ ST(0) = ST(0) / R_F32((u32)(0x9272d0u));
    /* 005774ae: fmul dword ptr [0x9272cc] */ ST(0) = ST(0) * R_F32((u32)(0x9272ccu));
    /* 005774b4: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 005774b8: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005774bd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005774c2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005774c6: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005774ca: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 005774ce: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005774d2: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 005774d6: mov ecx, esi */ r_ecx = r_esi;
    /* 005774d8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5774ddu); f_0082dcbc();
    /* 005774dd: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 005774e0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005774e2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005774e5: mov ecx, esi */ r_ecx = r_esi;
    /* 005774e7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005774ef: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5774f4u); f_0082ddd8();
    /* 005774f4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005774f7: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 005774fa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005774fc: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00577500: lea edx, [ebp + 0x1c] */ r_edx = (u32)(r_ebp+0x1cu);
    /* 00577503: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x577508u); f_0082ebac();
    /* 00577508: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057750b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057750c: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0057750f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x577514u); f_00508db8();
    /* 00577514: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00577517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577518: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00577519: ret  */ FN_RET(0x00577494); r_esp += 4; return;
}

void f_0057751c(void) /* sub_57751C */
{
    FN_ENTER(0x0057751c);
    /* 0057751c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057751d: mov esi, ecx */ r_esi = r_ecx;
    /* 0057751f: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00577522: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577524: je 0x57754f */ if (fZ) goto L_0057754f;
L_00577526:; BB(0x00577526);
    /* 00577526: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x57752bu); f_008173b4();
    /* 0057752b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057752d: je 0x57754f */ if (fZ) goto L_0057754f;
L_0057752f:; BB(0x0057752f);
    /* 0057752f: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00577532: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00577535: cmp eax, dword ptr [esi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00577538: jge 0x57753f */ if ((fS==fO)) goto L_0057753f;
L_0057753a:; BB(0x0057753a);
    /* 0057753a: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0057753d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057753e: ret  */ FN_RET(0x0057751c); r_esp += 4; return;
L_0057753f:; BB(0x0057753f);
    /* 0057753f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00577541: mov dword ptr [esi + 0x2c], 0 */ W32((u32)(r_esi+0x2cu), 0x0u);
    /* 00577548: mov ecx, esi */ r_ecx = r_esi;
    /* 0057754a: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x57754du); call_ind(t); }
    /* 0057754d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057754e: ret  */ FN_RET(0x0057751c); r_esp += 4; return;
L_0057754f:; BB(0x0057754f);
    /* 0057754f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00577553: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00577558: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0057755c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057755d: ret  */ FN_RET(0x0057751c); r_esp += 4; return;
}

void f_00577560(void) /* sub_577560 */
{
    FN_ENTER(0x00577560);
    /* 00577560: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00577561: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00577562: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577565: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00577567: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x57756cu); f_008587a5();
    /* 0057756c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00577570: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00577574: fdiv dword ptr [0x9272c4] */ ST(0) = ST(0) / R_F32((u32)(0x9272c4u));
    /* 0057757a: fmul dword ptr [0x9272c0] */ ST(0) = ST(0) * R_F32((u32)(0x9272c0u));
    /* 00577580: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 00577584: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00577589: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057758e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00577592: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 00577596: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057759a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0057759e: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 005775a2: mov ecx, edi */ r_ecx = r_edi;
    /* 005775a4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5775a9u); f_0082dcbc();
    /* 005775a9: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 005775ac: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005775ae: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005775b1: mov ecx, edi */ r_ecx = r_edi;
    /* 005775b3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005775bb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5775c0u); f_0082ddd8();
    /* 005775c0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005775c3: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 005775c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005775c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005775cc: lea edx, [ebx + 0x1c] */ r_edx = (u32)(r_ebx+0x1cu);
    /* 005775cf: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5775d4u); f_0082ebac();
    /* 005775d4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005775d7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005775da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005775db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005775dc: call 0x782bb0 */ r_esp -= 4; W32(r_esp, 0x5775e1u); f_00782bb0();
    /* 005775e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005775e4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005775e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005775e8: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 005775eb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5775f0u); f_00508db8();
    /* 005775f0: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005775f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005775f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005775f5: ret  */ FN_RET(0x00577560); r_esp += 4; return;
}

void f_005775f8(void) /* sub_5775F8 */
{
    FN_ENTER(0x005775f8);
    /* 005775f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005775f9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005775fb: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005775ff: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00577603: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00577607: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057760b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057760d: call 0x577628 */ r_esp -= 4; W32(r_esp, 0x577612u); f_00577628();
    /* 00577612: mov dword ptr [ebp], 0xb06b34 */ W32((u32)(r_ebp), 0xb06b34u);
    /* 00577619: mov eax, ebp */ r_eax = r_ebp;
    /* 0057761b: mov dword ptr [ebp + 0x30], 8 */ W32((u32)(r_ebp+0x30u), 0x8u);
    /* 00577622: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577623: ret 0x10 */ FN_RET(0x005775f8); r_esp += 20; return;
}

void f_00577628(void) /* sub_577628 */
{
    FN_ENTER(0x00577628);
    /* 00577628: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00577629: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057762a: mov esi, ecx */ r_esi = r_ecx;
    /* 0057762c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00577630: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00577634: mov ecx, esi */ r_ecx = r_esi;
    /* 00577636: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x57763bu); f_008193cc();
    /* 0057763b: mov dword ptr [esi], 0xb06b20 */ W32((u32)(r_esi), 0xb06b20u);
    /* 00577641: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00577644: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 00577647: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0057764a: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0057764d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00577651: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00577654: mov dword ptr [esi + 0x24], ebp */ W32((u32)(r_esi+0x24u), r_ebp);
    /* 00577657: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0057765a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0057765e: mov dword ptr [esi + 0x2c], 0 */ W32((u32)(r_esi+0x2cu), 0x0u);
    /* 00577665: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00577668: mov eax, esi */ r_eax = r_esi;
    /* 0057766a: mov dword ptr [esi + 0x30], 2 */ W32((u32)(r_esi+0x30u), 0x2u);
    /* 00577671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577672: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00577673: ret 0x10 */ FN_RET(0x00577628); r_esp += 20; return;
}

void f_00577678(void) /* sub_577678 */
{
    FN_ENTER(0x00577678);
    /* 00577678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00577679: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057767b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057767d: call 0x577710 */ r_esp -= 4; W32(r_esp, 0x577682u); f_00577710();
    /* 00577682: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00577686: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00577688: jne 0x57768e */ if (!fZ) goto L_0057768e;
L_0057768a:; BB(0x0057768a);
    /* 0057768a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057768b: ret 4 */ FN_RET(0x00577678); r_esp += 8; return;
L_0057768e:; BB(0x0057768e);
    /* 0057768e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057768f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x577694u); f_005c2f74();
    /* 00577694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00577695: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00577696: ret 4 */ FN_RET(0x00577678); r_esp += 8; return;
}

void f_0057769c(void) /* sub_57769C */
{
    FN_ENTER(0x0057769c);
    /* 0057769c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057769d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057769f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005776a1: call 0x5776c0 */ r_esp -= 4; W32(r_esp, 0x5776a6u); f_005776c0();
    /* 005776a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005776aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005776ac: jne 0x5776b2 */ if (!fZ) goto L_005776b2;
L_005776ae:; BB(0x005776ae);
    /* 005776ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005776af: ret 4 */ FN_RET(0x0057769c); r_esp += 8; return;
L_005776b2:; BB(0x005776b2);
    /* 005776b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005776b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5776b8u); f_005c2f74();
    /* 005776b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005776b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005776ba: ret 4 */ FN_RET(0x0057769c); r_esp += 8; return;
}

void f_005776c0(void) /* sub_5776C0 */
{
    FN_ENTER(0x005776c0);
    /* 005776c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005776c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005776c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005776c5: push 0x8d7464 */ { u32 v = 0x8d7464u; r_esp -= 4; W32(r_esp, v); }
    /* 005776ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005776d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005776d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005776d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005776db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005776de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005776e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005776e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005776e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005776ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005776ed: mov dword ptr [ecx], 0xb06bd0 */ W32((u32)(r_ecx), 0xb06bd0u);
    /* 005776f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005776fa: call 0x577710 */ r_esp -= 4; W32(r_esp, 0x5776ffu); f_00577710();
    /* 005776ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577702: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00577709: mov esp, ebp */ r_esp = r_ebp;
    /* 0057770b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057770c: ret  */ FN_RET(0x005776c0); r_esp += 4; return;
}

void f_00577710(void) /* sub_577710 */
{
    FN_ENTER(0x00577710);
    /* 00577710: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577711: mov ebp, esp */ r_ebp = r_esp;
    /* 00577713: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577715: push 0x8d7480 */ { u32 v = 0x8d7480u; r_esp -= 4; W32(r_esp, v); }
    /* 0057771a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577720: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577721: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00577728: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057772b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057772e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00577731: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00577734: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00577737: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057773a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057773d: mov dword ptr [ecx], 0xb06bc0 */ W32((u32)(r_ecx), 0xb06bc0u);
    /* 00577743: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057774a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x57774fu); f_008171e8();
    /* 0057774f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577752: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00577759: mov esp, ebp */ r_esp = r_ebp;
    /* 0057775b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057775c: ret  */ FN_RET(0x00577710); r_esp += 4; return;
}

void f_00577760(void) /* sub_577760 */
{
    FN_ENTER(0x00577760);
    /* 00577760: fld dword ptr [ecx + 0xc4] */ FPUSH(R_F32((u32)(r_ecx+0xc4u)));
    /* 00577766: fcom dword ptr [ecx + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xc0u))); 
    /* 0057776c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057776e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057776f: ja 0x57787f */ if ((!fC&&!fZ)) goto L_0057787f;
L_00577775:; BB(0x00577775);
    /* 00577775: fld dword ptr [0x927320] */ FPUSH(R_F32((u32)(0x927320u)));
    /* 0057777b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057777d: fcom dword ptr [0x927324] */ fx_compare(ST(0), R_F32((u32)(0x927324u))); 
    /* 00577783: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00577785: fst dword ptr [ecx + 0xc4] */ W_F32((u32)(r_ecx+0xc4u), ST(0));
    /* 0057778b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057778c: jbe 0x57787f */ if ((fC||fZ)) goto L_0057787f;
L_00577792:; BB(0x00577792);
    /* 00577792: fld dword ptr [ecx + 0x7c] */ FPUSH(R_F32((u32)(r_ecx+0x7cu)));
    /* 00577795: fld dword ptr [ecx + 0x80] */ FPUSH(R_F32((u32)(r_ecx+0x80u)));
    /* 0057779b: fld dword ptr [ecx + 0x84] */ FPUSH(R_F32((u32)(r_ecx+0x84u)));
    /* 005777a1: fld dword ptr [ecx + 0x88] */ FPUSH(R_F32((u32)(r_ecx+0x88u)));
    /* 005777a7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005777a9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005777ab: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 005777ad: fld dword ptr [ecx + 0x8c] */ FPUSH(R_F32((u32)(r_ecx+0x8cu)));
    /* 005777b3: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 005777b9: fld dword ptr [ecx + 0x90] */ FPUSH(R_F32((u32)(r_ecx+0x90u)));
    /* 005777bf: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 005777c5: fld dword ptr [ecx + 0x94] */ FPUSH(R_F32((u32)(r_ecx+0x94u)));
    /* 005777cb: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 005777d1: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 005777d7: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 005777dd: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 005777df: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 005777e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005777e4: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005777e6: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 005777e9: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005777eb: fld dword ptr [ecx + 0x9c] */ FPUSH(R_F32((u32)(r_ecx+0x9cu)));
    /* 005777f1: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 005777f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005777f9: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 005777fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005777fe: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00577800: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 00577803: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577805: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00577807: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00577809: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0057780c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057780e: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00577810: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00577813: fld dword ptr [ecx + 0xa0] */ FPUSH(R_F32((u32)(r_ecx+0xa0u)));
    /* 00577819: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 0057781f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00577821: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 00577824: fld dword ptr [ecx + 0xa4] */ FPUSH(R_F32((u32)(r_ecx+0xa4u)));
    /* 0057782a: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 00577830: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00577832: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 00577835: fld dword ptr [ecx + 0xa8] */ FPUSH(R_F32((u32)(r_ecx+0xa8u)));
    /* 0057783b: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 00577841: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00577843: fstp dword ptr [ecx + 0x54] */ W_F32((u32)(r_ecx+0x54u), ST(0)); FPOP();
    /* 00577846: fld dword ptr [ecx + 0xac] */ FPUSH(R_F32((u32)(r_ecx+0xacu)));
    /* 0057784c: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 00577852: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00577854: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577856: fstp dword ptr [ecx + 0x64] */ W_F32((u32)(r_ecx+0x64u), ST(0)); FPOP();
    /* 00577859: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 0057785f: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 00577865: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00577867: fld dword ptr [ecx + 0xb4] */ FPUSH(R_F32((u32)(r_ecx+0xb4u)));
    /* 0057786d: fmul dword ptr [ecx + 0xc4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xc4u));
    /* 00577873: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577875: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 00577878: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0057787a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057787c: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
L_0057787f:; BB(0x0057787f);
    /* 0057787f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00577881: ret  */ FN_RET(0x00577760); r_esp += 4; return;
}

void f_0057786f(void)
{
    FN_ENTER(0x0057786f);
    /* 0057786f: les eax, ptr [eax] */ UNSUP(0x0057786f, "les eax, ptr [eax]");
    /* 00577871: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00577873: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577875: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 00577878: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0057787a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057787c: fstp dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0)); FPOP();
    /* 0057787f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00577881: ret  */ FN_RET(0x0057786f); r_esp += 4; return;
}

void f_00577884(void) /* sub_577884 */
{
    FN_ENTER(0x00577884);
    /* 00577884: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00577885: mov edi, ecx */ r_edi = r_ecx;
    /* 00577887: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0057788c: cmp eax, dword ptr [0x9bedd8] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9bedd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00577892: je 0x57791a */ if (fZ) goto L_0057791a;
L_00577898:; BB(0x00577898);
    /* 00577898: fld dword ptr [edi + 0xc4] */ FPUSH(R_F32((u32)(r_edi+0xc4u)));
    /* 0057789e: fcomp dword ptr [0x92731c] */ fx_compare(ST(0), R_F32((u32)(0x92731cu))); FPOP();
    /* 005778a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005778a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005778a7: jbe 0x57791a */ if ((fC||fZ)) goto L_0057791a;
L_005778a9:; BB(0x005778a9);
    /* 005778a9: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005778ae: lea edx, [edi + 0x7c] */ r_edx = (u32)(r_edi+0x7cu);
    /* 005778b1: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005778b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005778b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005778b8: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5778bdu); f_007a9180();
    /* 005778bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005778c0: fcomp dword ptr [0x927318] */ fx_compare(ST(0), R_F32((u32)(0x927318u))); FPOP();
    /* 005778c6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005778c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005778c9: jae 0x57791a */ if (!fC) goto L_0057791a;
L_005778cb:; BB(0x005778cb);
    /* 005778cb: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005778d0: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005778d5: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5778dau); f_007a9044();
    /* 005778da: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 005778df: call 0x7a93a8 */ r_esp -= 4; W32(r_esp, 0x5778e4u); f_007a93a8();
    /* 005778e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005778e5: mov ecx, dword ptr [edi + 0xb8] */ r_ecx = R32((u32)(r_edi+0xb8u));
    /* 005778eb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5778f0u); f_00829cc8();
    /* 005778f0: mov ecx, dword ptr [edi + 0xbc] */ r_ecx = R32((u32)(r_edi+0xbcu));
    /* 005778f6: call 0x829d68 */ r_esp -= 4; W32(r_esp, 0x5778fbu); f_00829d68();
    /* 005778fb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005778fd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005778ff: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00577902: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00577903: call 0x82b2f0 */ r_esp -= 4; W32(r_esp, 0x577908u); f_0082b2f0();
    /* 00577908: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057790b: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x577910u); f_007a9318();
    /* 00577910: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00577915: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0057791a:; BB(0x0057791a);
    /* 0057791a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057791b: ret  */ FN_RET(0x00577884); r_esp += 4; return;
}

void f_0057791c(void) /* sub_57791C */
{
    FN_ENTER(0x0057791c);
    /* 0057791c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057791d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0057791f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00577923: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00577927: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057792b: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057792f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00577933: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00577937: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00577939: call 0x577a2c */ r_esp -= 4; W32(r_esp, 0x57793eu); f_00577a2c();
    /* 0057793e: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00577944: fld dword ptr [ebp + 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0x7cu)));
    /* 00577947: fld dword ptr [ebp + 0x80] */ FPUSH(R_F32((u32)(r_ebp+0x80u)));
    /* 0057794d: fld dword ptr [ebp + 0x84] */ FPUSH(R_F32((u32)(r_ebp+0x84u)));
    /* 00577953: fld dword ptr [ebp + 0x88] */ FPUSH(R_F32((u32)(r_ebp+0x88u)));
    /* 00577959: fld dword ptr [ebp + 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0x8cu)));
    /* 0057795f: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00577965: fld dword ptr [ebp + 0x94] */ FPUSH(R_F32((u32)(r_ebp+0x94u)));
    /* 0057796b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0057796d: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0057796f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577971: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 00577973: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577975: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 00577977: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577979: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0057797b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0057797d: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0057797f: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 00577982: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00577984: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00577987: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577989: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0057798b: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 0057798e: fld dword ptr [ebp + 0x98] */ FPUSH(R_F32((u32)(r_ebp+0x98u)));
    /* 00577994: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00577996: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577998: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0057799a: fstp dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0)); FPOP();
    /* 0057799d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0057799f: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 005779a2: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 005779a8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005779aa: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005779ac: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 005779af: fld dword ptr [ebp + 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xa0u)));
    /* 005779b5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005779b7: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005779b9: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 005779bc: fld dword ptr [ebp + 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xa4u)));
    /* 005779c2: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005779c4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005779c6: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 005779c9: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 005779cf: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005779d1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005779d3: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 005779d6: fld dword ptr [ebp + 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xacu)));
    /* 005779dc: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005779de: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005779e0: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 005779e6: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005779e8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005779ea: fstp dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0)); FPOP();
    /* 005779ed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005779ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005779f1: fld dword ptr [ebp + 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xb4u)));
    /* 005779f7: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005779f9: fstp dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0)); FPOP();
    /* 005779fc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005779fe: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 00577a01: mov eax, ebp */ r_eax = r_ebp;
    /* 00577a03: mov dword ptr [ebp], 0xb06bd0 */ W32((u32)(r_ebp), 0xb06bd0u);
    /* 00577a0a: mov edx, 0xffffff */ r_edx = 0xffffffu;
    /* 00577a0f: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00577a12: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 00577a15: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 00577a1f: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 00577a22: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00577a25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577a26: ret 0x18 */ FN_RET(0x0057791c); r_esp += 28; return;
}

void f_00577a2c(void) /* sub_577A2C */
{
    FN_ENTER(0x00577a2c);
    /* 00577a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00577a2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00577a2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00577a31: push 0x8d749e */ { u32 v = 0x8d749eu; r_esp -= 4; W32(r_esp, v); }
    /* 00577a36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00577a3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577a3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00577a44: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00577a4a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00577a4d: mov dword ptr [ebp - 0x58], edi */ W32((u32)(r_ebp+0xffffffa8u), r_edi);
    /* 00577a50: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00577a53: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 00577a56: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00577a59: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00577a5c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00577a5f: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00577a65: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00577a68: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00577a6b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00577a6e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00577a71: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00577a74: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00577a77: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00577a7a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00577a7d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x577a82u); f_008193cc();
    /* 00577a82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00577a89: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577a8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00577a92: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00577a95: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00577a98: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00577a9b: fld dword ptr [0x927304] */ FPUSH(R_F32((u32)(0x927304u)));
    /* 00577aa1: mov dword ptr [eax], 0xb06bc0 */ W32((u32)(r_eax), 0xb06bc0u);
    /* 00577aa7: mov edx, dword ptr [0x9bedb8] */ r_edx = R32((u32)(0x9bedb8u));
    /* 00577aad: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 00577ab4: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 00577ab7: fild dword ptr [ebp - 0x80] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff80u)));
    /* 00577aba: fmul dword ptr [0x927310] */ ST(0) = ST(0) * R_F32((u32)(0x927310u));
    /* 00577ac0: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 00577ac6: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 00577acd: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00577ad2: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00577ad5: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 00577adc: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 00577ae2: mov dword ptr [eax + 0xbc], ebx */ W32((u32)(r_eax+0xbcu), r_ebx);
    /* 00577ae8: mov dword ptr [eax + 0xc0], esi */ W32((u32)(r_eax+0xc0u), r_esi);
    /* 00577aee: mov dword ptr [eax + 0x44], 0x3f800000 */ W32((u32)(r_eax+0x44u), 0x3f800000u);
    /* 00577af5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00577afa: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00577afd: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 00577b00: mov dword ptr [eax + 0x58], 0x3f800000 */ W32((u32)(r_eax+0x58u), 0x3f800000u);
    /* 00577b07: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00577b0a: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00577b0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00577b10: mov dword ptr [eax + 0x5c], 0 */ W32((u32)(r_eax+0x5cu), 0x0u);
    /* 00577b17: mov dword ptr [eax + 0x70], 0x3f800000 */ W32((u32)(r_eax+0x70u), 0x3f800000u);
    /* 00577b1e: mov dword ptr [eax + 0x74], 0x3f800000 */ W32((u32)(r_eax+0x74u), 0x3f800000u);
    /* 00577b25: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00577b27: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00577b2d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00577b30: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 00577b36: fadd dword ptr [ebp - 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff48u));
    /* 00577b3c: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00577b3f: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 00577b45: mov dword ptr [ebp - 0xb4], eax */ W32((u32)(r_ebp+0xffffff4cu), r_eax);
    /* 00577b4b: lea eax, [ebp - 0xbc] */ r_eax = (u32)(r_ebp+0xffffff44u);
    /* 00577b51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577b52: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x577b57u); f_00780630();
    /* 00577b57: mov ebx, eax */ r_ebx = r_eax;
    /* 00577b59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577b5c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577b5e: je 0x57804a */ if (fZ) goto L_0057804a;
L_00577b64:; BB(0x00577b64);
    /* 00577b64: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577b6a: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00577b6d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00577b6f: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00577b72: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00577b75: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 00577b7b: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 00577b7e: mov dword ptr [eax + 0x84], edi */ W32((u32)(r_eax+0x84u), r_edi);
    /* 00577b84: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577b89u); f_008587a5();
    /* 00577b89: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577b8f: fld dword ptr [edx + 0x80] */ FPUSH(R_F32((u32)(r_edx+0x80u)));
    /* 00577b95: fadd dword ptr [0x9272e4] */ ST(0) = ST(0) + R_F32((u32)(0x9272e4u));
    /* 00577b9b: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577b9e: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577ba1: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577ba7: fmul dword ptr [0x9272fc] */ ST(0) = ST(0) * R_F32((u32)(0x9272fcu));
    /* 00577bad: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 00577bb7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00577bb9: fstp dword ptr [edx + 0x80] */ W_F32((u32)(r_edx+0x80u), ST(0)); FPOP();
    /* 00577bbf: mov dword ptr [ebp - 0xac], 0 */ W32((u32)(r_ebp+0xffffff54u), 0x0u);
    /* 00577bc9: mov dword ptr [ebp - 0xa8], 0x3f800000 */ W32((u32)(r_ebp+0xffffff58u), 0x3f800000u);
    /* 00577bd3: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00577bd9: lea eax, [ebp - 0x98] */ r_eax = (u32)(r_ebp+0xffffff68u);
    /* 00577bdf: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00577be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577bea: mov dword ptr [ebp - 0xa0], 0x3f800000 */ W32((u32)(r_ebp+0xffffff60u), 0x3f800000u);
    /* 00577bf4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00577bf5: mov dword ptr [ebp - 0x9c], 0 */ W32((u32)(r_ebp+0xffffff64u), 0x0u);
    /* 00577bff: mov ebx, dword ptr [ebx + 4] */ r_ebx = R32((u32)(r_ebx+0x4u));
    /* 00577c02: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00577c05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00577c06: call 0x7a8e2c */ r_esp -= 4; W32(r_esp, 0x577c0bu); f_007a8e2c();
    /* 00577c0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577c0e: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 00577c14: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577c19: jl 0x577c22 */ if ((fS!=fO)) goto L_00577c22;
L_00577c1b:; BB(0x00577c1b);
    /* 00577c1b: cmp eax, 0x5000 */ {  u32 a = r_eax; u32 b = 0x5000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00577c20: jle 0x577c4f */ if ((fZ||fS!=fO)) goto L_00577c4f;
L_00577c22:; BB(0x00577c22);
    /* 00577c22: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577c28: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 00577c2b: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 00577c2e: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00577c31: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00577c35: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00577c3b: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00577c3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00577c42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00577c49: mov esp, ebp */ r_esp = r_ebp;
    /* 00577c4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00577c4c: ret 0x18 */ FN_RET(0x00577a2c); r_esp += 28; return;
L_00577c4f:; BB(0x00577c4f);
    /* 00577c4f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x577c54u); f_0082d7b0();
    /* 00577c54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00577c56: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x577c5bu); f_00830cd8();
    /* 00577c5b: mov edx, dword ptr [ebp - 0x94] */ r_edx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00577c61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00577c63: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x577c68u); f_0082d8bc();
    /* 00577c68: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 00577c6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00577c70: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x577c75u); f_00830c04();
    /* 00577c75: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577c7au); f_008587a5();
    /* 00577c7a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577c7d: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577c80: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577c86: fmul dword ptr [0x9272f8] */ ST(0) = ST(0) * R_F32((u32)(0x9272f8u));
    /* 00577c8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00577c8e: fnstcw word ptr [ebp - 0x70] */ W16((u32)(r_ebp+0xffffff90u), fcw);
    /* 00577c91: movzx eax, word ptr [ebp - 0x70] */ r_eax = (u32)R16((u32)(r_ebp+0xffffff90u));
    /* 00577c95: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00577c9a: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00577c9d: fldcw word ptr [ebp - 0x68] */ fcw = R16((u32)(r_ebp+0xffffff98u));
    /* 00577ca0: fistp dword ptr [ebp - 0x60] */ W32((u32)(r_ebp+0xffffffa0u), (u32)fx_int32(ST(0))); FPOP();
    /* 00577ca3: fldcw word ptr [ebp - 0x70] */ fcw = R16((u32)(r_ebp+0xffffff90u));
    /* 00577ca6: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00577ca9: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x577caeu); f_0082e9e4();
    /* 00577cae: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 00577cb4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00577cb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577cb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00577cb9: lea edx, [ebp - 0xb0] */ r_edx = (u32)(r_ebp+0xffffff50u);
    /* 00577cbf: call 0x83c128 */ r_esp -= 4; W32(r_esp, 0x577cc4u); f_0083c128();
    /* 00577cc4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x577cc9u); f_0082da80();
    /* 00577cc9: fld dword ptr [ebp - 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff50u)));
    /* 00577ccf: fld dword ptr [ebp - 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xffffff54u)));
    /* 00577cd5: fld dword ptr [ebp - 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff58u)));
    /* 00577cdb: fld dword ptr [ebp - 0xa4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff5cu)));
    /* 00577ce1: fld dword ptr [ebp - 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff60u)));
    /* 00577ce7: fld dword ptr [ebp - 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff64u)));
    /* 00577ced: mov ebx, dword ptr [ebp - 0x84] */ r_ebx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577cf3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00577cf5: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 00577cf8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577cfa: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00577cfd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577cff: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 00577d02: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00577d05: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00577d08: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00577d0b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577d10u); f_008587a5();
    /* 00577d10: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577d13: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577d16: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577d1c: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577d22: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577d28: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00577d2b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577d30u); f_008587a5();
    /* 00577d30: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 00577d33: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00577d36: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00577d39: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00577d3c: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00577d3f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577d41: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00577d43: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00577d45: fmul dword ptr [ebp - 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffb8u));
    /* 00577d48: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577d4b: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577d4e: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577d54: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577d5a: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577d60: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00577d62: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00577d64: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 00577d67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577d69: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00577d6b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00577d6d: fstp dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0)); FPOP();
    /* 00577d73: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00577d75: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577d77: fstp dword ptr [ebx + 0x8c] */ W_F32((u32)(r_ebx+0x8cu), ST(0)); FPOP();
    /* 00577d7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00577d7f: fstp dword ptr [ebx + 0x90] */ W_F32((u32)(r_ebx+0x90u), ST(0)); FPOP();
    /* 00577d85: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577d8au); f_008587a5();
    /* 00577d8a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577d8d: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577d90: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577d96: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577d9c: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577da2: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00577da5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577daau); f_008587a5();
    /* 00577daa: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 00577dad: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00577db0: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00577db3: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00577db6: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00577db9: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00577dbc: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00577dbf: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577dc2: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577dc5: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577dcb: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577dd1: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00577dd3: fchs  */ ST(0) = -ST(0);
    /* 00577dd5: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00577dd7: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577ddd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577ddf: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 00577de1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577de3: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00577de5: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00577de7: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 00577dea: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00577dec: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 00577def: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00577df1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00577df3: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 00577df6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577df8: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
    /* 00577dfe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577e00: fchs  */ ST(0) = -ST(0);
    /* 00577e02: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00577e04: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00577e07: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00577e09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577e0b: fstp dword ptr [ebx + 0x98] */ W_F32((u32)(r_ebx+0x98u), ST(0)); FPOP();
    /* 00577e11: fchs  */ ST(0) = -ST(0);
    /* 00577e13: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00577e15: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00577e18: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00577e1a: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 00577e20: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577e25u); f_008587a5();
    /* 00577e25: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577e28: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577e2b: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577e31: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577e37: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577e3d: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00577e40: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577e45u); f_008587a5();
    /* 00577e45: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00577e48: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 00577e4b: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00577e4e: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00577e51: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00577e54: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00577e57: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 00577e5a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00577e5c: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 00577e5e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00577e60: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00577e62: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00577e64: fchs  */ ST(0) = -ST(0);
    /* 00577e66: fst dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0));
    /* 00577e69: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577e6c: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577e6f: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577e75: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577e7b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577e7d: fchs  */ ST(0) = -ST(0);
    /* 00577e7f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577e81: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577e87: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00577e89: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577e8b: fst dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0));
    /* 00577e8e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00577e90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577e92: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00577e94: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00577e96: fstp dword ptr [ebx + 0xa0] */ W_F32((u32)(r_ebx+0xa0u), ST(0)); FPOP();
    /* 00577e9c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00577e9e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577ea0: fstp dword ptr [ebx + 0xa4] */ W_F32((u32)(r_ebx+0xa4u), ST(0)); FPOP();
    /* 00577ea6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577ea8: fchs  */ ST(0) = -ST(0);
    /* 00577eaa: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00577eac: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 00577eaf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00577eb1: fstp dword ptr [ebx + 0xa8] */ W_F32((u32)(r_ebx+0xa8u), ST(0)); FPOP();
    /* 00577eb7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577ebcu); f_008587a5();
    /* 00577ebc: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577ebf: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577ec2: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577ec8: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577ece: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577ed4: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00577ed7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x577edcu); f_008587a5();
    /* 00577edc: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00577edf: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00577ee2: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 00577ee5: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 00577ee8: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00577eeb: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00577eee: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 00577ef1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00577ef3: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 00577ef5: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00577ef7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00577ef9: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00577efc: fild dword ptr [ebp - 0x78] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff88u)));
    /* 00577eff: fdiv dword ptr [0x927300] */ ST(0) = ST(0) / R_F32((u32)(0x927300u));
    /* 00577f05: fmul dword ptr [0x9272f0] */ ST(0) = ST(0) * R_F32((u32)(0x9272f0u));
    /* 00577f0b: fadd dword ptr [0x9272f4] */ ST(0) = ST(0) + R_F32((u32)(0x9272f4u));
    /* 00577f11: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00577f13: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00577f15: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 00577f17: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00577f19: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00577f1b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00577f1d: fstp dword ptr [ebx + 0xac] */ W_F32((u32)(r_ebx+0xacu), ST(0)); FPOP();
    /* 00577f23: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00577f25: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577f2b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577f2d: fstp dword ptr [ebx + 0xb0] */ W_F32((u32)(r_ebx+0xb0u), ST(0)); FPOP();
    /* 00577f33: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00577f35: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 00577f3b: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 00577f41: fcom dword ptr [0x927304] */ fx_compare(ST(0), R_F32((u32)(0x927304u))); 
    /* 00577f47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00577f49: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 00577f4c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00577f4d: jbe 0x57802f */ if ((fC||fZ)) goto L_0057802f;
L_00577f53:; BB(0x00577f53);
    /* 00577f53: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00577f55:; BB(0x00577f55);
    /* 00577f55: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 00577f58: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 00577f5e: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 00577f63: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00577f66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00577f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00577f69: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00577f6c: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00577f6e: fld dword ptr [ebx + ecx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x88u)));
    /* 00577f75: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00577f77: fld dword ptr [ebx + ecx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x8cu)));
    /* 00577f7e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00577f80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577f82: fadd dword ptr [ecx + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x7cu));
    /* 00577f85: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577f87: fadd dword ptr [ecx + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x80u));
    /* 00577f8d: fld dword ptr [ebx + ecx + 0x90] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x90u)));
    /* 00577f94: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00577f96: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00577f98: fadd dword ptr [ecx + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x84u));
    /* 00577f9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577fa0: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00577fa6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577fa8: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 00577fae: fstp dword ptr [ebp - 0x88] */ W_F32((u32)(r_ebp+0xffffff78u), ST(0)); FPOP();
    /* 00577fb4: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x577fb9u); f_00780630();
    /* 00577fb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00577fbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00577fbe: je 0x577fd7 */ if (fZ) goto L_00577fd7;
L_00577fc0:; BB(0x00577fc0);
    /* 00577fc0: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00577fc3: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00577fc6: fsub dword ptr [ebp - 0x8c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffff74u));
    /* 00577fcc: fcomp dword ptr [0x9272ec] */ fx_compare(ST(0), R_F32((u32)(0x9272ecu))); FPOP();
    /* 00577fd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00577fd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00577fd5: jae 0x57801d */ if (!fC) goto L_0057801d;
L_00577fd7:; BB(0x00577fd7);
    /* 00577fd7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 00577fdd: fld dword ptr [0x9272e8] */ FPUSH(R_F32((u32)(0x9272e8u)));
    /* 00577fe3: fld dword ptr [ebx + ecx + 0x88] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x88u)));
    /* 00577fea: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00577fec: fld dword ptr [ebx + ecx + 0x8c] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x8cu)));
    /* 00577ff3: fld dword ptr [ebx + ecx + 0x90] */ FPUSH(R_F32((u32)(r_ebx+r_ecx+0x90u)));
    /* 00577ffa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00577ffc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00577ffe: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00578000: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00578002: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00578004: fstp dword ptr [ebx + ecx + 0x88] */ W_F32((u32)(r_ebx+r_ecx+0x88u), ST(0)); FPOP();
    /* 0057800b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057800d: fstp dword ptr [ebx + ecx + 0x8c] */ W_F32((u32)(r_ebx+r_ecx+0x8cu), ST(0)); FPOP();
    /* 00578014: fstp dword ptr [ebx + ecx + 0x90] */ W_F32((u32)(r_ebx+r_ecx+0x90u), ST(0)); FPOP();
    /* 0057801b: jmp 0x578023 */ goto L_00578023;
L_0057801d:; BB(0x0057801d);
    /* 0057801d: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
L_00578023:; BB(0x00578023);
    /* 00578023: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00578026: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00578029: jl 0x577f55 */ if ((fS!=fO)) goto L_00577f55;
L_0057802f:; BB(0x0057802f);
    /* 0057802f: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 00578032: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 00578035: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00578038: mov eax, ecx */ r_eax = r_ecx;
    /* 0057803a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057803d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578044: mov esp, ebp */ r_esp = r_ebp;
    /* 00578046: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578047: ret 0x18 */ FN_RET(0x00577a2c); r_esp += 28; return;
L_0057804a:; BB(0x0057804a);
    /* 0057804a: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 00578050: mov edi, dword ptr [ebp - 0x58] */ r_edi = R32((u32)(r_ebp+0xffffffa8u));
    /* 00578053: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 00578056: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00578059: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0057805d: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00578063: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00578067: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057806a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00578071: mov esp, ebp */ r_esp = r_ebp;
    /* 00578073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00578074: ret 0x18 */ FN_RET(0x00577a2c); r_esp += 28; return;
}

void f_00577a8d(void)
{
    FN_ENTER(0x00577a8d);
}

