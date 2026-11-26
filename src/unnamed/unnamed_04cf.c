#include "protos.h"

void f_004cf084(void) /* sub_4CF084 */
{
    FN_ENTER(0x004cf084);
    /* 004cf084: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf085: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cf087: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cf089: call 0x4cf0a8 */ r_esp -= 4; W32(r_esp, 0x4cf08eu); f_004cf0a8();
    /* 004cf08e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cf092: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf094: jne 0x4cf09a */ if (!fZ) goto L_004cf09a;
L_004cf096:; BB(0x004cf096);
    /* 004cf096: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf097: ret 4 */ FN_RET(0x004cf084); r_esp += 8; return;
L_004cf09a:; BB(0x004cf09a);
    /* 004cf09a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf09b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cf0a0u); f_005c2f74();
    /* 004cf0a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf0a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf0a2: ret 4 */ FN_RET(0x004cf084); r_esp += 8; return;
}

void f_004cf0a8(void) /* sub_4CF0A8 */
{
    FN_ENTER(0x004cf0a8);
    /* 004cf0a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf0a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004cf0ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf0ad: push 0x8d18ac */ { u32 v = 0x8d18acu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf0b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cf0b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf0b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cf0c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf0c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cf0c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cf0c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cf0cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cf0cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cf0d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cf0d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf0dc: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 004cf0df: mov dword ptr [eax], 0xafbe38 */ W32((u32)(r_eax), 0xafbe38u);
    /* 004cf0e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf0e7: je 0x4cf0f3 */ if (fZ) goto L_004cf0f3;
L_004cf0e9:; BB(0x004cf0e9);
    /* 004cf0e9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf0eb: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4cf0f0u); f_00418aa8();
    /* 004cf0f0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004cf0f3:; BB(0x004cf0f3);
    /* 004cf0f3: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 004cf0fa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cf101: mov ecx, eax */ r_ecx = r_eax;
    /* 004cf103: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4cf108u); f_008171e8();
    /* 004cf108: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cf10b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cf112: mov esp, ebp */ r_esp = r_ebp;
    /* 004cf114: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf115: ret  */ FN_RET(0x004cf0a8); r_esp += 4; return;
}

void f_004cf118(void) /* sub_4CF118 */
{
    FN_ENTER(0x004cf118);
    /* 004cf118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf119: mov ebp, esp */ r_ebp = r_esp;
    /* 004cf11b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf11d: push 0x8d18e2 */ { u32 v = 0x8d18e2u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf122: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cf128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf129: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cf130: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf133: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cf136: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004cf139: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004cf13c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004cf13f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004cf142: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf145: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004cf148: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004cf14b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004cf14e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004cf151: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004cf154: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004cf157: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 004cf15b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004cf15e: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4cf163u); f_008193cc();
    /* 004cf163: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cf16a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004cf16d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cf170: fld dword ptr [0x908a4c] */ FPUSH(R_F32((u32)(0x908a4cu)));
    /* 004cf176: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf178: mov dword ptr [eax], 0xafbe38 */ W32((u32)(r_eax), 0xafbe38u);
    /* 004cf17e: mov edx, dword ptr [0x9ac53c] */ r_edx = R32((u32)(0x9ac53cu));
    /* 004cf184: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004cf187: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 004cf189: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 004cf190: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004cf193: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 004cf196: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cf199: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 004cf19c: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 004cf19f: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 004cf1a2: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 004cf1a4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004cf1a6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004cf1a8: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 004cf1ab: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 004cf1ae: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004cf1b0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004cf1b3: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 004cf1b6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf1b9: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 004cf1bc: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004cf1be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cf1c0: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 004cf1c3: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 004cf1c6: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 004cf1c9: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 004cf1cc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cf1cf: mov word ptr [eax + 0x38], dx */ W16((u32)(r_eax+0x38u), (u16)r_edx);
    /* 004cf1d3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cf1d8u); f_008581c5();
    /* 004cf1d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf1d9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004cf1dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf1de: je 0x4cf221 */ if (fZ) goto L_004cf221;
L_004cf1e0:; BB(0x004cf1e0);
    /* 004cf1e0: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 004cf1e7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004cf1ee: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 004cf1f1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf1f3: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x4cf1f8u); f_00521a4c();
    /* 004cf1f8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004cf1fb: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_004cf202:; BB(0x004cf202);
    /* 004cf202: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004cf205: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004cf208: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cf20b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004cf20e: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 004cf211: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cf214: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cf21b: mov esp, ebp */ r_esp = r_ebp;
    /* 004cf21d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf21e: ret 0x14 */ FN_RET(0x004cf118); r_esp += 24; return;
L_004cf221:; BB(0x004cf221);
    /* 004cf221: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf223: jmp 0x4cf202 */ goto L_004cf202;
}

void f_004cf228(void) /* sub_4CF228 */
{
    FN_ENTER(0x004cf228);
    /* 004cf228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf229: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf22a: mov esi, ecx */ r_esi = r_ecx;
    /* 004cf22c: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 004cf22f: lea edx, [esi + 0x28] */ r_edx = (u32)(r_esi+0x28u);
    /* 004cf232: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cf234: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4cf239u); f_0082ebac();
    /* 004cf239: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 004cf23c: fcom dword ptr [0x908a48] */ fx_compare(ST(0), R_F32((u32)(0x908a48u))); 
    /* 004cf242: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cf244: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004cf245: jb 0x4cf272 */ if (fC) goto L_004cf272;
L_004cf247:; BB(0x004cf247);
    /* 004cf247: fcomp dword ptr [0x908a44] */ fx_compare(ST(0), R_F32((u32)(0x908a44u))); FPOP();
    /* 004cf24d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cf24f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004cf250: jae 0x4cf26f */ if (!fC) goto L_004cf26f;
L_004cf252:; BB(0x004cf252);
    /* 004cf252: movzx eax, word ptr [esi + 0x38] */ r_eax = (u32)R16((u32)(r_esi+0x38u));
    /* 004cf256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf257: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4cf25cu); f_00786b3c();
    /* 004cf25c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf25d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf25f: je 0x4cf26f */ if (fZ) goto L_004cf26f;
L_004cf261:; BB(0x004cf261);
    /* 004cf261: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf264: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf267: mov ecx, eax */ r_ecx = r_eax;
    /* 004cf269: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf26a: call 0x4cd294 */ r_esp -= 4; W32(r_esp, 0x4cf26fu); f_004cd294();
L_004cf26f:; BB(0x004cf26f);
    /* 004cf26f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf270: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf271: ret  */ FN_RET(0x004cf228); r_esp += 4; return;
L_004cf272:; BB(0x004cf272);
    /* 004cf272: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cf274: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004cf278: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf27d: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004cf281: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf282: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf283: ret  */ FN_RET(0x004cf228); r_esp += 4; return;
}

void f_004cf284(void) /* sub_4CF284 */
{
    FN_ENTER(0x004cf284);
    /* 004cf284: mov dword ptr [0xa48694], 0x42c80000 */ W32((u32)(0xa48694u), 0x42c80000u);
    /* 004cf28e: mov dword ptr [0x9ac548], 0x41200000 */ W32((u32)(0x9ac548u), 0x41200000u);
    /* 004cf298: ret  */ FN_RET(0x004cf284); r_esp += 4; return;
}

void f_004cf29c(void) /* sub_4CF29C */
{
    FN_ENTER(0x004cf29c);
    /* 004cf29c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf29d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cf29f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cf2a1: call 0x4cf2c0 */ r_esp -= 4; W32(r_esp, 0x4cf2a6u); f_004cf2c0();
    /* 004cf2a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cf2aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf2ac: jne 0x4cf2b2 */ if (!fZ) goto L_004cf2b2;
L_004cf2ae:; BB(0x004cf2ae);
    /* 004cf2ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf2af: ret 4 */ FN_RET(0x004cf29c); r_esp += 8; return;
L_004cf2b2:; BB(0x004cf2b2);
    /* 004cf2b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf2b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cf2b8u); f_005c2f74();
    /* 004cf2b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf2b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf2ba: ret 4 */ FN_RET(0x004cf29c); r_esp += 8; return;
}

void f_004cf2c0(void) /* sub_4CF2C0 */
{
    FN_ENTER(0x004cf2c0);
    /* 004cf2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004cf2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf2c5: push 0x8d18fc */ { u32 v = 0x8d18fcu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cf2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf2d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cf2d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf2db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cf2de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cf2e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cf2e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cf2e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cf2ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf2ed: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 004cf2f0: mov dword ptr [ecx], 0xafbe98 */ W32((u32)(r_ecx), 0xafbe98u);
    /* 004cf2f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf2f8: je 0x4cf311 */ if (fZ) goto L_004cf311;
L_004cf2fa:; BB(0x004cf2fa);
    /* 004cf2fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf2fd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cf301: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cf306: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cf30a: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
L_004cf311:; BB(0x004cf311);
    /* 004cf311: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 004cf314: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf316: je 0x4cf32f */ if (fZ) goto L_004cf32f;
L_004cf318:; BB(0x004cf318);
    /* 004cf318: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf31b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cf31f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cf324: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cf328: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
L_004cf32f:; BB(0x004cf32f);
    /* 004cf32f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cf336: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4cf33bu); f_008171e8();
    /* 004cf33b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cf33e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cf345: mov esp, ebp */ r_esp = r_ebp;
    /* 004cf347: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf348: ret  */ FN_RET(0x004cf2c0); r_esp += 4; return;
}

void f_004cf34c(void) /* sub_4CF34C */
{
    FN_ENTER(0x004cf34c);
    /* 004cf34c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf34d: mov ebp, esp */ r_ebp = r_esp;
    /* 004cf34f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf351: push 0x8d1918 */ { u32 v = 0x8d1918u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf356: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cf35c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf35d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cf364: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf367: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cf36a: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004cf36d: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004cf370: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004cf373: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004cf376: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf379: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004cf37c: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004cf37f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004cf382: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 004cf385: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004cf388: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004cf38b: movzx eax, word ptr [ebp + 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0x18u));
    /* 004cf38f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004cf392: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4cf397u); f_008193cc();
    /* 004cf397: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cf39e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004cf3a1: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004cf3a4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cf3a7: mov dword ptr [edx], 0xafbe98 */ W32((u32)(r_edx), 0xafbe98u);
    /* 004cf3ad: mov eax, dword ptr [0x9ac554] */ r_eax = R32((u32)(0x9ac554u));
    /* 004cf3b2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004cf3b5: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004cf3b7: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 004cf3ba: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004cf3bd: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 004cf3c0: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004cf3c3: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004cf3c6: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cf3c8: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 004cf3cb: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 004cf3ce: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004cf3d1: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004cf3d4: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 004cf3d7: lea ecx, [edx + 0x28] */ r_ecx = (u32)(r_edx+0x28u);
    /* 004cf3da: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cf3dd: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4cf3e2u); f_0082f9c4();
    /* 004cf3e2: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004cf3e5: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cf3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf3e9: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x4cf3eeu); f_00782868();
    /* 004cf3ee: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004cf3f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf3f4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cf3f7: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004cf3fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cf3fc: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 004cf403: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf404: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 004cf407: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf408: mov dword ptr [ebx + 0x38], ecx */ W32((u32)(r_ebx+0x38u), r_ecx);
    /* 004cf40b: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 004cf40e: mov word ptr [ebx + 0x48], dx */ W16((u32)(r_ebx+0x48u), (u16)r_edx);
    /* 004cf412: mov dword ptr [ebx + 0x4c], ecx */ W32((u32)(r_ebx+0x4cu), r_ecx);
    /* 004cf415: mov dword ptr [ebx + 0x50], ecx */ W32((u32)(r_ebx+0x50u), r_ecx);
    /* 004cf418: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004cf41b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf41c: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf421: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4cf426u); f_00814298();
    /* 004cf426: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf429: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004cf42c: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 004cf42f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf432: je 0x4cf450 */ if (fZ) goto L_004cf450;
L_004cf434:; BB(0x004cf434);
    /* 004cf434: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf437: jne 0x4cf442 */ if (!fZ) goto L_004cf442;
L_004cf439:; BB(0x004cf439);
    /* 004cf439: mov dword ptr [edx + 0x54], 0x908a68 */ W32((u32)(r_edx+0x54u), 0x908a68u);
    /* 004cf440: jmp 0x4cf457 */ goto L_004cf457;
L_004cf442:; BB(0x004cf442);
    /* 004cf442: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf445: jne 0x4cf457 */ if (!fZ) goto L_004cf457;
L_004cf447:; BB(0x004cf447);
    /* 004cf447: mov dword ptr [edx + 0x54], 0x908a74 */ W32((u32)(r_edx+0x54u), 0x908a74u);
    /* 004cf44e: jmp 0x4cf457 */ goto L_004cf457;
L_004cf450:; BB(0x004cf450);
    /* 004cf450: mov dword ptr [edx + 0x54], 0x908a5c */ W32((u32)(r_edx+0x54u), 0x908a5cu);
L_004cf457:; BB(0x004cf457);
    /* 004cf457: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004cf45a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cf45d: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004cf460: mov eax, edx */ r_eax = r_edx;
    /* 004cf462: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cf465: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cf46c: mov esp, ebp */ r_esp = r_ebp;
    /* 004cf46e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf46f: ret 0x14 */ FN_RET(0x004cf34c); r_esp += 24; return;
}

void f_004cf474(void) /* sub_4CF474 */
{
    FN_ENTER(0x004cf474);
    /* 004cf474: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf475: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf476: mov edi, ecx */ r_edi = r_ecx;
    /* 004cf478: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004cf47b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf47d: je 0x4cf4e7 */ if (fZ) goto L_004cf4e7;
L_004cf47f:; BB(0x004cf47f);
    /* 004cf47f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf482: jne 0x4cf4bc */ if (!fZ) goto L_004cf4bc;
L_004cf484:; BB(0x004cf484);
    /* 004cf484: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004cf487: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cf48a: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004cf48d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf490: je 0x4cf57d */ if (fZ) goto L_004cf57d;
L_004cf496:; BB(0x004cf496);
    /* 004cf496: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf499: jle 0x4cf4a5 */ if ((fZ||fS!=fO)) goto L_004cf4a5;
L_004cf49b:; BB(0x004cf49b);
    /* 004cf49b: mov dword ptr [edi + 0x38], 2 */ W32((u32)(r_edi+0x38u), 0x2u);
    /* 004cf4a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf4a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf4a4: ret  */ FN_RET(0x004cf474); r_esp += 4; return;
L_004cf4a5:; BB(0x004cf4a5);
    /* 004cf4a5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf4a7: lea eax, [edi + 0x1c] */ r_eax = (u32)(r_edi+0x1cu);
    /* 004cf4aa: mov edi, dword ptr [edi + 0x54] */ r_edi = R32((u32)(r_edi+0x54u));
    /* 004cf4ad: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf4b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf4b1: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4cf4b6u); f_0050b7a4();
    /* 004cf4b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cf4b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf4ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf4bb: ret  */ FN_RET(0x004cf474); r_esp += 4; return;
L_004cf4bc:; BB(0x004cf4bc);
    /* 004cf4bc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf4bf: jne 0x4cf57a */ if (!fZ) goto L_004cf57a;
L_004cf4c5:; BB(0x004cf4c5);
    /* 004cf4c5: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004cf4c8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cf4cb: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004cf4ce: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf4d1: jle 0x4cf57a */ if ((fZ||fS!=fO)) goto L_004cf57a;
L_004cf4d7:; BB(0x004cf4d7);
    /* 004cf4d7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004cf4db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf4e0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004cf4e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf4e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf4e6: ret  */ FN_RET(0x004cf474); r_esp += 4; return;
L_004cf4e7:; BB(0x004cf4e7);
    /* 004cf4e7: fld dword ptr [0x908a58] */ FPUSH(R_F32((u32)(0x908a58u)));
    /* 004cf4ed: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004cf4f0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004cf4f2: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004cf4f5: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004cf4f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004cf4f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cf4fb: fst dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0));
    /* 004cf4fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004cf4ff: jae 0x4cf517 */ if (!fC) goto L_004cf517;
L_004cf501:; BB(0x004cf501);
    /* 004cf501: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004cf503: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 004cf505: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004cf507: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 004cf50e: mov dword ptr [edi + 0x38], 1 */ W32((u32)(r_edi+0x38u), 0x1u);
    /* 004cf515: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_004cf517:; BB(0x004cf517);
    /* 004cf517: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cf519: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cf51b: fld dword ptr [edi + 0x28] */ FPUSH(R_F32((u32)(r_edi+0x28u)));
    /* 004cf51e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004cf520: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 004cf523: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 004cf526: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004cf529: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 004cf52c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cf52e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004cf530: fadd dword ptr [edi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x20u));
    /* 004cf533: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004cf535: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004cf537: fadd dword ptr [edi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x24u));
    /* 004cf53a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cf53c: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 004cf53f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004cf541: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 004cf544: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 004cf547: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf549: je 0x4cf61f */ if (fZ) goto L_004cf61f;
L_004cf54f:; BB(0x004cf54f);
    /* 004cf54f: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 004cf552: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf555: je 0x4cf5f6 */ if (fZ) goto L_004cf5f6;
L_004cf55b:; BB(0x004cf55b);
    /* 004cf55b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf55d: je 0x4cf568 */ if (fZ) goto L_004cf568;
L_004cf55f:; BB(0x004cf55f);
    /* 004cf55f: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 004cf562: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf563: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4cf568u); f_00508db8();
L_004cf568:; BB(0x004cf568);
    /* 004cf568: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 004cf56b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf56d: je 0x4cf57a */ if (fZ) goto L_004cf57a;
L_004cf56f:; BB(0x004cf56f);
    /* 004cf56f: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004cf572: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf573: mov ecx, eax */ r_ecx = r_eax;
    /* 004cf575: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4cf57au); f_00508db8();
L_004cf57a:; BB(0x004cf57a);
    /* 004cf57a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cf57b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cf57c: ret  */ FN_RET(0x004cf474); r_esp += 4; return;
L_004cf57d:; BB(0x004cf57d);
    /* 004cf57d: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf57f: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004cf582: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf585: lea esi, [edi + 0x1c] */ r_esi = (u32)(r_edi+0x1cu);
    /* 004cf588: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf589: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4cf58eu); f_0050b7a4();
    /* 004cf58e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf591: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 004cf594: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf596: je 0x4cf5ac */ if (fZ) goto L_004cf5ac;
L_004cf598:; BB(0x004cf598);
    /* 004cf598: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cf59c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cf5a1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cf5a5: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
L_004cf5ac:; BB(0x004cf5ac);
    /* 004cf5ac: mov edx, dword ptr [edi + 0x4c] */ r_edx = R32((u32)(r_edi+0x4cu));
    /* 004cf5af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf5b1: je 0x4cf5c7 */ if (fZ) goto L_004cf5c7;
L_004cf5b3:; BB(0x004cf5b3);
    /* 004cf5b3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004cf5b7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004cf5bc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004cf5c0: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
L_004cf5c7:; BB(0x004cf5c7);
    /* 004cf5c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cf5c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf5ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf5cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf5cc: push 0x40d */ { u32 v = 0x40du; r_esp -= 4; W32(r_esp, v); }
    /* 004cf5d1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4cf5d6u); f_00814298();
    /* 004cf5d6: movzx eax, word ptr [edi + 0x48] */ r_eax = (u32)R16((u32)(r_edi+0x48u));
    /* 004cf5da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf5db: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x4cf5e0u); f_00786b3c();
    /* 004cf5e0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf5e3: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf5e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf5e7: mov ecx, eax */ r_ecx = r_eax;
    /* 004cf5e9: call 0x4cd2ec */ r_esp -= 4; W32(r_esp, 0x4cf5eeu); f_004cd2ec();
    /* 004cf5ee: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 004cf5f1: jmp 0x4cf496 */ goto L_004cf496;
L_004cf5f6:; BB(0x004cf5f6);
    /* 004cf5f6: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 004cf5f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf5fb: jne 0x4cf55b */ if (!fZ) goto L_004cf55b;
L_004cf601:; BB(0x004cf601);
    /* 004cf601: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf603: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf608: lea eax, [edi + 0x1c] */ r_eax = (u32)(r_edi+0x1cu);
    /* 004cf60b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf60c: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4cf611u); f_0050981c();
    /* 004cf611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf614: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 004cf617: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004cf61a: jmp 0x4cf55b */ goto L_004cf55b;
L_004cf61f:; BB(0x004cf61f);
    /* 004cf61f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf621: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004cf624: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf626: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 004cf629: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf62a: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4cf62fu); f_0050981c();
    /* 004cf62f: mov ecx, eax */ r_ecx = r_eax;
    /* 004cf631: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf634: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004cf637: jmp 0x4cf54f */ goto L_004cf54f;
}

void f_004cf63c(void) /* sub_4CF63C */
{
    FN_ENTER(0x004cf63c);
    /* 004cf63c: mov dword ptr [0xa4869c], 0x44610000 */ W32((u32)(0xa4869cu), 0x44610000u);
    /* 004cf646: mov dword ptr [0x9ac560], 0x41f00000 */ W32((u32)(0x9ac560u), 0x41f00000u);
    /* 004cf650: ret  */ FN_RET(0x004cf63c); r_esp += 4; return;
}

void f_004cf654(void) /* sub_4CF654 */
{
    FN_ENTER(0x004cf654);
    /* 004cf654: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf655: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cf657: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cf659: call 0x4cf678 */ r_esp -= 4; W32(r_esp, 0x4cf65eu); f_004cf678();
    /* 004cf65e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cf662: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf664: jne 0x4cf66a */ if (!fZ) goto L_004cf66a;
L_004cf666:; BB(0x004cf666);
    /* 004cf666: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf667: ret 4 */ FN_RET(0x004cf654); r_esp += 8; return;
L_004cf66a:; BB(0x004cf66a);
    /* 004cf66a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf66b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cf670u); f_005c2f74();
    /* 004cf670: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf671: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cf672: ret 4 */ FN_RET(0x004cf654); r_esp += 8; return;
}

void f_004cf678(void) /* sub_4CF678 */
{
    FN_ENTER(0x004cf678);
    /* 004cf678: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf679: mov ebp, esp */ r_ebp = r_esp;
    /* 004cf67b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf67d: push 0x8d1934 */ { u32 v = 0x8d1934u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf682: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cf688: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf689: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cf690: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf693: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cf696: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cf699: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cf69c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cf69f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cf6a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cf6a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf6ac: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004cf6b2: mov dword ptr [eax], 0xafbf00 */ W32((u32)(r_eax), 0xafbf00u);
    /* 004cf6b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf6ba: je 0x4cf6c6 */ if (fZ) goto L_004cf6c6;
L_004cf6bc:; BB(0x004cf6bc);
    /* 004cf6bc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf6be: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4cf6c3u); f_00418aa8();
    /* 004cf6c3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004cf6c6:; BB(0x004cf6c6);
    /* 004cf6c6: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 004cf6d0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cf6d7: mov ecx, eax */ r_ecx = r_eax;
    /* 004cf6d9: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x4cf6deu); f_005219f0();
    /* 004cf6de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cf6e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cf6e8: mov esp, ebp */ r_esp = r_ebp;
    /* 004cf6ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf6eb: ret  */ FN_RET(0x004cf678); r_esp += 4; return;
}

void f_004cf6ec(void) /* sub_4CF6EC */
{
    FN_ENTER(0x004cf6ec);
    /* 004cf6ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf6ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004cf6ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cf6f1: push 0x8d196a */ { u32 v = 0x8d196au; r_esp -= 4; W32(r_esp, v); }
    /* 004cf6f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cf6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf6fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cf704: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf707: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cf70a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004cf70d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004cf710: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004cf713: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004cf716: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004cf719: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004cf71c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004cf71f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004cf722: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf724: push 0x9ac580 */ { u32 v = 0x9ac580u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf729: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf72a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf72c: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x4cf731u); f_00521c5c();
    /* 004cf731: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cf738: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cf73b: mov dword ptr [ebx], 0xafbf00 */ W32((u32)(r_ebx), 0xafbf00u);
    /* 004cf741: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004cf746: mov eax, dword ptr [0x9ac86c] */ r_eax = R32((u32)(0x9ac86cu));
    /* 004cf74b: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
L_004cf74e:; BB(0x004cf74e);
    /* 004cf74e: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 004cf754: mov ebx, dword ptr [0x9ac580] */ r_ebx = R32((u32)(0x9ac580u));
    /* 004cf75a: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004cf75d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cf75f: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004cf761: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cf763: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cf765: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004cf767: mov dword ptr [eax + edx*4], ebx */ W32((u32)(r_eax+r_edx*4), r_ebx);
    /* 004cf76a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004cf76d: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cf770: mov esi, dword ptr [0x9ac584] */ r_esi = R32((u32)(0x9ac584u));
    /* 004cf776: mov dword ptr [eax + edx*4 + 4], esi */ W32((u32)(r_eax+r_edx*4+0x4u), r_esi);
    /* 004cf77a: mov edi, dword ptr [0x9ac588] */ r_edi = R32((u32)(0x9ac588u));
    /* 004cf780: mov dword ptr [eax + edx*4 + 8], edi */ W32((u32)(r_eax+r_edx*4+0x8u), r_edi);
    /* 004cf784: mov ebx, dword ptr [0x9ac58c] */ r_ebx = R32((u32)(0x9ac58cu));
    /* 004cf78a: mov dword ptr [eax + edx*4 + 0xc], ebx */ W32((u32)(r_eax+r_edx*4+0xcu), r_ebx);
    /* 004cf78e: mov ebx, dword ptr [0x9ac590] */ r_ebx = R32((u32)(0x9ac590u));
    /* 004cf794: mov dword ptr [eax + edx*4 + 0x10], ebx */ W32((u32)(r_eax+r_edx*4+0x10u), r_ebx);
    /* 004cf798: mov ebx, dword ptr [0x9ac594] */ r_ebx = R32((u32)(0x9ac594u));
    /* 004cf79e: mov dword ptr [eax + edx*4 + 0x14], ebx */ W32((u32)(r_eax+r_edx*4+0x14u), r_ebx);
    /* 004cf7a2: mov ebx, dword ptr [0x9ac598] */ r_ebx = R32((u32)(0x9ac598u));
    /* 004cf7a8: mov dword ptr [eax + edx*4 + 0x18], ebx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ebx);
    /* 004cf7ac: mov ebx, dword ptr [0x9ac59c] */ r_ebx = R32((u32)(0x9ac59cu));
    /* 004cf7b2: mov dword ptr [eax + edx*4 + 0x1c], ebx */ W32((u32)(r_eax+r_edx*4+0x1cu), r_ebx);
    /* 004cf7b6: mov ebx, dword ptr [0x9ac5a0] */ r_ebx = R32((u32)(0x9ac5a0u));
    /* 004cf7bc: mov dword ptr [eax + edx*4 + 0x20], ebx */ W32((u32)(r_eax+r_edx*4+0x20u), r_ebx);
    /* 004cf7c0: mov ebx, dword ptr [0x9ac5a4] */ r_ebx = R32((u32)(0x9ac5a4u));
    /* 004cf7c6: mov dword ptr [eax + edx*4 + 0x24], ebx */ W32((u32)(r_eax+r_edx*4+0x24u), r_ebx);
    /* 004cf7ca: mov ebx, dword ptr [0x9ac5a8] */ r_ebx = R32((u32)(0x9ac5a8u));
    /* 004cf7d0: mov dword ptr [eax + edx*4 + 0x28], ebx */ W32((u32)(r_eax+r_edx*4+0x28u), r_ebx);
    /* 004cf7d4: jge 0x4cf7de */ if ((fS==fO)) goto L_004cf7de;
L_004cf7d6:; BB(0x004cf7d6);
    /* 004cf7d6: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cf7d9: jmp 0x4cf74e */ goto L_004cf74e;
L_004cf7de:; BB(0x004cf7de);
    /* 004cf7de: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cf7e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004cf7e4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cf7e7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf7e9: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 004cf7ef: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004cf7f6: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 004cf7fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cf801u); f_008581c5();
    /* 004cf801: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf802: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 004cf805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf807: je 0x4cf875 */ if (fZ) goto L_004cf875;
L_004cf809:; BB(0x004cf809);
    /* 004cf809: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 004cf810: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004cf817: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004cf81a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf81c: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x4cf821u); f_00521a4c();
    /* 004cf821: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004cf824: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_004cf82b:; BB(0x004cf82b);
    /* 004cf82b: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004cf82e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004cf831: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cf834: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004cf837: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 004cf83d: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 004cf847: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 004cf851: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 004cf85b: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 004cf865: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cf868: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cf86f: mov esp, ebp */ r_esp = r_ebp;
    /* 004cf871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cf872: ret 8 */ FN_RET(0x004cf6ec); r_esp += 12; return;
L_004cf875:; BB(0x004cf875);
    /* 004cf875: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf877: jmp 0x4cf82b */ goto L_004cf82b;
}

void f_004cf87c(void) /* sub_4CF87C */
{
    FN_ENTER(0x004cf87c);
    /* 004cf87c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf87d: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 004cf883: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004cf886: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cf888: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cf88a: jle 0x4cf8a2 */ if ((fZ||fS!=fO)) goto L_004cf8a2;
L_004cf88c:; BB(0x004cf88c);
    /* 004cf88c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_004cf88f:; BB(0x004cf88f);
    /* 004cf88f: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 004cf891: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004cf894: mov dword ptr [ebx + eax*4], ecx */ W32((u32)(r_ebx+r_eax*4), r_ecx);
    /* 004cf897: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cf89a: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004cf89d: jl 0x4cf88f */ if ((fS!=fO)) goto L_004cf88f;
L_004cf89f:; BB(0x004cf89f);
    /* 004cf89f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_004cf8a2:; BB(0x004cf8a2);
    /* 004cf8a2: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 004cf8a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cf8aa: ret  */ FN_RET(0x004cf87c); r_esp += 4; return;
}

void f_004cf8ac(void) /* sub_4CF8AC */
{
    FN_ENTER(0x004cf8ac);
    /* 004cf8ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf8ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf8ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cf8af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cf8b0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cf8b3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cf8b5: mov edx, dword ptr [ebx + 0xb8] */ r_edx = R32((u32)(r_ebx+0xb8u));
    /* 004cf8bb: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004cf8be: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 004cf8c1: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 004cf8c4: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004cf8c7: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 004cf8ca: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 004cf8cd: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 004cf8d0: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cf8d3: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4cf8d8u); f_0082ebac();
    /* 004cf8d8: fld dword ptr [0x908aac] */ FPUSH(R_F32((u32)(0x908aacu)));
    /* 004cf8de: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004cf8e1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004cf8e3: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004cf8e6: mov edx, dword ptr [ebx + 0xb4] */ r_edx = R32((u32)(r_ebx+0xb4u));
    /* 004cf8ec: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004cf8ee: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 004cf8f1: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004cf8f4: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 004cf8f7: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 004cf8fa: mov esi, dword ptr [edx + 0x60] */ r_esi = R32((u32)(r_edx+0x60u));
    /* 004cf8fd: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 004cf900: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 004cf906: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4cf90bu); f_0082d7b0();
    /* 004cf90b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cf90d: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4cf912u); f_00830cd8();
    /* 004cf912: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 004cf915: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004cf917: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cf919: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4cf91eu); f_0082d8bc();
    /* 004cf91e: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004cf921: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 004cf924: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004cf927: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf92a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004cf92c: fchs  */ ST(0) = -ST(0);
    /* 004cf92e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004cf931: fchs  */ ST(0) = -ST(0);
    /* 004cf933: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004cf937: fchs  */ ST(0) = -ST(0);
    /* 004cf939: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004cf93d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cf93f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4cf944u); f_00830b74();
    /* 004cf944: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cf946: mov ebp, esi */ r_ebp = r_esi;
    /* 004cf948: mov esi, eax */ r_esi = r_eax;
L_004cf94a:; BB(0x004cf94a);
    /* 004cf94a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004cf94d: mov edi, esi */ r_edi = r_esi;
    /* 004cf94f: add edi, dword ptr [ebx + 0xa4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004cf955: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004cf958: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004cf95b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf95c: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004cf95f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004cf962: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004cf965: mov edx, ebp */ r_edx = r_ebp;
    /* 004cf967: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004cf96a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cf96c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4cf971u); f_00830aa0();
    /* 004cf971: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cf976: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cf977: call 0x520304 */ r_esp -= 4; W32(r_esp, 0x4cf97cu); f_00520304();
    /* 004cf97c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cf97f: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004cf982: cmp esi, 0x2ec */ {  u32 a = r_esi; u32 b = 0x2ecu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004cf988: jl 0x4cf94a */ if ((fS!=fO)) goto L_004cf94a;
L_004cf98a:; BB(0x004cf98a);
    /* 004cf98a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4cf98fu); f_0082da80();
    /* 004cf98f: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 004cf995: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cf998: je 0x4cfa0f */ if (fZ) goto L_004cfa0f;
L_004cf99a:; BB(0x004cf99a);
    /* 004cf99a: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004cf99d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4cf9a2u); f_0082ddd8();
    /* 004cf9a2: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004cf9a5: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 004cf9af: fchs  */ ST(0) = -ST(0);
    /* 004cf9b1: fmul dword ptr [0x908aa0] */ ST(0) = ST(0) * R_F32((u32)(0x908aa0u));
    /* 004cf9b7: fstp dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0)); FPOP();
    /* 004cf9bd: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4cf9c2u); f_0082dcbc();
    /* 004cf9c2: fld dword ptr [0x908aa0] */ FPUSH(R_F32((u32)(0x908aa0u)));
    /* 004cf9c8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004cf9ca: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
L_004cf9d0:; BB(0x004cf9d0);
    /* 004cf9d0: mov eax, dword ptr [0x908a88] */ r_eax = R32((u32)(0x908a88u));
    /* 004cf9d5: mov ecx, dword ptr [ebx + 0xb4] */ r_ecx = R32((u32)(r_ebx+0xb4u));
    /* 004cf9db: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 004cf9e2: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004cf9e6: call 0x4cd284 */ r_esp -= 4; W32(r_esp, 0x4cf9ebu); f_004cd284();
    /* 004cf9eb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004cf9ee: push dword ptr [ebx + 0xbc] */ { u32 v = R32((u32)(r_ebx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cf9f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cf9f5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004cf9f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cf9f9: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x4cf9fcu); call_ind(t); }
    /* 004cf9fc: mov ecx, dword ptr [ebx + 0xb4] */ r_ecx = R32((u32)(r_ebx+0xb4u));
    /* 004cfa02: call 0x4c4268 */ r_esp -= 4; W32(r_esp, 0x4cfa07u); f_004c4268();
    /* 004cfa07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cfa0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cfa0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cfa0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004cfa0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cfa0e: ret  */ FN_RET(0x004cf8ac); r_esp += 4; return;
L_004cfa0f:; BB(0x004cfa0f);
    /* 004cfa0f: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004cfa12: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4cfa17u); f_0082ddd8();
    /* 004cfa17: fld dword ptr [0x908aa0] */ FPUSH(R_F32((u32)(0x908aa0u)));
    /* 004cfa1d: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004cfa20: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004cfa22: fstp dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0)); FPOP();
    /* 004cfa28: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 004cfa32: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4cfa37u); f_0082dcbc();
    /* 004cfa37: fchs  */ ST(0) = -ST(0);
    /* 004cfa39: fmul dword ptr [0x908aa0] */ ST(0) = ST(0) * R_F32((u32)(0x908aa0u));
    /* 004cfa3f: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 004cfa45: jmp 0x4cf9d0 */ goto L_004cf9d0;
}

void f_004cfa48(void) /* sub_4CFA48 */
{
    FN_ENTER(0x004cfa48);
    /* 004cfa48: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004cfa4c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004cfa4e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfa53: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfa59: mov ecx, eax */ r_ecx = r_eax;
    /* 004cfa5b: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x4cfa5eu); call_ind(t); }
    /* 004cfa5e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004cfa60: ret 8 */ FN_RET(0x004cfa48); r_esp += 12; return;
}

void f_004cfa64(void) /* sub_4CFA64 */
{
    FN_ENTER(0x004cfa64);
    /* 004cfa64: mov eax, ecx */ r_eax = r_ecx;
    /* 004cfa66: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004cfa6a: lea ecx, [edx + 0x30c] */ r_ecx = (u32)(r_edx+0x30cu);
    /* 004cfa70: add eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004cfa75: mov edx, eax */ r_edx = r_eax;
    /* 004cfa77: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4cfa7cu); f_0082ebac();
    /* 004cfa7c: ret 8 */ FN_RET(0x004cfa64); r_esp += 12; return;
}

void f_004cfaac(void) /* sub_4CFAAC */
{
    FN_ENTER(0x004cfaac);
    /* 004cfaac: mov ecx, dword ptr [0xa486b4] */ r_ecx = R32((u32)(0xa486b4u));
    /* 004cfab2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfab4: je 0x4cfad1 */ if (fZ) goto L_004cfad1;
L_004cfab6:; BB(0x004cfab6);
    /* 004cfab6: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4cfabbu); f_00829de0();
    /* 004cfabb: push dword ptr [0xa486b4] */ { u32 v = R32((u32)(0xa486b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfac1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4cfac6u); f_0082e960();
    /* 004cfac6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfac7: mov dword ptr [0xa486b4], 0 */ W32((u32)(0xa486b4u), 0x0u);
L_004cfad1:; BB(0x004cfad1);
    /* 004cfad1: mov ecx, dword ptr [0xa486b8] */ r_ecx = R32((u32)(0xa486b8u));
    /* 004cfad7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfad9: je 0x4cfae2 */ if (fZ) goto L_004cfae2;
L_004cfadb:; BB(0x004cfadb);
    /* 004cfadb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfadd: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4cfae2u); f_004066a8();
L_004cfae2:; BB(0x004cfae2);
    /* 004cfae2: mov dword ptr [0xa486b8], 0 */ W32((u32)(0xa486b8u), 0x0u);
    /* 004cfaec: ret  */ FN_RET(0x004cfaac); r_esp += 4; return;
}

void f_004cfaf0(void) /* sub_4CFAF0 */
{
    FN_ENTER(0x004cfaf0);
    /* 004cfaf0: push 0x9ac898 */ { u32 v = 0x9ac898u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfaf5: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x4cfafau); f_0051f6b0();
    /* 004cfafa: push 0x908ad0 */ { u32 v = 0x908ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfaff: mov dword ptr [0xa486b8], eax */ W32((u32)(0xa486b8u), r_eax);
    /* 004cfb04: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x4cfb09u); f_008009dc();
    /* 004cfb09: mov dword ptr [0xa486b4], eax */ W32((u32)(0xa486b4u), r_eax);
    /* 004cfb0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cfb11: ret  */ FN_RET(0x004cfaf0); r_esp += 4; return;
}

void f_004cfb14(void) /* sub_4CFB14 */
{
    FN_ENTER(0x004cfb14);
    /* 004cfb14: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb16: push 0x9ac8a8 */ { u32 v = 0x9ac8a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb1b: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x4cfb20u); f_0078b0a0();
    /* 004cfb20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cfb23: ret  */ FN_RET(0x004cfb14); r_esp += 4; return;
}

void f_004cfb24(void) /* sub_4CFB24 */
{
    FN_ENTER(0x004cfb24);
    /* 004cfb24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb25: mov ebp, esp */ r_ebp = r_esp;
    /* 004cfb27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb29: push 0x8d19aa */ { u32 v = 0x8d19aau; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cfb34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cfb3c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cfb3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cfb42: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cfb45: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cfb48: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cfb4b: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x4cfb50u); f_00505a20();
    /* 004cfb50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfb52: je 0x4cfb96 */ if (fZ) goto L_004cfb96;
L_004cfb54:; BB(0x004cfb54);
    /* 004cfb54: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004cfb5b: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfb60: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cfb65u); f_005caba4();
    /* 004cfb65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfb66: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004cfb69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfb6b: je 0x4cfb8f */ if (fZ) goto L_004cfb8f;
L_004cfb6d:; BB(0x004cfb6d);
    /* 004cfb6d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004cfb74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cfb7b: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfb81: mov ecx, eax */ r_ecx = r_eax;
    /* 004cfb83: call 0x4d0694 */ r_esp -= 4; W32(r_esp, 0x4cfb88u); f_004d0694();
    /* 004cfb88: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_004cfb8f:; BB(0x004cfb8f);
    /* 004cfb8f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004cfb96:; BB(0x004cfb96);
    /* 004cfb96: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfb9c: call 0x4d1004 */ r_esp -= 4; W32(r_esp, 0x4cfba1u); f_004d1004();
    /* 004cfba1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfba7: call 0x4d13b0 */ r_esp -= 4; W32(r_esp, 0x4cfbacu); f_004d13b0();
    /* 004cfbac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfbae: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfbb4: call 0x8115f0 */ r_esp -= 4; W32(r_esp, 0x4cfbb9u); f_008115f0();
    /* 004cfbb9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004cfbbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfbbe: jne 0x4cfbf8 */ if (!fZ) goto L_004cfbf8;
L_004cfbc0:; BB(0x004cfbc0);
    /* 004cfbc0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004cfbc7: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfbc9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cfbceu); f_005caba4();
    /* 004cfbce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfbcf: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004cfbd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfbd4: je 0x4cfbf8 */ if (fZ) goto L_004cfbf8;
L_004cfbd6:; BB(0x004cfbd6);
    /* 004cfbd6: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004cfbdd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004cfbe4: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfbea: mov ecx, eax */ r_ecx = r_eax;
    /* 004cfbec: call 0x4cfd60 */ r_esp -= 4; W32(r_esp, 0x4cfbf1u); f_004cfd60();
    /* 004cfbf1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004cfbf8:; BB(0x004cfbf8);
    /* 004cfbf8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cfbfb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cfc02: mov esp, ebp */ r_esp = r_ebp;
    /* 004cfc04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cfc05: ret  */ FN_RET(0x004cfb24); r_esp += 4; return;
}

void f_004cfc08(void) /* sub_4CFC08 */
{
    FN_ENTER(0x004cfc08);
    /* 004cfc08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc09: mov ebp, esp */ r_ebp = r_esp;
    /* 004cfc0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc0d: push 0x8d19d0 */ { u32 v = 0x8d19d0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cfc18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cfc20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cfc23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cfc26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cfc29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cfc2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cfc2f: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc31: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004cfc38: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4cfc3du); f_005caba4();
    /* 004cfc3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfc3e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004cfc41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfc43: je 0x4cfc73 */ if (fZ) goto L_004cfc73;
L_004cfc45:; BB(0x004cfc45);
    /* 004cfc45: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004cfc4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cfc53: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 004cfc57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cfc5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc5b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfc5e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfc61: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfc67: call 0x4d02a4 */ r_esp -= 4; W32(r_esp, 0x4cfc6cu); f_004d02a4();
    /* 004cfc6c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004cfc73:; BB(0x004cfc73);
    /* 004cfc73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cfc76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cfc7d: mov esp, ebp */ r_esp = r_ebp;
    /* 004cfc7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cfc80: ret  */ FN_RET(0x004cfc08); r_esp += 4; return;
}

void f_004cfc84(void) /* sub_4CFC84 */
{
    FN_ENTER(0x004cfc84);
    /* 004cfc84: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc86: push 0x9ac8a8 */ { u32 v = 0x9ac8a8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc8b: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x4cfc90u); f_0078b184();
    /* 004cfc90: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cfc93: ret  */ FN_RET(0x004cfc84); r_esp += 4; return;
}

void f_004cfc94(void) /* sub_4CFC94 */
{
    FN_ENTER(0x004cfc94);
    /* 004cfc94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cfc95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cfc97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cfc99: call 0x4cfcb8 */ r_esp -= 4; W32(r_esp, 0x4cfc9eu); f_004cfcb8();
    /* 004cfc9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cfca2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfca4: jne 0x4cfcaa */ if (!fZ) goto L_004cfcaa;
L_004cfca6:; BB(0x004cfca6);
    /* 004cfca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cfca7: ret 4 */ FN_RET(0x004cfc94); r_esp += 8; return;
L_004cfcaa:; BB(0x004cfcaa);
    /* 004cfcaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cfcab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cfcb0u); f_005c2f74();
    /* 004cfcb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfcb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cfcb2: ret 4 */ FN_RET(0x004cfc94); r_esp += 8; return;
}

void f_004cfcb8(void) /* sub_4CFCB8 */
{
    FN_ENTER(0x004cfcb8);
    /* 004cfcb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cfcb9: mov ebp, esp */ r_ebp = r_esp;
    /* 004cfcbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfcbd: push 0x8d19ec */ { u32 v = 0x8d19ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfcc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cfcc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfcc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cfcd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cfcd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cfcd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cfcd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cfcdc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cfcdf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cfce2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cfce5: mov dword ptr [ecx], 0xafc008 */ W32((u32)(r_ecx), 0xafc008u);
    /* 004cfceb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cfcf2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4cfcf7u); f_008171e8();
    /* 004cfcf7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cfcfa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cfd01: mov esp, ebp */ r_esp = r_ebp;
    /* 004cfd03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cfd04: ret  */ FN_RET(0x004cfcb8); r_esp += 4; return;
}

void f_004cfd08(void) /* sub_4CFD08 */
{
    FN_ENTER(0x004cfd08);
    /* 004cfd08: mov ecx, dword ptr [0xa486c8] */ r_ecx = R32((u32)(0xa486c8u));
    /* 004cfd0e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfd10: je 0x4cfd24 */ if (fZ) goto L_004cfd24;
L_004cfd12:; BB(0x004cfd12);
    /* 004cfd12: je 0x4cfd1a */ if (fZ) goto L_004cfd1a;
L_004cfd14:; BB(0x004cfd14);
    /* 004cfd14: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfd16: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfd18: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4cfd1au); call_ind(t); }
L_004cfd1a:; BB(0x004cfd1a);
    /* 004cfd1a: mov dword ptr [0xa486c8], 0 */ W32((u32)(0xa486c8u), 0x0u);
L_004cfd24:; BB(0x004cfd24);
    /* 004cfd24: mov ecx, dword ptr [0xa486cc] */ r_ecx = R32((u32)(0xa486ccu));
    /* 004cfd2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfd2c: je 0x4cfd40 */ if (fZ) goto L_004cfd40;
L_004cfd2e:; BB(0x004cfd2e);
    /* 004cfd2e: je 0x4cfd36 */ if (fZ) goto L_004cfd36;
L_004cfd30:; BB(0x004cfd30);
    /* 004cfd30: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfd32: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfd34: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4cfd36u); call_ind(t); }
L_004cfd36:; BB(0x004cfd36);
    /* 004cfd36: mov dword ptr [0xa486cc], 0 */ W32((u32)(0xa486ccu), 0x0u);
L_004cfd40:; BB(0x004cfd40);
    /* 004cfd40: mov ecx, dword ptr [0xa486c0] */ r_ecx = R32((u32)(0xa486c0u));
    /* 004cfd46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfd48: je 0x4cfd5d */ if (fZ) goto L_004cfd5d;
L_004cfd4a:; BB(0x004cfd4a);
    /* 004cfd4a: je 0x4cfd53 */ if (fZ) goto L_004cfd53;
L_004cfd4c:; BB(0x004cfd4c);
    /* 004cfd4c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfd4e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4cfd53u); f_004066a8();
L_004cfd53:; BB(0x004cfd53);
    /* 004cfd53: mov dword ptr [0xa486c0], 0 */ W32((u32)(0xa486c0u), 0x0u);
L_004cfd5d:; BB(0x004cfd5d);
    /* 004cfd5d: ret  */ FN_RET(0x004cfd08); r_esp += 4; return;
}

void f_004cfd60(void) /* sub_4CFD60 */
{
    FN_ENTER(0x004cfd60);
    /* 004cfd60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cfd61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cfd63: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cfd67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cfd69: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4cfd6eu); f_008193cc();
    /* 004cfd6e: mov dword ptr [ebx], 0xafc008 */ W32((u32)(r_ebx), 0xafc008u);
    /* 004cfd74: mov edx, dword ptr [0x9ac8e8] */ r_edx = R32((u32)(0x9ac8e8u));
    /* 004cfd7a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004cfd7d: mov eax, ebx */ r_eax = r_ebx;
    /* 004cfd7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cfd80: ret 4 */ FN_RET(0x004cfd60); r_esp += 8; return;
}

void f_004cfd84(void) /* sub_4CFD84 */
{
    FN_ENTER(0x004cfd84);
    /* 004cfd84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cfd85: mov edi, ecx */ r_edi = r_ecx;
    /* 004cfd87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfd89: call 0x4cec1c */ r_esp -= 4; W32(r_esp, 0x4cfd8eu); f_004cec1c();
    /* 004cfd8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfd8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfd91: je 0x4cfdab */ if (fZ) goto L_004cfdab;
L_004cfd93:; BB(0x004cfd93);
    /* 004cfd93: mov ecx, eax */ r_ecx = r_eax;
    /* 004cfd95: call 0x4ccb80 */ r_esp -= 4; W32(r_esp, 0x4cfd9au); f_004ccb80();
    /* 004cfd9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfd9c: je 0x4cfdab */ if (fZ) goto L_004cfdab;
L_004cfd9e:; BB(0x004cfd9e);
    /* 004cfd9e: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004cfda2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cfda7: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_004cfdab:; BB(0x004cfdab);
    /* 004cfdab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004cfdac: ret  */ FN_RET(0x004cfd84); r_esp += 4; return;
}

void f_004cfdb0(void) /* sub_4CFDB0 */
{
    FN_ENTER(0x004cfdb0);
    /* 004cfdb0: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 004cfdb6: cmp edx, dword ptr [0xa486c4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa486c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfdbc: je 0x4cfdfb */ if (fZ) goto L_004cfdfb;
L_004cfdbe:; BB(0x004cfdbe);
    /* 004cfdbe: mov ecx, dword ptr [0xa486cc] */ r_ecx = R32((u32)(0xa486ccu));
    /* 004cfdc4: mov dword ptr [0xa486c4], edx */ W32((u32)(0xa486c4u), r_edx);
    /* 004cfdca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfdcc: je 0x4cfdd9 */ if (fZ) goto L_004cfdd9;
L_004cfdce:; BB(0x004cfdce);
    /* 004cfdce: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfdd0: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004cfdd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cfdd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfdd6: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4cfdd9u); call_ind(t); }
L_004cfdd9:; BB(0x004cfdd9);
    /* 004cfdd9: mov ecx, dword ptr [0xa486c8] */ r_ecx = R32((u32)(0xa486c8u));
    /* 004cfddf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfde1: je 0x4cfdfb */ if (fZ) goto L_004cfdfb;
L_004cfde3:; BB(0x004cfde3);
    /* 004cfde3: mov edx, dword ptr [0xa486c4] */ r_edx = R32((u32)(0xa486c4u));
    /* 004cfde9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfdeb: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 004cfdee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cfdf0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004cfdf2: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 004cfdf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004cfdf6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfdf8: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x4cfdfbu); call_ind(t); }
L_004cfdfb:; BB(0x004cfdfb);
    /* 004cfdfb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004cfdfd: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x4cfe02u); f_00835f78();
    /* 004cfe02: mov ecx, dword ptr [0xa486cc] */ r_ecx = R32((u32)(0xa486ccu));
    /* 004cfe08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfe0a: je 0x4cfe13 */ if (fZ) goto L_004cfe13;
L_004cfe0c:; BB(0x004cfe0c);
    /* 004cfe0c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfe0e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfe10: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x4cfe13u); call_ind(t); }
L_004cfe13:; BB(0x004cfe13);
    /* 004cfe13: mov ecx, dword ptr [0xa486c8] */ r_ecx = R32((u32)(0xa486c8u));
    /* 004cfe19: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfe1b: je 0x4cfe24 */ if (fZ) goto L_004cfe24;
L_004cfe1d:; BB(0x004cfe1d);
    /* 004cfe1d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfe1f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfe21: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x4cfe24u); call_ind(t); }
L_004cfe24:; BB(0x004cfe24);
    /* 004cfe24: mov eax, dword ptr [0xa486c0] */ r_eax = R32((u32)(0xa486c0u));
    /* 004cfe29: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004cfe2f: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004cfe32: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4cfe37u); f_00829cc8();
    /* 004cfe37: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4cfe3cu); f_0082d7b0();
    /* 004cfe3c: mov eax, dword ptr [0xa486c0] */ r_eax = R32((u32)(0xa486c0u));
    /* 004cfe41: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004cfe47: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004cfe4a: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x4cfe4fu); f_00831758();
    /* 004cfe4f: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x4cfe54u); f_007a9044();
    /* 004cfe54: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4cfe59u); f_0082da80();
    /* 004cfe59: mov ecx, dword ptr [0xa486c8] */ r_ecx = R32((u32)(0xa486c8u));
    /* 004cfe5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfe61: je 0x4cfe68 */ if (fZ) goto L_004cfe68;
L_004cfe63:; BB(0x004cfe63);
    /* 004cfe63: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfe65: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4cfe68u); call_ind(t); }
L_004cfe68:; BB(0x004cfe68);
    /* 004cfe68: mov ecx, dword ptr [0xa486cc] */ r_ecx = R32((u32)(0xa486ccu));
    /* 004cfe6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfe70: je 0x4cfe77 */ if (fZ) goto L_004cfe77;
L_004cfe72:; BB(0x004cfe72);
    /* 004cfe72: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004cfe74: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4cfe77u); call_ind(t); }
L_004cfe77:; BB(0x004cfe77);
    /* 004cfe77: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x4cfe7cu); f_0083603c();
    /* 004cfe7c: ret  */ FN_RET(0x004cfdb0); r_esp += 4; return;
}

void f_004cfe80(void) /* sub_4CFE80 */
{
    FN_ENTER(0x004cfe80);
    /* 004cfe80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cfe81: mov ebp, esp */ r_ebp = r_esp;
    /* 004cfe83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cfe85: push 0x8d1a14 */ { u32 v = 0x8d1a14u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfe8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cfe90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfe91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cfe98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cfe9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cfe9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cfea1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cfea4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cfea7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfeac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004cfeb3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4cfeb8u); f_008581c5();
    /* 004cfeb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cfeb9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004cfebc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004cfebe: je 0x4cff5c */ if (fZ) goto L_004cff5c;
L_004cfec4:; BB(0x004cfec4);
    /* 004cfec4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004cfecb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004cfed2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cfed5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cfed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfed9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cfeda: push 0x9ac8d8 */ { u32 v = 0x9ac8d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfedf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfee1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4cfee6u); f_005b7a84();
    /* 004cfee6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cfee9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004cfef0:; BB(0x004cfef0);
    /* 004cfef0: mov dword ptr [0xa486c0], eax */ W32((u32)(0xa486c0u), r_eax);
    /* 004cfef5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cfefc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004cfefe: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 004cff04: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004cff07: push dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004cff0a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cff0c: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x4cff11u); f_0066f3d4();
    /* 004cff11: mov dword ptr [0xa486cc], eax */ W32((u32)(0xa486ccu), r_eax);
    /* 004cff16: mov eax, dword ptr [0xa486c0] */ r_eax = R32((u32)(0xa486c0u));
    /* 004cff1b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 004cff21: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004cff24: mov ebx, dword ptr [ecx + 0x2c] */ r_ebx = R32((u32)(r_ecx+0x2cu));
    /* 004cff27: mov esi, 1 */ r_esi = 0x1u;
    /* 004cff2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cff2d: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004cff30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004cff31: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x4cff36u); f_0066f3d4();
    /* 004cff36: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004cff39: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004cff3c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004cff3f: mov dword ptr [0xa486c8], eax */ W32((u32)(0xa486c8u), r_eax);
    /* 004cff44: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 004cff49: mov dword ptr [0xa486c4], eax */ W32((u32)(0xa486c4u), r_eax);
    /* 004cff4e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cff51: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cff58: mov esp, ebp */ r_esp = r_ebp;
    /* 004cff5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cff5b: ret  */ FN_RET(0x004cfe80); r_esp += 4; return;
L_004cff5c:; BB(0x004cff5c);
    /* 004cff5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004cff5e: jmp 0x4cfef0 */ goto L_004cfef0;
}

void f_004cff60(void) /* sub_4CFF60 */
{
    FN_ENTER(0x004cff60);
    /* 004cff60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cff61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004cff63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004cff65: call 0x4cff84 */ r_esp -= 4; W32(r_esp, 0x4cff6au); f_004cff84();
    /* 004cff6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004cff6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cff70: jne 0x4cff76 */ if (!fZ) goto L_004cff76;
L_004cff72:; BB(0x004cff72);
    /* 004cff72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cff73: ret 4 */ FN_RET(0x004cff60); r_esp += 8; return;
L_004cff76:; BB(0x004cff76);
    /* 004cff76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004cff77: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4cff7cu); f_005c2f74();
    /* 004cff7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004cff7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004cff7e: ret 4 */ FN_RET(0x004cff60); r_esp += 8; return;
}

void f_004cff84(void) /* sub_4CFF84 */
{
    FN_ENTER(0x004cff84);
    /* 004cff84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cff85: mov ebp, esp */ r_ebp = r_esp;
    /* 004cff87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004cff89: push 0x8d1a30 */ { u32 v = 0x8d1a30u; r_esp -= 4; W32(r_esp, v); }
    /* 004cff8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004cff94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004cff95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004cff9c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cff9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004cffa2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004cffa5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004cffa8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004cffab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004cffae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004cffb1: mov dword ptr [ecx], 0xafc068 */ W32((u32)(r_ecx), 0xafc068u);
    /* 004cffb7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004cffbe: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4cffc3u); f_008171e8();
    /* 004cffc3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004cffc6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004cffcd: mov esp, ebp */ r_esp = r_ebp;
    /* 004cffcf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004cffd0: ret  */ FN_RET(0x004cff84); r_esp += 4; return;
}

void f_004cffd4(void) /* sub_4CFFD4 */
{
    FN_ENTER(0x004cffd4);
    /* 004cffd4: mov ecx, dword ptr [0xa486d8] */ r_ecx = R32((u32)(0xa486d8u));
    /* 004cffda: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004cffdc: je 0x4cfff1 */ if (fZ) goto L_004cfff1;
L_004cffde:; BB(0x004cffde);
    /* 004cffde: je 0x4cffe7 */ if (fZ) goto L_004cffe7;
L_004cffe0:; BB(0x004cffe0);
    /* 004cffe0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004cffe2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4cffe7u); f_004066a8();
L_004cffe7:; BB(0x004cffe7);
    /* 004cffe7: mov dword ptr [0xa486d8], 0 */ W32((u32)(0xa486d8u), 0x0u);
L_004cfff1:; BB(0x004cfff1);
    /* 004cfff1: ret  */ FN_RET(0x004cffd4); r_esp += 4; return;
}

void f_004cfff4(void) /* sub_4CFFF4 */
{
    FN_ENTER(0x004cfff4);
    /* 004cfff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004cfff5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004cfff6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004cfff9: mov edi, ecx */ r_edi = r_ecx;
    /* 004cfffb: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 004cffff: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d0003: mov ecx, edi */ r_ecx = r_edi;
    /* 004d0005: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d000au); f_008193cc();
    /* 004d000a: mov dword ptr [edi], 0xafc068 */ W32((u32)(r_edi), 0xafc068u);
    /* 004d0010: mov eax, dword ptr [0x9ac91c] */ r_eax = R32((u32)(0x9ac91cu));
    /* 004d0015: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004d0018: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004d001b: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004d001e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004d0021: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004d0024: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 004d0029: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 004d002c: mov dword ptr [edi + 0x24], ebp */ W32((u32)(r_edi+0x24u), r_ebp);
    /* 004d002f: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 004d0036: mov word ptr [edi + 0x30], ax */ W16((u32)(r_edi+0x30u), (u16)r_eax);
    /* 004d003a: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 004d0041: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d0046u); f_008587a5();
    /* 004d0046: mov edx, dword ptr [0xa486d8] */ r_edx = R32((u32)(0xa486d8u));
    /* 004d004c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d004f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d0052: fdiv dword ptr [0x908b30] */ ST(0) = ST(0) / R_F32((u32)(0x908b30u));
    /* 004d0058: fmul dword ptr [0x908b2c] */ ST(0) = ST(0) * R_F32((u32)(0x908b2cu));
    /* 004d005e: fmul dword ptr [0x908b28] */ ST(0) = ST(0) * R_F32((u32)(0x908b28u));
    /* 004d0064: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 004d0067: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 004d006d: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 004d0070: mov dword ptr [edi + 0x2c], ebp */ W32((u32)(r_edi+0x2cu), r_ebp);
    /* 004d0073: mov eax, edi */ r_eax = r_edi;
    /* 004d0075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d0078: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d0079: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d007a: ret 0x10 */ FN_RET(0x004cfff4); r_esp += 20; return;
}

