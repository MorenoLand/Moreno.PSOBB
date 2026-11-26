#include "protos.h"

void f_00602080(void) /* sub_602080 */
{
    FN_ENTER(0x00602080);
    /* 00602080: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00602081: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00602083: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00602087: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060208b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060208d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x602092u); f_005e959c();
    /* 00602092: mov dword ptr [ebx], 0xb1d2a0 */ W32((u32)(r_ebx), 0xb1d2a0u);
    /* 00602098: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060209a: mov dword ptr [ebx + 0x238], edx */ W32((u32)(r_ebx+0x238u), r_edx);
    /* 006020a0: mov dword ptr [ebx + 0x240], edx */ W32((u32)(r_ebx+0x240u), r_edx);
    /* 006020a6: mov dword ptr [ebx + 0x234], 0x5cf288 */ W32((u32)(r_ebx+0x234u), 0x5cf288u);
    /* 006020b0: mov dword ptr [ebx + 0x250], edx */ W32((u32)(r_ebx+0x250u), r_edx);
    /* 006020b6: mov eax, ebx */ r_eax = r_ebx;
    /* 006020b8: mov dword ptr [ebx + 0x208], 0x41a00000 */ W32((u32)(r_ebx+0x208u), 0x41a00000u);
    /* 006020c2: mov dword ptr [ebx + 0x24c], 0x3727c5ac */ W32((u32)(r_ebx+0x24cu), 0x3727c5acu);
    /* 006020cc: mov dword ptr [ebx + 0x248], 0x3727c5ac */ W32((u32)(r_ebx+0x248u), 0x3727c5acu);
    /* 006020d6: mov dword ptr [ebx + 0x244], 0x3727c5ac */ W32((u32)(r_ebx+0x244u), 0x3727c5acu);
    /* 006020e0: mov dword ptr [ebx + 0x25c], 0 */ W32((u32)(r_ebx+0x25cu), 0x0u);
    /* 006020ea: mov dword ptr [ebx + 0x258], 0 */ W32((u32)(r_ebx+0x258u), 0x0u);
    /* 006020f4: mov dword ptr [ebx + 0x254], 0 */ W32((u32)(r_ebx+0x254u), 0x0u);
    /* 006020fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006020ff: ret 8 */ FN_RET(0x00602080); r_esp += 12; return;
}

void f_00602104(void) /* sub_602104 */
{
    FN_ENTER(0x00602104);
    /* 00602104: mov dword ptr [0xa8e314], 0x3f800000 */ W32((u32)(0xa8e314u), 0x3f800000u);
    /* 0060210e: mov dword ptr [0xa8e318], 0x41000000 */ W32((u32)(0xa8e318u), 0x41000000u);
    /* 00602118: mov dword ptr [0xa8e31c], 0x3fc00000 */ W32((u32)(0xa8e31cu), 0x3fc00000u);
    /* 00602122: ret  */ FN_RET(0x00602104); r_esp += 4; return;
}

void f_00602124(void) /* sub_602124 */
{
    FN_ENTER(0x00602124);
    /* 00602124: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00602125: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00602127: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00602129: call 0x602148 */ r_esp -= 4; W32(r_esp, 0x60212eu); f_00602148();
    /* 0060212e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00602132: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602134: jne 0x60213a */ if (!fZ) goto L_0060213a;
L_00602136:; BB(0x00602136);
    /* 00602136: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00602137: ret 4 */ FN_RET(0x00602124); r_esp += 8; return;
L_0060213a:; BB(0x0060213a);
    /* 0060213a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060213b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x602140u); f_005c2f74();
    /* 00602140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602141: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00602142: ret 4 */ FN_RET(0x00602124); r_esp += 8; return;
}

void f_00602148(void) /* sub_602148 */
{
    FN_ENTER(0x00602148);
    /* 00602148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602149: mov ebp, esp */ r_ebp = r_esp;
    /* 0060214b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060214d: push 0x8dec64 */ { u32 v = 0x8dec64u; r_esp -= 4; W32(r_esp, v); }
    /* 00602152: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602158: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602159: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602160: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602163: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00602166: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00602169: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060216c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060216f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00602172: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602175: mov dword ptr [ecx], 0xb1d400 */ W32((u32)(r_ecx), 0xb1d400u);
    /* 0060217b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00602182: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x602187u); f_005e61c8();
    /* 00602187: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060218a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602191: mov esp, ebp */ r_esp = r_ebp;
    /* 00602193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602194: ret  */ FN_RET(0x00602148); r_esp += 4; return;
}

void f_00602198(void) /* sub_602198 */
{
    FN_ENTER(0x00602198);
    /* 00602198: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602199: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060219a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060219d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060219f: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 006021a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021a8: je 0x60226f */ if (fZ) goto L_0060226f;
L_006021ae:; BB(0x006021ae);
    /* 006021ae: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021b1: jne 0x6021f3 */ if (!fZ) goto L_006021f3;
L_006021b3:; BB(0x006021b3);
    /* 006021b3: fld dword ptr [0x92e244] */ FPUSH(R_F32((u32)(0x92e244u)));
    /* 006021b9: fadd dword ptr [ebx + 0x248] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x248u));
    /* 006021bf: fcom dword ptr [0x92e240] */ fx_compare(ST(0), R_F32((u32)(0x92e240u))); 
    /* 006021c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006021c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006021c8: jb 0x6021e7 */ if (fC) goto L_006021e7;
L_006021ca:; BB(0x006021ca);
    /* 006021ca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006021cc: mov dword ptr [ebx + 0x240], 3 */ W32((u32)(r_ebx+0x240u), 0x3u);
    /* 006021d6: mov eax, 0x402ccccd */ r_eax = 0x402ccccdu;
    /* 006021db: mov dword ptr [ebx + 0x248], eax */ W32((u32)(r_ebx+0x248u), r_eax);
    /* 006021e1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006021e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006021e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006021e6: ret  */ FN_RET(0x00602198); r_esp += 4; return;
L_006021e7:; BB(0x006021e7);
    /* 006021e7: fstp dword ptr [ebx + 0x248] */ W_F32((u32)(r_ebx+0x248u), ST(0)); FPOP();
    /* 006021ed: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006021f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006021f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006021f2: ret  */ FN_RET(0x00602198); r_esp += 4; return;
L_006021f3:; BB(0x006021f3);
    /* 006021f3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006021f6: jne 0x6022a6 */ if (!fZ) goto L_006022a6;
L_006021fc:; BB(0x006021fc);
    /* 006021fc: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00602202: mov dword ptr [ebx + 0x240], 1 */ W32((u32)(r_ebx+0x240u), 0x1u);
    /* 0060220c: mov ebp, dword ptr [eax + 0x60] */ r_ebp = R32((u32)(r_eax+0x60u));
    /* 0060220f: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00602215: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00602217: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x60221cu); f_0082dcbc();
    /* 0060221c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0060221f: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00602227: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00602229: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x60222eu); f_0082ddd8();
    /* 0060222e: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 00602234: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00602237: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0060223b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0060223f: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 00602247: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0060224f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00602252: lea ebp, [esp + 0xc] */ r_ebp = (u32)(r_esp+0xcu);
    /* 00602256: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602257: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602258: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0060225a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060225b: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00602261: call 0x5fec70 */ r_esp -= 4; W32(r_esp, 0x602266u); f_005fec70();
    /* 00602266: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602269: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060226c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060226d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060226e: ret  */ FN_RET(0x00602198); r_esp += 4; return;
L_0060226f:; BB(0x0060226f);
    /* 0060226f: fld dword ptr [ebx + 0x248] */ FPUSH(R_F32((u32)(r_ebx+0x248u)));
    /* 00602275: fsub dword ptr [0x92e244] */ ST(0) = ST(0) - R_F32((u32)(0x92e244u));
    /* 0060227b: fcom dword ptr [0x92e23c] */ fx_compare(ST(0), R_F32((u32)(0x92e23cu))); 
    /* 00602281: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00602283: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00602284: ja 0x6022a0 */ if ((!fC&&!fZ)) goto L_006022a0;
L_00602286:; BB(0x00602286);
    /* 00602286: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00602288: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 00602292: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00602294: mov dword ptr [ebx + 0x248], eax */ W32((u32)(r_ebx+0x248u), r_eax);
    /* 0060229a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060229d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060229e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060229f: ret  */ FN_RET(0x00602198); r_esp += 4; return;
L_006022a0:; BB(0x006022a0);
    /* 006022a0: fstp dword ptr [ebx + 0x248] */ W_F32((u32)(r_ebx+0x248u), ST(0)); FPOP();
L_006022a6:; BB(0x006022a6);
    /* 006022a6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006022a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006022aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006022ab: ret  */ FN_RET(0x00602198); r_esp += 4; return;
}

void f_006022ac(void) /* sub_6022AC */
{
    FN_ENTER(0x006022ac);
    /* 006022ac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006022af: mov dword ptr [ecx + 0x240], 2 */ W32((u32)(r_ecx+0x240u), 0x2u);
    /* 006022b9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006022bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006022bd: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x6022c2u); f_005e7534();
    /* 006022c2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006022c5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006022c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006022c8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6022cdu); f_0050b510();
    /* 006022cd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006022d0: ret  */ FN_RET(0x006022ac); r_esp += 4; return;
}

void f_006022d4(void) /* sub_6022D4 */
{
    FN_ENTER(0x006022d4);
    /* 006022d4: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 006022d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006022dc: je 0x6022df */ if (fZ) goto L_006022df;
L_006022de:; BB(0x006022de);
    /* 006022de: ret  */ FN_RET(0x006022d4); r_esp += 4; return;
L_006022df:; BB(0x006022df);
    /* 006022df: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006022e5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6022eau); f_0082d838();
    /* 006022ea: ret  */ FN_RET(0x006022d4); r_esp += 4; return;
}

void f_006022ec(void) /* sub_6022EC */
{
    FN_ENTER(0x006022ec);
    /* 006022ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006022ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006022ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006022f1: push 0x8dec8c */ { u32 v = 0x8dec8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006022f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006022fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006022fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602304: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602307: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060230a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060230d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00602310: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00602313: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602316: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602318: je 0x60236f */ if (fZ) goto L_0060236f;
L_0060231a:; BB(0x0060231a);
    /* 0060231a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00602321: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 00602326: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60232bu); f_005caba4();
    /* 0060232b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060232c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060232f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602331: je 0x60236b */ if (fZ) goto L_0060236b;
L_00602333:; BB(0x00602333);
    /* 00602333: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060233a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602341: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602344: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602347: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602348: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060234e: call 0x602380 */ r_esp -= 4; W32(r_esp, 0x602353u); f_00602380();
    /* 00602353: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602356: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060235d:; BB(0x0060235d);
    /* 0060235d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602360: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602367: mov esp, ebp */ r_esp = r_ebp;
    /* 00602369: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060236a: ret  */ FN_RET(0x006022ec); r_esp += 4; return;
L_0060236b:; BB(0x0060236b);
    /* 0060236b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060236d: jmp 0x60235d */ goto L_0060235d;
L_0060236f:; BB(0x0060236f);
    /* 0060236f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602371: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602374: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060237b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060237d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060237e: ret  */ FN_RET(0x006022ec); r_esp += 4; return;
}

void f_00602380(void) /* sub_602380 */
{
    FN_ENTER(0x00602380);
    /* 00602380: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00602381: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00602383: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00602387: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060238b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060238d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x602392u); f_005e959c();
    /* 00602392: mov dword ptr [ebx], 0xb1d400 */ W32((u32)(r_ebx), 0xb1d400u);
    /* 00602398: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060239a: mov dword ptr [ebx + 0x238], edx */ W32((u32)(r_ebx+0x238u), r_edx);
    /* 006023a0: mov dword ptr [ebx + 0x240], edx */ W32((u32)(r_ebx+0x240u), r_edx);
    /* 006023a6: mov dword ptr [ebx + 0x234], 0x5cf288 */ W32((u32)(r_ebx+0x234u), 0x5cf288u);
    /* 006023b0: mov eax, ebx */ r_eax = r_ebx;
    /* 006023b2: mov dword ptr [ebx + 0x208], 0x41a00000 */ W32((u32)(r_ebx+0x208u), 0x41a00000u);
    /* 006023bc: mov dword ptr [ebx + 0x24c], 0 */ W32((u32)(r_ebx+0x24cu), 0x0u);
    /* 006023c6: mov dword ptr [ebx + 0x248], 0 */ W32((u32)(r_ebx+0x248u), 0x0u);
    /* 006023d0: mov dword ptr [ebx + 0x244], 0 */ W32((u32)(r_ebx+0x244u), 0x0u);
    /* 006023da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006023db: ret 8 */ FN_RET(0x00602380); r_esp += 12; return;
}

void f_006023e0(void) /* sub_6023E0 */
{
    FN_ENTER(0x006023e0);
    /* 006023e0: mov dword ptr [0xa8e320], 0x3f800000 */ W32((u32)(0xa8e320u), 0x3f800000u);
    /* 006023ea: mov dword ptr [0xa8e324], 0x41000000 */ W32((u32)(0xa8e324u), 0x41000000u);
    /* 006023f4: mov dword ptr [0xa8e328], 0x3fc00000 */ W32((u32)(0xa8e328u), 0x3fc00000u);
    /* 006023fe: ret  */ FN_RET(0x006023e0); r_esp += 4; return;
}

void f_00602400(void) /* sub_602400 */
{
    FN_ENTER(0x00602400);
    /* 00602400: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00602401: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00602403: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00602405: call 0x602424 */ r_esp -= 4; W32(r_esp, 0x60240au); f_00602424();
    /* 0060240a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060240e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602410: jne 0x602416 */ if (!fZ) goto L_00602416;
L_00602412:; BB(0x00602412);
    /* 00602412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00602413: ret 4 */ FN_RET(0x00602400); r_esp += 8; return;
L_00602416:; BB(0x00602416);
    /* 00602416: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00602417: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60241cu); f_005c2f74();
    /* 0060241c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060241d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060241e: ret 4 */ FN_RET(0x00602400); r_esp += 8; return;
}

void f_00602424(void) /* sub_602424 */
{
    FN_ENTER(0x00602424);
    /* 00602424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602425: mov ebp, esp */ r_ebp = r_esp;
    /* 00602427: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602429: push 0x8deca8 */ { u32 v = 0x8deca8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060242e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602435: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060243c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060243f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00602442: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00602445: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00602448: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060244b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060244e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602451: mov dword ptr [ecx], 0xb1d580 */ W32((u32)(r_ecx), 0xb1d580u);
    /* 00602457: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060245e: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x602463u); f_0060c7e4();
    /* 00602463: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602466: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060246d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060246f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602470: ret  */ FN_RET(0x00602424); r_esp += 4; return;
}

void f_00602474(void) /* sub_602474 */
{
    FN_ENTER(0x00602474);
    /* 00602474: mov ecx, dword ptr [0xa8e32c] */ r_ecx = R32((u32)(0xa8e32cu));
    /* 0060247a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060247c: je 0x602499 */ if (fZ) goto L_00602499;
L_0060247e:; BB(0x0060247e);
    /* 0060247e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x602483u); f_00829de0();
    /* 00602483: push dword ptr [0xa8e32c] */ { u32 v = R32((u32)(0xa8e32cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00602489: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x60248eu); f_0082e960();
    /* 0060248e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060248f: mov dword ptr [0xa8e32c], 0 */ W32((u32)(0xa8e32cu), 0x0u);
L_00602499:; BB(0x00602499);
    /* 00602499: mov eax, dword ptr [0xa8e330] */ r_eax = R32((u32)(0xa8e330u));
    /* 0060249e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006024a0: je 0x6024b3 */ if (fZ) goto L_006024b3;
L_006024a2:; BB(0x006024a2);
    /* 006024a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006024a3: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x6024a8u); f_005b9bac();
    /* 006024a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006024a9: mov dword ptr [0xa8e330], 0 */ W32((u32)(0xa8e330u), 0x0u);
L_006024b3:; BB(0x006024b3);
    /* 006024b3: ret  */ FN_RET(0x00602474); r_esp += 4; return;
}

void f_006024b4(void)
{
    FN_ENTER(0x006024b4);
    /* 006024b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006024b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006024b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006024b9: push 0x8decea */ { u32 v = 0x8deceau; r_esp -= 4; W32(r_esp, v); }
    /* 006024be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006024c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006024c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006024cc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006024cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006024d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006024d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006024d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006024db: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006024dd: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006024e4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6024e9u); f_005caba4();
    /* 006024e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006024ea: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006024ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006024ef: je 0x602577 */ if (fZ) goto L_00602577;
L_006024f5:; BB(0x006024f5);
    /* 006024f5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006024fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602503: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00602509: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060250c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x602511u); f_00787a4c();
    /* 00602511: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00602514: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060251b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060251e:; BB(0x0060251e);
    /* 0060251e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00602525: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060252c: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602531: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x602536u); f_005caba4();
    /* 00602536: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602537: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060253a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060253c: je 0x602573 */ if (fZ) goto L_00602573;
L_0060253e:; BB(0x0060253e);
    /* 0060253e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00602545: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060254c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060254f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602552: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602555: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602556: call 0x602580 */ r_esp -= 4; W32(r_esp, 0x60255bu); f_00602580();
    /* 0060255b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060255e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00602565:; BB(0x00602565);
    /* 00602565: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602568: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060256f: mov esp, ebp */ r_esp = r_ebp;
    /* 00602571: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602572: ret  */ FN_RET(0x006024b4); r_esp += 4; return;
L_00602573:; BB(0x00602573);
    /* 00602573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602575: jmp 0x602565 */ goto L_00602565;
L_00602577:; BB(0x00602577);
    /* 00602577: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00602579: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060257c: jmp 0x60251e */ goto L_0060251e;
}

void f_00602580(void) /* sub_602580 */
{
    FN_ENTER(0x00602580);
    /* 00602580: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602581: mov ebp, esp */ r_ebp = r_esp;
    /* 00602583: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602585: push 0x8ded04 */ { u32 v = 0x8ded04u; r_esp -= 4; W32(r_esp, v); }
    /* 0060258a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602591: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602598: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060259b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060259e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006025a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006025a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006025a7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006025aa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006025ad: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006025b0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006025b3: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x6025b8u); f_0060c858();
    /* 006025b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006025bf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006025c2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006025c5: mov dword ptr [ecx], 0xb1d580 */ W32((u32)(r_ecx), 0xb1d580u);
    /* 006025cb: mov eax, dword ptr [0x9c2974] */ r_eax = R32((u32)(0x9c2974u));
    /* 006025d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006025d1: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006025d4: call dword ptr [0xb1d6cc] */ { u32 t = R32((u32)(0xb1d6ccu)); r_esp -= 4; W32(r_esp, 0x6025dau); call_ind(t); }
    /* 006025da: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006025dd: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006025e0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006025e3: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006025e6: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 006025ec: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 006025f2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006025f5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 006025fb: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00602601: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00602607: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060260d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00602613: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00602619: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060261c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00602622: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602625: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060262b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060262e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00602634: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00602637: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060263d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00602640: mov eax, dword ptr [0xa8e330] */ r_eax = R32((u32)(0xa8e330u));
    /* 00602645: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00602647: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060264a: mov eax, dword ptr [0xa8e32c] */ r_eax = R32((u32)(0xa8e32cu));
    /* 0060264f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00602652: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x602657u); f_00606bc8();
    /* 00602657: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060265a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060265d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602660: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00602663: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602666: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060266d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060266f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602670: ret 8 */ FN_RET(0x00602580); r_esp += 12; return;
}

void f_00602674(void) /* sub_602674 */
{
    FN_ENTER(0x00602674);
    /* 00602674: push 0x92e290 */ { u32 v = 0x92e290u; r_esp -= 4; W32(r_esp, v); }
    /* 00602679: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x60267eu); f_005b938c();
    /* 0060267e: push 0x92e2a4 */ { u32 v = 0x92e2a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00602683: mov dword ptr [0xa8e330], eax */ W32((u32)(0xa8e330u), r_eax);
    /* 00602688: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x60268du); f_008009dc();
    /* 0060268d: mov dword ptr [0xa8e32c], eax */ W32((u32)(0xa8e32cu), r_eax);
    /* 00602692: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00602695: ret  */ FN_RET(0x00602674); r_esp += 4; return;
}

void f_00602698(void) /* sub_602698 */
{
    FN_ENTER(0x00602698);
    /* 00602698: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602699: mov ebp, esp */ r_ebp = r_esp;
    /* 0060269b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060269d: push 0x8ded20 */ { u32 v = 0x8ded20u; r_esp -= 4; W32(r_esp, v); }
    /* 006026a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006026a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006026a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006026b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006026b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006026b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006026b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006026bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006026bf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006026c2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006026c5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006026cc: mov eax, ecx */ r_eax = r_ecx;
    /* 006026ce: mov dword ptr [eax], 0xb1d800 */ W32((u32)(r_eax), 0xb1d800u);
    /* 006026d4: mov eax, dword ptr [eax + 0x3c8] */ r_eax = R32((u32)(r_eax+0x3c8u));
    /* 006026da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006026dd: je 0x602747 */ if (fZ) goto L_00602747;
L_006026df:; BB(0x006026df);
    /* 006026df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006026e1: je 0x602747 */ if (fZ) goto L_00602747;
L_006026e3:; BB(0x006026e3);
    /* 006026e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006026e5:; BB(0x006026e5);
    /* 006026e5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006026e8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006026eb: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006026ee: cmp ecx, dword ptr [ebx + 0xa8e340] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa8e340u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006026f4: jne 0x602701 */ if (!fZ) goto L_00602701;
L_006026f6:; BB(0x006026f6);
    /* 006026f6: mov dword ptr [edx*4 + 0xa8e340], 0 */ W32((u32)(r_edx*4+0xa8e340u), 0x0u);
L_00602701:; BB(0x00602701);
    /* 00602701: cmp ecx, dword ptr [eax*2 + 0xa8e344] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*2+0xa8e344u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602708: jne 0x602715 */ if (!fZ) goto L_00602715;
L_0060270a:; BB(0x0060270a);
    /* 0060270a: mov dword ptr [eax*2 + 0xa8e344], 0 */ W32((u32)(r_eax*2+0xa8e344u), 0x0u);
L_00602715:; BB(0x00602715);
    /* 00602715: cmp ecx, dword ptr [eax*2 + 0xa8e348] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*2+0xa8e348u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060271c: jne 0x602729 */ if (!fZ) goto L_00602729;
L_0060271e:; BB(0x0060271e);
    /* 0060271e: mov dword ptr [eax*2 + 0xa8e348], 0 */ W32((u32)(r_eax*2+0xa8e348u), 0x0u);
L_00602729:; BB(0x00602729);
    /* 00602729: cmp ecx, dword ptr [eax*2 + 0xa8e34c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax*2+0xa8e34cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602730: jne 0x60273d */ if (!fZ) goto L_0060273d;
L_00602732:; BB(0x00602732);
    /* 00602732: mov dword ptr [eax*2 + 0xa8e34c], 0 */ W32((u32)(r_eax*2+0xa8e34cu), 0x0u);
L_0060273d:; BB(0x0060273d);
    /* 0060273d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602740: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00602743: jl 0x6026e5 */ if ((fS!=fO)) goto L_006026e5;
L_00602745:; BB(0x00602745);
    /* 00602745: jmp 0x60278a */ goto L_0060278a;
L_00602747:; BB(0x00602747);
    /* 00602747: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060274a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060274c: mov dword ptr [0xaab3ac], edx */ W32((u32)(0xaab3acu), r_edx);
    /* 00602752: mov dword ptr [eax + 0x3cc], edx */ W32((u32)(r_eax+0x3ccu), r_edx);
    /* 00602758: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060275f: mov ecx, eax */ r_ecx = r_eax;
    /* 00602761: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x602766u); f_00606190();
    /* 00602766: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00602769: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060276b: jne 0x602940 */ if (!fZ) goto L_00602940;
L_00602771:; BB(0x00602771);
    /* 00602771: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602774: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602777: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060277a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060277d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602784: mov esp, ebp */ r_esp = r_ebp;
    /* 00602786: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602787: ret 4 */ FN_RET(0x00602698); r_esp += 8; return;
L_0060278a:; BB(0x0060278a);
    /* 0060278a: mov eax, ecx */ r_eax = r_ecx;
    /* 0060278c: mov eax, dword ptr [eax + 0x43c] */ r_eax = R32((u32)(r_eax+0x43cu));
    /* 00602792: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602795: je 0x60279e */ if (fZ) goto L_0060279e;
L_00602797:; BB(0x00602797);
    /* 00602797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602798: call 0x5d79cc */ r_esp -= 4; W32(r_esp, 0x60279du); f_005d79cc();
    /* 0060279d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0060279e:; BB(0x0060279e);
    /* 0060279e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006027a1: call 0x602950 */ r_esp -= 4; W32(r_esp, 0x6027a6u); f_00602950();
    /* 006027a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006027a9: mov eax, dword ptr [eax + 0xe0] */ r_eax = R32((u32)(r_eax+0xe0u));
    /* 006027af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006027b1: je 0x6027c7 */ if (fZ) goto L_006027c7;
L_006027b3:; BB(0x006027b3);
    /* 006027b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006027b4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6027b9u); f_00857e98();
    /* 006027b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006027ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006027bd: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
L_006027c7:; BB(0x006027c7);
    /* 006027c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006027ca: mov eax, dword ptr [eax + 0x438] */ r_eax = R32((u32)(r_eax+0x438u));
    /* 006027d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006027d2: je 0x6027e8 */ if (fZ) goto L_006027e8;
L_006027d4:; BB(0x006027d4);
    /* 006027d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006027d5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6027dau); f_00857e98();
    /* 006027da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006027db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006027de: mov dword ptr [eax + 0x438], 0 */ W32((u32)(r_eax+0x438u), 0x0u);
L_006027e8:; BB(0x006027e8);
    /* 006027e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006027eb: mov eax, dword ptr [eax + 0x434] */ r_eax = R32((u32)(r_eax+0x434u));
    /* 006027f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006027f3: je 0x602809 */ if (fZ) goto L_00602809;
L_006027f5:; BB(0x006027f5);
    /* 006027f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006027f6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6027fbu); f_00857e98();
    /* 006027fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006027fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006027ff: mov dword ptr [eax + 0x434], 0 */ W32((u32)(r_eax+0x434u), 0x0u);
L_00602809:; BB(0x00602809);
    /* 00602809: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060280c: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 00602812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602814: je 0x60282a */ if (fZ) goto L_0060282a;
L_00602816:; BB(0x00602816);
    /* 00602816: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602817: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x60281cu); f_00857e98();
    /* 0060281c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060281d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602820: mov dword ptr [eax + 0x430], 0 */ W32((u32)(r_eax+0x430u), 0x0u);
L_0060282a:; BB(0x0060282a);
    /* 0060282a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060282d: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00602833: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602835: je 0x60284b */ if (fZ) goto L_0060284b;
L_00602837:; BB(0x00602837);
    /* 00602837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602838: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x60283du); f_00857e98();
    /* 0060283d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060283e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602841: mov dword ptr [eax + 0x42c], 0 */ W32((u32)(r_eax+0x42cu), 0x0u);
L_0060284b:; BB(0x0060284b);
    /* 0060284b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060284e: mov esi, dword ptr [eax + 0x3e0] */ r_esi = R32((u32)(r_eax+0x3e0u));
    /* 00602854: lea ebx, [esi + 0x23600] */ r_ebx = (u32)(r_esi+0x23600u);
    /* 0060285a: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0060285c: jae 0x6028c4 */ if (!fC) goto L_006028c4;
L_0060285e:; BB(0x0060285e);
    /* 0060285e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00602860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602862: je 0x6028b1 */ if (fZ) goto L_006028b1;
L_00602864:; BB(0x00602864);
    /* 00602864: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00602867: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602869: je 0x60287d */ if (fZ) goto L_0060287d;
L_0060286b:; BB(0x0060286b);
    /* 0060286b: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0060286e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602870: je 0x60287d */ if (fZ) goto L_0060287d;
L_00602872:; BB(0x00602872);
    /* 00602872: lea ecx, [esi + 0x178] */ r_ecx = (u32)(r_esi+0x178u);
    /* 00602878: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60287du); f_00829de0();
L_0060287d:; BB(0x0060287d);
    /* 0060287d: mov eax, dword ptr [esi + 0x184] */ r_eax = R32((u32)(r_esi+0x184u));
    /* 00602883: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602885: je 0x60289c */ if (fZ) goto L_0060289c;
L_00602887:; BB(0x00602887);
    /* 00602887: mov eax, dword ptr [esi + 0x188] */ r_eax = R32((u32)(r_esi+0x188u));
    /* 0060288d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060288f: je 0x60289c */ if (fZ) goto L_0060289c;
L_00602891:; BB(0x00602891);
    /* 00602891: lea ecx, [esi + 0x2ec] */ r_ecx = (u32)(r_esi+0x2ecu);
    /* 00602897: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x60289cu); f_00829de0();
L_0060289c:; BB(0x0060289c);
    /* 0060289c: mov eax, dword ptr [esi + 0x2f8] */ r_eax = R32((u32)(r_esi+0x2f8u));
    /* 006028a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028a4: je 0x6028b1 */ if (fZ) goto L_006028b1;
L_006028a6:; BB(0x006028a6);
    /* 006028a6: lea ecx, [esi + 0x460] */ r_ecx = (u32)(r_esi+0x460u);
    /* 006028ac: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6028b1u); f_00829de0();
L_006028b1:; BB(0x006028b1);
    /* 006028b1: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006028b7: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006028b9: jb 0x60285e */ if (fC) goto L_0060285e;
L_006028bb:; BB(0x006028bb);
    /* 006028bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006028be: mov esi, dword ptr [eax + 0x3e0] */ r_esi = R32((u32)(r_eax+0x3e0u));
L_006028c4:; BB(0x006028c4);
    /* 006028c4: mov dword ptr [eax + 0x3e4], 0 */ W32((u32)(r_eax+0x3e4u), 0x0u);
    /* 006028ce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028d0: je 0x6028e6 */ if (fZ) goto L_006028e6;
L_006028d2:; BB(0x006028d2);
    /* 006028d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006028d3: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6028d8u); f_00857e98();
    /* 006028d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006028d9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006028dc: mov dword ptr [eax + 0x3e0], 0 */ W32((u32)(r_eax+0x3e0u), 0x0u);
L_006028e6:; BB(0x006028e6);
    /* 006028e6: mov ecx, dword ptr [eax + 0x3d0] */ r_ecx = R32((u32)(r_eax+0x3d0u));
    /* 006028ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006028ee: je 0x602906 */ if (fZ) goto L_00602906;
L_006028f0:; BB(0x006028f0);
    /* 006028f0: je 0x6028f9 */ if (fZ) goto L_006028f9;
L_006028f2:; BB(0x006028f2);
    /* 006028f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006028f4: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6028f9u); f_004066a8();
L_006028f9:; BB(0x006028f9);
    /* 006028f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006028fc: mov dword ptr [eax + 0x3d0], 0 */ W32((u32)(r_eax+0x3d0u), 0x0u);
L_00602906:; BB(0x00602906);
    /* 00602906: mov ecx, eax */ r_ecx = r_eax;
    /* 00602908: call 0x602970 */ r_esp -= 4; W32(r_esp, 0x60290du); f_00602970();
    /* 0060290d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602910: mov ecx, dword ptr [edx + 0x3c8] */ r_ecx = R32((u32)(r_edx+0x3c8u));
    /* 00602916: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00602918: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060291b: mov dword ptr [edx + 0x3dc], eax */ W32((u32)(r_edx+0x3dcu), r_eax);
    /* 00602921: mov dword ptr [edx + 0x3d8], eax */ W32((u32)(r_edx+0x3d8u), r_eax);
    /* 00602927: mov dword ptr [edx + 0x3d4], eax */ W32((u32)(r_edx+0x3d4u), r_eax);
    /* 0060292d: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602930: jne 0x602747 */ if (!fZ) goto L_00602747;
L_00602936:; BB(0x00602936);
    /* 00602936: call 0x5b90bc */ r_esp -= 4; W32(r_esp, 0x60293bu); f_005b90bc();
    /* 0060293b: jmp 0x602747 */ goto L_00602747;
L_00602940:; BB(0x00602940);
    /* 00602940: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602944: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x602949u); f_005c2f74();
    /* 00602949: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060294a: jmp 0x602771 */ goto L_00602771;
}

void f_00602950(void) /* sub_602950 */
{
    FN_ENTER(0x00602950);
    /* 00602950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602951: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00602953: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 00602959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060295b: je 0x60296e */ if (fZ) goto L_0060296e;
L_0060295d:; BB(0x0060295d);
    /* 0060295d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060295e: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x602963u); f_0082e960();
    /* 00602963: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602964: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_0060296e:; BB(0x0060296e);
    /* 0060296e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060296f: ret  */ FN_RET(0x00602950); r_esp += 4; return;
}

void f_00602970(void) /* sub_602970 */
{
    FN_ENTER(0x00602970);
    /* 00602970: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00602971: mov edi, ecx */ r_edi = r_ecx;
    /* 00602973: mov eax, dword ptr [edi + 0x418] */ r_eax = R32((u32)(r_edi+0x418u));
    /* 00602979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060297b: je 0x60298e */ if (fZ) goto L_0060298e;
L_0060297d:; BB(0x0060297d);
    /* 0060297d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060297e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x602983u); f_00857e98();
    /* 00602983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602984: mov dword ptr [edi + 0x418], 0 */ W32((u32)(r_edi+0x418u), 0x0u);
L_0060298e:; BB(0x0060298e);
    /* 0060298e: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 00602994: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602996: je 0x6029a9 */ if (fZ) goto L_006029a9;
L_00602998:; BB(0x00602998);
    /* 00602998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602999: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x60299eu); f_00857e98();
    /* 0060299e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060299f: mov dword ptr [edi + 0x41c], 0 */ W32((u32)(r_edi+0x41cu), 0x0u);
L_006029a9:; BB(0x006029a9);
    /* 006029a9: mov eax, dword ptr [edi + 0x420] */ r_eax = R32((u32)(r_edi+0x420u));
    /* 006029af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006029b1: je 0x6029c4 */ if (fZ) goto L_006029c4;
L_006029b3:; BB(0x006029b3);
    /* 006029b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006029b4: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6029b9u); f_00857e98();
    /* 006029b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006029ba: mov dword ptr [edi + 0x420], 0 */ W32((u32)(r_edi+0x420u), 0x0u);
L_006029c4:; BB(0x006029c4);
    /* 006029c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006029c5: ret  */ FN_RET(0x00602970); r_esp += 4; return;
}

void f_006029c8(void) /* sub_6029C8 */
{
    FN_ENTER(0x006029c8);
    /* 006029c8: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006029cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006029cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006029ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006029cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006029d0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006029d2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6029d7u); f_00814298();
    /* 006029d7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006029da: ret  */ FN_RET(0x006029c8); r_esp += 4; return;
}

void f_006029dc(void) /* sub_6029DC */
{
    FN_ENTER(0x006029dc);
    /* 006029dc: mov ecx, dword ptr [0xa8e474] */ r_ecx = R32((u32)(0xa8e474u));
    /* 006029e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006029e4: je 0x6029f9 */ if (fZ) goto L_006029f9;
L_006029e6:; BB(0x006029e6);
    /* 006029e6: je 0x6029ef */ if (fZ) goto L_006029ef;
L_006029e8:; BB(0x006029e8);
    /* 006029e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006029ea: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6029efu); f_004066a8();
L_006029ef:; BB(0x006029ef);
    /* 006029ef: mov dword ptr [0xa8e474], 0 */ W32((u32)(0xa8e474u), 0x0u);
L_006029f9:; BB(0x006029f9);
    /* 006029f9: mov eax, dword ptr [0xa8e470] */ r_eax = R32((u32)(0xa8e470u));
    /* 006029fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602a00: je 0x602a13 */ if (fZ) goto L_00602a13;
L_00602a02:; BB(0x00602a02);
    /* 00602a02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a03: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x602a08u); f_00857e98();
    /* 00602a08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602a09: mov dword ptr [0xa8e470], 0 */ W32((u32)(0xa8e470u), 0x0u);
L_00602a13:; BB(0x00602a13);
    /* 00602a13: ret  */ FN_RET(0x006029dc); r_esp += 4; return;
}

void f_00602a14(void)
{
    FN_ENTER(0x00602a14);
    /* 00602a14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602a15: mov ebp, esp */ r_ebp = r_esp;
    /* 00602a17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602a19: push 0x8ded62 */ { u32 v = 0x8ded62u; r_esp -= 4; W32(r_esp, v); }
    /* 00602a1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602a24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602a25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602a2c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602a2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00602a32: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00602a35: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00602a38: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00602a3b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00602a3d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00602a44: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x602a49u); f_005caba4();
    /* 00602a49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602a4a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00602a4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602a4f: je 0x602ad7 */ if (fZ) goto L_00602ad7;
L_00602a55:; BB(0x00602a55);
    /* 00602a55: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00602a5c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602a63: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00602a69: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00602a6c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x602a71u); f_00787a4c();
    /* 00602a71: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00602a74: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00602a7b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00602a7e:; BB(0x00602a7e);
    /* 00602a7e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00602a85: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00602a8c: push 0x508 */ { u32 v = 0x508u; r_esp -= 4; W32(r_esp, v); }
    /* 00602a91: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x602a96u); f_005caba4();
    /* 00602a96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602a97: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00602a9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602a9c: je 0x602ad3 */ if (fZ) goto L_00602ad3;
L_00602a9e:; BB(0x00602a9e);
    /* 00602a9e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00602aa5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00602aac: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00602aaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ab2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602ab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602ab6: call 0x602ae0 */ r_esp -= 4; W32(r_esp, 0x602abbu); f_00602ae0();
    /* 00602abb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602abe: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00602ac5:; BB(0x00602ac5);
    /* 00602ac5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602ac8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602acf: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ad1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602ad2: ret  */ FN_RET(0x00602a14); r_esp += 4; return;
L_00602ad3:; BB(0x00602ad3);
    /* 00602ad3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602ad5: jmp 0x602ac5 */ goto L_00602ac5;
L_00602ad7:; BB(0x00602ad7);
    /* 00602ad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00602ad9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00602adc: jmp 0x602a7e */ goto L_00602a7e;
}

void f_00602ae0(void) /* sub_602AE0 */
{
    FN_ENTER(0x00602ae0);
    /* 00602ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602ae1: mov ebp, esp */ r_ebp = r_esp;
    /* 00602ae3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602ae5: push 0x8ded7c */ { u32 v = 0x8ded7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00602aea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602af0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602af1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602af8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602afb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00602afe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00602b01: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00602b04: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00602b07: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00602b0a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00602b0d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00602b10: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00602b13: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x602b18u); f_00606c28();
    /* 00602b18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602b1f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602b22: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00602b25: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602b28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00602b29: mov dword ptr [ebx], 0xb1d800 */ W32((u32)(r_ebx), 0xb1d800u);
    /* 00602b2f: movzx eax, word ptr [esi + 0x3c] */ r_eax = (u32)R16((u32)(r_esi+0x3cu));
    /* 00602b33: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00602b36: sar eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00602b39: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00602b3a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00602b3c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00602b3e: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00602b41: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00602b43: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00602b45: mov dword ptr [ebx + 0x3c0], eax */ W32((u32)(r_ebx+0x3c0u), r_eax);
    /* 00602b4b: movzx edi, word ptr [esi + 0x3c] */ r_edi = (u32)R16((u32)(r_esi+0x3cu));
    /* 00602b4f: shl edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00602b52: sar edi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00602b55: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00602b58: mov dword ptr [ebx + 0x3c4], edi */ W32((u32)(r_ebx+0x3c4u), r_edi);
    /* 00602b5e: movsx ebx, word ptr [esi + 0x3c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x3cu));
    /* 00602b62: mov eax, ebx */ r_eax = r_ebx;
    /* 00602b64: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00602b67: mov word ptr [esi + 0x3c], ax */ W16((u32)(r_esi+0x3cu), (u16)r_eax);
    /* 00602b6b: mov eax, dword ptr [0x9c3e50] */ r_eax = R32((u32)(0x9c3e50u));
    /* 00602b70: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00602b73: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00602b75: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x602b7bu); call_ind(t); }
    /* 00602b7b: mov eax, esi */ r_eax = r_esi;
    /* 00602b7d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602b80: mov word ptr [eax + 0x3c], bx */ W16((u32)(r_eax+0x3cu), (u16)r_ebx);
    /* 00602b84: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x602b89u); f_00606bc8();
    /* 00602b89: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602b8c: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00602b8f: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 00602b92: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 00602b95: mov dword ptr [edi + 0x2a4], edx */ W32((u32)(r_edi+0x2a4u), r_edx);
    /* 00602b9b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602b9e: mov dword ptr [edi + 0x2a8], ecx */ W32((u32)(r_edi+0x2a8u), r_ecx);
    /* 00602ba4: mov dword ptr [edi + 0x2ac], eax */ W32((u32)(r_edi+0x2acu), r_eax);
    /* 00602baa: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00602bad: mov esi, dword ptr [edx + 0x2a4] */ r_esi = R32((u32)(r_edx+0x2a4u));
    /* 00602bb3: mov ebx, dword ptr [edx + 0x2a8] */ r_ebx = R32((u32)(r_edx+0x2a8u));
    /* 00602bb9: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00602bbf: mov dword ptr [edx + 0x298], esi */ W32((u32)(r_edx+0x298u), r_esi);
    /* 00602bc5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602bc8: mov dword ptr [edx + 0x29c], ebx */ W32((u32)(r_edx+0x29cu), r_ebx);
    /* 00602bce: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00602bd1: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00602bd7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602bda: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00602be0: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00602be3: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00602be9: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00602bec: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00602bf2: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00602bf5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00602bf8: mov eax, 1 */ r_eax = 0x1u;
    /* 00602bfd: mov dword ptr [edx + 0x3c8], eax */ W32((u32)(r_edx+0x3c8u), r_eax);
    /* 00602c03: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 00602c08: mov eax, edx */ r_eax = r_edx;
    /* 00602c0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602c0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602c14: mov esp, ebp */ r_esp = r_ebp;
    /* 00602c16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602c17: ret 8 */ FN_RET(0x00602ae0); r_esp += 12; return;
}

void f_00602c1c(void) /* sub_602C1C */
{
    FN_ENTER(0x00602c1c);
    /* 00602c1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00602c1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00602c1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00602c21: push 0x8dede0 */ { u32 v = 0x8dede0u; r_esp -= 4; W32(r_esp, v); }
    /* 00602c26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00602c2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00602c2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00602c34: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00602c37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00602c3a: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00602c3d: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00602c40: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00602c43: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 00602c49: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00602c4c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00602c4f: mov eax, dword ptr [ecx + 0x3c8] */ r_eax = R32((u32)(r_ecx+0x3c8u));
    /* 00602c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602c57: je 0x602ead */ if (fZ) goto L_00602ead;
L_00602c5d:; BB(0x00602c5d);
    /* 00602c5d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602c60: je 0x602c8a */ if (fZ) goto L_00602c8a;
L_00602c62:; BB(0x00602c62);
    /* 00602c62: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602c65: je 0x602cbb */ if (fZ) goto L_00602cbb;
L_00602c67:; BB(0x00602c67);
    /* 00602c67: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00602c6a: jne 0x602ead */ if (!fZ) goto L_00602ead;
L_00602c70:; BB(0x00602c70);
    /* 00602c70: call 0x606e34 */ r_esp -= 4; W32(r_esp, 0x602c75u); f_00606e34();
    /* 00602c75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c78: call 0x603be8 */ r_esp -= 4; W32(r_esp, 0x602c7du); f_00603be8();
    /* 00602c7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c80: call 0x603c24 */ r_esp -= 4; W32(r_esp, 0x602c85u); f_00603c24();
    /* 00602c85: jmp 0x602ead */ goto L_00602ead;
L_00602c8a:; BB(0x00602c8a);
    /* 00602c8a: call 0x606f10 */ r_esp -= 4; W32(r_esp, 0x602c8fu); f_00606f10();
    /* 00602c8f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00602c92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602c94: jne 0x602ea4 */ if (!fZ) goto L_00602ea4;
L_00602c9a:; BB(0x00602c9a);
    /* 00602c9a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602c9d: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 00602ca3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602ca5: je 0x602ea4 */ if (fZ) goto L_00602ea4;
L_00602cab:; BB(0x00602cab);
    /* 00602cab: mov ecx, eax */ r_ecx = r_eax;
    /* 00602cad: call 0x603ca4 */ r_esp -= 4; W32(r_esp, 0x602cb2u); f_00603ca4();
    /* 00602cb2: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x602cb7u); f_005b7a28();
    /* 00602cb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602cb9: jne 0x602d1c */ if (!fZ) goto L_00602d1c;
L_00602cbb:; BB(0x00602cbb);
    /* 00602cbb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cbe: call 0x606f10 */ r_esp -= 4; W32(r_esp, 0x602cc3u); f_00606f10();
    /* 00602cc3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00602cc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602cc8: jne 0x602cde */ if (!fZ) goto L_00602cde;
L_00602cca:; BB(0x00602cca);
    /* 00602cca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ccd: mov edx, dword ptr [eax + 0x398] */ r_edx = R32((u32)(r_eax+0x398u));
    /* 00602cd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602cd5: je 0x602cde */ if (fZ) goto L_00602cde;
L_00602cd7:; BB(0x00602cd7);
    /* 00602cd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00602cd9: call 0x603ca4 */ r_esp -= 4; W32(r_esp, 0x602cdeu); f_00603ca4();
L_00602cde:; BB(0x00602cde);
    /* 00602cde: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ce1: mov ecx, dword ptr [eax + 0x3d0] */ r_ecx = R32((u32)(r_eax+0x3d0u));
    /* 00602ce7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602ce9: je 0x602d05 */ if (fZ) goto L_00602d05;
L_00602ceb:; BB(0x00602ceb);
    /* 00602ceb: call 0x5b864c */ r_esp -= 4; W32(r_esp, 0x602cf0u); f_005b864c();
    /* 00602cf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602cf2: je 0x602d05 */ if (fZ) goto L_00602d05;
L_00602cf4:; BB(0x00602cf4);
    /* 00602cf4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602cf7: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00602cfd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602cff: jne 0x6033bf */ if (!fZ) goto L_006033bf;
L_00602d05:; BB(0x00602d05);
    /* 00602d05: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00602d08: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602d0b: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00602d0e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602d11: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602d18: mov esp, ebp */ r_esp = r_ebp;
    /* 00602d1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602d1b: ret  */ FN_RET(0x00602c1c); r_esp += 4; return;
L_00602d1c:; BB(0x00602d1c);
    /* 00602d1c: call 0x5b9094 */ r_esp -= 4; W32(r_esp, 0x602d21u); f_005b9094();
    /* 00602d21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602d23: je 0x602cbb */ if (fZ) goto L_00602cbb;
L_00602d25:; BB(0x00602d25);
    /* 00602d25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602d28: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 00602d2e: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 00602d35: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00602d38: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00602d3d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d41: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602d43: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d45: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d47: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d4b: add edx, dword ptr [0xa8e470] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa8e470u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602d51: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 00602d57: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x602d5cu); f_008581c5();
    /* 00602d5c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00602d5f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602d62: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00602d65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602d67: je 0x603383 */ if (fZ) goto L_00603383;
L_00602d6d:; BB(0x00602d6d);
    /* 00602d6d: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 00602d74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00602d7b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602d7e: push dword ptr [eax + 0x3cc] */ { u32 v = R32((u32)(r_eax+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00602d84: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x602d89u); f_004e6f24();
    /* 00602d89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602d8a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602d8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00602d8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602d91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602d92: push dword ptr [eax*4 + 0x9b1620] */ { u32 v = R32((u32)(r_eax*4+0x9b1620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00602d99: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00602d9b: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x602da0u); f_005b7a84();
    /* 00602da0: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_00602da7:; BB(0x00602da7);
    /* 00602da7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602daa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602dad: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 00602db3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00602dba: push 0x23600 */ { u32 v = 0x23600u; r_esp -= 4; W32(r_esp, v); }
    /* 00602dbf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x602dc4u); f_008581c5();
    /* 00602dc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602dc5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602dc8: lea ebx, [eax + 0x23600] */ r_ebx = (u32)(r_eax+0x23600u);
    /* 00602dce: mov dword ptr [edx + 0x3e0], eax */ W32((u32)(r_edx+0x3e0u), r_eax);
    /* 00602dd4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00602dd6: jae 0x603212 */ if (!fC) goto L_00603212;
L_00602ddc:; BB(0x00602ddc);
    /* 00602ddc: mov edx, ebx */ r_edx = r_ebx;
    /* 00602dde: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602de0: cmp edx, 0x161c */ {  u32 a = r_edx; u32 b = 0x161cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00602de6: jb 0x6031e7 */ if (fC) goto L_006031e7;
L_00602dec:; BB(0x00602dec);
    /* 00602dec: lea ecx, [ebx - 0x161c] */ r_ecx = (u32)(r_ebx+0xffffe9e4u);
L_00602df2:; BB(0x00602df2);
    /* 00602df2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00602df4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00602df6: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00602df9: mov dword ptr [eax + 0x188], edx */ W32((u32)(r_eax+0x188u), r_edx);
    /* 00602dff: mov dword ptr [eax + 0x2fc], edx */ W32((u32)(r_eax+0x2fcu), r_edx);
    /* 00602e05: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00602e08: mov dword ptr [eax + 0x184], edx */ W32((u32)(r_eax+0x184u), r_edx);
    /* 00602e0e: mov dword ptr [eax + 0x2f8], edx */ W32((u32)(r_eax+0x2f8u), r_edx);
    /* 00602e14: mov dword ptr [eax + 0x46c], edx */ W32((u32)(r_eax+0x46cu), r_edx);
    /* 00602e1a: mov dword ptr [eax + 0x480], edx */ W32((u32)(r_eax+0x480u), r_edx);
    /* 00602e20: mov dword ptr [eax + 0x5f4], edx */ W32((u32)(r_eax+0x5f4u), r_edx);
    /* 00602e26: mov dword ptr [eax + 0x768], edx */ W32((u32)(r_eax+0x768u), r_edx);
    /* 00602e2c: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 00602e32: mov dword ptr [eax + 0x5f0], edx */ W32((u32)(r_eax+0x5f0u), r_edx);
    /* 00602e38: mov dword ptr [eax + 0x764], edx */ W32((u32)(r_eax+0x764u), r_edx);
    /* 00602e3e: mov dword ptr [eax + 0x8d8], edx */ W32((u32)(r_eax+0x8d8u), r_edx);
    /* 00602e44: mov dword ptr [eax + 0x8ec], edx */ W32((u32)(r_eax+0x8ecu), r_edx);
    /* 00602e4a: mov dword ptr [eax + 0xa60], edx */ W32((u32)(r_eax+0xa60u), r_edx);
    /* 00602e50: mov dword ptr [eax + 0xbd4], edx */ W32((u32)(r_eax+0xbd4u), r_edx);
    /* 00602e56: mov dword ptr [eax + 0x8e8], edx */ W32((u32)(r_eax+0x8e8u), r_edx);
    /* 00602e5c: mov dword ptr [eax + 0xa5c], edx */ W32((u32)(r_eax+0xa5cu), r_edx);
    /* 00602e62: mov dword ptr [eax + 0xbd0], edx */ W32((u32)(r_eax+0xbd0u), r_edx);
    /* 00602e68: mov dword ptr [eax + 0xd44], edx */ W32((u32)(r_eax+0xd44u), r_edx);
    /* 00602e6e: mov dword ptr [eax + 0xd58], edx */ W32((u32)(r_eax+0xd58u), r_edx);
    /* 00602e74: mov dword ptr [eax + 0xecc], edx */ W32((u32)(r_eax+0xeccu), r_edx);
    /* 00602e7a: mov dword ptr [eax + 0x1040], edx */ W32((u32)(r_eax+0x1040u), r_edx);
    /* 00602e80: mov dword ptr [eax + 0xd54], edx */ W32((u32)(r_eax+0xd54u), r_edx);
    /* 00602e86: mov dword ptr [eax + 0xec8], edx */ W32((u32)(r_eax+0xec8u), r_edx);
    /* 00602e8c: mov dword ptr [eax + 0x103c], edx */ W32((u32)(r_eax+0x103cu), r_edx);
    /* 00602e92: add eax, 0x11b0 */ {  u32 a = r_eax; u32 b = 0x11b0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00602e97: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00602e99: jbe 0x602df2 */ if ((fC||fZ)) goto L_00602df2;
L_00602e9f:; BB(0x00602e9f);
    /* 00602e9f: jmp 0x6031e7 */ goto L_006031e7;
L_00602ea4:; BB(0x00602ea4);
    /* 00602ea4: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x602ea9u); f_005b7a28();
    /* 00602ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602eab: jne 0x602ec4 */ if (!fZ) goto L_00602ec4;
L_00602ead:; BB(0x00602ead);
    /* 00602ead: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00602eb0: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00602eb3: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00602eb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00602eb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00602ec0: mov esp, ebp */ r_esp = r_ebp;
    /* 00602ec2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00602ec3: ret  */ FN_RET(0x00602c1c); r_esp += 4; return;
L_00602ec4:; BB(0x00602ec4);
    /* 00602ec4: call 0x5b9094 */ r_esp -= 4; W32(r_esp, 0x602ec9u); f_005b9094();
    /* 00602ec9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00602ecb: je 0x602ead */ if (fZ) goto L_00602ead;
L_00602ecd:; BB(0x00602ecd);
    /* 00602ecd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602ed0: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 00602ed6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00602edd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00602ee0: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00602ee5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602ee7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602ee9: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602eeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602eed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602eef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602ef1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602ef3: add edx, dword ptr [0xa8e470] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa8e470u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00602ef9: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 00602eff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x602f04u); f_008581c5();
    /* 00602f04: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00602f07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00602f0a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00602f0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00602f0f: je 0x6036fd */ if (fZ) goto L_006036fd;
L_00602f15:; BB(0x00602f15);
    /* 00602f15: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00602f1c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00602f23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00602f26: push dword ptr [eax + 0x3cc] */ { u32 v = R32((u32)(r_eax+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00602f2c: call 0x4e6f24 */ r_esp -= 4; W32(r_esp, 0x602f31u); f_004e6f24();
    /* 00602f31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602f32: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602f35: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00602f37: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00602f3a: push dword ptr [eax*4 + 0x9b1620] */ { u32 v = R32((u32)(r_eax*4+0x9b1620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00602f41: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00602f43: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x602f48u); f_005b7a84();
    /* 00602f48: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_00602f4f:; BB(0x00602f4f);
    /* 00602f4f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00602f52: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602f55: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 00602f5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00602f62: push 0x23600 */ { u32 v = 0x23600u; r_esp -= 4; W32(r_esp, v); }
    /* 00602f67: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x602f6cu); f_008581c5();
    /* 00602f6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00602f6d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00602f70: lea ebx, [eax + 0x23600] */ r_ebx = (u32)(r_eax+0x23600u);
    /* 00602f76: mov dword ptr [edx + 0x3e0], eax */ W32((u32)(r_edx+0x3e0u), r_eax);
    /* 00602f7c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00602f7e: jae 0x603072 */ if (!fC) goto L_00603072;
L_00602f84:; BB(0x00602f84);
    /* 00602f84: mov edx, ebx */ r_edx = r_ebx;
    /* 00602f86: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00602f88: cmp edx, 0x161c */ {  u32 a = r_edx; u32 b = 0x161cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00602f8e: jb 0x603047 */ if (fC) goto L_00603047;
L_00602f94:; BB(0x00602f94);
    /* 00602f94: lea ecx, [ebx - 0x161c] */ r_ecx = (u32)(r_ebx+0xffffe9e4u);
L_00602f9a:; BB(0x00602f9a);
    /* 00602f9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00602f9c: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00602f9e: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00602fa1: mov dword ptr [eax + 0x188], edx */ W32((u32)(r_eax+0x188u), r_edx);
    /* 00602fa7: mov dword ptr [eax + 0x2fc], edx */ W32((u32)(r_eax+0x2fcu), r_edx);
    /* 00602fad: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00602fb0: mov dword ptr [eax + 0x184], edx */ W32((u32)(r_eax+0x184u), r_edx);
    /* 00602fb6: mov dword ptr [eax + 0x2f8], edx */ W32((u32)(r_eax+0x2f8u), r_edx);
    /* 00602fbc: mov dword ptr [eax + 0x46c], edx */ W32((u32)(r_eax+0x46cu), r_edx);
    /* 00602fc2: mov dword ptr [eax + 0x480], edx */ W32((u32)(r_eax+0x480u), r_edx);
    /* 00602fc8: mov dword ptr [eax + 0x5f4], edx */ W32((u32)(r_eax+0x5f4u), r_edx);
    /* 00602fce: mov dword ptr [eax + 0x768], edx */ W32((u32)(r_eax+0x768u), r_edx);
    /* 00602fd4: mov dword ptr [eax + 0x47c], edx */ W32((u32)(r_eax+0x47cu), r_edx);
    /* 00602fda: mov dword ptr [eax + 0x5f0], edx */ W32((u32)(r_eax+0x5f0u), r_edx);
    /* 00602fe0: mov dword ptr [eax + 0x764], edx */ W32((u32)(r_eax+0x764u), r_edx);
    /* 00602fe6: mov dword ptr [eax + 0x8d8], edx */ W32((u32)(r_eax+0x8d8u), r_edx);
    /* 00602fec: mov dword ptr [eax + 0x8ec], edx */ W32((u32)(r_eax+0x8ecu), r_edx);
    /* 00602ff2: mov dword ptr [eax + 0xa60], edx */ W32((u32)(r_eax+0xa60u), r_edx);
    /* 00602ff8: mov dword ptr [eax + 0xbd4], edx */ W32((u32)(r_eax+0xbd4u), r_edx);
    /* 00602ffe: mov dword ptr [eax + 0x8e8], edx */ W32((u32)(r_eax+0x8e8u), r_edx);
    /* 00603004: mov dword ptr [eax + 0xa5c], edx */ W32((u32)(r_eax+0xa5cu), r_edx);
    /* 0060300a: mov dword ptr [eax + 0xbd0], edx */ W32((u32)(r_eax+0xbd0u), r_edx);
    /* 00603010: mov dword ptr [eax + 0xd44], edx */ W32((u32)(r_eax+0xd44u), r_edx);
    /* 00603016: mov dword ptr [eax + 0xd58], edx */ W32((u32)(r_eax+0xd58u), r_edx);
    /* 0060301c: mov dword ptr [eax + 0xecc], edx */ W32((u32)(r_eax+0xeccu), r_edx);
    /* 00603022: mov dword ptr [eax + 0x1040], edx */ W32((u32)(r_eax+0x1040u), r_edx);
    /* 00603028: mov dword ptr [eax + 0xd54], edx */ W32((u32)(r_eax+0xd54u), r_edx);
    /* 0060302e: mov dword ptr [eax + 0xec8], edx */ W32((u32)(r_eax+0xec8u), r_edx);
    /* 00603034: mov dword ptr [eax + 0x103c], edx */ W32((u32)(r_eax+0x103cu), r_edx);
    /* 0060303a: add eax, 0x11b0 */ {  u32 a = r_eax; u32 b = 0x11b0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060303f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00603041: jbe 0x602f9a */ if ((fC||fZ)) goto L_00602f9a;
L_00603047:; BB(0x00603047);
    /* 00603047: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00603049: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0060304b: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0060304e: mov dword ptr [eax + 0x188], edx */ W32((u32)(r_eax+0x188u), r_edx);
    /* 00603054: mov dword ptr [eax + 0x2fc], edx */ W32((u32)(r_eax+0x2fcu), r_edx);
    /* 0060305a: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0060305d: mov dword ptr [eax + 0x184], edx */ W32((u32)(r_eax+0x184u), r_edx);
    /* 00603063: mov dword ptr [eax + 0x2f8], edx */ W32((u32)(r_eax+0x2f8u), r_edx);
    /* 00603069: add eax, 0x46c */ {  u32 a = r_eax; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060306e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603070: jb 0x603047 */ if (fC) goto L_00603047;
L_00603072:; BB(0x00603072);
    /* 00603072: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603075: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603078: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 0060307e: call 0x60373c */ r_esp -= 4; W32(r_esp, 0x603083u); f_0060373c();
    /* 00603083: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603086: mov eax, dword ptr [edx + 0x3cc] */ r_eax = R32((u32)(r_edx+0x3ccu));
    /* 0060308c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0060308e: mov dword ptr [edx + 0x3e4], ebx */ W32((u32)(r_edx+0x3e4u), r_ebx);
    /* 00603094: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603095: call 0x603bc8 */ r_esp -= 4; W32(r_esp, 0x60309au); f_00603bc8();
    /* 0060309a: mov esi, dword ptr [0xa8e474] */ r_esi = R32((u32)(0xa8e474u));
    /* 006030a0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006030a3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006030a6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006030a9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006030ac: push dword ptr [esi + 0x430] */ { u32 v = R32((u32)(r_esi+0x430u)); r_esp -= 4; W32(r_esp, v); }
    /* 006030b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030b4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006030b6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030b8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006030c0: lea edi, [edx + edx + 0x9c2b80] */ r_edi = (u32)(r_edx+r_edx+0x9c2b80u);
    /* 006030c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006030c8: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x6030cdu); f_007aa624();
    /* 006030cd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006030d0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006030d2: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 006030d8: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 006030dc: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006030e1: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 006030e5: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 006030eb: mov byte ptr [ebx + 0x49f], 0 */ W8((u32)(r_ebx+0x49fu), 0x0u);
    /* 006030f2: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006030f5: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 006030fb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x603100u); f_008581c5();
    /* 00603100: mov edx, ebx */ r_edx = r_ebx;
    /* 00603102: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 00603107: mov dword ptr [edx + 0x42c], eax */ W32((u32)(r_edx+0x42cu), r_eax);
    /* 0060310d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x603112u); f_008581c5();
    /* 00603112: mov edx, ebx */ r_edx = r_ebx;
    /* 00603114: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 00603119: mov dword ptr [edx + 0x430], eax */ W32((u32)(r_edx+0x430u), r_eax);
    /* 0060311f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x603124u); f_008581c5();
    /* 00603124: mov edx, ebx */ r_edx = r_ebx;
    /* 00603126: push 0xe38 */ { u32 v = 0xe38u; r_esp -= 4; W32(r_esp, v); }
    /* 0060312b: mov dword ptr [edx + 0x434], eax */ W32((u32)(r_edx+0x434u), r_eax);
    /* 00603131: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x603136u); f_008581c5();
    /* 00603136: mov edx, ebx */ r_edx = r_ebx;
    /* 00603138: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0060313d: mov dword ptr [edx + 0x438], eax */ W32((u32)(r_edx+0x438u), r_eax);
    /* 00603143: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x603148u); f_008581c5();
    /* 00603148: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060314b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060314d: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 00603153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603155: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 0060315b: mov dword ptr [ecx + 0x3f4], eax */ W32((u32)(r_ecx+0x3f4u), r_eax);
    /* 00603161: call 0x605950 */ r_esp -= 4; W32(r_esp, 0x603166u); f_00605950();
    /* 00603166: mov eax, dword ptr [0xa8e478] */ r_eax = R32((u32)(0xa8e478u));
    /* 0060316b: mov dword ptr [ebx + 0x43c], 0xffffffff */ W32((u32)(r_ebx+0x43cu), 0xffffffffu);
    /* 00603175: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00603177: mov dword ptr [eax*4 + 0xa8e340], ebx */ W32((u32)(r_eax*4+0xa8e340u), r_ebx);
    /* 0060317e: mov dword ptr [ebx + 0x420], ecx */ W32((u32)(r_ebx+0x420u), r_ecx);
    /* 00603184: mov dword ptr [ebx + 0x41c], ecx */ W32((u32)(r_ebx+0x41cu), r_ecx);
    /* 0060318a: mov dword ptr [ebx + 0x418], ecx */ W32((u32)(r_ebx+0x418u), r_ecx);
    /* 00603190: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603193: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00603194: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603196: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00603198: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0060319b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060319d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060319f: mov dword ptr [0xa8e478], eax */ W32((u32)(0xa8e478u), r_eax);
    /* 006031a4: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6031a9u); f_007a61a4();
    /* 006031a9: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006031ac: jne 0x6031c8 */ if (!fZ) goto L_006031c8;
L_006031ae:; BB(0x006031ae);
    /* 006031ae: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6031b3u); f_00807d60();
    /* 006031b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006031b5: je 0x6031c8 */ if (fZ) goto L_006031c8;
L_006031b7:; BB(0x006031b7);
    /* 006031b7: mov eax, ebx */ r_eax = r_ebx;
    /* 006031b9: mov edx, dword ptr [eax + 0x43c] */ r_edx = R32((u32)(r_eax+0x43cu));
    /* 006031bf: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006031c2: je 0x603707 */ if (fZ) goto L_00603707;
L_006031c8:; BB(0x006031c8);
    /* 006031c8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006031cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006031cd: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006031cf: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x6031d5u); call_ind(t); }
    /* 006031d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006031d8: mov dword ptr [eax + 0x3c8], 2 */ W32((u32)(r_eax+0x3c8u), 0x2u);
    /* 006031e2: jmp 0x602ead */ goto L_00602ead;
L_006031e7:; BB(0x006031e7);
    /* 006031e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006031e9: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006031eb: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 006031ee: mov dword ptr [eax + 0x188], edx */ W32((u32)(r_eax+0x188u), r_edx);
    /* 006031f4: mov dword ptr [eax + 0x2fc], edx */ W32((u32)(r_eax+0x2fcu), r_edx);
    /* 006031fa: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 006031fd: mov dword ptr [eax + 0x184], edx */ W32((u32)(r_eax+0x184u), r_edx);
    /* 00603203: mov dword ptr [eax + 0x2f8], edx */ W32((u32)(r_eax+0x2f8u), r_edx);
    /* 00603209: add eax, 0x46c */ {  u32 a = r_eax; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060320e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603210: jb 0x6031e7 */ if (fC) goto L_006031e7;
L_00603212:; BB(0x00603212);
    /* 00603212: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603215: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603217: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00603218: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 0060321e: call 0x60373c */ r_esp -= 4; W32(r_esp, 0x603223u); f_0060373c();
    /* 00603223: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603226: mov eax, dword ptr [edx + 0x3cc] */ r_eax = R32((u32)(r_edx+0x3ccu));
    /* 0060322c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0060322e: mov dword ptr [edx + 0x3e4], ebx */ W32((u32)(r_edx+0x3e4u), r_ebx);
    /* 00603234: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603235: call 0x603bc8 */ r_esp -= 4; W32(r_esp, 0x60323au); f_00603bc8();
    /* 0060323a: mov esi, dword ptr [0xa8e474] */ r_esi = R32((u32)(0xa8e474u));
    /* 00603240: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603243: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00603246: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00603249: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060324b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060324c: push dword ptr [esi + 0x430] */ { u32 v = R32((u32)(r_esi+0x430u)); r_esp -= 4; W32(r_esp, v); }
    /* 00603252: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603254: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00603256: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603258: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060325a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060325c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060325e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603260: lea edi, [edx + edx + 0x9c2b80] */ r_edi = (u32)(r_edx+r_edx+0x9c2b80u);
    /* 00603267: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00603268: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x60326du); f_007aa624();
    /* 0060326d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603270: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00603272: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 00603278: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 0060327c: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00603281: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 00603285: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0060328b: mov byte ptr [ebx + 0x49f], 0 */ W8((u32)(r_ebx+0x49fu), 0x0u);
    /* 00603292: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00603295: mov dword ptr [ebx + 0xb0], ecx */ W32((u32)(r_ebx+0xb0u), r_ecx);
    /* 0060329b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6032a0u); f_008581c5();
    /* 006032a0: mov edx, ebx */ r_edx = r_ebx;
    /* 006032a2: push 0x118 */ { u32 v = 0x118u; r_esp -= 4; W32(r_esp, v); }
    /* 006032a7: mov dword ptr [edx + 0x42c], eax */ W32((u32)(r_edx+0x42cu), r_eax);
    /* 006032ad: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6032b2u); f_008581c5();
    /* 006032b2: mov edx, ebx */ r_edx = r_ebx;
    /* 006032b4: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 006032b9: mov dword ptr [edx + 0x430], eax */ W32((u32)(r_edx+0x430u), r_eax);
    /* 006032bf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6032c4u); f_008581c5();
    /* 006032c4: mov edx, ebx */ r_edx = r_ebx;
    /* 006032c6: push 0xe38 */ { u32 v = 0xe38u; r_esp -= 4; W32(r_esp, v); }
    /* 006032cb: mov dword ptr [edx + 0x434], eax */ W32((u32)(r_edx+0x434u), r_eax);
    /* 006032d1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6032d6u); f_008581c5();
    /* 006032d6: mov edx, ebx */ r_edx = r_ebx;
    /* 006032d8: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 006032dd: mov dword ptr [edx + 0x438], eax */ W32((u32)(r_edx+0x438u), r_eax);
    /* 006032e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6032e8u); f_008581c5();
    /* 006032e8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006032eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006032ed: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 006032f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006032f5: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 006032fb: mov dword ptr [ecx + 0x3f4], eax */ W32((u32)(r_ecx+0x3f4u), r_eax);
    /* 00603301: call 0x605950 */ r_esp -= 4; W32(r_esp, 0x603306u); f_00605950();
    /* 00603306: mov eax, dword ptr [0xa8e478] */ r_eax = R32((u32)(0xa8e478u));
    /* 0060330b: mov dword ptr [ebx + 0x43c], 0xffffffff */ W32((u32)(r_ebx+0x43cu), 0xffffffffu);
    /* 00603315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00603317: mov dword ptr [eax*4 + 0xa8e340], ebx */ W32((u32)(r_eax*4+0xa8e340u), r_ebx);
    /* 0060331e: mov dword ptr [ebx + 0x420], ecx */ W32((u32)(r_ebx+0x420u), r_ecx);
    /* 00603324: mov dword ptr [ebx + 0x41c], ecx */ W32((u32)(r_ebx+0x41cu), r_ecx);
    /* 0060332a: mov dword ptr [ebx + 0x418], ecx */ W32((u32)(r_ebx+0x418u), r_ecx);
    /* 00603330: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603333: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00603334: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603336: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00603338: and eax, 0x3f */ {  u32 a = r_eax; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0060333b: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060333d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0060333f: mov dword ptr [0xa8e478], eax */ W32((u32)(0xa8e478u), r_eax);
    /* 00603344: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x603349u); f_007a61a4();
    /* 00603349: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060334c: jne 0x603364 */ if (!fZ) goto L_00603364;
L_0060334e:; BB(0x0060334e);
    /* 0060334e: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x603353u); f_00807d60();
    /* 00603353: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603355: je 0x603364 */ if (fZ) goto L_00603364;
L_00603357:; BB(0x00603357);
    /* 00603357: mov eax, ebx */ r_eax = r_ebx;
    /* 00603359: mov edx, dword ptr [eax + 0x43c] */ r_edx = R32((u32)(r_eax+0x43cu));
    /* 0060335f: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603362: je 0x60338d */ if (fZ) goto L_0060338d;
L_00603364:; BB(0x00603364);
    /* 00603364: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603367: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00603369: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060336b: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x603371u); call_ind(t); }
    /* 00603371: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00603374: mov dword ptr [eax + 0x3c8], 2 */ W32((u32)(r_eax+0x3c8u), 0x2u);
    /* 0060337e: jmp 0x602cbb */ goto L_00602cbb;
L_00603383:; BB(0x00603383);
    /* 00603383: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603385: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00603388: jmp 0x602da7 */ goto L_00602da7;
L_0060338d:; BB(0x0060338d);
    /* 0060338d: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00603393: mov ecx, dword ptr [edx*4 + 0x9c3e58] */ r_ecx = R32((u32)(r_edx*4+0x9c3e58u));
    /* 0060339a: mov ebx, dword ptr [eax + 0x3c0] */ r_ebx = R32((u32)(r_eax+0x3c0u));
    /* 006033a0: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 006033a3: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006033a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006033a7: call 0x5d7868 */ r_esp -= 4; W32(r_esp, 0x6033acu); f_005d7868();
    /* 006033ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006033ad: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006033b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006033b2: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 006033b8: call 0x605304 */ r_esp -= 4; W32(r_esp, 0x6033bdu); f_00605304();
    /* 006033bd: jmp 0x603364 */ goto L_00603364;
L_006033bf:; BB(0x006033bf);
    /* 006033bf: mov ecx, eax */ r_ecx = r_eax;
    /* 006033c1: call 0x605544 */ r_esp -= 4; W32(r_esp, 0x6033c6u); f_00605544();
    /* 006033c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033c9: mov eax, dword ptr [edx + 0x3cc] */ r_eax = R32((u32)(r_edx+0x3ccu));
    /* 006033cf: mov edx, dword ptr [edx + 0x418] */ r_edx = R32((u32)(r_edx+0x418u));
    /* 006033d5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006033d8: movsx eax, word ptr [eax + 0x40] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x40u));
    /* 006033dc: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 006033df: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006033e2: jne 0x6033f1 */ if (!fZ) goto L_006033f1;
L_006033e4:; BB(0x006033e4);
    /* 006033e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033e7: mov edx, dword ptr [edx + eax*8 + 4] */ r_edx = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 006033eb: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
L_006033f1:; BB(0x006033f1);
    /* 006033f1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006033f4: mov edx, dword ptr [edx + 0x41c] */ r_edx = R32((u32)(r_edx+0x41cu));
    /* 006033fa: mov ecx, dword ptr [edx + eax*8] */ r_ecx = R32((u32)(r_edx+r_eax*8));
    /* 006033fd: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603400: jne 0x60340f */ if (!fZ) goto L_0060340f;
L_00603402:; BB(0x00603402);
    /* 00603402: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00603406: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603409: mov dword ptr [edx + 0x3d8], eax */ W32((u32)(r_edx+0x3d8u), r_eax);
L_0060340f:; BB(0x0060340f);
    /* 0060340f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00603412: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603415: movsx ebx, word ptr [eax + 0x3e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 00603419: mov eax, dword ptr [edx + 0x420] */ r_eax = R32((u32)(r_edx+0x420u));
    /* 0060341f: mov ecx, dword ptr [eax + ebx*8] */ r_ecx = R32((u32)(r_eax+r_ebx*8));
    /* 00603422: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00603425: jne 0x603431 */ if (!fZ) goto L_00603431;
L_00603427:; BB(0x00603427);
    /* 00603427: mov eax, dword ptr [eax + ebx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x4u));
    /* 0060342b: mov dword ptr [edx + 0x3dc], eax */ W32((u32)(r_edx+0x3dcu), r_eax);
L_00603431:; BB(0x00603431);
    /* 00603431: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00603434: mov eax, dword ptr [edx + 0x3e8] */ r_eax = R32((u32)(r_edx+0x3e8u));
    /* 0060343a: mov ebx, dword ptr [edx + 0x3ec] */ r_ebx = R32((u32)(r_edx+0x3ecu));
    /* 00603440: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00603443: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00603446: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x60344bu); f_005b9d58();
    /* 0060344b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060344e: mov eax, ebx */ r_eax = r_ebx;
    /* 00603450: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00603453: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00603456: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603458: mov ecx, dword ptr [eax - 0x20] */ r_ecx = R32((u32)(r_eax+0xffffffe0u));
    /* 0060345b: mov ebx, dword ptr [eax - 0x1c] */ r_ebx = R32((u32)(r_eax+0xffffffe4u));
    /* 0060345e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00603461: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00603464: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00603466: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00603468: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0060346a: jbe 0x6034fa */ if ((fC||fZ)) goto L_006034fa;
L_00603470:; BB(0x00603470);
    /* 00603470: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00603473: jb 0x6034d1 */ if (fC) goto L_006034d1;
L_00603475:; BB(0x00603475);
    /* 00603475: lea esi, [ebx - 5] */ r_esi = (u32)(r_ebx+0xfffffffbu);
    /* 00603478: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
L_0060347b:; BB(0x0060347b);
    /* 0060347b: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 0060347e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603480: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603482: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603484: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00603487: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060348a: add dword ptr [ebx], edx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0060348c: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 00603490: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00603492: mov esi, dword ptr [ebp - 0x5c] */ r_esi = R32((u32)(r_ebp+0xffffffa4u));
    /* 00603495: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00603497: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00603499: add dword ptr [edi], esi */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0060349b: mov edx, dword ptr [ebp - 0x5c] */ r_edx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0060349e: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 006034a2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006034a4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006034a6: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006034a8: add dword ptr [ebx], edx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006034aa: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 006034ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006034b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006034b2: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006034b4: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006034b7: add dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006034b9: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006034bc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006034bf: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006034c1: ja 0x6034cb */ if ((!fC&&!fZ)) goto L_006034cb;
L_006034c3:; BB(0x006034c3);
    /* 006034c3: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006034c6: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006034c9: jmp 0x60347b */ goto L_0060347b;
L_006034cb:; BB(0x006034cb);
    /* 006034cb: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006034ce: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
L_006034d1:; BB(0x006034d1);
    /* 006034d1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006034d4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006034d7: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 006034da: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006034dc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006034de: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006034e0: add dword ptr [edx], esi */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006034e2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006034e5: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006034e8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006034ea: jae 0x6034f4 */ if (!fC) goto L_006034f4;
L_006034ec:; BB(0x006034ec);
    /* 006034ec: mov ebx, dword ptr [ebp - 0x5c] */ r_ebx = R32((u32)(r_ebp+0xffffffa4u));
    /* 006034ef: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006034f2: jmp 0x6034d1 */ goto L_006034d1;
L_006034f4:; BB(0x006034f4);
    /* 006034f4: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 006034f7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006034fa:; BB(0x006034fa);
    /* 006034fa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006034fd: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603500: add edx, dword ptr [eax - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603503: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00603506: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00603509: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0060350c: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 00603512: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00603519: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 0060351c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x603521u); f_008171e8();
    /* 00603521: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00603524: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603527: mov ebx, dword ptr [0xa8e440] */ r_ebx = R32((u32)(0xa8e440u));
    /* 0060352d: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00603530: mov dword ptr [ecx + 0x3f4], eax */ W32((u32)(r_ecx+0x3f4u), r_eax);
    /* 00603536: mov eax, dword ptr [ecx + 0x434] */ r_eax = R32((u32)(r_ecx+0x434u));
    /* 0060353c: mov ecx, dword ptr [0xa8e444] */ r_ecx = R32((u32)(0xa8e444u));
    /* 00603542: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00603545: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00603547:; BB(0x00603547);
    /* 00603547: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00603549: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0060354c: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 0060354f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00603552: mov dword ptr [eax + 0x10], ebx */ W32((u32)(r_eax+0x10u), r_ebx);
    /* 00603555: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00603558: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 0060355b: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0060355e: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00603561: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00603564: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603567: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060356a: cmp edx, 0x41 */ {  u32 a = r_edx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060356d: jl 0x603547 */ if ((fS!=fO)) goto L_00603547;
L_0060356f:; BB(0x0060356f);
    /* 0060356f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00603571:; BB(0x00603571);
    /* 00603571: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00603574: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00603577: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603579: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0060357b: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0060357e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603580: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603582: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603584: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603586: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603588: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0060358a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0060358c: add edx, dword ptr [edi + 0x438] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x438u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00603592:; BB(0x00603592);
    /* 00603592: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00603594: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00603597: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 0060359a: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0060359d: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 006035a0: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 006035a3: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 006035a6: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 006035a9: mov dword ptr [edx + 0x20], ebx */ W32((u32)(r_edx+0x20u), r_ebx);
    /* 006035ac: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 006035af: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035b2: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006035b5: cmp esi, 0x41 */ {  u32 a = r_esi; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006035b8: jl 0x603592 */ if ((fS!=fO)) goto L_00603592;
L_006035ba:; BB(0x006035ba);
    /* 006035ba: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006035bd: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006035c0: jl 0x603571 */ if ((fS!=fO)) goto L_00603571;
L_006035c2:; BB(0x006035c2);
    /* 006035c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006035c5: push dword ptr [eax + 0x434] */ { u32 v = R32((u32)(r_eax+0x434u)); r_esp -= 4; W32(r_esp, v); }
    /* 006035cb: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006035ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006035cf: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x6035d4u); f_007aaed0();
    /* 006035d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006035d7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006035d9:; BB(0x006035d9);
    /* 006035d9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006035dc: mov eax, dword ptr [ecx + 0x3f4] */ r_eax = R32((u32)(r_ecx+0x3f4u));
    /* 006035e2: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 006035e4: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006035e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006035e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006035eb: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006035ee: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035f0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035f2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035f4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035f6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035f8: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006035fa: add esi, dword ptr [ecx + 0x438] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x438u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00603600: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00603601: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00603604: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x603609u); f_007aaed0();
    /* 00603609: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060360c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0060360f: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00603612: jl 0x6035d9 */ if ((fS!=fO)) goto L_006035d9;
L_00603614:; BB(0x00603614);
    /* 00603614: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00603617: mov ebx, dword ptr [0xa8e440] */ r_ebx = R32((u32)(0xa8e440u));
    /* 0060361d: mov esi, dword ptr [ecx + 0x3dc] */ r_esi = R32((u32)(r_ecx+0x3dcu));
    /* 00603623: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00603629: mov ecx, dword ptr [0xa8e444] */ r_ecx = R32((u32)(0xa8e444u));
    /* 0060362f: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00603631: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00603634: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 00603637: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0060363a: mov dword ptr [eax + 0x10], ebx */ W32((u32)(r_eax+0x10u), r_ebx);
    /* 0060363d: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00603640: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 00603643: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00603646: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00603649: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0060364c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0060364e:; BB(0x0060364e);
    /* 0060364e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00603651: mov edi, dword ptr [edi + 0x430] */ r_edi = R32((u32)(r_edi+0x430u));
    /* 00603657: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0060365a: mov dword ptr [edi + eax*8], ebx */ W32((u32)(r_edi+r_eax*8), r_ebx);
    /* 0060365d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00603660: mov dword ptr [edi + eax*8 + 4], ecx */ W32((u32)(r_edi+r_eax*8+0x4u), r_ecx);
    /* 00603664: mov dword ptr [edi + eax*8 + 8], ebx */ W32((u32)(r_edi+r_eax*8+0x8u), r_ebx);
    /* 00603668: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060366b: mov dword ptr [edi + eax*8 + 0xc], ecx */ W32((u32)(r_edi+r_eax*8+0xcu), r_ecx);
    /* 0060366f: mov dword ptr [edi + eax*8 + 0x10], ebx */ W32((u32)(r_edi+r_eax*8+0x10u), r_ebx);
    /* 00603673: mov dword ptr [edi + eax*8 + 0x14], ecx */ W32((u32)(r_edi+r_eax*8+0x14u), r_ecx);
    /* 00603677: mov dword ptr [edi + eax*8 + 0x18], ebx */ W32((u32)(r_edi+r_eax*8+0x18u), r_ebx);
    /* 0060367b: mov dword ptr [edi + eax*8 + 0x1c], ecx */ W32((u32)(r_edi+r_eax*8+0x1cu), r_ecx);
    /* 0060367f: mov dword ptr [edi + eax*8 + 0x20], ebx */ W32((u32)(r_edi+r_eax*8+0x20u), r_ebx);
    /* 00603683: mov dword ptr [edi + eax*8 + 0x24], ecx */ W32((u32)(r_edi+r_eax*8+0x24u), r_ecx);
    /* 00603687: jl 0x60364e */ if ((fS!=fO)) goto L_0060364e;
L_00603689:; BB(0x00603689);
    /* 00603689: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060368c: push dword ptr [eax + 0x42c] */ { u32 v = R32((u32)(r_eax+0x42cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00603692: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00603693: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x603698u); f_007aaed0();
    /* 00603698: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060369b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0060369e: movsx esi, word ptr [eax + 0x3e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 006036a2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006036a4:; BB(0x006036a4);
    /* 006036a4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006036a7: mov eax, dword ptr [edx + 0x3f4] */ r_eax = R32((u32)(r_edx+0x3f4u));
    /* 006036ad: mov edi, dword ptr [eax + esi*4 + 4] */ r_edi = R32((u32)(r_eax+r_esi*4+0x4u));
    /* 006036b1: lea ecx, [ebx + ebx*4] */ r_ecx = (u32)(r_ebx+r_ebx*4);
    /* 006036b4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006036b6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006036b8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006036ba: add ecx, dword ptr [edx + 0x430] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x430u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006036c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006036c1: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006036c4: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x6036c9u); f_007aaed0();
    /* 006036c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006036cc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006036cf: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006036d2: jl 0x6036a4 */ if ((fS!=fO)) goto L_006036a4;
L_006036d4:; BB(0x006036d4);
    /* 006036d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006036d7: mov eax, dword ptr [ecx + 0x3cc] */ r_eax = R32((u32)(r_ecx+0x3ccu));
    /* 006036dd: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006036e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006036e1: call 0x603ce0 */ r_esp -= 4; W32(r_esp, 0x6036e6u); f_00603ce0();
    /* 006036e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006036e9: mov dword ptr [eax + 0x3c8], 3 */ W32((u32)(r_eax+0x3c8u), 0x3u);
    /* 006036f3: call 0x5b90bc */ r_esp -= 4; W32(r_esp, 0x6036f8u); f_005b90bc();
    /* 006036f8: jmp 0x602ead */ goto L_00602ead;
L_006036fd:; BB(0x006036fd);
    /* 006036fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006036ff: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00603702: jmp 0x602f4f */ goto L_00602f4f;
L_00603707:; BB(0x00603707);
    /* 00603707: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0060370d: mov ecx, dword ptr [edx*4 + 0x9c3e58] */ r_ecx = R32((u32)(r_edx*4+0x9c3e58u));
    /* 00603714: mov ebx, dword ptr [eax + 0x3c0] */ r_ebx = R32((u32)(r_eax+0x3c0u));
    /* 0060371a: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 0060371d: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00603720: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00603721: call 0x5d7868 */ r_esp -= 4; W32(r_esp, 0x603726u); f_005d7868();
    /* 00603726: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00603727: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060372a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060372b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060372c: mov dword ptr [ecx + 0x43c], eax */ W32((u32)(r_ecx+0x43cu), r_eax);
    /* 00603732: call 0x605304 */ r_esp -= 4; W32(r_esp, 0x603737u); f_00605304();
    /* 00603737: jmp 0x6031c8 */ goto L_006031c8;
}

