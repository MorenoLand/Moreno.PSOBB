#include "protos.h"

void f_00435014(void) /* sub_435014 */
{
    FN_ENTER(0x00435014);
    /* 00435014: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435015: mov ebp, esp */ r_ebp = r_esp;
    /* 00435017: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00435019: push 0x8cde68 */ { u32 v = 0x8cde68u; r_esp -= 4; W32(r_esp, v); }
    /* 0043501e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00435024: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435025: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0043502c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0043502f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00435032: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00435035: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00435038: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0043503b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0043503e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00435045: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435048: mov dword ptr [ecx], 0xaf46e0 */ W32((u32)(r_ecx), 0xaf46e0u);
    /* 0043504e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x435053u); f_007b9c8c();
    /* 00435053: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0043505a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0043505d: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x435062u); f_0051f54c();
    /* 00435062: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435065: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043506c: mov esp, ebp */ r_esp = r_ebp;
    /* 0043506e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043506f: ret  */ FN_RET(0x00435014); r_esp += 4; return;
}

void f_00435070(void) /* sub_435070 */
{
    FN_ENTER(0x00435070);
    /* 00435070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00435071: mov edi, ecx */ r_edi = r_ecx;
    /* 00435073: fld dword ptr [0x8fcc10] */ FPUSH(R_F32((u32)(0x8fcc10u)));
    /* 00435079: fsub dword ptr [0x8fd4ec] */ ST(0) = ST(0) - R_F32((u32)(0x8fd4ecu));
    /* 0043507f: fcomp dword ptr [edi + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x3cu))); FPOP();
    /* 00435082: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00435084: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00435085: jbe 0x43509f */ if ((fC||fZ)) goto L_0043509f;
L_00435087:; BB(0x00435087);
    /* 00435087: mov ecx, edi */ r_ecx = r_edi;
    /* 00435089: call 0x5204b0 */ r_esp -= 4; W32(r_esp, 0x43508eu); f_005204b0();
    /* 0043508e: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 00435094: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00435097: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0043509a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0043509d: jmp 0x4350ca */ goto L_004350ca;
L_0043509f:; BB(0x0043509f);
    /* 0043509f: mov ecx, edi */ r_ecx = r_edi;
    /* 004350a1: call 0x52045c */ r_esp -= 4; W32(r_esp, 0x4350a6u); f_0052045c();
    /* 004350a6: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004350a9: fcomp dword ptr [0x8fd4e8] */ fx_compare(ST(0), R_F32((u32)(0x8fd4e8u))); FPOP();
    /* 004350af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004350b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004350b2: jb 0x4350c0 */ if (fC) goto L_004350c0;
L_004350b4:; BB(0x004350b4);
    /* 004350b4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004350b6: mov ecx, edi */ r_ecx = r_edi;
    /* 004350b8: call dword ptr [eax + 0x18c] */ { u32 t = R32((u32)(r_eax+0x18cu)); r_esp -= 4; W32(r_esp, 0x4350beu); call_ind(t); }
    /* 004350be: jmp 0x4350ca */ goto L_004350ca;
L_004350c0:; BB(0x004350c0);
    /* 004350c0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004350c2: mov ecx, edi */ r_ecx = r_edi;
    /* 004350c4: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x4350cau); call_ind(t); }
L_004350ca:; BB(0x004350ca);
    /* 004350ca: mov ecx, edi */ r_ecx = r_edi;
    /* 004350cc: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x4350d1u); f_0051ffdc();
    /* 004350d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004350d2: ret  */ FN_RET(0x00435070); r_esp += 4; return;
}

void f_004350d4(void) /* sub_4350D4 */
{
    FN_ENTER(0x004350d4);
    /* 004350d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004350d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004350d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004350d9: push 0x8cde90 */ { u32 v = 0x8cde90u; r_esp -= 4; W32(r_esp, v); }
    /* 004350de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004350e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004350e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004350ec: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004350ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004350f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004350f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004350f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004350fb: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 00435101: push dword ptr [0x9a4824] */ { u32 v = R32((u32)(0x9a4824u)); r_esp -= 4; W32(r_esp, v); }
    /* 00435107: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0043510a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0043510d: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 00435113: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x435118u); f_0077a684();
    /* 00435118: mov esi, eax */ r_esi = r_eax;
    /* 0043511a: push dword ptr [0x9a481c] */ { u32 v = R32((u32)(0x9a481cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00435120: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x435125u); f_0077a698();
    /* 00435125: mov ebx, eax */ r_ebx = r_eax;
    /* 00435127: push dword ptr [0x9a4814] */ { u32 v = R32((u32)(0x9a4814u)); r_esp -= 4; W32(r_esp, v); }
    /* 0043512d: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x435132u); f_0077a6b4();
    /* 00435132: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435135: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00435138: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435139: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043513a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043513b: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x435140u); f_00520c98();
    /* 00435140: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00435143: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0043514a: mov eax, 0x4e20 */ r_eax = 0x4e20u;
    /* 0043514f: mov word ptr [edx + 0x334], ax */ W16((u32)(r_edx+0x334u), (u16)r_eax);
    /* 00435156: push 0x364 */ { u32 v = 0x364u; r_esp -= 4; W32(r_esp, v); }
    /* 0043515b: mov word ptr [edx + 0x2bc], ax */ W16((u32)(r_edx+0x2bcu), (u16)r_eax);
    /* 00435162: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x435167u); f_005caba4();
    /* 00435167: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435168: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0043516b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043516d: je 0x435194 */ if (fZ) goto L_00435194;
L_0043516f:; BB(0x0043516f);
    /* 0043516f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00435176: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043517d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00435180: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00435183: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00435186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435187: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435188: call 0x429834 */ r_esp -= 4; W32(r_esp, 0x43518du); f_00429834();
    /* 0043518d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00435194:; BB(0x00435194);
    /* 00435194: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00435197: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043519a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0043519d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004351a4: mov esp, ebp */ r_esp = r_ebp;
    /* 004351a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004351a7: ret  */ FN_RET(0x004350d4); r_esp += 4; return;
}

void f_004351a8(void) /* sub_4351A8 */
{
    FN_ENTER(0x004351a8);
    /* 004351a8: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 004351ae: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004351b1: test dl, 6 */ {  u32 a = (u8)r_edx; u32 b = 0x6u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004351b4: je 0x4351bc */ if (fZ) goto L_004351bc;
L_004351b6:; BB(0x004351b6);
    /* 004351b6: call 0x52045c */ r_esp -= 4; W32(r_esp, 0x4351bbu); f_0052045c();
    /* 004351bb: ret  */ FN_RET(0x004351a8); r_esp += 4; return;
L_004351bc:; BB(0x004351bc);
    /* 004351bc: call 0x5204b0 */ r_esp -= 4; W32(r_esp, 0x4351c1u); f_005204b0();
    /* 004351c1: ret  */ FN_RET(0x004351a8); r_esp += 4; return;
}

void f_004351c4(void) /* sub_4351C4 */
{
    FN_ENTER(0x004351c4);
    /* 004351c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004351c5: mov ebp, esp */ r_ebp = r_esp;
    /* 004351c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004351c9: push 0x8cdeac */ { u32 v = 0x8cdeacu; r_esp -= 4; W32(r_esp, v); }
    /* 004351ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004351d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004351d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004351dc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004351df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004351e2: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 004351e5: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 004351e8: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 004351eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004351ee: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 004351f2: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 004351f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004351f6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004351f9: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004351fc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004351ff: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00435202: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00435205: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00435208: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0043520b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0043520e: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00435211: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00435214: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x435219u); f_00521738();
    /* 00435219: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00435220: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00435223: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00435226: mov dword ptr [ecx], 0xaf46e0 */ W32((u32)(r_ecx), 0xaf46e0u);
    /* 0043522c: mov eax, dword ptr [0x9a47c4] */ r_eax = R32((u32)(0x9a47c4u));
    /* 00435231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435232: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00435235: call 0x51f760 */ r_esp -= 4; W32(r_esp, 0x43523au); f_0051f760();
    /* 0043523a: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0043523d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00435240: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00435243: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435246: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00435249: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043524c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0043524e: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00435252: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00435256: mov dword ptr [ecx + 0x398], ebx */ W32((u32)(r_ecx+0x398u), r_ebx);
    /* 0043525c: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00435262: mov dword ptr [ecx + 0x3a4], edi */ W32((u32)(r_ecx+0x3a4u), r_edi);
    /* 00435268: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x43526du); f_00520390();
    /* 0043526d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00435270: call 0x43566c */ r_esp -= 4; W32(r_esp, 0x435275u); f_0043566c();
    /* 00435275: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00435278: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0043527b: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043527e: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00435281: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435284: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043528b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043528d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043528e: ret 0x18 */ FN_RET(0x004351c4); r_esp += 28; return;
}

void f_00435246(void)
{
    FN_ENTER(0x00435246);
    /* 00435246: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00435249: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0043524c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0043524e: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00435252: mov word ptr [ecx + 0x2c], dx */ W16((u32)(r_ecx+0x2cu), (u16)r_edx);
    /* 00435256: mov dword ptr [ecx + 0x398], ebx */ W32((u32)(r_ecx+0x398u), r_ebx);
    /* 0043525c: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00435262: mov dword ptr [ecx + 0x3a4], edi */ W32((u32)(r_ecx+0x3a4u), r_edi);
    /* 00435268: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x43526du); f_00520390();
    /* 0043526d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00435270: call 0x43566c */ r_esp -= 4; W32(r_esp, 0x435275u); f_0043566c();
    /* 00435275: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00435278: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0043527b: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0043527e: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00435281: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435284: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0043528b: mov esp, ebp */ r_esp = r_ebp;
    /* 0043528d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043528e: ret 0x18 */ FN_RET(0x00435246); r_esp += 28; return;
}

void f_00435294(void) /* sub_435294 */
{
    FN_ENTER(0x00435294);
    /* 00435294: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00435295: mov edi, ecx */ r_edi = r_ecx;
    /* 00435297: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x43529cu); f_004f7c84();
    /* 0043529c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043529e: je 0x4352a2 */ if (fZ) goto L_004352a2;
L_004352a0:; BB(0x004352a0);
    /* 004352a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004352a1: ret  */ FN_RET(0x00435294); r_esp += 4; return;
L_004352a2:; BB(0x004352a2);
    /* 004352a2: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 004352a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004352aa: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004352ad: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004352b0: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004352b3: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004352b6: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 004352b9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004352bb: mov ecx, edi */ r_ecx = r_edi;
    /* 004352bd: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x4352c3u); call_ind(t); }
    /* 004352c3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004352c5: mov ecx, edi */ r_ecx = r_edi;
    /* 004352c7: call dword ptr [eax + 0x160] */ { u32 t = R32((u32)(r_eax+0x160u)); r_esp -= 4; W32(r_esp, 0x4352cdu); call_ind(t); }
    /* 004352cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004352cf: jne 0x4352e5 */ if (!fZ) goto L_004352e5;
L_004352d1:; BB(0x004352d1);
    /* 004352d1: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004352d3: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004352d5: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 004352dc: mov ecx, edi */ r_ecx = r_edi;
    /* 004352de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004352df: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4352e5u); call_ind(t); }
L_004352e5:; BB(0x004352e5);
    /* 004352e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004352e7: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004352e9: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 004352f0: mov ecx, edi */ r_ecx = r_edi;
    /* 004352f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004352f3: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x4352f9u); call_ind(t); }
    /* 004352f9: mov ecx, edi */ r_ecx = r_edi;
    /* 004352fb: call 0x51f604 */ r_esp -= 4; W32(r_esp, 0x435300u); f_0051f604();
    /* 00435300: mov ecx, edi */ r_ecx = r_edi;
    /* 00435302: call 0x435340 */ r_esp -= 4; W32(r_esp, 0x435307u); f_00435340();
    /* 00435307: mov ecx, edi */ r_ecx = r_edi;
    /* 00435309: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x43530eu); f_00435484();
    /* 0043530e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00435310: mov ecx, edi */ r_ecx = r_edi;
    /* 00435312: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x435318u); call_ind(t); }
    /* 00435318: mov ecx, edi */ r_ecx = r_edi;
    /* 0043531a: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x43531fu); f_006401f0();
    /* 0043531f: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00435322: mov eax, 1 */ r_eax = 0x1u;
    /* 00435327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435329: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0043532e: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00435333: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00435334: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x435339u); f_0080575c();
    /* 00435339: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043533c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043533d: ret  */ FN_RET(0x00435294); r_esp += 4; return;
}

void f_00435340(void) /* sub_435340 */
{
    FN_ENTER(0x00435340);
    /* 00435340: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435343: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 00435349: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0043534b: je 0x435365 */ if (fZ) goto L_00435365;
L_0043534d:; BB(0x0043534d);
    /* 0043534d: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 00435357: mov dword ptr [ecx + 0x3a8], 0 */ W32((u32)(r_ecx+0x3a8u), 0x0u);
    /* 00435361: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00435364: ret  */ FN_RET(0x00435340); r_esp += 4; return;
L_00435365:; BB(0x00435365);
    /* 00435365: fld dword ptr [0x8fd4e0] */ FPUSH(R_F32((u32)(0x8fd4e0u)));
    /* 0043536b: fld dword ptr [ecx + 0x3b0] */ FPUSH(R_F32((u32)(r_ecx+0x3b0u)));
    /* 00435371: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00435373: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00435375: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00435376: jbe 0x435470 */ if ((fC||fZ)) goto L_00435470;
L_0043537c:; BB(0x0043537c);
    /* 0043537c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0043537e: fld dword ptr [0x8fd4dc] */ FPUSH(R_F32((u32)(0x8fd4dcu)));
    /* 00435384: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00435386: fld dword ptr [0x8fd4d8] */ FPUSH(R_F32((u32)(0x8fd4d8u)));
    /* 0043538c: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0043538e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00435390: fld dword ptr [0x8fd4cc] */ FPUSH(R_F32((u32)(0x8fd4ccu)));
    /* 00435396: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00435398: fld dword ptr [0x8fd4d4] */ FPUSH(R_F32((u32)(0x8fd4d4u)));
    /* 0043539e: fld dword ptr [ecx + 0x3b8] */ FPUSH(R_F32((u32)(r_ecx+0x3b8u)));
    /* 004353a4: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 004353a6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004353a8: fld dword ptr [ecx + 0x3bc] */ FPUSH(R_F32((u32)(r_ecx+0x3bcu)));
    /* 004353ae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004353b0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004353b3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004353b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004353bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004353c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004353c4: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 004353c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004353cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004353cd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004353cf: fld dword ptr [0x8fd4d0] */ FPUSH(R_F32((u32)(0x8fd4d0u)));
    /* 004353d5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004353d7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004353d9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004353db: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004353dd: fld dword ptr [ecx + 0x3c0] */ FPUSH(R_F32((u32)(r_ecx+0x3c0u)));
    /* 004353e3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004353e5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004353e7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004353e9: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004353ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004353ef: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004353f2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004353f6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004353fb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004353ff: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00435403: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00435407: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0043540a: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 0043540f: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00435412: or edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00435418: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0043541b: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0043541d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00435420: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00435424: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00435429: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0043542d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00435431: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00435435: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00435438: fld dword ptr [0x8fd4c4] */ FPUSH(R_F32((u32)(0x8fd4c4u)));
    /* 0043543e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00435440: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00435445: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00435447: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00435449: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0043544b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043544d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0043544f: mov dword ptr [ecx + 0x3a8], edx */ W32((u32)(r_ecx+0x3a8u), r_edx);
    /* 00435455: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00435456: jae 0x435466 */ if (!fC) goto L_00435466;
L_00435458:; BB(0x00435458);
    /* 00435458: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0043545a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043545c: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 00435462: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00435465: ret  */ FN_RET(0x00435340); r_esp += 4; return;
L_00435466:; BB(0x00435466);
    /* 00435466: fstp dword ptr [ecx + 0x3b0] */ W_F32((u32)(r_ecx+0x3b0u), ST(0)); FPOP();
    /* 0043546c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0043546f: ret  */ FN_RET(0x00435340); r_esp += 4; return;
L_00435470:; BB(0x00435470);
    /* 00435470: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00435472: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00435474: mov dword ptr [ecx + 0x3a8], 0xffffffff */ W32((u32)(r_ecx+0x3a8u), 0xffffffffu);
    /* 0043547e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00435481: ret  */ FN_RET(0x00435340); r_esp += 4; return;
}

void f_00435345(void)
{
    FN_ENTER(0x00435345);
    /* 00435345: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 00435346: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435348: add byte ptr [eax - 0x38e78bff], ch */ { u32 ad = (u32)(r_eax+0xc7187401u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043534e: sub dword ptr [ebx + eax], 0x81c70000 */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = 0x81c70000u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00435359: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;   }
    /* 0043535b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043535d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0043535f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00435361: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00435364: ret  */ FN_RET(0x00435345); r_esp += 4; return;
}

void f_00435484(void) /* sub_435484 */
{
    FN_ENTER(0x00435484);
    /* 00435484: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00435485: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00435488: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0043548b: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 0043548e: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00435494: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 0043549a: mov dword ptr [ecx + 0x308], edi */ W32((u32)(r_ecx+0x308u), r_edi);
    /* 004354a0: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004354a3: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 004354a6: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 004354a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004354aa: ret  */ FN_RET(0x00435484); r_esp += 4; return;
}

void f_004354ac(void) /* sub_4354AC */
{
    FN_ENTER(0x004354ac);
    /* 004354ac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004354b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004354b2: jne 0x4354c0 */ if (!fZ) goto L_004354c0;
L_004354b4:; BB(0x004354b4);
    /* 004354b4: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004354b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004354ba: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x4354c0u); call_ind(t); }
L_004354c0:; BB(0x004354c0);
    /* 004354c0: ret 8 */ FN_RET(0x004354ac); r_esp += 12; return;
}

void f_004354c4(void) /* sub_4354C4 */
{
    FN_ENTER(0x004354c4);
    /* 004354c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004354c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004354c6: mov edi, ecx */ r_edi = r_ecx;
    /* 004354c8: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 004354cf: movsx ebp, word ptr [edi + 0x334] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 004354d6: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 004354dc: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004354de: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004354e0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004354e2: jne 0x43552a */ if (!fZ) goto L_0043552a;
L_004354e4:; BB(0x004354e4);
    /* 004354e4: mov eax, dword ptr [edi + 0x39c] */ r_eax = R32((u32)(r_edi+0x39cu));
    /* 004354ea: mov dword ptr [edi + 0x3b0], 0x3f800000 */ W32((u32)(r_edi+0x3b0u), 0x3f800000u);
    /* 004354f4: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004354f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004354f8: mov dword ptr [edi + 0x3b4], 0x3f800000 */ W32((u32)(r_edi+0x3b4u), 0x3f800000u);
    /* 00435502: mov dword ptr [edi + 0x3b8], 0 */ W32((u32)(r_edi+0x3b8u), 0x0u);
    /* 0043550c: mov dword ptr [edi + 0x3bc], 0x3f800000 */ W32((u32)(r_edi+0x3bcu), 0x3f800000u);
    /* 00435516: mov dword ptr [edi + 0x3c0], 0x3f800000 */ W32((u32)(r_edi+0x3c0u), 0x3f800000u);
    /* 00435520: jle 0x435569 */ if ((fZ||fS!=fO)) goto L_00435569;
L_00435522:; BB(0x00435522);
    /* 00435522: mov dword ptr [edi + 0x39c], eax */ W32((u32)(r_edi+0x39cu), r_eax);
    /* 00435528: jmp 0x435558 */ goto L_00435558;
L_0043552a:; BB(0x0043552a);
    /* 0043552a: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0043552f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00435534: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00435537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435538: call 0x4b96bc */ r_esp -= 4; W32(r_esp, 0x43553du); f_004b96bc();
    /* 0043553d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00435540: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 00435547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435548: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435549: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0043554c: call 0x43416c */ r_esp -= 4; W32(r_esp, 0x435551u); f_0043416c();
    /* 00435551: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
L_00435558:; BB(0x00435558);
    /* 00435558: mov word ptr [edi + 0x334], dx */ W16((u32)(r_edi+0x334u), (u16)r_edx);
    /* 0043555f: mov ecx, edi */ r_ecx = r_edi;
    /* 00435561: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x435566u); f_0051f81c();
    /* 00435566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435567: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00435568: ret  */ FN_RET(0x004354c4); r_esp += 4; return;
L_00435569:; BB(0x00435569);
    /* 00435569: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0043556b: mov dword ptr [edi + 0x39c], 0 */ W32((u32)(r_edi+0x39cu), 0x0u);
    /* 00435575: mov ecx, edi */ r_ecx = r_edi;
    /* 00435577: call dword ptr [eax + 0x1a8] */ { u32 t = R32((u32)(r_eax+0x1a8u)); r_esp -= 4; W32(r_esp, 0x43557du); call_ind(t); }
    /* 0043557d: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 00435584: jmp 0x435558 */ goto L_00435558;
}

void f_00435588(void) /* sub_435588 */
{
    FN_ENTER(0x00435588);
    /* 00435588: mov dword ptr [ecx + 0x3b0], 0x3f800000 */ W32((u32)(r_ecx+0x3b0u), 0x3f800000u);
    /* 00435592: mov dword ptr [ecx + 0x3b4], 0x3f800000 */ W32((u32)(r_ecx+0x3b4u), 0x3f800000u);
    /* 0043559c: mov dword ptr [ecx + 0x3b8], 0 */ W32((u32)(r_ecx+0x3b8u), 0x0u);
    /* 004355a6: mov dword ptr [ecx + 0x3bc], 0x3f800000 */ W32((u32)(r_ecx+0x3bcu), 0x3f800000u);
    /* 004355b0: mov dword ptr [ecx + 0x3c0], 0 */ W32((u32)(r_ecx+0x3c0u), 0x0u);
    /* 004355ba: ret  */ FN_RET(0x00435588); r_esp += 4; return;
}

void f_004355bc(void) /* sub_4355BC */
{
    FN_ENTER(0x004355bc);
    /* 004355bc: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 004355c2: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 004355c8: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004355cb: je 0x43560a */ if (fZ) goto L_0043560a;
L_004355cd:; BB(0x004355cd);
    /* 004355cd: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 004355d3: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 004355d5: movzx edx, word ptr [eax + 0x10] */ r_edx = (u32)R16((u32)(r_eax+0x10u));
    /* 004355d9: or edx, 0xffff8800 */ {  u32 a = r_edx; u32 b = 0xffff8800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004355df: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 004355e3: mov edx, 0x2517 */ r_edx = 0x2517u;
    /* 004355e8: mov word ptr [eax - 4], dx */ W16((u32)(r_eax+0xfffffffcu), (u16)r_edx);
    /* 004355ec: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 004355f2: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004355f4: and eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004355f9: mov ecx, dword ptr [ecx + 0x3a8] */ r_ecx = R32((u32)(r_ecx+0x3a8u));
    /* 004355ff: and ecx, 0xff000000 */ {  u32 a = r_ecx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00435605: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435607: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00435609: ret  */ FN_RET(0x004355bc); r_esp += 4; return;
L_0043560a:; BB(0x0043560a);
    /* 0043560a: mov edx, dword ptr [ecx + 0x3a8] */ r_edx = R32((u32)(r_ecx+0x3a8u));
    /* 00435610: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00435612: movzx edx, word ptr [eax + 0x10] */ r_edx = (u32)R16((u32)(r_eax+0x10u));
    /* 00435616: and edx, 0x77ff */ {  u32 a = r_edx; u32 b = 0x77ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0043561c: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 00435620: mov edx, 0x2517 */ r_edx = 0x2517u;
    /* 00435625: mov word ptr [eax - 4], dx */ W16((u32)(r_eax+0xfffffffcu), (u16)r_edx);
    /* 00435629: mov eax, dword ptr [ecx + 0x3a4] */ r_eax = R32((u32)(r_ecx+0x3a4u));
    /* 0043562f: or dword ptr [eax], 0xff000000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435635: ret  */ FN_RET(0x004355bc); r_esp += 4; return;
}

void f_0043566c(void) /* sub_43566C */
{
    FN_ENTER(0x0043566c);
    /* 0043566c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0043566d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0043566e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043566f: mov edi, ecx */ r_edi = r_ecx;
    /* 00435671: mov ecx, edi */ r_ecx = r_edi;
    /* 00435673: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x435678u); f_00521840();
    /* 00435678: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0043567a: push 0x9a47e4 */ { u32 v = 0x9a47e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0043567f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00435681: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00435684: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00435687: mov ecx, edi */ r_ecx = r_edi;
    /* 00435689: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x43568eu); f_0051ff3c();
    /* 0043568e: push dword ptr [0x9a4820] */ { u32 v = R32((u32)(0x9a4820u)); r_esp -= 4; W32(r_esp, v); }
    /* 00435694: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x435699u); f_0077a684();
    /* 00435699: mov esi, eax */ r_esi = r_eax;
    /* 0043569b: push dword ptr [0x9a4818] */ { u32 v = R32((u32)(0x9a4818u)); r_esp -= 4; W32(r_esp, v); }
    /* 004356a1: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4356a6u); f_0077a698();
    /* 004356a6: mov ebx, eax */ r_ebx = r_eax;
    /* 004356a8: push dword ptr [0x9a4810] */ { u32 v = R32((u32)(0x9a4810u)); r_esp -= 4; W32(r_esp, v); }
    /* 004356ae: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4356b3u); f_0077a6b4();
    /* 004356b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004356b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004356b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004356b8: mov ecx, edi */ r_ecx = r_edi;
    /* 004356ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004356bb: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4356c0u); f_00520c70();
    /* 004356c0: mov eax, 0x4e20 */ r_eax = 0x4e20u;
    /* 004356c5: mov word ptr [edi + 0x334], ax */ W16((u32)(r_edi+0x334u), (u16)r_eax);
    /* 004356cc: mov word ptr [edi + 0x2bc], ax */ W16((u32)(r_edi+0x2bcu), (u16)r_eax);
    /* 004356d3: mov ecx, edi */ r_ecx = r_edi;
    /* 004356d5: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x4356dau); f_00520360();
    /* 004356da: movzx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)R16((u32)(r_edi+0x2bcu));
    /* 004356e1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004356e3: mov dword ptr [edi + 0x358], 0x9a47c8 */ W32((u32)(r_edi+0x358u), 0x9a47c8u);
    /* 004356ed: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 004356f4: mov dword ptr [edi + 0x384], 0x40400000 */ W32((u32)(r_edi+0x384u), 0x40400000u);
    /* 004356fe: mov ecx, edi */ r_ecx = r_edi;
    /* 00435700: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x435706u); call_ind(t); }
    /* 00435706: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00435708: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0043570a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0043570c: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00435713: mov ecx, edi */ r_ecx = r_edi;
    /* 00435715: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435716: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x43571cu); call_ind(t); }
    /* 0043571c: mov dword ptr [edi + 0x394], 0 */ W32((u32)(r_edi+0x394u), 0x0u);
    /* 00435726: call 0x434160 */ r_esp -= 4; W32(r_esp, 0x43572bu); f_00434160();
    /* 0043572b: mov dword ptr [edi + 0x3a8], 0xffffffff */ W32((u32)(r_edi+0x3a8u), 0xffffffffu);
    /* 00435735: mov dword ptr [edi + 0x39c], eax */ W32((u32)(r_edi+0x39cu), r_eax);
    /* 0043573b: mov dword ptr [edi + 0x3ac], 0x3f800000 */ W32((u32)(r_edi+0x3acu), 0x3f800000u);
    /* 00435745: mov dword ptr [edi + 0x3b0], 0 */ W32((u32)(r_edi+0x3b0u), 0x0u);
    /* 0043574f: mov dword ptr [edi + 0x3b4], 0x3f800000 */ W32((u32)(r_edi+0x3b4u), 0x3f800000u);
    /* 00435759: mov dword ptr [edi + 0x3b8], 0 */ W32((u32)(r_edi+0x3b8u), 0x0u);
    /* 00435763: mov dword ptr [edi + 0x3bc], 0x3f800000 */ W32((u32)(r_edi+0x3bcu), 0x3f800000u);
    /* 0043576d: mov dword ptr [edi + 0x3c0], 0x3f800000 */ W32((u32)(r_edi+0x3c0u), 0x3f800000u);
    /* 00435777: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435778: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00435779: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0043577a: ret  */ FN_RET(0x0043566c); r_esp += 4; return;
}

void f_0043577c(void) /* sub_43577C */
{
    FN_ENTER(0x0043577c);
    /* 0043577c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0043577d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0043577f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00435781: call 0x4357a0 */ r_esp -= 4; W32(r_esp, 0x435786u); f_004357a0();
    /* 00435786: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0043578a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043578c: jne 0x435792 */ if (!fZ) goto L_00435792;
L_0043578e:; BB(0x0043578e);
    /* 0043578e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043578f: ret 4 */ FN_RET(0x0043577c); r_esp += 8; return;
L_00435792:; BB(0x00435792);
    /* 00435792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435793: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x435798u); f_005c2f74();
    /* 00435798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435799: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0043579a: ret 4 */ FN_RET(0x0043577c); r_esp += 8; return;
}

void f_004357a0(void) /* sub_4357A0 */
{
    FN_ENTER(0x004357a0);
    /* 004357a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004357a1: mov ebp, esp */ r_ebp = r_esp;
    /* 004357a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004357a5: push 0x8cdec8 */ { u32 v = 0x8cdec8u; r_esp -= 4; W32(r_esp, v); }
    /* 004357aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004357b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004357b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004357b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004357bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004357be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004357c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004357c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004357c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004357ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004357d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004357d4: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 004357d7: mov dword ptr [ecx], 0xaf4918 */ W32((u32)(r_ecx), 0xaf4918u);
    /* 004357dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004357df: je 0x4357f2 */ if (fZ) goto L_004357f2;
L_004357e1:; BB(0x004357e1);
    /* 004357e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004357e2: call 0x795994 */ r_esp -= 4; W32(r_esp, 0x4357e7u); f_00795994();
    /* 004357e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004357e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004357eb: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_004357f2:; BB(0x004357f2);
    /* 004357f2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004357f9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4357feu); f_008171e8();
    /* 004357fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435801: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00435808: mov esp, ebp */ r_esp = r_ebp;
    /* 0043580a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0043580b: ret  */ FN_RET(0x004357a0); r_esp += 4; return;
}

void f_0043580c(void) /* sub_43580C */
{
    FN_ENTER(0x0043580c);
    /* 0043580c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0043580d: mov ebp, esp */ r_ebp = r_esp;
    /* 0043580f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00435811: push 0x8cdee4 */ { u32 v = 0x8cdee4u; r_esp -= 4; W32(r_esp, v); }
    /* 00435816: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0043581c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0043581d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00435824: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435827: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0043582a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0043582d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00435830: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00435833: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00435836: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00435839: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0043583c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0043583f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x435844u); f_008193cc();
    /* 00435844: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0043584b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043584e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00435851: mov dword ptr [ebx], 0xaf4918 */ W32((u32)(r_ebx), 0xaf4918u);
    /* 00435857: mov eax, dword ptr [0x9a4828] */ r_eax = R32((u32)(0x9a4828u));
    /* 0043585c: mov dword ptr [ebx + 0x28], 0x3f800000 */ W32((u32)(r_ebx+0x28u), 0x3f800000u);
    /* 00435863: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00435866: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 00435869: mov dword ptr [ebx + 0x2c], 0x3f800000 */ W32((u32)(r_ebx+0x2cu), 0x3f800000u);
    /* 00435870: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00435872: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 00435875: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 00435878: mov dword ptr [ebx + 0x30], 0x3e4ccccd */ W32((u32)(r_ebx+0x30u), 0x3e4ccccdu);
    /* 0043587f: mov dword ptr [ebx + 0x34], 0x40000000 */ W32((u32)(r_ebx+0x34u), 0x40000000u);
    /* 00435886: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 0043588d: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 00435894: call 0x7958fc */ r_esp -= 4; W32(r_esp, 0x435899u); f_007958fc();
    /* 00435899: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0043589c: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0043589f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004358a1: je 0x4358de */ if (fZ) goto L_004358de;
L_004358a3:; BB(0x004358a3);
    /* 004358a3: mov ecx, eax */ r_ecx = r_eax;
    /* 004358a5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4358aau); f_0061cdb0();
    /* 004358aa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004358ad: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004358b0: lea eax, [edx + 0x28] */ r_eax = (u32)(r_edx+0x28u);
    /* 004358b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004358b4: call 0x7958b4 */ r_esp -= 4; W32(r_esp, 0x4358b9u); f_007958b4();
    /* 004358b9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004358bc: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004358bf: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 004358c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004358c3: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x4358c8u); f_007958e8();
    /* 004358c8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004358cb: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004358ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004358d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004358d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004358da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004358db: ret 8 */ FN_RET(0x0043580c); r_esp += 12; return;
L_004358de:; BB(0x004358de);
    /* 004358de: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004358e1: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004358e5: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004358eb: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 004358ef: mov eax, ecx */ r_eax = r_ecx;
    /* 004358f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004358f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004358fb: mov esp, ebp */ r_esp = r_ebp;
    /* 004358fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004358fe: ret 8 */ FN_RET(0x0043580c); r_esp += 12; return;
}

void f_00435904(void) /* sub_435904 */
{
    FN_ENTER(0x00435904);
    /* 00435904: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00435905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00435906: mov esi, ecx */ r_esi = r_ecx;
    /* 00435908: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0043590b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043590d: je 0x43593a */ if (fZ) goto L_0043593a;
L_0043590f:; BB(0x0043590f);
    /* 0043590f: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435912: je 0x43593a */ if (fZ) goto L_0043593a;
L_00435914:; BB(0x00435914);
    /* 00435914: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00435916: jle 0x43595b */ if ((fZ||fS!=fO)) goto L_0043595b;
L_00435918:; BB(0x00435918);
    /* 00435918: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0043591b: jg 0x43595b */ if ((!fZ&&fS==fO)) goto L_0043595b;
L_0043591d:; BB(0x0043591d);
    /* 0043591d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00435920: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435923: jne 0x43595b */ if (!fZ) goto L_0043595b;
L_00435925:; BB(0x00435925);
    /* 00435925: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 0043592c: mov edx, 3 */ r_edx = 0x3u;
    /* 00435931: mov dword ptr [esi + 0x20], 3 */ W32((u32)(r_esi+0x20u), 0x3u);
    /* 00435938: jmp 0x43595b */ goto L_0043595b;
L_0043593a:; BB(0x0043593a);
    /* 0043593a: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0043593d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435940: jne 0x43595b */ if (!fZ) goto L_0043595b;
L_00435942:; BB(0x00435942);
    /* 00435942: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435945: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 0043594c: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 00435953: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x435958u); f_0061cdb0();
    /* 00435958: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
L_0043595b:; BB(0x0043595b);
    /* 0043595b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0043595d: je 0x435a26 */ if (fZ) goto L_00435a26;
L_00435963:; BB(0x00435963);
    /* 00435963: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435966: je 0x4359dc */ if (fZ) goto L_004359dc;
L_00435968:; BB(0x00435968);
    /* 00435968: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043596b: jne 0x43597b */ if (!fZ) goto L_0043597b;
L_0043596d:; BB(0x0043596d);
    /* 0043596d: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00435970: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435973: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x435978u); f_007958d0();
    /* 00435978: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435979: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043597a: ret  */ FN_RET(0x00435904); r_esp += 4; return;
L_0043597b:; BB(0x0043597b);
    /* 0043597b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043597e: jne 0x435a26 */ if (!fZ) goto L_00435a26;
L_00435984:; BB(0x00435984);
    /* 00435984: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00435987: fsub dword ptr [0x8fd524] */ ST(0) = ST(0) - R_F32((u32)(0x8fd524u));
    /* 0043598d: fcom dword ptr [0x8fd52c] */ fx_compare(ST(0), R_F32((u32)(0x8fd52cu))); 
    /* 00435993: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00435995: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00435998: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00435999: ja 0x4359b3 */ if ((!fC&&!fZ)) goto L_004359b3;
L_0043599b:; BB(0x0043599b);
    /* 0043599b: fld dword ptr [0x8fd52c] */ FPUSH(R_F32((u32)(0x8fd52cu)));
    /* 004359a1: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004359a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004359a7: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 004359ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4359b3u); f_0061cdb0();
L_004359b3:; BB(0x004359b3);
    /* 004359b3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004359b6: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004359b9: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 004359bc: fadd dword ptr [0x8fd520] */ ST(0) = ST(0) + R_F32((u32)(0x8fd520u));
    /* 004359c2: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004359c5: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004359c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004359c9: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x4359ceu); f_007958e8();
    /* 004359ce: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004359d1: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004359d4: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x4359d9u); f_007958d0();
    /* 004359d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004359da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004359db: ret  */ FN_RET(0x00435904); r_esp += 4; return;
L_004359dc:; BB(0x004359dc);
    /* 004359dc: fld dword ptr [0x8fd524] */ FPUSH(R_F32((u32)(0x8fd524u)));
    /* 004359e2: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004359e5: fcom dword ptr [0x8fd51c] */ fx_compare(ST(0), R_F32((u32)(0x8fd51cu))); 
    /* 004359eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004359ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004359ee: jb 0x4359ff */ if (fC) goto L_004359ff;
L_004359f0:; BB(0x004359f0);
    /* 004359f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004359f2: fld dword ptr [0x8fd528] */ FPUSH(R_F32((u32)(0x8fd528u)));
    /* 004359f8: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
L_004359ff:; BB(0x004359ff);
    /* 004359ff: fld dword ptr [0x8fd520] */ FPUSH(R_F32((u32)(0x8fd520u)));
    /* 00435a05: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435a08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00435a0a: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 00435a0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00435a0f: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00435a12: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00435a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435a16: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x435a1bu); f_007958e8();
    /* 00435a1b: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00435a1e: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435a21: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x435a26u); f_007958d0();
L_00435a26:; BB(0x00435a26);
    /* 00435a26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435a27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00435a28: ret  */ FN_RET(0x00435904); r_esp += 4; return;
}

void f_0043594b(void)
{
    FN_ENTER(0x0043594b);
    /* 0043594b: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0043594d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0043594e: and byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00435950: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00435952: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00435954: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00435955: je 0x435975 */ if (fZ) goto L_00435975;
L_00435957:; BB(0x00435957);
    /* 00435957: add byte ptr [ebx - 0x2d7adfaa], cl */ { u32 ad = (u32)(r_ebx+0xd2852056u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0043595d: je 0x435a26 */ if (fZ) goto L_00435a26;
L_00435963:; BB(0x00435963);
    /* 00435963: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435966: je 0x4359dc */ if (fZ) goto L_004359dc;
L_00435968:; BB(0x00435968);
    /* 00435968: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0043596b: jne 0x43597b */ if (!fZ) goto L_0043597b;
L_0043596d:; BB(0x0043596d);
    /* 0043596d: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00435970: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435973: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x435978u); f_007958d0();
L_00435975:; BB(0x00435975);
    /* 00435975: push dword ptr [0xc35e5900] */ { u32 v = R32((u32)(0xc35e5900u)); r_esp -= 4; W32(r_esp, v); }
    /* 00435978: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435979: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0043597a: ret  */ FN_RET(0x0043594b); r_esp += 4; return;
L_0043597b:; BB(0x0043597b);
    /* 0043597b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0043597e: jne 0x435a26 */ if (!fZ) goto L_00435a26;
L_00435984:; BB(0x00435984);
    /* 00435984: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00435987: fsub dword ptr [0x8fd524] */ ST(0) = ST(0) - R_F32((u32)(0x8fd524u));
    /* 0043598d: fcom dword ptr [0x8fd52c] */ fx_compare(ST(0), R_F32((u32)(0x8fd52cu))); 
    /* 00435993: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00435995: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00435998: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00435999: ja 0x4359b3 */ if ((!fC&&!fZ)) goto L_004359b3;
L_0043599b:; BB(0x0043599b);
    /* 0043599b: fld dword ptr [0x8fd52c] */ FPUSH(R_F32((u32)(0x8fd52cu)));
    /* 004359a1: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004359a4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004359a7: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 004359ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4359b3u); f_0061cdb0();
L_004359b3:; BB(0x004359b3);
    /* 004359b3: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004359b6: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004359b9: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 004359bc: fadd dword ptr [0x8fd520] */ ST(0) = ST(0) + R_F32((u32)(0x8fd520u));
    /* 004359c2: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004359c5: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004359c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004359c9: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x4359ceu); f_007958e8();
    /* 004359ce: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004359d1: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004359d4: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x4359d9u); f_007958d0();
    /* 004359d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004359da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004359db: ret  */ FN_RET(0x0043594b); r_esp += 4; return;
L_004359dc:; BB(0x004359dc);
    /* 004359dc: fld dword ptr [0x8fd524] */ FPUSH(R_F32((u32)(0x8fd524u)));
    /* 004359e2: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004359e5: fcom dword ptr [0x8fd51c] */ fx_compare(ST(0), R_F32((u32)(0x8fd51cu))); 
    /* 004359eb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004359ed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004359ee: jb 0x4359ff */ if (fC) goto L_004359ff;
L_004359f0:; BB(0x004359f0);
    /* 004359f0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004359f2: fld dword ptr [0x8fd528] */ FPUSH(R_F32((u32)(0x8fd528u)));
    /* 004359f8: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
L_004359ff:; BB(0x004359ff);
    /* 004359ff: fld dword ptr [0x8fd520] */ FPUSH(R_F32((u32)(0x8fd520u)));
    /* 00435a05: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435a08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00435a0a: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 00435a0d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00435a0f: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 00435a12: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00435a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435a16: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x435a1bu); f_007958e8();
    /* 00435a1b: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00435a1e: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00435a21: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x435a26u); f_007958d0();
L_00435a26:; BB(0x00435a26);
    /* 00435a26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435a27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00435a28: ret  */ FN_RET(0x0043594b); r_esp += 4; return;
}

void f_00435a2c(void) /* sub_435A2C */
{
    FN_ENTER(0x00435a2c);
    /* 00435a2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00435a2d: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 00435a33: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00435a35: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00435a39: fld dword ptr [0x8fd518] */ FPUSH(R_F32((u32)(0x8fd518u)));
    /* 00435a3f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00435a41: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00435a44: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00435a46: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00435a48: mov dword ptr [edx + ecx + 0x1c], esi */ W32((u32)(r_edx+r_ecx+0x1cu), r_esi);
    /* 00435a4c: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 00435a52: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00435a54: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00435a56: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00435a59: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00435a5b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00435a5e: mov dword ptr [esi + ecx + 0x20], edx */ W32((u32)(r_esi+r_ecx+0x20u), r_edx);
    /* 00435a62: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 00435a68: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00435a6b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00435a6d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00435a6f: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00435a72: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00435a74: mov dword ptr [edx + ecx + 0x24], eax */ W32((u32)(r_edx+r_ecx+0x24u), r_eax);
    /* 00435a78: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 00435a7e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435a80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435a82: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00435a85: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00435a87: fadd dword ptr [edx + ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ecx+0x20u));
    /* 00435a8b: fstp dword ptr [edx + ecx + 0x20] */ W_F32((u32)(r_edx+r_ecx+0x20u), ST(0)); FPOP();
    /* 00435a8f: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 00435a95: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435a98: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00435a9b: jl 0x435aab */ if ((fS!=fO)) goto L_00435aab;
L_00435a9d:; BB(0x00435a9d);
    /* 00435a9d: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 00435aa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00435aa8: ret 4 */ FN_RET(0x00435a2c); r_esp += 8; return;
L_00435aab:; BB(0x00435aab);
    /* 00435aab: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 00435ab1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00435ab2: ret 4 */ FN_RET(0x00435a2c); r_esp += 8; return;
}

void f_00435ab8(void) /* sub_435AB8 */
{
    FN_ENTER(0x00435ab8);
    /* 00435ab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435ab9: mov ebp, esp */ r_ebp = r_esp;
    /* 00435abb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00435abd: push 0x8cdf00 */ { u32 v = 0x8cdf00u; r_esp -= 4; W32(r_esp, v); }
    /* 00435ac2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00435ac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435ac9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00435ad0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435ad3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00435ad6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00435ad9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00435adc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00435adf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00435ae2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435ae5: mov edx, dword ptr [ecx + 0x11c] */ r_edx = R32((u32)(r_ecx+0x11cu));
    /* 00435aeb: mov dword ptr [ecx], 0xaf4928 */ W32((u32)(r_ecx), 0xaf4928u);
    /* 00435af1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435af3: je 0x435b0f */ if (fZ) goto L_00435b0f;
L_00435af5:; BB(0x00435af5);
    /* 00435af5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435af8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00435afc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00435b01: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00435b05: mov dword ptr [ecx + 0x11c], 0 */ W32((u32)(r_ecx+0x11cu), 0x0u);
L_00435b0f:; BB(0x00435b0f);
    /* 00435b0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00435b16: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x435b1bu); f_008171e8();
    /* 00435b1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435b1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00435b25: mov esp, ebp */ r_esp = r_ebp;
    /* 00435b27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435b28: ret  */ FN_RET(0x00435ab8); r_esp += 4; return;
}

void f_00435b2c(void) /* sub_435B2C */
{
    FN_ENTER(0x00435b2c);
    /* 00435b2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435b2d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00435b2f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00435b33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00435b35: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x435b3au); f_008193cc();
    /* 00435b3a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00435b3e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00435b42: mov dword ptr [ebp], 0xaf4928 */ W32((u32)(r_ebp), 0xaf4928u);
    /* 00435b49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435b4b: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00435b52: mov dword ptr [ebp + 0x10c], ecx */ W32((u32)(r_ebp+0x10cu), r_ecx);
    /* 00435b58: mov dword ptr [ebp + 0x110], ecx */ W32((u32)(r_ebp+0x110u), r_ecx);
    /* 00435b5e: mov dword ptr [ebp + 0x114], edx */ W32((u32)(r_ebp+0x114u), r_edx);
    /* 00435b64: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 00435b6b: mov dword ptr [ebp + 0x118], eax */ W32((u32)(r_ebp+0x118u), r_eax);
    /* 00435b71: mov dword ptr [ebp + 0x11c], ecx */ W32((u32)(r_ebp+0x11cu), r_ecx);
    /* 00435b77: mov dword ptr [ebp + 0x120], ecx */ W32((u32)(r_ebp+0x120u), r_ecx);
    /* 00435b7d: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 00435b84: mov eax, ebp */ r_eax = r_ebp;
    /* 00435b86: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 00435b8d: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 00435b94: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 00435b9b: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 00435ba2: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 00435ba9: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 00435bb0: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 00435bb7: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 00435bbe: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
    /* 00435bc5: mov dword ptr [ebp + 0x4c], 0 */ W32((u32)(r_ebp+0x4cu), 0x0u);
    /* 00435bcc: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 00435bd3: mov dword ptr [ebp + 0x54], 0 */ W32((u32)(r_ebp+0x54u), 0x0u);
    /* 00435bda: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 00435be1: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 00435be8: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00435bef: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
    /* 00435bf6: mov dword ptr [ebp + 0x68], 0 */ W32((u32)(r_ebp+0x68u), 0x0u);
    /* 00435bfd: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 00435c04: mov dword ptr [ebp + 0x70], 0 */ W32((u32)(r_ebp+0x70u), 0x0u);
    /* 00435c0b: mov dword ptr [ebp + 0x74], 0 */ W32((u32)(r_ebp+0x74u), 0x0u);
    /* 00435c12: mov dword ptr [ebp + 0x78], 0 */ W32((u32)(r_ebp+0x78u), 0x0u);
    /* 00435c19: mov dword ptr [ebp + 0x7c], 0 */ W32((u32)(r_ebp+0x7cu), 0x0u);
    /* 00435c20: mov dword ptr [ebp + 0x80], 0 */ W32((u32)(r_ebp+0x80u), 0x0u);
    /* 00435c2a: mov dword ptr [ebp + 0x84], 0 */ W32((u32)(r_ebp+0x84u), 0x0u);
    /* 00435c34: mov dword ptr [ebp + 0x88], 0 */ W32((u32)(r_ebp+0x88u), 0x0u);
    /* 00435c3e: mov dword ptr [ebp + 0x8c], 0 */ W32((u32)(r_ebp+0x8cu), 0x0u);
    /* 00435c48: mov dword ptr [ebp + 0x90], 0 */ W32((u32)(r_ebp+0x90u), 0x0u);
    /* 00435c52: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 00435c5c: mov dword ptr [ebp + 0x98], 0 */ W32((u32)(r_ebp+0x98u), 0x0u);
    /* 00435c66: mov dword ptr [ebp + 0x9c], 0 */ W32((u32)(r_ebp+0x9cu), 0x0u);
    /* 00435c70: mov dword ptr [ebp + 0xa0], 0 */ W32((u32)(r_ebp+0xa0u), 0x0u);
    /* 00435c7a: mov dword ptr [ebp + 0xa4], 0 */ W32((u32)(r_ebp+0xa4u), 0x0u);
    /* 00435c84: mov dword ptr [ebp + 0xa8], 0 */ W32((u32)(r_ebp+0xa8u), 0x0u);
    /* 00435c8e: mov dword ptr [ebp + 0xac], 0 */ W32((u32)(r_ebp+0xacu), 0x0u);
    /* 00435c98: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 00435ca2: mov dword ptr [ebp + 0xb4], 0 */ W32((u32)(r_ebp+0xb4u), 0x0u);
    /* 00435cac: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00435cb6: mov dword ptr [ebp + 0xbc], 0 */ W32((u32)(r_ebp+0xbcu), 0x0u);
    /* 00435cc0: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 00435cca: mov dword ptr [ebp + 0xc4], 0 */ W32((u32)(r_ebp+0xc4u), 0x0u);
    /* 00435cd4: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 00435cde: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 00435ce8: mov dword ptr [ebp + 0xd0], 0 */ W32((u32)(r_ebp+0xd0u), 0x0u);
    /* 00435cf2: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 00435cfc: mov dword ptr [ebp + 0xd8], 0 */ W32((u32)(r_ebp+0xd8u), 0x0u);
    /* 00435d06: mov dword ptr [ebp + 0xdc], 0 */ W32((u32)(r_ebp+0xdcu), 0x0u);
    /* 00435d10: mov dword ptr [ebp + 0xe0], 0 */ W32((u32)(r_ebp+0xe0u), 0x0u);
    /* 00435d1a: mov dword ptr [ebp + 0xe4], 0 */ W32((u32)(r_ebp+0xe4u), 0x0u);
    /* 00435d24: mov dword ptr [ebp + 0xe8], 0 */ W32((u32)(r_ebp+0xe8u), 0x0u);
    /* 00435d2e: mov dword ptr [ebp + 0xec], 0 */ W32((u32)(r_ebp+0xecu), 0x0u);
    /* 00435d38: mov dword ptr [ebp + 0xf0], 0 */ W32((u32)(r_ebp+0xf0u), 0x0u);
    /* 00435d42: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 00435d4c: mov dword ptr [ebp + 0xf8], 0 */ W32((u32)(r_ebp+0xf8u), 0x0u);
    /* 00435d56: mov dword ptr [ebp + 0xfc], 0 */ W32((u32)(r_ebp+0xfcu), 0x0u);
    /* 00435d60: mov dword ptr [ebp + 0x100], 0 */ W32((u32)(r_ebp+0x100u), 0x0u);
    /* 00435d6a: mov dword ptr [ebp + 0x104], 0 */ W32((u32)(r_ebp+0x104u), 0x0u);
    /* 00435d74: mov dword ptr [ebp + 0x108], 0 */ W32((u32)(r_ebp+0x108u), 0x0u);
    /* 00435d7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435d7f: ret 0xc */ FN_RET(0x00435b2c); r_esp += 16; return;
}

void f_00435d84(void) /* sub_435D84 */
{
    FN_ENTER(0x00435d84);
    /* 00435d84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435d85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00435d87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00435d89: call 0x435ab8 */ r_esp -= 4; W32(r_esp, 0x435d8eu); f_00435ab8();
    /* 00435d8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00435d92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435d94: jne 0x435d9a */ if (!fZ) goto L_00435d9a;
L_00435d96:; BB(0x00435d96);
    /* 00435d96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435d97: ret 4 */ FN_RET(0x00435d84); r_esp += 8; return;
L_00435d9a:; BB(0x00435d9a);
    /* 00435d9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435d9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x435da0u); f_005c2f74();
    /* 00435da0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435da1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435da2: ret 4 */ FN_RET(0x00435d84); r_esp += 8; return;
}

void f_00435da8(void) /* sub_435DA8 */
{
    FN_ENTER(0x00435da8);
    /* 00435da8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435da9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00435dab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00435dad: call 0x435e40 */ r_esp -= 4; W32(r_esp, 0x435db2u); f_00435e40();
    /* 00435db2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00435db6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435db8: jne 0x435dbe */ if (!fZ) goto L_00435dbe;
L_00435dba:; BB(0x00435dba);
    /* 00435dba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435dbb: ret 4 */ FN_RET(0x00435da8); r_esp += 8; return;
L_00435dbe:; BB(0x00435dbe);
    /* 00435dbe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435dbf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x435dc4u); f_005c2f74();
    /* 00435dc4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435dc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435dc6: ret 4 */ FN_RET(0x00435da8); r_esp += 8; return;
}

void f_00435dcc(void) /* sub_435DCC */
{
    FN_ENTER(0x00435dcc);
    /* 00435dcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435dcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00435dcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00435dd1: call 0x435df0 */ r_esp -= 4; W32(r_esp, 0x435dd6u); f_00435df0();
    /* 00435dd6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00435dda: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435ddc: jne 0x435de2 */ if (!fZ) goto L_00435de2;
L_00435dde:; BB(0x00435dde);
    /* 00435dde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435ddf: ret 4 */ FN_RET(0x00435dcc); r_esp += 8; return;
L_00435de2:; BB(0x00435de2);
    /* 00435de2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435de3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x435de8u); f_005c2f74();
    /* 00435de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435de9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435dea: ret 4 */ FN_RET(0x00435dcc); r_esp += 8; return;
}

void f_00435df0(void) /* sub_435DF0 */
{
    FN_ENTER(0x00435df0);
    /* 00435df0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435df1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435df3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00435df5: push 0x8cdf1c */ { u32 v = 0x8cdf1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00435dfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00435e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435e01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00435e08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435e0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00435e0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00435e11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00435e14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00435e17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00435e1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435e1d: mov dword ptr [ecx], 0xaf4be0 */ W32((u32)(r_ecx), 0xaf4be0u);
    /* 00435e23: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00435e2a: call 0x435e40 */ r_esp -= 4; W32(r_esp, 0x435e2fu); f_00435e40();
    /* 00435e2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435e32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00435e39: mov esp, ebp */ r_esp = r_ebp;
    /* 00435e3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435e3c: ret  */ FN_RET(0x00435df0); r_esp += 4; return;
}

void f_00435e40(void) /* sub_435E40 */
{
    FN_ENTER(0x00435e40);
    /* 00435e40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435e41: mov ebp, esp */ r_ebp = r_esp;
    /* 00435e43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00435e45: push 0x8cdf38 */ { u32 v = 0x8cdf38u; r_esp -= 4; W32(r_esp, v); }
    /* 00435e4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00435e50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435e51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00435e58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435e5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00435e5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00435e61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00435e64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00435e67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00435e6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00435e71: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435e74: mov dword ptr [ecx], 0xaf4a00 */ W32((u32)(r_ecx), 0xaf4a00u);
    /* 00435e7a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x435e7fu); f_007b9c8c();
    /* 00435e7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00435e86: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435e89: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x435e8eu); f_0051f54c();
    /* 00435e8e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435e91: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00435e98: mov esp, ebp */ r_esp = r_ebp;
    /* 00435e9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435e9b: ret  */ FN_RET(0x00435e40); r_esp += 4; return;
}

void f_00435e9c(void) /* sub_435E9C */
{
    FN_ENTER(0x00435e9c);
    /* 00435e9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435e9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00435e9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00435ea1: call 0x435ec0 */ r_esp -= 4; W32(r_esp, 0x435ea6u); f_00435ec0();
    /* 00435ea6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00435eaa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435eac: jne 0x435eb2 */ if (!fZ) goto L_00435eb2;
L_00435eae:; BB(0x00435eae);
    /* 00435eae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435eaf: ret 4 */ FN_RET(0x00435e9c); r_esp += 8; return;
L_00435eb2:; BB(0x00435eb2);
    /* 00435eb2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00435eb3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x435eb8u); f_005c2f74();
    /* 00435eb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00435eb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00435eba: ret 4 */ FN_RET(0x00435e9c); r_esp += 8; return;
}

void f_00435ec0(void) /* sub_435EC0 */
{
    FN_ENTER(0x00435ec0);
    /* 00435ec0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435ec1: mov ebp, esp */ r_ebp = r_esp;
    /* 00435ec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00435ec5: push 0x8cdf54 */ { u32 v = 0x8cdf54u; r_esp -= 4; W32(r_esp, v); }
    /* 00435eca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00435ed0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435ed1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00435ed8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435edb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00435ede: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00435ee1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00435ee4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00435ee7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00435eea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00435eed: mov dword ptr [ecx], 0xaf4dc0 */ W32((u32)(r_ecx), 0xaf4dc0u);
    /* 00435ef3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00435efa: call 0x435e40 */ r_esp -= 4; W32(r_esp, 0x435effu); f_00435e40();
    /* 00435eff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00435f02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00435f09: mov esp, ebp */ r_esp = r_ebp;
    /* 00435f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435f0c: ret  */ FN_RET(0x00435ec0); r_esp += 4; return;
}

void f_00435f10(void) /* sub_435F10 */
{
    FN_ENTER(0x00435f10);
    /* 00435f10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435f11: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00435f13: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00435f17: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f1a: je 0x435f46 */ if (fZ) goto L_00435f46;
L_00435f1c:; BB(0x00435f1c);
    /* 00435f1c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00435f1f: jne 0x435f42 */ if (!fZ) goto L_00435f42;
L_00435f21:; BB(0x00435f21);
    /* 00435f21: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00435f27: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435f2c: je 0x435f42 */ if (fZ) goto L_00435f42;
L_00435f2e:; BB(0x00435f2e);
    /* 00435f2e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00435f30: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00435f35: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00435f3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00435f3d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x435f42u); f_0051f62c();
L_00435f42:; BB(0x00435f42);
    /* 00435f42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435f43: ret 4 */ FN_RET(0x00435f10); r_esp += 8; return;
L_00435f46:; BB(0x00435f46);
    /* 00435f46: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00435f49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00435f4b: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x435f51u); call_ind(t); }
    /* 00435f51: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00435f57: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00435f5a: and eax, 0xfffffff9 */ {  u32 a = r_eax; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00435f5d: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00435f63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00435f64: ret 4 */ FN_RET(0x00435f10); r_esp += 8; return;
}

void f_00435f68(void) /* sub_435F68 */
{
    FN_ENTER(0x00435f68);
    /* 00435f68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00435f69: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00435f6c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00435f6e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00435f72: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f75: je 0x436045 */ if (fZ) goto L_00436045;
L_00435f7b:; BB(0x00435f7b);
    /* 00435f7b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f7e: je 0x43602a */ if (fZ) goto L_0043602a;
L_00435f84:; BB(0x00435f84);
    /* 00435f84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00435f86: jne 0x43603e */ if (!fZ) goto L_0043603e;
L_00435f8c:; BB(0x00435f8c);
    /* 00435f8c: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 00435f92: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435f95: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00435f9b: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00435f9e: jle 0x43603e */ if ((fZ||fS!=fO)) goto L_0043603e;
L_00435fa4:; BB(0x00435fa4);
    /* 00435fa4: mov eax, dword ptr [0x9a48b4] */ r_eax = R32((u32)(0x9a48b4u));
    /* 00435fa9: mov edx, dword ptr [0x9a48b8] */ r_edx = R32((u32)(0x9a48b8u));
    /* 00435faf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00435fb2: mov eax, dword ptr [0x9a48bc] */ r_eax = R32((u32)(0x9a48bcu));
    /* 00435fb7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00435fbb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00435fbf: mov eax, dword ptr [0x9a48c0] */ r_eax = R32((u32)(0x9a48c0u));
    /* 00435fc4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00435fc8: mov eax, dword ptr [0x9a48c4] */ r_eax = R32((u32)(0x9a48c4u));
    /* 00435fcd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00435fd1: call 0x434154 */ r_esp -= 4; W32(r_esp, 0x435fd6u); f_00434154();
    /* 00435fd6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00435fda: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00435fdd: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00435fe0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00435fe2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00435fe6: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x435febu); f_0051fc9c();
    /* 00435feb: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00435fed: push 0x16b */ { u32 v = 0x16bu; r_esp -= 4; W32(r_esp, v); }
    /* 00435ff2: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00435ff8: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00435ffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00435ffc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x436001u); f_0050b7a4();
    /* 00436001: mov dword ptr [ebp + 0x3d8], 2 */ W32((u32)(r_ebp+0x3d8u), 0x2u);
    /* 0043600b: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00436011: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00436013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00436015: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00436016: push 0x32c */ { u32 v = 0x32cu; r_esp -= 4; W32(r_esp, v); }
    /* 0043601b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x436020u); f_00814298();
    /* 00436020: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00436023: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436026: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436027: ret 4 */ FN_RET(0x00435f68); r_esp += 8; return;
L_0043602a:; BB(0x0043602a);
    /* 0043602a: mov eax, dword ptr [ebp + 0x3d8] */ r_eax = R32((u32)(r_ebp+0x3d8u));
    /* 00436030: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00436033: jne 0x43603e */ if (!fZ) goto L_0043603e;
L_00436035:; BB(0x00436035);
    /* 00436035: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00436037: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00436039: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x43603eu); f_0051f62c();
L_0043603e:; BB(0x0043603e);
    /* 0043603e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436041: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436042: ret 4 */ FN_RET(0x00435f68); r_esp += 8; return;
L_00436045:; BB(0x00436045);
    /* 00436045: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00436048: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0043604a: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x436050u); call_ind(t); }
    /* 00436050: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00436052: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00436058: mov ecx, dword ptr [ebp + 0xa4] */ r_ecx = R32((u32)(r_ebp+0xa4u));
    /* 0043605e: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00436061: mov dword ptr [ebp + 0x398], eax */ W32((u32)(r_ebp+0x398u), r_eax);
    /* 00436067: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00436069: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0043606a: push 0x16a */ { u32 v = 0x16au; r_esp -= 4; W32(r_esp, v); }
    /* 0043606f: mov dword ptr [ebp + 0x3bc], edx */ W32((u32)(r_ebp+0x3bcu), r_edx);
    /* 00436075: mov dword ptr [ebp + 0x3d4], edx */ W32((u32)(r_ebp+0x3d4u), r_edx);
    /* 0043607b: mov dword ptr [ebp + 0x3d8], edx */ W32((u32)(r_ebp+0x3d8u), r_edx);
    /* 00436081: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00436084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00436085: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x43608au); f_0050a984();
    /* 0043608a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0043608d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00436090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00436091: ret 4 */ FN_RET(0x00435f68); r_esp += 8; return;
}

