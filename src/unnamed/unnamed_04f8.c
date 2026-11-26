#include "protos.h"

void f_004f8000(void)
{
    FN_ENTER(0x004f8000);
    /* 004f8000: xor eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8002: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 004f8005: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8007: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4f800cu); f_0082d8bc();
    /* 004f800c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f8010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8011: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f8015: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8017: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4f801cu); f_00830aa0();
    /* 004f801c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4f8021u); f_0082da80();
    /* 004f8021: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f8025: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004f8028: add dword ptr [edx], eax */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f802a: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 004f802d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f8031: add dword ptr [eax + 4], ecx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f8034: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 004f8037: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f803b: add dword ptr [eax + 8], esi */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f803e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f803f: ret 0x10 */ FN_RET(0x004f8000); r_esp += 20; return;
}

void f_004f8060(void)
{
    FN_ENTER(0x004f8060);
    /* 004f8060: sub byte ptr [ecx + 0x33], 0 */ { u32 ad = (u32)(r_ecx+0x33u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 004f8064: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 004f8067: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f8069: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f806b: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4f8070u); f_00830c04();
    /* 004f8070: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004f8073: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004f8076: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 004f8079: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f807c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f807e: fchs  */ ST(0) = -ST(0);
    /* 004f8080: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f8083: fchs  */ ST(0) = -ST(0);
    /* 004f8085: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f8089: fchs  */ ST(0) = -ST(0);
    /* 004f808b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f808f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8091: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4f8096u); f_00830b74();
    /* 004f8096: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f809a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f809b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f809f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f80a1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4f80a6u); f_00830aa0();
    /* 004f80a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4f80abu); f_0082da80();
    /* 004f80ab: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80af: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f80b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f80b5: sub edx, dword ptr [esi + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f80b8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80bc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004f80bf: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f80c1: sub eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f80c4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f80c8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f80cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80cf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004f80d2: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f80d5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004f80d9: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004f80dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f80dd: ret 0x10 */ FN_RET(0x004f8060); r_esp += 20; return;
}

void f_004f8068(void)
{
    FN_ENTER(0x004f8068);
    /* 004f8068: fidiv dword ptr [ebx] */ ST(0) = ST(0) / (long double)(i32)R32((u32)(r_ebx));
    /* 004f806a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 004f806b: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4f8070u); f_00830c04();
    /* 004f8070: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004f8073: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004f8076: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 004f8079: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f807c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f807e: fchs  */ ST(0) = -ST(0);
    /* 004f8080: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f8083: fchs  */ ST(0) = -ST(0);
    /* 004f8085: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f8089: fchs  */ ST(0) = -ST(0);
    /* 004f808b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f808f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8091: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4f8096u); f_00830b74();
    /* 004f8096: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f809a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f809b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f809f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f80a1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4f80a6u); f_00830aa0();
    /* 004f80a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4f80abu); f_0082da80();
    /* 004f80ab: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80af: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f80b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f80b5: sub edx, dword ptr [esi + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f80b8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80bc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004f80bf: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f80c1: sub eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f80c4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f80c8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f80cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80cf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004f80d2: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f80d5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004f80d9: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004f80dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f80dd: ret 0x10 */ FN_RET(0x004f8068); r_esp += 20; return;
}

void f_004f8070(void)
{
    FN_ENTER(0x004f8070);
    /* 004f8070: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004f8073: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004f8076: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 004f8079: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f807c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f807e: fchs  */ ST(0) = -ST(0);
    /* 004f8080: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004f8083: fchs  */ ST(0) = -ST(0);
    /* 004f8085: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f8089: fchs  */ ST(0) = -ST(0);
    /* 004f808b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f808f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f8091: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4f8096u); f_00830b74();
    /* 004f8096: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f809a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f809b: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f809f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f80a1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4f80a6u); f_00830aa0();
    /* 004f80a6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4f80abu); f_0082da80();
    /* 004f80ab: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80af: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f80b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f80b5: sub edx, dword ptr [esi + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f80b8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80bc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004f80bf: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f80c1: sub eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f80c4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f80c8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f80cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80cf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004f80d2: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f80d5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004f80d9: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004f80dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f80dd: ret 0x10 */ FN_RET(0x004f8070); r_esp += 20; return;
}

void f_004f80a8(void)
{
    FN_ENTER(0x004f80a8);
    /* 004f80a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f80a9: xor eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f80ab: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80af: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004f80b3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f80b5: sub edx, dword ptr [esi + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f80b8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80bc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004f80bf: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f80c1: sub eax, dword ptr [esi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f80c4: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f80c8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004f80cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004f80cf: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004f80d2: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f80d5: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 004f80d9: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 004f80dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f80dd: ret 0x10 */ FN_RET(0x004f80a8); r_esp += 20; return;
}

void f_004f80e0(void) /* sub_4F80E0 */
{
    FN_ENTER(0x004f80e0);
    /* 004f80e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f80e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f80e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f80e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f80e4: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004f80e8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004f80ec: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 004f80ef: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f80f1: je 0x4f8116 */ if (fZ) goto L_004f8116;
L_004f80f3:; BB(0x004f80f3);
    /* 004f80f3: mov ebx, eax */ r_ebx = r_eax;
    /* 004f80f5: mov esi, edx */ r_esi = r_edx;
    /* 004f80f7: mov edi, ecx */ r_edi = r_ecx;
L_004f80f9:; BB(0x004f80f9);
    /* 004f80f9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f80fb: je 0x4f8116 */ if (fZ) goto L_004f8116;
L_004f80fd:; BB(0x004f80fd);
    /* 004f80fd: mov edx, ebp */ r_edx = r_ebp;
    /* 004f80ff: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 004f8102: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8104: je 0x4f811d */ if (fZ) goto L_004f811d;
L_004f8106:; BB(0x004f8106);
    /* 004f8106: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8108: mov ecx, edi */ r_ecx = r_edi;
    /* 004f810a: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f810fu); f_004f80e0();
L_004f810f:; BB(0x004f810f);
    /* 004f810f: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 004f8112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f8114: jne 0x4f80f9 */ if (!fZ) goto L_004f80f9;
L_004f8116:; BB(0x004f8116);
    /* 004f8116: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8117: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8118: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f8119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f811a: ret 8 */ FN_RET(0x004f80e0); r_esp += 12; return;
L_004f811d:; BB(0x004f811d);
    /* 004f811d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8121: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8126: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f812a: jmp 0x4f810f */ goto L_004f810f;
}

void f_004f80ec(void)
{
    FN_ENTER(0x004f80ec);
    /* 004f80ec: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 004f80ef: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f80f1: je 0x4f8116 */ if (fZ) goto L_004f8116;
L_004f80f3:; BB(0x004f80f3);
    /* 004f80f3: mov ebx, eax */ r_ebx = r_eax;
    /* 004f80f5: mov esi, edx */ r_esi = r_edx;
    /* 004f80f7: mov edi, ecx */ r_edi = r_ecx;
L_004f80f9:; BB(0x004f80f9);
    /* 004f80f9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f80fb: je 0x4f8116 */ if (fZ) goto L_004f8116;
L_004f80fd:; BB(0x004f80fd);
    /* 004f80fd: mov edx, ebp */ r_edx = r_ebp;
    /* 004f80ff: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 004f8102: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8104: je 0x4f811d */ if (fZ) goto L_004f811d;
L_004f8106:; BB(0x004f8106);
    /* 004f8106: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8107: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8108: mov ecx, edi */ r_ecx = r_edi;
    /* 004f810a: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f810fu); f_004f80e0();
L_004f810f:; BB(0x004f810f);
    /* 004f810f: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 004f8112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f8114: jne 0x4f80f9 */ if (!fZ) goto L_004f80f9;
L_004f8116:; BB(0x004f8116);
    /* 004f8116: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8117: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8118: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f8119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f811a: ret 8 */ FN_RET(0x004f80ec); r_esp += 12; return;
L_004f811d:; BB(0x004f811d);
    /* 004f811d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8121: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8126: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f812a: jmp 0x4f810f */ goto L_004f810f;
}

void f_004f812c(void) /* sub_4F812C */
{
    FN_ENTER(0x004f812c);
    /* 004f812c: call 0x4f70d0 */ r_esp -= 4; W32(r_esp, 0x4f8131u); f_004f70d0();
    /* 004f8131: call 0x694514 */ r_esp -= 4; W32(r_esp, 0x4f8136u); f_00694514();
    /* 004f8136: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x4f813bu); f_00717f74();
    /* 004f813b: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 004f8141: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f8143: je 0x4f8152 */ if (fZ) goto L_004f8152;
L_004f8145:; BB(0x004f8145);
    /* 004f8145: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004f8149: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f814e: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_004f8152:; BB(0x004f8152);
    /* 004f8152: ret  */ FN_RET(0x004f812c); r_esp += 4; return;
}

void f_004f8154(void) /* sub_4F8154 */
{
    FN_ENTER(0x004f8154);
    /* 004f8154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f8155: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8156: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f8158: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f815a: call 0x4f7320 */ r_esp -= 4; W32(r_esp, 0x4f815fu); f_004f7320();
    /* 004f815f: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8164: lea edi, [ebx + 0x48] */ r_edi = (u32)(r_ebx+0x48u);
    /* 004f8167: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f8168: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f816du); f_0061cdb0();
    /* 004f816d: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8170: mov eax, 0xff00ff00 */ r_eax = 0xff00ff00u;
    /* 004f8175: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8177: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8178: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f8179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f817eu); f_0061cdb0();
    /* 004f817e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f8181: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8182: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8183: ret  */ FN_RET(0x004f8154); r_esp += 4; return;
}

void f_004f8184(void) /* sub_4F8184 */
{
    FN_ENTER(0x004f8184);
    /* 004f8184: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8185: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8187: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8189: push 0x8d32c2 */ { u32 v = 0x8d32c2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f818e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f8194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8195: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f819c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f819f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f81a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004f81a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004f81a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004f81ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004f81ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f81b1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004f81b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f81b7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f81bcu); f_008193cc();
    /* 004f81bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f81c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f81c6: mov dword ptr [ecx], 0xafe14c */ W32((u32)(r_ecx), 0xafe14cu);
    /* 004f81cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f81ce: mov eax, dword ptr [0x9b92cc] */ r_eax = R32((u32)(0x9b92ccu));
    /* 004f81d3: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004f81d6: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f81d9: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 004f81db: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 004f81de: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 004f81e1: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 004f81e4: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 004f81e7: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 004f81ea: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 004f81ed: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004f81f0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004f81f7: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f81f9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f81feu); f_005caba4();
    /* 004f81fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f81ff: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004f8202: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8204: je 0x4f82a2 */ if (fZ) goto L_004f82a2;
L_004f820a:; BB(0x004f820a);
    /* 004f820a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004f8211: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f8218: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f821b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f821e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f821f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f8221: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8222: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8223: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8225: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8228: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x4f822du); f_0078eba4();
    /* 004f822d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f8230: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004f8237:; BB(0x004f8237);
    /* 004f8237: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f823a: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 004f823d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f8244: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8246: je 0x4f828a */ if (fZ) goto L_004f828a;
L_004f8248:; BB(0x004f8248);
    /* 004f8248: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f824d: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4f8252u); f_0073ec50();
    /* 004f8252: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f8253: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f8256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8257: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f825a: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x4f825fu); f_0078ed84();
    /* 004f825f: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8264: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4f8269u); f_0073ec50();
    /* 004f8269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f826a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f826d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f826e: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f8271: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x4f8276u); f_00779df0();
    /* 004f8276: call 0x73ec80 */ r_esp -= 4; W32(r_esp, 0x4f827bu); f_0073ec80();
    /* 004f827b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f827e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f827f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f8282: call 0x78edb8 */ r_esp -= 4; W32(r_esp, 0x4f8287u); f_0078edb8();
    /* 004f8287: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
L_004f828a:; BB(0x004f828a);
    /* 004f828a: call 0x4f82a8 */ r_esp -= 4; W32(r_esp, 0x4f828fu); f_004f82a8();
    /* 004f828f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f8292: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f8295: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f829c: mov esp, ebp */ r_esp = r_ebp;
    /* 004f829e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f829f: ret 8 */ FN_RET(0x004f8184); r_esp += 12; return;
L_004f82a2:; BB(0x004f82a2);
    /* 004f82a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f82a4: jmp 0x4f8237 */ goto L_004f8237;
}

void f_004f82a8(void) /* sub_4F82A8 */
{
    FN_ENTER(0x004f82a8);
    /* 004f82a8: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f82ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82ad: je 0x4f82cd */ if (fZ) goto L_004f82cd;
L_004f82af:; BB(0x004f82af);
    /* 004f82af: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f82b3: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f82b8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f82bc: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004f82bf: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004f82c3: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f82c9: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_004f82cd:; BB(0x004f82cd);
    /* 004f82cd: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004f82d1: or eax, 0xffff0014 */ {  u32 a = r_eax; u32 b = 0xffff0014u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f82d6: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f82da: ret  */ FN_RET(0x004f82a8); r_esp += 4; return;
}

void f_004f82dc(void) /* sub_4F82DC */
{
    FN_ENTER(0x004f82dc);
    /* 004f82dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f82dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f82de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f82df: mov edi, ecx */ r_edi = r_ecx;
    /* 004f82e1: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 004f82e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82e6: je 0x4f8356 */ if (fZ) goto L_004f8356;
L_004f82e8:; BB(0x004f82e8);
    /* 004f82e8: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x4f82edu); f_0078ed14();
    /* 004f82ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f82ef: jne 0x4f82f6 */ if (!fZ) goto L_004f82f6;
L_004f82f1:; BB(0x004f82f1);
    /* 004f82f1: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 004f82f4: jmp 0x4f8356 */ goto L_004f8356;
L_004f82f6:; BB(0x004f82f6);
    /* 004f82f6: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 004f82f9: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x4f82feu); f_0078ed4c();
    /* 004f82fe: mov ebp, eax */ r_ebp = r_eax;
    /* 004f8300: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8305: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8306: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x4f830bu); f_00858c4d();
    /* 004f830b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f830e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8310: jne 0x4f832a */ if (!fZ) goto L_004f832a;
L_004f8312:; BB(0x004f8312);
    /* 004f8312: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8313: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f8318u); f_00857e98();
    /* 004f8318: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f8319: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 004f831c: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x4f8321u); f_0078ed2c();
    /* 004f8321: mov eax, dword ptr [0x9b92c0] */ r_eax = R32((u32)(0x9b92c0u));
    /* 004f8326: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8328: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8329: ret  */ FN_RET(0x004f82dc); r_esp += 4; return;
L_004f832a:; BB(0x004f832a);
    /* 004f832a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f832b: call 0x708898 */ r_esp -= 4; W32(r_esp, 0x4f8330u); f_00708898();
    /* 004f8330: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8332: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8333: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
    /* 004f8336: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8337: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f833cu); f_00858900();
    /* 004f833c: mov byte ptr [edi + 0x3b], 0 */ W8((u32)(r_edi+0x3bu), 0x0u);
    /* 004f8340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8341: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f8346u); f_00857e98();
    /* 004f8346: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8349: mov ecx, edi */ r_ecx = r_edi;
    /* 004f834b: call 0x4f82a8 */ r_esp -= 4; W32(r_esp, 0x4f8350u); f_004f82a8();
    /* 004f8350: mov eax, ebx */ r_eax = r_ebx;
    /* 004f8352: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8354: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8355: ret  */ FN_RET(0x004f82dc); r_esp += 4; return;
L_004f8356:; BB(0x004f8356);
    /* 004f8356: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f8358: je 0x4f8363 */ if (fZ) goto L_004f8363;
L_004f835a:; BB(0x004f835a);
    /* 004f835a: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x4f835fu); f_0078ed20();
    /* 004f835f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f8361: jne 0x4f836c */ if (!fZ) goto L_004f836c;
L_004f8363:; BB(0x004f8363);
    /* 004f8363: mov eax, dword ptr [0x9b92c0] */ r_eax = R32((u32)(0x9b92c0u));
    /* 004f8368: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f836a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f836b: ret  */ FN_RET(0x004f82dc); r_esp += 4; return;
L_004f836c:; BB(0x004f836c);
    /* 004f836c: mov eax, dword ptr [0x9b92c4] */ r_eax = R32((u32)(0x9b92c4u));
    /* 004f8371: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8373: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8374: ret  */ FN_RET(0x004f82dc); r_esp += 4; return;
}

void f_004f8320(void)
{
    FN_ENTER(0x004f8320);
    /* 004f8320: add byte ptr [ecx + 0x9b92c0], ah */ { u32 ad = (u32)(r_ecx+0x9b92c0u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004f8326: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f8327: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8328: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8329: ret  */ FN_RET(0x004f8320); r_esp += 4; return;
}

void f_004f8328(void)
{
    FN_ENTER(0x004f8328);
    /* 004f8328: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8329: ret  */ FN_RET(0x004f8328); r_esp += 4; return;
}

void f_004f8378(void) /* sub_4F8378 */
{
    FN_ENTER(0x004f8378);
    /* 004f8378: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004f837b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f837d: je 0x4f839d */ if (fZ) goto L_004f839d;
L_004f837f:; BB(0x004f837f);
    /* 004f837f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8383: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004f8388: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f838c: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 004f838f: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004f8393: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004f8399: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_004f839d:; BB(0x004f839d);
    /* 004f839d: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004f83a1: and eax, 0xffeb */ {  u32 a = r_eax; u32 b = 0xffebu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f83a6: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f83aa: ret  */ FN_RET(0x004f8378); r_esp += 4; return;
}

void f_004f83ac(void) /* sub_4F83AC */
{
    FN_ENTER(0x004f83ac);
    /* 004f83ac: mov dword ptr [0xa72780], 0x3f800000 */ W32((u32)(0xa72780u), 0x3f800000u);
    /* 004f83b6: mov dword ptr [0xa72784], 0x41000000 */ W32((u32)(0xa72784u), 0x41000000u);
    /* 004f83c0: mov dword ptr [0xa72788], 0x3fc00000 */ W32((u32)(0xa72788u), 0x3fc00000u);
    /* 004f83ca: ret  */ FN_RET(0x004f83ac); r_esp += 4; return;
}

void f_004f83b4(void)
{
    FN_ENTER(0x004f83b4);
    /* 004f83b4: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 004f83b7: add eax, 0xa72784 */ {  u32 a = r_eax; u32 b = 0xa72784u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f83bc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f83be: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f83c1: add eax, 0xa72788 */ {  u32 a = r_eax; u32 b = 0xa72788u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f83c6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f83c8: sar byte ptr [edi], 0xc3 */ { u32 ad = (u32)(r_edi); u32 c = (3u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 004f83cb: nop  */ ;
    /* 004f83cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f83cd: mov edi, ecx */ r_edi = r_ecx;
    /* 004f83cf: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 004f83d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f83d7: je 0x4f83e6 */ if (fZ) goto L_004f83e6;
L_004f83d9:; BB(0x004f83d9);
    /* 004f83d9: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004f83dd: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004f83e2: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_004f83e6:; BB(0x004f83e6);
    /* 004f83e6: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4f83ebu); f_00717f38();
    /* 004f83eb: call 0x694580 */ r_esp -= 4; W32(r_esp, 0x4f83f0u); f_00694580();
    /* 004f83f0: mov ecx, edi */ r_ecx = r_edi;
    /* 004f83f2: call 0x4f7454 */ r_esp -= 4; W32(r_esp, 0x4f83f7u); f_004f7454();
    /* 004f83f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f83f8: ret  */ FN_RET(0x004f83b4); r_esp += 4; return;
}

void f_004f83c4(void)
{
    FN_ENTER(0x004f83c4);
    /* 004f83c4: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 004f83c5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f83c7: add al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004f83c9: aas  */ UNSUP(0x004f83c9, "aas ");
    /* 004f83ca: ret  */ FN_RET(0x004f83c4); r_esp += 4; return;
}

void f_004f83cc(void) /* sub_4F83CC */
{
    FN_ENTER(0x004f83cc);
    /* 004f83cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f83cd: mov edi, ecx */ r_edi = r_ecx;
    /* 004f83cf: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 004f83d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f83d7: je 0x4f83e6 */ if (fZ) goto L_004f83e6;
L_004f83d9:; BB(0x004f83d9);
    /* 004f83d9: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 004f83dd: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004f83e2: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_004f83e6:; BB(0x004f83e6);
    /* 004f83e6: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x4f83ebu); f_00717f38();
    /* 004f83eb: call 0x694580 */ r_esp -= 4; W32(r_esp, 0x4f83f0u); f_00694580();
    /* 004f83f0: mov ecx, edi */ r_ecx = r_edi;
    /* 004f83f2: call 0x4f7454 */ r_esp -= 4; W32(r_esp, 0x4f83f7u); f_004f7454();
    /* 004f83f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f83f8: ret  */ FN_RET(0x004f83cc); r_esp += 4; return;
}

void f_004f83fc(void) /* sub_4F83FC */
{
    FN_ENTER(0x004f83fc);
    /* 004f83fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f83fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f83ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f8401: call 0x4f8420 */ r_esp -= 4; W32(r_esp, 0x4f8406u); f_004f8420();
    /* 004f8406: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f840a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f840c: jne 0x4f8412 */ if (!fZ) goto L_004f8412;
L_004f840e:; BB(0x004f840e);
    /* 004f840e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f840f: ret 4 */ FN_RET(0x004f83fc); r_esp += 8; return;
L_004f8412:; BB(0x004f8412);
    /* 004f8412: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8413: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f8418u); f_005c2f74();
    /* 004f8418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f8419: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f841a: ret 4 */ FN_RET(0x004f83fc); r_esp += 8; return;
}

void f_004f841c(void)
{
    FN_ENTER(0x004f841c);
    /* 004f841c: add byte ptr [eax - 0x74aa6f70], dl */ { u32 ad = (u32)(r_eax+0x8b559090u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f8422: in al, dx */ UNSUP(0x004f8422, "in al, dx");
    /* 004f8423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8425: push 0x8d32dc */ { u32 v = 0x8d32dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f842a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f8430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8431: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f8438: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f843b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f843e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f8441: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f8444: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f8447: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f844a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f8451: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f8454: mov edx, dword ptr [ecx + 0x13c] */ r_edx = R32((u32)(r_ecx+0x13cu));
    /* 004f845a: mov dword ptr [ecx], 0xafe1d8 */ W32((u32)(r_ecx), 0xafe1d8u);
    /* 004f8460: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8462: je 0x4f847e */ if (fZ) goto L_004f847e;
L_004f8464:; BB(0x004f8464);
    /* 004f8464: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f8467: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f846b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8470: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8474: mov dword ptr [ecx + 0x13c], 0 */ W32((u32)(r_ecx+0x13cu), 0x0u);
L_004f847e:; BB(0x004f847e);
    /* 004f847e: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 004f8484: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8486: je 0x4f849c */ if (fZ) goto L_004f849c;
L_004f8488:; BB(0x004f8488);
    /* 004f8488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8489: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f848eu); f_00857e98();
    /* 004f848e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f848f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f8492: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
L_004f849c:; BB(0x004f849c);
    /* 004f849c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f84a3: call 0x4f7cd0 */ r_esp -= 4; W32(r_esp, 0x4f84a8u); f_004f7cd0();
    /* 004f84a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f84ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f84b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004f84b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f84b5: ret  */ FN_RET(0x004f841c); r_esp += 4; return;
}

void f_004f8420(void) /* sub_4F8420 */
{
    FN_ENTER(0x004f8420);
    /* 004f8420: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8421: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8423: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8425: push 0x8d32dc */ { u32 v = 0x8d32dcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f842a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f8430: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8431: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f8438: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f843b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f843e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f8441: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f8444: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f8447: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f844a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f8451: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f8454: mov edx, dword ptr [ecx + 0x13c] */ r_edx = R32((u32)(r_ecx+0x13cu));
    /* 004f845a: mov dword ptr [ecx], 0xafe1d8 */ W32((u32)(r_ecx), 0xafe1d8u);
    /* 004f8460: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8462: je 0x4f847e */ if (fZ) goto L_004f847e;
L_004f8464:; BB(0x004f8464);
    /* 004f8464: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f8467: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f846b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8470: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8474: mov dword ptr [ecx + 0x13c], 0 */ W32((u32)(r_ecx+0x13cu), 0x0u);
L_004f847e:; BB(0x004f847e);
    /* 004f847e: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 004f8484: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8486: je 0x4f849c */ if (fZ) goto L_004f849c;
L_004f8488:; BB(0x004f8488);
    /* 004f8488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8489: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f848eu); f_00857e98();
    /* 004f848e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f848f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f8492: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
L_004f849c:; BB(0x004f849c);
    /* 004f849c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f84a3: call 0x4f7cd0 */ r_esp -= 4; W32(r_esp, 0x4f84a8u); f_004f7cd0();
    /* 004f84a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f84ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f84b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004f84b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f84b5: ret  */ FN_RET(0x004f8420); r_esp += 4; return;
}

void f_004f8424(void)
{
    FN_ENTER(0x004f8424);
    /* 004f8424: jmp ptr [eax - 0x24] */ { u32 t = R32((u32)(r_eax+0xffffffdcu)); jmp_ind(t); return; }
}

void f_004f84b8(void) /* sub_4F84B8 */
{
    FN_ENTER(0x004f84b8);
    /* 004f84b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f84b9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f84bc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f84be: mov eax, dword ptr [ebx + 0x114] */ r_eax = R32((u32)(r_ebx+0x114u));
    /* 004f84c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f84c6: jne 0x4f870c */ if (!fZ) goto L_004f870c;
L_004f84cc:; BB(0x004f84cc);
    /* 004f84cc: push 0x91e9bc */ { u32 v = 0x91e9bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f84d1: push 0x10004 */ { u32 v = 0x10004u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84d6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f84dbu); f_0061cdb0();
    /* 004f84db: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f84de: push 0x91e9d4 */ { u32 v = 0x91e9d4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84e3: push 0x10006 */ { u32 v = 0x10006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84e8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f84edu); f_0061cdb0();
    /* 004f84ed: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f84f0: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004f84f2: push 0x91e9e8 */ { u32 v = 0x91e9e8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84f7: push 0x10007 */ { u32 v = 0x10007u; r_esp -= 4; W32(r_esp, v); }
    /* 004f84fc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f8501u); f_0061cdb0();
    /* 004f8501: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8504: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f8507: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004f850a: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f850e: mov dword ptr [esp], 0x10008 */ W32((u32)(r_esp), 0x10008u);
    /* 004f8515: mov dword ptr [esp + 4], 0x91e9fc */ W32((u32)(r_esp+0x4u), 0x91e9fcu);
    /* 004f851d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f8522u); f_0061cdb0();
    /* 004f8522: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f8525: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004f8528: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f852c: mov dword ptr [esp], 0x10009 */ W32((u32)(r_esp), 0x10009u);
    /* 004f8533: mov dword ptr [esp + 4], 0x91ea0c */ W32((u32)(r_esp+0x4u), 0x91ea0cu);
    /* 004f853b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f8540u); f_0061cdb0();
    /* 004f8540: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f8543: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 004f8546: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f854a: mov dword ptr [esp], 0x1000a */ W32((u32)(r_esp), 0x1000au);
    /* 004f8551: mov dword ptr [esp + 4], 0x91ea1c */ W32((u32)(r_esp+0x4u), 0x91ea1cu);
    /* 004f8559: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f855eu); f_0061cdb0();
    /* 004f855e: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f8561: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8564: push 0x91ea2c */ { u32 v = 0x91ea2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8569: push 0x1000b */ { u32 v = 0x1000bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f856e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f8573u); f_0061cdb0();
    /* 004f8573: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f8576: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8579: push 0x91ea3c */ { u32 v = 0x91ea3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f857e: push 0x1000c */ { u32 v = 0x1000cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8583: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f8588u); f_0061cdb0();
    /* 004f8588: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004f858b: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f858e: push 0x91ea4c */ { u32 v = 0x91ea4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8593: push 0x1000d */ { u32 v = 0x1000du; r_esp -= 4; W32(r_esp, v); }
    /* 004f8598: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f859du); f_0061cdb0();
    /* 004f859d: push dword ptr [ebx + 0x10c] */ { u32 v = R32((u32)(r_ebx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f85a3: push 0x91ea5c */ { u32 v = 0x91ea5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f85a8: push 0x1000e */ { u32 v = 0x1000eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f85ad: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f85b2u); f_0061cdb0();
    /* 004f85b2: push dword ptr [ebx + 0x110] */ { u32 v = R32((u32)(r_ebx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f85b8: push 0x91ea6c */ { u32 v = 0x91ea6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f85bd: push 0x1000f */ { u32 v = 0x1000fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f85c2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f85c7u); f_0061cdb0();
    /* 004f85c7: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f85ca: mov eax, dword ptr [0xa727a4] */ r_eax = R32((u32)(0xa727a4u));
    /* 004f85cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f85d1: je 0x4f88b9 */ if (fZ) goto L_004f88b9;
L_004f85d7:; BB(0x004f85d7);
    /* 004f85d7: mov edx, dword ptr [ebx + 0x104] */ r_edx = R32((u32)(r_ebx+0x104u));
    /* 004f85dd: cmp edx, dword ptr [ebx + 0x108] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x108u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f85e3: je 0x4f8603 */ if (fZ) goto L_004f8603;
L_004f85e5:; BB(0x004f85e5);
    /* 004f85e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f85e7: je 0x4f8603 */ if (fZ) goto L_004f8603;
L_004f85e9:; BB(0x004f85e9);
    /* 004f85e9: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 004f85ed: mov dword ptr [0xa727a4], 0 */ W32((u32)(0xa727a4u), 0x0u);
    /* 004f85f7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f85fd: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 004f8601: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f8603:; BB(0x004f8603);
    /* 004f8603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8605: je 0x4f86b5 */ if (fZ) goto L_004f86b5;
L_004f860b:; BB(0x004f860b);
    /* 004f860b: mov edx, dword ptr [ebx + 0xc8] */ r_edx = R32((u32)(r_ebx+0xc8u));
    /* 004f8611: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 004f8614: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 004f861a: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 004f861d: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 004f8623: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 004f8626: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
    /* 004f862c: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 004f862f: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 004f8635: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 004f8638: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 004f863e: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 004f8641: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 004f8647: mov dword ptr [eax + 0x35c], edx */ W32((u32)(r_eax+0x35cu), r_edx);
    /* 004f864d: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004f8653: mov eax, dword ptr [ebx + 0xe4] */ r_eax = R32((u32)(r_ebx+0xe4u));
    /* 004f8659: mov dword ptr [edx + 0x360], eax */ W32((u32)(r_edx+0x360u), r_eax);
    /* 004f865f: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 004f8665: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004f866b: mov dword ptr [edx + 0x364], eax */ W32((u32)(r_edx+0x364u), r_eax);
    /* 004f8671: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004f8677: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 004f867d: mov dword ptr [edx + 0x368], eax */ W32((u32)(r_edx+0x368u), r_eax);
    /* 004f8683: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 004f8689: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004f868f: mov dword ptr [edx + 0x36c], eax */ W32((u32)(r_edx+0x36cu), r_eax);
    /* 004f8695: mov edx, dword ptr [0xa727a4] */ r_edx = R32((u32)(0xa727a4u));
    /* 004f869b: movsx eax, word ptr [ebx + 0xf4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xf4u));
    /* 004f86a2: mov dword ptr [edx + 0x370], eax */ W32((u32)(r_edx+0x370u), r_eax);
    /* 004f86a8: movsx eax, word ptr [ebx + 0xf6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xf6u));
    /* 004f86af: mov dword ptr [edx + 0x374], eax */ W32((u32)(r_edx+0x374u), r_eax);
L_004f86b5:; BB(0x004f86b5);
    /* 004f86b5: mov eax, dword ptr [ebx + 0xfc] */ r_eax = R32((u32)(r_ebx+0xfcu));
    /* 004f86bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f86bd: je 0x4f88a2 */ if (fZ) goto L_004f88a2;
L_004f86c3:; BB(0x004f86c3);
    /* 004f86c3: push 0x91eb3c */ { u32 v = 0x91eb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f86c8: push 0x10011 */ { u32 v = 0x10011u; r_esp -= 4; W32(r_esp, v); }
    /* 004f86cd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f86d2u); f_0061cdb0();
    /* 004f86d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f86d5:; BB(0x004f86d5);
    /* 004f86d5: push dword ptr [ebx + 0x100] */ { u32 v = R32((u32)(r_ebx+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f86db: mov eax, dword ptr [ebx + 0x104] */ r_eax = R32((u32)(r_ebx+0x104u));
    /* 004f86e1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f86e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f86e5: push 0x91eb4c */ { u32 v = 0x91eb4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f86ea: push 0x10012 */ { u32 v = 0x10012u; r_esp -= 4; W32(r_esp, v); }
    /* 004f86ef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f86f4u); f_0061cdb0();
    /* 004f86f4: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f86f7: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f86fa: push 0x91eb64 */ { u32 v = 0x91eb64u; r_esp -= 4; W32(r_esp, v); }
    /* 004f86ff: push 0x10013 */ { u32 v = 0x10013u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8704: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f8709u); f_0061cdb0();
    /* 004f8709: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f870c:; BB(0x004f870c);
    /* 004f870c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f870e: call 0x4f8a2c */ r_esp -= 4; W32(r_esp, 0x4f8713u); f_004f8a2c();
    /* 004f8713: mov eax, dword ptr [ebx + 0x114] */ r_eax = R32((u32)(r_ebx+0x114u));
    /* 004f8719: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f871b: jne 0x4f889d */ if (!fZ) goto L_004f889d;
L_004f8721:; BB(0x004f8721);
    /* 004f8721: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8727: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f872a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f872d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f872f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8731: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8733: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f873a: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f873fu); f_007c1180();
    /* 004f873f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8741: jne 0x4f874e */ if (!fZ) goto L_004f874e;
L_004f8743:; BB(0x004f8743);
    /* 004f8743: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004f8749: jmp 0x4f880f */ goto L_004f880f;
L_004f874e:; BB(0x004f874e);
    /* 004f874e: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8754: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f8757: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f875a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f875c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f875e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8760: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f8767: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f876cu); f_007c1180();
    /* 004f876c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f876e: jne 0x4f877b */ if (!fZ) goto L_004f877b;
L_004f8770:; BB(0x004f8770);
    /* 004f8770: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004f8776: jmp 0x4f880f */ goto L_004f880f;
L_004f877b:; BB(0x004f877b);
    /* 004f877b: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8781: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f8784: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f8787: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8789: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f878b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f878d: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f8794: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x4f8799u); f_007c1180();
    /* 004f8799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f879b: jne 0x4f87a5 */ if (!fZ) goto L_004f87a5;
L_004f879d:; BB(0x004f879d);
    /* 004f879d: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004f87a3: jmp 0x4f880f */ goto L_004f880f;
L_004f87a5:; BB(0x004f87a5);
    /* 004f87a5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f87a7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f87a9: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f87ac: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f87af: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f87b5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f87b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f87b9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f87bb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f87c2: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f87c7u); f_007c09fc();
    /* 004f87c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f87c9: je 0x4f87d2 */ if (fZ) goto L_004f87d2;
L_004f87cb:; BB(0x004f87cb);
    /* 004f87cb: add dword ptr [ebx + 0x9c], 1 */ { u32 ad = (u32)(r_ebx+0x9cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004f87d2:; BB(0x004f87d2);
    /* 004f87d2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f87d4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f87d6: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 004f87d9: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f87dc: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f87e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f87e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f87e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f87e8: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f87ef: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f87f4u); f_007c09fc();
    /* 004f87f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f87f6: je 0x4f8809 */ if (fZ) goto L_004f8809;
L_004f87f8:; BB(0x004f87f8);
    /* 004f87f8: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
    /* 004f87fe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f8801: mov dword ptr [ebx + 0x9c], eax */ W32((u32)(r_ebx+0x9cu), r_eax);
    /* 004f8807: jmp 0x4f880f */ goto L_004f880f;
L_004f8809:; BB(0x004f8809);
    /* 004f8809: mov eax, dword ptr [ebx + 0x9c] */ r_eax = R32((u32)(r_ebx+0x9cu));
L_004f880f:; BB(0x004f880f);
    /* 004f880f: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8812: jle 0x4f8820 */ if ((fZ||fS!=fO)) goto L_004f8820;
L_004f8814:; BB(0x004f8814);
    /* 004f8814: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 004f881e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f8820:; BB(0x004f8820);
    /* 004f8820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8822: jge 0x4f882e */ if ((fS==fO)) goto L_004f882e;
L_004f8824:; BB(0x004f8824);
    /* 004f8824: mov dword ptr [ebx + 0x9c], 0xd */ W32((u32)(r_ebx+0x9cu), 0xdu);
L_004f882e:; BB(0x004f882e);
    /* 004f882e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004f8831: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f8834: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 004f883a: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004f883d: mov dword ptr [ebx + 0xcc], edx */ W32((u32)(r_ebx+0xccu), r_edx);
    /* 004f8843: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 004f8849: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f884b: call 0x4fb15c */ r_esp -= 4; W32(r_esp, 0x4f8850u); f_004fb15c();
    /* 004f8850: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f8852: call 0x4fb23c */ r_esp -= 4; W32(r_esp, 0x4f8857u); f_004fb23c();
    /* 004f8857: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f8859: call 0x4fb324 */ r_esp -= 4; W32(r_esp, 0x4f885eu); f_004fb324();
    /* 004f885e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f8860: call 0x4fb4a0 */ r_esp -= 4; W32(r_esp, 0x4f8865u); f_004fb4a0();
    /* 004f8865: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f8867: call 0x4fb4f4 */ r_esp -= 4; W32(r_esp, 0x4f886cu); f_004fb4f4();
    /* 004f886c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f886e: call 0x4fb548 */ r_esp -= 4; W32(r_esp, 0x4f8873u); f_004fb548();
    /* 004f8873: mov ecx, dword ptr [0xa727a4] */ r_ecx = R32((u32)(0xa727a4u));
    /* 004f8879: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 004f887f: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 004f8885: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004f8888: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 004f888e: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004f8891: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 004f8894: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8896: je 0x4f889d */ if (fZ) goto L_004f889d;
L_004f8898:; BB(0x004f8898);
    /* 004f8898: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f889du); f_0061cdb0();
L_004f889d:; BB(0x004f889d);
    /* 004f889d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f88a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f88a1: ret  */ FN_RET(0x004f84b8); r_esp += 4; return;
L_004f88a2:; BB(0x004f88a2);
    /* 004f88a2: push 0x91eb3c */ { u32 v = 0x91eb3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f88a7: push 0x10011 */ { u32 v = 0x10011u; r_esp -= 4; W32(r_esp, v); }
    /* 004f88ac: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f88b1u); f_0061cdb0();
    /* 004f88b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f88b4: jmp 0x4f86d5 */ goto L_004f86d5;
L_004f88b9:; BB(0x004f88b9);
    /* 004f88b9: lea eax, [ebx + 0xb8] */ r_eax = (u32)(r_ebx+0xb8u);
    /* 004f88bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f88c0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f88c2: call 0x4f88d4 */ r_esp -= 4; W32(r_esp, 0x4f88c7u); f_004f88d4();
    /* 004f88c7: mov dword ptr [0xa727a4], eax */ W32((u32)(0xa727a4u), r_eax);
    /* 004f88cc: jmp 0x4f85d7 */ goto L_004f85d7;
}

void f_004f88d4(void) /* sub_4F88D4 */
{
    FN_ENTER(0x004f88d4);
    /* 004f88d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f88d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f88d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f88d7: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f88da: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f88dc: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 004f88e0: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4f88e5u); f_00807ac0();
    /* 004f88e5: mov esi, dword ptr [eax*4 + 0x9fba60] */ r_esi = R32((u32)(r_eax*4+0x9fba60u));
    /* 004f88ec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f88ee: je 0x4f8a17 */ if (fZ) goto L_004f8a17;
L_004f88f4:; BB(0x004f88f4);
    /* 004f88f4: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 004f88f7: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004f88fb: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 004f88ff: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 004f8904: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 004f8908: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 004f890d: movzx eax, word ptr [edi + 6] */ r_eax = (u32)R16((u32)(r_edi+0x6u));
    /* 004f8911: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004f8916: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004f891a: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 004f891f: movzx eax, word ptr [edi + 0xa] */ r_eax = (u32)R16((u32)(r_edi+0xau));
    /* 004f8923: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 004f8928: movzx eax, word ptr [edi + 0xc] */ r_eax = (u32)R16((u32)(r_edi+0xcu));
    /* 004f892c: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 004f8931: movzx eax, word ptr [edi + 0xe] */ r_eax = (u32)R16((u32)(r_edi+0xeu));
    /* 004f8935: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004f893a: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 004f893d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004f8941: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 004f8944: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004f8948: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 004f894b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f894f: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004f8952: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004f8956: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004f8959: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f895d: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004f8960: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004f8964: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 004f8967: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004f896b: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004f896e: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004f8972: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004f8975: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f8979: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004f897c: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004f8980: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004f8983: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004f8987: movzx eax, word ptr [edi + 0x3c] */ r_eax = (u32)R16((u32)(r_edi+0x3cu));
    /* 004f898b: mov word ptr [esp + 0x3c], ax */ W16((u32)(r_esp+0x3cu), (u16)r_eax);
    /* 004f8990: movzx edi, word ptr [edi + 0x3e] */ r_edi = (u32)R16((u32)(r_edi+0x3eu));
    /* 004f8994: mov word ptr [esp + 0x3e], di */ W16((u32)(r_esp+0x3eu), (u16)r_edi);
    /* 004f8999: movsx edi, word ptr [esp + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x2u));
    /* 004f899e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f89a0: jne 0x4f89ae */ if (!fZ) goto L_004f89ae;
L_004f89a2:; BB(0x004f89a2);
    /* 004f89a2: mov eax, dword ptr [ebp + 0x104] */ r_eax = R32((u32)(r_ebp+0x104u));
    /* 004f89a8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f89aa: mov edi, dword ptr [esi + eax*8 + 0xc] */ r_edi = R32((u32)(r_esi+r_eax*8+0xcu));
L_004f89ae:; BB(0x004f89ae);
    /* 004f89ae: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 004f89b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f89b2: call 0x7ba8d0 */ r_esp -= 4; W32(r_esp, 0x4f89b7u); f_007ba8d0();
    /* 004f89b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f89b8: mov edx, dword ptr [0xab02b0] */ r_edx = R32((u32)(0xab02b0u));
    /* 004f89be: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 004f89c3: lea eax, [edx + edi + 1] */ r_eax = (u32)(r_edx+r_edi+0x1u);
    /* 004f89c7: cmp eax, 0xb4f */ {  u32 a = r_eax; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f89cc: jle 0x4f89d5 */ if ((fZ||fS!=fO)) goto L_004f89d5;
L_004f89ce:; BB(0x004f89ce);
    /* 004f89ce: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004f89d3: jmp 0x4f89da */ goto L_004f89da;
L_004f89d5:; BB(0x004f89d5);
    /* 004f89d5: mov dword ptr [0xab02b0], eax */ W32((u32)(0xab02b0u), r_eax);
L_004f89da:; BB(0x004f89da);
    /* 004f89da: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 004f89dd: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 004f89e1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f89e3: mov eax, dword ptr [ebp + 0x104] */ r_eax = R32((u32)(r_ebp+0x104u));
    /* 004f89e9: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004f89ec: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 004f89f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f89f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f89f5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f89f7: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f89f9: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 004f89fc: mov dword ptr [ebp + 0xfc], esi */ W32((u32)(r_ebp+0xfcu), r_esi);
    /* 004f8a02: mov dword ptr [ebp + 0x108], eax */ W32((u32)(r_ebp+0x108u), r_eax);
    /* 004f8a08: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 004f8a0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a0c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x4f8a0eu); call_ind(t); }
    /* 004f8a0e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f8a11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8a12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f8a13: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8a14: ret 4 */ FN_RET(0x004f88d4); r_esp += 8; return;
L_004f8a17:; BB(0x004f8a17);
    /* 004f8a17: mov dword ptr [ebp + 0xfc], 0 */ W32((u32)(r_ebp+0xfcu), 0x0u);
    /* 004f8a21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8a23: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f8a26: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f8a27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f8a28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f8a29: ret 4 */ FN_RET(0x004f88d4); r_esp += 8; return;
}

void f_004f8a2c(void) /* sub_4F8A2C */
{
    FN_ENTER(0x004f8a2c);
    /* 004f8a2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a2d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f8a2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a31: push 0x8d3304 */ { u32 v = 0x8d3304u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f8a3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f8a44: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f8a47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f8a4a: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004f8a4d: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004f8a50: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004f8a53: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004f8a56: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8a5c: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f8a5f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f8a62: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8a64: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8a66: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f8a68: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f8a6f: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f8a74u); f_007c1100();
    /* 004f8a74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8a76: jne 0x4f8a8c */ if (!fZ) goto L_004f8a8c;
L_004f8a78:; BB(0x004f8a78);
    /* 004f8a78: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8a7b: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004f8a81: mov edx, dword ptr [edx + 0x104] */ r_edx = R32((u32)(r_edx+0x104u));
    /* 004f8a87: jmp 0x4f8b7e */ goto L_004f8b7e;
L_004f8a8c:; BB(0x004f8a8c);
    /* 004f8a8c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8a8f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8a93: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f8a96: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8a9c: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f8a9f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8aa1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8aa3: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8aa5: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f8aac: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f8ab1u); f_007c09fc();
    /* 004f8ab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ab3: je 0x4f8abf */ if (fZ) goto L_004f8abf;
L_004f8ab5:; BB(0x004f8ab5);
    /* 004f8ab5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ab8: add dword ptr [eax + 0xf8], 1 */ { u32 ad = (u32)(r_eax+0xf8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004f8abf:; BB(0x004f8abf);
    /* 004f8abf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ac2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8ac4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8ac6: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f8ac9: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8acf: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f8ad2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8ad4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8ad6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8ad8: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f8adf: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f8ae4u); f_007c09fc();
    /* 004f8ae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ae6: je 0x4f8afc */ if (fZ) goto L_004f8afc;
L_004f8ae8:; BB(0x004f8ae8);
    /* 004f8ae8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8aeb: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004f8af1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f8af4: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 004f8afa: jmp 0x4f8b05 */ goto L_004f8b05;
L_004f8afc:; BB(0x004f8afc);
    /* 004f8afc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8aff: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
L_004f8b05:; BB(0x004f8b05);
    /* 004f8b05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b07: jne 0x4f8b6c */ if (!fZ) goto L_004f8b6c;
L_004f8b09:; BB(0x004f8b09);
    /* 004f8b09: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8b0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b0e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b10: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f8b13: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8b19: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f8b1c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8b1e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8b20: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8b22: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f8b29: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f8b2eu); f_007c09fc();
    /* 004f8b2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b30: jne 0x4f92a6 */ if (!fZ) goto L_004f92a6;
L_004f8b36:; BB(0x004f8b36);
    /* 004f8b36: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8b39: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b3b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8b3d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f8b40: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8b46: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f8b49: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8b4b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8b4d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8b4f: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f8b56: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f8b5bu); f_007c09fc();
    /* 004f8b5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b5d: jne 0x4f91f4 */ if (!fZ) goto L_004f91f4;
L_004f8b63:; BB(0x004f8b63);
    /* 004f8b63: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8b66: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
L_004f8b6c:; BB(0x004f8b6c);
    /* 004f8b6c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8b6f: je 0x4f9cba */ if (fZ) goto L_004f9cba;
L_004f8b75:; BB(0x004f8b75);
    /* 004f8b75: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8b78: mov edx, dword ptr [edx + 0x104] */ r_edx = R32((u32)(r_edx+0x104u));
L_004f8b7e:; BB(0x004f8b7e);
    /* 004f8b7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8b80: jge 0x4f8b94 */ if ((fS==fO)) goto L_004f8b94;
L_004f8b82:; BB(0x004f8b82);
    /* 004f8b82: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8b85: mov dword ptr [ecx + 0xf8], 0xd */ W32((u32)(r_ecx+0xf8u), 0xdu);
    /* 004f8b8f: mov eax, 0xd */ r_eax = 0xdu;
L_004f8b94:; BB(0x004f8b94);
    /* 004f8b94: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8b97: jle 0x4f8ba6 */ if ((fZ||fS!=fO)) goto L_004f8ba6;
L_004f8b99:; BB(0x004f8b99);
    /* 004f8b99: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8b9c: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
L_004f8ba6:; BB(0x004f8ba6);
    /* 004f8ba6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ba9: mov eax, dword ptr [eax + 0x100] */ r_eax = R32((u32)(r_eax+0x100u));
    /* 004f8baf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8bb1: jl 0x4f9ca7 */ if ((fS!=fO)) goto L_004f9ca7;
L_004f8bb7:; BB(0x004f8bb7);
    /* 004f8bb7: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004f8bba:; BB(0x004f8bba);
    /* 004f8bba: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8bbc: jle 0x4f8bcb */ if ((fZ||fS!=fO)) goto L_004f8bcb;
L_004f8bbe:; BB(0x004f8bbe);
    /* 004f8bbe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8bc1: mov dword ptr [eax + 0x104], 0 */ W32((u32)(r_eax+0x104u), 0x0u);
L_004f8bcb:; BB(0x004f8bcb);
    /* 004f8bcb: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8bd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8bd4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f8bd7: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f8bda: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8bdc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8bde: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8be0: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f8be7: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f8becu); f_007c1100();
    /* 004f8bec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8bee: jne 0x4f8bfe */ if (!fZ) goto L_004f8bfe;
L_004f8bf0:; BB(0x004f8bf0);
    /* 004f8bf0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8bf3: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8bf9: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8bfe:; BB(0x004f8bfe);
    /* 004f8bfe: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c04: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8c07: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f8c0a: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f8c0d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8c0f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8c11: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8c13: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f8c1a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f8c1fu); f_007c1160();
    /* 004f8c1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8c21: je 0x4f8edd */ if (fZ) goto L_004f8edd;
L_004f8c27:; BB(0x004f8c27);
    /* 004f8c27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8c2a: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f8c30: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 004f8c33: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8c36: ja 0x4f8ed2 */ if ((!fC&&!fZ)) goto L_004f8ed2;
L_004f8c3c:; BB(0x004f8c3c);
    /* 004f8c3c: mov eax, dword ptr [eax*4 + 0x91e948] */ r_eax = R32((u32)(r_eax*4+0x91e948u));
    /* 004f8c43: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004f8ed2:; BB(0x004f8ed2);
    /* 004f8ed2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ed5: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8edb: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8edd:; BB(0x004f8edd);
    /* 004f8edd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ee0: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f91f4:; BB(0x004f91f4);
    /* 004f91f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f91f7: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
L_004f91fa:; BB(0x004f91fa);
    /* 004f91fa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f91fd: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004f9200: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f9204: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9207: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f920a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f920c: jle 0x4f9212 */ if ((fZ||fS!=fO)) goto L_004f9212;
L_004f920e:; BB(0x004f920e);
    /* 004f920e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f9210: jmp 0x4f9218 */ goto L_004f9218;
L_004f9212:; BB(0x004f9212);
    /* 004f9212: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9214: jge 0x4f9218 */ if ((fS==fO)) goto L_004f9218;
L_004f9216:; BB(0x004f9216);
    /* 004f9216: mov esi, eax */ r_esi = r_eax;
L_004f9218:; BB(0x004f9218);
    /* 004f9218: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f921b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f921c: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4f9221u); f_004f7fb0();
    /* 004f9221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9223: je 0x4f91fa */ if (fZ) goto L_004f91fa;
L_004f9225:; BB(0x004f9225);
    /* 004f9225: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f9227: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f922a: je 0x4f91fa */ if (fZ) goto L_004f91fa;
L_004f922c:; BB(0x004f922c);
    /* 004f922c: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9232: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9235: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 004f9238: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004f923b: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004f923e: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004f9241: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 004f9244: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 004f9247: mov dword ptr [edi + 0x24], ebx */ W32((u32)(r_edi+0x24u), r_ebx);
    /* 004f924a: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004f924d: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004f9250: mov dword ptr [edi + 0x50], ebx */ W32((u32)(r_edi+0x50u), r_ebx);
    /* 004f9253: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004f9255: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9258: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f925a: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f925fu); f_008101d0();
    /* 004f925f: mov ebx, eax */ r_ebx = r_eax;
    /* 004f9261: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9267: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f926cu); f_008123e4();
    /* 004f926c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f926f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9272: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9274: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9276: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9278: jle 0x4f9d47 */ if ((fZ||fS!=fO)) goto L_004f9d47;
L_004f927e:; BB(0x004f927e);
    /* 004f927e: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9281: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9284: je 0x4f9294 */ if (fZ) goto L_004f9294;
L_004f9286:; BB(0x004f9286);
    /* 004f9286: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9289: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f928d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f928f: jne 0x4f9294 */ if (!fZ) goto L_004f9294;
L_004f9291:; BB(0x004f9291);
    /* 004f9291: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9294:; BB(0x004f9294);
    /* 004f9294: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9297: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f929a: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f929d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f929f: jl 0x4f927e */ if ((fS!=fO)) goto L_004f927e;
L_004f92a1:; BB(0x004f92a1);
    /* 004f92a1: jmp 0x4f9d47 */ goto L_004f9d47;
L_004f92a6:; BB(0x004f92a6);
    /* 004f92a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f92a9: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
L_004f92ac:; BB(0x004f92ac);
    /* 004f92ac: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f92af: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004f92b2: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f92b6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f92b9: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f92bc: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f92be: jle 0x4f92c4 */ if ((fZ||fS!=fO)) goto L_004f92c4;
L_004f92c0:; BB(0x004f92c0);
    /* 004f92c0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f92c2: jmp 0x4f92ca */ goto L_004f92ca;
L_004f92c4:; BB(0x004f92c4);
    /* 004f92c4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f92c6: jge 0x4f92ca */ if ((fS==fO)) goto L_004f92ca;
L_004f92c8:; BB(0x004f92c8);
    /* 004f92c8: mov esi, eax */ r_esi = r_eax;
L_004f92ca:; BB(0x004f92ca);
    /* 004f92ca: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f92cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f92ce: call 0x4f7fb0 */ r_esp -= 4; W32(r_esp, 0x4f92d3u); f_004f7fb0();
    /* 004f92d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f92d5: je 0x4f92ac */ if (fZ) goto L_004f92ac;
L_004f92d7:; BB(0x004f92d7);
    /* 004f92d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004f92d9: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f92dc: je 0x4f92ac */ if (fZ) goto L_004f92ac;
L_004f92de:; BB(0x004f92de);
    /* 004f92de: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f92e4: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f92e7: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 004f92ea: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004f92ed: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004f92f0: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 004f92f3: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 004f92f6: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 004f92f9: mov dword ptr [edi + 0x24], ebx */ W32((u32)(r_edi+0x24u), r_ebx);
    /* 004f92fc: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004f92ff: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004f9302: mov dword ptr [edi + 0x50], ebx */ W32((u32)(r_edi+0x50u), r_ebx);
    /* 004f9305: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004f9307: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f930a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f930c: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f9311u); f_008101d0();
    /* 004f9311: mov ebx, eax */ r_ebx = r_eax;
    /* 004f9313: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9319: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f931eu); f_008123e4();
    /* 004f931e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9321: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9324: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9326: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f932a: jle 0x4f934f */ if ((fZ||fS!=fO)) goto L_004f934f;
L_004f932c:; BB(0x004f932c);
    /* 004f932c: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f932f: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9332: je 0x4f9342 */ if (fZ) goto L_004f9342;
L_004f9334:; BB(0x004f9334);
    /* 004f9334: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9337: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f933b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f933d: jne 0x4f9342 */ if (!fZ) goto L_004f9342;
L_004f933f:; BB(0x004f933f);
    /* 004f933f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9342:; BB(0x004f9342);
    /* 004f9342: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9345: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9348: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f934b: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f934d: jl 0x4f932c */ if ((fS!=fO)) goto L_004f932c;
L_004f934f:; BB(0x004f934f);
    /* 004f934f: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f9355: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f9357:; BB(0x004f9357);
    /* 004f9357: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f935a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f935d: je 0x4f936d */ if (fZ) goto L_004f936d;
L_004f935f:; BB(0x004f935f);
    /* 004f935f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9362: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004f9366: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9368: jne 0x4f936d */ if (!fZ) goto L_004f936d;
L_004f936a:; BB(0x004f936a);
    /* 004f936a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f936d:; BB(0x004f936d);
    /* 004f936d: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f9370: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f9374: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9377: je 0x4f9387 */ if (fZ) goto L_004f9387;
L_004f9379:; BB(0x004f9379);
    /* 004f9379: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f937c: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004f9380: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9382: jne 0x4f9387 */ if (!fZ) goto L_004f9387;
L_004f9384:; BB(0x004f9384);
    /* 004f9384: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9387:; BB(0x004f9387);
    /* 004f9387: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f938a: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004f938d: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9393: jl 0x4f9357 */ if ((fS!=fO)) goto L_004f9357;
L_004f9395:; BB(0x004f9395);
    /* 004f9395: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9398: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004f939b: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 004f939e: jmp 0x4f8b36 */ goto L_004f8b36;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9ca7:; BB(0x004f9ca7);
    /* 004f9ca7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9caa: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9cad: mov edx, eax */ r_edx = r_eax;
    /* 004f9caf: mov dword ptr [ecx + 0x104], eax */ W32((u32)(r_ecx+0x104u), r_eax);
    /* 004f9cb5: jmp 0x4f8bba */ goto L_004f8bba;
L_004f9cba:; BB(0x004f9cba);
    /* 004f9cba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9cbd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cbf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cc1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f9cc4: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9cca: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f9ccd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9ccf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9cd1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9cd3: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f9cda: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f9cdfu); f_007c09fc();
    /* 004f9cdf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9ce1: je 0x4f9ced */ if (fZ) goto L_004f9ced;
L_004f9ce3:; BB(0x004f9ce3);
    /* 004f9ce3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9ce6: add dword ptr [eax + 0x104], 1 */ { u32 ad = (u32)(r_eax+0x104u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004f9ced:; BB(0x004f9ced);
    /* 004f9ced: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9cf0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cf2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9cf4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f9cf7: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9cfd: lea ebx, [edx + edx*4] */ r_ebx = (u32)(r_edx+r_edx*4);
    /* 004f9d00: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9d02: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9d04: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9d06: lea ecx, [ebx + ebx + 0xaae75c] */ r_ecx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 004f9d0d: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x4f9d12u); f_007c09fc();
    /* 004f9d12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9d14: je 0x4f9d33 */ if (fZ) goto L_004f9d33;
L_004f9d16:; BB(0x004f9d16);
    /* 004f9d16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9d19: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 004f9d1f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9d22: mov dword ptr [eax + 0x104], edx */ W32((u32)(r_eax+0x104u), r_edx);
    /* 004f9d28: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f9d2e: jmp 0x4f8b7e */ goto L_004f8b7e;
L_004f9d33:; BB(0x004f9d33);
    /* 004f9d33: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9d36: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 004f9d3c: mov edx, dword ptr [edx + 0x104] */ r_edx = R32((u32)(r_edx+0x104u));
    /* 004f9d42: jmp 0x4f8b7e */ goto L_004f8b7e;
L_004f9d47:; BB(0x004f9d47);
    /* 004f9d47: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f9d4d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f9d4f:; BB(0x004f9d4f);
    /* 004f9d4f: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f9d52: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9d55: je 0x4f9d65 */ if (fZ) goto L_004f9d65;
L_004f9d57:; BB(0x004f9d57);
    /* 004f9d57: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9d5a: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004f9d5e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9d60: jne 0x4f9d65 */ if (!fZ) goto L_004f9d65;
L_004f9d62:; BB(0x004f9d62);
    /* 004f9d62: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9d65:; BB(0x004f9d65);
    /* 004f9d65: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f9d68: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f9d6c: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9d6f: je 0x4f9d7f */ if (fZ) goto L_004f9d7f;
L_004f9d71:; BB(0x004f9d71);
    /* 004f9d71: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9d74: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004f9d78: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9d7a: jne 0x4f9d7f */ if (!fZ) goto L_004f9d7f;
L_004f9d7c:; BB(0x004f9d7c);
    /* 004f9d7c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9d7f:; BB(0x004f9d7f);
    /* 004f9d7f: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9d82: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004f9d85: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9d8b: jl 0x4f9d4f */ if ((fS!=fO)) goto L_004f9d4f;
L_004f9d8d:; BB(0x004f9d8d);
    /* 004f9d8d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9d90: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004f9d93: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 004f9d96: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f9d9c: jmp 0x4f8b6c */ goto L_004f8b6c;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8a2c); r_esp += 4; return;
}

void f_004f8c45(void)
{
    FN_ENTER(0x004f8c45);
    /* 004f8c45: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 004f8c4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c4c: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f8c51u); f_008101d0();
    /* 004f8c51: mov ebx, eax */ r_ebx = r_eax;
    /* 004f8c53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f8c54: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f8c59u); f_008123e4();
    /* 004f8c59: mov edi, eax */ r_edi = r_eax;
    /* 004f8c5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8c5e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f8c60: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8c62: jle 0x4f93a3 */ if ((fZ||fS!=fO)) goto L_004f93a3;
L_004f8c68:; BB(0x004f8c68);
    /* 004f8c68: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f8c6b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8c6e: je 0x4f8cbc */ if (fZ) goto L_004f8cbc;
L_004f8c70:; BB(0x004f8c70);
    /* 004f8c70: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c73: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c79: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8c7c: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8c81u); f_004f80e0();
    /* 004f8c81: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c84: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c8a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8c8d: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8c92u); f_004f80e0();
    /* 004f8c92: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c95: push dword ptr [0xaca35c] */ { u32 v = R32((u32)(0xaca35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8c9b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8c9e: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8ca3u); f_004f80e0();
    /* 004f8ca3: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8ca6: push dword ptr [0xaca358] */ { u32 v = R32((u32)(0xaca358u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8cac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8caf: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8cb4u); f_004f80e0();
    /* 004f8cb4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004f8cb9: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
L_004f8cbc:; BB(0x004f8cbc);
    /* 004f8cbc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8cbf: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8cc2: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8cc4: jl 0x4f8c68 */ if ((fS!=fO)) goto L_004f8c68;
L_004f8cc6:; BB(0x004f8cc6);
    /* 004f8cc6: jmp 0x4f93a3 */ goto L_004f93a3;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f93a3:; BB(0x004f93a3);
    /* 004f93a3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004f93a5:; BB(0x004f93a5);
    /* 004f93a5: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f93ab: lea esi, [edi + edi*8] */ r_esi = (u32)(r_edi+r_edi*8);
    /* 004f93ae: movsx ecx, word ptr [edx + esi*8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+r_esi*8));
    /* 004f93b2: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f93b5: je 0x4f9411 */ if (fZ) goto L_004f9411;
L_004f93b7:; BB(0x004f93b7);
    /* 004f93b7: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93ba: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93c0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f93c3: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f93c8u); f_004f80e0();
    /* 004f93c8: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93cb: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93d1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f93d4: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f93d9u); f_004f80e0();
    /* 004f93d9: push dword ptr [ebx + 0x44] */ { u32 v = R32((u32)(r_ebx+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93dc: push dword ptr [0xaca35c] */ { u32 v = R32((u32)(0xaca35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93e2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f93e5: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f93eau); f_004f80e0();
    /* 004f93ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f93f0: push dword ptr [edx + esi*8 + 0x44] */ { u32 v = R32((u32)(r_edx+r_esi*8+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93f4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f93f7: push dword ptr [0xaca358] */ { u32 v = R32((u32)(0xaca358u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f93fd: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f9402u); f_004f80e0();
    /* 004f9402: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f9408: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004f940d: mov word ptr [ecx + esi*8], dx */ W16((u32)(r_ecx+r_esi*8), (u16)r_edx);
L_004f9411:; BB(0x004f9411);
    /* 004f9411: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f9414: cmp edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f941a: jl 0x4f93a5 */ if ((fS!=fO)) goto L_004f93a5;
L_004f941c:; BB(0x004f941c);
    /* 004f941c: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9422: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9424: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f9429u); f_008101d0();
    /* 004f9429: mov esi, eax */ r_esi = r_eax;
    /* 004f942b: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9431: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9436u); f_008123e4();
    /* 004f9436: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9439: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f943b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f943d: jle 0x4f9454 */ if ((fZ||fS!=fO)) goto L_004f9454;
L_004f943f:; BB(0x004f943f);
    /* 004f943f: movsx edx, word ptr [esi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004f9442: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9445: je 0x4f944a */ if (fZ) goto L_004f944a;
L_004f9447:; BB(0x004f9447);
    /* 004f9447: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f944a:; BB(0x004f944a);
    /* 004f944a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f944d: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9450: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9452: jl 0x4f943f */ if ((fS!=fO)) goto L_004f943f;
L_004f9454:; BB(0x004f9454);
    /* 004f9454: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f945a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f945c:; BB(0x004f945c);
    /* 004f945c: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f945f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9462: je 0x4f9467 */ if (fZ) goto L_004f9467;
L_004f9464:; BB(0x004f9464);
    /* 004f9464: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9467:; BB(0x004f9467);
    /* 004f9467: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f946a: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f946e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9471: je 0x4f9476 */ if (fZ) goto L_004f9476;
L_004f9473:; BB(0x004f9473);
    /* 004f9473: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9476:; BB(0x004f9476);
    /* 004f9476: movsx ecx, word ptr [eax + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004f947a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f947d: je 0x4f9482 */ if (fZ) goto L_004f9482;
L_004f947f:; BB(0x004f947f);
    /* 004f947f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9482:; BB(0x004f9482);
    /* 004f9482: movsx ecx, word ptr [eax + 0x90] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004f9489: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f948c: je 0x4f9491 */ if (fZ) goto L_004f9491;
L_004f948e:; BB(0x004f948e);
    /* 004f948e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9491:; BB(0x004f9491);
    /* 004f9491: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9494: lea ecx, [eax + 0xd8] */ r_ecx = (u32)(r_eax+0xd8u);
    /* 004f949a: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f94a0: jl 0x4f945c */ if ((fS!=fO)) goto L_004f945c;
L_004f94a2:; BB(0x004f94a2);
    /* 004f94a2: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f94a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f94ab: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004f94ae: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 004f94b1: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 004f94b3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f94b5: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f94bau); f_008101d0();
    /* 004f94ba: mov ebx, eax */ r_ebx = r_eax;
    /* 004f94bc: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f94c2: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f94c7u); f_008123e4();
    /* 004f94c7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f94ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f94cd: mov ecx, eax */ r_ecx = r_eax;
    /* 004f94cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f94d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f94d3: jle 0x4f94f5 */ if ((fZ||fS!=fO)) goto L_004f94f5;
L_004f94d5:; BB(0x004f94d5);
    /* 004f94d5: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f94d8: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f94db: je 0x4f94e8 */ if (fZ) goto L_004f94e8;
L_004f94dd:; BB(0x004f94dd);
    /* 004f94dd: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f94e1: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f94e3: jne 0x4f94e8 */ if (!fZ) goto L_004f94e8;
L_004f94e5:; BB(0x004f94e5);
    /* 004f94e5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f94e8:; BB(0x004f94e8);
    /* 004f94e8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f94eb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f94ee: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f94f1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f94f3: jl 0x4f94d5 */ if ((fS!=fO)) goto L_004f94d5;
L_004f94f5:; BB(0x004f94f5);
    /* 004f94f5: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f94fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f94fd:; BB(0x004f94fd);
    /* 004f94fd: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f9500: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9503: je 0x4f9510 */ if (fZ) goto L_004f9510;
L_004f9505:; BB(0x004f9505);
    /* 004f9505: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004f9509: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f950b: jne 0x4f9510 */ if (!fZ) goto L_004f9510;
L_004f950d:; BB(0x004f950d);
    /* 004f950d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9510:; BB(0x004f9510);
    /* 004f9510: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f9513: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f9517: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f951a: je 0x4f9527 */ if (fZ) goto L_004f9527;
L_004f951c:; BB(0x004f951c);
    /* 004f951c: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004f9520: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9522: jne 0x4f9527 */ if (!fZ) goto L_004f9527;
L_004f9524:; BB(0x004f9524);
    /* 004f9524: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f9527:; BB(0x004f9527);
    /* 004f9527: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f952a: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004f952d: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9533: jl 0x4f94fd */ if ((fS!=fO)) goto L_004f94fd;
L_004f9535:; BB(0x004f9535);
    /* 004f9535: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9538: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f953e: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004f9541: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8c45); r_esp += 4; return;
}

void f_004f8ccb(void)
{
    FN_ENTER(0x004f8ccb);
    /* 004f8ccb: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 004f8cd1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8cd2: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f8cd7u); f_008101d0();
    /* 004f8cd7: mov edi, eax */ r_edi = r_eax;
    /* 004f8cd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8cda: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f8cdfu); f_008123e4();
    /* 004f8cdf: mov esi, eax */ r_esi = r_eax;
    /* 004f8ce1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8ce4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8ce6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8ce8: jle 0x4f9546 */ if ((fZ||fS!=fO)) goto L_004f9546;
L_004f8cee:; BB(0x004f8cee);
    /* 004f8cee: movsx edx, word ptr [edi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 004f8cf1: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8cf4: je 0x4f8d50 */ if (fZ) goto L_004f8d50;
L_004f8cf6:; BB(0x004f8cf6);
    /* 004f8cf6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8cf9: movsx ecx, word ptr [edi + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004f8cfd: mov edx, dword ptr [edx + 0x58] */ r_edx = R32((u32)(r_edx+0x58u));
    /* 004f8d00: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8d02: jne 0x4f8d50 */ if (!fZ) goto L_004f8d50;
L_004f8d04:; BB(0x004f8d04);
    /* 004f8d04: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d07: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d0d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8d10: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8d15u); f_004f80e0();
    /* 004f8d15: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d18: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d1e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8d21: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8d26u); f_004f80e0();
    /* 004f8d26: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d29: push dword ptr [0xaca35c] */ { u32 v = R32((u32)(0xaca35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8d32: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8d37u); f_004f80e0();
    /* 004f8d37: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d3a: push dword ptr [0xaca358] */ { u32 v = R32((u32)(0xaca358u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f8d40: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8d43: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f8d48u); f_004f80e0();
    /* 004f8d48: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 004f8d4d: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
L_004f8d50:; BB(0x004f8d50);
    /* 004f8d50: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f8d53: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8d56: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8d58: jl 0x4f8cee */ if ((fS!=fO)) goto L_004f8cee;
L_004f8d5a:; BB(0x004f8d5a);
    /* 004f8d5a: jmp 0x4f9546 */ goto L_004f9546;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f9546:; BB(0x004f9546);
    /* 004f9546: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004f9548:; BB(0x004f9548);
    /* 004f9548: mov eax, dword ptr [0xa727a0] */ r_eax = R32((u32)(0xa727a0u));
    /* 004f954d: lea ebx, [esi + esi*8] */ r_ebx = (u32)(r_esi+r_esi*8);
    /* 004f9550: movsx edx, word ptr [eax + ebx*8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*8));
    /* 004f9554: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9557: je 0x4f95cd */ if (fZ) goto L_004f95cd;
L_004f9559:; BB(0x004f9559);
    /* 004f9559: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f955c: movsx ecx, word ptr [eax + ebx*8 + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+r_ebx*8+0xcu));
    /* 004f9561: mov edi, dword ptr [edx + 0x58] */ r_edi = R32((u32)(r_edx+0x58u));
    /* 004f9564: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9566: jne 0x4f95cd */ if (!fZ) goto L_004f95cd;
L_004f9568:; BB(0x004f9568);
    /* 004f9568: push dword ptr [eax + ebx*8 + 0x44] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f956c: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9572: mov ecx, edx */ r_ecx = r_edx;
    /* 004f9574: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f9579u); f_004f80e0();
    /* 004f9579: mov eax, dword ptr [0xa727a0] */ r_eax = R32((u32)(0xa727a0u));
    /* 004f957e: push dword ptr [eax + ebx*8 + 0x44] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9582: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9585: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f958b: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f9590u); f_004f80e0();
    /* 004f9590: mov eax, dword ptr [0xa727a0] */ r_eax = R32((u32)(0xa727a0u));
    /* 004f9595: push dword ptr [eax + ebx*8 + 0x44] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9599: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f959c: push dword ptr [0xaca35c] */ { u32 v = R32((u32)(0xaca35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f95a2: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f95a7u); f_004f80e0();
    /* 004f95a7: mov eax, dword ptr [0xa727a0] */ r_eax = R32((u32)(0xa727a0u));
    /* 004f95ac: push dword ptr [eax + ebx*8 + 0x44] */ { u32 v = R32((u32)(r_eax+r_ebx*8+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f95b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f95b3: push dword ptr [0xaca358] */ { u32 v = R32((u32)(0xaca358u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f95b9: call 0x4f80e0 */ r_esp -= 4; W32(r_esp, 0x4f95beu); f_004f80e0();
    /* 004f95be: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f95c4: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004f95c9: mov word ptr [edx + ebx*8], ax */ W16((u32)(r_edx+r_ebx*8), (u16)r_eax);
L_004f95cd:; BB(0x004f95cd);
    /* 004f95cd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f95d0: cmp esi, 0x100 */ {  u32 a = r_esi; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f95d6: jl 0x4f9548 */ if ((fS!=fO)) goto L_004f9548;
L_004f95dc:; BB(0x004f95dc);
    /* 004f95dc: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f95e2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f95e4: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f95e9u); f_008101d0();
    /* 004f95e9: mov esi, eax */ r_esi = r_eax;
    /* 004f95eb: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f95f1: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f95f6u); f_008123e4();
    /* 004f95f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f95f9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f95fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f95fd: jle 0x4f9614 */ if ((fZ||fS!=fO)) goto L_004f9614;
L_004f95ff:; BB(0x004f95ff);
    /* 004f95ff: movsx edx, word ptr [esi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 004f9602: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9605: je 0x4f960a */ if (fZ) goto L_004f960a;
L_004f9607:; BB(0x004f9607);
    /* 004f9607: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f960a:; BB(0x004f960a);
    /* 004f960a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f960d: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9610: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9612: jl 0x4f95ff */ if ((fS!=fO)) goto L_004f95ff;
L_004f9614:; BB(0x004f9614);
    /* 004f9614: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f961a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f961c:; BB(0x004f961c);
    /* 004f961c: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f961f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9622: je 0x4f9627 */ if (fZ) goto L_004f9627;
L_004f9624:; BB(0x004f9624);
    /* 004f9624: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9627:; BB(0x004f9627);
    /* 004f9627: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f962a: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f962e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9631: je 0x4f9636 */ if (fZ) goto L_004f9636;
L_004f9633:; BB(0x004f9633);
    /* 004f9633: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9636:; BB(0x004f9636);
    /* 004f9636: movsx ecx, word ptr [eax + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x48u));
    /* 004f963a: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f963d: je 0x4f9642 */ if (fZ) goto L_004f9642;
L_004f963f:; BB(0x004f963f);
    /* 004f963f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9642:; BB(0x004f9642);
    /* 004f9642: movsx ecx, word ptr [eax + 0x90] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x90u));
    /* 004f9649: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f964c: je 0x4f9651 */ if (fZ) goto L_004f9651;
L_004f964e:; BB(0x004f964e);
    /* 004f964e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_004f9651:; BB(0x004f9651);
    /* 004f9651: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9654: lea ecx, [eax + 0xd8] */ r_ecx = (u32)(r_eax+0xd8u);
    /* 004f965a: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9660: jl 0x4f961c */ if ((fS!=fO)) goto L_004f961c;
L_004f9662:; BB(0x004f9662);
    /* 004f9662: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9668: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f966b: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004f966e: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 004f9671: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 004f9673: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f9675: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f967au); f_008101d0();
    /* 004f967a: mov ebx, eax */ r_ebx = r_eax;
    /* 004f967c: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9682: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9687u); f_008123e4();
    /* 004f9687: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f968a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f968d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f968f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9691: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9693: jle 0x4f96b5 */ if ((fZ||fS!=fO)) goto L_004f96b5;
L_004f9695:; BB(0x004f9695);
    /* 004f9695: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9698: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f969b: je 0x4f96a8 */ if (fZ) goto L_004f96a8;
L_004f969d:; BB(0x004f969d);
    /* 004f969d: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f96a1: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96a3: jne 0x4f96a8 */ if (!fZ) goto L_004f96a8;
L_004f96a5:; BB(0x004f96a5);
    /* 004f96a5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f96a8:; BB(0x004f96a8);
    /* 004f96a8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f96ab: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f96ae: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f96b1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f96b3: jl 0x4f9695 */ if ((fS!=fO)) goto L_004f9695;
L_004f96b5:; BB(0x004f96b5);
    /* 004f96b5: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f96bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f96bd:; BB(0x004f96bd);
    /* 004f96bd: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f96c0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96c3: je 0x4f96d0 */ if (fZ) goto L_004f96d0;
L_004f96c5:; BB(0x004f96c5);
    /* 004f96c5: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004f96c9: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96cb: jne 0x4f96d0 */ if (!fZ) goto L_004f96d0;
L_004f96cd:; BB(0x004f96cd);
    /* 004f96cd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f96d0:; BB(0x004f96d0);
    /* 004f96d0: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f96d3: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f96d7: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96da: je 0x4f96e7 */ if (fZ) goto L_004f96e7;
L_004f96dc:; BB(0x004f96dc);
    /* 004f96dc: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004f96e0: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f96e2: jne 0x4f96e7 */ if (!fZ) goto L_004f96e7;
L_004f96e4:; BB(0x004f96e4);
    /* 004f96e4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f96e7:; BB(0x004f96e7);
    /* 004f96e7: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f96ea: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004f96ed: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f96f3: jl 0x4f96bd */ if ((fS!=fO)) goto L_004f96bd;
L_004f96f5:; BB(0x004f96f5);
    /* 004f96f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f96f8: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f96fe: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004f9701: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8ccb); r_esp += 4; return;
}

void f_004f8d5f(void)
{
    FN_ENTER(0x004f8d5f);
    /* 004f8d5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8d62: mov dword ptr [eax + 0x118], 0xb */ W32((u32)(r_eax+0x118u), 0xbu);
    /* 004f8d6c: mov edx, 1 */ r_edx = 0x1u;
    /* 004f8d71: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004f8d7b: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8d5f); r_esp += 4; return;
}

void f_004f8d80(void)
{
    FN_ENTER(0x004f8d80);
    /* 004f8d80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8d83: mov dword ptr [eax + 0x118], 0xa */ W32((u32)(r_eax+0x118u), 0xau);
    /* 004f8d8d: mov edx, 1 */ r_edx = 0x1u;
    /* 004f8d92: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004f8d9c: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8d80); r_esp += 4; return;
}

void f_004f8da1(void)
{
    FN_ENTER(0x004f8da1);
    /* 004f8da1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8da4: mov eax, 2 */ r_eax = 0x2u;
    /* 004f8da9: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f8dad: mov edx, dword ptr [edx + 0x114] */ r_edx = R32((u32)(r_edx+0x114u));
    /* 004f8db3: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8da1); r_esp += 4; return;
}

void f_004f8db8(void)
{
    FN_ENTER(0x004f8db8);
    /* 004f8db8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8dbb: mov dword ptr [eax + 0x118], 8 */ W32((u32)(r_eax+0x118u), 0x8u);
    /* 004f8dc5: mov edx, 1 */ r_edx = 0x1u;
    /* 004f8dca: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004f8dd4: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8db8); r_esp += 4; return;
}

void f_004f8dd9(void)
{
    FN_ENTER(0x004f8dd9);
    /* 004f8dd9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ddc: mov dword ptr [eax + 0x118], 7 */ W32((u32)(r_eax+0x118u), 0x7u);
    /* 004f8de6: mov edx, 1 */ r_edx = 0x1u;
    /* 004f8deb: mov dword ptr [eax + 0x114], 1 */ W32((u32)(r_eax+0x114u), 0x1u);
    /* 004f8df5: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8dd9); r_esp += 4; return;
}

void f_004f8dfa(void)
{
    FN_ENTER(0x004f8dfa);
    /* 004f8dfa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8dfd: call 0x4fa4a4 */ r_esp -= 4; W32(r_esp, 0x4f8e02u); f_004fa4a4();
    /* 004f8e02: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e05: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8e0b: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8dfa); r_esp += 4; return;
}

void f_004f8e10(void)
{
    FN_ENTER(0x004f8e10);
    /* 004f8e10: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e13: call 0x4fa7f0 */ r_esp -= 4; W32(r_esp, 0x4f8e18u); f_004fa7f0();
    /* 004f8e18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e1b: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8e21: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8e10); r_esp += 4; return;
}

void f_004f8e26(void)
{
    FN_ENTER(0x004f8e26);
    /* 004f8e26: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e29: call 0x4fe054 */ r_esp -= 4; W32(r_esp, 0x4f8e2eu); f_004fe054();
    /* 004f8e2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e31: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8e37: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8e26); r_esp += 4; return;
}

void f_004f8e3c(void)
{
    FN_ENTER(0x004f8e3c);
    /* 004f8e3c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e3f: call 0x4fa18c */ r_esp -= 4; W32(r_esp, 0x4f8e44u); f_004fa18c();
    /* 004f8e44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e47: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8e4d: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8e3c); r_esp += 4; return;
}

void f_004f8e52(void)
{
    FN_ENTER(0x004f8e52);
    /* 004f8e52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e55: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f8e5b: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8e52); r_esp += 4; return;
}

void f_004f8e60(void)
{
    FN_ENTER(0x004f8e60);
    /* 004f8e60: mov eax, dword ptr [0xaafca4] */ r_eax = R32((u32)(0xaafca4u));
    /* 004f8e65: fld dword ptr [0x91e9a4] */ FPUSH(R_F32((u32)(0x91e9a4u)));
    /* 004f8e6b: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 004f8e6e: movsx edx, word ptr [eax + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 004f8e72: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004f8e75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8e77: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f8e7a: mov ebx, 0 */ r_ebx = 0x0u;
    /* 004f8e7f: mov esi, 0 */ r_esi = 0x0u;
    /* 004f8e84: jle 0x4f97dc */ if ((fZ||fS!=fO)) goto L_004f97dc;
L_004f8e8a:; BB(0x004f8e8a);
    /* 004f8e8a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004f8e8d:; BB(0x004f8e8d);
    /* 004f8e8d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f8e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f8e91: jl 0x4f8ec3 */ if ((fS!=fO)) goto L_004f8ec3;
L_004f8e93:; BB(0x004f8e93);
    /* 004f8e93: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8e96: lea ecx, [edi + 4] */ r_ecx = (u32)(r_edi+0x4u);
    /* 004f8e99: lea edx, [eax + 0x1c] */ r_edx = (u32)(r_eax+0x1cu);
    /* 004f8e9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8e9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8e9e: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x4f8ea3u); f_0078ea2c();
    /* 004f8ea3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8ea6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f8ea9: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 004f8eac: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f8eae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f8eb0: movsx edx, word ptr [edx + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 004f8eb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f8eb5: jbe 0x4f8ec1 */ if ((fC||fZ)) goto L_004f8ec1;
L_004f8eb7:; BB(0x004f8eb7);
    /* 004f8eb7: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 004f8eba: mov ebx, edi */ r_ebx = r_edi;
    /* 004f8ebc: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004f8ebf: jmp 0x4f8ec3 */ goto L_004f8ec3;
L_004f8ec1:; BB(0x004f8ec1);
    /* 004f8ec1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004f8ec3:; BB(0x004f8ec3);
    /* 004f8ec3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8ec6: add edi, 0x34 */ {  u32 a = r_edi; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8ec9: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f8ecb: jl 0x4f8e8d */ if ((fS!=fO)) goto L_004f8e8d;
L_004f8ecd:; BB(0x004f8ecd);
    /* 004f8ecd: jmp 0x4f9706 */ goto L_004f9706;
L_004f8ee6:; BB(0x004f8ee6);
    /* 004f8ee6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ee8: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8eee:; BB(0x004f8eee);
    /* 004f8eee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ef1: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f8ef7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8ef9: je 0x4f9bd0 */ if (fZ) goto L_004f9bd0;
L_004f8eff:; BB(0x004f8eff);
    /* 004f8eff: call 0x4f82dc */ r_esp -= 4; W32(r_esp, 0x4f8f04u); f_004f82dc();
    /* 004f8f04: mov ecx, eax */ r_ecx = r_eax;
    /* 004f8f06: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f08: mov esi, 0x91e938 */ r_esi = 0x91e938u;
L_004f8f0d:; BB(0x004f8f0d);
    /* 004f8f0d: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f0f: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f11: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f13:; BB(0x004f8f13);
    /* 004f8f13: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f15: je 0x4f8f29 */ if (fZ) goto L_004f8f29;
L_004f8f17:; BB(0x004f8f17);
    /* 004f8f17: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f1a: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f1d: jne 0x4f8f2d */ if (!fZ) goto L_004f8f2d;
L_004f8f1f:; BB(0x004f8f1f);
    /* 004f8f1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f22: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f25: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f27: jne 0x4f8f0d */ if (!fZ) goto L_004f8f0d;
L_004f8f29:; BB(0x004f8f29);
    /* 004f8f29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2b: jmp 0x4f8f32 */ goto L_004f8f32;
L_004f8f2d:; BB(0x004f8f2d);
    /* 004f8f2d: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f2f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f32:; BB(0x004f8f32);
    /* 004f8f32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f34: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f3a:; BB(0x004f8f3a);
    /* 004f8f3a: mov edi, ecx */ r_edi = r_ecx;
    /* 004f8f3c: mov esi, 0x91e944 */ r_esi = 0x91e944u;
L_004f8f41:; BB(0x004f8f41);
    /* 004f8f41: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004f8f43: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f45: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f47:; BB(0x004f8f47);
    /* 004f8f47: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f49: je 0x4f8f5d */ if (fZ) goto L_004f8f5d;
L_004f8f4b:; BB(0x004f8f4b);
    /* 004f8f4b: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 004f8f4e: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f8f51: jne 0x4f8f61 */ if (!fZ) goto L_004f8f61;
L_004f8f53:; BB(0x004f8f53);
    /* 004f8f53: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f8f56: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f8f59: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 004f8f5b: jne 0x4f8f41 */ if (!fZ) goto L_004f8f41;
L_004f8f5d:; BB(0x004f8f5d);
    /* 004f8f5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f5f: jmp 0x4f8f66 */ goto L_004f8f66;
L_004f8f61:; BB(0x004f8f61);
    /* 004f8f61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 004f8f63: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_004f8f66:; BB(0x004f8f66);
    /* 004f8f66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f68: jne 0x4f8fa4 */ if (!fZ) goto L_004f8fa4;
L_004f8f6a:; BB(0x004f8f6a);
    /* 004f8f6a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f6d: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f8f73: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f8f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8f7f: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f8f85:; BB(0x004f8f85);
    /* 004f8f85: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f8f89: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f8f8e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f8f92: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8f95: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
    /* 004f8f9f: jmp 0x4f910a */ goto L_004f910a;
L_004f8fa4:; BB(0x004f8fa4);
    /* 004f8fa4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fa7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8faa: lea ebx, [edx + 0x11c] */ r_ebx = (u32)(r_edx+0x11cu);
    /* 004f8fb0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f8fb3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fb4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x4f8fb9u); f_00858900();
    /* 004f8fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f8fbc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fbf: mov eax, dword ptr [eax + 0x118] */ r_eax = R32((u32)(r_eax+0x118u));
    /* 004f8fc5: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fc8: je 0x4f9973 */ if (fZ) goto L_004f9973;
L_004f8fce:; BB(0x004f8fce);
    /* 004f8fce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd1: je 0x4f8ffd */ if (fZ) goto L_004f8ffd;
L_004f8fd3:; BB(0x004f8fd3);
    /* 004f8fd3: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fd6: jne 0x4f8fe7 */ if (!fZ) goto L_004f8fe7;
L_004f8fd8:; BB(0x004f8fd8);
    /* 004f8fd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8fdb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f8fdd: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f8fe2u); f_004f9db8();
    /* 004f8fe2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8fe7:; BB(0x004f8fe7);
    /* 004f8fe7: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f8fea: jne 0x4f90d9 */ if (!fZ) goto L_004f90d9;
L_004f8ff0:; BB(0x004f8ff0);
    /* 004f8ff0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f8ff3: call 0x4fada8 */ r_esp -= 4; W32(r_esp, 0x4f8ff8u); f_004fada8();
    /* 004f8ff8: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f8ffd:; BB(0x004f8ffd);
    /* 004f8ffd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9000: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004f9003: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9005: je 0x4f90d9 */ if (fZ) goto L_004f90d9;
L_004f900b:; BB(0x004f900b);
    /* 004f900b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9010: jg 0x4f9963 */ if ((!fZ&&fS==fO)) goto L_004f9963;
L_004f9016:; BB(0x004f9016);
    /* 004f9016: push 0x4800 */ { u32 v = 0x4800u; r_esp -= 4; W32(r_esp, v); }
    /* 004f901b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9020u); f_008581c5();
    /* 004f9020: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9023: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9026: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9028: je 0x4f9953 */ if (fZ) goto L_004f9953;
L_004f902e:; BB(0x004f902e);
    /* 004f902e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9034: mov esi, eax */ r_esi = r_eax;
    /* 004f9036: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f903bu); f_008101d0();
    /* 004f903b: mov ebx, eax */ r_ebx = r_eax;
    /* 004f903d: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9043: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f9048u); f_008123e4();
    /* 004f9048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f904b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f904d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f904f: jle 0x4f97ea */ if ((fZ||fS!=fO)) goto L_004f97ea;
L_004f9055:; BB(0x004f9055);
    /* 004f9055: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f9058: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f905b: je 0x4f90ca */ if (fZ) goto L_004f90ca;
L_004f905d:; BB(0x004f905d);
    /* 004f905d: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004f905f: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f9062: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9064: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9067: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f906a: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004f906d: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 004f9070: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9073: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 004f9076: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9079: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 004f907c: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f907f: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004f9082: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9085: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 004f9088: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f908b: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 004f908e: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9091: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 004f9094: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9097: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 004f909a: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f909d: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 004f90a0: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f90a3: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 004f90a6: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f90a9: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 004f90ac: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f90af: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 004f90b2: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f90b5: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 004f90b8: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f90bb: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 004f90be: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f90c1: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004f90c4: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f90c7: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f90ca:; BB(0x004f90ca);
    /* 004f90ca: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f90cd: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f90d0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f90d2: jl 0x4f9055 */ if ((fS!=fO)) goto L_004f9055;
L_004f90d4:; BB(0x004f90d4);
    /* 004f90d4: jmp 0x4f97ea */ goto L_004f97ea;
L_004f90d9:; BB(0x004f90d9);
    /* 004f90d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f90dc: mov edx, dword ptr [eax + 0x13c] */ r_edx = R32((u32)(r_eax+0x13cu));
    /* 004f90e2: mov dword ptr [eax + 0x114], 0 */ W32((u32)(r_eax+0x114u), 0x0u);
    /* 004f90ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f90ee: je 0x4f910a */ if (fZ) goto L_004f910a;
L_004f90f0:; BB(0x004f90f0);
    /* 004f90f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004f90f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f90f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004f90fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9100: mov dword ptr [edx + 0x13c], 0 */ W32((u32)(r_edx+0x13cu), 0x0u);
L_004f910a:; BB(0x004f910a);
    /* 004f910a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f910d: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9111: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9114: jne 0x4f9c42 */ if (!fZ) goto L_004f9c42;
L_004f911a:; BB(0x004f911a);
    /* 004f911a: push 0x91eb24 */ { u32 v = 0x91eb24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f911f: push 0x240006 */ { u32 v = 0x240006u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9124: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9129u); f_0061cdb0();
    /* 004f9129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f912c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004f912e:; BB(0x004f912e);
    /* 004f912e: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9134: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9137: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004f913a: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 004f913d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f913f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9141: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9143: lea ecx, [esi + esi + 0xaae75c] */ r_ecx = (u32)(r_esi+r_esi+0xaae75cu);
    /* 004f914a: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f914fu); f_007c1100();
    /* 004f914f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9151: je 0x4f91c6 */ if (fZ) goto L_004f91c6;
L_004f9153:; BB(0x004f9153);
    /* 004f9153: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9156: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 004f915c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f915e: jne 0x4f91a7 */ if (!fZ) goto L_004f91a7;
L_004f9160:; BB(0x004f9160);
    /* 004f9160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9162: jne 0x4f9183 */ if (!fZ) goto L_004f9183;
L_004f9164:; BB(0x004f9164);
    /* 004f9164: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f916b: push 0x91eb30 */ { u32 v = 0x91eb30u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9170: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9173: or eax, 0x220000 */ {  u32 a = r_eax; u32 b = 0x220000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f9178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9179: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f917eu); f_0061cdb0();
    /* 004f917e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9181: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f9183:; BB(0x004f9183);
    /* 004f9183: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9186: je 0x4f9164 */ if (fZ) goto L_004f9164;
L_004f9188:; BB(0x004f9188);
    /* 004f9188: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f918f: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9194: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f9197: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f919c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f919d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91a2u); f_0061cdb0();
    /* 004f91a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91a5: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91a7:; BB(0x004f91a7);
    /* 004f91a7: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91ae: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91b3: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91b6: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91bc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91c1u); f_0061cdb0();
    /* 004f91c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f91c4: jmp 0x4f91e3 */ goto L_004f91e3;
L_004f91c6:; BB(0x004f91c6);
    /* 004f91c6: push dword ptr [ebx*4 + 0x9b92d0] */ { u32 v = R32((u32)(r_ebx*4+0x9b92d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f91cd: push 0x91eb38 */ { u32 v = 0x91eb38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f91d2: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 004f91d5: or eax, 0x240000 */ {  u32 a = r_eax; u32 b = 0x240000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f91da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f91db: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f91e0u); f_0061cdb0();
    /* 004f91e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004f91e3:; BB(0x004f91e3);
    /* 004f91e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f91e6: cmp ebx, 0xe */ {  u32 a = r_ebx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f91e9: jl 0x4f912e */ if ((fS!=fO)) goto L_004f912e;
L_004f91ef:; BB(0x004f91ef);
    /* 004f91ef: jmp 0x4f9da1 */ goto L_004f9da1;
L_004f9706:; BB(0x004f9706);
    /* 004f9706: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9708: je 0x4f977d */ if (fZ) goto L_004f977d;
L_004f970a:; BB(0x004f970a);
    /* 004f970a: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9710: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9713: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9716: mov dword ptr [edi + 0x58], ebx */ W32((u32)(r_edi+0x58u), r_ebx);
    /* 004f9719: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004f971c: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 004f971f: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004f9722: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 004f9725: mov dword ptr [edi + 0x20], ecx */ W32((u32)(r_edi+0x20u), r_ecx);
    /* 004f9728: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 004f972b: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 004f972e: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004f9731: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004f9734: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 004f9737: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 004f9739: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004f973b: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f9740u); f_008101d0();
    /* 004f9740: mov ebx, eax */ r_ebx = r_eax;
    /* 004f9742: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9748: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f974du); f_008123e4();
    /* 004f974d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9750: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9753: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9755: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f9757: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9759: jle 0x4f978b */ if ((fZ||fS!=fO)) goto L_004f978b;
L_004f975b:; BB(0x004f975b);
    /* 004f975b: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f975e: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9761: je 0x4f976e */ if (fZ) goto L_004f976e;
L_004f9763:; BB(0x004f9763);
    /* 004f9763: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f9767: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9769: jne 0x4f976e */ if (!fZ) goto L_004f976e;
L_004f976b:; BB(0x004f976b);
    /* 004f976b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f976e:; BB(0x004f976e);
    /* 004f976e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9771: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9774: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9777: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9779: jl 0x4f975b */ if ((fS!=fO)) goto L_004f975b;
L_004f977b:; BB(0x004f977b);
    /* 004f977b: jmp 0x4f978b */ goto L_004f978b;
L_004f977d:; BB(0x004f977d);
    /* 004f977d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9780: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f9786: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f978b:; BB(0x004f978b);
    /* 004f978b: mov ecx, dword ptr [0xa727a0] */ r_ecx = R32((u32)(0xa727a0u));
    /* 004f9791: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004f9793:; BB(0x004f9793);
    /* 004f9793: movsx eax, word ptr [ecx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 004f9796: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9799: je 0x4f97a6 */ if (fZ) goto L_004f97a6;
L_004f979b:; BB(0x004f979b);
    /* 004f979b: movsx eax, word ptr [ecx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 004f979f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97a1: jne 0x4f97a6 */ if (!fZ) goto L_004f97a6;
L_004f97a3:; BB(0x004f97a3);
    /* 004f97a3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f97a6:; BB(0x004f97a6);
    /* 004f97a6: lea eax, [ecx + 0x48] */ r_eax = (u32)(r_ecx+0x48u);
    /* 004f97a9: movsx ecx, word ptr [ecx + 0x48] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x48u));
    /* 004f97ad: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97b0: je 0x4f97bd */ if (fZ) goto L_004f97bd;
L_004f97b2:; BB(0x004f97b2);
    /* 004f97b2: movsx ecx, word ptr [eax + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004f97b6: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97b8: jne 0x4f97bd */ if (!fZ) goto L_004f97bd;
L_004f97ba:; BB(0x004f97ba);
    /* 004f97ba: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_004f97bd:; BB(0x004f97bd);
    /* 004f97bd: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f97c0: lea ecx, [eax + 0x48] */ r_ecx = (u32)(r_eax+0x48u);
    /* 004f97c3: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f97c9: jl 0x4f9793 */ if ((fS!=fO)) goto L_004f9793;
L_004f97cb:; BB(0x004f97cb);
    /* 004f97cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f97ce: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f97d4: mov dword ptr [eax + 0x44], edi */ W32((u32)(r_eax+0x44u), r_edi);
    /* 004f97d7: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f97dc:; BB(0x004f97dc);
    /* 004f97dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f97df: mov edx, dword ptr [eax + 0x114] */ r_edx = R32((u32)(r_eax+0x114u));
    /* 004f97e5: jmp 0x4f8ee6 */ goto L_004f8ee6;
L_004f97ea:; BB(0x004f97ea);
    /* 004f97ea: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f97f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f97f2:; BB(0x004f97f2);
    /* 004f97f2: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f97f5: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f97f8: je 0x4f9867 */ if (fZ) goto L_004f9867;
L_004f97fa:; BB(0x004f97fa);
    /* 004f97fa: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f97fc: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f97ff: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9802: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9804: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9807: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f980a: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f980d: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9810: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9813: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9816: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9819: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f981c: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f981f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9822: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9825: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9828: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f982b: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f982e: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9831: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9834: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9837: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f983a: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f983d: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9840: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9843: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9846: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9849: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f984c: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f984f: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9852: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9855: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9858: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f985b: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f985e: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9861: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9864: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9867:; BB(0x004f9867);
    /* 004f9867: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f986a: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f986d: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9872: jl 0x4f97f2 */ if ((fS!=fO)) goto L_004f97f2;
L_004f9878:; BB(0x004f9878);
    /* 004f9878: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f987b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f987e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9881: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9883: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9885: jle 0x4f98b9 */ if ((fZ||fS!=fO)) goto L_004f98b9;
L_004f9887:; BB(0x004f9887);
    /* 004f9887: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 004f988b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f988c: call 0x807ac8 */ r_esp -= 4; W32(r_esp, 0x4f9891u); f_00807ac8();
    /* 004f9891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9894: je 0x4f98a9 */ if (fZ) goto L_004f98a9;
L_004f9896:; BB(0x004f9896);
    /* 004f9896: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9899: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f989b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f989c: lea edi, [esi + 0x14] */ r_edi = (u32)(r_esi+0x14u);
    /* 004f989f: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 004f98a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f98a4: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f98a9u); f_004f7fc0();
L_004f98a9:; BB(0x004f98a9);
    /* 004f98a9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98ac: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f98af: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f98b2: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f98b5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f98b7: jl 0x4f9887 */ if ((fS!=fO)) goto L_004f9887;
L_004f98b9:; BB(0x004f98b9);
    /* 004f98b9: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f98bf: ja 0x4f992b */ if ((!fC&&!fZ)) goto L_004f992b;
L_004f98c1:; BB(0x004f98c1);
    /* 004f98c1: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f98c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f98c9: je 0x4f992b */ if (fZ) goto L_004f992b;
L_004f98cb:; BB(0x004f98cb);
    /* 004f98cb: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f98ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f98d7: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f98dd: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f98e3: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f98ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f98ed: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f98f3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f98f8u); f_0086b6b8();
    /* 004f98f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f98fb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f98fe: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004f9901: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9903: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9905: jle 0x4f993a */ if ((fZ||fS!=fO)) goto L_004f993a;
L_004f9907:; BB(0x004f9907);
    /* 004f9907: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f990a: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f990d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f990f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9911: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9913: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9919: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f991eu); f_0061cdb0();
    /* 004f991e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9921: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9924: cmp ebx, dword ptr [eax + 0x40] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x40u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9927: jl 0x4f9907 */ if ((fS!=fO)) goto L_004f9907;
L_004f9929:; BB(0x004f9929);
    /* 004f9929: jmp 0x4f993a */ goto L_004f993a;
L_004f992b:; BB(0x004f992b);
    /* 004f992b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f992e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f992f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9934u); f_00857e98();
    /* 004f9934: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9935: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f993a:; BB(0x004f993a);
    /* 004f993a: mov ecx, eax */ r_ecx = r_eax;
    /* 004f993c: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9942: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9948: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f994b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f994c: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9951u); f_004f743c();
    /* 004f9951: jmp 0x4f992b */ goto L_004f992b;
L_004f9953:; BB(0x004f9953);
    /* 004f9953: push 0x91ec5c */ { u32 v = 0x91ec5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9958: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f995du); f_0061cdb0();
    /* 004f995d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f995e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9963:; BB(0x004f9963);
    /* 004f9963: push 0x91ec40 */ { u32 v = 0x91ec40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9968: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f996du); f_0061cdb0();
    /* 004f996d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f996e: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9973:; BB(0x004f9973);
    /* 004f9973: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9976: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 004f9979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f997b: jle 0x4f90d9 */ if ((fZ||fS!=fO)) goto L_004f90d9;
L_004f9981:; BB(0x004f9981);
    /* 004f9981: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 004f9984: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9986: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9988: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f998a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f998b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4f9990u); f_008581c5();
    /* 004f9990: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f9993: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9998: je 0x4f9bc0 */ if (fZ) goto L_004f9bc0;
L_004f999e:; BB(0x004f999e);
    /* 004f999e: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99a4: mov esi, eax */ r_esi = r_eax;
    /* 004f99a6: call 0x8101d0 */ r_esp -= 4; W32(r_esp, 0x4f99abu); f_008101d0();
    /* 004f99ab: mov ebx, eax */ r_ebx = r_eax;
    /* 004f99ad: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f99b3: call 0x8123e4 */ r_esp -= 4; W32(r_esp, 0x4f99b8u); f_008123e4();
    /* 004f99b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f99bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004f99bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f99bf: jle 0x4f9a56 */ if ((fZ||fS!=fO)) goto L_004f9a56;
L_004f99c5:; BB(0x004f99c5);
    /* 004f99c5: movsx edx, word ptr [ebx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 004f99c8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99cb: je 0x4f9a48 */ if (fZ) goto L_004f9a48;
L_004f99cd:; BB(0x004f99cd);
    /* 004f99cd: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004f99d0: movsx edx, word ptr [ebx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 004f99d4: mov edi, dword ptr [edi + 0x58] */ r_edi = R32((u32)(r_edi+0x58u));
    /* 004f99d7: cmp edx, dword ptr [edi] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f99d9: jne 0x4f9a48 */ if (!fZ) goto L_004f9a48;
L_004f99db:; BB(0x004f99db);
    /* 004f99db: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004f99dd: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 004f99e0: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 004f99e2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 004f99e5: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 004f99e8: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 004f99eb: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004f99ee: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004f99f1: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004f99f4: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 004f99f7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 004f99fa: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004f99fd: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 004f9a00: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 004f9a03: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004f9a06: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004f9a09: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 004f9a0c: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
    /* 004f9a0f: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 004f9a12: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004f9a15: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004f9a18: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 004f9a1b: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 004f9a1e: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 004f9a21: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004f9a24: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004f9a27: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 004f9a2a: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 004f9a2d: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004f9a30: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 004f9a33: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004f9a36: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004f9a39: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004f9a3c: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 004f9a3f: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004f9a42: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 004f9a45: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9a48:; BB(0x004f9a48);
    /* 004f9a48: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9a4b: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9a4e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9a50: jl 0x4f99c5 */ if ((fS!=fO)) goto L_004f99c5;
L_004f9a56:; BB(0x004f9a56);
    /* 004f9a56: mov edx, dword ptr [0xa727a0] */ r_edx = R32((u32)(0xa727a0u));
    /* 004f9a5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004f9a5e:; BB(0x004f9a5e);
    /* 004f9a5e: movsx ecx, word ptr [edx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 004f9a61: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a64: je 0x4f9ae1 */ if (fZ) goto L_004f9ae1;
L_004f9a66:; BB(0x004f9a66);
    /* 004f9a66: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9a69: movsx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0xcu));
    /* 004f9a6d: mov edi, dword ptr [ecx + 0x58] */ r_edi = R32((u32)(r_ecx+0x58u));
    /* 004f9a70: cmp ebx, dword ptr [edi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9a72: jne 0x4f9ae1 */ if (!fZ) goto L_004f9ae1;
L_004f9a74:; BB(0x004f9a74);
    /* 004f9a74: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004f9a76: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004f9a79: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 004f9a7c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004f9a7e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004f9a81: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 004f9a84: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 004f9a87: mov dword ptr [esi + 0xc], ecx */ W32((u32)(r_esi+0xcu), r_ecx);
    /* 004f9a8a: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004f9a8d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004f9a90: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004f9a93: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 004f9a96: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004f9a99: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004f9a9c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004f9a9f: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 004f9aa2: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004f9aa5: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004f9aa8: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004f9aab: mov dword ptr [esi + 0x24], ecx */ W32((u32)(r_esi+0x24u), r_ecx);
    /* 004f9aae: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004f9ab1: mov dword ptr [esi + 0x28], ecx */ W32((u32)(r_esi+0x28u), r_ecx);
    /* 004f9ab4: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004f9ab7: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 004f9aba: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004f9abd: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
    /* 004f9ac0: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004f9ac3: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 004f9ac6: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004f9ac9: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 004f9acc: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004f9acf: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 004f9ad2: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004f9ad5: mov dword ptr [esi + 0x40], ecx */ W32((u32)(r_esi+0x40u), r_ecx);
    /* 004f9ad8: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004f9adb: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 004f9ade: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_004f9ae1:; BB(0x004f9ae1);
    /* 004f9ae1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9ae4: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f9ae7: cmp eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9aec: jl 0x4f9a5e */ if ((fS!=fO)) goto L_004f9a5e;
L_004f9af2:; BB(0x004f9af2);
    /* 004f9af2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9af5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9af8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9afb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9aff: jle 0x4f9b26 */ if ((fZ||fS!=fO)) goto L_004f9b26;
L_004f9b01:; BB(0x004f9b01);
    /* 004f9b01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b06: push dword ptr [ecx + 0x58] */ { u32 v = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b09: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 004f9b0c: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 004f9b0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b11: call 0x4f7fc0 */ r_esp -= 4; W32(r_esp, 0x4f9b16u); f_004f7fc0();
    /* 004f9b16: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b19: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b1c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b1f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004f9b22: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b24: jl 0x4f9b01 */ if ((fS!=fO)) goto L_004f9b01;
L_004f9b26:; BB(0x004f9b26);
    /* 004f9b26: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004f9b2c: ja 0x4f9b98 */ if ((!fC&&!fZ)) goto L_004f9b98;
L_004f9b2e:; BB(0x004f9b2e);
    /* 004f9b2e: mov ecx, dword ptr [eax + 0x10c] */ r_ecx = R32((u32)(r_eax+0x10cu));
    /* 004f9b34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9b36: je 0x4f9b98 */ if (fZ) goto L_004f9b98;
L_004f9b38:; BB(0x004f9b38);
    /* 004f9b38: lea eax, [edx + edx*8] */ r_eax = (u32)(r_edx+r_edx*8);
    /* 004f9b3b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b3e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b40: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b42: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f9b44: mov dword ptr [edx + 0x110], eax */ W32((u32)(r_edx+0x110u), r_eax);
    /* 004f9b4a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 004f9b50: push dword ptr [edx + 0x110] */ { u32 v = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b56: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b5a: push dword ptr [edx + 0x10c] */ { u32 v = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9b60: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x4f9b65u); f_0086b6b8();
    /* 004f9b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9b68: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b6b: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004f9b6e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b70: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9b72: jle 0x4f9ba7 */ if ((fZ||fS!=fO)) goto L_004f9ba7;
L_004f9b74:; BB(0x004f9b74);
    /* 004f9b74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b77: lea ecx, [ebx + ebx*8] */ r_ecx = (u32)(r_ebx+r_ebx*8);
    /* 004f9b7a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b7e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b80: add ecx, dword ptr [eax + 0x10c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x10cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f9b86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9b8bu); f_0061cdb0();
    /* 004f9b8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9b8e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f9b91: cmp ebx, dword ptr [eax + 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x44u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f9b94: jl 0x4f9b74 */ if ((fS!=fO)) goto L_004f9b74;
L_004f9b96:; BB(0x004f9b96);
    /* 004f9b96: jmp 0x4f9ba7 */ goto L_004f9ba7;
L_004f9b98:; BB(0x004f9b98);
    /* 004f9b98: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f9b9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9b9c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4f9ba1u); f_00857e98();
    /* 004f9ba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9ba2: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9ba7:; BB(0x004f9ba7);
    /* 004f9ba7: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9ba9: push dword ptr [ecx + 0x110] */ { u32 v = R32((u32)(r_ecx+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9baf: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9bb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bb9: call 0x4f743c */ r_esp -= 4; W32(r_esp, 0x4f9bbeu); f_004f743c();
    /* 004f9bbe: jmp 0x4f9b98 */ goto L_004f9b98;
L_004f9bc0:; BB(0x004f9bc0);
    /* 004f9bc0: push 0x91ec1c */ { u32 v = 0x91ec1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bc5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f9bcau); f_0061cdb0();
    /* 004f9bca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9bcb: jmp 0x4f90d9 */ goto L_004f90d9;
L_004f9bd0:; BB(0x004f9bd0);
    /* 004f9bd0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 004f9bd7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9bd9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f9bdeu); f_005caba4();
    /* 004f9bde: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9be1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f9be4: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 004f9be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f9be9: je 0x4f9c3b */ if (fZ) goto L_004f9c3b;
L_004f9beb:; BB(0x004f9beb);
    /* 004f9beb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 004f9bf2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f9bf9: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9bff: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f9c05: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c07: call 0x4f8184 */ r_esp -= 4; W32(r_esp, 0x4f9c0cu); f_004f8184();
    /* 004f9c0c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_004f9c13:; BB(0x004f9c13);
    /* 004f9c13: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f9c16: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c19: mov dword ptr [edx + 0x13c], eax */ W32((u32)(r_edx+0x13cu), r_eax);
    /* 004f9c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f9c26: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c28: call 0x4f8378 */ r_esp -= 4; W32(r_esp, 0x4f9c2du); f_004f8378();
    /* 004f9c2d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c30: mov ecx, dword ptr [eax + 0x13c] */ r_ecx = R32((u32)(r_eax+0x13cu));
    /* 004f9c36: jmp 0x4f8eff */ goto L_004f8eff;
L_004f9c3b:; BB(0x004f9c3b);
    /* 004f9c3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f9c3d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004f9c40: jmp 0x4f9c13 */ goto L_004f9c13;
L_004f9c42:; BB(0x004f9c42);
    /* 004f9c42: lea edx, [eax + 0x60] */ r_edx = (u32)(r_eax+0x60u);
    /* 004f9c45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c46: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x4f9c4bu); f_006a6f78();
    /* 004f9c4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f9c4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f9c4e: jne 0x4f9c61 */ if (!fZ) goto L_004f9c61;
L_004f9c50:; BB(0x004f9c50);
    /* 004f9c50: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c53: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c58: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c5c: jmp 0x4f911a */ goto L_004f911a;
L_004f9c61:; BB(0x004f9c61);
    /* 004f9c61: jle 0x4f911a */ if ((fZ||fS!=fO)) goto L_004f911a;
L_004f9c67:; BB(0x004f9c67);
    /* 004f9c67: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c6a: movzx edx, word ptr [eax + 0x5c] */ r_edx = (u32)R16((u32)(r_eax+0x5cu));
    /* 004f9c6e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f9c71: je 0x4f9c8d */ if (fZ) goto L_004f9c8d;
L_004f9c73:; BB(0x004f9c73);
    /* 004f9c73: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c77: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c7cu); f_004f9db8();
    /* 004f9c7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c7f: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c84: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9c88: jmp 0x4f911a */ goto L_004f911a;
L_004f9c8d:; BB(0x004f9c8d);
    /* 004f9c8d: mov ecx, eax */ r_ecx = r_eax;
    /* 004f9c8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f9c91: call 0x4f9db8 */ r_esp -= 4; W32(r_esp, 0x4f9c96u); f_004f9db8();
    /* 004f9c96: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f9c99: mov eax, 1 */ r_eax = 0x1u;
    /* 004f9c9e: mov word ptr [edx + 0x5c], ax */ W16((u32)(r_edx+0x5cu), (u16)r_eax);
    /* 004f9ca2: jmp 0x4f911a */ goto L_004f911a;
L_004f9da1:; BB(0x004f9da1);
    /* 004f9da1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f9da4: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004f9da7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f9daa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f9dad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f9db4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f9db6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f9db7: ret  */ FN_RET(0x004f8e60); r_esp += 4; return;
}

