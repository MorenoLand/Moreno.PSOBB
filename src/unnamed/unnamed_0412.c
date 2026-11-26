#include "protos.h"

void f_00412018(void) /* sub_412018 */
{
    FN_ENTER(0x00412018);
    /* 00412018: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412019: mov ebp, esp */ r_ebp = r_esp;
    /* 0041201b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0041201d: push 0x8ccce0 */ { u32 v = 0x8ccce0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412022: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412029: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00412030: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412033: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00412036: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00412039: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0041203c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041203f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00412042: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412045: mov eax, dword ptr [ecx + 0x1fc] */ r_eax = R32((u32)(r_ecx+0x1fcu));
    /* 0041204b: mov dword ptr [ecx], 0xaf3158 */ W32((u32)(r_ecx), 0xaf3158u);
    /* 00412051: mov dword ptr [eax*4 + 0xa3b08c], 0 */ W32((u32)(r_eax*4+0xa3b08cu), 0x0u);
    /* 0041205c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00412063: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x412068u); f_008171e8();
    /* 00412068: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041206b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00412072: mov esp, ebp */ r_esp = r_ebp;
    /* 00412074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412075: ret  */ FN_RET(0x00412018); r_esp += 4; return;
}

void f_00412078(void) /* sub_412078 */
{
    FN_ENTER(0x00412078);
    /* 00412078: mov ecx, dword ptr [0xa3b09c] */ r_ecx = R32((u32)(0xa3b09cu));
    /* 0041207e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412080: je 0x412091 */ if (fZ) goto L_00412091;
L_00412082:; BB(0x00412082);
    /* 00412082: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x412087u); f_00829de0();
    /* 00412087: mov dword ptr [0xa3b09c], 0 */ W32((u32)(0xa3b09cu), 0x0u);
L_00412091:; BB(0x00412091);
    /* 00412091: ret  */ FN_RET(0x00412078); r_esp += 4; return;
}

void f_00412094(void) /* sub_412094 */
{
    FN_ENTER(0x00412094);
    /* 00412094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412095: mov ebp, dword ptr [ecx + 0x48] */ r_ebp = R32((u32)(r_ecx+0x48u));
    /* 00412098: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041209b: jb 0x4120a1 */ if (fC) goto L_004120a1;
L_0041209d:; BB(0x0041209d);
    /* 0041209d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041209e: ret 4 */ FN_RET(0x00412094); r_esp += 8; return;
L_004120a1:; BB(0x004120a1);
    /* 004120a1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004120a5: fld dword ptr [0x8faaf0] */ FPUSH(R_F32((u32)(0x8faaf0u)));
    /* 004120ab: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004120ad: mov dword ptr [ecx + ebp*8 + 0x1c], edx */ W32((u32)(r_ecx+r_ebp*8+0x1cu), r_edx);
    /* 004120b1: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004120b4: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004120b7: mov dword ptr [ecx + edx*8 + 0x20], ebp */ W32((u32)(r_ecx+r_edx*8+0x20u), r_ebp);
    /* 004120bb: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 004120be: fld dword ptr [ecx + eax*8 + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x1cu)));
    /* 004120c2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004120c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004120c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004120c8: fstp dword ptr [ecx + eax*8 + 0x5c] */ W_F32((u32)(r_ecx+r_eax*8+0x5cu), ST(0)); FPOP();
    /* 004120cc: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 004120cf: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004120d2: mov eax, dword ptr [ecx + eax*8 + 0x20] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x20u));
    /* 004120d6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004120d8: mov dword ptr [ecx + edx*8 + 0x60], eax */ W32((u32)(r_ecx+r_edx*8+0x60u), r_eax);
    /* 004120dc: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 004120df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004120e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004120e3: fld dword ptr [ecx + eax*8 + 0x5c] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x5cu)));
    /* 004120e7: fsub dword ptr [0x8faaf4] */ ST(0) = ST(0) - R_F32((u32)(0x8faaf4u));
    /* 004120ed: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 004120f0: fstp dword ptr [ecx + eax*8 + 0x64] */ W_F32((u32)(r_ecx+r_eax*8+0x64u), ST(0)); FPOP();
    /* 004120f4: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 004120f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004120f9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004120fb: fld dword ptr [ecx + eax*8 + 0x60] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x60u)));
    /* 004120ff: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 00412102: fstp dword ptr [ecx + eax*8 + 0x68] */ W_F32((u32)(r_ecx+r_eax*8+0x68u), ST(0)); FPOP();
    /* 00412106: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00412109: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0041210c: mov eax, dword ptr [ecx + eax*8 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x1cu));
    /* 00412110: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412112: mov dword ptr [ecx + edx*8 + 0xdc], eax */ W32((u32)(r_ecx+r_edx*8+0xdcu), r_eax);
    /* 00412119: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0041211c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0041211f: mov eax, dword ptr [ecx + eax*8 + 0x20] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x20u));
    /* 00412123: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412125: mov dword ptr [ecx + edx*8 + 0xe0], eax */ W32((u32)(r_ecx+r_edx*8+0xe0u), r_eax);
    /* 0041212c: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0041212f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412131: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412133: fld dword ptr [ecx + eax*8 + 0xdc] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0xdcu)));
    /* 0041213a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0041213c: fstp dword ptr [ecx + eax*8 + 0xe4] */ W_F32((u32)(r_ecx+r_eax*8+0xe4u), ST(0)); FPOP();
    /* 00412143: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00412146: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412148: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041214a: fld dword ptr [ecx + eax*8 + 0xe0] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0xe0u)));
    /* 00412151: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 00412154: fstp dword ptr [ecx + eax*8 + 0xe8] */ W_F32((u32)(r_ecx+r_eax*8+0xe8u), ST(0)); FPOP();
    /* 0041215b: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0041215e: fld dword ptr [ecx + eax*8 + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x1cu)));
    /* 00412162: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00412164: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412166: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00412169: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041216b: fstp dword ptr [ecx + eax*8 + 0x15c] */ W_F32((u32)(r_ecx+r_eax*8+0x15cu), ST(0)); FPOP();
    /* 00412172: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00412175: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00412178: mov eax, dword ptr [ecx + eax*8 + 0x20] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x20u));
    /* 0041217c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041217e: mov dword ptr [ecx + edx*8 + 0x160], eax */ W32((u32)(r_ecx+r_edx*8+0x160u), r_eax);
    /* 00412185: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 00412188: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041218a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041218c: fld dword ptr [ecx + eax*8 + 0x15c] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x15cu)));
    /* 00412193: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00412195: fstp dword ptr [ecx + eax*8 + 0x164] */ W_F32((u32)(r_ecx+r_eax*8+0x164u), ST(0)); FPOP();
    /* 0041219c: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0041219f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004121a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004121a3: fld dword ptr [ecx + eax*8 + 0x160] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0x160u)));
    /* 004121aa: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 004121ad: fstp dword ptr [ecx + eax*8 + 0x168] */ W_F32((u32)(r_ecx+r_eax*8+0x168u), ST(0)); FPOP();
    /* 004121b4: add dword ptr [ecx + 0x48], 1 */ { u32 ad = (u32)(r_ecx+0x48u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004121b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004121b9: ret 4 */ FN_RET(0x00412094); r_esp += 8; return;
}

void f_004121bc(void) /* sub_4121BC */
{
    FN_ENTER(0x004121bc);
    /* 004121bc: mov dword ptr [ecx + 0x1ec], 0xffffffff */ W32((u32)(r_ecx+0x1ecu), 0xffffffffu);
    /* 004121c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004121c8: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 004121cb: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 004121ce: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 004121d1: mov dword ptr [ecx + 0x1f0], eax */ W32((u32)(r_ecx+0x1f0u), r_eax);
    /* 004121d7: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 004121dd: mov dword ptr [ecx + 0x1e0], eax */ W32((u32)(r_ecx+0x1e0u), r_eax);
    /* 004121e3: mov dword ptr [ecx + 0x1e4], eax */ W32((u32)(r_ecx+0x1e4u), r_eax);
    /* 004121e9: mov dword ptr [ecx + 0x1e8], eax */ W32((u32)(r_ecx+0x1e8u), r_eax);
    /* 004121ef: ret  */ FN_RET(0x004121bc); r_esp += 4; return;
}

void f_004121f0(void) /* sub_4121F0 */
{
    FN_ENTER(0x004121f0);
    /* 004121f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004121f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004121f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004121f5: push 0x8ccd16 */ { u32 v = 0x8ccd16u; r_esp -= 4; W32(r_esp, v); }
    /* 004121fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412201: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00412208: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041220b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0041220e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00412211: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00412214: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00412217: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0041221a: mov eax, dword ptr [eax*4 + 0xa3b08c] */ r_eax = R32((u32)(r_eax*4+0xa3b08cu));
    /* 00412221: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412223: je 0x412233 */ if (fZ) goto L_00412233;
L_00412225:; BB(0x00412225);
    /* 00412225: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412228: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041222f: mov esp, ebp */ r_esp = r_ebp;
    /* 00412231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412232: ret  */ FN_RET(0x004121f0); r_esp += 4; return;
L_00412233:; BB(0x00412233);
    /* 00412233: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0041223a: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0041223f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412244u); f_005caba4();
    /* 00412244: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412247: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041224a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0041224d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041224f: je 0x41234c */ if (fZ) goto L_0041234c;
L_00412255:; BB(0x00412255);
    /* 00412255: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0041225c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412263: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412266: mov ecx, eax */ r_ecx = r_eax;
    /* 00412268: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0041226b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x412270u); f_008193cc();
    /* 00412270: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00412277: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0041227a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0041227d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00412280: mov dword ptr [eax], 0xaf3158 */ W32((u32)(r_eax), 0xaf3158u);
    /* 00412286: mov edx, dword ptr [0x9a36e8] */ r_edx = R32((u32)(0x9a36e8u));
    /* 0041228c: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0041228f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00412292: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00412294: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00412297: mov dword ptr [eax + 0x1c], ebx */ W32((u32)(r_eax+0x1cu), r_ebx);
    /* 0041229a: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0041229d: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 004122a0: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004122a2: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 004122a5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004122a8: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004122ab: mov dword ptr [eax + 0x1ec], 0xffffffff */ W32((u32)(r_eax+0x1ecu), 0xffffffffu);
    /* 004122b5: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 004122b8: mov dword ptr [eax + 0x200], 4 */ W32((u32)(r_eax+0x200u), 0x4u);
    /* 004122c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004122c4: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 004122c7: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 004122ca: mov dword ptr [eax + 0x1f4], 0x3f0e38e4 */ W32((u32)(r_eax+0x1f4u), 0x3f0e38e4u);
    /* 004122d4: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 004122d7: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 004122da: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 004122dd: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 004122e0: mov dword ptr [eax + 0x1f0], edx */ W32((u32)(r_eax+0x1f0u), r_edx);
    /* 004122e6: mov dword ptr [eax + 0x1f8], edx */ W32((u32)(r_eax+0x1f8u), r_edx);
    /* 004122ec: mov dword ptr [eax + 0x1fc], ecx */ W32((u32)(r_eax+0x1fcu), r_ecx);
    /* 004122f2: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 004122f8: mov dword ptr [eax + 0x1e0], edx */ W32((u32)(r_eax+0x1e0u), r_edx);
    /* 004122fe: mov dword ptr [eax + 0x1e4], edx */ W32((u32)(r_eax+0x1e4u), r_edx);
    /* 00412304: mov dword ptr [eax + 0x1e8], edx */ W32((u32)(r_eax+0x1e8u), r_edx);
    /* 0041230a: mov eax, dword ptr [ecx*4 + 0xa3b050] */ r_eax = R32((u32)(r_ecx*4+0xa3b050u));
    /* 00412311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412313: je 0x412340 */ if (fZ) goto L_00412340;
L_00412315:; BB(0x00412315);
    /* 00412315: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0041231c:; BB(0x0041231c);
    /* 0041231c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0041231f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412322: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412325: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00412328: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041232b: mov dword ptr [edx*4 + 0xa3b08c], eax */ W32((u32)(r_edx*4+0xa3b08cu), r_eax);
    /* 00412332: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412335: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041233c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041233e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041233f: ret  */ FN_RET(0x004121f0); r_esp += 4; return;
L_00412340:; BB(0x00412340);
    /* 00412340: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00412343: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412344: call 0x411630 */ r_esp -= 4; W32(r_esp, 0x412349u); f_00411630();
    /* 00412349: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041234a: jmp 0x412315 */ goto L_00412315;
L_0041234c:; BB(0x0041234c);
    /* 0041234c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041234e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412351: jmp 0x41231c */ goto L_0041231c;
}

void f_00412354(void) /* sub_412354 */
{
    FN_ENTER(0x00412354);
    /* 00412354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412355: mov ebp, esp */ r_ebp = r_esp;
    /* 00412357: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412359: push 0x8ccd30 */ { u32 v = 0x8ccd30u; r_esp -= 4; W32(r_esp, v); }
    /* 0041235e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412365: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041236c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041236f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00412372: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00412375: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00412378: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0041237b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041237e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412381: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00412384: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00412387: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0041238a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0041238d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00412390: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412393: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x412398u); f_008193cc();
    /* 00412398: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0041239f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 004123a2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004123a5: mov dword ptr [eax], 0xaf3158 */ W32((u32)(r_eax), 0xaf3158u);
    /* 004123ab: mov edx, dword ptr [0x9a36e8] */ r_edx = R32((u32)(0x9a36e8u));
    /* 004123b1: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004123b4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004123b7: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004123b9: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004123bc: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 004123bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004123c2: mov dword ptr [eax + 0x20], esi */ W32((u32)(r_eax+0x20u), r_esi);
    /* 004123c5: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004123c7: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 004123ca: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004123cd: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 004123d0: mov dword ptr [eax + 0x1ec], 0xffffffff */ W32((u32)(r_eax+0x1ecu), 0xffffffffu);
    /* 004123da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004123dc: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 004123df: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 004123e2: mov dword ptr [eax + 0x200], 4 */ W32((u32)(r_eax+0x200u), 0x4u);
    /* 004123ec: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 004123ef: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 004123f2: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 004123f5: mov dword ptr [eax + 0x1f4], 0x3f0e38e4 */ W32((u32)(r_eax+0x1f4u), 0x3f0e38e4u);
    /* 004123ff: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 00412402: mov dword ptr [eax + 0x1f0], edx */ W32((u32)(r_eax+0x1f0u), r_edx);
    /* 00412408: mov dword ptr [eax + 0x1f8], edx */ W32((u32)(r_eax+0x1f8u), r_edx);
    /* 0041240e: mov dword ptr [eax + 0x1fc], ecx */ W32((u32)(r_eax+0x1fcu), r_ecx);
    /* 00412414: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 0041241a: mov dword ptr [eax + 0x1e0], edx */ W32((u32)(r_eax+0x1e0u), r_edx);
    /* 00412420: mov dword ptr [eax + 0x1e4], edx */ W32((u32)(r_eax+0x1e4u), r_edx);
    /* 00412426: mov dword ptr [eax + 0x1e8], edx */ W32((u32)(r_eax+0x1e8u), r_edx);
    /* 0041242c: mov edx, dword ptr [ecx*4 + 0xa3b050] */ r_edx = R32((u32)(r_ecx*4+0xa3b050u));
    /* 00412433: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412435: je 0x412450 */ if (fZ) goto L_00412450;
L_00412437:; BB(0x00412437);
    /* 00412437: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0041243a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041243d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412440: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412443: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041244a: mov esp, ebp */ r_esp = r_ebp;
    /* 0041244c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041244d: ret 0x10 */ FN_RET(0x00412354); r_esp += 20; return;
L_00412450:; BB(0x00412450);
    /* 00412450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412451: call 0x411630 */ r_esp -= 4; W32(r_esp, 0x412456u); f_00411630();
    /* 00412456: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412457: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0041245a: jmp 0x412437 */ goto L_00412437;
}

void f_0041245c(void) /* sub_41245C */
{
    FN_ENTER(0x0041245c);
    /* 0041245c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0041245d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041245e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00412460: mov eax, dword ptr [ebx + 0x1f8] */ r_eax = R32((u32)(r_ebx+0x1f8u));
    /* 00412466: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412468: je 0x41246d */ if (fZ) goto L_0041246d;
L_0041246a:; BB(0x0041246a);
    /* 0041246a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041246b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041246c: ret  */ FN_RET(0x0041245c); r_esp += 4; return;
L_0041246d:; BB(0x0041246d);
    /* 0041246d: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00412470: add dword ptr [ebx + 0x1ec], 1 */ { u32 ad = (u32)(r_ebx+0x1ecu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00412477: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00412479: mov edx, ebx */ r_edx = r_ebx;
L_0041247b:; BB(0x0041247b);
    /* 0041247b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041247d: jge 0x4125b5 */ if ((fS==fO)) goto L_004125b5;
L_00412483:; BB(0x00412483);
    /* 00412483: mov esi, dword ptr [ebx + 0x4c] */ r_esi = R32((u32)(r_ebx+0x4cu));
    /* 00412486: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412488: jne 0x41251a */ if (!fZ) goto L_0041251a;
L_0041248e:; BB(0x0041248e);
    /* 0041248e: fld dword ptr [0x8faad8] */ FPUSH(R_F32((u32)(0x8faad8u)));
    /* 00412494: fld dword ptr [0x8faac4] */ FPUSH(R_F32((u32)(0x8faac4u)));
    /* 0041249a: mov dword ptr [edx + 0x6c], 0x3d800000 */ W32((u32)(r_edx+0x6cu), 0x3d800000u);
    /* 004124a1: mov dword ptr [edx + 0x70], 0x3f600000 */ W32((u32)(r_edx+0x70u), 0x3f600000u);
    /* 004124a8: fld dword ptr [0xa3b088] */ FPUSH(R_F32((u32)(0xa3b088u)));
    /* 004124ae: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004124b0: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004124b2: mov dword ptr [edx + 0x78], 0x3f720000 */ W32((u32)(r_edx+0x78u), 0x3f720000u);
    /* 004124b9: fstp dword ptr [edx + 0x74] */ W_F32((u32)(r_edx+0x74u), ST(0)); FPOP();
    /* 004124bc: mov dword ptr [edx + 0xec], 0 */ W32((u32)(r_edx+0xecu), 0x0u);
    /* 004124c6: mov dword ptr [edx + 0xf0], 0x3f600000 */ W32((u32)(r_edx+0xf0u), 0x3f600000u);
    /* 004124d0: mov dword ptr [edx + 0xf4], 0x3d800000 */ W32((u32)(r_edx+0xf4u), 0x3d800000u);
    /* 004124da: mov dword ptr [edx + 0xf8], 0x3f720000 */ W32((u32)(r_edx+0xf8u), 0x3f720000u);
    /* 004124e4: fld dword ptr [0xa3b088] */ FPUSH(R_F32((u32)(0xa3b088u)));
    /* 004124ea: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004124ec: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004124ee: mov dword ptr [edx + 0x170], 0x3f600000 */ W32((u32)(r_edx+0x170u), 0x3f600000u);
    /* 004124f8: fstp dword ptr [edx + 0x16c] */ W_F32((u32)(r_edx+0x16cu), ST(0)); FPOP();
    /* 004124fe: mov dword ptr [edx + 0x174], 0x3e400000 */ W32((u32)(r_edx+0x174u), 0x3e400000u);
    /* 00412508: mov dword ptr [edx + 0x178], 0x3f720000 */ W32((u32)(r_edx+0x178u), 0x3f720000u);
    /* 00412512: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00412515: jmp 0x4125aa */ goto L_004125aa;
L_0041251a:; BB(0x0041251a);
    /* 0041251a: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041251d: jne 0x4125aa */ if (!fZ) goto L_004125aa;
L_00412523:; BB(0x00412523);
    /* 00412523: fld dword ptr [0x8faadc] */ FPUSH(R_F32((u32)(0x8faadcu)));
    /* 00412529: fld dword ptr [0x8faad8] */ FPUSH(R_F32((u32)(0x8faad8u)));
    /* 0041252f: mov dword ptr [edx + 0x6c], 0x3e820000 */ W32((u32)(r_edx+0x6cu), 0x3e820000u);
    /* 00412536: mov dword ptr [edx + 0x70], 0x3f600000 */ W32((u32)(r_edx+0x70u), 0x3f600000u);
    /* 0041253d: fld dword ptr [0xa3b088] */ FPUSH(R_F32((u32)(0xa3b088u)));
    /* 00412543: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00412545: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00412547: mov dword ptr [edx + 0x78], 0x3f720000 */ W32((u32)(r_edx+0x78u), 0x3f720000u);
    /* 0041254e: fstp dword ptr [edx + 0x74] */ W_F32((u32)(r_edx+0x74u), ST(0)); FPOP();
    /* 00412551: mov dword ptr [edx + 0xec], 0x3e440000 */ W32((u32)(r_edx+0xecu), 0x3e440000u);
    /* 0041255b: mov dword ptr [edx + 0xf0], 0x3f600000 */ W32((u32)(r_edx+0xf0u), 0x3f600000u);
    /* 00412565: mov dword ptr [edx + 0xf4], 0x3e820000 */ W32((u32)(r_edx+0xf4u), 0x3e820000u);
    /* 0041256f: mov dword ptr [edx + 0xf8], 0x3f720000 */ W32((u32)(r_edx+0xf8u), 0x3f720000u);
    /* 00412579: fld dword ptr [0xa3b088] */ FPUSH(R_F32((u32)(0xa3b088u)));
    /* 0041257f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00412581: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00412583: mov dword ptr [edx + 0x170], 0x3f600000 */ W32((u32)(r_edx+0x170u), 0x3f600000u);
    /* 0041258d: fstp dword ptr [edx + 0x16c] */ W_F32((u32)(r_edx+0x16cu), ST(0)); FPOP();
    /* 00412593: mov dword ptr [edx + 0x174], 0x3ec20000 */ W32((u32)(r_edx+0x174u), 0x3ec20000u);
    /* 0041259d: mov dword ptr [edx + 0x178], 0x3f720000 */ W32((u32)(r_edx+0x178u), 0x3f720000u);
    /* 004125a7: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
L_004125aa:; BB(0x004125aa);
    /* 004125aa: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004125ad: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004125b0: jmp 0x41247b */ goto L_0041247b;
L_004125b5:; BB(0x004125b5);
    /* 004125b5: mov esi, dword ptr [ebx + 0x1fc] */ r_esi = R32((u32)(r_ebx+0x1fcu));
    /* 004125bb: mov esi, dword ptr [esi*4 + 0xa3b050] */ r_esi = R32((u32)(r_esi*4+0xa3b050u));
    /* 004125c2: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 004125c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125c7: jne 0x412754 */ if (!fZ) goto L_00412754;
L_004125cd:; BB(0x004125cd);
    /* 004125cd: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 004125d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125d2: jne 0x412754 */ if (!fZ) goto L_00412754;
L_004125d8:; BB(0x004125d8);
    /* 004125d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125da: je 0x412754 */ if (fZ) goto L_00412754;
L_004125e0:; BB(0x004125e0);
    /* 004125e0: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 004125e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125e5: jne 0x4125ee */ if (!fZ) goto L_004125ee;
L_004125e7:; BB(0x004125e7);
    /* 004125e7: mov eax, 1 */ r_eax = 0x1u;
    /* 004125ec: jmp 0x412618 */ goto L_00412618;
L_004125ee:; BB(0x004125ee);
    /* 004125ee: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004125f4: call 0x40e248 */ r_esp -= 4; W32(r_esp, 0x4125f9u); f_0040e248();
    /* 004125f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004125fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004125fc: je 0x412602 */ if (fZ) goto L_00412602;
L_004125fe:; BB(0x004125fe);
    /* 004125fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00412600: jmp 0x412618 */ goto L_00412618;
L_00412602:; BB(0x00412602);
    /* 00412602: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412608: call 0x40e248 */ r_esp -= 4; W32(r_esp, 0x41260du); f_0040e248();
    /* 0041260d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0041260e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412610: mov eax, 0 */ r_eax = 0x0u;
    /* 00412615: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_00412618:; BB(0x00412618);
    /* 00412618: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041261a: je 0x4126ac */ if (fZ) goto L_004126ac;
L_00412620:; BB(0x00412620);
    /* 00412620: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00412622: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00412624: mov eax, dword ptr [ebx + 0x200] */ r_eax = R32((u32)(r_ebx+0x200u));
    /* 0041262a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0041262d: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412633: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412635: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412637: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412639: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00412640: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x412645u); f_007c0c6c();
    /* 00412645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412647: je 0x412666 */ if (fZ) goto L_00412666;
L_00412649:; BB(0x00412649);
    /* 00412649: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041264b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041264c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041264d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041264e: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00412653: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x412658u); f_00814298();
    /* 00412658: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041265b: add dword ptr [ebx + 0x44], -1 */ { u32 ad = (u32)(r_ebx+0x44u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041265f: mov ecx, esi */ r_ecx = r_esi;
    /* 00412661: call 0x411a68 */ r_esp -= 4; W32(r_esp, 0x412666u); f_00411a68();
L_00412666:; BB(0x00412666);
    /* 00412666: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00412668: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0041266a: mov eax, dword ptr [ebx + 0x200] */ r_eax = R32((u32)(r_ebx+0x200u));
    /* 00412670: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00412673: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412679: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041267b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041267d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041267f: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00412686: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41268bu); f_007c0c6c();
    /* 0041268b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041268d: je 0x4126ac */ if (fZ) goto L_004126ac;
L_0041268f:; BB(0x0041268f);
    /* 0041268f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00412691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412694: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00412699: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41269eu); f_00814298();
    /* 0041269e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004126a1: add dword ptr [ebx + 0x44], 1 */ { u32 ad = (u32)(r_ebx+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004126a5: mov ecx, esi */ r_ecx = r_esi;
    /* 004126a7: call 0x411a8c */ r_esp -= 4; W32(r_esp, 0x4126acu); f_00411a8c();
L_004126ac:; BB(0x004126ac);
    /* 004126ac: mov eax, dword ptr [ebx + 0x1f8] */ r_eax = R32((u32)(r_ebx+0x1f8u));
    /* 004126b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004126b4: je 0x4126da */ if (fZ) goto L_004126da;
L_004126b6:; BB(0x004126b6);
    /* 004126b6: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 004126b9: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004126bc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004126bf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004126c1: jle 0x4126d0 */ if ((fZ||fS!=fO)) goto L_004126d0;
L_004126c3:; BB(0x004126c3);
    /* 004126c3: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004126c6: mov ecx, esi */ r_ecx = r_esi;
    /* 004126c8: call 0x411ad8 */ r_esp -= 4; W32(r_esp, 0x4126cdu); f_00411ad8();
    /* 004126cd: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
L_004126d0:; BB(0x004126d0);
    /* 004126d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004126d2: jl 0x4127dd */ if ((fS!=fO)) goto L_004127dd;
L_004126d8:; BB(0x004126d8);
    /* 004126d8: jmp 0x4126f7 */ goto L_004126f7;
L_004126da:; BB(0x004126da);
    /* 004126da: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 004126dd: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004126e0: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004126e3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004126e5: jle 0x4126f0 */ if ((fZ||fS!=fO)) goto L_004126f0;
L_004126e7:; BB(0x004126e7);
    /* 004126e7: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 004126ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004126f0:; BB(0x004126f0);
    /* 004126f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004126f2: jge 0x4126f7 */ if ((fS==fO)) goto L_004126f7;
L_004126f4:; BB(0x004126f4);
    /* 004126f4: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
L_004126f7:; BB(0x004126f7);
    /* 004126f7: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 004126fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004126fc: je 0x412703 */ if (fZ) goto L_00412703;
L_004126fe:; BB(0x004126fe);
    /* 004126fe: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00412701: jmp 0x412754 */ goto L_00412754;
L_00412703:; BB(0x00412703);
    /* 00412703: mov esi, dword ptr [0xa0f674] */ r_esi = R32((u32)(0xa0f674u));
    /* 00412709: or esi, dword ptr [0xa0f698] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0041270f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00412711: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00412713: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00412714: mov eax, dword ptr [ebx + 0x200] */ r_eax = R32((u32)(r_ebx+0x200u));
    /* 0041271a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0041271d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041271f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412721: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412723: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0041272a: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x41272fu); f_007c0c6c();
    /* 0041272f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412731: jne 0x412738 */ if (!fZ) goto L_00412738;
L_00412733:; BB(0x00412733);
    /* 00412733: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00412736: jmp 0x412754 */ goto L_00412754;
L_00412738:; BB(0x00412738);
    /* 00412738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041273a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041273b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041273c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041273d: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00412742: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x412747u); f_00814298();
    /* 00412747: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041274a: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 0041274d: mov dword ptr [ebx + 0x4c], 1 */ W32((u32)(r_ebx+0x4cu), 0x1u);
L_00412754:; BB(0x00412754);
    /* 00412754: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00412756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00412758: jbe 0x41277b */ if ((fC||fZ)) goto L_0041277b;
L_0041275a:; BB(0x0041275a);
    /* 0041275a: mov esi, dword ptr [ebx + edx*4 + 0x1dc] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x1dcu));
    /* 00412761: add esi, -0x19 */ {  u32 a = r_esi; u32 b = 0xffffffe7u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00412764: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00412766: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00412768: jg 0x41276c */ if ((!fZ&&fS==fO)) goto L_0041276c;
L_0041276a:; BB(0x0041276a);
    /* 0041276a: mov esi, eax */ r_esi = r_eax;
L_0041276c:; BB(0x0041276c);
    /* 0041276c: mov dword ptr [ebx + edx*4 + 0x1dc], esi */ W32((u32)(r_ebx+r_edx*4+0x1dcu), r_esi);
    /* 00412773: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412776: cmp edx, dword ptr [ebx + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x48u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00412779: jb 0x41275a */ if (fC) goto L_0041275a;
L_0041277b:; BB(0x0041277b);
    /* 0041277b: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 0041277e: mov dword ptr [ebx + eax*4 + 0x1dc], 0xff */ W32((u32)(r_ebx+r_eax*4+0x1dcu), 0xffu);
    /* 00412789: mov eax, dword ptr [ebx + 0x1f0] */ r_eax = R32((u32)(r_ebx+0x1f0u));
    /* 0041278f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412791: je 0x4127da */ if (fZ) goto L_004127da;
L_00412793:; BB(0x00412793);
    /* 00412793: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412796: je 0x4127f0 */ if (fZ) goto L_004127f0;
L_00412798:; BB(0x00412798);
    /* 00412798: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041279b: je 0x4127c9 */ if (fZ) goto L_004127c9;
L_0041279d:; BB(0x0041279d);
    /* 0041279d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004127a0: jne 0x4127b0 */ if (!fZ) goto L_004127b0;
L_004127a2:; BB(0x004127a2);
    /* 004127a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004127a4: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 004127a7: mov dword ptr [ebx + 0x1f0], eax */ W32((u32)(r_ebx+0x1f0u), r_eax);
    /* 004127ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004127ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004127af: ret  */ FN_RET(0x0041245c); r_esp += 4; return;
L_004127b0:; BB(0x004127b0);
    /* 004127b0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004127b3: jne 0x4127da */ if (!fZ) goto L_004127da;
L_004127b5:; BB(0x004127b5);
    /* 004127b5: mov dword ptr [ebx + 0x50], 1 */ W32((u32)(r_ebx+0x50u), 0x1u);
    /* 004127bc: mov dword ptr [ebx + 0x1f0], 0 */ W32((u32)(r_ebx+0x1f0u), 0x0u);
    /* 004127c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004127c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004127c8: ret  */ FN_RET(0x0041245c); r_esp += 4; return;
L_004127c9:; BB(0x004127c9);
    /* 004127c9: mov dword ptr [ebx + 0x4c], 1 */ W32((u32)(r_ebx+0x4cu), 0x1u);
    /* 004127d0: mov dword ptr [ebx + 0x1f0], 0 */ W32((u32)(r_ebx+0x1f0u), 0x0u);
L_004127da:; BB(0x004127da);
    /* 004127da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004127db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004127dc: ret  */ FN_RET(0x0041245c); r_esp += 4; return;
L_004127dd:; BB(0x004127dd);
    /* 004127dd: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 004127e4: mov ecx, esi */ r_ecx = r_esi;
    /* 004127e6: call 0x411ab4 */ r_esp -= 4; W32(r_esp, 0x4127ebu); f_00411ab4();
    /* 004127eb: jmp 0x4126f7 */ goto L_004126f7;
L_004127f0:; BB(0x004127f0);
    /* 004127f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004127f2: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 004127f5: mov dword ptr [ebx + 0x1f0], eax */ W32((u32)(r_ebx+0x1f0u), r_eax);
    /* 004127fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004127fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004127fd: ret  */ FN_RET(0x0041245c); r_esp += 4; return;
}

void f_00412800(void) /* sub_412800 */
{
    FN_ENTER(0x00412800);
    /* 00412800: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00412801: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00412802: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412805: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00412807: mov eax, dword ptr [ebx + 0x1f8] */ r_eax = R32((u32)(r_ebx+0x1f8u));
    /* 0041280d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0041280f: jne 0x41292c */ if (!fZ) goto L_0041292c;
L_00412815:; BB(0x00412815);
    /* 00412815: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00412818: cmp eax, dword ptr [0xaca328] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaca328u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041281e: je 0x412932 */ if (fZ) goto L_00412932;
L_00412824:; BB(0x00412824);
    /* 00412824: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00412829: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041282b: jne 0x412833 */ if (!fZ) goto L_00412833;
L_0041282d:; BB(0x0041282d);
    /* 0041282d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00412830: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412831: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00412832: ret  */ FN_RET(0x00412800); r_esp += 4; return;
L_00412833:; BB(0x00412833);
    /* 00412833: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00412835: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412837: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x41283cu); f_0082acfc();
    /* 0041283c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0041283e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412840: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x412845u); f_0082acfc();
    /* 00412845: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412848: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x41284du); f_0082dbac();
    /* 0041284d: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00412850: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00412852: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00412854: jbe 0x412912 */ if ((fC||fZ)) goto L_00412912;
L_0041285a:; BB(0x0041285a);
    /* 0041285a: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0041285e: mov edi, ebx */ r_edi = r_ebx;
    /* 00412860: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00412863: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00412866: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00412868: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041286a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041286c: lea ecx, [esi + esi + 0x5c] */ r_ecx = (u32)(r_esi+r_esi+0x5cu);
    /* 00412870: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00412872: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00412875: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412877: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412879: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041287b: lea esi, [edx + edx + 0xdc] */ r_esi = (u32)(r_edx+r_edx+0xdcu);
    /* 00412882: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00412884: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00412887: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412889: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041288b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041288d: lea edx, [edx + edx + 0x15c] */ r_edx = (u32)(r_edx+r_edx+0x15cu);
    /* 00412894: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00412896: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0041289a: mov ebp, eax */ r_ebp = r_eax;
    /* 0041289c: mov ebx, ecx */ r_ebx = r_ecx;
L_0041289e:; BB(0x0041289e);
    /* 0041289e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004128a3: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x4128a8u); f_0082bb30();
    /* 004128a8: mov ecx, dword ptr [0xa3b09c] */ r_ecx = R32((u32)(0xa3b09cu));
    /* 004128ae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4128b3u); f_00829cc8();
    /* 004128b3: mov edx, dword ptr [edi + ebp*4 + 0x1dc] */ r_edx = R32((u32)(r_edi+r_ebp*4+0x1dcu));
    /* 004128ba: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004128bd: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004128c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004128c5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4128cau); f_0082bb60();
    /* 004128ca: push dword ptr [edi + 0x1f4] */ { u32 v = R32((u32)(r_edi+0x1f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004128d0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004128d2: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4128d7u); f_0082b440();
    /* 004128d7: push dword ptr [edi + 0x1f4] */ { u32 v = R32((u32)(r_edi+0x1f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004128dd: mov ecx, esi */ r_ecx = r_esi;
    /* 004128df: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4128e4u); f_0082b440();
    /* 004128e4: push dword ptr [edi + 0x1f4] */ { u32 v = R32((u32)(r_edi+0x1f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004128ea: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004128ee: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4128f3u); f_0082b440();
    /* 004128f3: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4128f8u); f_004ac444();
    /* 004128f8: add dword ptr [esp + 8], 0x20 */ { u32 ad = (u32)(r_esp+0x8u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004128fd: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00412900: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00412903: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00412906: cmp ebp, dword ptr [edi + 0x48] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00412909: jb 0x41289e */ if (fC) goto L_0041289e;
L_0041290b:; BB(0x0041290b);
    /* 0041290b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0041290f: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00412912:; BB(0x00412912);
    /* 00412912: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x412917u); f_0082dab0();
    /* 00412917: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00412919: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0041291b: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x412920u); f_0082acfc();
    /* 00412920: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00412922: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412924: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x412929u); f_0082acfc();
    /* 00412929: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0041292c:; BB(0x0041292c);
    /* 0041292c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041292f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412930: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00412931: ret  */ FN_RET(0x00412800); r_esp += 4; return;
L_00412932:; BB(0x00412932);
    /* 00412932: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 00412937: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041293a: jne 0x412833 */ if (!fZ) goto L_00412833;
L_00412940:; BB(0x00412940);
    /* 00412940: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00412943: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412944: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00412945: ret  */ FN_RET(0x00412800); r_esp += 4; return;
}

void f_00412948(void) /* sub_412948 */
{
    FN_ENTER(0x00412948);
    /* 00412948: mov dword ptr [0xa3b088], 0x41800000 */ W32((u32)(0xa3b088u), 0x41800000u);
    /* 00412952: ret  */ FN_RET(0x00412948); r_esp += 4; return;
}

void f_00412954(void) /* sub_412954 */
{
    FN_ENTER(0x00412954);
    /* 00412954: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412957: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x41295cu); f_007932e8();
    /* 0041295c: mov dword ptr [esp], 0x8fab04 */ W32((u32)(r_esp), 0x8fab04u);
    /* 00412963: mov eax, 0x8faaf8 */ r_eax = 0x8faaf8u;
    /* 00412968: mov edx, 0x9a36cc */ r_edx = 0x9a36ccu;
    /* 0041296d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00412971: mov dword ptr [esp + 0x20], 0x9a36e0 */ W32((u32)(r_esp+0x20u), 0x9a36e0u);
    /* 00412979: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0041297d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00412981: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00412985: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00412989: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0041298d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00412991: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 00412996: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0041299a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0041299e: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 004129a2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004129a6: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004129aa: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004129ae: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004129b2: mov ecx, dword ptr [esp + eax*4 + 0x20] */ r_ecx = R32((u32)(r_esp+r_eax*4+0x20u));
    /* 004129b6: mov dword ptr [0xa3b09c], ecx */ W32((u32)(0xa3b09cu), r_ecx);
    /* 004129bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004129bd: push dword ptr [esp + eax*4 + 4] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004129c1: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x4129c6u); f_0081a934();
    /* 004129c6: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004129c9: ret  */ FN_RET(0x00412954); r_esp += 4; return;
}

void f_004129cc(void) /* sub_4129CC */
{
    FN_ENTER(0x004129cc);
    /* 004129cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004129cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004129cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004129d1: call 0x4129f0 */ r_esp -= 4; W32(r_esp, 0x4129d6u); f_004129f0();
    /* 004129d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004129da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004129dc: jne 0x4129e2 */ if (!fZ) goto L_004129e2;
L_004129de:; BB(0x004129de);
    /* 004129de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004129df: ret 4 */ FN_RET(0x004129cc); r_esp += 8; return;
L_004129e2:; BB(0x004129e2);
    /* 004129e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004129e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4129e8u); f_005c2f74();
    /* 004129e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004129e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004129ea: ret 4 */ FN_RET(0x004129cc); r_esp += 8; return;
}

void f_004129f0(void) /* sub_4129F0 */
{
    FN_ENTER(0x004129f0);
    /* 004129f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004129f1: mov ebp, esp */ r_ebp = r_esp;
    /* 004129f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004129f5: push 0x8ccd4c */ { u32 v = 0x8ccd4cu; r_esp -= 4; W32(r_esp, v); }
    /* 004129fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412a01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00412a08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412a0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00412a0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00412a11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00412a14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00412a17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00412a1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412a1d: mov dword ptr [ecx], 0xaf3220 */ W32((u32)(r_ecx), 0xaf3220u);
    /* 00412a23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00412a2a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x412a2fu); f_008171e8();
    /* 00412a2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412a32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00412a39: mov esp, ebp */ r_esp = r_ebp;
    /* 00412a3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412a3c: ret  */ FN_RET(0x004129f0); r_esp += 4; return;
}

void f_00412a40(void) /* sub_412A40 */
{
    FN_ENTER(0x00412a40);
    /* 00412a40: call 0x7bc020 */ r_esp -= 4; W32(r_esp, 0x412a45u); f_007bc020();
    /* 00412a45: ret  */ FN_RET(0x00412a40); r_esp += 4; return;
}

void f_00412a48(void) /* sub_412A48 */
{
    FN_ENTER(0x00412a48);
    /* 00412a48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412a49: mov ebp, esp */ r_ebp = r_esp;
    /* 00412a4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412a4d: push 0x8cce6a */ { u32 v = 0x8cce6au; r_esp -= 4; W32(r_esp, v); }
    /* 00412a52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412a59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00412a60: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412a66: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00412a69: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00412a6c: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00412a6f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00412a72: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412a75: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00412a78: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x412a7du); f_008193cc();
    /* 00412a7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412a84: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412a87: mov dword ptr [edx], 0xaf3220 */ W32((u32)(r_edx), 0xaf3220u);
    /* 00412a8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00412a8f: mov eax, dword ptr [0x9a36ec] */ r_eax = R32((u32)(0x9a36ecu));
    /* 00412a94: mov dword ptr [0xa3b0a4], ecx */ W32((u32)(0xa3b0a4u), r_ecx);
    /* 00412a9a: mov dword ptr [ebp - 0x94], ecx */ W32((u32)(r_ebp+0xffffff6cu), r_ecx);
    /* 00412aa0: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00412aa3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00412aa5: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00412aa8: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00412aab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412ab0u); f_005caba4();
    /* 00412ab0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412ab1: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00412ab7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412ab9: je 0x412ae4 */ if (fZ) goto L_00412ae4;
L_00412abb:; BB(0x00412abb);
    /* 00412abb: mov dword ptr [ebp - 0x94], 1 */ W32((u32)(r_ebp+0xffffff6cu), 0x1u);
    /* 00412ac5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00412acc: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412acf: mov ecx, dword ptr [ebp - 0x90] */ r_ecx = R32((u32)(r_ebp+0xffffff70u));
    /* 00412ad5: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x412adau); f_004010b0();
    /* 00412ada: mov dword ptr [ebp - 0x94], 0 */ W32((u32)(r_ebp+0xffffff6cu), 0x0u);
L_00412ae4:; BB(0x00412ae4);
    /* 00412ae4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412aeb: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 00412af5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00412af7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412afcu); f_005caba4();
    /* 00412afc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412afd: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00412b03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b05: je 0x412b30 */ if (fZ) goto L_00412b30;
L_00412b07:; BB(0x00412b07);
    /* 00412b07: mov dword ptr [ebp - 0x8c], 1 */ W32((u32)(r_ebp+0xffffff74u), 0x1u);
    /* 00412b11: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00412b18: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412b1b: mov ecx, dword ptr [ebp - 0x88] */ r_ecx = R32((u32)(r_ebp+0xffffff78u));
    /* 00412b21: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x412b26u); f_004012cc();
    /* 00412b26: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
L_00412b30:; BB(0x00412b30);
    /* 00412b30: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412b37: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00412b41: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b43: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412b48u); f_005caba4();
    /* 00412b48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412b49: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00412b4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b4e: je 0x412b76 */ if (fZ) goto L_00412b76;
L_00412b50:; BB(0x00412b50);
    /* 00412b50: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 00412b5a: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00412b61: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412b64: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 00412b67: call 0x410934 */ r_esp -= 4; W32(r_esp, 0x412b6cu); f_00410934();
    /* 00412b6c: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_00412b76:; BB(0x00412b76);
    /* 00412b76: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412b7d: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 00412b84: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 00412b89: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412b8eu); f_005caba4();
    /* 00412b8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412b8f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00412b92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412b94: je 0x412bb8 */ if (fZ) goto L_00412bb8;
L_00412b96:; BB(0x00412b96);
    /* 00412b96: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00412b9d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00412ba4: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 00412ba7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00412ba9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412bac: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x412bb1u); f_00415154();
    /* 00412bb1: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_00412bb8:; BB(0x00412bb8);
    /* 00412bb8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412bbf: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00412bc6: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00412bcb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412bd0u); f_005caba4();
    /* 00412bd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412bd1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00412bd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412bd6: je 0x412bf8 */ if (fZ) goto L_00412bf8;
L_00412bd8:; BB(0x00412bd8);
    /* 00412bd8: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 00412bdf: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00412be6: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412be9: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
    /* 00412bec: call 0x41571c */ r_esp -= 4; W32(r_esp, 0x412bf1u); f_0041571c();
    /* 00412bf1: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_00412bf8:; BB(0x00412bf8);
    /* 00412bf8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412bff: mov dword ptr [ebp - 0x68], 0x43500000 */ W32((u32)(r_ebp+0xffffff98u), 0x43500000u);
    /* 00412c06: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c0b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00412c10: mov dword ptr [ebp - 0x64], 0x43450000 */ W32((u32)(r_ebp+0xffffff9cu), 0x43450000u);
    /* 00412c17: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00412c1a: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00412c1d: mov dword ptr [ebp - 0x5c], 0x43320000 */ W32((u32)(r_ebp+0xffffffa4u), 0x43320000u);
    /* 00412c24: mov dword ptr [ebp - 0x58], 0x43790000 */ W32((u32)(r_ebp+0xffffffa8u), 0x43790000u);
    /* 00412c2b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00412c32: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412c37u); f_005caba4();
    /* 00412c37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412c38: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00412c3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412c3d: je 0x412c65 */ if (fZ) goto L_00412c65;
L_00412c3f:; BB(0x00412c3f);
    /* 00412c3f: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00412c46: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00412c4d: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00412c50: lea eax, [ebp - 0x6c] */ r_eax = (u32)(r_ebp+0xffffff94u);
    /* 00412c53: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412c56: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412c59: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x412c5eu); f_00412f2c();
    /* 00412c5e: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00412c65:; BB(0x00412c65);
    /* 00412c65: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412c6c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00412c73: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412c7du); f_005caba4();
    /* 00412c7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412c7e: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00412c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412c83: je 0x412cab */ if (fZ) goto L_00412cab;
L_00412c85:; BB(0x00412c85);
    /* 00412c85: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00412c8c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00412c93: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00412c96: lea eax, [ebp - 0x60] */ r_eax = (u32)(r_ebp+0xffffffa0u);
    /* 00412c99: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00412c9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412c9c: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412c9f: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x412ca4u); f_00412f2c();
    /* 00412ca4: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_00412cab:; BB(0x00412cab);
    /* 00412cab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412cb2: mov dword ptr [ebp - 0x48], 0x43970000 */ W32((u32)(r_ebp+0xffffffb8u), 0x43970000u);
    /* 00412cb9: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 00412cbe: mov dword ptr [ebp - 0x44], 0x41e00000 */ W32((u32)(r_ebp+0xffffffbcu), 0x41e00000u);
    /* 00412cc5: mov dword ptr [ebp - 0x40], 0x43390000 */ W32((u32)(r_ebp+0xffffffc0u), 0x43390000u);
    /* 00412ccc: mov dword ptr [ebp - 0x3c], 0x43460000 */ W32((u32)(r_ebp+0xffffffc4u), 0x43460000u);
    /* 00412cd3: mov dword ptr [ebp - 0x38], 0x431b0000 */ W32((u32)(r_ebp+0xffffffc8u), 0x431b0000u);
    /* 00412cda: mov dword ptr [ebp - 0x34], 0x437a0000 */ W32((u32)(r_ebp+0xffffffccu), 0x437a0000u);
    /* 00412ce1: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00412ce8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412cedu); f_005caba4();
    /* 00412ced: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412cee: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00412cf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412cf3: je 0x412def */ if (fZ) goto L_00412def;
L_00412cf9:; BB(0x00412cf9);
    /* 00412cf9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00412d00: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00412d07: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00412d0a: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00412d0d: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00412d10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412d13: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00412d14: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412d17: call 0x412354 */ r_esp -= 4; W32(r_esp, 0x412d1cu); f_00412354();
    /* 00412d1c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00412d1f: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00412d26:; BB(0x00412d26);
    /* 00412d26: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412d29: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00412d2c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412d33: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00412d36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412d37: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x412d3cu); f_00412094();
    /* 00412d3c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412d3f: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00412d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412d43: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 00412d46: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x412d4bu); f_00412094();
    /* 00412d4b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00412d52: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d54: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412d59u); f_005caba4();
    /* 00412d59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412d5a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00412d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412d5f: je 0x412deb */ if (fZ) goto L_00412deb;
L_00412d65:; BB(0x00412d65);
    /* 00412d65: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00412d6c: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00412d73: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412d76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412d79: call 0x40b72c */ r_esp -= 4; W32(r_esp, 0x412d7eu); f_0040b72c();
    /* 00412d7e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00412d81: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00412d88:; BB(0x00412d88);
    /* 00412d88: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412d8b: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00412d8e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412d95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d97: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00412d99: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x412d9eu); f_00792fe8();
    /* 00412d9e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412da1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412da4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412da5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412da7: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00412daa: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x412dafu); f_0040b7b4();
    /* 00412daf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412db1: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00412db3: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x412db8u); f_00792fe8();
    /* 00412db8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412dbb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412dbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412dbf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412dc1: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 00412dc4: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x412dc9u); f_0040b7b4();
    /* 00412dc9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00412dcb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00412dcd: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412dd0: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x412dd5u); f_004088b8();
    /* 00412dd5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00412dd8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412ddb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412dde: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00412de5: mov esp, ebp */ r_esp = r_ebp;
    /* 00412de7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412de8: ret 4 */ FN_RET(0x00412a48); r_esp += 8; return;
L_00412deb:; BB(0x00412deb);
    /* 00412deb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00412ded: jmp 0x412d88 */ goto L_00412d88;
L_00412def:; BB(0x00412def);
    /* 00412def: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00412df1: jmp 0x412d26 */ goto L_00412d26;
}

void f_00412df8(void) /* sub_412DF8 */
{
    FN_ENTER(0x00412df8);
    /* 00412df8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00412df9: mov edi, ecx */ r_edi = r_ecx;
    /* 00412dfb: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x412e00u); f_0081e1f4();
    /* 00412e00: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00412e03: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
    /* 00412e06: cmp eax, dword ptr [0xa3b0a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa3b0a4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e0c: je 0x412e2d */ if (fZ) goto L_00412e2d;
L_00412e0e:; BB(0x00412e0e);
    /* 00412e0e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412e11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e12: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00412e14: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x412e19u); f_00792fe8();
    /* 00412e19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412e1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00412e1f: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00412e22: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x412e27u); f_0040b7b4();
    /* 00412e27: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00412e2a: mov eax, dword ptr [eax + 0x44] */ r_eax = R32((u32)(r_eax+0x44u));
L_00412e2d:; BB(0x00412e2d);
    /* 00412e2d: mov dword ptr [0xa3b0a4], eax */ W32((u32)(0xa3b0a4u), r_eax);
    /* 00412e32: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00412e37: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00412e39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e3a: call 0x40e234 */ r_esp -= 4; W32(r_esp, 0x412e3fu); f_0040e234();
    /* 00412e3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412e40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e42: je 0x412e5d */ if (fZ) goto L_00412e5d;
L_00412e44:; BB(0x00412e44);
    /* 00412e44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00412e46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412e49: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 00412e4e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x412e53u); f_00814298();
    /* 00412e53: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00412e56: call 0x824840 */ r_esp -= 4; W32(r_esp, 0x412e5bu); f_00824840();
    /* 00412e5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00412e5c: ret  */ FN_RET(0x00412df8); r_esp += 4; return;
L_00412e5d:; BB(0x00412e5d);
    /* 00412e5d: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00412e60: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00412e63: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00412e66: je 0x412e6a */ if (fZ) goto L_00412e6a;
L_00412e68:; BB(0x00412e68);
    /* 00412e68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00412e69: ret  */ FN_RET(0x00412df8); r_esp += 4; return;
L_00412e6a:; BB(0x00412e6a);
    /* 00412e6a: mov eax, dword ptr [0xa3b0a4] */ r_eax = R32((u32)(0xa3b0a4u));
    /* 00412e6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412e71: jne 0x412e68 */ if (!fZ) goto L_00412e68;
L_00412e73:; BB(0x00412e73);
    /* 00412e73: call 0x8215a0 */ r_esp -= 4; W32(r_esp, 0x412e78u); f_008215a0();
    /* 00412e78: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00412e79: ret  */ FN_RET(0x00412df8); r_esp += 4; return;
}

void f_00412e7c(void) /* sub_412E7C */
{
    FN_ENTER(0x00412e7c);
    /* 00412e7c: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x412e81u); f_007a61a4();
    /* 00412e81: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412e84: je 0x412e8c */ if (fZ) goto L_00412e8c;
L_00412e86:; BB(0x00412e86);
    /* 00412e86: call 0x7bc020 */ r_esp -= 4; W32(r_esp, 0x412e8bu); f_007bc020();
L_00412e8b:; BB(0x00412e8b);
    /* 00412e8b: ret  */ FN_RET(0x00412e7c); r_esp += 4; return;
L_00412e8c:; BB(0x00412e8c);
    /* 00412e8c: mov eax, dword ptr [0xa3b0a4] */ r_eax = R32((u32)(0xa3b0a4u));
    /* 00412e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412e93: jne 0x412e8b */ if (!fZ) goto L_00412e8b;
L_00412e95:; BB(0x00412e95);
    /* 00412e95: call 0x7bc020 */ r_esp -= 4; W32(r_esp, 0x412e9au); f_007bc020();
    /* 00412e9a: ret  */ FN_RET(0x00412e7c); r_esp += 4; return;
}

void f_00412e9c(void) /* sub_412E9C */
{
    FN_ENTER(0x00412e9c);
    /* 00412e9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00412e9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00412e9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00412ea1: call 0x412ec0 */ r_esp -= 4; W32(r_esp, 0x412ea6u); f_00412ec0();
    /* 00412ea6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00412eaa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412eac: jne 0x412eb2 */ if (!fZ) goto L_00412eb2;
L_00412eae:; BB(0x00412eae);
    /* 00412eae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412eaf: ret 4 */ FN_RET(0x00412e9c); r_esp += 8; return;
L_00412eb2:; BB(0x00412eb2);
    /* 00412eb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00412eb3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x412eb8u); f_005c2f74();
    /* 00412eb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412eb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00412eba: ret 4 */ FN_RET(0x00412e9c); r_esp += 8; return;
}

void f_00412ec0(void) /* sub_412EC0 */
{
    FN_ENTER(0x00412ec0);
    /* 00412ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00412ec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412ec5: push 0x8cce84 */ { u32 v = 0x8cce84u; r_esp -= 4; W32(r_esp, v); }
    /* 00412eca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412ed1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00412ed8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412edb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00412ede: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00412ee1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00412ee4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00412ee7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00412eea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00412eed: mov dword ptr [ecx], 0xaf3280 */ W32((u32)(r_ecx), 0xaf3280u);
    /* 00412ef3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00412efa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x412effu); f_008171e8();
    /* 00412eff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00412f02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00412f09: mov esp, ebp */ r_esp = r_ebp;
    /* 00412f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00412f0c: ret  */ FN_RET(0x00412ec0); r_esp += 4; return;
}

void f_00412f10(void) /* sub_412F10 */
{
    FN_ENTER(0x00412f10);
    /* 00412f10: mov ecx, dword ptr [0xa3b0ac] */ r_ecx = R32((u32)(0xa3b0acu));
    /* 00412f16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412f18: je 0x412f29 */ if (fZ) goto L_00412f29;
L_00412f1a:; BB(0x00412f1a);
    /* 00412f1a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x412f1fu); f_00829de0();
    /* 00412f1f: mov dword ptr [0xa3b0ac], 0 */ W32((u32)(0xa3b0acu), 0x0u);
L_00412f29:; BB(0x00412f29);
    /* 00412f29: ret  */ FN_RET(0x00412f10); r_esp += 4; return;
}

void f_00412f2c(void) /* sub_412F2C */
{
    FN_ENTER(0x00412f2c);
    /* 00412f2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00412f2d: mov edi, ecx */ r_edi = r_ecx;
    /* 00412f2f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412f33: mov ecx, edi */ r_ecx = r_edi;
    /* 00412f35: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x412f3au); f_008193cc();
    /* 00412f3a: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412f3e: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00412f42: mov dword ptr [edi], 0xaf3280 */ W32((u32)(r_edi), 0xaf3280u);
    /* 00412f48: mov ecx, edi */ r_ecx = r_edi;
    /* 00412f4a: mov eax, dword ptr [0x9a3730] */ r_eax = R32((u32)(0x9a3730u));
    /* 00412f4f: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 00412f52: call 0x4130d8 */ r_esp -= 4; W32(r_esp, 0x412f57u); f_004130d8();
    /* 00412f57: mov eax, edi */ r_eax = r_edi;
    /* 00412f59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00412f5a: ret 0xc */ FN_RET(0x00412f2c); r_esp += 16; return;
}

void f_00412f60(void) /* sub_412F60 */
{
    FN_ENTER(0x00412f60);
    /* 00412f60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00412f61: mov ebp, esp */ r_ebp = r_esp;
    /* 00412f63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00412f65: push 0x8cceac */ { u32 v = 0x8cceacu; r_esp -= 4; W32(r_esp, v); }
    /* 00412f6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00412f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00412f71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00412f78: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00412f7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00412f7e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00412f81: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00412f84: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00412f87: mov eax, ecx */ r_eax = r_ecx;
    /* 00412f89: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 00412f8f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00412f92: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00412f95: mov dword ptr [eax + 0xbc], ecx */ W32((u32)(r_eax+0xbcu), r_ecx);
    /* 00412f9b: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00412fa0: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00412fa2: mov eax, ecx */ r_eax = r_ecx;
    /* 00412fa4: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00412fa7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00412fa9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00412fac: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412fae: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00412fb0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00412fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00412fb4: jne 0x413042 */ if (!fZ) goto L_00413042;
L_00412fba:; BB(0x00412fba);
    /* 00412fba: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00412fbf: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00412fc1: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00412fc4: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00412fc6: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00412fc9: jge 0x413042 */ if ((fS==fO)) goto L_00413042;
L_00412fcb:; BB(0x00412fcb);
    /* 00412fcb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00412fd2: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00412fd7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x412fdcu); f_005caba4();
    /* 00412fdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00412fdd: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00412fe0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00412fe2: je 0x413059 */ if (fZ) goto L_00413059;
L_00412fe4:; BB(0x00412fe4);
    /* 00412fe4: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00412feb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00412ff2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00412ff5: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00412ffa: mov esi, dword ptr [ebx + 0xbc] */ r_esi = R32((u32)(r_ebx+0xbcu));
    /* 00413000: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00413002: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00413005: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00413007: lea edi, [edx + edx*4] */ r_edi = (u32)(r_edx+r_edx*4);
    /* 0041300a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041300c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041300e: lea ecx, [ebx + edi + 0x1c] */ r_ecx = (u32)(r_ebx+r_edi+0x1cu);
    /* 00413012: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00413013: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00413016: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00413017: call 0x41329c */ r_esp -= 4; W32(r_esp, 0x41301cu); f_0041329c();
    /* 0041301c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0041301f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00413026:; BB(0x00413026);
    /* 00413026: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00413029: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0041302e: mov ecx, dword ptr [ebx + 0xbc] */ r_ecx = R32((u32)(r_ebx+0xbcu));
    /* 00413034: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00413036: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00413039: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0041303b: mov dword ptr [ebx + edx*4 + 0xc0], esi */ W32((u32)(r_ebx+r_edx*4+0xc0u), r_esi);
L_00413042:; BB(0x00413042);
    /* 00413042: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00413045: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00413048: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0041304b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041304e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00413055: mov esp, ebp */ r_esp = r_ebp;
    /* 00413057: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00413058: ret  */ FN_RET(0x00412f60); r_esp += 4; return;
L_00413059:; BB(0x00413059);
    /* 00413059: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0041305b: jmp 0x413026 */ goto L_00413026;
}

