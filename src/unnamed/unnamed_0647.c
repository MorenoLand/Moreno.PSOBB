#include "protos.h"

void f_006470e0(void) /* sub_6470E0 */
{
    FN_ENTER(0x006470e0);
    /* 006470e0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006470e4: lea eax, [ecx + 0x38] */ r_eax = (u32)(r_ecx+0x38u);
    /* 006470e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006470e8: call 0x6470f0 */ r_esp -= 4; W32(r_esp, 0x6470edu); f_006470f0();
    /* 006470ed: ret 4 */ FN_RET(0x006470e0); r_esp += 8; return;
}

void f_006470f0(void) /* sub_6470F0 */
{
    FN_ENTER(0x006470f0);
    /* 006470f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006470f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006470f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006470f4: mov ebx, eax */ r_ebx = r_eax;
L_006470f6:; BB(0x006470f6);
    /* 006470f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006470f7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6470fcu); f_0068d5a8();
    /* 006470fc: mov esi, eax */ r_esi = r_eax;
    /* 006470fe: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647101: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647103: je 0x64712e */ if (fZ) goto L_0064712e;
L_00647105:; BB(0x00647105);
    /* 00647105: push dword ptr [esi + 0x3ec] */ { u32 v = R32((u32)(r_esi+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064710b: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x647110u); f_00807e20();
    /* 00647110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647113: je 0x64712e */ if (fZ) goto L_0064712e;
L_00647115:; BB(0x00647115);
    /* 00647115: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00647118: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00647119: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064711d: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x647122u); f_007a9180();
    /* 00647122: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00647125: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00647129: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064712b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064712c: jb 0x64713d */ if (fC) goto L_0064713d;
L_0064712e:; BB(0x0064712e);
    /* 0064712e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00647131: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00647134: jl 0x6470f6 */ if ((fS!=fO)) goto L_006470f6;
L_00647136:; BB(0x00647136);
    /* 00647136: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647138: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647139: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064713a: ret 8 */ FN_RET(0x006470f0); r_esp += 12; return;
L_0064713d:; BB(0x0064713d);
    /* 0064713d: mov eax, 1 */ r_eax = 0x1u;
    /* 00647142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647143: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00647144: ret 8 */ FN_RET(0x006470f0); r_esp += 12; return;
}

void f_00647148(void) /* sub_647148 */
{
    FN_ENTER(0x00647148);
    /* 00647148: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647149: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064714b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064714d: call 0x64716c */ r_esp -= 4; W32(r_esp, 0x647152u); f_0064716c();
    /* 00647152: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00647156: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647158: jne 0x64715e */ if (!fZ) goto L_0064715e;
L_0064715a:; BB(0x0064715a);
    /* 0064715a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064715b: ret 4 */ FN_RET(0x00647148); r_esp += 8; return;
L_0064715e:; BB(0x0064715e);
    /* 0064715e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064715f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647164u); f_005c2f74();
    /* 00647164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647165: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647166: ret 4 */ FN_RET(0x00647148); r_esp += 8; return;
}

void f_0064716c(void) /* sub_64716C */
{
    FN_ENTER(0x0064716c);
    /* 0064716c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064716d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064716f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647171: push 0x8e5c14 */ { u32 v = 0x8e5c14u; r_esp -= 4; W32(r_esp, v); }
    /* 00647176: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064717c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064717d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647184: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647187: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064718a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064718d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647190: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647193: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00647196: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647199: mov dword ptr [ecx], 0xb2f928 */ W32((u32)(r_ecx), 0xb2f928u);
    /* 0064719f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006471a6: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6471abu); f_007ba1f0();
    /* 006471ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006471ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006471b5: mov esp, ebp */ r_esp = r_ebp;
    /* 006471b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006471b8: ret  */ FN_RET(0x0064716c); r_esp += 4; return;
}

void f_006471bc(void)
{
    FN_ENTER(0x006471bc);
    /* 006471bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006471bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006471bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006471c1: push 0x8e5c3c */ { u32 v = 0x8e5c3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006471c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006471cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006471cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006471d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006471d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006471da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006471dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006471e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006471e3: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006471e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006471ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6471f4u); f_005caba4();
    /* 006471f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006471f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006471f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006471fa: je 0x647233 */ if (fZ) goto L_00647233;
L_006471fc:; BB(0x006471fc);
    /* 006471fc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00647203: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064720a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064720d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647213: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647216: call 0x647238 */ r_esp -= 4; W32(r_esp, 0x64721bu); f_00647238();
    /* 0064721b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064721e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00647225:; BB(0x00647225);
    /* 00647225: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647228: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064722f: mov esp, ebp */ r_esp = r_ebp;
    /* 00647231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647232: ret  */ FN_RET(0x006471bc); r_esp += 4; return;
L_00647233:; BB(0x00647233);
    /* 00647233: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647235: jmp 0x647225 */ goto L_00647225;
}

void f_00647238(void) /* sub_647238 */
{
    FN_ENTER(0x00647238);
    /* 00647238: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647239: mov ebp, esp */ r_ebp = r_esp;
    /* 0064723b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064723d: push 0x8e5c58 */ { u32 v = 0x8e5c58u; r_esp -= 4; W32(r_esp, v); }
    /* 00647242: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647249: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647250: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647253: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647256: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00647259: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064725c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064725f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00647262: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647265: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00647268: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064726b: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x647270u); f_007ba278();
    /* 00647270: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00647277: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064727a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064727d: mov dword ptr [ecx], 0xb2f928 */ W32((u32)(r_ecx), 0xb2f928u);
    /* 00647283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647284: call dword ptr [0xb2f93c] */ { u32 t = R32((u32)(0xb2f93cu)); r_esp -= 4; W32(r_esp, 0x64728au); call_ind(t); }
    /* 0064728a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064728d: mov dword ptr [eax + 0x90], 1 */ W32((u32)(r_eax+0x90u), 0x1u);
    /* 00647297: mov dword ptr [eax + 0x94], 2 */ W32((u32)(r_eax+0x94u), 0x2u);
    /* 006472a1: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 006472ab: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 006472b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006472b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006472bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006472c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006472c2: ret 8 */ FN_RET(0x00647238); r_esp += 12; return;
}

void f_00647261(void)
{
    FN_ENTER(0x00647261);
    /* 00647261: or al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00647263: jne 0x64726d */ if (!fZ) goto L_0064726d;
L_00647265:; BB(0x00647265);
    /* 00647265: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00647268: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064726b: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x647270u); f_007ba278();
L_0064726d:; BB(0x0064726d);
    /* 0064726d: xor byte ptr [edi], dl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0064726f: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00647270: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00647271: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00647272: cld  */ rt_df = 0;
    /* 00647273: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00647275: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00647277: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064727a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0064727d: mov dword ptr [ecx], 0xb2f928 */ W32((u32)(r_ecx), 0xb2f928u);
    /* 00647283: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647284: call dword ptr [0xb2f93c] */ { u32 t = R32((u32)(0xb2f93cu)); r_esp -= 4; W32(r_esp, 0x64728au); call_ind(t); }
    /* 0064728a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064728d: mov dword ptr [eax + 0x90], 1 */ W32((u32)(r_eax+0x90u), 0x1u);
    /* 00647297: mov dword ptr [eax + 0x94], 2 */ W32((u32)(r_eax+0x94u), 0x2u);
    /* 006472a1: mov dword ptr [eax + 0x98], 0 */ W32((u32)(r_eax+0x98u), 0x0u);
    /* 006472ab: mov dword ptr [eax + 0x9c], 0 */ W32((u32)(r_eax+0x9cu), 0x0u);
    /* 006472b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006472b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006472bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006472c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006472c2: ret 8 */ FN_RET(0x00647261); r_esp += 12; return;
}

void f_006472c8(void) /* sub_6472C8 */
{
    FN_ENTER(0x006472c8);
    /* 006472c8: mov eax, dword ptr [ecx + 0x90] */ r_eax = R32((u32)(r_ecx+0x90u));
    /* 006472ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006472d0: je 0x647340 */ if (fZ) goto L_00647340;
L_006472d2:; BB(0x006472d2);
    /* 006472d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006472d5: jne 0x647309 */ if (!fZ) goto L_00647309;
L_006472d7:; BB(0x006472d7);
    /* 006472d7: fld dword ptr [0x935b14] */ FPUSH(R_F32((u32)(0x935b14u)));
    /* 006472dd: fadd dword ptr [ecx + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x9cu));
    /* 006472e3: fcom dword ptr [0x935b10] */ fx_compare(ST(0), R_F32((u32)(0x935b10u))); 
    /* 006472e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006472eb: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 006472f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006472f2: jb 0x647353 */ if (fC) goto L_00647353;
L_006472f4:; BB(0x006472f4);
    /* 006472f4: mov dword ptr [ecx + 0x94], 1 */ W32((u32)(r_ecx+0x94u), 0x1u);
    /* 006472fe: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 00647308: ret  */ FN_RET(0x006472c8); r_esp += 4; return;
L_00647309:; BB(0x00647309);
    /* 00647309: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064730c: jne 0x647353 */ if (!fZ) goto L_00647353;
L_0064730e:; BB(0x0064730e);
    /* 0064730e: fld dword ptr [ecx + 0x9c] */ FPUSH(R_F32((u32)(r_ecx+0x9cu)));
    /* 00647314: fsub dword ptr [0x935b14] */ ST(0) = ST(0) - R_F32((u32)(0x935b14u));
    /* 0064731a: fcom dword ptr [0x935b18] */ fx_compare(ST(0), R_F32((u32)(0x935b18u))); 
    /* 00647320: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00647322: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 00647328: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00647329: ja 0x647353 */ if ((!fC&&!fZ)) goto L_00647353;
L_0064732b:; BB(0x0064732b);
    /* 0064732b: mov dword ptr [ecx + 0x94], 2 */ W32((u32)(r_ecx+0x94u), 0x2u);
    /* 00647335: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 0064733f: ret  */ FN_RET(0x006472c8); r_esp += 4; return;
L_00647340:; BB(0x00647340);
    /* 00647340: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 00647346: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00647349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064734b: jle 0x647354 */ if ((fZ||fS!=fO)) goto L_00647354;
L_0064734d:; BB(0x0064734d);
    /* 0064734d: mov dword ptr [ecx + 0x98], eax */ W32((u32)(r_ecx+0x98u), r_eax);
L_00647353:; BB(0x00647353);
    /* 00647353: ret  */ FN_RET(0x006472c8); r_esp += 4; return;
L_00647354:; BB(0x00647354);
    /* 00647354: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 0064735a: mov dword ptr [ecx + 0x98], 0x12c */ W32((u32)(r_ecx+0x98u), 0x12cu);
    /* 00647364: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00647367: je 0x64737e */ if (fZ) goto L_0064737e;
L_00647369:; BB(0x00647369);
    /* 00647369: mov dword ptr [ecx + 0x90], 2 */ W32((u32)(r_ecx+0x90u), 0x2u);
    /* 00647373: mov dword ptr [ecx + 0x9c], 0x43480000 */ W32((u32)(r_ecx+0x9cu), 0x43480000u);
    /* 0064737d: ret  */ FN_RET(0x006472c8); r_esp += 4; return;
L_0064737e:; BB(0x0064737e);
    /* 0064737e: mov dword ptr [ecx + 0x90], 1 */ W32((u32)(r_ecx+0x90u), 0x1u);
    /* 00647388: mov dword ptr [ecx + 0x9c], 0xc3480000 */ W32((u32)(r_ecx+0x9cu), 0xc3480000u);
    /* 00647392: ret  */ FN_RET(0x006472c8); r_esp += 4; return;
}

void f_00647394(void) /* sub_647394 */
{
    FN_ENTER(0x00647394);
    /* 00647394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647395: mov edi, ecx */ r_edi = r_ecx;
    /* 00647397: mov eax, dword ptr [edi + 0x90] */ r_eax = R32((u32)(r_edi+0x90u));
    /* 0064739d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064739f: je 0x6473b6 */ if (fZ) goto L_006473b6;
L_006473a1:; BB(0x006473a1);
    /* 006473a1: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 006473a6: mov ecx, edi */ r_ecx = r_edi;
    /* 006473a8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006473aa: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 006473af: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6473b2u); call_ind(t); }
    /* 006473b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006473b4: jne 0x6473b8 */ if (!fZ) goto L_006473b8;
L_006473b6:; BB(0x006473b6);
    /* 006473b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006473b7: ret  */ FN_RET(0x00647394); r_esp += 4; return;
L_006473b8:; BB(0x006473b8);
    /* 006473b8: mov ecx, dword ptr [0xa8f430] */ r_ecx = R32((u32)(0xa8f430u));
    /* 006473be: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6473c3u); f_00829cc8();
    /* 006473c3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6473c8u); f_0082d7b0();
    /* 006473c8: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 006473cb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6473d0u); f_0082d838();
    /* 006473d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006473d2: push dword ptr [edi + 0x9c] */ { u32 v = R32((u32)(r_edi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006473d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006473da: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006473dc: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6473e1u); f_00830b74();
    /* 006473e1: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006473e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006473e6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6473ebu); f_0082d8bc();
    /* 006473eb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006473ed: call 0x645ae8 */ r_esp -= 4; W32(r_esp, 0x6473f2u); f_00645ae8();
    /* 006473f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006473f3: mov ecx, eax */ r_ecx = r_eax;
    /* 006473f5: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6473fau); f_00831758();
    /* 006473fa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6473ffu); f_0082da80();
    /* 006473ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00647400: ret  */ FN_RET(0x00647394); r_esp += 4; return;
}

void f_00647404(void) /* sub_647404 */
{
    FN_ENTER(0x00647404);
    /* 00647404: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 0064740e: mov dword ptr [ecx + 0x90], 1 */ W32((u32)(r_ecx+0x90u), 0x1u);
    /* 00647418: ret  */ FN_RET(0x00647404); r_esp += 4; return;
}

void f_0064741c(void) /* sub_64741C */
{
    FN_ENTER(0x0064741c);
    /* 0064741c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064741d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064741f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647421: call 0x6474fc */ r_esp -= 4; W32(r_esp, 0x647426u); f_006474fc();
    /* 00647426: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064742a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064742c: jne 0x647432 */ if (!fZ) goto L_00647432;
L_0064742e:; BB(0x0064742e);
    /* 0064742e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064742f: ret 4 */ FN_RET(0x0064741c); r_esp += 8; return;
L_00647432:; BB(0x00647432);
    /* 00647432: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647433: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647438u); f_005c2f74();
    /* 00647438: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647439: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064743a: ret 4 */ FN_RET(0x0064741c); r_esp += 8; return;
}

void f_00647440(void) /* sub_647440 */
{
    FN_ENTER(0x00647440);
    /* 00647440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647441: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00647443: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647445: call 0x647464 */ r_esp -= 4; W32(r_esp, 0x64744au); f_00647464();
    /* 0064744a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064744e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647450: jne 0x647456 */ if (!fZ) goto L_00647456;
L_00647452:; BB(0x00647452);
    /* 00647452: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647453: ret 4 */ FN_RET(0x00647440); r_esp += 8; return;
L_00647456:; BB(0x00647456);
    /* 00647456: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647457: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64745cu); f_005c2f74();
    /* 0064745c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064745d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064745e: ret 4 */ FN_RET(0x00647440); r_esp += 8; return;
}

void f_00647464(void) /* sub_647464 */
{
    FN_ENTER(0x00647464);
    /* 00647464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647465: mov ebp, esp */ r_ebp = r_esp;
    /* 00647467: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647469: push 0x8e5c74 */ { u32 v = 0x8e5c74u; r_esp -= 4; W32(r_esp, v); }
    /* 0064746e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647475: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064747c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064747f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647482: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647485: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647488: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064748b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064748e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647491: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 00647497: mov dword ptr [ecx], 0xb2fe58 */ W32((u32)(r_ecx), 0xb2fe58u);
    /* 0064749d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064749f: je 0x6474bb */ if (fZ) goto L_006474bb;
L_006474a1:; BB(0x006474a1);
    /* 006474a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006474a4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006474a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006474ad: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006474b1: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
L_006474bb:; BB(0x006474bb);
    /* 006474bb: mov edx, dword ptr [ecx + 0xbc] */ r_edx = R32((u32)(r_ecx+0xbcu));
    /* 006474c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006474c3: je 0x6474df */ if (fZ) goto L_006474df;
L_006474c5:; BB(0x006474c5);
    /* 006474c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006474c8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006474cc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006474d1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006474d5: mov dword ptr [ecx + 0xbc], 0 */ W32((u32)(r_ecx+0xbcu), 0x0u);
L_006474df:; BB(0x006474df);
    /* 006474df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006474e6: call 0x6474fc */ r_esp -= 4; W32(r_esp, 0x6474ebu); f_006474fc();
    /* 006474eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006474ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006474f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006474f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006474f8: ret  */ FN_RET(0x00647464); r_esp += 4; return;
}

void f_006474fc(void) /* sub_6474FC */
{
    FN_ENTER(0x006474fc);
    /* 006474fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006474fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006474ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647501: push 0x8e5c90 */ { u32 v = 0x8e5c90u; r_esp -= 4; W32(r_esp, v); }
    /* 00647506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064750c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064750d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647514: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064751a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064751d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647523: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00647526: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064752d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647530: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 00647536: mov dword ptr [ecx], 0xb2fe28 */ W32((u32)(r_ecx), 0xb2fe28u);
    /* 0064753c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064753e: je 0x647552 */ if (fZ) goto L_00647552;
L_00647540:; BB(0x00647540);
    /* 00647540: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647541: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x647546u); f_007b4e84();
    /* 00647546: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647547: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064754a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64754fu); f_007b9c8c();
    /* 0064754f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00647552:; BB(0x00647552);
    /* 00647552: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00647559: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x64755eu); f_007b4aec();
    /* 0064755e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647561: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647568: mov esp, ebp */ r_esp = r_ebp;
    /* 0064756a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064756b: ret  */ FN_RET(0x006474fc); r_esp += 4; return;
}

void f_0064756c(void) /* sub_64756C */
{
    FN_ENTER(0x0064756c);
    /* 0064756c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064756d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064756f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647571: call 0x647590 */ r_esp -= 4; W32(r_esp, 0x647576u); f_00647590();
    /* 00647576: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064757a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064757c: jne 0x647582 */ if (!fZ) goto L_00647582;
L_0064757e:; BB(0x0064757e);
    /* 0064757e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064757f: ret 4 */ FN_RET(0x0064756c); r_esp += 8; return;
L_00647582:; BB(0x00647582);
    /* 00647582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647583: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647588u); f_005c2f74();
    /* 00647588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647589: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064758a: ret 4 */ FN_RET(0x0064756c); r_esp += 8; return;
}

void f_00647590(void) /* sub_647590 */
{
    FN_ENTER(0x00647590);
    /* 00647590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647591: mov ebp, esp */ r_ebp = r_esp;
    /* 00647593: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647595: push 0x8e5cac */ { u32 v = 0x8e5cacu; r_esp -= 4; W32(r_esp, v); }
    /* 0064759a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006475a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006475a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006475a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006475ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006475ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006475b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006475b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006475b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006475ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006475bd: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 006475c3: mov dword ptr [ecx], 0xb2fe88 */ W32((u32)(r_ecx), 0xb2fe88u);
    /* 006475c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006475cb: je 0x6475e7 */ if (fZ) goto L_006475e7;
L_006475cd:; BB(0x006475cd);
    /* 006475cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006475d0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006475d4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006475d9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006475dd: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
L_006475e7:; BB(0x006475e7);
    /* 006475e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006475ee: call 0x6474fc */ r_esp -= 4; W32(r_esp, 0x6475f3u); f_006474fc();
    /* 006475f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006475f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006475fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006475ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647600: ret  */ FN_RET(0x00647590); r_esp += 4; return;
}

void f_00647604(void) /* sub_647604 */
{
    FN_ENTER(0x00647604);
    /* 00647604: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647605: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00647607: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647609: call 0x647628 */ r_esp -= 4; W32(r_esp, 0x64760eu); f_00647628();
    /* 0064760e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00647612: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647614: jne 0x64761a */ if (!fZ) goto L_0064761a;
L_00647616:; BB(0x00647616);
    /* 00647616: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647617: ret 4 */ FN_RET(0x00647604); r_esp += 8; return;
L_0064761a:; BB(0x0064761a);
    /* 0064761a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064761b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647620u); f_005c2f74();
    /* 00647620: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647621: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647622: ret 4 */ FN_RET(0x00647604); r_esp += 8; return;
}

void f_00647628(void) /* sub_647628 */
{
    FN_ENTER(0x00647628);
    /* 00647628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647629: mov ebp, esp */ r_ebp = r_esp;
    /* 0064762b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064762d: push 0x8e5cc8 */ { u32 v = 0x8e5cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00647632: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647639: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647640: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647643: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647646: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647649: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064764c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064764f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00647652: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647655: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 0064765b: mov dword ptr [ecx], 0xb2feb8 */ W32((u32)(r_ecx), 0xb2feb8u);
    /* 00647661: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647663: je 0x64767f */ if (fZ) goto L_0064767f;
L_00647665:; BB(0x00647665);
    /* 00647665: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647668: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0064766c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00647671: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00647675: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
L_0064767f:; BB(0x0064767f);
    /* 0064767f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00647686: call 0x6474fc */ r_esp -= 4; W32(r_esp, 0x64768bu); f_006474fc();
    /* 0064768b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064768e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647695: mov esp, ebp */ r_esp = r_ebp;
    /* 00647697: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647698: ret  */ FN_RET(0x00647628); r_esp += 4; return;
}

void f_0064769c(void) /* sub_64769C */
{
    FN_ENTER(0x0064769c);
    /* 0064769c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064769d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064769f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006476a1: call 0x6476c0 */ r_esp -= 4; W32(r_esp, 0x6476a6u); f_006476c0();
    /* 006476a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006476aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006476ac: jne 0x6476b2 */ if (!fZ) goto L_006476b2;
L_006476ae:; BB(0x006476ae);
    /* 006476ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006476af: ret 4 */ FN_RET(0x0064769c); r_esp += 8; return;
L_006476b2:; BB(0x006476b2);
    /* 006476b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006476b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6476b8u); f_005c2f74();
    /* 006476b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006476b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006476ba: ret 4 */ FN_RET(0x0064769c); r_esp += 8; return;
}

void f_006476c0(void) /* sub_6476C0 */
{
    FN_ENTER(0x006476c0);
    /* 006476c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006476c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006476c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006476c5: push 0x8e5ce4 */ { u32 v = 0x8e5ce4u; r_esp -= 4; W32(r_esp, v); }
    /* 006476ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006476d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006476d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006476d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006476db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006476de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006476e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006476e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006476e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006476ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006476ed: mov dword ptr [ecx], 0xb2fee8 */ W32((u32)(r_ecx), 0xb2fee8u);
    /* 006476f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006476fa: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6476ffu); f_007ba1f0();
    /* 006476ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647702: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647709: mov esp, ebp */ r_esp = r_ebp;
    /* 0064770b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064770c: ret  */ FN_RET(0x006476c0); r_esp += 4; return;
}

void f_00647710(void) /* sub_647710 */
{
    FN_ENTER(0x00647710);
    /* 00647710: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647711: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00647713: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647715: call 0x647734 */ r_esp -= 4; W32(r_esp, 0x64771au); f_00647734();
    /* 0064771a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064771e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647720: jne 0x647726 */ if (!fZ) goto L_00647726;
L_00647722:; BB(0x00647722);
    /* 00647722: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647723: ret 4 */ FN_RET(0x00647710); r_esp += 8; return;
L_00647726:; BB(0x00647726);
    /* 00647726: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647727: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64772cu); f_005c2f74();
    /* 0064772c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064772d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064772e: ret 4 */ FN_RET(0x00647710); r_esp += 8; return;
}

void f_00647734(void) /* sub_647734 */
{
    FN_ENTER(0x00647734);
    /* 00647734: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647735: mov ebp, esp */ r_ebp = r_esp;
    /* 00647737: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647739: push 0x8e5d00 */ { u32 v = 0x8e5d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0064773e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647744: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647745: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064774c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064774f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647752: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647755: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647758: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064775b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064775e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647761: mov dword ptr [ecx], 0xb2ff14 */ W32((u32)(r_ecx), 0xb2ff14u);
    /* 00647767: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064776e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x647773u); f_007ba1f0();
    /* 00647773: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647776: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064777d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064777f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647780: ret  */ FN_RET(0x00647734); r_esp += 4; return;
}

void f_00647784(void) /* sub_647784 */
{
    FN_ENTER(0x00647784);
    /* 00647784: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647785: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00647787: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647789: call 0x6477a8 */ r_esp -= 4; W32(r_esp, 0x64778eu); f_006477a8();
    /* 0064778e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00647792: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647794: jne 0x64779a */ if (!fZ) goto L_0064779a;
L_00647796:; BB(0x00647796);
    /* 00647796: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647797: ret 4 */ FN_RET(0x00647784); r_esp += 8; return;
L_0064779a:; BB(0x0064779a);
    /* 0064779a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064779b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6477a0u); f_005c2f74();
    /* 006477a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006477a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006477a2: ret 4 */ FN_RET(0x00647784); r_esp += 8; return;
}

void f_006477a8(void) /* sub_6477A8 */
{
    FN_ENTER(0x006477a8);
    /* 006477a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006477a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006477ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006477ad: push 0x8e5d1c */ { u32 v = 0x8e5d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006477b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006477b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006477b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006477c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006477c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006477c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006477c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006477cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006477cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006477d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006477d5: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 006477db: mov dword ptr [ecx], 0xb2ff40 */ W32((u32)(r_ecx), 0xb2ff40u);
    /* 006477e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006477e3: je 0x6477ff */ if (fZ) goto L_006477ff;
L_006477e5:; BB(0x006477e5);
    /* 006477e5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006477e8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006477ec: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006477f1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006477f5: mov dword ptr [ecx + 0xb8], 0 */ W32((u32)(r_ecx+0xb8u), 0x0u);
L_006477ff:; BB(0x006477ff);
    /* 006477ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00647806: call 0x6474fc */ r_esp -= 4; W32(r_esp, 0x64780bu); f_006474fc();
    /* 0064780b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064780e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647815: mov esp, ebp */ r_esp = r_ebp;
    /* 00647817: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647818: ret  */ FN_RET(0x006477a8); r_esp += 4; return;
}

void f_0064781c(void) /* sub_64781C */
{
    FN_ENTER(0x0064781c);
    /* 0064781c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064781d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064781f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647821: call 0x647840 */ r_esp -= 4; W32(r_esp, 0x647826u); f_00647840();
    /* 00647826: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064782a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064782c: jne 0x647832 */ if (!fZ) goto L_00647832;
L_0064782e:; BB(0x0064782e);
    /* 0064782e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064782f: ret 4 */ FN_RET(0x0064781c); r_esp += 8; return;
L_00647832:; BB(0x00647832);
    /* 00647832: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647833: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647838u); f_005c2f74();
    /* 00647838: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064783a: ret 4 */ FN_RET(0x0064781c); r_esp += 8; return;
}

void f_00647840(void) /* sub_647840 */
{
    FN_ENTER(0x00647840);
    /* 00647840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647841: mov ebp, esp */ r_ebp = r_esp;
    /* 00647843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647845: push 0x8e5d38 */ { u32 v = 0x8e5d38u; r_esp -= 4; W32(r_esp, v); }
    /* 0064784a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647858: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064785b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064785e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647861: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647864: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647867: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064786a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064786d: mov dword ptr [ecx], 0xb2ff70 */ W32((u32)(r_ecx), 0xb2ff70u);
    /* 00647873: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064787a: call 0x6474fc */ r_esp -= 4; W32(r_esp, 0x64787fu); f_006474fc();
    /* 0064787f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647882: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647889: mov esp, ebp */ r_esp = r_ebp;
    /* 0064788b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064788c: ret  */ FN_RET(0x00647840); r_esp += 4; return;
}

void f_00647890(void) /* sub_647890 */
{
    FN_ENTER(0x00647890);
    /* 00647890: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647891: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00647893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647895: call 0x6478b4 */ r_esp -= 4; W32(r_esp, 0x64789au); f_006478b4();
    /* 0064789a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064789e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006478a0: jne 0x6478a6 */ if (!fZ) goto L_006478a6;
L_006478a2:; BB(0x006478a2);
    /* 006478a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006478a3: ret 4 */ FN_RET(0x00647890); r_esp += 8; return;
L_006478a6:; BB(0x006478a6);
    /* 006478a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006478a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6478acu); f_005c2f74();
    /* 006478ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006478ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006478ae: ret 4 */ FN_RET(0x00647890); r_esp += 8; return;
}

void f_006478b4(void) /* sub_6478B4 */
{
    FN_ENTER(0x006478b4);
    /* 006478b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006478b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006478b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006478b9: push 0x8e5d54 */ { u32 v = 0x8e5d54u; r_esp -= 4; W32(r_esp, v); }
    /* 006478be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006478c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006478c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006478cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006478cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006478d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006478d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006478d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006478db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006478de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006478e1: mov dword ptr [ecx], 0xb2ffa4 */ W32((u32)(r_ecx), 0xb2ffa4u);
    /* 006478e7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006478ee: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6478f3u); f_007ba1f0();
    /* 006478f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006478f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006478fd: mov esp, ebp */ r_esp = r_ebp;
    /* 006478ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647900: ret  */ FN_RET(0x006478b4); r_esp += 4; return;
}

void f_00647904(void) /* sub_647904 */
{
    FN_ENTER(0x00647904);
    /* 00647904: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647905: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00647907: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00647909: call 0x647928 */ r_esp -= 4; W32(r_esp, 0x64790eu); f_00647928();
    /* 0064790e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00647912: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647914: jne 0x64791a */ if (!fZ) goto L_0064791a;
L_00647916:; BB(0x00647916);
    /* 00647916: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647917: ret 4 */ FN_RET(0x00647904); r_esp += 8; return;
L_0064791a:; BB(0x0064791a);
    /* 0064791a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064791b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647920u); f_005c2f74();
    /* 00647920: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647921: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647922: ret 4 */ FN_RET(0x00647904); r_esp += 8; return;
}

void f_00647928(void) /* sub_647928 */
{
    FN_ENTER(0x00647928);
    /* 00647928: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647929: mov ebp, esp */ r_ebp = r_esp;
    /* 0064792b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064792d: push 0x8e5d70 */ { u32 v = 0x8e5d70u; r_esp -= 4; W32(r_esp, v); }
    /* 00647932: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647939: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647940: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647943: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647946: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647949: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064794c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064794f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00647952: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647955: mov dword ptr [ecx], 0xb2ffd0 */ W32((u32)(r_ecx), 0xb2ffd0u);
    /* 0064795b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00647962: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x647967u); f_007ba1f0();
    /* 00647967: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064796a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647971: mov esp, ebp */ r_esp = r_ebp;
    /* 00647973: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647974: ret  */ FN_RET(0x00647928); r_esp += 4; return;
}

void f_00647978(void) /* sub_647978 */
{
    FN_ENTER(0x00647978);
    /* 00647978: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647979: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064797b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064797d: call 0x64799c */ r_esp -= 4; W32(r_esp, 0x647982u); f_0064799c();
    /* 00647982: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00647986: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647988: jne 0x64798e */ if (!fZ) goto L_0064798e;
L_0064798a:; BB(0x0064798a);
    /* 0064798a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064798b: ret 4 */ FN_RET(0x00647978); r_esp += 8; return;
L_0064798e:; BB(0x0064798e);
    /* 0064798e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064798f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x647994u); f_005c2f74();
    /* 00647994: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647995: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00647996: ret 4 */ FN_RET(0x00647978); r_esp += 8; return;
}

void f_0064799c(void) /* sub_64799C */
{
    FN_ENTER(0x0064799c);
    /* 0064799c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064799d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064799f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006479a1: push 0x8e5d8c */ { u32 v = 0x8e5d8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006479a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006479ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006479ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006479b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006479b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006479ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006479bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006479c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006479c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006479c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006479c9: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 006479cc: mov dword ptr [ecx], 0xb30000 */ W32((u32)(r_ecx), 0xb30000u);
    /* 006479d2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006479d4: je 0x6479ed */ if (fZ) goto L_006479ed;
L_006479d6:; BB(0x006479d6);
    /* 006479d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006479d9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006479dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006479e2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006479e6: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_006479ed:; BB(0x006479ed);
    /* 006479ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006479f4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6479f9u); f_008171e8();
    /* 006479f9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006479fc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647a03: mov esp, ebp */ r_esp = r_ebp;
    /* 00647a05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647a06: ret  */ FN_RET(0x0064799c); r_esp += 4; return;
}

void f_00647a08(void)
{
    FN_ENTER(0x00647a08);
    /* 00647a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647a09: mov ebp, esp */ r_ebp = r_esp;
    /* 00647a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647a0d: push 0x8e5db4 */ { u32 v = 0x8e5db4u; r_esp -= 4; W32(r_esp, v); }
    /* 00647a12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647a19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647a20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647a23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647a26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647a29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647a2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647a2f: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00647a34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00647a3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x647a40u); f_005caba4();
    /* 00647a40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647a41: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00647a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647a46: je 0x647a7f */ if (fZ) goto L_00647a7f;
L_00647a48:; BB(0x00647a48);
    /* 00647a48: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00647a4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00647a56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647a59: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647a5f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647a62: call 0x647a84 */ r_esp -= 4; W32(r_esp, 0x647a67u); f_00647a84();
    /* 00647a67: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647a6a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00647a71:; BB(0x00647a71);
    /* 00647a71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647a74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647a7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00647a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647a7e: ret  */ FN_RET(0x00647a08); r_esp += 4; return;
L_00647a7f:; BB(0x00647a7f);
    /* 00647a7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647a81: jmp 0x647a71 */ goto L_00647a71;
}

void f_00647a84(void) /* sub_647A84 */
{
    FN_ENTER(0x00647a84);
    /* 00647a84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647a85: mov ebp, esp */ r_ebp = r_esp;
    /* 00647a87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647a89: push 0x8e5dde */ { u32 v = 0x8e5ddeu; r_esp -= 4; W32(r_esp, v); }
    /* 00647a8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647a94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647a95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647a9c: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647a9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647aa2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00647aa5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00647aa8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00647aab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00647aae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647ab1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00647ab4: mov dword ptr [ebp - 0x60], 0x41500000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41500000u);
    /* 00647abb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00647abe: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00647ac1: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x647ac6u); f_007b4b48();
    /* 00647ac6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00647acd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647ad0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00647ad3: mov dword ptr [ecx], 0xb2fe28 */ W32((u32)(r_ecx), 0xb2fe28u);
    /* 00647ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647ada: call dword ptr [0xb2fe3c] */ { u32 t = R32((u32)(0xb2fe3cu)); r_esp -= 4; W32(r_esp, 0x647ae0u); call_ind(t); }
    /* 00647ae0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647ae3: mov eax, dword ptr [0xa8f4b4] */ r_eax = R32((u32)(0xa8f4b4u));
    /* 00647ae8: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00647af2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647af4: je 0x647b5d */ if (fZ) goto L_00647b5d;
L_00647af6:; BB(0x00647af6);
    /* 00647af6: mov eax, dword ptr [0x935c40] */ r_eax = R32((u32)(0x935c40u));
    /* 00647afb: mov edx, dword ptr [0x935c44] */ r_edx = R32((u32)(0x935c44u));
    /* 00647b01: mov ebx, dword ptr [ebp - 0x60] */ r_ebx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00647b04: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00647b07: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00647b0e: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00647b11: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 00647b14: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00647b1b: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00647b22: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 00647b25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00647b27: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00647b2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00647b2f: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00647b36: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00647b3d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00647b44: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00647b4b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x647b50u); f_007b9a88();
    /* 00647b50: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647b53: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x647b58u); f_007b4f54();
    /* 00647b58: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647b5b: jmp 0x647b67 */ goto L_00647b67;
L_00647b5d:; BB(0x00647b5d);
    /* 00647b5d: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
L_00647b67:; BB(0x00647b67);
    /* 00647b67: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00647b71: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00647b78: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647b7b: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00647b81: mov dword ptr [eax], 0xb2fe58 */ W32((u32)(r_eax), 0xb2fe58u);
    /* 00647b87: mov edx, dword ptr [0x9c7134] */ r_edx = R32((u32)(0x9c7134u));
    /* 00647b8d: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
    /* 00647b97: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00647b9a: mov ebx, dword ptr [ecx*4 + 0xa8f4b4] */ r_ebx = R32((u32)(r_ecx*4+0xa8f4b4u));
    /* 00647ba1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647ba3: je 0x647c0a */ if (fZ) goto L_00647c0a;
L_00647ba5:; BB(0x00647ba5);
    /* 00647ba5: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 00647ba8: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00647bad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00647bae: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00647bb1: fld dword ptr [eax + 0x3c] */ FPUSH(R_F32((u32)(r_eax+0x3cu)));
    /* 00647bb4: fadd dword ptr [0x935c1c] */ ST(0) = ST(0) + R_F32((u32)(0x935c1cu));
    /* 00647bba: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00647bbd: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00647bc0: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00647bc3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00647bc6: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x647bcbu); f_00509590();
    /* 00647bcb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647bce: fld dword ptr [0x935c24] */ FPUSH(R_F32((u32)(0x935c24u)));
    /* 00647bd4: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00647bd7: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00647bda: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00647bdd: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00647be0: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 00647be6: lea ebx, [ebp - 0x30] */ r_ebx = (u32)(r_ebp+0xffffffd0u);
    /* 00647be9: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 00647bee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647bef: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00647bf2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00647bf5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x647bfau); f_00509590();
    /* 00647bfa: mov edx, eax */ r_edx = r_eax;
    /* 00647bfc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00647bff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647c02: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00647c08: jmp 0x647c18 */ goto L_00647c18;
L_00647c0a:; BB(0x00647c0a);
    /* 00647c0a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647c0c: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 00647c12: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
L_00647c18:; BB(0x00647c18);
    /* 00647c18: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00647c1b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00647c1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647c21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647c28: mov esp, ebp */ r_esp = r_ebp;
    /* 00647c2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647c2b: ret 8 */ FN_RET(0x00647a84); r_esp += 12; return;
}

void f_00647c30(void) /* sub_647C30 */
{
    FN_ENTER(0x00647c30);
    /* 00647c30: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00647c36: mov edx, dword ptr [eax*4 + 0xa8f4b4] */ r_edx = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00647c3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647c3f: je 0x647c64 */ if (fZ) goto L_00647c64;
L_00647c41:; BB(0x00647c41);
    /* 00647c41: mov edx, dword ptr [ecx + 0xb4] */ r_edx = R32((u32)(r_ecx+0xb4u));
    /* 00647c47: lea eax, [edx + 2] */ r_eax = (u32)(r_edx+0x2u);
    /* 00647c4a: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00647c4f: jge 0x647c58 */ if ((fS==fO)) goto L_00647c58;
L_00647c51:; BB(0x00647c51);
    /* 00647c51: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 00647c57: ret  */ FN_RET(0x00647c30); r_esp += 4; return;
L_00647c58:; BB(0x00647c58);
    /* 00647c58: add edx, 0xffffff03 */ {  u32 a = r_edx; u32 b = 0xffffff03u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00647c5e: mov dword ptr [ecx + 0xb4], edx */ W32((u32)(r_ecx+0xb4u), r_edx);
L_00647c64:; BB(0x00647c64);
    /* 00647c64: ret  */ FN_RET(0x00647c30); r_esp += 4; return;
}

void f_00647c68(void) /* sub_647C68 */
{
    FN_ENTER(0x00647c68);
    /* 00647c68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00647c69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647c6a: mov esi, ecx */ r_esi = r_ecx;
    /* 00647c6c: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 00647c72: mov ebp, dword ptr [eax*4 + 0xa8f4b4] */ r_ebp = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00647c79: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647c7b: je 0x647cdb */ if (fZ) goto L_00647cdb;
L_00647c7d:; BB(0x00647c7d);
    /* 00647c7d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00647c82: mov ecx, esi */ r_ecx = r_esi;
    /* 00647c84: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00647c86: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00647c8b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x647c8eu); call_ind(t); }
    /* 00647c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647c90: jne 0x647c95 */ if (!fZ) goto L_00647c95;
L_00647c92:; BB(0x00647c92);
    /* 00647c92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647c93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00647c94: ret  */ FN_RET(0x00647c68); r_esp += 4; return;
L_00647c95:; BB(0x00647c95);
    /* 00647c95: mov ecx, dword ptr [0xa8f49c] */ r_ecx = R32((u32)(0xa8f49cu));
    /* 00647c9b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x647ca0u); f_00829cc8();
    /* 00647ca0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x647ca5u); f_0082d7b0();
    /* 00647ca5: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00647ca8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x647cadu); f_0082d838();
    /* 00647cad: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00647cb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00647cb2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x647cb7u); f_0082d8bc();
    /* 00647cb7: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00647cbd: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647cc0: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x647cc5u); f_0082e1e8();
    /* 00647cc5: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00647ccb: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647cce: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x647cd3u); f_0082e1e8();
    /* 00647cd3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00647cd6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x647cdbu); f_0082da80();
L_00647cdb:; BB(0x00647cdb);
    /* 00647cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647cdc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00647cdd: ret  */ FN_RET(0x00647c68); r_esp += 4; return;
}

void f_00647ce0(void)
{
    FN_ENTER(0x00647ce0);
    /* 00647ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647ce1: mov ebp, esp */ r_ebp = r_esp;
    /* 00647ce3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647ce5: push 0x8e5e04 */ { u32 v = 0x8e5e04u; r_esp -= 4; W32(r_esp, v); }
    /* 00647cea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647cf1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647cf8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647cfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647cfe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647d01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647d04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647d07: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00647d0c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00647d13: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x647d18u); f_005caba4();
    /* 00647d18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00647d19: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00647d1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647d1e: je 0x647d57 */ if (fZ) goto L_00647d57;
L_00647d20:; BB(0x00647d20);
    /* 00647d20: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00647d27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00647d2e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647d31: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647d37: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647d3a: call 0x647d5c */ r_esp -= 4; W32(r_esp, 0x647d3fu); f_00647d5c();
    /* 00647d3f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00647d42: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00647d49:; BB(0x00647d49);
    /* 00647d49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647d4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647d53: mov esp, ebp */ r_esp = r_ebp;
    /* 00647d55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647d56: ret  */ FN_RET(0x00647ce0); r_esp += 4; return;
L_00647d57:; BB(0x00647d57);
    /* 00647d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647d59: jmp 0x647d49 */ goto L_00647d49;
}

void f_00647d5c(void) /* sub_647D5C */
{
    FN_ENTER(0x00647d5c);
    /* 00647d5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647d5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00647d5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647d61: push 0x8e5e2e */ { u32 v = 0x8e5e2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00647d66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647d6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647d6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647d74: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647d77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647d7a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00647d7d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00647d80: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00647d83: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00647d86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647d89: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00647d8c: mov dword ptr [ebp - 0x60], 0x41500000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41500000u);
    /* 00647d93: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00647d96: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00647d99: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x647d9eu); f_007b4b48();
    /* 00647d9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00647da5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647da8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00647dab: mov dword ptr [ecx], 0xb2fe28 */ W32((u32)(r_ecx), 0xb2fe28u);
    /* 00647db1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647db2: call dword ptr [0xb2fe3c] */ { u32 t = R32((u32)(0xb2fe3cu)); r_esp -= 4; W32(r_esp, 0x647db8u); call_ind(t); }
    /* 00647db8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647dbb: mov eax, dword ptr [0xa8f4b8] */ r_eax = R32((u32)(0xa8f4b8u));
    /* 00647dc0: mov dword ptr [ecx + 0xac], 1 */ W32((u32)(r_ecx+0xacu), 0x1u);
    /* 00647dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647dcc: je 0x647e35 */ if (fZ) goto L_00647e35;
L_00647dce:; BB(0x00647dce);
    /* 00647dce: mov eax, dword ptr [0x935c40] */ r_eax = R32((u32)(0x935c40u));
    /* 00647dd3: mov edx, dword ptr [0x935c44] */ r_edx = R32((u32)(0x935c44u));
    /* 00647dd9: mov ebx, dword ptr [ebp - 0x60] */ r_ebx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00647ddc: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00647ddf: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 00647de6: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00647de9: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 00647dec: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00647df3: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00647dfa: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 00647dfd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00647dff: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 00647e06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00647e07: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00647e0e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00647e15: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00647e1c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00647e23: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x647e28u); f_007b9a88();
    /* 00647e28: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647e2b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x647e30u); f_007b4f54();
    /* 00647e30: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647e33: jmp 0x647e3f */ goto L_00647e3f;
L_00647e35:; BB(0x00647e35);
    /* 00647e35: mov dword ptr [ecx + 0xa4], 0 */ W32((u32)(r_ecx+0xa4u), 0x0u);
L_00647e3f:; BB(0x00647e3f);
    /* 00647e3f: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00647e49: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00647e50: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647e53: mov ecx, dword ptr [eax + 0xac] */ r_ecx = R32((u32)(r_eax+0xacu));
    /* 00647e59: mov dword ptr [eax], 0xb2fe88 */ W32((u32)(r_eax), 0xb2fe88u);
    /* 00647e5f: mov edx, dword ptr [0x9c7138] */ r_edx = R32((u32)(0x9c7138u));
    /* 00647e65: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00647e68: mov ebx, dword ptr [ecx*4 + 0xa8f4b4] */ r_ebx = R32((u32)(r_ecx*4+0xa8f4b4u));
    /* 00647e6f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647e71: je 0x647eaf */ if (fZ) goto L_00647eaf;
L_00647e73:; BB(0x00647e73);
    /* 00647e73: lea ebx, [ebp - 0x30] */ r_ebx = (u32)(r_ebp+0xffffffd0u);
    /* 00647e76: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00647e7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00647e7c: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00647e7f: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 00647e82: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00647e85: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00647e88: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00647e8b: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 00647e8e: fadd dword ptr [0x935c1c] */ ST(0) = ST(0) + R_F32((u32)(0x935c1cu));
    /* 00647e94: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 00647e97: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00647e9a: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x647e9fu); f_00509590();
    /* 00647e9f: mov edx, eax */ r_edx = r_eax;
    /* 00647ea1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00647ea4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00647ea7: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 00647ead: jmp 0x647eb9 */ goto L_00647eb9;
L_00647eaf:; BB(0x00647eaf);
    /* 00647eaf: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_00647eb9:; BB(0x00647eb9);
    /* 00647eb9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00647ebc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00647ebf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00647ec2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00647ec9: mov esp, ebp */ r_esp = r_ebp;
    /* 00647ecb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00647ecc: ret 8 */ FN_RET(0x00647d5c); r_esp += 12; return;
}

void f_00647ed0(void) /* sub_647ED0 */
{
    FN_ENTER(0x00647ed0);
    /* 00647ed0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647ed3: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00647ed9: mov eax, dword ptr [eax*4 + 0xa8f4b4] */ r_eax = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00647ee0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00647ee2: je 0x647f2a */ if (fZ) goto L_00647f2a;
L_00647ee4:; BB(0x00647ee4);
    /* 00647ee4: fld dword ptr [0x935c08] */ FPUSH(R_F32((u32)(0x935c08u)));
    /* 00647eea: fadd dword ptr [ecx + 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb0u));
    /* 00647ef0: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00647ef6: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00647ef9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00647efc: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00647eff: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00647f02: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00647f05: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00647f08: fadd dword ptr [eax*4 + 0x935b48] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x935b48u));
    /* 00647f0f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00647f11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00647f13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00647f14: ja 0x647f22 */ if ((!fC&&!fZ)) goto L_00647f22;
L_00647f16:; BB(0x00647f16);
    /* 00647f16: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00647f18: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00647f1e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00647f21: ret  */ FN_RET(0x00647ed0); r_esp += 4; return;
L_00647f22:; BB(0x00647f22);
    /* 00647f22: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00647f24: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
L_00647f2a:; BB(0x00647f2a);
    /* 00647f2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00647f2d: ret  */ FN_RET(0x00647ed0); r_esp += 4; return;
}

void f_00647f30(void) /* sub_647F30 */
{
    FN_ENTER(0x00647f30);
    /* 00647f30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00647f31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00647f32: mov edi, ecx */ r_edi = r_ecx;
    /* 00647f34: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00647f3a: mov esi, dword ptr [eax*4 + 0xa8f4b4] */ r_esi = R32((u32)(r_eax*4+0xa8f4b4u));
    /* 00647f41: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647f43: je 0x647fd1 */ if (fZ) goto L_00647fd1;
L_00647f49:; BB(0x00647f49);
    /* 00647f49: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00647f4e: mov ecx, edi */ r_ecx = r_edi;
    /* 00647f50: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00647f52: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00647f57: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x647f5au); call_ind(t); }
    /* 00647f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00647f5c: jne 0x647f61 */ if (!fZ) goto L_00647f61;
L_00647f5e:; BB(0x00647f5e);
    /* 00647f5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00647f5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00647f60: ret  */ FN_RET(0x00647f30); r_esp += 4; return;
L_00647f61:; BB(0x00647f61);
    /* 00647f61: mov ecx, dword ptr [0xa8f4a0] */ r_ecx = R32((u32)(0xa8f4a0u));
    /* 00647f67: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x647f6cu); f_00829cc8();
    /* 00647f6c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x647f71u); f_0082d7b0();
    /* 00647f71: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 00647f74: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x647f79u); f_0082d838();
    /* 00647f79: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00647f7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00647f7e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x647f83u); f_0082d8bc();
    /* 00647f83: call 0x7a954c */ r_esp -= 4; W32(r_esp, 0x647f88u); f_007a954c();
    /* 00647f88: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647f8e: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 00647f94: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 00647f9a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00647f9d: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 00647fa0: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x647fa5u); f_0083bd00();
    /* 00647fa5: call 0x7a9558 */ r_esp -= 4; W32(r_esp, 0x647faau); f_007a9558();
    /* 00647faa: push dword ptr [edi + 0xb0] */ { u32 v = R32((u32)(r_edi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00647fb0: mov eax, dword ptr [esi + 0x42c] */ r_eax = R32((u32)(r_esi+0x42cu));
    /* 00647fb6: mov esi, dword ptr [esi + 0x430] */ r_esi = R32((u32)(r_esi+0x430u));
    /* 00647fbc: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00647fbf: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00647fc2: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x647fc7u); f_0083bd00();
    /* 00647fc7: call 0x7a9564 */ r_esp -= 4; W32(r_esp, 0x647fccu); f_007a9564();
    /* 00647fcc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x647fd1u); f_0082da80();
L_00647fd1:; BB(0x00647fd1);
    /* 00647fd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00647fd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00647fd3: ret  */ FN_RET(0x00647f30); r_esp += 4; return;
}

void f_00647fd4(void)
{
    FN_ENTER(0x00647fd4);
    /* 00647fd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00647fd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00647fd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00647fd9: push 0x8e5e54 */ { u32 v = 0x8e5e54u; r_esp -= 4; W32(r_esp, v); }
    /* 00647fde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00647fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647fe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647fec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647fef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647ff2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647ff5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647ff8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647ffb: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00648000: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00648007: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64800cu); f_005caba4();
    /* 0064800c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064800d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00648010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648012: je 0x64804b */ if (fZ) goto L_0064804b;
L_00648014:; BB(0x00648014);
    /* 00648014: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064801b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648022: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648025: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064802b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064802e: call 0x648050 */ r_esp -= 4; W32(r_esp, 0x648033u); f_00648050();
    /* 00648033: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648036: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064803d:; BB(0x0064803d);
    /* 0064803d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648040: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648047: mov esp, ebp */ r_esp = r_ebp;
    /* 00648049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064804a: ret  */ FN_RET(0x00647fd4); r_esp += 4; return;
L_0064804b:; BB(0x0064804b);
    /* 0064804b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064804d: jmp 0x64803d */ goto L_0064803d;
}

void f_00647fe0(void)
{
    FN_ENTER(0x00647fe0);
    /* 00647fe0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00647fe2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00647fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00647fe5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00647fec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00647fef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00647ff2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00647ff5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00647ff8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00647ffb: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00648000: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00648007: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64800cu); f_005caba4();
    /* 0064800c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064800d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00648010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00648012: je 0x64804b */ if (fZ) goto L_0064804b;
L_00648014:; BB(0x00648014);
    /* 00648014: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064801b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00648022: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00648025: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064802b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064802e: call 0x648050 */ r_esp -= 4; W32(r_esp, 0x648033u); f_00648050();
    /* 00648033: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00648036: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064803d:; BB(0x0064803d);
    /* 0064803d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00648040: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00648047: mov esp, ebp */ r_esp = r_ebp;
    /* 00648049: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064804a: ret  */ FN_RET(0x00647fe0); r_esp += 4; return;
L_0064804b:; BB(0x0064804b);
    /* 0064804b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064804d: jmp 0x64803d */ goto L_0064803d;
}

