#include "protos.h"

void f_006740a8(void) /* sub_6740A8 */
{
    FN_ENTER(0x006740a8);
    /* 006740a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006740a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006740ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006740ad: call 0x6744d4 */ r_esp -= 4; W32(r_esp, 0x6740b2u); f_006744d4();
    /* 006740b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006740b4: call 0x674474 */ r_esp -= 4; W32(r_esp, 0x6740b9u); f_00674474();
    /* 006740b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006740bb: call 0x674460 */ r_esp -= 4; W32(r_esp, 0x6740c0u); f_00674460();
    /* 006740c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006740c2: je 0x6740d6 */ if (fZ) goto L_006740d6;
L_006740c4:; BB(0x006740c4);
    /* 006740c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006740c6: call 0x6744a4 */ r_esp -= 4; W32(r_esp, 0x6740cbu); f_006744a4();
    /* 006740cb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006740cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006740cf: call 0x675248 */ r_esp -= 4; W32(r_esp, 0x6740d4u); f_00675248();
    /* 006740d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006740d5: ret  */ FN_RET(0x006740a8); r_esp += 4; return;
L_006740d6:; BB(0x006740d6);
    /* 006740d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006740d8: call 0x6744bc */ r_esp -= 4; W32(r_esp, 0x6740ddu); f_006744bc();
    /* 006740dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006740de: ret  */ FN_RET(0x006740a8); r_esp += 4; return;
}

void f_006740e0(void) /* sub_6740E0 */
{
    FN_ENTER(0x006740e0);
    /* 006740e0: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 006740e6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006740e9: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 006740ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006740f1: jl 0x6740f4 */ if ((fS!=fO)) goto L_006740f4;
L_006740f3:; BB(0x006740f3);
    /* 006740f3: ret  */ FN_RET(0x006740e0); r_esp += 4; return;
L_006740f4:; BB(0x006740f4);
    /* 006740f4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006740f6: call 0x675248 */ r_esp -= 4; W32(r_esp, 0x6740fbu); f_00675248();
    /* 006740fb: ret  */ FN_RET(0x006740e0); r_esp += 4; return;
}

void f_006740fc(void) /* sub_6740FC */
{
    FN_ENTER(0x006740fc);
    /* 006740fc: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 00674102: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674105: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 0067410b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067410d: jl 0x674110 */ if ((fS!=fO)) goto L_00674110;
L_0067410f:; BB(0x0067410f);
    /* 0067410f: ret  */ FN_RET(0x006740fc); r_esp += 4; return;
L_00674110:; BB(0x00674110);
    /* 00674110: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00674112: call 0x675248 */ r_esp -= 4; W32(r_esp, 0x674117u); f_00675248();
    /* 00674117: ret  */ FN_RET(0x006740fc); r_esp += 4; return;
}

void f_00674118(void)
{
    FN_ENTER(0x00674118);
    /* 00674118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674119: mov ebp, esp */ r_ebp = r_esp;
    /* 0067411b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067411d: push 0x8e9658 */ { u32 v = 0x8e9658u; r_esp -= 4; W32(r_esp, v); }
    /* 00674122: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00674128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674129: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00674130: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674133: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00674136: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00674139: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067413c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067413f: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00674144: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067414b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x674150u); f_005caba4();
    /* 00674150: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00674151: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00674154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674156: je 0x67418f */ if (fZ) goto L_0067418f;
L_00674158:; BB(0x00674158);
    /* 00674158: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067415f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00674166: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674169: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067416f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674172: call 0x674194 */ r_esp -= 4; W32(r_esp, 0x674177u); f_00674194();
    /* 00674177: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067417a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00674181:; BB(0x00674181);
    /* 00674181: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674184: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067418b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067418d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067418e: ret  */ FN_RET(0x00674118); r_esp += 4; return;
L_0067418f:; BB(0x0067418f);
    /* 0067418f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674191: jmp 0x674181 */ goto L_00674181;
}

void f_00674194(void) /* sub_674194 */
{
    FN_ENTER(0x00674194);
    /* 00674194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674195: mov ebp, esp */ r_ebp = r_esp;
    /* 00674197: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00674199: push 0x8e9674 */ { u32 v = 0x8e9674u; r_esp -= 4; W32(r_esp, v); }
    /* 0067419e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006741a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006741a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006741ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006741af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006741b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006741b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006741b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006741bb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006741be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006741c1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006741c4: call 0x6752c0 */ r_esp -= 4; W32(r_esp, 0x6741c9u); f_006752c0();
    /* 006741c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006741d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006741d3: mov dword ptr [ecx], 0xb364e0 */ W32((u32)(r_ecx), 0xb364e0u);
    /* 006741d9: mov eax, dword ptr [0x9c991c] */ r_eax = R32((u32)(0x9c991cu));
    /* 006741de: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006741e0: push 0x9c9860 */ { u32 v = 0x9c9860u; r_esp -= 4; W32(r_esp, v); }
    /* 006741e5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006741e8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6741edu); f_007b9a88();
    /* 006741ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006741f0: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6741f5u); f_007b4f54();
    /* 006741f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006741f8: call 0x675278 */ r_esp -= 4; W32(r_esp, 0x6741fdu); f_00675278();
    /* 006741fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674200: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674203: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067420a: mov esp, ebp */ r_esp = r_ebp;
    /* 0067420c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067420d: ret 8 */ FN_RET(0x00674194); r_esp += 12; return;
}

void f_00674210(void) /* sub_674210 */
{
    FN_ENTER(0x00674210);
    /* 00674210: mov dword ptr [0xa8fe5c], 0x3f800000 */ W32((u32)(0xa8fe5cu), 0x3f800000u);
    /* 0067421a: mov dword ptr [0xa8fe60], 0x41000000 */ W32((u32)(0xa8fe60u), 0x41000000u);
    /* 00674224: mov dword ptr [0xa8fe64], 0x3fc00000 */ W32((u32)(0xa8fe64u), 0x3fc00000u);
    /* 0067422e: ret  */ FN_RET(0x00674210); r_esp += 4; return;
}

void f_00674230(void) /* sub_674230 */
{
    FN_ENTER(0x00674230);
    /* 00674230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674231: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00674233: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00674235: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x67423au); f_0061cdb0();
    /* 0067423a: mov dword ptr [ebp + 0xd8], 0x1e */ W32((u32)(r_ebp+0xd8u), 0x1eu);
    /* 00674244: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674245: ret  */ FN_RET(0x00674230); r_esp += 4; return;
}

void f_00674248(void) /* sub_674248 */
{
    FN_ENTER(0x00674248);
    /* 00674248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674249: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0067424b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0067424d: call 0x675544 */ r_esp -= 4; W32(r_esp, 0x674252u); f_00675544();
    /* 00674252: mov dword ptr [ebp + 0xd8], 0x1e */ W32((u32)(r_ebp+0xd8u), 0x1eu);
    /* 0067425c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067425d: ret  */ FN_RET(0x00674248); r_esp += 4; return;
}

void f_00674260(void) /* sub_674260 */
{
    FN_ENTER(0x00674260);
    /* 00674260: call 0x675594 */ r_esp -= 4; W32(r_esp, 0x674265u); f_00675594();
    /* 00674265: ret  */ FN_RET(0x00674260); r_esp += 4; return;
}

void f_00674268(void) /* sub_674268 */
{
    FN_ENTER(0x00674268);
    /* 00674268: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674269: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067426b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067426d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x674272u); f_0061cdb0();
    /* 00674272: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00674278: mov dword ptr [ebx + 0xd8], 0xfa */ W32((u32)(r_ebx+0xd8u), 0xfau);
    /* 00674282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674284: je 0x6742a6 */ if (fZ) goto L_006742a6;
L_00674286:; BB(0x00674286);
    /* 00674286: mov dword ptr [ebx + 0xfc], 0 */ W32((u32)(r_ebx+0xfcu), 0x0u);
    /* 00674290: mov dword ptr [ebx + 0xe4], 0xbf800000 */ W32((u32)(r_ebx+0xe4u), 0xbf800000u);
    /* 0067429a: mov dword ptr [ebx + 0xf0], 0xffffff7d */ W32((u32)(r_ebx+0xf0u), 0xffffff7du);
    /* 006742a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006742a5: ret  */ FN_RET(0x00674268); r_esp += 4; return;
L_006742a6:; BB(0x006742a6);
    /* 006742a6: mov dword ptr [ebx + 0xf0], 0x83 */ W32((u32)(r_ebx+0xf0u), 0x83u);
    /* 006742b0: mov dword ptr [ebx + 0xfc], 1 */ W32((u32)(r_ebx+0xfcu), 0x1u);
    /* 006742ba: mov dword ptr [ebx + 0xe4], 0x3f800000 */ W32((u32)(r_ebx+0xe4u), 0x3f800000u);
    /* 006742c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006742c5: ret  */ FN_RET(0x00674268); r_esp += 4; return;
}

void f_006742c8(void) /* sub_6742C8 */
{
    FN_ENTER(0x006742c8);
    /* 006742c8: call 0x6755a4 */ r_esp -= 4; W32(r_esp, 0x6742cdu); f_006755a4();
    /* 006742cd: ret  */ FN_RET(0x006742c8); r_esp += 4; return;
}

void f_006742d0(void) /* sub_6742D0 */
{
    FN_ENTER(0x006742d0);
    /* 006742d0: call 0x6755ac */ r_esp -= 4; W32(r_esp, 0x6742d5u); f_006755ac();
    /* 006742d5: ret  */ FN_RET(0x006742d0); r_esp += 4; return;
}

void f_006742d8(void) /* sub_6742D8 */
{
    FN_ENTER(0x006742d8);
    /* 006742d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006742d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006742db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006742dd: call 0x67439c */ r_esp -= 4; W32(r_esp, 0x6742e2u); f_0067439c();
    /* 006742e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006742e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006742e8: jne 0x6742ee */ if (!fZ) goto L_006742ee;
L_006742ea:; BB(0x006742ea);
    /* 006742ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006742eb: ret 4 */ FN_RET(0x006742d8); r_esp += 8; return;
L_006742ee:; BB(0x006742ee);
    /* 006742ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006742ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6742f4u); f_005c2f74();
    /* 006742f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006742f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006742f6: ret 4 */ FN_RET(0x006742d8); r_esp += 8; return;
}

void f_006742fc(void) /* sub_6742FC */
{
    FN_ENTER(0x006742fc);
    /* 006742fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006742fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006742ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00674301: call 0x674320 */ r_esp -= 4; W32(r_esp, 0x674306u); f_00674320();
    /* 00674306: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067430a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067430c: jne 0x674312 */ if (!fZ) goto L_00674312;
L_0067430e:; BB(0x0067430e);
    /* 0067430e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067430f: ret 4 */ FN_RET(0x006742fc); r_esp += 8; return;
L_00674312:; BB(0x00674312);
    /* 00674312: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674313: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x674318u); f_005c2f74();
    /* 00674318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00674319: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067431a: ret 4 */ FN_RET(0x006742fc); r_esp += 8; return;
}

void f_00674320(void) /* sub_674320 */
{
    FN_ENTER(0x00674320);
    /* 00674320: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674321: mov ebp, esp */ r_ebp = r_esp;
    /* 00674323: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00674325: push 0x8e9690 */ { u32 v = 0x8e9690u; r_esp -= 4; W32(r_esp, v); }
    /* 0067432a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00674330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674331: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00674338: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067433b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067433e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00674341: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00674344: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00674347: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067434a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00674351: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674354: mov dword ptr [ecx], 0xb366e0 */ W32((u32)(r_ecx), 0xb366e0u);
    /* 0067435a: call 0x67437c */ r_esp -= 4; W32(r_esp, 0x67435fu); f_0067437c();
    /* 0067435f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00674366: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00674369: call 0x67439c */ r_esp -= 4; W32(r_esp, 0x67436eu); f_0067439c();
    /* 0067436e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674371: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00674378: mov esp, ebp */ r_esp = r_ebp;
    /* 0067437a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067437b: ret  */ FN_RET(0x00674320); r_esp += 4; return;
}

void f_0067437c(void) /* sub_67437C */
{
    FN_ENTER(0x0067437c);
    /* 0067437c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067437d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0067437f: mov ecx, dword ptr [ebp + 0xf4] */ r_ecx = R32((u32)(r_ebp+0xf4u));
    /* 00674385: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674387: je 0x674398 */ if (fZ) goto L_00674398;
L_00674389:; BB(0x00674389);
    /* 00674389: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x67438eu); f_007127b0();
    /* 0067438e: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
L_00674398:; BB(0x00674398);
    /* 00674398: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674399: ret  */ FN_RET(0x0067437c); r_esp += 4; return;
}

void f_0067439c(void) /* sub_67439C */
{
    FN_ENTER(0x0067439c);
    /* 0067439c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067439d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067439f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006743a1: push 0x8e96ac */ { u32 v = 0x8e96acu; r_esp -= 4; W32(r_esp, v); }
    /* 006743a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006743ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006743ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006743b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006743b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006743ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006743bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006743c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006743c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006743c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006743c9: mov dword ptr [ecx], 0xb36660 */ W32((u32)(r_ecx), 0xb36660u);
    /* 006743cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006743d6: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x6743dbu); f_006131f4();
    /* 006743db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006743de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006743e5: mov esp, ebp */ r_esp = r_ebp;
    /* 006743e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006743e8: ret  */ FN_RET(0x0067439c); r_esp += 4; return;
}

void f_006743ec(void) /* sub_6743EC */
{
    FN_ENTER(0x006743ec);
    /* 006743ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006743ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006743ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006743f1: call 0x674410 */ r_esp -= 4; W32(r_esp, 0x6743f6u); f_00674410();
    /* 006743f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006743fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006743fc: jne 0x674402 */ if (!fZ) goto L_00674402;
L_006743fe:; BB(0x006743fe);
    /* 006743fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006743ff: ret 4 */ FN_RET(0x006743ec); r_esp += 8; return;
L_00674402:; BB(0x00674402);
    /* 00674402: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674403: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x674408u); f_005c2f74();
    /* 00674408: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00674409: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067440a: ret 4 */ FN_RET(0x006743ec); r_esp += 8; return;
}

void f_00674410(void) /* sub_674410 */
{
    FN_ENTER(0x00674410);
    /* 00674410: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674411: mov ebp, esp */ r_ebp = r_esp;
    /* 00674413: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00674415: push 0x8e96c8 */ { u32 v = 0x8e96c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0067441a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00674420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674421: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00674428: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067442b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067442e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00674431: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00674434: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00674437: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067443a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067443d: mov dword ptr [ecx], 0xb36760 */ W32((u32)(r_ecx), 0xb36760u);
    /* 00674443: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067444a: call 0x67439c */ r_esp -= 4; W32(r_esp, 0x67444fu); f_0067439c();
    /* 0067444f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00674452: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00674459: mov esp, ebp */ r_esp = r_ebp;
    /* 0067445b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067445c: ret  */ FN_RET(0x00674410); r_esp += 4; return;
}

void f_00674460(void) /* sub_674460 */
{
    FN_ENTER(0x00674460);
    /* 00674460: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 00674466: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674468: je 0x674470 */ if (fZ) goto L_00674470;
L_0067446a:; BB(0x0067446a);
    /* 0067446a: mov eax, 1 */ r_eax = 0x1u;
    /* 0067446f: ret  */ FN_RET(0x00674460); r_esp += 4; return;
L_00674470:; BB(0x00674470);
    /* 00674470: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674472: ret  */ FN_RET(0x00674460); r_esp += 4; return;
}

void f_00674474(void) /* sub_674474 */
{
    FN_ENTER(0x00674474);
    /* 00674474: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0067447a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067447d: je 0x6744a3 */ if (fZ) goto L_006744a3;
L_0067447f:; BB(0x0067447f);
    /* 0067447f: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674482: jne 0x6744a3 */ if (!fZ) goto L_006744a3;
L_00674484:; BB(0x00674484);
    /* 00674484: mov eax, dword ptr [ecx + 0xd8] */ r_eax = R32((u32)(r_ecx+0xd8u));
    /* 0067448a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067448d: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 00674493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674495: jge 0x6744a3 */ if ((fS==fO)) goto L_006744a3;
L_00674497:; BB(0x00674497);
    /* 00674497: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0067449a: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067449d: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006744a3:; BB(0x006744a3);
    /* 006744a3: ret  */ FN_RET(0x00674474); r_esp += 4; return;
}

void f_006744a4(void) /* sub_6744A4 */
{
    FN_ENTER(0x006744a4);
    /* 006744a4: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006744a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006744a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006744aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006744ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006744ac: push 0x587 */ { u32 v = 0x587u; r_esp -= 4; W32(r_esp, v); }
    /* 006744b1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6744b6u); f_00814298();
    /* 006744b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006744b9: ret  */ FN_RET(0x006744a4); r_esp += 4; return;
}

void f_006744bc(void) /* sub_6744BC */
{
    FN_ENTER(0x006744bc);
    /* 006744bc: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 006744c2: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006744c4: jne 0x6744d1 */ if (!fZ) goto L_006744d1;
L_006744c6:; BB(0x006744c6);
    /* 006744c6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006744c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006744c9: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x6744ceu); f_006946a8();
    /* 006744ce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006744d1:; BB(0x006744d1);
    /* 006744d1: ret  */ FN_RET(0x006744bc); r_esp += 4; return;
}

void f_006744d4(void) /* sub_6744D4 */
{
    FN_ENTER(0x006744d4);
    /* 006744d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006744d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006744d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006744d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006744d8: mov eax, ecx */ r_eax = r_ecx;
    /* 006744da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006744dc: mov ebp, eax */ r_ebp = r_eax;
    /* 006744de: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 006744e8: mov ebx, ecx */ r_ebx = r_ecx;
L_006744ea:; BB(0x006744ea);
    /* 006744ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006744eb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6744f0u); f_0068d5a8();
    /* 006744f0: mov edi, eax */ r_edi = r_eax;
    /* 006744f2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006744f5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006744f7: je 0x674555 */ if (fZ) goto L_00674555;
L_006744f9:; BB(0x006744f9);
    /* 006744f9: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 006744ff: mov esi, 1 */ r_esi = 0x1u;
    /* 00674504: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674507: jle 0x674555 */ if ((fZ||fS!=fO)) goto L_00674555;
L_00674509:; BB(0x00674509);
    /* 00674509: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0067450f: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674515: jne 0x67454e */ if (!fZ) goto L_0067454e;
L_00674517:; BB(0x00674517);
    /* 00674517: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674518: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x67451du); f_007b4d18();
    /* 0067451d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067451e: push dword ptr [ebp + 0xe0] */ { u32 v = R32((u32)(r_ebp+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674525: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00674527: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674528: call 0x7b647c */ r_esp -= 4; W32(r_esp, 0x67452du); f_007b647c();
    /* 0067452d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0067452f: je 0x674548 */ if (fZ) goto L_00674548;
L_00674531:; BB(0x00674531);
    /* 00674531: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00674533: mov edx, 1 */ r_edx = 0x1u;
    /* 00674538: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0067453a: or dword ptr [ebp + 0xdc], edx */ { u32 ad = (u32)(r_ebp+0xdcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00674540: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
    /* 00674546: jmp 0x67454e */ goto L_0067454e;
L_00674548:; BB(0x00674548);
    /* 00674548: mov edx, dword ptr [ebp + 0xa8] */ r_edx = R32((u32)(r_ebp+0xa8u));
L_0067454e:; BB(0x0067454e);
    /* 0067454e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674551: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674553: jl 0x674509 */ if ((fS!=fO)) goto L_00674509;
L_00674555:; BB(0x00674555);
    /* 00674555: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00674558: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067455b: jl 0x6744ea */ if ((fS!=fO)) goto L_006744ea;
L_0067455d:; BB(0x0067455d);
    /* 0067455d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067455e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067455f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674560: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674561: ret  */ FN_RET(0x006744d4); r_esp += 4; return;
}

void f_00674564(void) /* sub_674564 */
{
    FN_ENTER(0x00674564);
    /* 00674564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674565: mov esi, ecx */ r_esi = r_ecx;
    /* 00674567: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x67456cu); f_004f7c84();
    /* 0067456c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067456e: jne 0x67461a */ if (!fZ) goto L_0067461a;
L_00674574:; BB(0x00674574);
    /* 00674574: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0067457a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067457c: je 0x6745e7 */ if (fZ) goto L_006745e7;
L_0067457e:; BB(0x0067457e);
    /* 0067457e: movsx edx, word ptr [esi + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xd4u));
    /* 00674585: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674587: je 0x67461c */ if (fZ) goto L_0067461c;
L_0067458d:; BB(0x0067458d);
    /* 0067458d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674590: je 0x6745c8 */ if (fZ) goto L_006745c8;
L_00674592:; BB(0x00674592);
    /* 00674592: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674595: jne 0x6745ad */ if (!fZ) goto L_006745ad;
L_00674597:; BB(0x00674597);
    /* 00674597: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00674599: mov ecx, esi */ r_ecx = r_esi;
    /* 0067459b: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x67459eu); call_ind(t); }
    /* 0067459e: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 006745a4: movsx edx, word ptr [esi + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xd4u));
    /* 006745ab: jmp 0x6745dc */ goto L_006745dc;
L_006745ad:; BB(0x006745ad);
    /* 006745ad: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006745b0: jne 0x6745dc */ if (!fZ) goto L_006745dc;
L_006745b2:; BB(0x006745b2);
    /* 006745b2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006745b4: mov ecx, esi */ r_ecx = r_esi;
    /* 006745b6: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x6745b9u); call_ind(t); }
    /* 006745b9: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 006745bf: movsx edx, word ptr [esi + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xd4u));
    /* 006745c6: jmp 0x6745dc */ goto L_006745dc;
L_006745c8:; BB(0x006745c8);
    /* 006745c8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006745ca: mov ecx, esi */ r_ecx = r_esi;
    /* 006745cc: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6745cfu); call_ind(t); }
    /* 006745cf: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 006745d5: movsx edx, word ptr [esi + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xd4u));
L_006745dc:; BB(0x006745dc);
    /* 006745dc: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006745df: mov dword ptr [esi + 0xd0], eax */ W32((u32)(r_esi+0xd0u), r_eax);
    /* 006745e5: jmp 0x6745ee */ goto L_006745ee;
L_006745e7:; BB(0x006745e7);
    /* 006745e7: movsx edx, word ptr [esi + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xd4u));
L_006745ee:; BB(0x006745ee);
    /* 006745ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006745f0: je 0x674632 */ if (fZ) goto L_00674632;
L_006745f2:; BB(0x006745f2);
    /* 006745f2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006745f5: je 0x674613 */ if (fZ) goto L_00674613;
L_006745f7:; BB(0x006745f7);
    /* 006745f7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006745fa: jne 0x674605 */ if (!fZ) goto L_00674605;
L_006745fc:; BB(0x006745fc);
    /* 006745fc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006745fe: mov ecx, esi */ r_ecx = r_esi;
    /* 00674600: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x674603u); call_ind(t); }
    /* 00674603: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674604: ret  */ FN_RET(0x00674564); r_esp += 4; return;
L_00674605:; BB(0x00674605);
    /* 00674605: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00674608: jne 0x67461a */ if (!fZ) goto L_0067461a;
L_0067460a:; BB(0x0067460a);
    /* 0067460a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0067460c: mov ecx, esi */ r_ecx = r_esi;
    /* 0067460e: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x674611u); call_ind(t); }
    /* 00674611: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674612: ret  */ FN_RET(0x00674564); r_esp += 4; return;
L_00674613:; BB(0x00674613);
    /* 00674613: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00674615: mov ecx, esi */ r_ecx = r_esi;
    /* 00674617: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x67461au); call_ind(t); }
L_0067461a:; BB(0x0067461a);
    /* 0067461a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067461b: ret  */ FN_RET(0x00674564); r_esp += 4; return;
L_0067461c:; BB(0x0067461c);
    /* 0067461c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0067461e: mov ecx, esi */ r_ecx = r_esi;
    /* 00674620: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x674623u); call_ind(t); }
    /* 00674623: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 00674629: movsx edx, word ptr [esi + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xd4u));
    /* 00674630: jmp 0x6745dc */ goto L_006745dc;
L_00674632:; BB(0x00674632);
    /* 00674632: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00674634: mov ecx, esi */ r_ecx = r_esi;
    /* 00674636: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x674639u); call_ind(t); }
    /* 00674639: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067463a: ret  */ FN_RET(0x00674564); r_esp += 4; return;
}

void f_0067463c(void) /* sub_67463C */
{
    FN_ENTER(0x0067463c);
    /* 0067463c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067463d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067463e: mov edi, ecx */ r_edi = r_ecx;
    /* 00674640: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00674645: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674646: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67464bu); f_0068d5a8();
    /* 0067464b: mov esi, eax */ r_esi = r_eax;
    /* 0067464d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674650: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674652: je 0x674687 */ if (fZ) goto L_00674687;
L_00674654:; BB(0x00674654);
    /* 00674654: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00674657: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0067465a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0067465b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067465c: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x674661u); f_007a90a8();
    /* 00674661: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674665: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00674667: mov ecx, esi */ r_ecx = r_esi;
    /* 00674669: call 0x694430 */ r_esp -= 4; W32(r_esp, 0x67466eu); f_00694430();
    /* 0067466e: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 00674674: mov dword ptr [edi + 0xd8], 0x1c */ W32((u32)(r_edi+0xd8u), 0x1cu);
    /* 0067467e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674681: mov dword ptr [edi + 0xd0], eax */ W32((u32)(r_edi+0xd0u), r_eax);
L_00674687:; BB(0x00674687);
    /* 00674687: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674688: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674689: ret 4 */ FN_RET(0x0067463c); r_esp += 8; return;
}

void f_0067468c(void) /* sub_67468C */
{
    FN_ENTER(0x0067468c);
    /* 0067468c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067468d: mov eax, 0x3c */ r_eax = 0x3cu;
    /* 00674692: mov ebx, eax */ r_ebx = r_eax;
L_00674694:; BB(0x00674694);
    /* 00674694: mov edx, dword ptr [ebx + 0xa8fe80] */ r_edx = R32((u32)(r_ebx+0xa8fe80u));
    /* 0067469a: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067469d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067469f: je 0x6746b4 */ if (fZ) goto L_006746b4;
L_006746a1:; BB(0x006746a1);
    /* 006746a1: je 0x6746b4 */ if (fZ) goto L_006746b4;
L_006746a3:; BB(0x006746a3);
    /* 006746a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006746a4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6746a9u); f_00857e98();
    /* 006746a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006746aa: mov dword ptr [ebx + 0xa8fe84], 0 */ W32((u32)(r_ebx+0xa8fe84u), 0x0u);
L_006746b4:; BB(0x006746b4);
    /* 006746b4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006746b6: jge 0x674694 */ if ((fS==fO)) goto L_00674694;
L_006746b8:; BB(0x006746b8);
    /* 006746b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006746b9: ret  */ FN_RET(0x0067468c); r_esp += 4; return;
}

void f_006746bc(void) /* sub_6746BC */
{
    FN_ENTER(0x006746bc);
    /* 006746bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006746bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006746be: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006746c1: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 006746c5: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 006746c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006746cb: jl 0x6746d9 */ if ((fS!=fO)) goto L_006746d9;
L_006746cd:; BB(0x006746cd);
    /* 006746cd: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006746d0: jge 0x6746d9 */ if ((fS==fO)) goto L_006746d9;
L_006746d2:; BB(0x006746d2);
    /* 006746d2: mov eax, 1 */ r_eax = 0x1u;
    /* 006746d7: jmp 0x6746db */ goto L_006746db;
L_006746d9:; BB(0x006746d9);
    /* 006746d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006746db:; BB(0x006746db);
    /* 006746db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006746dd: je 0x67483a */ if (fZ) goto L_0067483a;
L_006746e3:; BB(0x006746e3);
    /* 006746e3: movsx esi, byte ptr [edi + 6] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edi+0x6u));
    /* 006746e7: mov eax, esi */ r_eax = r_esi;
    /* 006746e9: call 0x6748ec */ r_esp -= 4; W32(r_esp, 0x6746eeu); f_006748ec();
    /* 006746ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006746f0: je 0x6746fe */ if (fZ) goto L_006746fe;
L_006746f2:; BB(0x006746f2);
    /* 006746f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006746f3: mov ecx, eax */ r_ecx = r_eax;
    /* 006746f5: call 0x674914 */ r_esp -= 4; W32(r_esp, 0x6746fau); f_00674914();
    /* 006746fa: movsx esi, byte ptr [edi + 6] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edi+0x6u));
L_006746fe:; BB(0x006746fe);
    /* 006746fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674700: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00674704: mov eax, esi */ r_eax = r_esi;
    /* 00674706: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0067470a: jmp 0x674710 */ goto L_00674710;
L_0067470c:; BB(0x0067470c);
    /* 0067470c: movsx eax, byte ptr [edi + 6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x6u));
L_00674710:; BB(0x00674710);
    /* 00674710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00674712: jl 0x674720 */ if ((fS!=fO)) goto L_00674720;
L_00674714:; BB(0x00674714);
    /* 00674714: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674717: jge 0x674720 */ if ((fS==fO)) goto L_00674720;
L_00674719:; BB(0x00674719);
    /* 00674719: mov edx, 1 */ r_edx = 0x1u;
    /* 0067471e: jmp 0x674722 */ goto L_00674722;
L_00674720:; BB(0x00674720);
    /* 00674720: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00674722:; BB(0x00674722);
    /* 00674722: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674724: je 0x67473c */ if (fZ) goto L_0067473c;
L_00674726:; BB(0x00674726);
    /* 00674726: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00674728: jl 0x674736 */ if ((fS!=fO)) goto L_00674736;
L_0067472a:; BB(0x0067472a);
    /* 0067472a: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067472d: jge 0x674736 */ if ((fS==fO)) goto L_00674736;
L_0067472f:; BB(0x0067472f);
    /* 0067472f: mov edx, 1 */ r_edx = 0x1u;
    /* 00674734: jmp 0x674738 */ goto L_00674738;
L_00674736:; BB(0x00674736);
    /* 00674736: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00674738:; BB(0x00674738);
    /* 00674738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067473a: jne 0x674740 */ if (!fZ) goto L_00674740;
L_0067473c:; BB(0x0067473c);
    /* 0067473c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067473e: jmp 0x67474f */ goto L_0067474f;
L_00674740:; BB(0x00674740);
    /* 00674740: mov edx, dword ptr [eax*4 + 0xa8fe80] */ r_edx = R32((u32)(r_eax*4+0xa8fe80u));
    /* 00674747: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674749: je 0x67473c */ if (fZ) goto L_0067473c;
L_0067474b:; BB(0x0067474b);
    /* 0067474b: mov ecx, dword ptr [edx + esi*4 + 4] */ r_ecx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0067474f:; BB(0x0067474f);
    /* 0067474f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674751: je 0x67482e */ if (fZ) goto L_0067482e;
L_00674757:; BB(0x00674757);
    /* 00674757: movsx edx, word ptr [edi + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0067475b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067475d: je 0x6748aa */ if (fZ) goto L_006748aa;
L_00674763:; BB(0x00674763);
    /* 00674763: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674766: je 0x674872 */ if (fZ) goto L_00674872;
L_0067476c:; BB(0x0067476c);
    /* 0067476c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067476f: je 0x674840 */ if (fZ) goto L_00674840;
L_00674775:; BB(0x00674775);
    /* 00674775: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674778: je 0x6747f8 */ if (fZ) goto L_006747f8;
L_0067477e:; BB(0x0067477e);
    /* 0067477e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674781: jne 0x6747bb */ if (!fZ) goto L_006747bb;
L_00674783:; BB(0x00674783);
    /* 00674783: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 0067478a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067478d: je 0x6747b3 */ if (fZ) goto L_006747b3;
L_0067478f:; BB(0x0067478f);
    /* 0067478f: mov edx, 3 */ r_edx = 0x3u;
    /* 00674794: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 0067479b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067479d: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 006747a4: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 006747aa: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006747ad: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006747b3:; BB(0x006747b3);
    /* 006747b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006747b4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006747b6: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x6747b9u); call_ind(t); }
    /* 006747b9: jmp 0x67482e */ goto L_0067482e;
L_006747bb:; BB(0x006747bb);
    /* 006747bb: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006747be: jne 0x67482e */ if (!fZ) goto L_0067482e;
L_006747c0:; BB(0x006747c0);
    /* 006747c0: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 006747c7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006747ca: je 0x6747f0 */ if (fZ) goto L_006747f0;
L_006747cc:; BB(0x006747cc);
    /* 006747cc: mov edx, 2 */ r_edx = 0x2u;
    /* 006747d1: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 006747d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006747da: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 006747e1: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 006747e7: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006747ea: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006747f0:; BB(0x006747f0);
    /* 006747f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006747f1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006747f3: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x6747f6u); call_ind(t); }
    /* 006747f6: jmp 0x67482e */ goto L_0067482e;
L_006747f8:; BB(0x006747f8);
    /* 006747f8: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 006747ff: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674802: je 0x674828 */ if (fZ) goto L_00674828;
L_00674804:; BB(0x00674804);
    /* 00674804: mov edx, 1 */ r_edx = 0x1u;
    /* 00674809: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 00674810: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00674812: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 00674819: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0067481f: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00674822: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_00674828:; BB(0x00674828);
    /* 00674828: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00674829: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067482b: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x67482eu); call_ind(t); }
L_0067482e:; BB(0x0067482e);
    /* 0067482e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674831: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674834: jl 0x67470c */ if ((fS!=fO)) goto L_0067470c;
L_0067483a:; BB(0x0067483a);
    /* 0067483a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067483d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067483e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067483f: ret  */ FN_RET(0x006746bc); r_esp += 4; return;
L_00674840:; BB(0x00674840);
    /* 00674840: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 00674847: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674849: je 0x67486a */ if (fZ) goto L_0067486a;
L_0067484b:; BB(0x0067484b);
    /* 0067484b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067484d: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 00674854: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 0067485b: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00674861: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00674864: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_0067486a:; BB(0x0067486a);
    /* 0067486a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067486b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067486d: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x674870u); call_ind(t); }
    /* 00674870: jmp 0x67482e */ goto L_0067482e;
L_00674872:; BB(0x00674872);
    /* 00674872: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 00674879: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067487c: je 0x6748a2 */ if (fZ) goto L_006748a2;
L_0067487e:; BB(0x0067487e);
    /* 0067487e: mov edx, 3 */ r_edx = 0x3u;
    /* 00674883: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 0067488a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067488c: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 00674893: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00674899: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0067489c: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006748a2:; BB(0x006748a2);
    /* 006748a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006748a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006748a5: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x6748a8u); call_ind(t); }
    /* 006748a8: jmp 0x67482e */ goto L_0067482e;
L_006748aa:; BB(0x006748aa);
    /* 006748aa: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 006748b1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006748b4: je 0x6748da */ if (fZ) goto L_006748da;
L_006748b6:; BB(0x006748b6);
    /* 006748b6: mov edx, 3 */ r_edx = 0x3u;
    /* 006748bb: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 006748c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006748c4: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 006748cb: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 006748d1: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006748d4: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006748da:; BB(0x006748da);
    /* 006748da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006748db: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006748dd: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x6748e0u); call_ind(t); }
    /* 006748e0: jmp 0x67482e */ goto L_0067482e;
}

void f_006748ec(void) /* sub_6748EC */
{
    FN_ENTER(0x006748ec);
    /* 006748ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006748ee: jl 0x6748fc */ if ((fS!=fO)) goto L_006748fc;
L_006748f0:; BB(0x006748f0);
    /* 006748f0: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006748f3: jge 0x6748fc */ if ((fS==fO)) goto L_006748fc;
L_006748f5:; BB(0x006748f5);
    /* 006748f5: mov edx, 1 */ r_edx = 0x1u;
    /* 006748fa: jmp 0x6748fe */ goto L_006748fe;
L_006748fc:; BB(0x006748fc);
    /* 006748fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006748fe:; BB(0x006748fe);
    /* 006748fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674900: je 0x674910 */ if (fZ) goto L_00674910;
L_00674902:; BB(0x00674902);
    /* 00674902: mov eax, dword ptr [eax*4 + 0xa8fe80] */ r_eax = R32((u32)(r_eax*4+0xa8fe80u));
    /* 00674909: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067490b: je 0x674910 */ if (fZ) goto L_00674910;
L_0067490d:; BB(0x0067490d);
    /* 0067490d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0067490f: ret  */ FN_RET(0x006748ec); r_esp += 4; return;
L_00674910:; BB(0x00674910);
    /* 00674910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674912: ret  */ FN_RET(0x006748ec); r_esp += 4; return;
}

void f_00674914(void) /* sub_674914 */
{
    FN_ENTER(0x00674914);
    /* 00674914: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674915: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00674919: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0067491d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067491f: je 0x674a66 */ if (fZ) goto L_00674a66;
L_00674925:; BB(0x00674925);
    /* 00674925: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674928: je 0x674a2c */ if (fZ) goto L_00674a2c;
L_0067492e:; BB(0x0067492e);
    /* 0067492e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674931: je 0x6749f8 */ if (fZ) goto L_006749f8;
L_00674937:; BB(0x00674937);
    /* 00674937: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067493a: je 0x6749be */ if (fZ) goto L_006749be;
L_00674940:; BB(0x00674940);
    /* 00674940: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674943: jne 0x67497f */ if (!fZ) goto L_0067497f;
L_00674945:; BB(0x00674945);
    /* 00674945: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 0067494c: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067494f: je 0x674975 */ if (fZ) goto L_00674975;
L_00674951:; BB(0x00674951);
    /* 00674951: mov edx, 3 */ r_edx = 0x3u;
    /* 00674956: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 0067495d: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00674963: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00674965: mov word ptr [ecx + 0xd6], bx */ W16((u32)(r_ecx+0xd6u), (u16)r_ebx);
    /* 0067496c: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0067496f: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_00674975:; BB(0x00674975);
    /* 00674975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674976: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674978: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x67497bu); call_ind(t); }
    /* 0067497b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067497c: ret 4 */ FN_RET(0x00674914); r_esp += 8; return;
L_0067497f:; BB(0x0067497f);
    /* 0067497f: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00674982: jne 0x6749f4 */ if (!fZ) goto L_006749f4;
L_00674984:; BB(0x00674984);
    /* 00674984: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 0067498b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067498e: je 0x6749b4 */ if (fZ) goto L_006749b4;
L_00674990:; BB(0x00674990);
    /* 00674990: mov edx, 2 */ r_edx = 0x2u;
    /* 00674995: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 0067499c: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 006749a2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006749a4: mov word ptr [ecx + 0xd6], bx */ W16((u32)(r_ecx+0xd6u), (u16)r_ebx);
    /* 006749ab: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006749ae: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006749b4:; BB(0x006749b4);
    /* 006749b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006749b5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006749b7: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x6749bau); call_ind(t); }
    /* 006749ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006749bb: ret 4 */ FN_RET(0x00674914); r_esp += 8; return;
L_006749be:; BB(0x006749be);
    /* 006749be: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 006749c5: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006749c8: je 0x6749ee */ if (fZ) goto L_006749ee;
L_006749ca:; BB(0x006749ca);
    /* 006749ca: mov edx, 1 */ r_edx = 0x1u;
    /* 006749cf: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 006749d6: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 006749dc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006749de: mov word ptr [ecx + 0xd6], bx */ W16((u32)(r_ecx+0xd6u), (u16)r_ebx);
    /* 006749e5: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006749e8: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_006749ee:; BB(0x006749ee);
    /* 006749ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006749ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006749f1: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6749f4u); call_ind(t); }
L_006749f4:; BB(0x006749f4);
    /* 006749f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006749f5: ret 4 */ FN_RET(0x00674914); r_esp += 8; return;
L_006749f8:; BB(0x006749f8);
    /* 006749f8: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 006749ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674a01: je 0x674a22 */ if (fZ) goto L_00674a22;
L_00674a03:; BB(0x00674a03);
    /* 00674a03: mov ebx, dword ptr [ecx + 0xd0] */ r_ebx = R32((u32)(r_ecx+0xd0u));
    /* 00674a09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00674a0b: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 00674a12: mov word ptr [ecx + 0xd6], dx */ W16((u32)(r_ecx+0xd6u), (u16)r_edx);
    /* 00674a19: or ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00674a1c: mov dword ptr [ecx + 0xd0], ebx */ W32((u32)(r_ecx+0xd0u), r_ebx);
L_00674a22:; BB(0x00674a22);
    /* 00674a22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a23: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674a25: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x674a28u); call_ind(t); }
    /* 00674a28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674a29: ret 4 */ FN_RET(0x00674914); r_esp += 8; return;
L_00674a2c:; BB(0x00674a2c);
    /* 00674a2c: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 00674a33: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674a36: je 0x674a5c */ if (fZ) goto L_00674a5c;
L_00674a38:; BB(0x00674a38);
    /* 00674a38: mov edx, 3 */ r_edx = 0x3u;
    /* 00674a3d: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 00674a44: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00674a4a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00674a4c: mov word ptr [ecx + 0xd6], bx */ W16((u32)(r_ecx+0xd6u), (u16)r_ebx);
    /* 00674a53: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00674a56: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_00674a5c:; BB(0x00674a5c);
    /* 00674a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674a5f: call dword ptr [edx + 0x58] */ { u32 t = R32((u32)(r_edx+0x58u)); r_esp -= 4; W32(r_esp, 0x674a62u); call_ind(t); }
    /* 00674a62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674a63: ret 4 */ FN_RET(0x00674914); r_esp += 8; return;
L_00674a66:; BB(0x00674a66);
    /* 00674a66: movsx edx, word ptr [ecx + 0xd4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xd4u));
    /* 00674a6d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674a70: je 0x674a96 */ if (fZ) goto L_00674a96;
L_00674a72:; BB(0x00674a72);
    /* 00674a72: mov edx, 3 */ r_edx = 0x3u;
    /* 00674a77: mov word ptr [ecx + 0xd4], dx */ W16((u32)(r_ecx+0xd4u), (u16)r_edx);
    /* 00674a7e: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 00674a84: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00674a86: mov word ptr [ecx + 0xd6], bx */ W16((u32)(r_ecx+0xd6u), (u16)r_ebx);
    /* 00674a8d: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00674a90: mov dword ptr [ecx + 0xd0], edx */ W32((u32)(r_ecx+0xd0u), r_edx);
L_00674a96:; BB(0x00674a96);
    /* 00674a96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674a97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00674a99: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x674a9cu); call_ind(t); }
    /* 00674a9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674a9d: ret 4 */ FN_RET(0x00674914); r_esp += 8; return;
}

void f_00674aa0(void) /* sub_674AA0 */
{
    FN_ENTER(0x00674aa0);
    /* 00674aa0: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00674aa5: push dword ptr [ecx + 0xf8] */ { u32 v = R32((u32)(r_ecx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674aab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674aac: call 0x674ab4 */ r_esp -= 4; W32(r_esp, 0x674ab1u); f_00674ab4();
    /* 00674ab1: ret 4 */ FN_RET(0x00674aa0); r_esp += 8; return;
}

void f_00674ab4(void) /* sub_674AB4 */
{
    FN_ENTER(0x00674ab4);
    /* 00674ab4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674ab7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00674abb: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00674ac0: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00674ac5: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 00674acb: mov byte ptr [esp], 0xd4 */ W8((u32)(r_esp), 0xd4u);
    /* 00674acf: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00674ad4: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 00674ad9: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 00674add: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00674ae1: mov byte ptr [esp + 7], al */ W8((u32)(r_esp+0x7u), (u8)r_eax);
    /* 00674ae5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00674ae8: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x674aedu); f_008003e0();
    /* 00674aed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00674af0: ret 8 */ FN_RET(0x00674ab4); r_esp += 12; return;
}

void f_00674af4(void) /* sub_674AF4 */
{
    FN_ENTER(0x00674af4);
    /* 00674af4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00674af8: movsx edx, byte ptr [eax + 7] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x7u));
    /* 00674afc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00674afe: jl 0x674b0c */ if ((fS!=fO)) goto L_00674b0c;
L_00674b00:; BB(0x00674b00);
    /* 00674b00: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674b03: jge 0x674b0c */ if ((fS==fO)) goto L_00674b0c;
L_00674b05:; BB(0x00674b05);
    /* 00674b05: mov eax, 1 */ r_eax = 0x1u;
    /* 00674b0a: jmp 0x674b0e */ goto L_00674b0e;
L_00674b0c:; BB(0x00674b0c);
    /* 00674b0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00674b0e:; BB(0x00674b0e);
    /* 00674b0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674b10: je 0x674b18 */ if (fZ) goto L_00674b18;
L_00674b12:; BB(0x00674b12);
    /* 00674b12: mov dword ptr [ecx + 0xfc], edx */ W32((u32)(r_ecx+0xfcu), r_edx);
L_00674b18:; BB(0x00674b18);
    /* 00674b18: ret 4 */ FN_RET(0x00674af4); r_esp += 8; return;
}

void f_00674b1c(void) /* sub_674B1C */
{
    FN_ENTER(0x00674b1c);
    /* 00674b1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00674b1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674b1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674b1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674b20: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00674b22: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00674b24: mov dword ptr [ebx + 0xdc], 0 */ W32((u32)(r_ebx+0xdcu), 0x0u);
L_00674b2e:; BB(0x00674b2e);
    /* 00674b2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674b2f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x674b34u); f_0068d5a8();
    /* 00674b34: mov edi, eax */ r_edi = r_eax;
    /* 00674b36: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674b39: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674b3b: je 0x674b99 */ if (fZ) goto L_00674b99;
L_00674b3d:; BB(0x00674b3d);
    /* 00674b3d: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 00674b43: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00674b48: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674b4b: jle 0x674b99 */ if ((fZ||fS!=fO)) goto L_00674b99;
L_00674b4d:; BB(0x00674b4d);
    /* 00674b4d: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00674b53: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674b59: jne 0x674b92 */ if (!fZ) goto L_00674b92;
L_00674b5b:; BB(0x00674b5b);
    /* 00674b5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674b5c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x674b61u); f_007b4d18();
    /* 00674b61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00674b62: push dword ptr [ebx + 0xe0] */ { u32 v = R32((u32)(r_ebx+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674b69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00674b6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674b6c: call 0x7b647c */ r_esp -= 4; W32(r_esp, 0x674b71u); f_007b647c();
    /* 00674b71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00674b73: je 0x674b8c */ if (fZ) goto L_00674b8c;
L_00674b75:; BB(0x00674b75);
    /* 00674b75: mov ecx, esi */ r_ecx = r_esi;
    /* 00674b77: mov edx, 1 */ r_edx = 0x1u;
    /* 00674b7c: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00674b7e: or dword ptr [ebx + 0xdc], edx */ { u32 ad = (u32)(r_ebx+0xdcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00674b84: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
    /* 00674b8a: jmp 0x674b92 */ goto L_00674b92;
L_00674b8c:; BB(0x00674b8c);
    /* 00674b8c: mov edx, dword ptr [ebx + 0xa8] */ r_edx = R32((u32)(r_ebx+0xa8u));
L_00674b92:; BB(0x00674b92);
    /* 00674b92: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00674b95: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674b97: jl 0x674b4d */ if ((fS!=fO)) goto L_00674b4d;
L_00674b99:; BB(0x00674b99);
    /* 00674b99: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674b9c: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674b9f: jl 0x674b2e */ if ((fS!=fO)) goto L_00674b2e;
L_00674ba1:; BB(0x00674ba1);
    /* 00674ba1: mov dword ptr [ebx + 0x104], 0 */ W32((u32)(r_ebx+0x104u), 0x0u);
    /* 00674bab: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00674bad:; BB(0x00674bad);
    /* 00674bad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674bae: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x674bb3u); f_0068d5a8();
    /* 00674bb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00674bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674bb6: je 0x674bec */ if (fZ) goto L_00674bec;
L_00674bb8:; BB(0x00674bb8);
    /* 00674bb8: mov ecx, eax */ r_ecx = r_eax;
    /* 00674bba: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x674bbfu); f_006936b4();
    /* 00674bbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674bc0: mov edx, dword ptr [ebx + 0x104] */ r_edx = R32((u32)(r_ebx+0x104u));
    /* 00674bc6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00674bc9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674bcb: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00674bcd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674bcf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674bd1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674bd3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00674bd5: lea edx, [ebx + ecx + 0x108] */ r_edx = (u32)(r_ebx+r_ecx+0x108u);
    /* 00674bdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674bdd: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x674be2u); f_00857fed();
    /* 00674be2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674be5: add dword ptr [ebx + 0x104], 1 */ { u32 ad = (u32)(r_ebx+0x104u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00674bec:; BB(0x00674bec);
    /* 00674bec: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674bef: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674bf2: jl 0x674bad */ if ((fS!=fO)) goto L_00674bad;
L_00674bf4:; BB(0x00674bf4);
    /* 00674bf4: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 00674bfa: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674bfd: jge 0x674c80 */ if ((fS==fO)) goto L_00674c80;
L_00674c03:; BB(0x00674c03);
    /* 00674c03: mov edx, eax */ r_edx = r_eax;
    /* 00674c05: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00674c07: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c0a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674c0d: jl 0x674c59 */ if ((fS!=fO)) goto L_00674c59;
L_00674c0f:; BB(0x00674c0f);
    /* 00674c0f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00674c12: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c14: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00674c16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c18: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c1a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c1c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00674c1e:; BB(0x00674c1e);
    /* 00674c1e: mov esi, 0x30 */ r_esi = 0x30u;
    /* 00674c23: mov word ptr [edx + ebx + 0x108], si */ W16((u32)(r_edx+r_ebx+0x108u), (u16)r_esi);
    /* 00674c2b: mov word ptr [edx + ebx + 0x138], si */ W16((u32)(r_edx+r_ebx+0x138u), (u16)r_esi);
    /* 00674c33: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674c36: mov word ptr [edx + ebx + 0x168], si */ W16((u32)(r_edx+r_ebx+0x168u), (u16)r_esi);
    /* 00674c3e: mov word ptr [edx + ebx + 0x198], si */ W16((u32)(r_edx+r_ebx+0x198u), (u16)r_esi);
    /* 00674c46: mov word ptr [edx + ebx + 0x1c8], si */ W16((u32)(r_edx+r_ebx+0x1c8u), (u16)r_esi);
    /* 00674c4e: add edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c54: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674c57: jl 0x674c1e */ if ((fS!=fO)) goto L_00674c1e;
L_00674c59:; BB(0x00674c59);
    /* 00674c59: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00674c5c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c5e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00674c60: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c62: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c64: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00674c68:; BB(0x00674c68);
    /* 00674c68: mov esi, 0x30 */ r_esi = 0x30u;
    /* 00674c6d: mov word ptr [edx + ebx + 0x108], si */ W16((u32)(r_edx+r_ebx+0x108u), (u16)r_esi);
    /* 00674c75: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674c78: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00674c7b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674c7e: jl 0x674c68 */ if ((fS!=fO)) goto L_00674c68;
L_00674c80:; BB(0x00674c80);
    /* 00674c80: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674c86: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x674c8bu); f_0068d5a8();
    /* 00674c8b: mov esi, eax */ r_esi = r_eax;
    /* 00674c8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674c90: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674c92: je 0x674cf9 */ if (fZ) goto L_00674cf9;
L_00674c94:; BB(0x00674c94);
    /* 00674c94: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 00674c9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674c9c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00674c9e: call 0x674d00 */ r_esp -= 4; W32(r_esp, 0x674ca3u); f_00674d00();
    /* 00674ca3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674ca5: je 0x674ccd */ if (fZ) goto L_00674ccd;
L_00674ca7:; BB(0x00674ca7);
    /* 00674ca7: mov ecx, esi */ r_ecx = r_esi;
    /* 00674ca9: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x674caeu); f_0068bfa0();
    /* 00674cae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674cb0: je 0x674cf9 */ if (fZ) goto L_00674cf9;
L_00674cb2:; BB(0x00674cb2);
    /* 00674cb2: mov ecx, esi */ r_ecx = r_esi;
    /* 00674cb4: call 0x688bc0 */ r_esp -= 4; W32(r_esp, 0x674cb9u); f_00688bc0();
    /* 00674cb9: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00674cbf: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674cc2: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 00674cc8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674cc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674cca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674ccb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674ccc: ret  */ FN_RET(0x00674b1c); r_esp += 4; return;
L_00674ccd:; BB(0x00674ccd);
    /* 00674ccd: mov ecx, esi */ r_ecx = r_esi;
    /* 00674ccf: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x674cd4u); f_0068bfa0();
    /* 00674cd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674cd6: jne 0x674cf9 */ if (!fZ) goto L_00674cf9;
L_00674cd8:; BB(0x00674cd8);
    /* 00674cd8: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 00674cde: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674ce1: je 0x674cf9 */ if (fZ) goto L_00674cf9;
L_00674ce3:; BB(0x00674ce3);
    /* 00674ce3: mov ecx, esi */ r_ecx = r_esi;
    /* 00674ce5: call 0x688bac */ r_esp -= 4; W32(r_esp, 0x674ceau); f_00688bac();
    /* 00674cea: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 00674cf0: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674cf3: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_00674cf9:; BB(0x00674cf9);
    /* 00674cf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674cfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674cfb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674cfc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674cfd: ret  */ FN_RET(0x00674b1c); r_esp += 4; return;
}

void f_00674d00(void) /* sub_674D00 */
{
    FN_ENTER(0x00674d00);
    /* 00674d00: mov edx, ecx */ r_edx = r_ecx;
    /* 00674d02: movzx ecx, word ptr [esp + 4] */ r_ecx = (u32)R16((u32)(r_esp+0x4u));
    /* 00674d07: mov eax, 1 */ r_eax = 0x1u;
    /* 00674d0c: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00674d0e: test dword ptr [edx + 0xdc], eax */ {  u32 a = R32((u32)(r_edx+0xdcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674d14: je 0x674d1e */ if (fZ) goto L_00674d1e;
L_00674d16:; BB(0x00674d16);
    /* 00674d16: mov eax, 1 */ r_eax = 0x1u;
    /* 00674d1b: ret 4 */ FN_RET(0x00674d00); r_esp += 8; return;
L_00674d1e:; BB(0x00674d1e);
    /* 00674d1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674d20: ret 4 */ FN_RET(0x00674d00); r_esp += 8; return;
}

void f_00674d24(void) /* sub_674D24 */
{
    FN_ENTER(0x00674d24);
    /* 00674d24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674d25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674d26: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674d29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00674d2b: mov esi, dword ptr [ebx + 0xf4] */ r_esi = R32((u32)(r_ebx+0xf4u));
    /* 00674d31: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674d33: je 0x674d98 */ if (fZ) goto L_00674d98;
L_00674d35:; BB(0x00674d35);
    /* 00674d35: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674d37: je 0x674d92 */ if (fZ) goto L_00674d92;
L_00674d39:; BB(0x00674d39);
    /* 00674d39: mov edx, dword ptr [ebx + 0x104] */ r_edx = R32((u32)(r_ebx+0x104u));
    /* 00674d3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674d41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00674d43: jle 0x674d92 */ if ((fZ||fS!=fO)) goto L_00674d92;
L_00674d45:; BB(0x00674d45);
    /* 00674d45: mov eax, esi */ r_eax = r_esi;
    /* 00674d47: mov esi, ebx */ r_esi = r_ebx;
    /* 00674d49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00674d4b: jmp 0x674d53 */ goto L_00674d53;
L_00674d4d:; BB(0x00674d4d);
    /* 00674d4d: mov eax, dword ptr [esi + 0xf4] */ r_eax = R32((u32)(r_esi+0xf4u));
L_00674d53:; BB(0x00674d53);
    /* 00674d53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00674d55: mov edx, 1 */ r_edx = 0x1u;
    /* 00674d5a: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00674d5c: test dword ptr [esi + 0xdc], edx */ {  u32 a = R32((u32)(r_esi+0xdcu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674d62: je 0x674d6b */ if (fZ) goto L_00674d6b;
L_00674d64:; BB(0x00674d64);
    /* 00674d64: mov edx, 1 */ r_edx = 0x1u;
    /* 00674d69: jmp 0x674d6d */ goto L_00674d6d;
L_00674d6b:; BB(0x00674d6b);
    /* 00674d6b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00674d6d:; BB(0x00674d6d);
    /* 00674d6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674d6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674d6f: mov ecx, eax */ r_ecx = r_eax;
    /* 00674d71: call 0x714d7c */ r_esp -= 4; W32(r_esp, 0x674d76u); f_00714d7c();
    /* 00674d76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674d77: push 0xfff0f0f0 */ { u32 v = 0xfff0f0f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00674d7c: mov ecx, dword ptr [esi + 0xf4] */ r_ecx = R32((u32)(r_esi+0xf4u));
    /* 00674d82: call 0x714df8 */ r_esp -= 4; W32(r_esp, 0x674d87u); f_00714df8();
    /* 00674d87: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00674d8a: cmp ebx, dword ptr [esi + 0x104] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x104u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00674d90: jl 0x674d4d */ if ((fS!=fO)) goto L_00674d4d;
L_00674d92:; BB(0x00674d92);
    /* 00674d92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00674d95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674d96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674d97: ret  */ FN_RET(0x00674d24); r_esp += 4; return;
L_00674d98:; BB(0x00674d98);
    /* 00674d98: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 00674d9f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674da0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00674da2: call 0x674d00 */ r_esp -= 4; W32(r_esp, 0x674da7u); f_00674d00();
    /* 00674da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674da9: je 0x674d35 */ if (fZ) goto L_00674d35;
L_00674dab:; BB(0x00674dab);
    /* 00674dab: mov dword ptr [esp], 0x43650000 */ W32((u32)(r_esp), 0x43650000u);
    /* 00674db2: mov dword ptr [esp + 4], 0x42d00000 */ W32((u32)(r_esp+0x4u), 0x42d00000u);
    /* 00674dba: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00674dbc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x674dc1u); f_0073ec50();
    /* 00674dc1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00674dc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00674dc7: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x674dccu); f_00714ab0();
    /* 00674dcc: mov esi, eax */ r_esi = r_eax;
    /* 00674dce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674dd1: mov dword ptr [ebx + 0xf4], esi */ W32((u32)(r_ebx+0xf4u), r_esi);
    /* 00674dd7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674dd9: je 0x674d35 */ if (fZ) goto L_00674d35;
L_00674ddf:; BB(0x00674ddf);
    /* 00674ddf: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00674de6: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00674dec: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00674df3: mov edx, dword ptr [ebx + 0xf4] */ r_edx = R32((u32)(r_ebx+0xf4u));
    /* 00674df9: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00674e00: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00674e05: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00674e0c: mov edx, dword ptr [ebx + 0x104] */ r_edx = R32((u32)(r_ebx+0x104u));
    /* 00674e12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00674e14: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00674e16: jle 0x674e5e */ if ((fZ||fS!=fO)) goto L_00674e5e;
L_00674e18:; BB(0x00674e18);
    /* 00674e18: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00674e1c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00674e1f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674e21: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00674e23: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674e25: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674e27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674e29: lea esi, [edx + edx + 0x108] */ r_esi = (u32)(r_edx+r_edx+0x108u);
    /* 00674e30: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674e32: mov edi, eax */ r_edi = r_eax;
L_00674e34:; BB(0x00674e34);
    /* 00674e34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00674e35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674e36: mov ecx, dword ptr [ebx + 0xf4] */ r_ecx = R32((u32)(r_ebx+0xf4u));
    /* 00674e3c: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x674e41u); f_00714d34();
    /* 00674e41: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00674e44: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00674e47: cmp edi, dword ptr [ebx + 0x104] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x104u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674e4d: jl 0x674e34 */ if ((fS!=fO)) goto L_00674e34;
L_00674e4f:; BB(0x00674e4f);
    /* 00674e4f: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00674e53: mov esi, dword ptr [ebx + 0xf4] */ r_esi = R32((u32)(r_ebx+0xf4u));
    /* 00674e59: jmp 0x674d35 */ goto L_00674d35;
L_00674e5e:; BB(0x00674e5e);
    /* 00674e5e: mov esi, dword ptr [ebx + 0xf4] */ r_esi = R32((u32)(r_ebx+0xf4u));
    /* 00674e64: jmp 0x674d35 */ goto L_00674d35;
}

void f_00674e6c(void) /* sub_674E6C */
{
    FN_ENTER(0x00674e6c);
    /* 00674e6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00674e6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674e6e: mov esi, ecx */ r_esi = r_ecx;
    /* 00674e70: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674e76: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x674e7bu); f_0068d5a8();
    /* 00674e7b: mov edi, eax */ r_edi = r_eax;
    /* 00674e7d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674e80: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674e82: je 0x674ee8 */ if (fZ) goto L_00674ee8;
L_00674e84:; BB(0x00674e84);
    /* 00674e84: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 00674e8b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674e8c: mov ecx, esi */ r_ecx = r_esi;
    /* 00674e8e: call 0x674d00 */ r_esp -= 4; W32(r_esp, 0x674e93u); f_00674d00();
    /* 00674e93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674e95: jne 0x674ea1 */ if (!fZ) goto L_00674ea1;
L_00674e97:; BB(0x00674e97);
    /* 00674e97: mov ecx, esi */ r_ecx = r_esi;
    /* 00674e99: call 0x67437c */ r_esp -= 4; W32(r_esp, 0x674e9eu); f_0067437c();
    /* 00674e9e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674e9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674ea0: ret  */ FN_RET(0x00674e6c); r_esp += 4; return;
L_00674ea1:; BB(0x00674ea1);
    /* 00674ea1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00674ea3: mov ecx, edi */ r_ecx = r_edi;
    /* 00674ea5: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x674eabu); call_ind(t); }
    /* 00674eab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674ead: jne 0x674eba */ if (!fZ) goto L_00674eba;
L_00674eaf:; BB(0x00674eaf);
    /* 00674eaf: mov ecx, edi */ r_ecx = r_edi;
    /* 00674eb1: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x674eb6u); f_00689410();
    /* 00674eb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674eb8: je 0x674ee8 */ if (fZ) goto L_00674ee8;
L_00674eba:; BB(0x00674eba);
    /* 00674eba: mov edx, dword ptr [esi + 0xf4] */ r_edx = R32((u32)(r_esi+0xf4u));
    /* 00674ec0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674ec2: je 0x674f13 */ if (fZ) goto L_00674f13;
L_00674ec4:; BB(0x00674ec4);
    /* 00674ec4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00674ec8: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00674ecd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00674ed1: mov ecx, dword ptr [esi + 0xf4] */ r_ecx = R32((u32)(r_esi+0xf4u));
    /* 00674ed7: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00674edb: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674ee1: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00674ee5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674ee6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674ee7: ret  */ FN_RET(0x00674e6c); r_esp += 4; return;
L_00674ee8:; BB(0x00674ee8);
    /* 00674ee8: mov edx, dword ptr [esi + 0xf4] */ r_edx = R32((u32)(r_esi+0xf4u));
    /* 00674eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674ef0: je 0x674f13 */ if (fZ) goto L_00674f13;
L_00674ef2:; BB(0x00674ef2);
    /* 00674ef2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00674ef6: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00674efb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00674eff: mov ecx, dword ptr [esi + 0xf4] */ r_ecx = R32((u32)(r_esi+0xf4u));
    /* 00674f05: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00674f09: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674f0f: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_00674f13:; BB(0x00674f13);
    /* 00674f13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674f14: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674f15: ret  */ FN_RET(0x00674e6c); r_esp += 4; return;
}

void f_00674f18(void) /* sub_674F18 */
{
    FN_ENTER(0x00674f18);
    /* 00674f18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00674f19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674f1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674f1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674f1c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00674f1f: mov eax, ecx */ r_eax = r_ecx;
    /* 00674f21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674f23: mov esi, eax */ r_esi = r_eax;
    /* 00674f25: mov ebp, ecx */ r_ebp = r_ecx;
L_00674f27:; BB(0x00674f27);
    /* 00674f27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00674f28: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x674f2du); f_0068d5a8();
    /* 00674f2d: mov edi, eax */ r_edi = r_eax;
    /* 00674f2f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674f32: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00674f34: je 0x674fbc */ if (fZ) goto L_00674fbc;
L_00674f3a:; BB(0x00674f3a);
    /* 00674f3a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00674f3c: mov edx, 1 */ r_edx = 0x1u;
    /* 00674f41: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00674f43: test dword ptr [esi + 0xdc], edx */ {  u32 a = R32((u32)(r_esi+0xdcu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00674f49: je 0x674fbc */ if (fZ) goto L_00674fbc;
L_00674f4b:; BB(0x00674f4b);
    /* 00674f4b: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 00674f4e: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 00674f51: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00674f54: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00674f57: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 00674f5a: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 00674f5d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00674f61: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 00674f64: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 00674f67: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00674f6b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00674f70: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x674f75u); f_0082d990();
    /* 00674f75: lea edx, [esi + 0xe4] */ r_edx = (u32)(r_esi+0xe4u);
    /* 00674f7b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674f7d: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x674f82u); f_008316b4();
    /* 00674f82: mov edx, dword ptr [esi + 0xf0] */ r_edx = R32((u32)(r_esi+0xf0u));
    /* 00674f88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674f8a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x674f8fu); f_0082d8bc();
    /* 00674f8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674f90: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00674f94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00674f96: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x674f9bu); f_00830aa0();
    /* 00674f9b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x674fa0u); f_0082da80();
    /* 00674fa0: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00674fa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674fa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00674fa5: call 0x7a8c04 */ r_esp -= 4; W32(r_esp, 0x674faau); f_007a8c04();
    /* 00674faa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674fad: mov edx, dword ptr [esi + 0xf0] */ r_edx = R32((u32)(r_esi+0xf0u));
    /* 00674fb3: add edx, dword ptr [edi + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00674fb6: movzx ebx, dx */ r_ebx = (u32)(u16)r_edx;
    /* 00674fb9: mov dword ptr [edi + 0x60], ebx */ W32((u32)(r_edi+0x60u), r_ebx);
L_00674fbc:; BB(0x00674fbc);
    /* 00674fbc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00674fbf: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00674fc2: jl 0x674f27 */ if ((fS!=fO)) goto L_00674f27;
L_00674fc8:; BB(0x00674fc8);
    /* 00674fc8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00674fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00674fcc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00674fcd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00674fce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00674fcf: ret  */ FN_RET(0x00674f18); r_esp += 4; return;
}

void f_00674fd0(void) /* sub_674FD0 */
{
    FN_ENTER(0x00674fd0);
    /* 00674fd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00674fd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00674fd2: mov esi, ecx */ r_esi = r_ecx;
    /* 00674fd4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00674fda: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x674fdfu); f_0068d5a8();
    /* 00674fdf: mov edi, eax */ r_edi = r_eax;
    /* 00674fe1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00674fe4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674fe6: je 0x675002 */ if (fZ) goto L_00675002;
L_00674fe8:; BB(0x00674fe8);
    /* 00674fe8: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 00674fef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00674ff0: mov ecx, esi */ r_ecx = r_esi;
    /* 00674ff2: call 0x674d00 */ r_esp -= 4; W32(r_esp, 0x674ff7u); f_00674d00();
    /* 00674ff7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00674ff9: je 0x675002 */ if (fZ) goto L_00675002;
L_00674ffb:; BB(0x00674ffb);
    /* 00674ffb: mov ecx, edi */ r_ecx = r_edi;
    /* 00674ffd: call 0x69d554 */ r_esp -= 4; W32(r_esp, 0x675002u); f_0069d554();
L_00675002:; BB(0x00675002);
    /* 00675002: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00675003: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00675004: ret  */ FN_RET(0x00674fd0); r_esp += 4; return;
}

