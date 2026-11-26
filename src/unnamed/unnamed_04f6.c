#include "protos.h"

void f_004f6160(void) /* sub_4F6160 */
{
    FN_ENTER(0x004f6160);
    /* 004f6160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6161: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6165: push 0x8d30b4 */ { u32 v = 0x8d30b4u; r_esp -= 4; W32(r_esp, v); }
    /* 004f616a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f6170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f6178: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f617b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f617e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004f6181: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004f6184: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004f6187: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f6189: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004f618c:; BB(0x004f618c);
    /* 004f618c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004f6193: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6195: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f619au); f_005caba4();
    /* 004f619a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f619b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f619e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f61a0: je 0x4f61c8 */ if (fZ) goto L_004f61c8;
L_004f61a2:; BB(0x004f61a2);
    /* 004f61a2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004f61a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f61b0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f61b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f61b4: mov ecx, eax */ r_ecx = r_eax;
    /* 004f61b6: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f61bc: call 0x4f5f50 */ r_esp -= 4; W32(r_esp, 0x4f61c1u); f_004f5f50();
    /* 004f61c1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004f61c8:; BB(0x004f61c8);
    /* 004f61c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f61cf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f61d2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f61d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f61d8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f61db: jl 0x4f618c */ if ((fS!=fO)) goto L_004f618c;
L_004f61dd:; BB(0x004f61dd);
    /* 004f61dd: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f61e0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f61e3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f61e6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f61e9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f61f0: mov esp, ebp */ r_esp = r_ebp;
    /* 004f61f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f61f3: ret  */ FN_RET(0x004f6160); r_esp += 4; return;
}

void f_004f61f4(void) /* sub_4F61F4 */
{
    FN_ENTER(0x004f61f4);
    /* 004f61f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f61f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f61f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f61f9: call 0x4f6218 */ r_esp -= 4; W32(r_esp, 0x4f61feu); f_004f6218();
    /* 004f61fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f6202: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6204: jne 0x4f620a */ if (!fZ) goto L_004f620a;
L_004f6206:; BB(0x004f6206);
    /* 004f6206: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f6207: ret 4 */ FN_RET(0x004f61f4); r_esp += 8; return;
L_004f620a:; BB(0x004f620a);
    /* 004f620a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f620b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f6210u); f_005c2f74();
    /* 004f6210: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6211: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f6212: ret 4 */ FN_RET(0x004f61f4); r_esp += 8; return;
}

void f_004f6218(void) /* sub_4F6218 */
{
    FN_ENTER(0x004f6218);
    /* 004f6218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6219: mov ebp, esp */ r_ebp = r_esp;
    /* 004f621b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f621d: push 0x8d30d0 */ { u32 v = 0x8d30d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f6228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f6230: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6233: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f6236: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f6239: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f623c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f623f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f6242: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f6245: mov dword ptr [ecx], 0xafdee0 */ W32((u32)(r_ecx), 0xafdee0u);
    /* 004f624b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f6252: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f6257u); f_004f4710();
    /* 004f6257: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f625a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f6261: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6264: ret  */ FN_RET(0x004f6218); r_esp += 4; return;
}

void f_004f6268(void) /* sub_4F6268 */
{
    FN_ENTER(0x004f6268);
    /* 004f6268: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6269: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f626b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f626f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6273: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6275: call 0x4f4760 */ r_esp -= 4; W32(r_esp, 0x4f627au); f_004f4760();
    /* 004f627a: mov dword ptr [ebx], 0xafdee0 */ W32((u32)(r_ebx), 0xafdee0u);
    /* 004f6280: mov edx, dword ptr [0x9b91bc] */ r_edx = R32((u32)(0x9b91bcu));
    /* 004f6286: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004f6289: mov eax, ebx */ r_eax = r_ebx;
    /* 004f628b: mov dword ptr [ebx + 0x28], 0x3d888889 */ W32((u32)(r_ebx+0x28u), 0x3d888889u);
    /* 004f6292: mov dword ptr [ebx + 0x2c], 0xbd888889 */ W32((u32)(r_ebx+0x2cu), 0xbd888889u);
    /* 004f6299: mov dword ptr [ebx + 0x34], 0x3d888889 */ W32((u32)(r_ebx+0x34u), 0x3d888889u);
    /* 004f62a0: mov dword ptr [ebx + 0x38], 0xbd888889 */ W32((u32)(r_ebx+0x38u), 0xbd888889u);
    /* 004f62a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f62a8: ret 8 */ FN_RET(0x004f6268); r_esp += 12; return;
}

void f_004f62ac(void) /* sub_4F62AC */
{
    FN_ENTER(0x004f62ac);
    /* 004f62ac: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f62af: fld dword ptr [0x91e5e0] */ FPUSH(R_F32((u32)(0x91e5e0u)));
    /* 004f62b5: fld dword ptr [0x91e5dc] */ FPUSH(R_F32((u32)(0x91e5dcu)));
    /* 004f62bb: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004f62be: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f62c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f62c2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f62c4: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004f62c8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f62c9: jae 0x4f62db */ if (!fC) goto L_004f62db;
L_004f62cb:; BB(0x004f62cb);
    /* 004f62cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f62cd: fadd dword ptr [0x91e5d8] */ ST(0) = ST(0) + R_F32((u32)(0x91e5d8u));
    /* 004f62d3: fdivr st(1), st(0) */ ST(1) = ST(0) / ST(1);
    /* 004f62d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f62d7: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
L_004f62db:; BB(0x004f62db);
    /* 004f62db: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f62dd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f62df: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f62e3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f62e7: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004f62eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f62ef: mov dword ptr [esp + 0x14], 0x43998000 */ W32((u32)(r_esp+0x14u), 0x43998000u);
    /* 004f62f7: mov dword ptr [esp + 0x18], 0x42c80000 */ W32((u32)(r_esp+0x18u), 0x42c80000u);
    /* 004f62ff: mov dword ptr [esp], 0x82 */ W32((u32)(r_esp), 0x82u);
    /* 004f6306: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f630e: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f6313u); f_004e9ef8();
    /* 004f6313: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f6317: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f631b: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004f631f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f6323: mov dword ptr [esp + 0x1c], 0x440fc000 */ W32((u32)(r_esp+0x1cu), 0x440fc000u);
    /* 004f632b: mov dword ptr [esp + 0x20], 0x42c80000 */ W32((u32)(r_esp+0x20u), 0x42c80000u);
    /* 004f6333: mov dword ptr [esp], 0x84 */ W32((u32)(r_esp), 0x84u);
    /* 004f633a: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f6342: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f6347u); f_004e9ef8();
    /* 004f6347: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f634b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f634f: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004f6353: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f6357: mov dword ptr [esp + 0x24], 0x43998000 */ W32((u32)(r_esp+0x24u), 0x43998000u);
    /* 004f635f: mov dword ptr [esp + 0x28], 0x43c60000 */ W32((u32)(r_esp+0x28u), 0x43c60000u);
    /* 004f6367: mov dword ptr [esp], 0x88 */ W32((u32)(r_esp), 0x88u);
    /* 004f636e: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f6376: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f637bu); f_004e9ef8();
    /* 004f637b: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f637f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f6383: lea eax, [esp + 0x2c] */ r_eax = (u32)(r_esp+0x2cu);
    /* 004f6387: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f638b: mov dword ptr [esp + 0x2c], 0x440fc000 */ W32((u32)(r_esp+0x2cu), 0x440fc000u);
    /* 004f6393: mov dword ptr [esp + 0x30], 0x43c60000 */ W32((u32)(r_esp+0x30u), 0x43c60000u);
    /* 004f639b: mov dword ptr [esp], 0x8a */ W32((u32)(r_esp), 0x8au);
    /* 004f63a2: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f63aa: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f63afu); f_004e9ef8();
    /* 004f63af: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f63b3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f63b7: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 004f63bb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f63bf: mov dword ptr [esp + 0x38], 0x3f800000 */ W32((u32)(r_esp+0x38u), 0x3f800000u);
    /* 004f63c7: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004f63cb: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f63cf: mov dword ptr [esp + 0x34], 0x40ec0000 */ W32((u32)(r_esp+0x34u), 0x40ec0000u);
    /* 004f63d7: mov dword ptr [esp + 0x3c], 0x43a98000 */ W32((u32)(r_esp+0x3cu), 0x43a98000u);
    /* 004f63df: mov dword ptr [esp + 0x40], 0x42c80000 */ W32((u32)(r_esp+0x40u), 0x42c80000u);
    /* 004f63e7: mov dword ptr [esp], 0x83 */ W32((u32)(r_esp), 0x83u);
    /* 004f63ee: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f63f6: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f63fbu); f_004e9d1c();
    /* 004f63fb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f63ff: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f6403: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 004f6407: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f640b: mov dword ptr [esp + 0x44], 0x43a98000 */ W32((u32)(r_esp+0x44u), 0x43a98000u);
    /* 004f6413: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004f6417: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f641b: mov dword ptr [esp + 0x48], 0x43c60000 */ W32((u32)(r_esp+0x48u), 0x43c60000u);
    /* 004f6423: mov dword ptr [esp], 0x89 */ W32((u32)(r_esp), 0x89u);
    /* 004f642a: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f6432: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f6437u); f_004e9d1c();
    /* 004f6437: fld dword ptr [0x91e5c0] */ FPUSH(R_F32((u32)(0x91e5c0u)));
    /* 004f643d: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
L_004f6441:; BB(0x004f6441);
    /* 004f6441: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004f6445: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f6449: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f644b: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004f644f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f6453: mov dword ptr [esp + 0x4c], 0x43998000 */ W32((u32)(r_esp+0x4cu), 0x43998000u);
    /* 004f645b: mov dword ptr [esp], 0x85 */ W32((u32)(r_esp), 0x85u);
    /* 004f6462: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 004f6466: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f646a: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f6472: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f6477u); f_004e9ef8();
    /* 004f6477: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004f647b: fadd dword ptr [0x91e5a8] */ ST(0) = ST(0) + R_F32((u32)(0x91e5a8u));
    /* 004f6481: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f6485: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f6489: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 004f648d: mov dword ptr [esp], 0x86 */ W32((u32)(r_esp), 0x86u);
    /* 004f6494: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f649c: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 004f64a0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f64a4: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 004f64a8: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f64ac: call 0x4e9d1c */ r_esp -= 4; W32(r_esp, 0x4f64b1u); f_004e9d1c();
    /* 004f64b1: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f64b5: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004f64b9: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 004f64bd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f64c1: mov dword ptr [esp + 0x4c], 0x440fc000 */ W32((u32)(r_esp+0x4cu), 0x440fc000u);
    /* 004f64c9: mov dword ptr [esp], 0x87 */ W32((u32)(r_esp), 0x87u);
    /* 004f64d0: mov dword ptr [esp + 4], 0xc0580000 */ W32((u32)(r_esp+0x4u), 0xc0580000u);
    /* 004f64d8: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4f64ddu); f_004e9ef8();
    /* 004f64dd: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 004f64e1: fadd dword ptr [0x91e5a4] */ ST(0) = ST(0) + R_F32((u32)(0x91e5a4u));
    /* 004f64e7: fcom dword ptr [0x91e5cc] */ fx_compare(ST(0), R_F32((u32)(0x91e5ccu))); 
    /* 004f64ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f64ef: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 004f64f3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f64f4: jbe 0x4f6441 */ if ((fC||fZ)) goto L_004f6441;
L_004f64fa:; BB(0x004f64fa);
    /* 004f64fa: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f64fd: ret  */ FN_RET(0x004f62ac); r_esp += 4; return;
}

void f_004f6370(void)
{
    FN_ENTER(0x004f6370);
    /* 004f6370: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f6372: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f6374: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 004f6375: shr al, 0x7d */ { u32 c = (29u) & 31; u32 a = (u8)r_eax; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 004f6378: cmp edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;   }
    UNSUP(0x004f637a, "falls out of decoded code");
}

void f_004f6500(void) /* sub_4F6500 */
{
    FN_ENTER(0x004f6500);
    /* 004f6500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6501: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6503: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6505: push 0x8d30f8 */ { u32 v = 0x8d30f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f650a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f6510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6511: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f6518: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f651b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f651e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f6521: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f6524: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f6527: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6529: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f6530: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f6535u); f_005caba4();
    /* 004f6535: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6536: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f6539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f653b: je 0x4f6561 */ if (fZ) goto L_004f6561;
L_004f653d:; BB(0x004f653d);
    /* 004f653d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f6544: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f654b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f654d: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6553: mov ecx, eax */ r_ecx = r_eax;
    /* 004f6555: call 0x4f6268 */ r_esp -= 4; W32(r_esp, 0x4f655au); f_004f6268();
    /* 004f655a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f6561:; BB(0x004f6561);
    /* 004f6561: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f6564: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f656b: mov esp, ebp */ r_esp = r_ebp;
    /* 004f656d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f656e: ret  */ FN_RET(0x004f6500); r_esp += 4; return;
}

void f_004f6570(void) /* sub_4F6570 */
{
    FN_ENTER(0x004f6570);
    /* 004f6570: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6571: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f6573: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6575: call 0x4f6594 */ r_esp -= 4; W32(r_esp, 0x4f657au); f_004f6594();
    /* 004f657a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f657e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6580: jne 0x4f6586 */ if (!fZ) goto L_004f6586;
L_004f6582:; BB(0x004f6582);
    /* 004f6582: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f6583: ret 4 */ FN_RET(0x004f6570); r_esp += 8; return;
L_004f6586:; BB(0x004f6586);
    /* 004f6586: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6587: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f658cu); f_005c2f74();
    /* 004f658c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f658d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f658e: ret 4 */ FN_RET(0x004f6570); r_esp += 8; return;
}

void f_004f6594(void) /* sub_4F6594 */
{
    FN_ENTER(0x004f6594);
    /* 004f6594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6595: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6597: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6599: push 0x8d3114 */ { u32 v = 0x8d3114u; r_esp -= 4; W32(r_esp, v); }
    /* 004f659e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f65a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f65a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f65ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f65af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f65b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f65b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f65b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f65bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f65be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f65c1: mov dword ptr [ecx], 0xafdf48 */ W32((u32)(r_ecx), 0xafdf48u);
    /* 004f65c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f65ce: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f65d3u); f_004f4710();
    /* 004f65d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f65d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f65dd: mov esp, ebp */ r_esp = r_ebp;
    /* 004f65df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f65e0: ret  */ FN_RET(0x004f6594); r_esp += 4; return;
}

void f_004f65e4(void) /* sub_4F65E4 */
{
    FN_ENTER(0x004f65e4);
    /* 004f65e4: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f65e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f65eb: jne 0x4f660a */ if (!fZ) goto L_004f660a;
L_004f65ed:; BB(0x004f65ed);
    /* 004f65ed: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f65f0: mov edx, eax */ r_edx = r_eax;
    /* 004f65f2: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f65f4: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f65f7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f65f9: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f65fc: cmp edx, dword ptr [0x9b8d90] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9b8d90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6602: jne 0x4f6614 */ if (!fZ) goto L_004f6614;
L_004f6604:; BB(0x004f6604);
    /* 004f6604: mov eax, 1 */ r_eax = 0x1u;
    /* 004f6609: ret  */ FN_RET(0x004f65e4); r_esp += 4; return;
L_004f660a:; BB(0x004f660a);
    /* 004f660a: mov eax, dword ptr [0x9b8d94] */ r_eax = R32((u32)(0x9b8d94u));
    /* 004f660f: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6612: je 0x4f6604 */ if (fZ) goto L_004f6604;
L_004f6614:; BB(0x004f6614);
    /* 004f6614: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6616: ret  */ FN_RET(0x004f65e4); r_esp += 4; return;
}

void f_004f6600(void)
{
    FN_ENTER(0x004f6600);
    /* 004f6600: wait  */ ;
    /* 004f6601: add byte ptr [ebp + 0x10], dh */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004f6604: mov eax, 1 */ r_eax = 0x1u;
    /* 004f6609: ret  */ FN_RET(0x004f6600); r_esp += 4; return;
}

void f_004f6618(void) /* sub_4F6618 */
{
    FN_ENTER(0x004f6618);
    /* 004f6618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6619: mov edi, ecx */ r_edi = r_ecx;
    /* 004f661b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f661f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6623: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6625: call 0x4f4760 */ r_esp -= 4; W32(r_esp, 0x4f662au); f_004f4760();
    /* 004f662a: movzx eax, byte ptr [0xa726e0] */ r_eax = (u32)R8((u32)(0xa726e0u));
    /* 004f6631: mov dword ptr [edi], 0xafdf48 */ W32((u32)(r_edi), 0xafdf48u);
    /* 004f6637: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f6639: jne 0x4f6655 */ if (!fZ) goto L_004f6655;
L_004f663b:; BB(0x004f663b);
    /* 004f663b: fld dword ptr [0x91e77c] */ FPUSH(R_F32((u32)(0x91e77cu)));
    /* 004f6641: mov dword ptr [0xa726e4], 0x3e088889 */ W32((u32)(0xa726e4u), 0x3e088889u);
    /* 004f664b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f664e: mov byte ptr [0xa726e0], al */ W8((u32)(0xa726e0u), (u8)r_eax);
    /* 004f6653: jmp 0x4f665b */ goto L_004f665b;
L_004f6655:; BB(0x004f6655);
    /* 004f6655: fld dword ptr [0xa726e4] */ FPUSH(R_F32((u32)(0xa726e4u)));
L_004f665b:; BB(0x004f665b);
    /* 004f665b: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f665d: jne 0x4f667b */ if (!fZ) goto L_004f667b;
L_004f665f:; BB(0x004f665f);
    /* 004f665f: fld dword ptr [0x91e778] */ FPUSH(R_F32((u32)(0x91e778u)));
    /* 004f6665: mov dword ptr [0xa726e8], 0xbd888889 */ W32((u32)(0xa726e8u), 0xbd888889u);
    /* 004f666f: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f6674: mov byte ptr [0xa726e0], al */ W8((u32)(0xa726e0u), (u8)r_eax);
    /* 004f6679: jmp 0x4f6681 */ goto L_004f6681;
L_004f667b:; BB(0x004f667b);
    /* 004f667b: fld dword ptr [0xa726e8] */ FPUSH(R_F32((u32)(0xa726e8u)));
L_004f6681:; BB(0x004f6681);
    /* 004f6681: mov eax, dword ptr [0x9b91c0] */ r_eax = R32((u32)(0x9b91c0u));
    /* 004f6686: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f6688: fst dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0));
    /* 004f668b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f668d: fst dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0));
    /* 004f6690: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f6692: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 004f6695: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004f6698: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004f669b: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004f669e: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004f66a5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004f66a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f66aa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f66ac: mov eax, dword ptr [edx*8 + 0x91e644] */ r_eax = R32((u32)(r_edx*8+0x91e644u));
    /* 004f66b3: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004f66b6: mov eax, dword ptr [edx*8 + 0x91e640] */ r_eax = R32((u32)(r_edx*8+0x91e640u));
    /* 004f66bd: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004f66c0: mov eax, dword ptr [edx*8 + 0x91e648] */ r_eax = R32((u32)(r_edx*8+0x91e648u));
    /* 004f66c7: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004f66ca: mov eax, dword ptr [edx*8 + 0x91e64c] */ r_eax = R32((u32)(r_edx*8+0x91e64cu));
    /* 004f66d1: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 004f66d4: mov eax, edi */ r_eax = r_edi;
    /* 004f66d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f66d7: ret 8 */ FN_RET(0x004f6618); r_esp += 12; return;
}

void f_004f668c(void)
{
    FN_ENTER(0x004f668c);
    /* 004f668c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 004f668d: fst dword ptr [edi + 0x2c] */ W_F32((u32)(r_edi+0x2cu), ST(0));
    /* 004f6690: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f6692: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 004f6695: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 004f6698: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004f669b: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004f669e: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004f66a5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004f66a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f66aa: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f66ac: mov eax, dword ptr [edx*8 + 0x91e644] */ r_eax = R32((u32)(r_edx*8+0x91e644u));
    /* 004f66b3: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004f66b6: mov eax, dword ptr [edx*8 + 0x91e640] */ r_eax = R32((u32)(r_edx*8+0x91e640u));
    /* 004f66bd: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004f66c0: mov eax, dword ptr [edx*8 + 0x91e648] */ r_eax = R32((u32)(r_edx*8+0x91e648u));
    /* 004f66c7: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 004f66ca: mov eax, dword ptr [edx*8 + 0x91e64c] */ r_eax = R32((u32)(r_edx*8+0x91e64cu));
    /* 004f66d1: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 004f66d4: mov eax, edi */ r_eax = r_edi;
    /* 004f66d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f66d7: ret 8 */ FN_RET(0x004f668c); r_esp += 12; return;
}

void f_004f66dc(void) /* sub_4F66DC */
{
    FN_ENTER(0x004f66dc);
    /* 004f66dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f66dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f66df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f66e1: call 0x4f47bc */ r_esp -= 4; W32(r_esp, 0x4f66e6u); f_004f47bc();
    /* 004f66e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f66e8: call 0x4f66f0 */ r_esp -= 4; W32(r_esp, 0x4f66edu); f_004f66f0();
    /* 004f66ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f66ee: ret  */ FN_RET(0x004f66dc); r_esp += 4; return;
}

void f_004f66f0(void) /* sub_4F66F0 */
{
    FN_ENTER(0x004f66f0);
    /* 004f66f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f66f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f66f2: mov esi, ecx */ r_esi = r_ecx;
    /* 004f66f4: mov edx, dword ptr [0xa7223c] */ r_edx = R32((u32)(0xa7223cu));
    /* 004f66fa: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004f66fd: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004f6700: fmul dword ptr [esi + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x30u));
    /* 004f6703: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004f6706: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 004f6709: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f670b: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 004f670d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f670f: jne 0x4f676c */ if (!fZ) goto L_004f676c;
L_004f6711:; BB(0x004f6711);
    /* 004f6711: fld dword ptr [0x91e620] */ FPUSH(R_F32((u32)(0x91e620u)));
    /* 004f6717: fld dword ptr [edi*8 + 0x91e644] */ FPUSH(R_F32((u32)(r_edi*8+0x91e644u)));
    /* 004f671e: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004f6721: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f6723: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f6725: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004f6727: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f6729: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 004f672c: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 004f672f: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 004f6732: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f6734: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004f6737: fld dword ptr [edi*8 + 0x91e640] */ FPUSH(R_F32((u32)(r_edi*8+0x91e640u)));
    /* 004f673e: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004f6740: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004f6742: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004f6744: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f6746: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
    /* 004f6749: fld dword ptr [edi*8 + 0x91e648] */ FPUSH(R_F32((u32)(r_edi*8+0x91e648u)));
    /* 004f6750: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f6752: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004f6754: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f6756: fstp dword ptr [esi + 0x48] */ W_F32((u32)(r_esi+0x48u), ST(0)); FPOP();
    /* 004f6759: fld dword ptr [edi*8 + 0x91e64c] */ FPUSH(R_F32((u32)(r_edi*8+0x91e64cu)));
    /* 004f6760: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f6762: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f6764: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f6766: fstp dword ptr [esi + 0x4c] */ W_F32((u32)(r_esi+0x4cu), ST(0)); FPOP();
    /* 004f6769: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f676a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f676b: ret  */ FN_RET(0x004f66f0); r_esp += 4; return;
L_004f676c:; BB(0x004f676c);
    /* 004f676c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f676e: mov ecx, esi */ r_ecx = r_esi;
    /* 004f6770: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f6773u); call_ind(t); }
    /* 004f6773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6775: je 0x4f67d1 */ if (fZ) goto L_004f67d1;
L_004f6777:; BB(0x004f6777);
    /* 004f6777: fld dword ptr [0x91e620] */ FPUSH(R_F32((u32)(0x91e620u)));
    /* 004f677d: fld dword ptr [0x91e770] */ FPUSH(R_F32((u32)(0x91e770u)));
    /* 004f6783: fld dword ptr [0x91e76c] */ FPUSH(R_F32((u32)(0x91e76cu)));
    /* 004f6789: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004f678c: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f678e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f6790: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004f6792: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004f6794: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 004f6797: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 004f679a: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 004f679d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004f679f: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004f67a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f67a4: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f67a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f67a8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004f67aa: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004f67ac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f67ae: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
    /* 004f67b1: fld dword ptr [edi*8 + 0x91e650] */ FPUSH(R_F32((u32)(r_edi*8+0x91e650u)));
    /* 004f67b8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f67ba: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004f67bc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f67be: fstp dword ptr [esi + 0x48] */ W_F32((u32)(r_esi+0x48u), ST(0)); FPOP();
    /* 004f67c1: fld dword ptr [edi*8 + 0x91e654] */ FPUSH(R_F32((u32)(r_edi*8+0x91e654u)));
    /* 004f67c8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f67ca: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004f67cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f67ce: fstp dword ptr [esi + 0x4c] */ W_F32((u32)(r_esi+0x4cu), ST(0)); FPOP();
L_004f67d1:; BB(0x004f67d1);
    /* 004f67d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f67d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f67d3: ret  */ FN_RET(0x004f66f0); r_esp += 4; return;
}

void f_004f67d4(void) /* sub_4F67D4 */
{
    FN_ENTER(0x004f67d4);
    /* 004f67d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f67d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f67d7: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4f67dcu); f_007a9380();
    /* 004f67dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f67de: call 0x4f67ec */ r_esp -= 4; W32(r_esp, 0x4f67e3u); f_004f67ec();
    /* 004f67e3: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4f67e8u); f_007a9318();
    /* 004f67e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f67e9: ret  */ FN_RET(0x004f67d4); r_esp += 4; return;
}

void f_004f67ec(void) /* sub_4F67EC */
{
    FN_ENTER(0x004f67ec);
    /* 004f67ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f67ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f67ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f67ef: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f67f2: mov edi, ecx */ r_edi = r_ecx;
    /* 004f67f4: movzx eax, byte ptr [0xa726ec] */ r_eax = (u32)R8((u32)(0xa726ecu));
    /* 004f67fb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f67fd: jne 0x4f6813 */ if (!fZ) goto L_004f6813;
L_004f67ff:; BB(0x004f67ff);
    /* 004f67ff: mov dword ptr [0xa726f0], 0x3f800000 */ W32((u32)(0xa726f0u), 0x3f800000u);
    /* 004f6809: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f680e: mov byte ptr [0xa726ec], al */ W8((u32)(0xa726ecu), (u8)r_eax);
L_004f6813:; BB(0x004f6813);
    /* 004f6813: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004f6816: fcom dword ptr [0x91e764] */ fx_compare(ST(0), R_F32((u32)(0x91e764u))); 
    /* 004f681c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f681e: mov esi, dword ptr [edi + 0x3c] */ r_esi = R32((u32)(r_edi+0x3cu));
    /* 004f6821: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f6825: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f6826: ja 0x4f682f */ if ((!fC&&!fZ)) goto L_004f682f;
L_004f6828:; BB(0x004f6828);
    /* 004f6828: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f682b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f682c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f682d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f682e: ret  */ FN_RET(0x004f67ec); r_esp += 4; return;
L_004f682f:; BB(0x004f682f);
    /* 004f682f: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f6833: fmul dword ptr [0xa726f0] */ ST(0) = ST(0) * R_F32((u32)(0xa726f0u));
    /* 004f6839: fadd dword ptr [0x91e624] */ ST(0) = ST(0) + R_F32((u32)(0x91e624u));
    /* 004f683f: mov ebx, dword ptr [edi + 0x48] */ r_ebx = R32((u32)(r_edi+0x48u));
    /* 004f6842: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 004f6845: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 004f6848: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 004f684c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f6850: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 004f6854: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004f6858: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004f685b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004f685f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 004f6863: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004f6867: lea ebx, [eax + eax + 0x6a] */ r_ebx = (u32)(r_eax+r_eax+0x6au);
    /* 004f686b: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004f686e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f6871: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004f6875: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004f6879: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f687d: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f6881: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004f6885: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f688au); f_004e9f40();
    /* 004f688a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f688e: fld dword ptr [edi + 0x44] */ FPUSH(R_F32((u32)(r_edi+0x44u)));
    /* 004f6891: fmul dword ptr [0x91e760] */ ST(0) = ST(0) * R_F32((u32)(0x91e760u));
    /* 004f6897: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 004f689b: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 004f689e: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 004f68a2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f68a6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004f68aa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f68ad: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f68b0: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004f68b4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f68b8: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004f68bc: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004f68c0: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004f68c4: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f68c9u); f_004e9f40();
    /* 004f68c9: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f68cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f68cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f68ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f68cf: ret  */ FN_RET(0x004f67ec); r_esp += 4; return;
}

void f_004f68d0(void) /* sub_4F68D0 */
{
    FN_ENTER(0x004f68d0);
    /* 004f68d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f68d1: mov ebp, esp */ r_ebp = r_esp;
    /* 004f68d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f68d5: push 0x8d313c */ { u32 v = 0x8d313cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f68da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f68e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f68e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f68e8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f68eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f68ee: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004f68f1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004f68f4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004f68f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f68f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004f68fc:; BB(0x004f68fc);
    /* 004f68fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f68fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004f6901:; BB(0x004f6901);
    /* 004f6901: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f6904: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f6907: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004f690a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f690c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f690e: fld dword ptr [ecx*8 + 0x91e644] */ FPUSH(R_F32((u32)(r_ecx*8+0x91e644u)));
    /* 004f6915: fcomp dword ptr [ebx*4 + 0x91e628] */ fx_compare(ST(0), R_F32((u32)(r_ebx*4+0x91e628u))); FPOP();
    /* 004f691c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f691e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f691f: je 0x4f6953 */ if (fZ) goto L_004f6953;
L_004f6921:; BB(0x004f6921);
    /* 004f6921: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f6924: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6927: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f692a: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f692d: jl 0x4f6901 */ if ((fS!=fO)) goto L_004f6901;
L_004f692f:; BB(0x004f692f);
    /* 004f692f: mov eax, ebx */ r_eax = r_ebx;
    /* 004f6931: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6934: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004f6937: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f693a: jl 0x4f68fc */ if ((fS!=fO)) goto L_004f68fc;
L_004f693c:; BB(0x004f693c);
    /* 004f693c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f693f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f6942: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f6945: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f6948: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f694f: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6952: ret  */ FN_RET(0x004f68d0); r_esp += 4; return;
L_004f6953:; BB(0x004f6953);
    /* 004f6953: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004f695a: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f695c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f6961u); f_005caba4();
    /* 004f6961: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6962: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004f6965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6967: je 0x4f698f */ if (fZ) goto L_004f698f;
L_004f6969:; BB(0x004f6969);
    /* 004f6969: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004f6970: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f6977: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f697a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f697b: mov ecx, eax */ r_ecx = r_eax;
    /* 004f697d: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6983: call 0x4f6618 */ r_esp -= 4; W32(r_esp, 0x4f6988u); f_004f6618();
    /* 004f6988: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004f698f:; BB(0x004f698f);
    /* 004f698f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f6996: jmp 0x4f6921 */ goto L_004f6921;
}

void f_004f6998(void) /* sub_4F6998 */
{
    FN_ENTER(0x004f6998);
    /* 004f6998: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6999: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f699c: mov esi, ecx */ r_esi = r_ecx;
    /* 004f699e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004f69a2: mov dword ptr [esp], 0x21 */ W32((u32)(r_esp), 0x21u);
    /* 004f69a9: mov eax, 0xc */ r_eax = 0xcu;
    /* 004f69ae: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f69b2: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004f69ba: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004f69be: mov dword ptr [esp + 0xc], 0x62 */ W32((u32)(r_esp+0xcu), 0x62u);
    /* 004f69c6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004f69ca: mov dword ptr [esp + 0x1c], 0xb */ W32((u32)(r_esp+0x1cu), 0xbu);
    /* 004f69d2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004f69d6: push dword ptr [esp + edx*8 + 4] */ { u32 v = R32((u32)(r_esp+r_edx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f69da: push dword ptr [esp + edx*8 + 4] */ { u32 v = R32((u32)(r_esp+r_edx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f69de: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4f69e3u); f_00792fe8();
    /* 004f69e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f69e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f69e7: mov ecx, esi */ r_ecx = r_esi;
    /* 004f69e9: call 0x4f69f8 */ r_esp -= 4; W32(r_esp, 0x4f69eeu); f_004f69f8();
    /* 004f69ee: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f69f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f69f2: ret 4 */ FN_RET(0x004f6998); r_esp += 8; return;
}

void f_004f69f8(void) /* sub_4F69F8 */
{
    FN_ENTER(0x004f69f8);
    /* 004f69f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f69f9: mov edi, ecx */ r_edi = r_ecx;
    /* 004f69fb: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 004f69fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6a00: je 0x4f6a06 */ if (fZ) goto L_004f6a06;
L_004f6a02:; BB(0x004f6a02);
    /* 004f6a02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6a03: ret 4 */ FN_RET(0x004f69f8); r_esp += 8; return;
L_004f6a06:; BB(0x004f6a06);
    /* 004f6a06: push 0x91e788 */ { u32 v = 0x91e788u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a0b: push 0x91e780 */ { u32 v = 0x91e780u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a10: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x4f6a15u); f_0073a888();
    /* 004f6a15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6a18: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004f6a1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6a1d: je 0x4f6a02 */ if (fZ) goto L_004f6a02;
L_004f6a1f:; BB(0x004f6a1f);
    /* 004f6a1f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004f6a23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6a25: je 0x4f6a38 */ if (fZ) goto L_004f6a38;
L_004f6a27:; BB(0x004f6a27);
    /* 004f6a27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a29: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004f6a2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a2e: mov ecx, eax */ r_ecx = r_eax;
    /* 004f6a30: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4f6a35u); f_0073ae38();
    /* 004f6a35: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
L_004f6a38:; BB(0x004f6a38);
    /* 004f6a38: mov ecx, eax */ r_ecx = r_eax;
    /* 004f6a3a: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x4f6a3fu); f_0073b0f0();
    /* 004f6a3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6a40: ret 4 */ FN_RET(0x004f69f8); r_esp += 8; return;
}

void f_004f6a44(void) /* sub_4F6A44 */
{
    FN_ENTER(0x004f6a44);
    /* 004f6a44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6a45: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f6a47: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004f6a4a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6a4c: jne 0x4f6a76 */ if (!fZ) goto L_004f6a76;
L_004f6a4e:; BB(0x004f6a4e);
    /* 004f6a4e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f6a50: jne 0x4f6a96 */ if (!fZ) goto L_004f6a96;
L_004f6a52:; BB(0x004f6a52);
    /* 004f6a52: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f6a54: jne 0x4f6a78 */ if (!fZ) goto L_004f6a78;
L_004f6a56:; BB(0x004f6a56);
    /* 004f6a56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6a58: jne 0x4f6a76 */ if (!fZ) goto L_004f6a76;
L_004f6a5a:; BB(0x004f6a5a);
    /* 004f6a5a: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f6a5d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6a60: je 0x4f6a76 */ if (fZ) goto L_004f6a76;
L_004f6a62:; BB(0x004f6a62);
    /* 004f6a62: mov dword ptr [ebp + 0x1c], 2 */ W32((u32)(r_ebp+0x1cu), 0x2u);
    /* 004f6a69: mov eax, dword ptr [0x9b91d8] */ r_eax = R32((u32)(0x9b91d8u));
    /* 004f6a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6a70: je 0x4f6a76 */ if (fZ) goto L_004f6a76;
L_004f6a72:; BB(0x004f6a72);
    /* 004f6a72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f6a74: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f6a76u); call_ind(t); }
L_004f6a76:; BB(0x004f6a76);
    /* 004f6a76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6a77: ret  */ FN_RET(0x004f6a44); r_esp += 4; return;
L_004f6a78:; BB(0x004f6a78);
    /* 004f6a78: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004f6a7b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6a7e: je 0x4f6a94 */ if (fZ) goto L_004f6a94;
L_004f6a80:; BB(0x004f6a80);
    /* 004f6a80: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004f6a87: mov eax, dword ptr [0x9b91d0] */ r_eax = R32((u32)(0x9b91d0u));
    /* 004f6a8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6a8e: je 0x4f6a94 */ if (fZ) goto L_004f6a94;
L_004f6a90:; BB(0x004f6a90);
    /* 004f6a90: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f6a92: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f6a94u); call_ind(t); }
L_004f6a94:; BB(0x004f6a94);
    /* 004f6a94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6a95: ret  */ FN_RET(0x004f6a44); r_esp += 4; return;
L_004f6a96:; BB(0x004f6a96);
    /* 004f6a96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f6a98: call 0x4f6ab8 */ r_esp -= 4; W32(r_esp, 0x4f6a9du); f_004f6ab8();
    /* 004f6a9d: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 004f6aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6aa2: je 0x4f6aa6 */ if (fZ) goto L_004f6aa6;
L_004f6aa4:; BB(0x004f6aa4);
    /* 004f6aa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6aa5: ret  */ FN_RET(0x004f6a44); r_esp += 4; return;
L_004f6aa6:; BB(0x004f6aa6);
    /* 004f6aa6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f6aa8: call 0x4f6d70 */ r_esp -= 4; W32(r_esp, 0x4f6aadu); f_004f6d70();
    /* 004f6aad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6aaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f6ab1: call 0x4f6998 */ r_esp -= 4; W32(r_esp, 0x4f6ab6u); f_004f6998();
    /* 004f6ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6ab7: ret  */ FN_RET(0x004f6a44); r_esp += 4; return;
}

void f_004f6ab8(void) /* sub_4F6AB8 */
{
    FN_ENTER(0x004f6ab8);
    /* 004f6ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ab9: mov ebp, esp */ r_ebp = r_esp;
    /* 004f6abb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6abd: push 0x8d317e */ { u32 v = 0x8d317eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ac2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f6ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ac9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f6ad0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6ad3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f6ad6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004f6ad9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004f6adc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004f6adf: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 004f6ae2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004f6ae5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6ae7: jne 0x4f6af2 */ if (!fZ) goto L_004f6af2;
L_004f6ae9:; BB(0x004f6ae9);
    /* 004f6ae9: mov eax, ecx */ r_eax = r_ecx;
    /* 004f6aeb: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004f6aee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6af0: je 0x4f6b00 */ if (fZ) goto L_004f6b00;
L_004f6af2:; BB(0x004f6af2);
    /* 004f6af2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f6af5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f6afc: mov esp, ebp */ r_esp = r_ebp;
    /* 004f6afe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6aff: ret  */ FN_RET(0x004f6ab8); r_esp += 4; return;
L_004f6b00:; BB(0x004f6b00);
    /* 004f6b00: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004f6b07: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b09: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f6b0eu); f_005caba4();
    /* 004f6b0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6b0f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004f6b12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6b14: je 0x4f6b90 */ if (fZ) goto L_004f6b90;
L_004f6b16:; BB(0x004f6b16);
    /* 004f6b16: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 004f6b1d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f6b24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f6b27: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f6b2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b2b: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x4f6b30u); f_004010b0();
    /* 004f6b30: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004f6b33: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004f6b3a:; BB(0x004f6b3a);
    /* 004f6b3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f6b3d: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 004f6b40: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f6b47: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004f6b4e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b50: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f6b55u); f_005caba4();
    /* 004f6b55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6b56: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f6b59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6b5b: je 0x4f6b8c */ if (fZ) goto L_004f6b8c;
L_004f6b5d:; BB(0x004f6b5d);
    /* 004f6b5d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004f6b64: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004f6b6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f6b6e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f6b71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b72: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x4f6b77u); f_004012cc();
    /* 004f6b77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004f6b7a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004f6b81:; BB(0x004f6b81);
    /* 004f6b81: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f6b84: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 004f6b87: jmp 0x4f6af2 */ goto L_004f6af2;
L_004f6b8c:; BB(0x004f6b8c);
    /* 004f6b8c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6b8e: jmp 0x4f6b81 */ goto L_004f6b81;
L_004f6b90:; BB(0x004f6b90);
    /* 004f6b90: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f6b92: jmp 0x4f6b3a */ goto L_004f6b3a;
}

void f_004f6b94(void) /* sub_4F6B94 */
{
    FN_ENTER(0x004f6b94);
    /* 004f6b94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6b95: mov edi, ecx */ r_edi = r_ecx;
    /* 004f6b97: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004f6b9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6b9c: jle 0x4f6ba0 */ if ((fZ||fS!=fO)) goto L_004f6ba0;
L_004f6b9e:; BB(0x004f6b9e);
    /* 004f6b9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6b9f: ret  */ FN_RET(0x004f6b94); r_esp += 4; return;
L_004f6ba0:; BB(0x004f6ba0);
    /* 004f6ba0: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004f6ba7: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6ba9: call 0x4f6c2c */ r_esp -= 4; W32(r_esp, 0x4f6baeu); f_004f6c2c();
    /* 004f6bae: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004f6bb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6bb3: jne 0x4f6bf0 */ if (!fZ) goto L_004f6bf0;
L_004f6bb5:; BB(0x004f6bb5);
    /* 004f6bb5: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 004f6bb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6bba: jne 0x4f6bc5 */ if (!fZ) goto L_004f6bc5;
L_004f6bbc:; BB(0x004f6bbc);
    /* 004f6bbc: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6bbe: call 0x4f6d24 */ r_esp -= 4; W32(r_esp, 0x4f6bc3u); f_004f6d24();
    /* 004f6bc3: jmp 0x4f6bcd */ goto L_004f6bcd;
L_004f6bc5:; BB(0x004f6bc5);
    /* 004f6bc5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6bc7: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x4f6bccu); f_006a758c();
    /* 004f6bcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004f6bcd:; BB(0x004f6bcd);
    /* 004f6bcd: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6bd0: je 0x4f6c0e */ if (fZ) goto L_004f6c0e;
L_004f6bd2:; BB(0x004f6bd2);
    /* 004f6bd2: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004f6bd5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6bd8: je 0x4f6bee */ if (fZ) goto L_004f6bee;
L_004f6bda:; BB(0x004f6bda);
    /* 004f6bda: mov dword ptr [edi + 0x1c], 3 */ W32((u32)(r_edi+0x1cu), 0x3u);
    /* 004f6be1: mov eax, dword ptr [0x9b91e0] */ r_eax = R32((u32)(0x9b91e0u));
    /* 004f6be6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6be8: je 0x4f6bee */ if (fZ) goto L_004f6bee;
L_004f6bea:; BB(0x004f6bea);
    /* 004f6bea: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6bec: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f6beeu); call_ind(t); }
L_004f6bee:; BB(0x004f6bee);
    /* 004f6bee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6bef: ret  */ FN_RET(0x004f6b94); r_esp += 4; return;
L_004f6bf0:; BB(0x004f6bf0);
    /* 004f6bf0: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004f6bf3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6bf6: je 0x4f6c0c */ if (fZ) goto L_004f6c0c;
L_004f6bf8:; BB(0x004f6bf8);
    /* 004f6bf8: mov dword ptr [edi + 0x1c], 1 */ W32((u32)(r_edi+0x1cu), 0x1u);
    /* 004f6bff: mov eax, dword ptr [0x9b91d0] */ r_eax = R32((u32)(0x9b91d0u));
    /* 004f6c04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6c06: je 0x4f6c0c */ if (fZ) goto L_004f6c0c;
L_004f6c08:; BB(0x004f6c08);
    /* 004f6c08: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6c0a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f6c0cu); call_ind(t); }
L_004f6c0c:; BB(0x004f6c0c);
    /* 004f6c0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6c0d: ret  */ FN_RET(0x004f6b94); r_esp += 4; return;
L_004f6c0e:; BB(0x004f6c0e);
    /* 004f6c0e: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004f6c11: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6c14: je 0x4f6bee */ if (fZ) goto L_004f6bee;
L_004f6c16:; BB(0x004f6c16);
    /* 004f6c16: mov dword ptr [edi + 0x1c], 4 */ W32((u32)(r_edi+0x1cu), 0x4u);
    /* 004f6c1d: mov eax, dword ptr [0x9b91e8] */ r_eax = R32((u32)(0x9b91e8u));
    /* 004f6c22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6c24: je 0x4f6bee */ if (fZ) goto L_004f6bee;
L_004f6c26:; BB(0x004f6c26);
    /* 004f6c26: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6c28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f6c2au); call_ind(t); }
    /* 004f6c2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6c2b: ret  */ FN_RET(0x004f6b94); r_esp += 4; return;
}

void f_004f6c2c(void) /* sub_4F6C2C */
{
    FN_ENTER(0x004f6c2c);
    /* 004f6c2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c2e: mov edi, ecx */ r_edi = r_ecx;
    /* 004f6c30: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c32: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x4f6c37u); f_0082c204();
    /* 004f6c37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6c38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6c3a: jne 0x4f6c4b */ if (!fZ) goto L_004f6c4b;
L_004f6c3c:; BB(0x004f6c3c);
    /* 004f6c3c: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004f6c43: mov eax, 1 */ r_eax = 0x1u;
    /* 004f6c48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6c49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6c4a: ret  */ FN_RET(0x004f6c2c); r_esp += 4; return;
L_004f6c4b:; BB(0x004f6c4b);
    /* 004f6c4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c4d: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x4f6c52u); f_007083d4();
    /* 004f6c52: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6c53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6c55: jne 0x4f6c66 */ if (!fZ) goto L_004f6c66;
L_004f6c57:; BB(0x004f6c57);
    /* 004f6c57: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004f6c5e: mov eax, 4 */ r_eax = 0x4u;
    /* 004f6c63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6c64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6c65: ret  */ FN_RET(0x004f6c2c); r_esp += 4; return;
L_004f6c66:; BB(0x004f6c66);
    /* 004f6c66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c68: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4f6c6du); f_006dc358();
    /* 004f6c6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6c6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6c70: je 0x4f6c85 */ if (fZ) goto L_004f6c85;
L_004f6c72:; BB(0x004f6c72);
    /* 004f6c72: add dword ptr [edi + 0x24], 1 */ { u32 ad = (u32)(r_edi+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f6c76: mov eax, 2 */ r_eax = 0x2u;
    /* 004f6c7b: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004f6c82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6c83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6c84: ret  */ FN_RET(0x004f6c2c); r_esp += 4; return;
L_004f6c85:; BB(0x004f6c85);
    /* 004f6c85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f6c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6c88: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004f6c8b: call 0x82c1e0 */ r_esp -= 4; W32(r_esp, 0x4f6c90u); f_0082c1e0();
    /* 004f6c90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6c91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6c93: jne 0x4f6ccc */ if (!fZ) goto L_004f6ccc;
L_004f6c95:; BB(0x004f6c95);
    /* 004f6c95: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 004f6c98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6c9a: je 0x4f6ca2 */ if (fZ) goto L_004f6ca2;
L_004f6c9c:; BB(0x004f6c9c);
    /* 004f6c9c: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004f6c9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6ca0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6ca1: ret  */ FN_RET(0x004f6c2c); r_esp += 4; return;
L_004f6ca2:; BB(0x004f6ca2);
    /* 004f6ca2: mov dword ptr [edi + 0x28], 1 */ W32((u32)(r_edi+0x28u), 0x1u);
    /* 004f6ca9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f6cab: call 0x6c2d8c */ r_esp -= 4; W32(r_esp, 0x4f6cb0u); f_006c2d8c();
    /* 004f6cb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6cb2: jne 0x4f6cb9 */ if (!fZ) goto L_004f6cb9;
L_004f6cb4:; BB(0x004f6cb4);
    /* 004f6cb4: mov esi, 4 */ r_esi = 0x4u;
L_004f6cb9:; BB(0x004f6cb9);
    /* 004f6cb9: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6cbb: call 0x4f6cdc */ r_esp -= 4; W32(r_esp, 0x4f6cc0u); f_004f6cdc();
    /* 004f6cc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6cc2: jne 0x4f6cc7 */ if (!fZ) goto L_004f6cc7;
L_004f6cc4:; BB(0x004f6cc4);
    /* 004f6cc4: or esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004f6cc7:; BB(0x004f6cc7);
    /* 004f6cc7: mov eax, esi */ r_eax = r_esi;
    /* 004f6cc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6cca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6ccb: ret  */ FN_RET(0x004f6c2c); r_esp += 4; return;
L_004f6ccc:; BB(0x004f6ccc);
    /* 004f6ccc: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004f6cd3: mov eax, 4 */ r_eax = 0x4u;
    /* 004f6cd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6cd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6cda: ret  */ FN_RET(0x004f6c2c); r_esp += 4; return;
}

void f_004f6cdc(void) /* sub_4F6CDC */
{
    FN_ENTER(0x004f6cdc);
    /* 004f6cdc: call 0x6c44bc */ r_esp -= 4; W32(r_esp, 0x4f6ce1u); f_006c44bc();
    /* 004f6ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ce2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ce4: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4f6ce9u); f_0082c198();
    /* 004f6ce9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6cec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6cee: jne 0x4f6d18 */ if (!fZ) goto L_004f6d18;
L_004f6cf0:; BB(0x004f6cf0);
    /* 004f6cf0: call 0x6c44ac */ r_esp -= 4; W32(r_esp, 0x4f6cf5u); f_006c44ac();
    /* 004f6cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6cf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6cf8: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4f6cfdu); f_0082c198();
    /* 004f6cfd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6d02: jne 0x4f6d18 */ if (!fZ) goto L_004f6d18;
L_004f6d04:; BB(0x004f6d04);
    /* 004f6d04: call 0x6c44b4 */ r_esp -= 4; W32(r_esp, 0x4f6d09u); f_006c44b4();
    /* 004f6d09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6d0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6d0c: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x4f6d11u); f_0082c198();
    /* 004f6d11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6d14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6d16: je 0x4f6d1b */ if (fZ) goto L_004f6d1b;
L_004f6d18:; BB(0x004f6d18);
    /* 004f6d18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6d1a: ret  */ FN_RET(0x004f6cdc); r_esp += 4; return;
L_004f6d1b:; BB(0x004f6d1b);
    /* 004f6d1b: mov eax, 1 */ r_eax = 0x1u;
    /* 004f6d20: ret  */ FN_RET(0x004f6cdc); r_esp += 4; return;
}

void f_004f6d24(void) /* sub_4F6D24 */
{
    FN_ENTER(0x004f6d24);
    /* 004f6d24: call 0x6ab24c */ r_esp -= 4; W32(r_esp, 0x4f6d29u); f_006ab24c();
    /* 004f6d29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6d2b: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x4f6d30u); f_006a758c();
    /* 004f6d30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6d31: ret  */ FN_RET(0x004f6d24); r_esp += 4; return;
}

void f_004f6d34(void) /* sub_4F6D34 */
{
    FN_ENTER(0x004f6d34);
    /* 004f6d34: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004f6d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6d39: jne 0x4f6d4d */ if (!fZ) goto L_004f6d4d;
L_004f6d3b:; BB(0x004f6d3b);
    /* 004f6d3b: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004f6d3f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f6d44: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004f6d48: call 0x7a60f0 */ r_esp -= 4; W32(r_esp, 0x4f6d4du); f_007a60f0();
L_004f6d4d:; BB(0x004f6d4d);
    /* 004f6d4d: ret  */ FN_RET(0x004f6d34); r_esp += 4; return;
}

void f_004f6d50(void) /* sub_4F6D50 */
{
    FN_ENTER(0x004f6d50);
    /* 004f6d50: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004f6d55: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f6d5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6d5c: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4f6d61u); f_004f3eb8();
    /* 004f6d61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6d64: je 0x4f6d6c */ if (fZ) goto L_004f6d6c;
L_004f6d66:; BB(0x004f6d66);
    /* 004f6d66: mov eax, 1 */ r_eax = 0x1u;
    /* 004f6d6b: ret  */ FN_RET(0x004f6d50); r_esp += 4; return;
L_004f6d6c:; BB(0x004f6d6c);
    /* 004f6d6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6d6e: ret  */ FN_RET(0x004f6d50); r_esp += 4; return;
}

void f_004f6d70(void) /* sub_4F6D70 */
{
    FN_ENTER(0x004f6d70);
    /* 004f6d70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6d71: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f6d73: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 004f6d76: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6d78: je 0x4f6d8d */ if (fZ) goto L_004f6d8d;
L_004f6d7a:; BB(0x004f6d7a);
    /* 004f6d7a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4f6d7fu); f_007127b0();
    /* 004f6d7f: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 004f6d86: mov dword ptr [ebp + 0x38], 7 */ W32((u32)(r_ebp+0x38u), 0x7u);
L_004f6d8d:; BB(0x004f6d8d);
    /* 004f6d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6d8e: ret  */ FN_RET(0x004f6d70); r_esp += 4; return;
}

void f_004f6d90(void) /* sub_4F6D90 */
{
    FN_ENTER(0x004f6d90);
    /* 004f6d90: call 0x4f6d70 */ r_esp -= 4; W32(r_esp, 0x4f6d95u); f_004f6d70();
    /* 004f6d95: ret  */ FN_RET(0x004f6d90); r_esp += 4; return;
}

void f_004f6d98(void) /* sub_4F6D98 */
{
    FN_ENTER(0x004f6d98);
    /* 004f6d98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6d99: mov esi, ecx */ r_esi = r_ecx;
    /* 004f6d9b: mov ecx, esi */ r_ecx = r_esi;
    /* 004f6d9d: call 0x4f6d50 */ r_esp -= 4; W32(r_esp, 0x4f6da2u); f_004f6d50();
    /* 004f6da2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6da4: je 0x4f6dc2 */ if (fZ) goto L_004f6dc2;
L_004f6da6:; BB(0x004f6da6);
    /* 004f6da6: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004f6da9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f6dac: je 0x4f6dc2 */ if (fZ) goto L_004f6dc2;
L_004f6dae:; BB(0x004f6dae);
    /* 004f6dae: mov dword ptr [esi + 0x1c], 4 */ W32((u32)(r_esi+0x1cu), 0x4u);
    /* 004f6db5: mov eax, dword ptr [0x9b91e8] */ r_eax = R32((u32)(0x9b91e8u));
    /* 004f6dba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6dbc: je 0x4f6dc2 */ if (fZ) goto L_004f6dc2;
L_004f6dbe:; BB(0x004f6dbe);
    /* 004f6dbe: mov ecx, esi */ r_ecx = r_esi;
    /* 004f6dc0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4f6dc2u); call_ind(t); }
L_004f6dc2:; BB(0x004f6dc2);
    /* 004f6dc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6dc3: ret  */ FN_RET(0x004f6d98); r_esp += 4; return;
}

void f_004f6dc4(void) /* sub_4F6DC4 */
{
    FN_ENTER(0x004f6dc4);
    /* 004f6dc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6dc5: mov edi, ecx */ r_edi = r_ecx;
    /* 004f6dc7: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6dc9: call 0x4f6ab8 */ r_esp -= 4; W32(r_esp, 0x4f6dceu); f_004f6ab8();
    /* 004f6dce: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6dd0: call 0x4f6d70 */ r_esp -= 4; W32(r_esp, 0x4f6dd5u); f_004f6d70();
    /* 004f6dd5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6dd7: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6dd9: call 0x4f6998 */ r_esp -= 4; W32(r_esp, 0x4f6ddeu); f_004f6998();
    /* 004f6dde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6ddf: ret  */ FN_RET(0x004f6dc4); r_esp += 4; return;
}

void f_004f6de0(void) /* sub_4F6DE0 */
{
    FN_ENTER(0x004f6de0);
    /* 004f6de0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6de1: mov edi, ecx */ r_edi = r_ecx;
    /* 004f6de3: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6de5: call 0x4f6ab8 */ r_esp -= 4; W32(r_esp, 0x4f6deau); f_004f6ab8();
    /* 004f6dea: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6dec: call 0x4f6d70 */ r_esp -= 4; W32(r_esp, 0x4f6df1u); f_004f6d70();
    /* 004f6df1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6df3: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6df5: call 0x4f6998 */ r_esp -= 4; W32(r_esp, 0x4f6dfau); f_004f6998();
    /* 004f6dfa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6dfb: ret  */ FN_RET(0x004f6de0); r_esp += 4; return;
}

void f_004f6dfc(void) /* sub_4F6DFC */
{
    FN_ENTER(0x004f6dfc);
    /* 004f6dfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6dfd: mov edi, ecx */ r_edi = r_ecx;
    /* 004f6dff: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6e01: call 0x4f6d70 */ r_esp -= 4; W32(r_esp, 0x4f6e06u); f_004f6d70();
    /* 004f6e06: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004f6e09: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f6e0b: jne 0x4f6e0f */ if (!fZ) goto L_004f6e0f;
L_004f6e0d:; BB(0x004f6e0d);
    /* 004f6e0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6e0e: ret  */ FN_RET(0x004f6dfc); r_esp += 4; return;
L_004f6e0f:; BB(0x004f6e0f);
    /* 004f6e0f: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6e11: call 0x4f6ab8 */ r_esp -= 4; W32(r_esp, 0x4f6e16u); f_004f6ab8();
    /* 004f6e16: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6e18: call 0x4f6d70 */ r_esp -= 4; W32(r_esp, 0x4f6e1du); f_004f6d70();
    /* 004f6e1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e1f: mov ecx, edi */ r_ecx = r_edi;
    /* 004f6e21: call 0x4f6998 */ r_esp -= 4; W32(r_esp, 0x4f6e26u); f_004f6998();
    /* 004f6e26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6e27: ret  */ FN_RET(0x004f6dfc); r_esp += 4; return;
}

void f_004f6e28(void) /* sub_4F6E28 */
{
    FN_ENTER(0x004f6e28);
    /* 004f6e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e2c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f6e2f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 004f6e33: movsx eax, byte ptr [edi + 0x18] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x18u));
    /* 004f6e37: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004f6e39: cmp eax, 0x25 */ {  u32 a = r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6e3c: je 0x4f6e5b */ if (fZ) goto L_004f6e5b;
L_004f6e3e:; BB(0x004f6e3e);
    /* 004f6e3e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f6e40: lea ebp, [edi + 0x18] */ r_ebp = (u32)(r_edi+0x18u);
    /* 004f6e43: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6e46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e47: push 0x91e7c0 */ { u32 v = 0x91e7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e4d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4f6e52u); f_00858bf5();
    /* 004f6e52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6e55: mov byte ptr [edi + 0x18], 0x25 */ W8((u32)(r_edi+0x18u), 0x25u);
    /* 004f6e59: jmp 0x4f6e5e */ goto L_004f6e5e;
L_004f6e5b:; BB(0x004f6e5b);
    /* 004f6e5b: lea ebp, [edi + 0x18] */ r_ebp = (u32)(r_edi+0x18u);
L_004f6e5e:; BB(0x004f6e5e);
    /* 004f6e5e: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004f6e62: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6e64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e65: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 004f6e68: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004f6e6b: or edx, dword ptr [edi + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f6e6e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e6f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f6e74u); f_0061cdb0();
    /* 004f6e74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004f6e77: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 004f6e7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6e7d: jne 0x4f6eae */ if (!fZ) goto L_004f6eae;
L_004f6e7f:; BB(0x004f6e7f);
    /* 004f6e7f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6e81: call 0x7bfe40 */ r_esp -= 4; W32(r_esp, 0x4f6e86u); f_007bfe40();
    /* 004f6e86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6e87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6e89: jne 0x4f6eb6 */ if (!fZ) goto L_004f6eb6;
L_004f6e8b:; BB(0x004f6e8b);
    /* 004f6e8b: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004f6e8f: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6e93: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f6e96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6e98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6e9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6e9c: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004f6ea3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6ea5: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4f6eaau); f_007c1100();
    /* 004f6eaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6eac: jne 0x4f6eca */ if (!fZ) goto L_004f6eca;
L_004f6eae:; BB(0x004f6eae);
    /* 004f6eae: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f6eb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f6eb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f6eb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f6eb4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6eb5: ret  */ FN_RET(0x004f6e28); r_esp += 4; return;
L_004f6eb6:; BB(0x004f6eb6);
    /* 004f6eb6: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 004f6eba: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004f6ebd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6ebf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6ec1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6ec3: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
L_004f6eca:; BB(0x004f6eca);
    /* 004f6eca: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6ed0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6ed2: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f6ed7u); f_007c1160();
    /* 004f6ed7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6ed9: je 0x4f6ee1 */ if (fZ) goto L_004f6ee1;
L_004f6edb:; BB(0x004f6edb);
    /* 004f6edb: add dword ptr [edi + 0xc], 1 */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f6edf: jmp 0x4f6ef6 */ goto L_004f6ef6;
L_004f6ee1:; BB(0x004f6ee1);
    /* 004f6ee1: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6ee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6ee9: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f6eeeu); f_007c1160();
    /* 004f6eee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6ef0: je 0x4f6ef6 */ if (fZ) goto L_004f6ef6;
L_004f6ef2:; BB(0x004f6ef2);
    /* 004f6ef2: add dword ptr [edi + 0xc], -1 */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004f6ef6:; BB(0x004f6ef6);
    /* 004f6ef6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6ef8: call 0x7bfe40 */ r_esp -= 4; W32(r_esp, 0x4f6efdu); f_007bfe40();
    /* 004f6efd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f00: je 0x4f6f12 */ if (fZ) goto L_004f6f12;
L_004f6f02:; BB(0x004f6f02);
    /* 004f6f02: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6f04: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x4f6f09u); f_007bfe50();
    /* 004f6f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6f0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f0c: je 0x4f6f12 */ if (fZ) goto L_004f6f12;
L_004f6f0e:; BB(0x004f6f0e);
    /* 004f6f0e: add dword ptr [edi + 0xc], 1 */ { u32 ad = (u32)(r_edi+0xcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004f6f12:; BB(0x004f6f12);
    /* 004f6f12: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6f14: call 0x7bfe40 */ r_esp -= 4; W32(r_esp, 0x4f6f19u); f_007bfe40();
    /* 004f6f19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6f1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f1c: jne 0x4f6f23 */ if (!fZ) goto L_004f6f23;
L_004f6f1e:; BB(0x004f6f1e);
    /* 004f6f1e: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 004f6f21: jmp 0x4f6f3a */ goto L_004f6f3a;
L_004f6f23:; BB(0x004f6f23);
    /* 004f6f23: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6f25: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x4f6f2au); f_007bfe50();
    /* 004f6f2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6f2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f2d: je 0x4f6f37 */ if (fZ) goto L_004f6f37;
L_004f6f2f:; BB(0x004f6f2f);
    /* 004f6f2f: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 004f6f32: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f6f35: jmp 0x4f6f3a */ goto L_004f6f3a;
L_004f6f37:; BB(0x004f6f37);
    /* 004f6f37: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
L_004f6f3a:; BB(0x004f6f3a);
    /* 004f6f3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004f6f3c: jl 0x4f704b */ if ((fS!=fO)) goto L_004f704b;
L_004f6f42:; BB(0x004f6f42);
    /* 004f6f42: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004f6f44: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6f47: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f6f49: jl 0x4f6f4d */ if ((fS!=fO)) goto L_004f6f4d;
L_004f6f4b:; BB(0x004f6f4b);
    /* 004f6f4b: mov edx, eax */ r_edx = r_eax;
L_004f6f4d:; BB(0x004f6f4d);
    /* 004f6f4d: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6f53: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004f6f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6f58: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f6f5du); f_007c1160();
    /* 004f6f5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f5f: je 0x4f6f68 */ if (fZ) goto L_004f6f68;
L_004f6f61:; BB(0x004f6f61);
    /* 004f6f61: mov esi, 1 */ r_esi = 0x1u;
    /* 004f6f66: jmp 0x4f6f7e */ goto L_004f6f7e;
L_004f6f68:; BB(0x004f6f68);
    /* 004f6f68: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f6f6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f6f70: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4f6f75u); f_007c1160();
    /* 004f6f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f77: je 0x4f6f7e */ if (fZ) goto L_004f6f7e;
L_004f6f79:; BB(0x004f6f79);
    /* 004f6f79: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_004f6f7e:; BB(0x004f6f7e);
    /* 004f6f7e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6f80: call 0x7bfe40 */ r_esp -= 4; W32(r_esp, 0x4f6f85u); f_007bfe40();
    /* 004f6f85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6f86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f88: je 0x4f6f9b */ if (fZ) goto L_004f6f9b;
L_004f6f8a:; BB(0x004f6f8a);
    /* 004f6f8a: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 004f6f8c: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x4f6f91u); f_007bfe50();
    /* 004f6f91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6f94: je 0x4f6f9b */ if (fZ) goto L_004f6f9b;
L_004f6f96:; BB(0x004f6f96);
    /* 004f6f96: mov esi, 1 */ r_esi = 0x1u;
L_004f6f9b:; BB(0x004f6f9b);
    /* 004f6f9b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004f6f9d: call 0x7bfe40 */ r_esp -= 4; W32(r_esp, 0x4f6fa2u); f_007bfe40();
    /* 004f6fa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6fa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6fa5: je 0x4f6fb8 */ if (fZ) goto L_004f6fb8;
L_004f6fa7:; BB(0x004f6fa7);
    /* 004f6fa7: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 004f6fa9: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x4f6faeu); f_007bfe50();
    /* 004f6fae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f6faf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f6fb1: je 0x4f6fb8 */ if (fZ) goto L_004f6fb8;
L_004f6fb3:; BB(0x004f6fb3);
    /* 004f6fb3: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_004f6fb8:; BB(0x004f6fb8);
    /* 004f6fb8: fild dword ptr [edi + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_edi+0xcu)));
    /* 004f6fbb: fld qword ptr [0x91e790] */ FPUSH(R_F64((u32)(0x91e790u)));
    /* 004f6fc1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 004f6fc4: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004f6fc8: call 0x84d1d4 */ r_esp -= 4; W32(r_esp, 0x4f6fcdu); f_0084d1d4();
    /* 004f6fcd: fadd dword ptr [0x91e7a0] */ ST(0) = ST(0) + R_F32((u32)(0x91e7a0u));
    /* 004f6fd3: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 004f6fd7: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004f6fdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f6fe1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004f6fe5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 004f6fe9: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f6fed: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004f6ff1: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004f6ff5: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 004f6ff9: imul edx, esi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_esi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004f6ffc: add edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f6ffe: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004f7000: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004f7003: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f7005: jl 0x4f7010 */ if ((fS!=fO)) goto L_004f7010;
L_004f7007:; BB(0x004f7007);
    /* 004f7007: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 004f700a: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f700c: jge 0x4f7010 */ if ((fS==fO)) goto L_004f7010;
L_004f700e:; BB(0x004f700e);
    /* 004f700e: mov ecx, edx */ r_ecx = r_edx;
L_004f7010:; BB(0x004f7010);
    /* 004f7010: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 004f7014: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004f7018: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7019: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004f701b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f701c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f701d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x4f7022u); f_00858bf5();
    /* 004f7022: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004f7024: sub ecx, dword ptr [edi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7027: movsx edx, byte ptr [esp + ecx + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+r_ecx+0x1cu));
    /* 004f702c: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 004f702f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f7031: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f7032: push 0x91e7bc */ { u32 v = 0x91e7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004f7037: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f703a: or ecx, dword ptr [edi + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004f703d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004f703e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4f7043u); f_0061cdb0();
    /* 004f7043: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f7046: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f7047: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f7048: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f7049: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f704a: ret  */ FN_RET(0x004f6e28); r_esp += 4; return;
L_004f704b:; BB(0x004f704b);
    /* 004f704b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004f704d: jmp 0x4f6f4d */ goto L_004f6f4d;
}

