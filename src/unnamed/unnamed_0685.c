#include "protos.h"

void f_0068508c(void)
{
    FN_ENTER(0x0068508c);
    /* 0068508c: jl 0x68508d */ if ((fS!=fO)) UNSUP(0x0068508c, "branch to code that was not decoded");
L_0068508e:; BB(0x0068508e);
    /* 0068508e: jmp dword ptr [ecx + 0xaab504] */ { u32 t = R32((u32)(r_ecx+0xaab504u)); jmp_ind(t); return; }
}

void f_006850e8(void) /* sub_6850E8 */
{
    FN_ENTER(0x006850e8);
    /* 006850e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006850e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006850eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006850ed: push 0x8eab4e */ { u32 v = 0x8eab4eu; r_esp -= 4; W32(r_esp, v); }
    /* 006850f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006850f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006850f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00685100: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00685103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00685106: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00685109: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0068510c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0068510f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00685112: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00685115: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0068511c: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 00685121: mov eax, ecx */ r_eax = r_ecx;
    /* 00685123: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685125: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00685127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685128: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x68512du); f_008586d6();
    /* 0068512d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00685130: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685132: jne 0x685144 */ if (!fZ) goto L_00685144;
L_00685134:; BB(0x00685134);
    /* 00685134: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00685137: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068513e: mov esp, ebp */ r_esp = r_ebp;
    /* 00685140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685141: ret 4 */ FN_RET(0x006850e8); r_esp += 8; return;
L_00685144:; BB(0x00685144);
    /* 00685144: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00685147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685148: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x68514du); f_00857e98();
    /* 0068514d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068514e: jmp 0x685134 */ goto L_00685134;
}

void f_00685150(void) /* sub_685150 */
{
    FN_ENTER(0x00685150);
    /* 00685150: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685151: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00685153: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00685155: call 0x685174 */ r_esp -= 4; W32(r_esp, 0x68515au); f_00685174();
    /* 0068515a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0068515e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685160: jne 0x685166 */ if (!fZ) goto L_00685166;
L_00685162:; BB(0x00685162);
    /* 00685162: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685163: ret 4 */ FN_RET(0x00685150); r_esp += 8; return;
L_00685166:; BB(0x00685166);
    /* 00685166: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685167: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x68516cu); f_005c2f74();
    /* 0068516c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068516d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068516e: ret 4 */ FN_RET(0x00685150); r_esp += 8; return;
}

void f_00685174(void) /* sub_685174 */
{
    FN_ENTER(0x00685174);
    /* 00685174: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685175: mov ebp, esp */ r_ebp = r_esp;
    /* 00685177: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685179: push 0x8eacd4 */ { u32 v = 0x8eacd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068517e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00685184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685185: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0068518c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068518f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00685192: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00685195: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00685198: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0068519b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0068519e: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 006851a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851a8: mov dword ptr [ecx], 0xb39460 */ W32((u32)(r_ecx), 0xb39460u);
    /* 006851ae: call 0x685300 */ r_esp -= 4; W32(r_esp, 0x6851b3u); f_00685300();
    /* 006851b3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851b6: call 0x685314 */ r_esp -= 4; W32(r_esp, 0x6851bbu); f_00685314();
    /* 006851bb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851be: call 0x685328 */ r_esp -= 4; W32(r_esp, 0x6851c3u); f_00685328();
    /* 006851c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851c6: call 0x68534c */ r_esp -= 4; W32(r_esp, 0x6851cbu); f_0068534c();
    /* 006851cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851ce: call 0x685370 */ r_esp -= 4; W32(r_esp, 0x6851d3u); f_00685370();
    /* 006851d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006851da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851dd: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006851e3: call 0x6a91ec */ r_esp -= 4; W32(r_esp, 0x6851e8u); f_006a91ec();
    /* 006851e8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006851eb: mov dword ptr [ecx + 0x71c], 0xb39454 */ W32((u32)(r_ecx+0x71cu), 0xb39454u);
    /* 006851f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006851fc: add ecx, 0x628 */ {  u32 a = r_ecx; u32 b = 0x628u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685202: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x685207u); f_0061cdb0();
    /* 00685207: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068520a: add eax, 0x538 */ {  u32 a = r_eax; u32 b = 0x538u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068520f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00685212: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00685215: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685218: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0068521b: mov dword ptr [ebp - 4], 0x10 */ W32((u32)(r_ebp+0xfffffffcu), 0x10u);
    /* 00685222: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685227: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068522a: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068522d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068522f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685231: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685232: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x685237u); f_008586d6();
    /* 00685237: mov dword ptr [ebp - 4], 0xf */ W32((u32)(r_ebp+0xfffffffcu), 0xfu);
    /* 0068523e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685243: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00685246: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685249: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068524b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068524d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068524e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x685253u); f_008586d6();
    /* 00685253: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00685256: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00685259: mov dword ptr [ebp - 4], 0x11 */ W32((u32)(r_ebp+0xfffffffcu), 0x11u);
    /* 00685260: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685265: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685268: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068526b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068526d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068526f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685270: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x685275u); f_008586d6();
    /* 00685275: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 0068527c: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685281: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685284: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685287: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685289: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068528b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068528c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x685291u); f_008586d6();
    /* 00685291: mov dword ptr [ebp - 4], 0x12 */ W32((u32)(r_ebp+0xfffffffcu), 0x12u);
    /* 00685298: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0068529b: add ecx, 0x390 */ {  u32 a = r_ecx; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006852a1: call 0x6a37b0 */ r_esp -= 4; W32(r_esp, 0x6852a6u); f_006a37b0();
    /* 006852a6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006852a9: mov dword ptr [eax + 0x380], 0xb39458 */ W32((u32)(r_eax+0x380u), 0xb39458u);
    /* 006852b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006852ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006852bd: add ecx, 0x358 */ {  u32 a = r_ecx; u32 b = 0x358u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006852c3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6852c8u); f_0061cdb0();
    /* 006852c8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006852cb: mov dword ptr [ecx + 0x34c], 0xb39440 */ W32((u32)(r_ecx+0x34cu), 0xb39440u);
    /* 006852d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006852dc: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x6852e1u); f_00770660();
    /* 006852e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006852e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006852eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006852ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006852ee: ret  */ FN_RET(0x00685174); r_esp += 4; return;
}

void f_006852f0(void) /* sub_6852F0 */
{
    FN_ENTER(0x006852f0);
    /* 006852f0: mov dword ptr [ecx], 0xb39440 */ W32((u32)(r_ecx), 0xb39440u);
    /* 006852f6: ret  */ FN_RET(0x006852f0); r_esp += 4; return;
}

void f_006852f8(void) /* sub_6852F8 */
{
    FN_ENTER(0x006852f8);
    /* 006852f8: mov dword ptr [ecx], 0xb39454 */ W32((u32)(r_ecx), 0xb39454u);
    /* 006852fe: ret  */ FN_RET(0x006852f8); r_esp += 4; return;
}

void f_00685300(void) /* sub_685300 */
{
    FN_ENTER(0x00685300);
    /* 00685300: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 00685306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685308: je 0x685311 */ if (fZ) goto L_00685311;
L_0068530a:; BB(0x0068530a);
    /* 0068530a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0068530c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068530e: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x685311u); call_ind(t); }
L_00685311:; BB(0x00685311);
    /* 00685311: ret  */ FN_RET(0x00685300); r_esp += 4; return;
}

void f_00685314(void) /* sub_685314 */
{
    FN_ENTER(0x00685314);
    /* 00685314: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685315: mov esi, ecx */ r_esi = r_ecx;
    /* 00685317: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685318: call 0x48c9fc */ r_esp -= 4; W32(r_esp, 0x68531du); f_0048c9fc();
    /* 0068531d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068531e: call 0x4e6f8c */ r_esp -= 4; W32(r_esp, 0x685323u); f_004e6f8c();
    /* 00685323: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00685326: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685327: ret  */ FN_RET(0x00685314); r_esp += 4; return;
}

void f_00685328(void) /* sub_685328 */
{
    FN_ENTER(0x00685328);
    /* 00685328: mov edx, dword ptr [ecx + 0xdf4] */ r_edx = R32((u32)(r_ecx+0xdf4u));
    /* 0068532e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685330: je 0x685349 */ if (fZ) goto L_00685349;
L_00685332:; BB(0x00685332);
    /* 00685332: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00685336: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068533b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0068533f: mov dword ptr [ecx + 0xdf4], 0 */ W32((u32)(r_ecx+0xdf4u), 0x0u);
L_00685349:; BB(0x00685349);
    /* 00685349: ret  */ FN_RET(0x00685328); r_esp += 4; return;
}

void f_0068534c(void) /* sub_68534C */
{
    FN_ENTER(0x0068534c);
    /* 0068534c: mov edx, dword ptr [ecx + 0x620] */ r_edx = R32((u32)(r_ecx+0x620u));
    /* 00685352: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685354: je 0x68536d */ if (fZ) goto L_0068536d;
L_00685356:; BB(0x00685356);
    /* 00685356: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0068535a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068535f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00685363: mov dword ptr [ecx + 0x620], 0 */ W32((u32)(r_ecx+0x620u), 0x0u);
L_0068536d:; BB(0x0068536d);
    /* 0068536d: ret  */ FN_RET(0x0068534c); r_esp += 4; return;
}

void f_00685370(void) /* sub_685370 */
{
    FN_ENTER(0x00685370);
    /* 00685370: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685371: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00685373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00685375: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x68537au); f_007b9de0();
    /* 0068537a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068537b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x685380u); f_007b4e84();
    /* 00685380: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00685384: mov dword ptr [eax*4 + 0xa94254], 0 */ W32((u32)(r_eax*4+0xa94254u), 0x0u);
    /* 0068538f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685390: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685391: ret  */ FN_RET(0x00685370); r_esp += 4; return;
}

void f_00685394(void) /* sub_685394 */
{
    FN_ENTER(0x00685394);
    /* 00685394: mov dword ptr [ecx], 0xb39458 */ W32((u32)(r_ecx), 0xb39458u);
    /* 0068539a: ret  */ FN_RET(0x00685394); r_esp += 4; return;
}

void f_0068539c(void)
{
    FN_ENTER(0x0068539c);
    /* 0068539c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006853a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006853a2: mov dword ptr [ecx], 0xb39440 */ W32((u32)(r_ecx), 0xb39440u);
    /* 006853a8: jne 0x6853ad */ if (!fZ) goto L_006853ad;
L_006853aa:; BB(0x006853aa);
    /* 006853aa: ret 4 */ FN_RET(0x0068539c); r_esp += 8; return;
L_006853ad:; BB(0x006853ad);
    /* 006853ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006853ae: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6853b3u); f_00857e98();
    /* 006853b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006853b4: ret 4 */ FN_RET(0x0068539c); r_esp += 8; return;
}

void f_006853b8(void) /* sub_6853B8 */
{
    FN_ENTER(0x006853b8);
    /* 006853b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006853b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006853bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006853bd: push 0x8eacf0 */ { u32 v = 0x8eacf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006853c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006853c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006853c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006853d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006853d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006853d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006853d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006853dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006853df: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006853e2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006853e5: mov eax, ecx */ r_eax = r_ecx;
    /* 006853e7: mov dword ptr [eax], 0xb39444 */ W32((u32)(r_eax), 0xb39444u);
    /* 006853ed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006853f4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6853f9u); f_008171e8();
    /* 006853f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006853fc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006853fe: jne 0x685410 */ if (!fZ) goto L_00685410;
L_00685400:; BB(0x00685400);
    /* 00685400: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00685403: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068540a: mov esp, ebp */ r_esp = r_ebp;
    /* 0068540c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068540d: ret 4 */ FN_RET(0x006853b8); r_esp += 8; return;
L_00685410:; BB(0x00685410);
    /* 00685410: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00685413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685414: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x685419u); f_005c2f74();
    /* 00685419: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068541a: jmp 0x685400 */ goto L_00685400;
}

void f_0068541c(void) /* sub_68541C */
{
    FN_ENTER(0x0068541c);
    /* 0068541c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00685420: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685422: mov dword ptr [ecx], 0xb39454 */ W32((u32)(r_ecx), 0xb39454u);
    /* 00685428: jne 0x68542d */ if (!fZ) goto L_0068542d;
L_0068542a:; BB(0x0068542a);
    /* 0068542a: ret 4 */ FN_RET(0x0068541c); r_esp += 8; return;
L_0068542d:; BB(0x0068542d);
    /* 0068542d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068542e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x685433u); f_00857e98();
    /* 00685433: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685434: ret 4 */ FN_RET(0x0068541c); r_esp += 8; return;
}

void f_00685438(void)
{
    FN_ENTER(0x00685438);
    /* 00685438: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068543c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068543e: mov dword ptr [ecx], 0xb39458 */ W32((u32)(r_ecx), 0xb39458u);
    /* 00685444: jne 0x685449 */ if (!fZ) goto L_00685449;
L_00685446:; BB(0x00685446);
    /* 00685446: ret 4 */ FN_RET(0x00685438); r_esp += 8; return;
L_00685449:; BB(0x00685449);
    /* 00685449: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068544a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x68544fu); f_00857e98();
    /* 0068544f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685450: ret 4 */ FN_RET(0x00685438); r_esp += 8; return;
}

void f_00685454(void) /* sub_685454 */
{
    FN_ENTER(0x00685454);
    /* 00685454: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00685458: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0068545a: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0068545c: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x685462u); call_ind(t); }
    /* 00685462: ret 4 */ FN_RET(0x00685454); r_esp += 8; return;
}

void f_00685468(void) /* sub_685468 */
{
    FN_ENTER(0x00685468);
    /* 00685468: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068546c: add ecx, 0x4e4 */ {  u32 a = r_ecx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685472: call 0x6a7ee0 */ r_esp -= 4; W32(r_esp, 0x685477u); f_006a7ee0();
    /* 00685477: ret 4 */ FN_RET(0x00685468); r_esp += 8; return;
}

void f_0068547c(void) /* sub_68547C */
{
    FN_ENTER(0x0068547c);
    /* 0068547c: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00685480: add ecx, 0x4e4 */ {  u32 a = r_ecx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685486: call 0x6a7f88 */ r_esp -= 4; W32(r_esp, 0x68548bu); f_006a7f88();
    /* 0068548b: ret 4 */ FN_RET(0x0068547c); r_esp += 8; return;
}

void f_00685490(void) /* sub_685490 */
{
    FN_ENTER(0x00685490);
    /* 00685490: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00685494: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0068549a: and eax, 0xffffbfff */ {  u32 a = r_eax; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068549f: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
    /* 006854a5: ret  */ FN_RET(0x00685490); r_esp += 4; return;
}

void f_006854a8(void) /* sub_6854A8 */
{
    FN_ENTER(0x006854a8);
    /* 006854a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006854ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006854ad: je 0x6854bb */ if (fZ) goto L_006854bb;
L_006854af:; BB(0x006854af);
    /* 006854af: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006854b6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006854b9: je 0x68550b */ if (fZ) goto L_0068550b;
L_006854bb:; BB(0x006854bb);
    /* 006854bb: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006854bf: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006854c7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006854c9: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 006854d1: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006854d6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006854da: mov byte ptr [esp], 0x2c */ W8((u32)(r_esp), 0x2cu);
    /* 006854de: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006854e3: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 006854e8: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006854ed: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006854f0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006854f4: mov ecx, dword ptr [ecx + 0x40] */ r_ecx = R32((u32)(r_ecx+0x40u));
    /* 006854f7: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006854fb: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00685503: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00685506: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68550bu); f_008003e0();
L_0068550b:; BB(0x0068550b);
    /* 0068550b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068550e: ret 4 */ FN_RET(0x006854a8); r_esp += 8; return;
}

void f_00685514(void) /* sub_685514 */
{
    FN_ENTER(0x00685514);
    /* 00685514: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685515: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685517: je 0x685527 */ if (fZ) goto L_00685527;
L_00685519:; BB(0x00685519);
    /* 00685519: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00685520: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00685523: jne 0x685527 */ if (!fZ) goto L_00685527;
L_00685525:; BB(0x00685525);
    /* 00685525: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685526: ret  */ FN_RET(0x00685514); r_esp += 4; return;
L_00685527:; BB(0x00685527);
    /* 00685527: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0068552b: mov byte ptr [esp], 0x2d */ W8((u32)(r_esp), 0x2du);
    /* 0068552f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00685534: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00685539: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068553c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x685541u); f_008003e0();
    /* 00685541: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685542: ret  */ FN_RET(0x00685514); r_esp += 4; return;
}

void f_00685544(void) /* sub_685544 */
{
    FN_ENTER(0x00685544);
    /* 00685544: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00685548: call 0x685550 */ r_esp -= 4; W32(r_esp, 0x68554du); f_00685550();
    /* 0068554d: ret  */ FN_RET(0x00685544); r_esp += 4; return;
}

void f_00685550(void) /* sub_685550 */
{
    FN_ENTER(0x00685550);
    /* 00685550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00685551: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00685553: mov eax, dword ptr [ebx + 0x328] */ r_eax = R32((u32)(r_ebx+0x328u));
    /* 00685559: test eax, 0x1e000 */ {  u32 a = r_eax; u32 b = 0x1e000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068555e: je 0x685564 */ if (fZ) goto L_00685564;
L_00685560:; BB(0x00685560);
    /* 00685560: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685562: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00685563: ret  */ FN_RET(0x00685550); r_esp += 4; return;
L_00685564:; BB(0x00685564);
    /* 00685564: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00685567: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068556c: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0068556f: mov edx, 0x10 */ r_edx = 0x10u;
    /* 00685574: mov word ptr [ebx + 0x6ca], dx */ W16((u32)(r_ebx+0x6cau), (u16)r_edx);
    /* 0068557b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068557d: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x685582u); f_0069d1bc();
    /* 00685582: mov word ptr [ebx + 0x6d0], ax */ W16((u32)(r_ebx+0x6d0u), (u16)r_eax);
    /* 00685589: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 0068558c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068558e: mov word ptr [ebx + 0x6c8], dx */ W16((u32)(r_ebx+0x6c8u), (u16)r_edx);
    /* 00685595: mov dword ptr [ebx + 0x6cc], eax */ W32((u32)(r_ebx+0x6ccu), r_eax);
    /* 0068559b: mov eax, 1 */ r_eax = 0x1u;
    /* 006855a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006855a1: ret  */ FN_RET(0x00685550); r_esp += 4; return;
}

void f_006855a4(void) /* sub_6855A4 */
{
    FN_ENTER(0x006855a4);
    /* 006855a4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006855a8: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x6855adu); f_006855b0();
    /* 006855ad: ret  */ FN_RET(0x006855a4); r_esp += 4; return;
}

void f_006855b0(void) /* sub_6855B0 */
{
    FN_ENTER(0x006855b0);
    /* 006855b0: mov eax, dword ptr [0xaab1f4] */ r_eax = R32((u32)(0xaab1f4u));
    /* 006855b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006855b7: jne 0x6855c6 */ if (!fZ) goto L_006855c6;
L_006855b9:; BB(0x006855b9);
    /* 006855b9: mov eax, dword ptr [ecx + 0x328] */ r_eax = R32((u32)(r_ecx+0x328u));
    /* 006855bf: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006855c4: jne 0x6855c9 */ if (!fZ) goto L_006855c9;
L_006855c6:; BB(0x006855c6);
    /* 006855c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006855c8: ret  */ FN_RET(0x006855b0); r_esp += 4; return;
L_006855c9:; BB(0x006855c9);
    /* 006855c9: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006855cc: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006855d2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006855d5: mov eax, 1 */ r_eax = 0x1u;
    /* 006855da: ret  */ FN_RET(0x006855b0); r_esp += 4; return;
}

void f_006855dc(void) /* sub_6855DC */
{
    FN_ENTER(0x006855dc);
    /* 006855dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006855dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006855df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006855e1: push 0x8ead5a */ { u32 v = 0x8ead5au; r_esp -= 4; W32(r_esp, v); }
    /* 006855e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006855ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006855ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006855f4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006855f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006855fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006855fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00685600: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00685603: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685605: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068560a: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 0068560f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00685612: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685614: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 00685617: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685619: mov byte ptr [ecx + 5], al */ W8((u32)(r_ecx+0x5u), (u8)r_eax);
    /* 0068561c: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 00685620: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00685623: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 00685626: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00685629: lea eax, [ecx + 0x3ec] */ r_eax = (u32)(r_ecx+0x3ecu);
    /* 0068562f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00685632: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00685635: lea eax, [ecx + 0x3f0] */ r_eax = (u32)(r_ecx+0x3f0u);
    /* 0068563b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068563c: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685641u); f_00858736();
    /* 00685641: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00685648: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068564d: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00685652: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00685655: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685657: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068565a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068565c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068565d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685662u); f_00858736();
    /* 00685662: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00685665: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0068566b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00685672: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685677: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 0068567c: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0068567f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685681: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 00685684: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00685687: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0068568a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068568c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068568d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685692u); f_00858736();
    /* 00685692: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00685699: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068569e: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006856a3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006856a6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006856a8: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006856ab: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006856ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006856ae: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6856b3u); f_00858736();
    /* 006856b3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006856b6: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006856bc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006856c3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006856c5:; BB(0x006856c5);
    /* 006856c5: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 006856c8: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006856cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006856cd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006856d0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006856d2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006856d4: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006856d6: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006856db: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006856df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006856e1: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006856e5: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006856e9: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006856ed: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006856f1: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6856f6u); f_005d6a3c();
    /* 006856f6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006856f9: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006856fc: jl 0x6856c5 */ if ((fS!=fO)) goto L_006856c5;
L_006856fe:; BB(0x006856fe);
    /* 006856fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00685701: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00685704: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00685707: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0068570a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068570c: mov dword ptr [eax + 0x4e8], edx */ W32((u32)(r_eax+0x4e8u), r_edx);
    /* 00685712: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00685714: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00685717: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0068571e: mov esp, ebp */ r_esp = r_ebp;
    /* 00685720: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685721: ret  */ FN_RET(0x006855dc); r_esp += 4; return;
}

void f_00685724(void) /* sub_685724 */
{
    FN_ENTER(0x00685724);
    /* 00685724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685725: mov ebp, esp */ r_ebp = r_esp;
    /* 00685727: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00685729: push 0x8eadd4 */ { u32 v = 0x8eadd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068572e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00685734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685735: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0068573c: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068573f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00685742: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00685745: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00685748: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0068574b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0068574e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00685751: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685754: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00685757: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0068575a: add eax, 0x3e0 */ {  u32 a = r_eax; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068575f: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00685762: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00685765: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685768: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0068576b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00685772: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685777: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0068577a: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0068577d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068577f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685781: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685782: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x685787u); f_008586d6();
    /* 00685787: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0068578e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685793: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00685796: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685799: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0068579b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0068579d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068579e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6857a3u); f_008586d6();
    /* 006857a3: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006857a6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006857a9: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006857b0: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006857b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006857b8: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006857bb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006857bd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006857bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006857c0: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6857c5u); f_008586d6();
    /* 006857c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006857cc: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006857d1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006857d4: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006857d7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006857d9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006857db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006857dc: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x6857e1u); f_008586d6();
    /* 006857e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006857e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006857eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006857ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006857ee: ret  */ FN_RET(0x00685724); r_esp += 4; return;
}

void f_006857f0(void) /* sub_6857F0 */
{
    FN_ENTER(0x006857f0);
    /* 006857f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006857f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006857f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006857f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006857f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006857f5: mov eax, ecx */ r_eax = r_ecx;
    /* 006857f7: lea ebp, [eax + 0x28] */ r_ebp = (u32)(r_eax+0x28u);
    /* 006857fa: mov ecx, 5 */ r_ecx = 0x5u;
    /* 006857ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00685801:; BB(0x00685801);
    /* 00685801: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00685803: mov dword ptr [ebp], ebx */ W32((u32)(r_ebp), r_ebx);
    /* 00685806: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00685809: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0068580c: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0068580f: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00685812: jne 0x685801 */ if (!fZ) goto L_00685801;
L_00685814:; BB(0x00685814);
    /* 00685814: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 00685819: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0068581c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068581e: mov byte ptr [eax + 0x68], dl */ W8((u32)(r_eax+0x68u), (u8)r_edx);
    /* 00685821: mov byte ptr [eax + 0x69], dl */ W8((u32)(r_eax+0x69u), (u8)r_edx);
    /* 00685824: mov word ptr [eax + 0x6a], dx */ W16((u32)(r_eax+0x6au), (u16)r_edx);
    /* 00685828: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 0068582b: mov dword ptr [eax + 0x70], edx */ W32((u32)(r_eax+0x70u), r_edx);
    /* 0068582e: mov dword ptr [eax + 0x74], edx */ W32((u32)(r_eax+0x74u), r_edx);
    /* 00685831: mov word ptr [eax + 0x78], bp */ W16((u32)(r_eax+0x78u), (u16)r_ebp);
    /* 00685835: mov dword ptr [eax + 0x7c], edx */ W32((u32)(r_eax+0x7cu), r_edx);
    /* 00685838: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068583a: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 00685840: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00685842: mov dword ptr [eax + 0x84], ecx */ W32((u32)(r_eax+0x84u), r_ecx);
    /* 00685848: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0068584a: mov dword ptr [eax + 0x88], ecx */ W32((u32)(r_eax+0x88u), r_ecx);
    /* 00685850: mov dword ptr [eax + 0x8c], edx */ W32((u32)(r_eax+0x8cu), r_edx);
    /* 00685856: mov word ptr [eax + 0x7a], dx */ W16((u32)(r_eax+0x7au), (u16)r_edx);
    /* 0068585a: mov dword ptr [eax + 0x90], ebp */ W32((u32)(r_eax+0x90u), r_ebp);
    /* 00685860: mov dword ptr [eax + 0x94], edx */ W32((u32)(r_eax+0x94u), r_edx);
    /* 00685866: mov word ptr [eax + 0x98], dx */ W16((u32)(r_eax+0x98u), (u16)r_edx);
    /* 0068586d: mov word ptr [eax + 0x9a], dx */ W16((u32)(r_eax+0x9au), (u16)r_edx);
    /* 00685874: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00685876: mov dword ptr [eax + 0xa0], ebp */ W32((u32)(r_eax+0xa0u), r_ebp);
    /* 0068587c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068587e: mov dword ptr [eax + 0xa8], ebp */ W32((u32)(r_eax+0xa8u), r_ebp);
    /* 00685884: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00685886: mov dword ptr [eax + 0xa4], ebp */ W32((u32)(r_eax+0xa4u), r_ebp);
    /* 0068588c: mov dword ptr [eax + 0x15c], edx */ W32((u32)(r_eax+0x15cu), r_edx);
    /* 00685892: lea edx, [eax + 0x160] */ r_edx = (u32)(r_eax+0x160u);
    /* 00685898: lea ecx, [eax + 0x168] */ r_ecx = (u32)(r_eax+0x168u);
    /* 0068589e: lea ebp, [eax + 0x4a8] */ r_ebp = (u32)(r_eax+0x4a8u);
    /* 006858a4: mov esi, edx */ r_esi = r_edx;
    /* 006858a6: mov ebx, ecx */ r_ebx = r_ecx;
L_006858a8:; BB(0x006858a8);
    /* 006858a8: mov byte ptr [esi + 1], 0xff */ W8((u32)(r_esi+0x1u), 0xffu);
    /* 006858ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006858ae: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006858b0: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006858b3: mov byte ptr [esi + 3], al */ W8((u32)(r_esi+0x3u), (u8)r_eax);
    /* 006858b6: mov byte ptr [esi + 2], al */ W8((u32)(r_esi+0x2u), (u8)r_eax);
    /* 006858b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006858bb: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6858c0u); f_005d6a3c();
    /* 006858c0: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006858c3: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006858c6: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006858c8: ja 0x6858a8 */ if ((!fC&&!fZ)) goto L_006858a8;
L_006858ca:; BB(0x006858ca);
    /* 006858ca: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006858cd: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 006858d4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006858d6: mov word ptr [eax + 2], bp */ W16((u32)(r_eax+0x2u), (u16)r_ebp);
    /* 006858da: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 006858e1: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006858e6: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 006858e9: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 006858ec: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 006858f3: mov dword ptr [eax + 0x1c], ebp */ W32((u32)(r_eax+0x1cu), r_ebp);
    /* 006858f6: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
    /* 006858f9: mov dword ptr [eax + 0x14], ebp */ W32((u32)(r_eax+0x14u), r_ebp);
    /* 006858fc: mov word ptr [eax + 0x20], bp */ W16((u32)(r_eax+0x20u), (u16)r_ebp);
    /* 00685900: mov word ptr [eax + 0x22], bp */ W16((u32)(r_eax+0x22u), (u16)r_ebp);
    /* 00685904: mov word ptr [eax + 0x24], bp */ W16((u32)(r_eax+0x24u), (u16)r_ebp);
    /* 00685908: mov word ptr [eax + 0x26], bp */ W16((u32)(r_eax+0x26u), (u16)r_ebp);
    /* 0068590c: mov dword ptr [eax + 0x64], ebp */ W32((u32)(r_eax+0x64u), r_ebp);
    /* 0068590f: mov dword ptr [eax + 0xac], ebp */ W32((u32)(r_eax+0xacu), r_ebp);
    /* 00685915: mov dword ptr [eax + 0x4a8], ebp */ W32((u32)(r_eax+0x4a8u), r_ebp);
    /* 0068591b: mov dword ptr [eax + 0xb0], ebp */ W32((u32)(r_eax+0xb0u), r_ebp);
    /* 00685921: mov edx, 0xff */ r_edx = 0xffu;
    /* 00685926: mov byte ptr [eax + 0xb4], dl */ W8((u32)(r_eax+0xb4u), (u8)r_edx);
    /* 0068592c: mov byte ptr [eax + 0xb5], dl */ W8((u32)(r_eax+0xb5u), (u8)r_edx);
    /* 00685932: mov byte ptr [eax + 0xb6], dl */ W8((u32)(r_eax+0xb6u), (u8)r_edx);
    /* 00685938: mov byte ptr [eax + 0xb7], dl */ W8((u32)(r_eax+0xb7u), (u8)r_edx);
    /* 0068593e: mov byte ptr [eax + 0xb8], dl */ W8((u32)(r_eax+0xb8u), (u8)r_edx);
    /* 00685944: mov byte ptr [eax + 0xb9], dl */ W8((u32)(r_eax+0xb9u), (u8)r_edx);
    /* 0068594a: mov byte ptr [eax + 0xba], dl */ W8((u32)(r_eax+0xbau), (u8)r_edx);
    /* 00685950: mov byte ptr [eax + 0xbb], dl */ W8((u32)(r_eax+0xbbu), (u8)r_edx);
    /* 00685956: mov byte ptr [eax + 0xbc], dl */ W8((u32)(r_eax+0xbcu), (u8)r_edx);
    /* 0068595c: mov byte ptr [eax + 0xbd], dl */ W8((u32)(r_eax+0xbdu), (u8)r_edx);
    /* 00685962: mov byte ptr [eax + 0xbe], dl */ W8((u32)(r_eax+0xbeu), (u8)r_edx);
    /* 00685968: mov byte ptr [eax + 0xbf], dl */ W8((u32)(r_eax+0xbfu), (u8)r_edx);
    /* 0068596e: mov byte ptr [eax + 0xc0], dl */ W8((u32)(r_eax+0xc0u), (u8)r_edx);
    /* 00685974: mov byte ptr [eax + 0xc1], dl */ W8((u32)(r_eax+0xc1u), (u8)r_edx);
    /* 0068597a: mov byte ptr [eax + 0xc2], dl */ W8((u32)(r_eax+0xc2u), (u8)r_edx);
    /* 00685980: mov byte ptr [eax + 0xc3], dl */ W8((u32)(r_eax+0xc3u), (u8)r_edx);
    /* 00685986: mov byte ptr [eax + 0xc4], dl */ W8((u32)(r_eax+0xc4u), (u8)r_edx);
    /* 0068598c: mov byte ptr [eax + 0xc5], dl */ W8((u32)(r_eax+0xc5u), (u8)r_edx);
    /* 00685992: mov byte ptr [eax + 0xc6], dl */ W8((u32)(r_eax+0xc6u), (u8)r_edx);
    /* 00685998: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685999: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068599a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068599b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068599c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068599d: ret  */ FN_RET(0x006857f0); r_esp += 4; return;
}

void f_006859a0(void) /* sub_6859A0 */
{
    FN_ENTER(0x006859a0);
    /* 006859a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006859a3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006859a7: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006859ab: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006859b0: mov byte ptr [esp], 0xd0 */ W8((u32)(r_esp), 0xd0u);
    /* 006859b4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006859b8: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006859bd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006859c0: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x6859c5u); f_00800518();
    /* 006859c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006859c8: ret 4 */ FN_RET(0x006859a0); r_esp += 8; return;
}

void f_006859cc(void) /* sub_6859CC */
{
    FN_ENTER(0x006859cc);
    /* 006859cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006859cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006859cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006859d1: push 0x8eaef8 */ { u32 v = 0x8eaef8u; r_esp -= 4; W32(r_esp, v); }
    /* 006859d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006859dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006859dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006859e4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006859e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006859ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006859ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006859f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006859f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006859f6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006859f9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006859fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006859ff: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x685a04u); f_00770748();
    /* 00685a04: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685a07: mov dword ptr [edx], 0xb39460 */ W32((u32)(r_edx), 0xb39460u);
    /* 00685a0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685a0f: mov byte ptr [edx + 0x354], al */ W8((u32)(r_edx+0x354u), (u8)r_eax);
    /* 00685a15: mov dword ptr [edx + 0x34c], 0xb39440 */ W32((u32)(r_edx+0x34cu), 0xb39440u);
    /* 00685a1f: mov byte ptr [edx + 0x355], al */ W8((u32)(r_edx+0x355u), (u8)r_eax);
    /* 00685a25: mov word ptr [edx + 0x356], ax */ W16((u32)(r_edx+0x356u), (u16)r_eax);
    /* 00685a2c: mov dword ptr [edx + 0x350], eax */ W32((u32)(r_edx+0x350u), r_eax);
    /* 00685a32: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00685a39: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685a3c: add ecx, 0x358 */ {  u32 a = r_ecx; u32 b = 0x358u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685a42: call 0x6a8cac */ r_esp -= 4; W32(r_esp, 0x685a47u); f_006a8cac();
    /* 00685a47: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685a4a: mov dword ptr [eax + 0x36c], 0 */ W32((u32)(r_eax+0x36cu), 0x0u);
    /* 00685a54: mov dword ptr [eax + 0x370], 0xffffffff */ W32((u32)(r_eax+0x370u), 0xffffffffu);
    /* 00685a5e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00685a65: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685a68: add ecx, 0x380 */ {  u32 a = r_ecx; u32 b = 0x380u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685a6e: call 0x6a6e50 */ r_esp -= 4; W32(r_esp, 0x685a73u); f_006a6e50();
    /* 00685a73: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00685a7a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685a7d: add ecx, 0x390 */ {  u32 a = r_ecx; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685a83: call 0x6a3754 */ r_esp -= 4; W32(r_esp, 0x685a88u); f_006a3754();
    /* 00685a88: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00685a8f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685a92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685a94: mov dword ptr [ecx + 0x454], eax */ W32((u32)(r_ecx+0x454u), r_eax);
    /* 00685a9a: lea esi, [ecx + 0x460] */ r_esi = (u32)(r_ecx+0x460u);
    /* 00685aa0: mov dword ptr [ecx + 0x470], eax */ W32((u32)(r_ecx+0x470u), r_eax);
    /* 00685aa6: add ecx, 0x480 */ {  u32 a = r_ecx; u32 b = 0x480u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685aac: mov ebx, 0xa */ r_ebx = 0xau;
L_00685ab1:; BB(0x00685ab1);
    /* 00685ab1: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00685ab6: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00685ab9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00685abb: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 00685abf: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685ac2: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 00685ac5: jne 0x685ab1 */ if (!fZ) goto L_00685ab1;
L_00685ac7:; BB(0x00685ac7);
    /* 00685ac7: mov ecx, esi */ r_ecx = r_esi;
    /* 00685ac9: call 0x6acc9c */ r_esp -= 4; W32(r_esp, 0x685aceu); f_006acc9c();
    /* 00685ace: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685ad1: add ecx, 0x4e4 */ {  u32 a = r_ecx; u32 b = 0x4e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685ad7: call 0x6a7d34 */ r_esp -= 4; W32(r_esp, 0x685adcu); f_006a7d34();
    /* 00685adc: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 00685ae3: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685ae8: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00685aed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685af0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685af2: lea eax, [edx + 0x538] */ r_eax = (u32)(r_edx+0x538u);
    /* 00685af8: add edx, 0x53c */ {  u32 a = r_edx; u32 b = 0x53cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00685afe: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00685b01: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00685b04: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685b07: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685b0cu); f_00858736();
    /* 00685b0c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 00685b13: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b18: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b1d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00685b20: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685b22: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685b25: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685b28: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685b2du); f_00858736();
    /* 00685b2d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00685b30: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00685b36: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 00685b3d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b42: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b47: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00685b4a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685b4c: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 00685b4f: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00685b52: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00685b55: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00685b58: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685b5du); f_00858736();
    /* 00685b5d: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 00685b64: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b69: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b6e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00685b71: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00685b73: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685b76: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00685b78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685b79: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x685b7eu); f_00858736();
    /* 00685b7e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00685b81: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00685b87: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 00685b8e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685b91: add ecx, 0x628 */ {  u32 a = r_ecx; u32 b = 0x628u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685b97: call 0x6a7bbc */ r_esp -= 4; W32(r_esp, 0x685b9cu); f_006a7bbc();
    /* 00685b9c: mov dword ptr [ebp - 4], 0xb */ W32((u32)(r_ebp+0xfffffffcu), 0xbu);
    /* 00685ba3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685ba6: mov dword ptr [edx + 0x6a8], 0 */ W32((u32)(r_edx+0x6a8u), 0x0u);
    /* 00685bb0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00685bb2: mov dword ptr [edx + 0x68c], ebx */ W32((u32)(r_edx+0x68cu), r_ebx);
    /* 00685bb8: mov dword ptr [edx + 0x6a4], 0 */ W32((u32)(r_edx+0x6a4u), 0x0u);
    /* 00685bc2: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00685bc7: mov word ptr [edx + 0x688], ax */ W16((u32)(r_edx+0x688u), (u16)r_eax);
    /* 00685bce: mov dword ptr [edx + 0x6a0], 0 */ W32((u32)(r_edx+0x6a0u), 0x0u);
    /* 00685bd8: mov dword ptr [edx + 0x6b4], 0 */ W32((u32)(r_edx+0x6b4u), 0x0u);
    /* 00685be2: mov dword ptr [edx + 0x6b0], 0 */ W32((u32)(r_edx+0x6b0u), 0x0u);
    /* 00685bec: mov dword ptr [edx + 0x6ac], 0 */ W32((u32)(r_edx+0x6acu), 0x0u);
    /* 00685bf6: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685bf9: mov dword ptr [edx + 0x690], 0x3ecccccd */ W32((u32)(r_edx+0x690u), 0x3ecccccdu);
    /* 00685c03: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 00685c09: mov dword ptr [edx + 0x69c], 0x3ecccccd */ W32((u32)(r_edx+0x69cu), 0x3ecccccdu);
    /* 00685c13: mov dword ptr [edx + 0x698], 0x3ecccccd */ W32((u32)(r_edx+0x698u), 0x3ecccccdu);
    /* 00685c1d: mov dword ptr [edx + 0x694], 0x3ecccccd */ W32((u32)(r_edx+0x694u), 0x3ecccccdu);
    /* 00685c27: mov dword ptr [esi + 0x6c4], ebx */ W32((u32)(r_esi+0x6c4u), r_ebx);
    /* 00685c2d: call 0x6989e0 */ r_esp -= 4; W32(r_esp, 0x685c32u); f_006989e0();
    /* 00685c32: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685c35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685c37: mov word ptr [edx + 0x6c8], ax */ W16((u32)(r_edx+0x6c8u), (u16)r_eax);
    /* 00685c3e: mov word ptr [edx + 0x6ca], ax */ W16((u32)(r_edx+0x6cau), (u16)r_eax);
    /* 00685c45: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685c48: mov dword ptr [edx + 0x6cc], eax */ W32((u32)(r_edx+0x6ccu), r_eax);
    /* 00685c4e: mov word ptr [edx + 0x6d0], ax */ W16((u32)(r_edx+0x6d0u), (u16)r_eax);
    /* 00685c55: mov dword ptr [ebx + 0x6d4], 0 */ W32((u32)(r_ebx+0x6d4u), 0x0u);
    /* 00685c5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685c62: mov dword ptr [ebx + 0x6d8], 0 */ W32((u32)(r_ebx+0x6d8u), 0x0u);
    /* 00685c6c: add ecx, 0x6e0 */ {  u32 a = r_ecx; u32 b = 0x6e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685c72: mov dword ptr [ebx + 0x6dc], 0 */ W32((u32)(r_ebx+0x6dcu), 0x0u);
    /* 00685c7c: call 0x6982ec */ r_esp -= 4; W32(r_esp, 0x685c81u); f_006982ec();
    /* 00685c81: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685c84: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00685c89: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00685c8b: mov dword ptr [edx + 0x710], esi */ W32((u32)(r_edx+0x710u), r_esi);
    /* 00685c91: mov word ptr [edx + 0x70c], ax */ W16((u32)(r_edx+0x70cu), (u16)r_eax);
    /* 00685c98: mov word ptr [edx + 0x70e], si */ W16((u32)(r_edx+0x70eu), (u16)r_esi);
    /* 00685c9f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685ca2: mov dword ptr [ecx + 0x718], esi */ W32((u32)(r_ecx+0x718u), r_esi);
    /* 00685ca8: mov dword ptr [ecx + 0x714], esi */ W32((u32)(r_ecx+0x714u), r_esi);
    /* 00685cae: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685cb1: mov dword ptr [edi + 0x71c], 0xb39454 */ W32((u32)(r_edi+0x71cu), 0xb39454u);
    /* 00685cbb: mov dword ptr [edi + 0x720], esi */ W32((u32)(r_edi+0x720u), r_esi);
    /* 00685cc1: mov dword ptr [ebp - 4], 0xc */ W32((u32)(r_ebp+0xfffffffcu), 0xcu);
    /* 00685cc8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685ccb: add ecx, 0x724 */ {  u32 a = r_ecx; u32 b = 0x724u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685cd1: call 0x7c11c0 */ r_esp -= 4; W32(r_esp, 0x685cd6u); f_007c11c0();
    /* 00685cd6: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685cd9: mov dword ptr [eax + 0x740], 0 */ W32((u32)(r_eax+0x740u), 0x0u);
    /* 00685ce3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00685ce5: mov dword ptr [eax + 0x734], esi */ W32((u32)(r_eax+0x734u), r_esi);
    /* 00685ceb: mov dword ptr [eax + 0x73c], 0 */ W32((u32)(r_eax+0x73cu), 0x0u);
    /* 00685cf5: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00685cfa: mov dword ptr [eax + 0x730], esi */ W32((u32)(r_eax+0x730u), r_esi);
    /* 00685d00: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685d03: mov dword ptr [eax + 0x738], 0 */ W32((u32)(r_eax+0x738u), 0x0u);
    /* 00685d0d: mov dword ptr [edx + 0x744], 0x3f800000 */ W32((u32)(r_edx+0x744u), 0x3f800000u);
    /* 00685d17: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685d1a: mov dword ptr [edx + 0x748], 0x3f800000 */ W32((u32)(r_edx+0x748u), 0x3f800000u);
    /* 00685d24: mov dword ptr [edx + 0x74c], 0x3f800000 */ W32((u32)(r_edx+0x74cu), 0x3f800000u);
    /* 00685d2e: mov word ptr [edi + 0x750], bx */ W16((u32)(r_edi+0x750u), (u16)r_ebx);
    /* 00685d35: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685d38: mov dword ptr [edi + 0x754], esi */ W32((u32)(r_edi+0x754u), r_esi);
    /* 00685d3e: add ecx, 0x784 */ {  u32 a = r_ecx; u32 b = 0x784u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685d44: call 0x697f48 */ r_esp -= 4; W32(r_esp, 0x685d49u); f_00697f48();
    /* 00685d49: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685d4c: mov dword ptr [eax + 0x810], 0 */ W32((u32)(r_eax+0x810u), 0x0u);
    /* 00685d56: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00685d58: mov word ptr [eax + 0x808], bx */ W16((u32)(r_eax+0x808u), (u16)r_ebx);
    /* 00685d5f: mov dword ptr [eax + 0x818], 0 */ W32((u32)(r_eax+0x818u), 0x0u);
    /* 00685d69: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00685d6e: mov word ptr [eax + 0x80a], bx */ W16((u32)(r_eax+0x80au), (u16)r_ebx);
    /* 00685d75: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685d78: mov dword ptr [eax + 0x814], 0 */ W32((u32)(r_eax+0x814u), 0x0u);
    /* 00685d82: mov word ptr [esi + 0x81c], dx */ W16((u32)(r_esi+0x81cu), (u16)r_edx);
    /* 00685d89: mov word ptr [esi + 0x81e], bx */ W16((u32)(r_esi+0x81eu), (u16)r_ebx);
    /* 00685d90: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685d93: mov dword ptr [esi + 0x828], 0 */ W32((u32)(r_esi+0x828u), 0x0u);
    /* 00685d9d: add ecx, 0x82c */ {  u32 a = r_ecx; u32 b = 0x82cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685da3: mov dword ptr [esi + 0x824], 0 */ W32((u32)(r_esi+0x824u), 0x0u);
    /* 00685dad: mov dword ptr [esi + 0x820], 0 */ W32((u32)(r_esi+0x820u), 0x0u);
    /* 00685db7: call 0x6a90e4 */ r_esp -= 4; W32(r_esp, 0x685dbcu); f_006a90e4();
    /* 00685dbc: mov dword ptr [ebp - 4], 0xd */ W32((u32)(r_ebp+0xfffffffcu), 0xdu);
    /* 00685dc3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685dc6: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00685dcc: call 0x6989d0 */ r_esp -= 4; W32(r_esp, 0x685dd1u); f_006989d0();
    /* 00685dd1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685dd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00685dd6: mov dword ptr [eax + 0x8a0], edx */ W32((u32)(r_eax+0x8a0u), r_edx);
    /* 00685ddc: lea ebx, [eax + 0x8a4] */ r_ebx = (u32)(r_eax+0x8a4u);
    /* 00685de2: mov dword ptr [eax + 0x8ac], edx */ W32((u32)(r_eax+0x8acu), r_edx);
    /* 00685de8: lea ecx, [eax + 0x8d0] */ r_ecx = (u32)(r_eax+0x8d0u);
    /* 00685dee: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685df3: mov edi, 0xa */ r_edi = 0xau;
L_00685df8:; BB(0x00685df8);
    /* 00685df8: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00685dfd: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00685e00: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00685e02: mov word ptr [eax + 2], si */ W16((u32)(r_eax+0x2u), (u16)r_esi);
    /* 00685e06: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685e09: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00685e0c: jne 0x685df8 */ if (!fZ) goto L_00685df8;
L_00685e0e:; BB(0x00685e0e);
    /* 00685e0e: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x685e13u); f_006a2e30();
    /* 00685e13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00685e15: call 0x6a2ebc */ r_esp -= 4; W32(r_esp, 0x685e1au); f_006a2ebc();
    /* 00685e1a: mov dword ptr [ebp - 4], 0xe */ W32((u32)(r_ebp+0xfffffffcu), 0xeu);
    /* 00685e21: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685e24: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 00685e29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685e2b: mov dword ptr [edx + 0x8fc], eax */ W32((u32)(r_edx+0x8fcu), r_eax);
    /* 00685e31: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685e34: mov dword ptr [edx + 0x900], eax */ W32((u32)(r_edx+0x900u), r_eax);
    /* 00685e3a: mov dword ptr [esi + 0x90c], 0 */ W32((u32)(r_esi+0x90cu), 0x0u);
    /* 00685e44: mov word ptr [esi + 0x904], bx */ W16((u32)(r_esi+0x904u), (u16)r_ebx);
    /* 00685e4b: mov dword ptr [esi + 0x910], 0 */ W32((u32)(r_esi+0x910u), 0x0u);
    /* 00685e55: mov dword ptr [esi + 0x908], eax */ W32((u32)(r_esi+0x908u), r_eax);
    /* 00685e5b: mov dword ptr [esi + 0x918], eax */ W32((u32)(r_esi+0x918u), r_eax);
    /* 00685e61: mov word ptr [esi + 0x906], ax */ W16((u32)(r_esi+0x906u), (u16)r_eax);
    /* 00685e68: mov dword ptr [esi + 0x914], 0 */ W32((u32)(r_esi+0x914u), 0x0u);
    /* 00685e72: mov dword ptr [esi + 0x91c], ebx */ W32((u32)(r_esi+0x91cu), r_ebx);
    /* 00685e78: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685e7b: mov dword ptr [edi + 0x928], 0 */ W32((u32)(r_edi+0x928u), 0x0u);
    /* 00685e85: mov dword ptr [edi + 0x924], 0 */ W32((u32)(r_edi+0x924u), 0x0u);
    /* 00685e8f: mov dword ptr [edi + 0x920], 0 */ W32((u32)(r_edi+0x920u), 0x0u);
    /* 00685e99: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685e9c: mov dword ptr [ecx + 0x92c], eax */ W32((u32)(r_ecx+0x92cu), r_eax);
    /* 00685ea2: mov dword ptr [ecx + 0xdf8], eax */ W32((u32)(r_ecx+0xdf8u), r_eax);
    /* 00685ea8: mov dword ptr [ecx + 0xdfc], eax */ W32((u32)(r_ecx+0xdfcu), r_eax);
    /* 00685eae: mov dword ptr [ecx + 0xe00], eax */ W32((u32)(r_ecx+0xe00u), r_eax);
    /* 00685eb4: mov dword ptr [ecx + 0xe04], eax */ W32((u32)(r_ecx+0xe04u), r_eax);
    /* 00685eba: mov dword ptr [ecx + 0xe08], eax */ W32((u32)(r_ecx+0xe08u), r_eax);
    /* 00685ec0: mov dword ptr [ecx + 0xe0c], eax */ W32((u32)(r_ecx+0xe0cu), r_eax);
    /* 00685ec6: mov dword ptr [ecx + 0xe10], eax */ W32((u32)(r_ecx+0xe10u), r_eax);
    /* 00685ecc: mov dword ptr [ecx + 0xe14], eax */ W32((u32)(r_ecx+0xe14u), r_eax);
    /* 00685ed2: mov dword ptr [ecx + 0xe18], eax */ W32((u32)(r_ecx+0xe18u), r_eax);
    /* 00685ed8: mov dword ptr [ecx + 0xe1c], eax */ W32((u32)(r_ecx+0xe1cu), r_eax);
    /* 00685ede: mov dword ptr [ecx + 0xe20], eax */ W32((u32)(r_ecx+0xe20u), r_eax);
    /* 00685ee4: mov dword ptr [ecx + 0xe24], eax */ W32((u32)(r_ecx+0xe24u), r_eax);
    /* 00685eea: mov dword ptr [ecx + 0xe28], eax */ W32((u32)(r_ecx+0xe28u), r_eax);
    /* 00685ef0: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685ef3: mov byte ptr [edx + 0xeb0], al */ W8((u32)(r_edx+0xeb0u), (u8)r_eax);
    /* 00685ef9: mov byte ptr [edx + 0xeb1], al */ W8((u32)(r_edx+0xeb1u), (u8)r_eax);
    /* 00685eff: mov word ptr [edx + 0xeb2], ax */ W16((u32)(r_edx+0xeb2u), (u16)r_eax);
    /* 00685f06: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f09: mov dword ptr [edx + 0xeb4], eax */ W32((u32)(r_edx+0xeb4u), r_eax);
    /* 00685f0f: mov eax, dword ptr [0x9cb9a8] */ r_eax = R32((u32)(0x9cb9a8u));
    /* 00685f14: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00685f17: call 0x696454 */ r_esp -= 4; W32(r_esp, 0x685f1cu); f_00696454();
    /* 00685f1c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f1f: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 00685f22: or ebx, 0x10000000 */ {  u32 a = r_ebx; u32 b = 0x10000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00685f28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00685f2a: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00685f2e: mov edx, 7 */ r_edx = 0x7u;
    /* 00685f33: mov dword ptr [ecx + 0x3f4], edx */ W32((u32)(r_ecx+0x3f4u), r_edx);
    /* 00685f39: mov word ptr [ecx + 0x32c], dx */ W16((u32)(r_ecx+0x32cu), (u16)r_edx);
    /* 00685f40: mov dword ptr [ecx + 0x30], ebx */ W32((u32)(r_ecx+0x30u), r_ebx);
    /* 00685f43: call 0x695f28 */ r_esp -= 4; W32(r_esp, 0x685f48u); f_00695f28();
    /* 00685f48: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f4b: call 0x685f9c */ r_esp -= 4; W32(r_esp, 0x685f50u); f_00685f9c();
    /* 00685f50: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00685f53: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685f57: call 0x696370 */ r_esp -= 4; W32(r_esp, 0x685f5cu); f_00696370();
    /* 00685f5c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00685f5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f62: add eax, 0xa8 */ {  u32 a = r_eax; u32 b = 0xa8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00685f67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00685f68: call 0x6960e4 */ r_esp -= 4; W32(r_esp, 0x685f6du); f_006960e4();
    /* 00685f6d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f70: call 0x685fe4 */ r_esp -= 4; W32(r_esp, 0x685f75u); f_00685fe4();
    /* 00685f75: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00685f78: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00685f7b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00685f7e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00685f81: mov dword ptr [eax + 0xeb8], 0 */ W32((u32)(r_eax+0xeb8u), 0x0u);
    /* 00685f8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00685f8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00685f95: mov esp, ebp */ r_esp = r_ebp;
    /* 00685f97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685f98: ret 8 */ FN_RET(0x006859cc); r_esp += 12; return;
}

void f_00685f9c(void) /* sub_685F9C */
{
    FN_ENTER(0x00685f9c);
    /* 00685f9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685f9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00685f9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685f9f: mov esi, ecx */ r_esi = r_ecx;
    /* 00685fa1: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 00685fa5: mov eax, ebp */ r_eax = r_ebp;
    /* 00685fa7: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x685facu); f_0068d5ac();
    /* 00685fac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00685fae: je 0x685fbc */ if (fZ) goto L_00685fbc;
L_00685fb0:; BB(0x00685fb0);
    /* 00685fb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00685fb2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00685fb4: mov ecx, eax */ r_ecx = r_eax;
    /* 00685fb6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x685fb8u); call_ind(t); }
    /* 00685fb8: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
L_00685fbc:; BB(0x00685fbc);
    /* 00685fbc: mov dword ptr [ebp*4 + 0xa94254], esi */ W32((u32)(r_ebp*4+0xa94254u), r_esi);
    /* 00685fc3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00685fc4: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x685fc9u); f_007b4d98();
    /* 00685fc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685fca: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00685fcd: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00685fd2: je 0x685fda */ if (fZ) goto L_00685fda;
L_00685fd4:; BB(0x00685fd4);
    /* 00685fd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00685fd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685fd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685fd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685fd9: ret  */ FN_RET(0x00685f9c); r_esp += 4; return;
L_00685fda:; BB(0x00685fda);
    /* 00685fda: mov eax, 1 */ r_eax = 0x1u;
    /* 00685fdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00685fe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00685fe1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00685fe2: ret  */ FN_RET(0x00685f9c); r_esp += 4; return;
}

void f_00685fe4(void) /* sub_685FE4 */
{
    FN_ENTER(0x00685fe4);
    /* 00685fe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00685fe5: mov edi, ecx */ r_edi = r_ecx;
    /* 00685fe7: mov ecx, edi */ r_ecx = r_edi;
    /* 00685fe9: call 0x68600c */ r_esp -= 4; W32(r_esp, 0x685feeu); f_0068600c();
    /* 00685fee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00685ff0: mov ecx, edi */ r_ecx = r_edi;
    /* 00685ff2: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x685ff7u); f_00687d30();
    /* 00685ff7: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00685ffb: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00685ffe: add eax, dword ptr [0xa9424c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9424cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00686004: mov dword ptr [edi + 0xebc], eax */ W32((u32)(r_edi+0xebcu), r_eax);
    /* 0068600a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068600b: ret  */ FN_RET(0x00685fe4); r_esp += 4; return;
}

