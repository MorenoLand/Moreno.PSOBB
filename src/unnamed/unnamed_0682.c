#include "protos.h"

void f_006820a4(void) /* sub_6820A4 */
{
    FN_ENTER(0x006820a4);
    /* 006820a4: mov dword ptr [0xa904e8], 0x3f800000 */ W32((u32)(0xa904e8u), 0x3f800000u);
    /* 006820ae: mov dword ptr [0xa904ec], 0x41000000 */ W32((u32)(0xa904ecu), 0x41000000u);
    /* 006820b8: mov dword ptr [0xa904f0], 0x3fc00000 */ W32((u32)(0xa904f0u), 0x3fc00000u);
    /* 006820c2: ret  */ FN_RET(0x006820a4); r_esp += 4; return;
}

void f_006820c4(void) /* sub_6820C4 */
{
    FN_ENTER(0x006820c4);
    /* 006820c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006820c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006820c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006820c9: push 0x8ea788 */ { u32 v = 0x8ea788u; r_esp -= 4; W32(r_esp, v); }
    /* 006820ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006820d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006820d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006820dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006820df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006820e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006820e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006820e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006820eb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006820ed: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006820f4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6820f9u); f_008581c5();
    /* 006820f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006820fa: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006820fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006820ff: je 0x682144 */ if (fZ) goto L_00682144;
L_00682101:; BB(0x00682101);
    /* 00682101: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00682108: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068210f: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00682114: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682117: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682119: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0068211f: push dword ptr [edx + 0x48] */ { u32 v = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00682122: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x682127u); f_0052d584();
    /* 00682127: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068212a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00682131:; BB(0x00682131);
    /* 00682131: mov dword ptr [0xa904f4], eax */ W32((u32)(0xa904f4u), r_eax);
    /* 00682136: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682139: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00682140: mov esp, ebp */ r_esp = r_ebp;
    /* 00682142: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682143: ret  */ FN_RET(0x006820c4); r_esp += 4; return;
L_00682144:; BB(0x00682144);
    /* 00682144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00682146: jmp 0x682131 */ goto L_00682131;
}

void f_00682148(void) /* sub_682148 */
{
    FN_ENTER(0x00682148);
    /* 00682148: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00682149: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068214b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068214d: call 0x68216c */ r_esp -= 4; W32(r_esp, 0x682152u); f_0068216c();
    /* 00682152: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00682156: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00682158: jne 0x68215e */ if (!fZ) goto L_0068215e;
L_0068215a:; BB(0x0068215a);
    /* 0068215a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068215b: ret 4 */ FN_RET(0x00682148); r_esp += 8; return;
L_0068215e:; BB(0x0068215e);
    /* 0068215e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068215f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x682164u); f_005c2f74();
    /* 00682164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682165: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682166: ret 4 */ FN_RET(0x00682148); r_esp += 8; return;
}

void f_0068216c(void) /* sub_68216C */
{
    FN_ENTER(0x0068216c);
    /* 0068216c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068216d: mov ebp, esp */ r_ebp = r_esp;
    /* 0068216f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682171: push 0x8ea7a4 */ { u32 v = 0x8ea7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00682176: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068217c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068217d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00682184: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682187: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068218a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0068218d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00682190: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00682193: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00682196: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068219d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006821a0: mov dword ptr [eax], 0xb386c0 */ W32((u32)(r_eax), 0xb386c0u);
    /* 006821a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006821a7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6821acu); f_007b4e84();
    /* 006821ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006821ad: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006821b0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6821b5u); f_007b9c8c();
    /* 006821b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006821b8: mov edx, dword ptr [ecx + 0x36c] */ r_edx = R32((u32)(r_ecx+0x36cu));
    /* 006821be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006821c0: je 0x6821dc */ if (fZ) goto L_006821dc;
L_006821c2:; BB(0x006821c2);
    /* 006821c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006821c5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006821c9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006821ce: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006821d2: mov dword ptr [ecx + 0x36c], 0 */ W32((u32)(r_ecx+0x36cu), 0x0u);
L_006821dc:; BB(0x006821dc);
    /* 006821dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006821e3: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6821e8u); f_00770660();
    /* 006821e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006821eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006821f2: mov esp, ebp */ r_esp = r_ebp;
    /* 006821f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006821f5: ret  */ FN_RET(0x0068216c); r_esp += 4; return;
}

void f_006821f8(void) /* sub_6821F8 */
{
    FN_ENTER(0x006821f8);
    /* 006821f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006821f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006821fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006821fd: push 0x8ea7c0 */ { u32 v = 0x8ea7c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682202: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00682208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682209: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00682210: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682213: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00682216: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00682219: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0068221c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0068221f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00682222: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00682225: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00682229: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0068222c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0068222f: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00682232: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x682237u); f_00770748();
    /* 00682237: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068223e: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00682241: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00682244: mov dword ptr [edx], 0xb386c0 */ W32((u32)(r_edx), 0xb386c0u);
    /* 0068224a: mov ecx, dword ptr [0x9cb784] */ r_ecx = R32((u32)(0x9cb784u));
    /* 00682250: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 00682255: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00682258: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0068225a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068225d: mov dword ptr [edx + 0x348], ebx */ W32((u32)(r_edx+0x348u), r_ebx);
    /* 00682263: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00682266: mov dword ptr [edx + 0x34c], esi */ W32((u32)(r_edx+0x34cu), r_esi);
    /* 0068226c: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0068226f: mov dword ptr [edx + 0x350], edi */ W32((u32)(r_edx+0x350u), r_edi);
    /* 00682275: mov dword ptr [edx + 0x33c], ebx */ W32((u32)(r_edx+0x33cu), r_ebx);
    /* 0068227b: mov dword ptr [edx + 0x340], esi */ W32((u32)(r_edx+0x340u), r_esi);
    /* 00682281: mov dword ptr [edx + 0x344], edi */ W32((u32)(r_edx+0x344u), r_edi);
    /* 00682287: mov word ptr [edx + 0x378], cx */ W16((u32)(r_edx+0x378u), (u16)r_ecx);
    /* 0068228e: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 00682291: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00682294: mov dword ptr [edx + 0x354], ecx */ W32((u32)(r_edx+0x354u), r_ecx);
    /* 0068229a: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 0068229d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006822a0: mov dword ptr [edx + 0x358], ecx */ W32((u32)(r_edx+0x358u), r_ecx);
    /* 006822a6: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 006822a9: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006822ac: mov dword ptr [edx + 0x35c], ecx */ W32((u32)(r_edx+0x35cu), r_ecx);
    /* 006822b2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006822b4: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 006822b7: fstp dword ptr [edx + 0x354] */ W_F32((u32)(r_edx+0x354u), ST(0)); FPOP();
    /* 006822bd: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 006822c0: fstp dword ptr [edx + 0x358] */ W_F32((u32)(r_edx+0x358u), ST(0)); FPOP();
    /* 006822c6: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 006822c9: fstp dword ptr [edx + 0x35c] */ W_F32((u32)(r_edx+0x35cu), ST(0)); FPOP();
    /* 006822cf: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006822d2: mov dword ptr [edx + 0x360], ecx */ W32((u32)(r_edx+0x360u), r_ecx);
    /* 006822d8: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006822db: mov dword ptr [edx + 0x364], eax */ W32((u32)(r_edx+0x364u), r_eax);
    /* 006822e1: add edx, 0x348 */ {  u32 a = r_edx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006822e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006822e8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6822edu); f_00509590();
    /* 006822ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006822f0: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006822f3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006822f6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006822f9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006822fc: mov dword ptr [edx + 0x36c], eax */ W32((u32)(r_edx+0x36cu), r_eax);
    /* 00682302: mov eax, edx */ r_eax = r_edx;
    /* 00682304: mov dword ptr [edx + 0x374], 0 */ W32((u32)(r_edx+0x374u), 0x0u);
    /* 0068230e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682311: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00682318: mov esp, ebp */ r_esp = r_ebp;
    /* 0068231a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068231b: ret 0xc */ FN_RET(0x006821f8); r_esp += 16; return;
}

void f_00682320(void) /* sub_682320 */
{
    FN_ENTER(0x00682320);
    /* 00682320: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00682321: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00682322: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682325: mov edi, ecx */ r_edi = r_ecx;
    /* 00682327: fld dword ptr [0x93c29c] */ FPUSH(R_F32((u32)(0x93c29cu)));
    /* 0068232d: fadd dword ptr [edi + 0x370] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x370u));
    /* 00682333: fstp dword ptr [edi + 0x370] */ W_F32((u32)(r_edi+0x370u), ST(0)); FPOP();
    /* 00682339: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0068233e: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00682345: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0068234d: mov dword ptr [esp + 8], 0x41200000 */ W32((u32)(r_esp+0x8u), 0x41200000u);
    /* 00682355: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x68235au); f_0082d990();
    /* 0068235a: fild dword ptr [edi + 0x374] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x374u)));
    /* 00682360: mov ebx, dword ptr [edi + 0x374] */ r_ebx = R32((u32)(r_edi+0x374u));
    /* 00682366: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00682369: fadd dword ptr [ebx*4 + 0x93c278] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x93c278u));
    /* 00682370: fmul dword ptr [0x93c290] */ ST(0) = ST(0) * R_F32((u32)(0x93c290u));
    /* 00682376: fdiv dword ptr [0x93c28c] */ ST(0) = ST(0) / R_F32((u32)(0x93c28cu));
    /* 0068237c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068237e: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00682382: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00682387: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068238c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00682390: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00682394: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00682398: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0068239c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 006823a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6823a5u); f_0082d8bc();
    /* 006823a5: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006823a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006823aa: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006823ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006823b0: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x6823b5u); f_0082eab8();
    /* 006823b5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006823ba: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6823bfu); f_0082eb80();
    /* 006823bf: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006823c3: lea ebx, [edi + 0x348] */ r_ebx = (u32)(r_edi+0x348u);
    /* 006823c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006823cb: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6823d0u); f_0082ebac();
    /* 006823d0: mov eax, dword ptr [edi + 0x374] */ r_eax = R32((u32)(r_edi+0x374u));
    /* 006823d6: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006823d9: mov dword ptr [edi + 0x374], eax */ W32((u32)(r_edi+0x374u), r_eax);
    /* 006823df: lea edx, [edi + 0x354] */ r_edx = (u32)(r_edi+0x354u);
    /* 006823e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006823e7: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x6823ecu); f_0082ebac();
    /* 006823ec: mov ecx, dword ptr [edi + 0x36c] */ r_ecx = R32((u32)(r_edi+0x36cu));
    /* 006823f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006823f4: je 0x6823fc */ if (fZ) goto L_006823fc;
L_006823f6:; BB(0x006823f6);
    /* 006823f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006823f7: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6823fcu); f_00508db8();
L_006823fc:; BB(0x006823fc);
    /* 006823fc: movzx eax, word ptr [edi + 0x378] */ r_eax = (u32)R16((u32)(r_edi+0x378u));
    /* 00682403: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682404: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x682409u); f_007b4d18();
    /* 00682409: mov edx, eax */ r_edx = r_eax;
    /* 0068240b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068240e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682410: je 0x682483 */ if (fZ) goto L_00682483;
L_00682412:; BB(0x00682412);
    /* 00682412: fld dword ptr [edi + 0x34c] */ FPUSH(R_F32((u32)(r_edi+0x34cu)));
    /* 00682418: fcomp dword ptr [edx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x3cu))); FPOP();
    /* 0068241b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068241d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068241e: jae 0x68247d */ if (!fC) goto L_0068247d;
L_00682420:; BB(0x00682420);
    /* 00682420: mov edx, dword ptr [edi + 0x36c] */ r_edx = R32((u32)(r_edi+0x36cu));
    /* 00682426: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682428: je 0x682441 */ if (fZ) goto L_00682441;
L_0068242a:; BB(0x0068242a);
    /* 0068242a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0068242e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00682433: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00682437: mov dword ptr [edi + 0x36c], 0 */ W32((u32)(r_edi+0x36cu), 0x0u);
L_00682441:; BB(0x00682441);
    /* 00682441: mov dword ptr [edi + 0x354], 0 */ W32((u32)(r_edi+0x354u), 0x0u);
    /* 0068244b: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 00682450: mov dword ptr [edi + 0x358], 0 */ W32((u32)(r_edi+0x358u), 0x0u);
    /* 0068245a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068245b: mov dword ptr [edi + 0x35c], 0 */ W32((u32)(r_edi+0x35cu), 0x0u);
    /* 00682465: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x68246au); f_0050b510();
    /* 0068246a: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0068246e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00682473: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00682477: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068247a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068247b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068247c: ret  */ FN_RET(0x00682320); r_esp += 4; return;
L_0068247d:; BB(0x0068247d);
    /* 0068247d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00682480: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682481: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00682482: ret  */ FN_RET(0x00682320); r_esp += 4; return;
L_00682483:; BB(0x00682483);
    /* 00682483: mov edx, dword ptr [edi + 0x36c] */ r_edx = R32((u32)(r_edi+0x36cu));
    /* 00682489: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068248b: je 0x6824a4 */ if (fZ) goto L_006824a4;
L_0068248d:; BB(0x0068248d);
    /* 0068248d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00682491: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00682496: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0068249a: mov dword ptr [edi + 0x36c], 0 */ W32((u32)(r_edi+0x36cu), 0x0u);
L_006824a4:; BB(0x006824a4);
    /* 006824a4: mov dword ptr [edi + 0x354], 0 */ W32((u32)(r_edi+0x354u), 0x0u);
    /* 006824ae: mov dword ptr [edi + 0x358], 0 */ W32((u32)(r_edi+0x358u), 0x0u);
    /* 006824b8: mov dword ptr [edi + 0x35c], 0 */ W32((u32)(r_edi+0x35cu), 0x0u);
    /* 006824c2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006824c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006824c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006824c7: ret  */ FN_RET(0x00682320); r_esp += 4; return;
}

void f_006824c8(void) /* sub_6824C8 */
{
    FN_ENTER(0x006824c8);
    /* 006824c8: mov dword ptr [0xa904fc], 0x3f800000 */ W32((u32)(0xa904fcu), 0x3f800000u);
    /* 006824d2: mov dword ptr [0xa90500], 0x41000000 */ W32((u32)(0xa90500u), 0x41000000u);
    /* 006824dc: mov dword ptr [0xa90504], 0x3fc00000 */ W32((u32)(0xa90504u), 0x3fc00000u);
    /* 006824e6: ret  */ FN_RET(0x006824c8); r_esp += 4; return;
}

void f_006824e8(void) /* sub_6824E8 */
{
    FN_ENTER(0x006824e8);
    /* 006824e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006824e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006824eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006824ed: call 0x68250c */ r_esp -= 4; W32(r_esp, 0x6824f2u); f_0068250c();
    /* 006824f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006824f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006824f8: jne 0x6824fe */ if (!fZ) goto L_006824fe;
L_006824fa:; BB(0x006824fa);
    /* 006824fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006824fb: ret 4 */ FN_RET(0x006824e8); r_esp += 8; return;
L_006824fe:; BB(0x006824fe);
    /* 006824fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006824ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x682504u); f_005c2f74();
    /* 00682504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682505: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682506: ret 4 */ FN_RET(0x006824e8); r_esp += 8; return;
}

void f_0068250c(void) /* sub_68250C */
{
    FN_ENTER(0x0068250c);
    /* 0068250c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068250d: mov ebp, esp */ r_ebp = r_esp;
    /* 0068250f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682511: push 0x8ea7dc */ { u32 v = 0x8ea7dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00682516: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0068251c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068251d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00682524: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682527: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0068252a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0068252d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00682530: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00682533: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00682536: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0068253d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682540: mov dword ptr [ecx], 0xb388d8 */ W32((u32)(r_ecx), 0xb388d8u);
    /* 00682546: call dword ptr [0xb3890c] */ { u32 t = R32((u32)(0xb3890cu)); r_esp -= 4; W32(r_esp, 0x68254cu); call_ind(t); }
    /* 0068254c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068254f: call 0x67cc20 */ r_esp -= 4; W32(r_esp, 0x682554u); f_0067cc20();
    /* 00682554: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068255b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068255e: call 0x67c61c */ r_esp -= 4; W32(r_esp, 0x682563u); f_0067c61c();
    /* 00682563: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682566: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068256d: mov esp, ebp */ r_esp = r_ebp;
    /* 0068256f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682570: ret  */ FN_RET(0x0068250c); r_esp += 4; return;
}

void f_00682574(void) /* sub_682574 */
{
    FN_ENTER(0x00682574);
    /* 00682574: mov ecx, dword ptr [0xa90518] */ r_ecx = R32((u32)(0xa90518u));
    /* 0068257a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068257c: je 0x682587 */ if (fZ) goto L_00682587;
L_0068257e:; BB(0x0068257e);
    /* 0068257e: je 0x682587 */ if (fZ) goto L_00682587;
L_00682580:; BB(0x00682580);
    /* 00682580: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00682582: call 0x44bbac */ r_esp -= 4; W32(r_esp, 0x682587u); f_0044bbac();
L_00682587:; BB(0x00682587);
    /* 00682587: mov dword ptr [0xa90518], 0 */ W32((u32)(0xa90518u), 0x0u);
    /* 00682591: ret  */ FN_RET(0x00682574); r_esp += 4; return;
}

void f_00682594(void) /* sub_682594 */
{
    FN_ENTER(0x00682594);
    /* 00682594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682595: mov ebp, esp */ r_ebp = r_esp;
    /* 00682597: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682599: push 0x8ea848 */ { u32 v = 0x8ea848u; r_esp -= 4; W32(r_esp, v); }
    /* 0068259e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006825a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006825a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006825ac: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006825af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006825b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006825b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006825b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006825bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006825be: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006825c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006825c4: call 0x67c674 */ r_esp -= 4; W32(r_esp, 0x6825c9u); f_0067c674();
    /* 006825c9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006825d0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006825d3: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006825d6: mov dword ptr [eax], 0xb388d8 */ W32((u32)(r_eax), 0xb388d8u);
    /* 006825dc: mov edx, dword ptr [0x9cb7b4] */ r_edx = R32((u32)(0x9cb7b4u));
    /* 006825e2: mov dword ptr [eax + 0x138], 4 */ W32((u32)(r_eax+0x138u), 0x4u);
    /* 006825ec: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006825ef: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 006825f1: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 006825f4: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 006825f7: mov dword ptr [eax + 0x3c], ebx */ W32((u32)(r_eax+0x3cu), r_ebx);
    /* 006825fa: mov esi, dword ptr [edi + 8] */ r_esi = R32((u32)(r_edi+0x8u));
    /* 006825fd: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 00682600: movzx edx, word ptr [edi + 0xc] */ r_edx = (u32)R16((u32)(r_edi+0xcu));
    /* 00682604: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682605: mov word ptr [eax + 0x17c], dx */ W16((u32)(r_eax+0x17cu), (u16)r_edx);
    /* 0068260c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x682611u); f_007b4d18();
    /* 00682611: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682612: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00682615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682617: je 0x68261f */ if (fZ) goto L_0068261f;
L_00682619:; BB(0x00682619);
    /* 00682619: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0068261c: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_0068261f:; BB(0x0068261f);
    /* 0068261f: mov edi, dword ptr [0xa9049c] */ r_edi = R32((u32)(0xa9049cu));
    /* 00682625: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0068262b: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0068262e: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00682631: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 00682637: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 0068263a: mov dword ptr [ecx + 0xd8], 0x9cb7b8 */ W32((u32)(r_ecx+0xd8u), 0x9cb7b8u);
    /* 00682644: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00682647: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0068264d: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 00682653: mov eax, 1 */ r_eax = 0x1u;
    /* 00682658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682659: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00682660: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x682665u); f_007aa4c8();
    /* 00682665: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00682668: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0068266b: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00682672: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00682679: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068267b: mov edx, 1 */ r_edx = 0x1u;
    /* 00682680: mov word ptr [ecx + 0x190], dx */ W16((u32)(r_ecx+0x190u), (u16)r_edx);
    /* 00682687: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 0068268a: mov dword ptr [ecx + 0x194], ebx */ W32((u32)(r_ecx+0x194u), r_ebx);
    /* 00682690: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00682693: mov dword ptr [ecx + 0x198], edi */ W32((u32)(r_ecx+0x198u), r_edi);
    /* 00682699: mov dword ptr [ecx + 0x19c], 0 */ W32((u32)(r_ecx+0x19cu), 0x0u);
    /* 006826a3: mov dword ptr [ecx + 0x134], 2 */ W32((u32)(r_ecx+0x134u), 0x2u);
    /* 006826ad: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x6826b0u); call_ind(t); }
    /* 006826b0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006826b3: mov dword ptr [eax + 0x1ac], 0 */ W32((u32)(r_eax+0x1acu), 0x0u);
    /* 006826bd: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6826c2u); f_00807ac0();
    /* 006826c2: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006826c5: jl 0x682715 */ if ((fS!=fO)) goto L_00682715;
L_006826c7:; BB(0x006826c7);
    /* 006826c7: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006826ca: jg 0x682715 */ if ((!fZ&&fS==fO)) goto L_00682715;
L_006826cc:; BB(0x006826cc);
    /* 006826cc: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006826d3: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 006826d8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6826ddu); f_005caba4();
    /* 006826dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006826de: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006826e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006826e3: je 0x68270c */ if (fZ) goto L_0068270c;
L_006826e5:; BB(0x006826e5);
    /* 006826e5: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006826ec: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006826f3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006826f6: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 006826f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006826fb: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006826fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006826ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682700: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x682705u); f_00684ab0();
    /* 00682705: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0068270c:; BB(0x0068270c);
    /* 0068270c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00682713: jmp 0x68275c */ goto L_0068275c;
L_00682715:; BB(0x00682715);
    /* 00682715: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0068271c: push 0xac */ { u32 v = 0xacu; r_esp -= 4; W32(r_esp, v); }
    /* 00682721: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x682726u); f_005caba4();
    /* 00682726: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682727: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0068272a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068272c: je 0x682755 */ if (fZ) goto L_00682755;
L_0068272e:; BB(0x0068272e);
    /* 0068272e: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00682735: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0068273c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068273f: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00682742: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682744: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00682747: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682748: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682749: call 0x684ab0 */ r_esp -= 4; W32(r_esp, 0x68274eu); f_00684ab0();
    /* 0068274e: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00682755:; BB(0x00682755);
    /* 00682755: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_0068275c:; BB(0x0068275c);
    /* 0068275c: mov eax, esi */ r_eax = r_esi;
    /* 0068275e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00682761: movzx edx, byte ptr [eax + 0x1c] */ r_edx = (u32)R8((u32)(r_eax+0x1cu));
    /* 00682765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682766: call 0x6805c0 */ r_esp -= 4; W32(r_esp, 0x68276bu); f_006805c0();
    /* 0068276b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068276e: mov eax, dword ptr [ecx + 0x198] */ r_eax = R32((u32)(r_ecx+0x198u));
    /* 00682774: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682777: jne 0x682788 */ if (!fZ) goto L_00682788;
L_00682779:; BB(0x00682779);
    /* 00682779: mov eax, dword ptr [ecx + 0x154] */ r_eax = R32((u32)(r_ecx+0x154u));
    /* 0068277f: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00682782: mov dword ptr [ecx + 0x154], eax */ W32((u32)(r_ecx+0x154u), r_eax);
L_00682788:; BB(0x00682788);
    /* 00682788: mov eax, esi */ r_eax = r_esi;
    /* 0068278a: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068278d: mov ebx, dword ptr [ecx + 0x194] */ r_ebx = R32((u32)(r_ecx+0x194u));
    /* 00682793: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00682799: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068279b: jne 0x68285c */ if (!fZ) goto L_0068285c;
L_006827a1:; BB(0x006827a1);
    /* 006827a1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006827a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006827a5: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 006827ac: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x6827b1u); f_0067c75c();
    /* 006827b1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006827b4: movzx ebx, word ptr [ecx + 0x17c] */ r_ebx = (u32)R16((u32)(r_ecx+0x17cu));
    /* 006827bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006827bc: mov edx, 1 */ r_edx = 0x1u;
    /* 006827c1: mov dword ptr [ecx + 0x194], edx */ W32((u32)(r_ecx+0x194u), r_edx);
    /* 006827c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006827c9: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 006827d0: mov dword ptr [ecx + 0x19c], edx */ W32((u32)(r_ecx+0x19cu), r_edx);
    /* 006827d6: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6827dbu); f_007b4d18();
    /* 006827db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006827dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006827de: je 0x6827f2 */ if (fZ) goto L_006827f2;
L_006827e0:; BB(0x006827e0);
    /* 006827e0: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006827e3: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006827e6: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006827e9: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 006827ec: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006827ef: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
L_006827f2:; BB(0x006827f2);
    /* 006827f2: fld dword ptr [0x93c2cc] */ FPUSH(R_F32((u32)(0x93c2ccu)));
    /* 006827f8: fadd dword ptr [ebp - 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffccu));
    /* 006827fb: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006827fe: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00682805: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068280a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x68280fu); f_005caba4();
    /* 0068280f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682810: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00682813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682815: je 0x68283e */ if (fZ) goto L_0068283e;
L_00682817:; BB(0x00682817);
    /* 00682817: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0068281e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00682825: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00682828: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0068282a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068282b: mov ecx, eax */ r_ecx = r_eax;
    /* 0068282d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068282f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00682832: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x682837u); f_0068327c();
    /* 00682837: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0068283e:; BB(0x0068283e);
    /* 0068283e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00682845: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00682848: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068284a: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x68284fu); f_0067d660();
    /* 0068284f: push 0x93c2d0 */ { u32 v = 0x93c2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682854: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x682859u); f_00814f0c();
    /* 00682859: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068285a: jmp 0x682878 */ goto L_00682878;
L_0068285c:; BB(0x0068285c);
    /* 0068285c: movzx eax, word ptr [ecx + 0x17c] */ r_eax = (u32)R16((u32)(r_ecx+0x17cu));
    /* 00682863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682864: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00682866: call 0x67cd64 */ r_esp -= 4; W32(r_esp, 0x68286bu); f_0067cd64();
    /* 0068286b: push 0x93c2dc */ { u32 v = 0x93c2dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00682870: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x682875u); f_00814f0c();
    /* 00682875: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00682878:; BB(0x00682878);
    /* 00682878: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0068287b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068287e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00682881: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00682884: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682887: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068288e: mov esp, ebp */ r_esp = r_ebp;
    /* 00682890: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682891: ret 4 */ FN_RET(0x00682594); r_esp += 8; return;
}

void f_00682894(void) /* sub_682894 */
{
    FN_ENTER(0x00682894);
    /* 00682894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682895: mov ebp, esp */ r_ebp = r_esp;
    /* 00682897: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682899: push 0x8ea870 */ { u32 v = 0x8ea870u; r_esp -= 4; W32(r_esp, v); }
    /* 0068289e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006828a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006828a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006828ac: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006828af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006828b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006828b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006828b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006828bb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006828be: mov ecx, dword ptr [ecx + 0x1ac] */ r_ecx = R32((u32)(r_ecx+0x1acu));
    /* 006828c4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006828c7: cmp ecx, 0x32 */ {  u32 a = r_ecx; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006828ca: je 0x682a34 */ if (fZ) goto L_00682a34;
L_006828d0:; BB(0x006828d0);
    /* 006828d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006828d3: mov dword ptr [eax + 0x1ac], ecx */ W32((u32)(r_eax+0x1acu), r_ecx);
L_006828d9:; BB(0x006828d9);
    /* 006828d9: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006828dc: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 006828df: fcomp dword ptr [0x93c2c0] */ fx_compare(ST(0), R_F32((u32)(0x93c2c0u))); FPOP();
    /* 006828e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006828e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006828e8: je 0x6829ef */ if (fZ) goto L_006829ef;
L_006828ee:; BB(0x006828ee);
    /* 006828ee: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006828f1: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
L_006828f8:; BB(0x006828f8);
    /* 006828f8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006828fb: mov word ptr [ecx + 0x190], ax */ W16((u32)(r_ecx+0x190u), (u16)r_eax);
    /* 00682902: call 0x67c7d8 */ r_esp -= 4; W32(r_esp, 0x682907u); f_0067c7d8();
    /* 00682907: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068290a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x68290fu); f_007aa094();
    /* 0068290f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00682912: call 0x67cc34 */ r_esp -= 4; W32(r_esp, 0x682917u); f_0067cc34();
    /* 00682917: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068291a: fild dword ptr [ecx + 0x1ac] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x1acu)));
    /* 00682920: fcom dword ptr [0x93c2b8] */ fx_compare(ST(0), R_F32((u32)(0x93c2b8u))); 
    /* 00682926: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00682928: movzx edx, word ptr [ecx + 0x14c] */ r_edx = (u32)R16((u32)(r_ecx+0x14cu));
    /* 0068292f: add edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00682932: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00682935: mov word ptr [ecx + 0x14c], dx */ W16((u32)(r_ecx+0x14cu), (u16)r_edx);
    /* 0068293c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068293d: je 0x6829a3 */ if (fZ) goto L_006829a3;
L_0068293f:; BB(0x0068293f);
    /* 0068293f: fcom dword ptr [0x93c2b4] */ fx_compare(ST(0), R_F32((u32)(0x93c2b4u))); 
    /* 00682945: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00682947: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00682948: jbe 0x68296e */ if ((fC||fZ)) goto L_0068296e;
L_0068294a:; BB(0x0068294a);
    /* 0068294a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0068294c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0068294f: fld dword ptr [edx + 0x180] */ FPUSH(R_F32((u32)(r_edx+0x180u)));
    /* 00682955: fcom dword ptr [0x93c2bc] */ fx_compare(ST(0), R_F32((u32)(0x93c2bcu))); 
    /* 0068295b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0068295d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0068295e: jbe 0x68296e */ if ((fC||fZ)) goto L_0068296e;
L_00682960:; BB(0x00682960);
    /* 00682960: fadd qword ptr [0x93c2a0] */ ST(0) = ST(0) + R_F64((u32)(0x93c2a0u));
    /* 00682966: mov eax, edx */ r_eax = r_edx;
    /* 00682968: fst dword ptr [eax + 0x180] */ W_F32((u32)(r_eax+0x180u), ST(0));
L_0068296e:; BB(0x0068296e);
    /* 0068296e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00682970: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00682973: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 00682979: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068297b: je 0x682992 */ if (fZ) goto L_00682992;
L_0068297d:; BB(0x0068297d);
    /* 0068297d: mov edx, eax */ r_edx = r_eax;
    /* 0068297f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00682981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682983: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682984: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682985: push 0xb6 */ { u32 v = 0xb6u; r_esp -= 4; W32(r_esp, v); }
    /* 0068298a: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x68298fu); f_008144b0();
    /* 0068298f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00682992:; BB(0x00682992);
    /* 00682992: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00682995: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682998: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068299f: mov esp, ebp */ r_esp = r_ebp;
    /* 006829a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006829a2: ret  */ FN_RET(0x00682894); r_esp += 4; return;
L_006829a3:; BB(0x006829a3);
    /* 006829a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006829a5: mov eax, ecx */ r_eax = r_ecx;
    /* 006829a7: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 006829ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006829af: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6829b4u); f_007b4d18();
    /* 006829b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006829b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006829b7: je 0x6829e1 */ if (fZ) goto L_006829e1;
L_006829b9:; BB(0x006829b9);
    /* 006829b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006829bb: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006829bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006829c2: push dword ptr [eax + 0x150] */ { u32 v = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, v); }
    /* 006829c8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006829ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006829cb: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x6829d0u); f_0067d488();
    /* 006829d0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006829d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006829d6: fild dword ptr [eax + 0x1ac] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1acu)));
    /* 006829dc: jmp 0x68293f */ goto L_0068293f;
L_006829e1:; BB(0x006829e1);
    /* 006829e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006829e4: fild dword ptr [eax + 0x1ac] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x1acu)));
    /* 006829ea: jmp 0x68293f */ goto L_0068293f;
L_006829ef:; BB(0x006829ef);
    /* 006829ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006829f2: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 006829f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006829fc: jne 0x6828f8 */ if (!fZ) goto L_006828f8;
L_00682a02:; BB(0x00682a02);
    /* 00682a02: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00682a05: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00682a07: call 0x67c75c */ r_esp -= 4; W32(r_esp, 0x682a0cu); f_0067c75c();
    /* 00682a0c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00682a0f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00682a11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00682a13: mov dword ptr [ecx + 0x1ac], eax */ W32((u32)(r_ecx+0x1acu), r_eax);
    /* 00682a19: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00682a20: call 0x67d660 */ r_esp -= 4; W32(r_esp, 0x682a25u); f_0067d660();
    /* 00682a25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00682a28: movsx eax, word ptr [eax + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xb8u));
    /* 00682a2f: jmp 0x6828f8 */ goto L_006828f8;
L_00682a34:; BB(0x00682a34);
    /* 00682a34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00682a37: mov edx, dword ptr [eax + 0x19c] */ r_edx = R32((u32)(r_eax+0x19cu));
    /* 00682a3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682a3f: je 0x682a4c */ if (fZ) goto L_00682a4c;
L_00682a41:; BB(0x00682a41);
    /* 00682a41: mov dword ptr [eax + 0x1ac], ecx */ W32((u32)(r_eax+0x1acu), r_ecx);
    /* 00682a47: jmp 0x6828d9 */ goto L_006828d9;
L_00682a4c:; BB(0x00682a4c);
    /* 00682a4c: movzx edx, word ptr [eax + 0x17c] */ r_edx = (u32)R16((u32)(r_eax+0x17cu));
    /* 00682a53: mov dword ptr [eax + 0x19c], 1 */ W32((u32)(r_eax+0x19cu), 0x1u);
    /* 00682a5d: mov dword ptr [eax + 0x1ac], 0 */ W32((u32)(r_eax+0x1acu), 0x0u);
    /* 00682a67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682a68: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x682a6du); f_007b4d18();
    /* 00682a6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682a70: je 0x682a84 */ if (fZ) goto L_00682a84;
L_00682a72:; BB(0x00682a72);
    /* 00682a72: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00682a75: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00682a78: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00682a7b: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00682a7e: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00682a81: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_00682a84:; BB(0x00682a84);
    /* 00682a84: fld dword ptr [0x93c2c4] */ FPUSH(R_F32((u32)(0x93c2c4u)));
    /* 00682a8a: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 00682a8d: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00682a90: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00682a97: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682a9c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x682aa1u); f_005caba4();
    /* 00682aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682aa2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00682aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682aa7: je 0x682ad1 */ if (fZ) goto L_00682ad1;
L_00682aa9:; BB(0x00682aa9);
    /* 00682aa9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00682ab0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00682ab7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00682aba: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00682abd: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00682abf: mov ecx, eax */ r_ecx = r_eax;
    /* 00682ac1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682ac2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00682ac4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00682ac5: call 0x68327c */ r_esp -= 4; W32(r_esp, 0x682acau); f_0068327c();
    /* 00682aca: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00682ad1:; BB(0x00682ad1);
    /* 00682ad1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00682ad8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00682adb: mov ecx, dword ptr [eax + 0x1ac] */ r_ecx = R32((u32)(r_eax+0x1acu));
    /* 00682ae1: jmp 0x6828d9 */ goto L_006828d9;
}

void f_00682ae8(void) /* sub_682AE8 */
{
    FN_ENTER(0x00682ae8);
    /* 00682ae8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682ae9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00682aeb: mov eax, dword ptr [ebp + 0x19c] */ r_eax = R32((u32)(r_ebp+0x19cu));
    /* 00682af1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00682af3: jne 0x682af7 */ if (!fZ) goto L_00682af7;
L_00682af5:; BB(0x00682af5);
    /* 00682af5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682af6: ret  */ FN_RET(0x00682ae8); r_esp += 4; return;
L_00682af7:; BB(0x00682af7);
    /* 00682af7: mov ecx, dword ptr [0xa90518] */ r_ecx = R32((u32)(0xa90518u));
    /* 00682afd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682aff: movsx eax, word ptr [ebp + 0x14c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14cu));
    /* 00682b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682b07: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x682b0cu); f_0052ddac();
    /* 00682b0c: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x682b11u); f_0082dbac();
    /* 00682b11: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00682b14: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x682b19u); f_00829cc8();
    /* 00682b19: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x682b1eu); f_0082d7b0();
    /* 00682b1e: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 00682b21: push dword ptr [ebp + 0x3c] */ { u32 v = R32((u32)(r_ebp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00682b24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00682b26: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00682b29: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x682b2eu); f_00830b74();
    /* 00682b2e: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00682b31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00682b33: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x682b38u); f_0082d8bc();
    /* 00682b38: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00682b3d: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00682b43: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00682b48: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 00682b4e: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00682b54: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00682b5a: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 00682b60: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00682b66: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 00682b6c: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00682b72: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00682b78: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00682b7e: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00682b84: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00682b8a: or eax, 0x200820 */ {  u32 a = r_eax; u32 b = 0x200820u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00682b8f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00682b94: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x682b99u); f_0082fa9c();
    /* 00682b99: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00682b9e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682ba0: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x682ba5u); f_0082d6fc();
    /* 00682ba5: lea eax, [ebp + 0x180] */ r_eax = (u32)(r_ebp+0x180u);
    /* 00682bab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682bac: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x682bb1u); f_0082d710();
    /* 00682bb1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00682bb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00682bb6: call 0x67d5e0 */ r_esp -= 4; W32(r_esp, 0x682bbbu); f_0067d5e0();
    /* 00682bbb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00682bbd: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x682bc2u); f_007aa668();
    /* 00682bc2: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x682bc7u); f_0082faac();
    /* 00682bc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00682bc9: call 0x67ccc8 */ r_esp -= 4; W32(r_esp, 0x682bceu); f_0067ccc8();
    /* 00682bce: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00682bd3: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00682bd9: mov ecx, dword ptr [0xaab508] */ r_ecx = R32((u32)(0xaab508u));
    /* 00682bdf: mov ebp, dword ptr [0xaab50c] */ r_ebp = R32((u32)(0xaab50cu));
    /* 00682be5: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00682bea: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 00682bef: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00682bf5: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 00682bfb: mov dword ptr [0xaf0374], ebp */ W32((u32)(0xaf0374u), r_ebp);
    /* 00682c01: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 00682c06: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 00682c0b: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 00682c10: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00682c15: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00682c1a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x682c1fu); f_0082da80();
    /* 00682c1f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x682c24u); f_0082dab0();
    /* 00682c24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682c25: ret  */ FN_RET(0x00682ae8); r_esp += 4; return;
}

void f_00682c28(void) /* sub_682C28 */
{
    FN_ENTER(0x00682c28);
    /* 00682c28: mov dword ptr [0xa9050c], 0x3f800000 */ W32((u32)(0xa9050cu), 0x3f800000u);
    /* 00682c32: mov dword ptr [0xa90510], 0x41000000 */ W32((u32)(0xa90510u), 0x41000000u);
    /* 00682c3c: mov dword ptr [0xa90514], 0x3fc00000 */ W32((u32)(0xa90514u), 0x3fc00000u);
    /* 00682c46: ret  */ FN_RET(0x00682c28); r_esp += 4; return;
}

void f_00682c48(void) /* sub_682C48 */
{
    FN_ENTER(0x00682c48);
    /* 00682c48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682c49: mov ebp, esp */ r_ebp = r_esp;
    /* 00682c4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682c4d: push 0x8ea898 */ { u32 v = 0x8ea898u; r_esp -= 4; W32(r_esp, v); }
    /* 00682c52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00682c58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682c59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00682c60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682c63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00682c66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00682c69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00682c6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00682c6f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00682c71: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00682c78: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x682c7du); f_008581c5();
    /* 00682c7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682c7e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00682c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682c83: je 0x682cce */ if (fZ) goto L_00682cce;
L_00682c85:; BB(0x00682c85);
    /* 00682c85: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00682c8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00682c93: mov eax, dword ptr [0xa9049c] */ r_eax = R32((u32)(0xa9049cu));
    /* 00682c98: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682c9b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682c9d: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00682ca3: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00682ca6: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00682ca9: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x682caeu); f_0052d584();
    /* 00682cae: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682cb1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00682cb8:; BB(0x00682cb8);
    /* 00682cb8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00682cbb: mov dword ptr [0xa90518], eax */ W32((u32)(0xa90518u), r_eax);
    /* 00682cc0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682cc3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00682cca: mov esp, ebp */ r_esp = r_ebp;
    /* 00682ccc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682ccd: ret  */ FN_RET(0x00682c48); r_esp += 4; return;
L_00682cce:; BB(0x00682cce);
    /* 00682cce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00682cd0: jmp 0x682cb8 */ goto L_00682cb8;
}

void f_00682cd4(void) /* sub_682CD4 */
{
    FN_ENTER(0x00682cd4);
    /* 00682cd4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00682cd5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00682cd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00682cd9: call 0x682cf8 */ r_esp -= 4; W32(r_esp, 0x682cdeu); f_00682cf8();
    /* 00682cde: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00682ce2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00682ce4: jne 0x682cea */ if (!fZ) goto L_00682cea;
L_00682ce6:; BB(0x00682ce6);
    /* 00682ce6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682ce7: ret 4 */ FN_RET(0x00682cd4); r_esp += 8; return;
L_00682cea:; BB(0x00682cea);
    /* 00682cea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00682ceb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x682cf0u); f_005c2f74();
    /* 00682cf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682cf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00682cf2: ret 4 */ FN_RET(0x00682cd4); r_esp += 8; return;
}

void f_00682cf8(void) /* sub_682CF8 */
{
    FN_ENTER(0x00682cf8);
    /* 00682cf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682cf9: mov ebp, esp */ r_ebp = r_esp;
    /* 00682cfb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682cfd: push 0x8ea8b4 */ { u32 v = 0x8ea8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00682d02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00682d08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682d09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00682d10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682d13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00682d16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00682d19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00682d1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00682d1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00682d22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00682d29: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682d2c: mov dword ptr [eax], 0xb38960 */ W32((u32)(r_eax), 0xb38960u);
    /* 00682d32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682d33: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x682d38u); f_007b4e84();
    /* 00682d38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682d39: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682d3c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x682d41u); f_007b9c8c();
    /* 00682d41: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00682d48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682d4b: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x682d50u); f_00770660();
    /* 00682d50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682d53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00682d5a: mov esp, ebp */ r_esp = r_ebp;
    /* 00682d5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682d5d: ret  */ FN_RET(0x00682cf8); r_esp += 4; return;
}

void f_00682d60(void) /* sub_682D60 */
{
    FN_ENTER(0x00682d60);
    /* 00682d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00682d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00682d65: push 0x8ea8d0 */ { u32 v = 0x8ea8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00682d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682d71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00682d78: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682d7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00682d7e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00682d81: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00682d84: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00682d87: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00682d8a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00682d8d: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00682d91: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00682d94: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00682d97: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00682d9a: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x682d9fu); f_00770748();
    /* 00682d9f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00682da6: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00682da9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00682dac: mov dword ptr [edx], 0xb38960 */ W32((u32)(r_edx), 0xb38960u);
    /* 00682db2: mov ecx, dword ptr [0x9cb7d8] */ r_ecx = R32((u32)(0x9cb7d8u));
    /* 00682db8: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00682dbb: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00682dbd: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 00682dc0: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00682dc3: mov dword ptr [edx + 0x3c], esi */ W32((u32)(r_edx+0x3cu), r_esi);
    /* 00682dc6: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00682dc9: mov dword ptr [edx + 0x40], edi */ W32((u32)(r_edx+0x40u), r_edi);
    /* 00682dcc: mov dword ptr [edx + 0x50], ebx */ W32((u32)(r_edx+0x50u), r_ebx);
    /* 00682dcf: mov dword ptr [edx + 0x54], esi */ W32((u32)(r_edx+0x54u), r_esi);
    /* 00682dd2: mov dword ptr [edx + 0x58], edi */ W32((u32)(r_edx+0x58u), r_edi);
    /* 00682dd5: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00682dd8: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00682ddb: mov dword ptr [edx + 0x33c], ecx */ W32((u32)(r_edx+0x33cu), r_ecx);
    /* 00682de1: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00682de4: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00682de7: mov dword ptr [edx + 0x340], ecx */ W32((u32)(r_edx+0x340u), r_ecx);
    /* 00682ded: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00682df0: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00682df3: mov dword ptr [edx + 0x344], ecx */ W32((u32)(r_edx+0x344u), r_ecx);
    /* 00682df9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00682dfb: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00682dfe: fstp dword ptr [edx + 0x33c] */ W_F32((u32)(r_edx+0x33cu), ST(0)); FPOP();
    /* 00682e04: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00682e07: fstp dword ptr [edx + 0x340] */ W_F32((u32)(r_edx+0x340u), ST(0)); FPOP();
    /* 00682e0d: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00682e10: fstp dword ptr [edx + 0x344] */ W_F32((u32)(r_edx+0x344u), ST(0)); FPOP();
    /* 00682e16: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00682e19: mov dword ptr [edx + 0x34c], eax */ W32((u32)(r_edx+0x34cu), r_eax);
    /* 00682e1f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00682e22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682e23: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x682e28u); f_007b4d18();
    /* 00682e28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682e29: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00682e2c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00682e2e: mov dword ptr [ecx + 0x358], eax */ W32((u32)(r_ecx+0x358u), r_eax);
    /* 00682e34: push 0x9cb7dc */ { u32 v = 0x9cb7dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00682e39: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x682e3eu); f_007b9a88();
    /* 00682e3e: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00682e41: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x682e46u); f_007b999c();
    /* 00682e46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00682e47: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00682e4a: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x682e4fu); f_007b4f54();
    /* 00682e4f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00682e52: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00682e55: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00682e58: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00682e5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00682e5d: mov word ptr [eax + 0x370], cx */ W16((u32)(r_eax+0x370u), (u16)r_ecx);
    /* 00682e64: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00682e69: mov word ptr [eax + 0x35c], dx */ W16((u32)(r_eax+0x35cu), (u16)r_edx);
    /* 00682e70: mov word ptr [eax + 0x35e], dx */ W16((u32)(r_eax+0x35eu), (u16)r_edx);
    /* 00682e77: mov word ptr [eax + 0x360], dx */ W16((u32)(r_eax+0x360u), (u16)r_edx);
    /* 00682e7e: mov word ptr [eax + 0x362], dx */ W16((u32)(r_eax+0x362u), (u16)r_edx);
    /* 00682e85: mov word ptr [eax + 0x364], dx */ W16((u32)(r_eax+0x364u), (u16)r_edx);
    /* 00682e8c: mov word ptr [eax + 0x366], dx */ W16((u32)(r_eax+0x366u), (u16)r_edx);
    /* 00682e93: mov word ptr [eax + 0x368], dx */ W16((u32)(r_eax+0x368u), (u16)r_edx);
    /* 00682e9a: mov word ptr [eax + 0x36a], dx */ W16((u32)(r_eax+0x36au), (u16)r_edx);
    /* 00682ea1: mov word ptr [eax + 0x36c], dx */ W16((u32)(r_eax+0x36cu), (u16)r_edx);
    /* 00682ea8: mov word ptr [eax + 0x36e], dx */ W16((u32)(r_eax+0x36eu), (u16)r_edx);
    /* 00682eaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00682eb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00682eb9: mov esp, ebp */ r_esp = r_ebp;
    /* 00682ebb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00682ebc: ret 0xc */ FN_RET(0x00682d60); r_esp += 16; return;
}

void f_00682ec0(void) /* sub_682EC0 */
{
    FN_ENTER(0x00682ec0);
    /* 00682ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00682ec1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00682ec4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00682ec6: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00682ec9: lea edx, [ebp + 0x33c] */ r_edx = (u32)(r_ebp+0x33cu);
    /* 00682ecf: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00682ed3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00682ed7: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00682eda: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00682ede: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00682ee1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00682ee5: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x682eeau); f_0082ebac();
    /* 00682eea: fld dword ptr [0x93c2f4] */ FPUSH(R_F32((u32)(0x93c2f4u)));
    /* 00682ef0: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00682ef4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00682ef6: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00682ef9: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00682efc: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00682eff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00682f01: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00682f05: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00682f07: fstp dword ptr [ebp + 0x304] */ W_F32((u32)(r_ebp+0x304u), ST(0)); FPOP();
    /* 00682f0d: mov dword ptr [ebp + 0x300], eax */ W32((u32)(r_ebp+0x300u), r_eax);
    /* 00682f13: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00682f17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00682f18: mov dword ptr [ebp + 0x308], edx */ W32((u32)(r_ebp+0x308u), r_edx);
    /* 00682f1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00682f20: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x682f25u); f_00771e14();
    /* 00682f25: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f28: je 0x68302d */ if (fZ) goto L_0068302d;
L_00682f2e:; BB(0x00682f2e);
    /* 00682f2e: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x682f33u); f_007b51c4();
    /* 00682f33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00682f35: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x682f3au); f_007b8980();
    /* 00682f3a: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00682f40: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00682f43: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f49: je 0x683001 */ if (fZ) goto L_00683001;
L_00682f4f:; BB(0x00682f4f);
    /* 00682f4f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00682f53: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00682f56: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00682f5a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00682f5c: mov ebx, eax */ r_ebx = r_eax;
L_00682f5e:; BB(0x00682f5e);
    /* 00682f5e: mov esi, dword ptr [ebx + 0xaad6e0] */ r_esi = R32((u32)(r_ebx+0xaad6e0u));
    /* 00682f64: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00682f67: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f69: je 0x683020 */ if (fZ) goto L_00683020;
L_00682f6f:; BB(0x00682f6f);
    /* 00682f6f: movzx eax, word ptr [ebp + 0x370] */ r_eax = (u32)R16((u32)(r_ebp+0x370u));
    /* 00682f76: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00682f78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00682f7a: jle 0x682f93 */ if ((fZ||fS!=fO)) goto L_00682f93;
L_00682f7c:; BB(0x00682f7c);
    /* 00682f7c: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
L_00682f80:; BB(0x00682f80);
    /* 00682f80: movzx ecx, word ptr [ebp + edi*2 + 0x35c] */ r_ecx = (u32)R16((u32)(r_ebp+r_edi*2+0x35cu));
    /* 00682f88: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f8a: je 0x682f93 */ if (fZ) goto L_00682f93;
L_00682f8c:; BB(0x00682f8c);
    /* 00682f8c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00682f8f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00682f91: jl 0x682f80 */ if ((fS!=fO)) goto L_00682f80;
L_00682f93:; BB(0x00682f93);
    /* 00682f93: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00682f95: jne 0x682fed */ if (!fZ) goto L_00682fed;
L_00682f97:; BB(0x00682f97);
    /* 00682f97: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 00682f9b: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 00682f9e: mov word ptr [ebp + 0x370], dx */ W16((u32)(r_ebp+0x370u), (u16)r_edx);
    /* 00682fa5: mov word ptr [ebp + eax*2 + 0x35c], di */ W16((u32)(r_ebp+r_eax*2+0x35cu), (u16)r_edi);
    /* 00682fad: movzx edx, word ptr [ebp + 0x370] */ r_edx = (u32)R16((u32)(r_ebp+0x370u));
    /* 00682fb4: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00682fb7: jge 0x68303f */ if ((fS==fO)) goto L_0068303f;
L_00682fbd:; BB(0x00682fbd);
    /* 00682fbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00682fbf: push dword ptr [ebp + 0x34c] */ { u32 v = R32((u32)(r_ebp+0x34cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00682fc5: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00682fc9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00682fcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00682fcc: call 0x67d488 */ r_esp -= 4; W32(r_esp, 0x682fd1u); f_0067d488();
    /* 00682fd1: push 0x162 */ { u32 v = 0x162u; r_esp -= 4; W32(r_esp, v); }
    /* 00682fd6: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00682fd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00682fda: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x682fdfu); f_0050b510();
    /* 00682fdf: push 0x163 */ { u32 v = 0x163u; r_esp -= 4; W32(r_esp, v); }
    /* 00682fe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00682fe5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x682feau); f_0050b510();
    /* 00682fea: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00682fed:; BB(0x00682fed);
    /* 00682fed: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00682ff0: jl 0x682f5e */ if ((fS!=fO)) goto L_00682f5e;
L_00682ff6:; BB(0x00682ff6);
    /* 00682ff6: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00682ffa: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00682ffd: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00683001:; BB(0x00683001);
    /* 00683001: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00683004: fadd dword ptr [ebp + 0x33c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x33cu));
    /* 0068300a: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0068300d: fadd dword ptr [ebp + 0x344] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x344u));
    /* 00683013: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00683015: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00683018: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 0068301b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068301e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068301f: ret  */ FN_RET(0x00682ec0); r_esp += 4; return;
L_00683020:; BB(0x00683020);
    /* 00683020: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00683024: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00683027: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0068302b: jmp 0x683001 */ goto L_00683001;
L_0068302d:; BB(0x0068302d);
    /* 0068302d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00683031: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00683036: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0068303a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068303d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068303e: ret  */ FN_RET(0x00682ec0); r_esp += 4; return;
L_0068303f:; BB(0x0068303f);
    /* 0068303f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00683043: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00683046: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0068304a: jmp 0x683001 */ goto L_00683001;
}

