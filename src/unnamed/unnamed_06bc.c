#include "protos.h"

void f_006bc08c(void) /* sub_6BC08C */
{
    FN_ENTER(0x006bc08c);
    /* 006bc08c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bc08d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bc08f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc091: push 0x8ec1f0 */ { u32 v = 0x8ec1f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc096: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bc09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc09d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bc0a4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bc0a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bc0aa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006bc0ad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006bc0b0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006bc0b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006bc0b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc0b9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006bc0bc: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006bc0bf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bc0c2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006bc0c5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bc0cau); f_008193cc();
    /* 006bc0ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bc0d1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006bc0d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc0d7: mov dword ptr [edx], 0xb3aed8 */ W32((u32)(r_edx), 0xb3aed8u);
    /* 006bc0dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bc0df: jl 0x6bc14f */ if ((fS!=fO)) goto L_006bc14f;
L_006bc0e1:; BB(0x006bc0e1);
    /* 006bc0e1: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc0e6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bc0e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc0ea: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bc0efu); f_0082e940();
    /* 006bc0ef: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006bc0f2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc0f5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bc0f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc0f9: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bc0ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc100: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc101: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bc106u); f_0086b6b8();
    /* 006bc106: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006bc109: mov dword ptr [0xa95aa8], edx */ W32((u32)(0xa95aa8u), r_edx);
    /* 006bc10f: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 006bc112: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc113: push dword ptr [edx + 0x19c] */ { u32 v = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc119: call 0x6b9980 */ r_esp -= 4; W32(r_esp, 0x6bc11eu); f_006b9980();
    /* 006bc11e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bc121: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006bc124: mov dword ptr [eax + 0x1a4], 0 */ W32((u32)(r_eax+0x1a4u), 0x0u);
L_006bc12e:; BB(0x006bc12e);
    /* 006bc12e: call 0x6bd7d8 */ r_esp -= 4; W32(r_esp, 0x6bc133u); f_006bd7d8();
    /* 006bc133: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006bc136: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc139: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bc13c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bc13f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc142: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc149: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc14b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc14c: ret 0xc */ FN_RET(0x006bc08c); r_esp += 16; return;
L_006bc14f:; BB(0x006bc14f);
    /* 006bc14f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc153: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bc158: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bc15c: jmp 0x6bc12e */ goto L_006bc12e;
}

void f_006bc160(void) /* sub_6BC160 */
{
    FN_ENTER(0x006bc160);
    /* 006bc160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bc161: mov ebp, esp */ r_ebp = r_esp;
    /* 006bc163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc165: push 0x8ec20c */ { u32 v = 0x8ec20cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc16a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bc170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bc178: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bc17b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bc17e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006bc181: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006bc184: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006bc187: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006bc18a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc18d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006bc190: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bc193: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bc198u); f_008193cc();
    /* 006bc198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bc19f: push 0x938e4c */ { u32 v = 0x938e4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc1a7: mov dword ptr [eax], 0xb3aed8 */ W32((u32)(r_eax), 0xb3aed8u);
    /* 006bc1ad: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x6bc1b2u); f_005ba214();
    /* 006bc1b2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc1b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1b6: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6bc1bbu); f_005b9328();
    /* 006bc1bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bc1be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bc1c0: jl 0x6bc22a */ if ((fS!=fO)) goto L_006bc22a;
L_006bc1c2:; BB(0x006bc1c2);
    /* 006bc1c2: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc1c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1c8: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bc1cdu); f_0082e940();
    /* 006bc1cd: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc1d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1d1: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bc1d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc1da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1db: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6bc1e0u); f_005b9910();
    /* 006bc1e0: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1e5: call 0x5ba214 */ r_esp -= 4; W32(r_esp, 0x6bc1eau); f_005ba214();
    /* 006bc1ea: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc1ed: mov dword ptr [0xa95aa8], edx */ W32((u32)(0xa95aa8u), r_edx);
    /* 006bc1f3: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 006bc1f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc1f7: push dword ptr [edx + 0x19c] */ { u32 v = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc1fd: call 0x6b9980 */ r_esp -= 4; W32(r_esp, 0x6bc202u); f_006b9980();
    /* 006bc202: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bc205: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc208: mov dword ptr [eax + 0x1a4], 0 */ W32((u32)(r_eax+0x1a4u), 0x0u);
L_006bc212:; BB(0x006bc212);
    /* 006bc212: call 0x6bd7d8 */ r_esp -= 4; W32(r_esp, 0x6bc217u); f_006bd7d8();
    /* 006bc217: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc21a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc21d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc224: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc226: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc227: ret 8 */ FN_RET(0x006bc160); r_esp += 12; return;
L_006bc22a:; BB(0x006bc22a);
    /* 006bc22a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bc22d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc231: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bc236: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bc23a: jmp 0x6bc212 */ goto L_006bc212;
}

void f_006bc23c(void) /* sub_6BC23C */
{
    FN_ENTER(0x006bc23c);
    /* 006bc23c: mov edx, dword ptr [0xa95aa4] */ r_edx = R32((u32)(0xa95aa4u));
    /* 006bc242: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc244: je 0x6bc25d */ if (fZ) goto L_006bc25d;
L_006bc246:; BB(0x006bc246);
    /* 006bc246: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc24a: mov dword ptr [0xa95aa4], 0 */ W32((u32)(0xa95aa4u), 0x0u);
    /* 006bc254: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc259: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006bc25d:; BB(0x006bc25d);
    /* 006bc25d: ret  */ FN_RET(0x006bc23c); r_esp += 4; return;
}

void f_006bc260(void) /* sub_6BC260 */
{
    FN_ENTER(0x006bc260);
    /* 006bc260: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bc264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc266: je 0x6bc273 */ if (fZ) goto L_006bc273;
L_006bc268:; BB(0x006bc268);
    /* 006bc268: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006bc26c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006bc26f: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006bc272: ret  */ FN_RET(0x006bc260); r_esp += 4; return;
L_006bc273:; BB(0x006bc273);
    /* 006bc273: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc275: ret  */ FN_RET(0x006bc260); r_esp += 4; return;
}

void f_006bc278(void) /* sub_6BC278 */
{
    FN_ENTER(0x006bc278);
    /* 006bc278: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bc27c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc27e: je 0x6bc28e */ if (fZ) goto L_006bc28e;
L_006bc280:; BB(0x006bc280);
    /* 006bc280: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006bc284: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006bc287: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006bc28b: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
L_006bc28e:; BB(0x006bc28e);
    /* 006bc28e: ret  */ FN_RET(0x006bc278); r_esp += 4; return;
}

void f_006bc290(void) /* sub_6BC290 */
{
    FN_ENTER(0x006bc290);
    /* 006bc290: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006bc295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc297: je 0x6bc2a3 */ if (fZ) goto L_006bc2a3;
L_006bc299:; BB(0x006bc299);
    /* 006bc299: mov eax, dword ptr [eax + 0x19c] */ r_eax = R32((u32)(r_eax+0x19cu));
    /* 006bc29f: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bc2a2: ret  */ FN_RET(0x006bc290); r_esp += 4; return;
L_006bc2a3:; BB(0x006bc2a3);
    /* 006bc2a3: mov eax, 0x96a348 */ r_eax = 0x96a348u;
    /* 006bc2a8: ret  */ FN_RET(0x006bc290); r_esp += 4; return;
}

void f_006bc2ac(void)
{
    FN_ENTER(0x006bc2ac);
    /* 006bc2ac: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006bc2b0: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006bc2b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc2b7: je 0x6bc2d2 */ if (fZ) goto L_006bc2d2;
L_006bc2b9:; BB(0x006bc2b9);
    /* 006bc2b9: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006bc2bc: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 006bc2c0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc2c2: jl 0x6bc2d2 */ if ((fS!=fO)) goto L_006bc2d2;
L_006bc2c4:; BB(0x006bc2c4);
    /* 006bc2c4: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bc2ca: jg 0x6bc2d2 */ if ((!fZ&&fS==fO)) goto L_006bc2d2;
L_006bc2cc:; BB(0x006bc2cc);
    /* 006bc2cc: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 006bc2cf: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
L_006bc2d2:; BB(0x006bc2d2);
    /* 006bc2d2: ret  */ FN_RET(0x006bc2ac); r_esp += 4; return;
}

void f_006bc2d4(void) /* sub_6BC2D4 */
{
    FN_ENTER(0x006bc2d4);
    /* 006bc2d4: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 006bc2d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc2d9: je 0x6bc2eb */ if (fZ) goto L_006bc2eb;
L_006bc2db:; BB(0x006bc2db);
    /* 006bc2db: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc2e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc2e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc2e3: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6bc2e8u); f_0086b688();
    /* 006bc2e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bc2eb:; BB(0x006bc2eb);
    /* 006bc2eb: ret  */ FN_RET(0x006bc2d4); r_esp += 4; return;
}

void f_006bc2ec(void) /* sub_6BC2EC */
{
    FN_ENTER(0x006bc2ec);
    /* 006bc2ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc2ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc2ee: mov esi, ecx */ r_esi = r_ecx;
    /* 006bc2f0: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 006bc2f3: mov eax, dword ptr [esi + 0x194] */ r_eax = R32((u32)(r_esi+0x194u));
    /* 006bc2f9: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bc2fc: ja 0x6bc62d */ if ((!fC&&!fZ)) goto L_006bc62d;
L_006bc302:; BB(0x006bc302);
    /* 006bc302: mov eax, dword ptr [eax*4 + 0x96a100] */ r_eax = R32((u32)(r_eax*4+0x96a100u));
    /* 006bc309: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc2ec); r_esp += 4; return;
}

void f_006bc30b(void)
{
    FN_ENTER(0x006bc30b);
    /* 006bc30b: mov ecx, dword ptr [esi + 0x184] */ r_ecx = R32((u32)(r_esi+0x184u));
    /* 006bc311: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6bc316u); f_00737d90();
    /* 006bc316: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006bc319: movzx edi, byte ptr [esi + 0x30] */ r_edi = (u32)R8((u32)(r_esi+0x30u));
    /* 006bc31d: cmp eax, dword ptr [edx + edi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_edi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc320: je 0x6bc331 */ if (fZ) goto L_006bc331;
L_006bc322:; BB(0x006bc322);
    /* 006bc322: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006bc325: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc326: mov ecx, dword ptr [esi + 0x188] */ r_ecx = R32((u32)(r_esi+0x188u));
    /* 006bc32c: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6bc331u); f_0072606c();
L_006bc331:; BB(0x006bc331);
    /* 006bc331: mov ecx, dword ptr [esi + 0x184] */ r_ecx = R32((u32)(r_esi+0x184u));
    /* 006bc337: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bc33e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bc340: je 0x6bc347 */ if (fZ) goto L_006bc347;
L_006bc342:; BB(0x006bc342);
    /* 006bc342: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bc345: jmp 0x6bc350 */ goto L_006bc350;
L_006bc347:; BB(0x006bc347);
    /* 006bc347: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc34a: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc350:; BB(0x006bc350);
    /* 006bc350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc352: je 0x6bc368 */ if (fZ) goto L_006bc368;
L_006bc354:; BB(0x006bc354);
    /* 006bc354: movzx edx, byte ptr [esi + 0x30] */ r_edx = (u32)R8((u32)(r_esi+0x30u));
    /* 006bc358: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006bc35b: mov dword ptr [eax + edx*4], 0xffffffff */ W32((u32)(r_eax+r_edx*4), 0xffffffffu);
    /* 006bc362: mov ecx, dword ptr [esi + 0x184] */ r_ecx = R32((u32)(r_esi+0x184u));
L_006bc368:; BB(0x006bc368);
    /* 006bc368: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bc36du); f_007127b0();
    /* 006bc36d: mov ecx, dword ptr [esi + 0x188] */ r_ecx = R32((u32)(r_esi+0x188u));
    /* 006bc373: mov dword ptr [esi + 0x184], 0 */ W32((u32)(r_esi+0x184u), 0x0u);
    /* 006bc37d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bc382u); f_007127b0();
    /* 006bc382: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc388: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bc38a: mov dword ptr [esi + 0x188], eax */ W32((u32)(r_esi+0x188u), r_eax);
    /* 006bc390: mov dword ptr [esi + 0x194], eax */ W32((u32)(r_esi+0x194u), r_eax);
    /* 006bc396: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6bc39bu); f_00718108();
    /* 006bc39b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc39c: call 0x718010 */ r_esp -= 4; W32(r_esp, 0x6bc3a1u); f_00718010();
    /* 006bc3a1: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6bc3a6u); f_00717d48();
    /* 006bc3a6: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006bc3ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc3ae: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc3b4:; BB(0x006bc3b4);
    /* 006bc3b4: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006bc3b8: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc3bd: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 006bc3c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc3c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc3c3: ret  */ FN_RET(0x006bc30b); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc30b); r_esp += 4; return;
}

void f_006bc3c4(void)
{
    FN_ENTER(0x006bc3c4);
    /* 006bc3c4: mov edi, dword ptr [esi + 0x180] */ r_edi = R32((u32)(r_esi+0x180u));
    /* 006bc3ca: mov ecx, edi */ r_ecx = r_edi;
    /* 006bc3cc: call 0x6bc630 */ r_esp -= 4; W32(r_esp, 0x6bc3d1u); f_006bc630();
    /* 006bc3d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc3d3: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc3d9:; BB(0x006bc3d9);
    /* 006bc3d9: mov ecx, edi */ r_ecx = r_edi;
    /* 006bc3db: call 0x6bc654 */ r_esp -= 4; W32(r_esp, 0x6bc3e0u); f_006bc654();
    /* 006bc3e0: movzx edi, byte ptr [esi + 0x30] */ r_edi = (u32)R8((u32)(r_esi+0x30u));
    /* 006bc3e4: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006bc3e7: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006bc3ea: mov edx, dword ptr [esi + 0x180] */ r_edx = R32((u32)(r_esi+0x180u));
    /* 006bc3f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc3f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bc3f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bc3fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc3ff: mov dword ptr [esi + 0x180], eax */ W32((u32)(r_esi+0x180u), r_eax);
    /* 006bc405: mov dword ptr [esi + 0x194], eax */ W32((u32)(r_esi+0x194u), r_eax);
    /* 006bc40b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc40c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc40d: ret  */ FN_RET(0x006bc3c4); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc3c4); r_esp += 4; return;
}

void f_006bc40e(void)
{
    FN_ENTER(0x006bc40e);
    /* 006bc40e: mov ecx, dword ptr [esi + 0x17c] */ r_ecx = R32((u32)(r_esi+0x17cu));
    /* 006bc414: call 0x6bc66c */ r_esp -= 4; W32(r_esp, 0x6bc419u); f_006bc66c();
    /* 006bc419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc41b: jl 0x6bc62d */ if ((fS!=fO)) goto L_006bc62d;
L_006bc421:; BB(0x006bc421);
    /* 006bc421: mov edx, dword ptr [esi + 0x17c] */ r_edx = R32((u32)(r_esi+0x17cu));
    /* 006bc427: mov dword ptr [0xa95a84], eax */ W32((u32)(0xa95a84u), r_eax);
    /* 006bc42c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc430: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bc435: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bc439: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc43b: mov dword ptr [esi + 0x17c], edi */ W32((u32)(r_esi+0x17cu), r_edi);
    /* 006bc441: mov dword ptr [esi + 0x194], edi */ W32((u32)(r_esi+0x194u), r_edi);
    /* 006bc447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc449: ret  */ FN_RET(0x006bc40e); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc40e); r_esp += 4; return;
}

void f_006bc44a(void)
{
    FN_ENTER(0x006bc44a);
    /* 006bc44a: mov ecx, dword ptr [esi + 0x178] */ r_ecx = R32((u32)(r_esi+0x178u));
    /* 006bc450: call 0x6bc68c */ r_esp -= 4; W32(r_esp, 0x6bc455u); f_006bc68c();
    /* 006bc455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc457: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc45d:; BB(0x006bc45d);
    /* 006bc45d: mov edx, dword ptr [esi + 0x178] */ r_edx = R32((u32)(r_esi+0x178u));
    /* 006bc463: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc467: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bc46c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bc470: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc472: mov dword ptr [esi + 0x178], edi */ W32((u32)(r_esi+0x178u), r_edi);
    /* 006bc478: mov dword ptr [esi + 0x194], edi */ W32((u32)(r_esi+0x194u), r_edi);
    /* 006bc47e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc47f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc480: ret  */ FN_RET(0x006bc44a); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc44a); r_esp += 4; return;
}

void f_006bc481(void)
{
    FN_ENTER(0x006bc481);
    /* 006bc481: call 0x788f90 */ r_esp -= 4; W32(r_esp, 0x6bc486u); f_00788f90();
    /* 006bc486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc488: jne 0x6bc62d */ if (!fZ) goto L_006bc62d;
L_006bc48e:; BB(0x006bc48e);
    /* 006bc48e: mov dword ptr [esi + 0x194], 0 */ W32((u32)(r_esi+0x194u), 0x0u);
    /* 006bc498: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc499: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc49a: ret  */ FN_RET(0x006bc481); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc481); r_esp += 4; return;
}

void f_006bc49b(void)
{
    FN_ENTER(0x006bc49b);
    /* 006bc49b: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006bc49e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bc4a5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc4a7: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc4ad:; BB(0x006bc4ad);
    /* 006bc4ad: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6bc4b2u); f_007365f4();
    /* 006bc4b2: movzx edi, byte ptr [esi + 0x30] */ r_edi = (u32)R8((u32)(r_esi+0x30u));
    /* 006bc4b6: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006bc4b9: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 006bc4bc: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 006bc4bf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bc4c4u); f_007127b0();
    /* 006bc4c4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc4ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bc4cc: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006bc4cf: mov dword ptr [esi + 0x194], eax */ W32((u32)(r_esi+0x194u), r_eax);
    /* 006bc4d5: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6bc4dau); f_00718108();
    /* 006bc4da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc4db: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6bc4e0u); f_00717d48();
    /* 006bc4e0: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006bc4e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc4e8: je 0x6bc4f7 */ if (fZ) goto L_006bc4f7;
L_006bc4ea:; BB(0x006bc4ea);
    /* 006bc4ea: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006bc4ee: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bc4f3: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006bc4f7:; BB(0x006bc4f7);
    /* 006bc4f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc4f9: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bc4feu); f_00791748();
    /* 006bc4fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc4ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc500: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc501: ret  */ FN_RET(0x006bc49b); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc49b); r_esp += 4; return;
}

void f_006bc502(void)
{
    FN_ENTER(0x006bc502);
    /* 006bc502: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc508: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6bc50du); f_0068d5a8();
    /* 006bc50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc50e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc510: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc516:; BB(0x006bc516);
    /* 006bc516: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bc51bu); f_00694c6c();
    /* 006bc51b: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006bc521: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006bc527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc528: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bc52b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc52d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc52f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc531: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bc538: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bc53du); f_007c1160();
    /* 006bc53d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc53f: je 0x6bc54b */ if (fZ) goto L_006bc54b;
L_006bc541:; BB(0x006bc541);
    /* 006bc541: mov dword ptr [esi + 0x194], 0 */ W32((u32)(r_esi+0x194u), 0x0u);
L_006bc54b:; BB(0x006bc54b);
    /* 006bc54b: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bc550u); f_00694c6c();
    /* 006bc550: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc556: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bc559: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc55b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc55d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc55f: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bc566: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bc56bu); f_007c1160();
    /* 006bc56b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc56d: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc573:; BB(0x006bc573);
    /* 006bc573: call 0x6b0ba4 */ r_esp -= 4; W32(r_esp, 0x6bc578u); f_006b0ba4();
    /* 006bc578: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006bc57c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc581: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006bc585: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc586: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc587: ret  */ FN_RET(0x006bc502); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc502); r_esp += 4; return;
}

void f_006bc588(void)
{
    FN_ENTER(0x006bc588);
    /* 006bc588: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc58e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6bc593u); f_0068d5a8();
    /* 006bc593: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc596: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc59c:; BB(0x006bc59c);
    /* 006bc59c: mov ecx, eax */ r_ecx = r_eax;
    /* 006bc59e: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6bc5a3u); f_00689410();
    /* 006bc5a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc5a5: jne 0x6bc62d */ if (!fZ) goto L_006bc62d;
L_006bc5ab:; BB(0x006bc5ab);
    /* 006bc5ab: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bc5b0u); f_00694c6c();
    /* 006bc5b0: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006bc5b6: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006bc5bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc5bd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bc5c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc5c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc5c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bc5c6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bc5cd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bc5d2u); f_007c1160();
    /* 006bc5d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc5d4: je 0x6bc62d */ if (fZ) goto L_006bc62d;
L_006bc5d6:; BB(0x006bc5d6);
    /* 006bc5d6: call 0x71891c */ r_esp -= 4; W32(r_esp, 0x6bc5dbu); f_0071891c();
    /* 006bc5db: mov edi, eax */ r_edi = r_eax;
    /* 006bc5dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc5de: call 0x7187d4 */ r_esp -= 4; W32(r_esp, 0x6bc5e3u); f_007187d4();
    /* 006bc5e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc5e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc5e6: je 0x6bc5f5 */ if (fZ) goto L_006bc5f5;
L_006bc5e8:; BB(0x006bc5e8);
    /* 006bc5e8: mov dword ptr [esi + 0x194], 0 */ W32((u32)(r_esi+0x194u), 0x0u);
    /* 006bc5f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc5f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc5f4: ret  */ FN_RET(0x006bc588); r_esp += 4; return;
L_006bc5f5:; BB(0x006bc5f5);
    /* 006bc5f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc5f6: call 0x718854 */ r_esp -= 4; W32(r_esp, 0x6bc5fbu); f_00718854();
    /* 006bc5fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc5fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc5fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc5fe: ret  */ FN_RET(0x006bc588); r_esp += 4; return;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc588); r_esp += 4; return;
}

void f_006bc5ff(void)
{
    FN_ENTER(0x006bc5ff);
    /* 006bc5ff: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bc603: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc608: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bc60c: jmp 0x6bc62d */ goto L_006bc62d;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc5ff); r_esp += 4; return;
}

void f_006bc60e(void)
{
    FN_ENTER(0x006bc60e);
    /* 006bc60e: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006bc612: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc617: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006bc61b: jmp 0x6bc62d */ goto L_006bc62d;
L_006bc62d:; BB(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc60e); r_esp += 4; return;
}

void f_006bc61d(void)
{
    FN_ENTER(0x006bc61d);
    /* 006bc61d: lea eax, [esi + 0x1c] */ r_eax = (u32)(r_esi+0x1cu);
    /* 006bc620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc621: call 0x6b0c98 */ r_esp -= 4; W32(r_esp, 0x6bc626u); f_006b0c98();
    /* 006bc626: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc627: mov dword ptr [esi + 0x194], eax */ W32((u32)(r_esi+0x194u), r_eax);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc61d); r_esp += 4; return;
}

void f_006bc62d(void)
{
    FN_ENTER(0x006bc62d);
    /* 006bc62d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc62e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc62f: ret  */ FN_RET(0x006bc62d); r_esp += 4; return;
}

void f_006bc630(void) /* sub_6BC630 */
{
    FN_ENTER(0x006bc630);
    /* 006bc630: mov eax, dword ptr [ecx + 0xa0] */ r_eax = R32((u32)(r_ecx+0xa0u));
    /* 006bc636: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc638: je 0x6bc64e */ if (fZ) goto L_006bc64e;
L_006bc63a:; BB(0x006bc63a);
    /* 006bc63a: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 006bc641: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc643: je 0x6bc64b */ if (fZ) goto L_006bc64b;
L_006bc645:; BB(0x006bc645);
    /* 006bc645: mov eax, 1 */ r_eax = 0x1u;
    /* 006bc64a: ret  */ FN_RET(0x006bc630); r_esp += 4; return;
L_006bc64b:; BB(0x006bc64b);
    /* 006bc64b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc64d: ret  */ FN_RET(0x006bc630); r_esp += 4; return;
L_006bc64e:; BB(0x006bc64e);
    /* 006bc64e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc650: ret  */ FN_RET(0x006bc630); r_esp += 4; return;
}

void f_006bc654(void) /* sub_6BC654 */
{
    FN_ENTER(0x006bc654);
    /* 006bc654: mov ecx, dword ptr [ecx + 0xa0] */ r_ecx = R32((u32)(r_ecx+0xa0u));
    /* 006bc65a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc65c: je 0x6bc664 */ if (fZ) goto L_006bc664;
L_006bc65e:; BB(0x006bc65e);
    /* 006bc65e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6bc663u); f_007365f4();
    /* 006bc663: ret  */ FN_RET(0x006bc654); r_esp += 4; return;
L_006bc664:; BB(0x006bc664);
    /* 006bc664: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006bc669: ret  */ FN_RET(0x006bc654); r_esp += 4; return;
}

void f_006bc66c(void) /* sub_6BC66C */
{
    FN_ENTER(0x006bc66c);
    /* 006bc66c: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 006bc66f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc671: je 0x6bc684 */ if (fZ) goto L_006bc684;
L_006bc673:; BB(0x006bc673);
    /* 006bc673: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bc67a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc67c: je 0x6bc684 */ if (fZ) goto L_006bc684;
L_006bc67e:; BB(0x006bc67e);
    /* 006bc67e: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6bc683u); f_007365f4();
    /* 006bc683: ret  */ FN_RET(0x006bc66c); r_esp += 4; return;
L_006bc684:; BB(0x006bc684);
    /* 006bc684: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006bc689: ret  */ FN_RET(0x006bc66c); r_esp += 4; return;
}

void f_006bc68c(void) /* sub_6BC68C */
{
    FN_ENTER(0x006bc68c);
    /* 006bc68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bc68d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc68e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc68f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006bc691: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006bc694: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc696: je 0x6bc6ec */ if (fZ) goto L_006bc6ec;
L_006bc698:; BB(0x006bc698);
    /* 006bc698: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x6bc69du); f_0078ed14();
    /* 006bc69d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc69f: je 0x6bc6ec */ if (fZ) goto L_006bc6ec;
L_006bc6a1:; BB(0x006bc6a1);
    /* 006bc6a1: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006bc6a4: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x6bc6a9u); f_0078ed4c();
    /* 006bc6a9: mov ebx, eax */ r_ebx = r_eax;
    /* 006bc6ab: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc6b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc6b1: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6bc6b6u); f_00858c4d();
    /* 006bc6b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bc6b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc6bb: jne 0x6bc6d2 */ if (!fZ) goto L_006bc6d2;
L_006bc6bd:; BB(0x006bc6bd);
    /* 006bc6bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc6be: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6bc6c3u); f_00857e98();
    /* 006bc6c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc6c4: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006bc6c7: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x6bc6ccu); f_0078ed2c();
    /* 006bc6cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc6ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc6cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bc6d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc6d1: ret  */ FN_RET(0x006bc68c); r_esp += 4; return;
L_006bc6d2:; BB(0x006bc6d2);
    /* 006bc6d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc6d3: call 0x813f0c */ r_esp -= 4; W32(r_esp, 0x6bc6d8u); f_00813f0c();
    /* 006bc6d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc6d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc6db: je 0x6bc6f2 */ if (fZ) goto L_006bc6f2;
L_006bc6dd:; BB(0x006bc6dd);
    /* 006bc6dd: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006bc6e0: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x6bc6e5u); f_0078ed2c();
    /* 006bc6e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc6e6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6bc6ebu); f_00857e98();
    /* 006bc6eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006bc6ec:; BB(0x006bc6ec);
    /* 006bc6ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc6ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bc6f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc6f1: ret  */ FN_RET(0x006bc68c); r_esp += 4; return;
L_006bc6f2:; BB(0x006bc6f2);
    /* 006bc6f2: mov eax, ebx */ r_eax = r_ebx;
    /* 006bc6f4: call 0x6bc710 */ r_esp -= 4; W32(r_esp, 0x6bc6f9u); f_006bc710();
    /* 006bc6f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc6fa: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6bc6ffu); f_00857e98();
    /* 006bc6ff: mov eax, 1 */ r_eax = 0x1u;
    /* 006bc704: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bc707: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bc708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc709: ret  */ FN_RET(0x006bc68c); r_esp += 4; return;
}

void f_006bc710(void) /* sub_6BC710 */
{
    FN_ENTER(0x006bc710);
    /* 006bc710: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc712: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc713: push 0xa95a8c */ { u32 v = 0xa95a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc718: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6bc71du); f_00857dec();
    /* 006bc71d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bc71f: mov word ptr [0xa95a9c], ax */ W16((u32)(0xa95a9cu), (u16)r_eax);
    /* 006bc725: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bc728: ret  */ FN_RET(0x006bc710); r_esp += 4; return;
}

void f_006bc72c(void) /* sub_6BC72C */
{
    FN_ENTER(0x006bc72c);
    /* 006bc72c: call 0x6bd514 */ r_esp -= 4; W32(r_esp, 0x6bc731u); f_006bd514();
    /* 006bc731: ret  */ FN_RET(0x006bc72c); r_esp += 4; return;
}

void f_006bc734(void) /* sub_6BC734 */
{
    FN_ENTER(0x006bc734);
    /* 006bc734: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006bc738: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc73a: jl 0x6bc741 */ if ((fS!=fO)) goto L_006bc741;
L_006bc73c:; BB(0x006bc73c);
    /* 006bc73c: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bc73f: jle 0x6bc742 */ if ((fZ||fS!=fO)) goto L_006bc742;
L_006bc741:; BB(0x006bc741);
    /* 006bc741: ret  */ FN_RET(0x006bc734); r_esp += 4; return;
L_006bc742:; BB(0x006bc742);
    /* 006bc742: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bc746: mov dword ptr [edx*4 + 0xa95880], eax */ W32((u32)(r_edx*4+0xa95880u), r_eax);
    /* 006bc74d: ret  */ FN_RET(0x006bc734); r_esp += 4; return;
}

void f_006bc750(void) /* sub_6BC750 */
{
    FN_ENTER(0x006bc750);
    /* 006bc750: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bc754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc756: jl 0x6bc75d */ if ((fS!=fO)) goto L_006bc75d;
L_006bc758:; BB(0x006bc758);
    /* 006bc758: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bc75b: jle 0x6bc75e */ if ((fZ||fS!=fO)) goto L_006bc75e;
L_006bc75d:; BB(0x006bc75d);
    /* 006bc75d: ret  */ FN_RET(0x006bc750); r_esp += 4; return;
L_006bc75e:; BB(0x006bc75e);
    /* 006bc75e: mov dword ptr [eax*4 + 0xa95880], 0xffffffff */ W32((u32)(r_eax*4+0xa95880u), 0xffffffffu);
    /* 006bc769: ret  */ FN_RET(0x006bc750); r_esp += 4; return;
}

void f_006bc76c(void) /* sub_6BC76C */
{
    FN_ENTER(0x006bc76c);
    /* 006bc76c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bc76d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bc76f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc771: push 0x8ec234 */ { u32 v = 0x8ec234u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc776: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bc77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc77d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bc784: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bc787: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bc78a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bc78d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bc790: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bc793: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006bc798: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc79a: je 0x6bc7f0 */ if (fZ) goto L_006bc7f0;
L_006bc79c:; BB(0x006bc79c);
    /* 006bc79c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006bc7a3: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc7a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bc7adu); f_005caba4();
    /* 006bc7ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc7ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006bc7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc7b3: je 0x6bc7ec */ if (fZ) goto L_006bc7ec;
L_006bc7b5:; BB(0x006bc7b5);
    /* 006bc7b5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006bc7bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bc7c3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc7c6: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc7cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bc7cf: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6bc7d4u); f_006bc800();
    /* 006bc7d4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bc7d7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006bc7de:; BB(0x006bc7de);
    /* 006bc7de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc7e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc7e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc7ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc7eb: ret  */ FN_RET(0x006bc76c); r_esp += 4; return;
L_006bc7ec:; BB(0x006bc7ec);
    /* 006bc7ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc7ee: jmp 0x6bc7de */ goto L_006bc7de;
L_006bc7f0:; BB(0x006bc7f0);
    /* 006bc7f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc7f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc7f5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc7fc: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc7fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc7ff: ret  */ FN_RET(0x006bc76c); r_esp += 4; return;
}

void f_006bc800(void) /* sub_6BC800 */
{
    FN_ENTER(0x006bc800);
    /* 006bc800: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc801: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc802: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc803: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bc805: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006bc809: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc80a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bc80c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bc811u); f_008193cc();
    /* 006bc811: mov dword ptr [ebx], 0xb3aee8 */ W32((u32)(r_ebx), 0xb3aee8u);
    /* 006bc817: mov eax, dword ptr [0x9cea28] */ r_eax = R32((u32)(0x9cea28u));
    /* 006bc81c: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006bc81f: lea edi, [ebx + 0x1c] */ r_edi = (u32)(r_ebx+0x1cu);
    /* 006bc822: lea esi, [esi + 0x24] */ r_esi = (u32)(r_esi+0x24u);
    /* 006bc825: mov ecx, 0x178 */ r_ecx = 0x178u;
    /* 006bc82a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc82b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006bc82e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006bc830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc831: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006bc834: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006bc836: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006bc83a: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006bc83d: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 006bc840: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 006bc843: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bc846: mov dword ptr [ebx + 0x194], 0 */ W32((u32)(r_ebx+0x194u), 0x0u);
    /* 006bc850: je 0x6bc85a */ if (fZ) goto L_006bc85a;
L_006bc852:; BB(0x006bc852);
    /* 006bc852: mov eax, ebx */ r_eax = r_ebx;
    /* 006bc854: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bc855: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bc856: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bc857: ret 8 */ FN_RET(0x006bc800); r_esp += 12; return;
L_006bc85a:; BB(0x006bc85a);
    /* 006bc85a: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 006bc85e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc864: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 006bc868: jmp 0x6bc852 */ goto L_006bc852;
}

void f_006bc86c(void) /* sub_6BC86C */
{
    FN_ENTER(0x006bc86c);
    /* 006bc86c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bc86d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bc86f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc871: push 0x8ec25c */ { u32 v = 0x8ec25cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc876: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bc87c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc87d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bc884: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bc887: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bc88a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bc88d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bc890: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bc893: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006bc898: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc89a: je 0x6bc90d */ if (fZ) goto L_006bc90d;
L_006bc89c:; BB(0x006bc89c);
    /* 006bc89c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006bc8a3: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc8a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bc8adu); f_005caba4();
    /* 006bc8ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bc8ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006bc8b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc8b3: je 0x6bc909 */ if (fZ) goto L_006bc909;
L_006bc8b5:; BB(0x006bc8b5);
    /* 006bc8b5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006bc8bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bc8c3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc8c6: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc8cc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bc8cf: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6bc8d4u); f_006bc800();
    /* 006bc8d4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bc8d7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006bc8de:; BB(0x006bc8de);
    /* 006bc8de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bc8e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc8e7: je 0x6bc90d */ if (fZ) goto L_006bc90d;
L_006bc8e9:; BB(0x006bc8e9);
    /* 006bc8e9: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc8ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bc8f1: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x6bc8f6u); f_008172d4();
    /* 006bc8f6: mov eax, ebx */ r_eax = r_ebx;
    /* 006bc8f8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc8fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc8fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc905: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc907: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc908: ret  */ FN_RET(0x006bc86c); r_esp += 4; return;
L_006bc909:; BB(0x006bc909);
    /* 006bc909: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006bc90b: jmp 0x6bc8de */ goto L_006bc8de;
L_006bc90d:; BB(0x006bc90d);
    /* 006bc90d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc912: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc915: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc91c: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc91e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc91f: ret  */ FN_RET(0x006bc86c); r_esp += 4; return;
}

void f_006bc8e0(void)
{
    FN_ENTER(0x006bc8e0);
    /* 006bc8e0: cld  */ rt_df = 0;
    UNSUP(0x006bc8e1, "falls out of decoded code");
}

void f_006bc920(void) /* sub_6BC920 */
{
    FN_ENTER(0x006bc920);
    /* 006bc920: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bc921: mov ebp, esp */ r_ebp = r_esp;
    /* 006bc923: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bc925: push 0x8ec284 */ { u32 v = 0x8ec284u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc92a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bc930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bc931: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bc938: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bc93b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bc93e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006bc941: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006bc944: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006bc947: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 006bc94c: mov edx, dword ptr [eax*4 + 0xa95880] */ r_edx = R32((u32)(r_eax*4+0xa95880u));
    /* 006bc953: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bc956: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc959: je 0x6bc9c7 */ if (fZ) goto L_006bc9c7;
L_006bc95b:; BB(0x006bc95b);
    /* 006bc95b: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006bc960: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc962: je 0x6bc9c7 */ if (fZ) goto L_006bc9c7;
L_006bc964:; BB(0x006bc964);
    /* 006bc964: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006bc96b: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006bc970: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bc975u); f_005caba4();
    /* 006bc975: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bc978: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bc97b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006bc97e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bc980: je 0x6bc9c0 */ if (fZ) goto L_006bc9c0;
L_006bc982:; BB(0x006bc982);
    /* 006bc982: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006bc989: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bc990: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bc993: push dword ptr [eax*4 + 0xa95880] */ { u32 v = R32((u32)(r_eax*4+0xa95880u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc99a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc99d: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc9a3: call 0x6bc800 */ r_esp -= 4; W32(r_esp, 0x6bc9a8u); f_006bc800();
    /* 006bc9a8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006bc9af:; BB(0x006bc9af);
    /* 006bc9af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bc9b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc9b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc9bc: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc9be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc9bf: ret  */ FN_RET(0x006bc920); r_esp += 4; return;
L_006bc9c0:; BB(0x006bc9c0);
    /* 006bc9c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9c2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bc9c5: jmp 0x6bc9af */ goto L_006bc9af;
L_006bc9c7:; BB(0x006bc9c7);
    /* 006bc9c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9c9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bc9cc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bc9d3: mov esp, ebp */ r_esp = r_ebp;
    /* 006bc9d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bc9d6: ret  */ FN_RET(0x006bc920); r_esp += 4; return;
}

void f_006bc9d8(void) /* sub_6BC9D8 */
{
    FN_ENTER(0x006bc9d8);
    /* 006bc9d8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bc9dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9e0: mov edx, eax */ r_edx = r_eax;
    /* 006bc9e2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006bc9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9e7: je 0x6bca24 */ if (fZ) goto L_006bca24;
L_006bc9e9:; BB(0x006bc9e9);
    /* 006bc9e9: mov ebx, eax */ r_ebx = r_eax;
    /* 006bc9eb: mov esi, edx */ r_esi = r_edx;
L_006bc9ed:; BB(0x006bc9ed);
    /* 006bc9ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9ef: je 0x6bca24 */ if (fZ) goto L_006bca24;
L_006bc9f1:; BB(0x006bc9f1);
    /* 006bc9f1: push dword ptr [0x9cea28] */ { u32 v = R32((u32)(0x9cea28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc9f7: mov edi, ebx */ r_edi = r_ebx;
    /* 006bc9f9: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006bc9fc: mov ecx, edi */ r_ecx = r_edi;
    /* 006bc9fe: call 0x6bca2c */ r_esp -= 4; W32(r_esp, 0x6bca03u); f_006bca2c();
    /* 006bca03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bca05: je 0x6bca16 */ if (fZ) goto L_006bca16;
L_006bca07:; BB(0x006bca07);
    /* 006bca07: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006bca0b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bca10: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006bca14: jmp 0x6bca1d */ goto L_006bca1d;
L_006bca16:; BB(0x006bca16);
    /* 006bca16: mov eax, edi */ r_eax = r_edi;
    /* 006bca18: call 0x6bc9dc */ r_esp -= 4; W32(r_esp, 0x6bca1du); f_006bc9dc();
L_006bca1d:; BB(0x006bca1d);
    /* 006bca1d: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006bca20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bca22: jne 0x6bc9ed */ if (!fZ) goto L_006bc9ed;
L_006bca24:; BB(0x006bca24);
    /* 006bca24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bca25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bca26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bca27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bca28: ret  */ FN_RET(0x006bc9d8); r_esp += 4; return;
}

void f_006bc9dc(void) /* sub_6BC9DC */
{
    FN_ENTER(0x006bc9dc);
    /* 006bc9dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bc9e0: mov edx, eax */ r_edx = r_eax;
    /* 006bc9e2: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006bc9e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9e7: je 0x6bca24 */ if (fZ) goto L_006bca24;
L_006bc9e9:; BB(0x006bc9e9);
    /* 006bc9e9: mov ebx, eax */ r_ebx = r_eax;
    /* 006bc9eb: mov esi, edx */ r_esi = r_edx;
L_006bc9ed:; BB(0x006bc9ed);
    /* 006bc9ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9ef: je 0x6bca24 */ if (fZ) goto L_006bca24;
L_006bc9f1:; BB(0x006bc9f1);
    /* 006bc9f1: push dword ptr [0x9cea28] */ { u32 v = R32((u32)(0x9cea28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc9f7: mov edi, ebx */ r_edi = r_ebx;
    /* 006bc9f9: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006bc9fc: mov ecx, edi */ r_ecx = r_edi;
    /* 006bc9fe: call 0x6bca2c */ r_esp -= 4; W32(r_esp, 0x6bca03u); f_006bca2c();
    /* 006bca03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bca05: je 0x6bca16 */ if (fZ) goto L_006bca16;
L_006bca07:; BB(0x006bca07);
    /* 006bca07: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006bca0b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bca10: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006bca14: jmp 0x6bca1d */ goto L_006bca1d;
L_006bca16:; BB(0x006bca16);
    /* 006bca16: mov eax, edi */ r_eax = r_edi;
    /* 006bca18: call 0x6bc9dc */ r_esp -= 4; W32(r_esp, 0x6bca1du); f_006bc9dc();
L_006bca1d:; BB(0x006bca1d);
    /* 006bca1d: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006bca20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bca22: jne 0x6bc9ed */ if (!fZ) goto L_006bc9ed;
L_006bca24:; BB(0x006bca24);
    /* 006bca24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bca25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bca26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bca27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bca28: ret  */ FN_RET(0x006bc9dc); r_esp += 4; return;
}

void f_006bca00(void)
{
    FN_ENTER(0x006bca00);
    goto L_006bca00;
L_006bc9ed:; BB(0x006bc9ed);
    /* 006bc9ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bc9ef: je 0x6bca24 */ if (fZ) goto L_006bca24;
L_006bc9f1:; BB(0x006bc9f1);
    /* 006bc9f1: push dword ptr [0x9cea28] */ { u32 v = R32((u32)(0x9cea28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bc9f7: mov edi, ebx */ r_edi = r_ebx;
    /* 006bc9f9: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006bc9fc: mov ecx, edi */ r_ecx = r_edi;
    /* 006bc9fe: call 0x6bca2c */ r_esp -= 4; W32(r_esp, 0x6bca03u); f_006bca2c();
L_006bca00:; BB(0x006bca00);
    /* 006bca00: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006bca02: add byte ptr [ebp + 0xf0f74c0], al */ { u32 ad = (u32)(r_ebp+0xf0f74c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006bca03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bca05: je 0x6bca16 */ if (fZ) goto L_006bca16;
L_006bca07:; BB(0x006bca07);
    /* 006bca07: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006bca08: mov bh, 0x47 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x47u) & 0xffu) << 8);
    /* 006bca0a: or byte ptr [0xffff0001], cl */ { u32 ad = (u32)(0xffff0001u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 006bca0b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bca10: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006bca14: jmp 0x6bca1d */ goto L_006bca1d;
L_006bca16:; BB(0x006bca16);
    /* 006bca16: mov eax, edi */ r_eax = r_edi;
    /* 006bca18: call 0x6bc9dc */ r_esp -= 4; W32(r_esp, 0x6bca1du); f_006bc9dc();
L_006bca1d:; BB(0x006bca1d);
    /* 006bca1d: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 006bca20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bca22: jne 0x6bc9ed */ if (!fZ) goto L_006bc9ed;
L_006bca24:; BB(0x006bca24);
    /* 006bca24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bca25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bca26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bca27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bca28: ret  */ FN_RET(0x006bca00); r_esp += 4; return;
}

void f_006bca2c(void) /* sub_6BCA2C */
{
    FN_ENTER(0x006bca2c);
    /* 006bca2c: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006bca2f: cmp edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bca33: mov eax, 0 */ r_eax = 0x0u;
    /* 006bca38: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006bca3b: ret 4 */ FN_RET(0x006bca2c); r_esp += 8; return;
}

void f_006bca40(void) /* sub_6BCA40 */
{
    FN_ENTER(0x006bca40);
    /* 006bca40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bca41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bca42: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006bca44: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 006bca47: mov eax, dword ptr [ebp + 0x194] */ r_eax = R32((u32)(r_ebp+0x194u));
    /* 006bca4d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bca50: ja 0x6bcde7 */ if ((!fC&&!fZ)) goto L_006bcde7;
L_006bca56:; BB(0x006bca56);
    /* 006bca56: mov eax, dword ptr [eax*4 + 0x96a134] */ r_eax = R32((u32)(r_eax*4+0x96a134u));
    /* 006bca5d: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bca40); r_esp += 4; return;
}

void f_006bca5f(void)
{
    FN_ENTER(0x006bca5f);
    /* 006bca5f: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 006bca65: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x6bca6au); f_00737d90();
    /* 006bca6a: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006bca6d: movzx esi, byte ptr [ebp + 0x30] */ r_esi = (u32)R8((u32)(r_ebp+0x30u));
    /* 006bca71: cmp eax, dword ptr [edx + esi*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_esi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bca74: je 0x6bca85 */ if (fZ) goto L_006bca85;
L_006bca76:; BB(0x006bca76);
    /* 006bca76: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 006bca79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bca7a: mov ecx, dword ptr [ebp + 0x188] */ r_ecx = R32((u32)(r_ebp+0x188u));
    /* 006bca80: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x6bca85u); f_0072606c();
L_006bca85:; BB(0x006bca85);
    /* 006bca85: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 006bca8b: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bca92: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bca94: je 0x6bcde7 */ if (fZ) goto L_006bcde7;
L_006bca9a:; BB(0x006bca9a);
    /* 006bca9a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bca9fu); f_007127b0();
    /* 006bca9f: mov ecx, dword ptr [ebp + 0x188] */ r_ecx = R32((u32)(r_ebp+0x188u));
    /* 006bcaa5: mov dword ptr [ebp + 0x184], 0 */ W32((u32)(r_ebp+0x184u), 0x0u);
    /* 006bcaaf: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bcab4u); f_007127b0();
    /* 006bcab4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcaba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bcabc: mov dword ptr [ebp + 0x188], eax */ W32((u32)(r_ebp+0x188u), r_eax);
    /* 006bcac2: mov dword ptr [ebp + 0x194], eax */ W32((u32)(r_ebp+0x194u), r_eax);
    /* 006bcac8: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6bcacdu); f_00718108();
    /* 006bcacd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcace: call 0x718010 */ r_esp -= 4; W32(r_esp, 0x6bcad3u); f_00718010();
    /* 006bcad3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcad4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcad5: ret  */ FN_RET(0x006bca5f); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bca5f); r_esp += 4; return;
}

void f_006bcad6(void)
{
    FN_ENTER(0x006bcad6);
    /* 006bcad6: mov esi, dword ptr [ebp + 0x180] */ r_esi = R32((u32)(r_ebp+0x180u));
    /* 006bcadc: mov ecx, esi */ r_ecx = r_esi;
    /* 006bcade: call 0x6bc630 */ r_esp -= 4; W32(r_esp, 0x6bcae3u); f_006bc630();
    /* 006bcae3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcae5: je 0x6bcde7 */ if (fZ) goto L_006bcde7;
L_006bcaeb:; BB(0x006bcaeb);
    /* 006bcaeb: mov ecx, esi */ r_ecx = r_esi;
    /* 006bcaed: call 0x6bc654 */ r_esp -= 4; W32(r_esp, 0x6bcaf2u); f_006bc654();
    /* 006bcaf2: movzx esi, byte ptr [ebp + 0x30] */ r_esi = (u32)R8((u32)(r_ebp+0x30u));
    /* 006bcaf6: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006bcaf9: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 006bcafc: mov edx, dword ptr [ebp + 0x180] */ r_edx = R32((u32)(r_ebp+0x180u));
    /* 006bcb02: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bcb06: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bcb0b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bcb0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcb11: mov dword ptr [ebp + 0x180], eax */ W32((u32)(r_ebp+0x180u), r_eax);
    /* 006bcb17: mov dword ptr [ebp + 0x194], eax */ W32((u32)(r_ebp+0x194u), r_eax);
    /* 006bcb1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcb1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcb1f: ret  */ FN_RET(0x006bcad6); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcad6); r_esp += 4; return;
}

void f_006bcb20(void)
{
    FN_ENTER(0x006bcb20);
    /* 006bcb20: mov ecx, dword ptr [ebp + 0x17c] */ r_ecx = R32((u32)(r_ebp+0x17cu));
    /* 006bcb26: call 0x6bc66c */ r_esp -= 4; W32(r_esp, 0x6bcb2bu); f_006bc66c();
    /* 006bcb2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcb2d: jl 0x6bcde7 */ if ((fS!=fO)) goto L_006bcde7;
L_006bcb33:; BB(0x006bcb33);
    /* 006bcb33: mov edx, dword ptr [ebp + 0x17c] */ r_edx = R32((u32)(r_ebp+0x17cu));
    /* 006bcb39: mov dword ptr [0xa95a84], eax */ W32((u32)(0xa95a84u), r_eax);
    /* 006bcb3e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bcb42: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bcb47: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bcb4b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcb4d: mov dword ptr [ebp + 0x17c], esi */ W32((u32)(r_ebp+0x17cu), r_esi);
    /* 006bcb53: mov dword ptr [ebp + 0x194], esi */ W32((u32)(r_ebp+0x194u), r_esi);
    /* 006bcb59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcb5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcb5b: ret  */ FN_RET(0x006bcb20); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcb20); r_esp += 4; return;
}

void f_006bcb5c(void)
{
    FN_ENTER(0x006bcb5c);
    /* 006bcb5c: mov ecx, dword ptr [ebp + 0x178] */ r_ecx = R32((u32)(r_ebp+0x178u));
    /* 006bcb62: call 0x6bc68c */ r_esp -= 4; W32(r_esp, 0x6bcb67u); f_006bc68c();
    /* 006bcb67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcb69: je 0x6bcde7 */ if (fZ) goto L_006bcde7;
L_006bcb6f:; BB(0x006bcb6f);
    /* 006bcb6f: mov edx, dword ptr [ebp + 0x178] */ r_edx = R32((u32)(r_ebp+0x178u));
    /* 006bcb75: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bcb79: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006bcb7e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bcb82: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcb84: mov dword ptr [ebp + 0x178], esi */ W32((u32)(r_ebp+0x178u), r_esi);
    /* 006bcb8a: mov dword ptr [ebp + 0x194], esi */ W32((u32)(r_ebp+0x194u), r_esi);
    /* 006bcb90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcb91: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcb92: ret  */ FN_RET(0x006bcb5c); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcb5c); r_esp += 4; return;
}

void f_006bcb93(void)
{
    FN_ENTER(0x006bcb93);
    /* 006bcb93: call 0x788f90 */ r_esp -= 4; W32(r_esp, 0x6bcb98u); f_00788f90();
    /* 006bcb98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcb9a: jne 0x6bcde7 */ if (!fZ) goto L_006bcde7;
L_006bcba0:; BB(0x006bcba0);
    /* 006bcba0: mov dword ptr [ebp + 0x194], 0 */ W32((u32)(r_ebp+0x194u), 0x0u);
    /* 006bcbaa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcbab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcbac: ret  */ FN_RET(0x006bcb93); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcb93); r_esp += 4; return;
}

void f_006bcbad(void)
{
    FN_ENTER(0x006bcbad);
    /* 006bcbad: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006bcbb0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bcbb7: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bcbb9: je 0x6bcc05 */ if (fZ) goto L_006bcc05;
L_006bcbbb:; BB(0x006bcbbb);
    /* 006bcbbb: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6bcbc0u); f_007365f4();
    /* 006bcbc0: movzx esi, byte ptr [ebp + 0x30] */ r_esi = (u32)R8((u32)(r_ebp+0x30u));
    /* 006bcbc4: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 006bcbc7: mov dword ptr [edx + esi*4], eax */ W32((u32)(r_edx+r_esi*4), r_eax);
    /* 006bcbca: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006bcbcd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bcbd2u); f_007127b0();
    /* 006bcbd2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcbd8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bcbda: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 006bcbdd: mov dword ptr [ebp + 0x194], eax */ W32((u32)(r_ebp+0x194u), r_eax);
    /* 006bcbe3: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6bcbe8u); f_00718108();
    /* 006bcbe8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcbe9: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6bcbeeu); f_00717d48();
    /* 006bcbee: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006bcbf4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcbf6: je 0x6bcc05 */ if (fZ) goto L_006bcc05;
L_006bcbf8:; BB(0x006bcbf8);
    /* 006bcbf8: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006bcbfc: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bcc01: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006bcc05:; BB(0x006bcc05);
    /* 006bcc05: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bcc0au); f_00694c6c();
    /* 006bcc0a: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcc10: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bcc13: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcc15: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcc17: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcc19: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bcc20: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bcc25u); f_007c1160();
    /* 006bcc25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcc27: jne 0x6bcc3d */ if (!fZ) goto L_006bcc3d;
L_006bcc29:; BB(0x006bcc29);
    /* 006bcc29: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcc2f: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6bcc34u); f_00716ba0();
    /* 006bcc34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcc35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcc37: jne 0x6bcde7 */ if (!fZ) goto L_006bcde7;
L_006bcc3d:; BB(0x006bcc3d);
    /* 006bcc3d: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 006bcc40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcc42: je 0x6bcc50 */ if (fZ) goto L_006bcc50;
L_006bcc44:; BB(0x006bcc44);
    /* 006bcc44: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bcc49u); f_007127b0();
    /* 006bcc49: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
L_006bcc50:; BB(0x006bcc50);
    /* 006bcc50: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006bcc53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcc55: je 0x6bcc63 */ if (fZ) goto L_006bcc63;
L_006bcc57:; BB(0x006bcc57);
    /* 006bcc57: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bcc5cu); f_007127b0();
    /* 006bcc5c: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
L_006bcc63:; BB(0x006bcc63);
    /* 006bcc63: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6bcc68u); f_00717d48();
    /* 006bcc68: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006bcc6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcc70: je 0x6bcc7f */ if (fZ) goto L_006bcc7f;
L_006bcc72:; BB(0x006bcc72);
    /* 006bcc72: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006bcc76: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bcc7b: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006bcc7f:; BB(0x006bcc7f);
    /* 006bcc7f: call 0x6b0ba4 */ r_esp -= 4; W32(r_esp, 0x6bcc84u); f_006b0ba4();
    /* 006bcc84: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006bcc88: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcc8d: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006bcc91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcc92: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcc93: ret  */ FN_RET(0x006bcbad); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcbad); r_esp += 4; return;
}

void f_006bcc94(void)
{
    FN_ENTER(0x006bcc94);
    /* 006bcc94: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcc9a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6bcc9fu); f_0068d5a8();
    /* 006bcc9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcca0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcca2: je 0x6bccd9 */ if (fZ) goto L_006bccd9;
L_006bcca4:; BB(0x006bcca4);
    /* 006bcca4: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bcca9u); f_00694c6c();
    /* 006bcca9: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006bccaf: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006bccb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bccb6: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bccb9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bccbb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bccbd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bccbf: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bccc6: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bcccbu); f_007c1160();
    /* 006bcccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcccd: je 0x6bccd9 */ if (fZ) goto L_006bccd9;
L_006bcccf:; BB(0x006bcccf);
    /* 006bcccf: mov dword ptr [ebp + 0x194], 0 */ W32((u32)(r_ebp+0x194u), 0x0u);
L_006bccd9:; BB(0x006bccd9);
    /* 006bccd9: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bccdeu); f_00694c6c();
    /* 006bccde: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcce4: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bcce7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcce9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcceb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcced: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bccf4: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bccf9u); f_007c1160();
    /* 006bccf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bccfb: jne 0x6bcd11 */ if (!fZ) goto L_006bcd11;
L_006bccfd:; BB(0x006bccfd);
    /* 006bccfd: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcd03: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x6bcd08u); f_00716ba0();
    /* 006bcd08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcd09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcd0b: jne 0x6bcde7 */ if (!fZ) goto L_006bcde7;
L_006bcd11:; BB(0x006bcd11);
    /* 006bcd11: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6bcd16u); f_00717d48();
    /* 006bcd16: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006bcd1c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcd1e: je 0x6bcd2d */ if (fZ) goto L_006bcd2d;
L_006bcd20:; BB(0x006bcd20);
    /* 006bcd20: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006bcd24: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006bcd29: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006bcd2d:; BB(0x006bcd2d);
    /* 006bcd2d: call 0x6b0ba4 */ r_esp -= 4; W32(r_esp, 0x6bcd32u); f_006b0ba4();
    /* 006bcd32: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006bcd36: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcd3b: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006bcd3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcd40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcd41: ret  */ FN_RET(0x006bcc94); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcc94); r_esp += 4; return;
}

void f_006bcd42(void)
{
    FN_ENTER(0x006bcd42);
    /* 006bcd42: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcd48: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6bcd4du); f_0068d5a8();
    /* 006bcd4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcd4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcd50: je 0x6bcde7 */ if (fZ) goto L_006bcde7;
L_006bcd56:; BB(0x006bcd56);
    /* 006bcd56: mov ecx, eax */ r_ecx = r_eax;
    /* 006bcd58: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6bcd5du); f_00689410();
    /* 006bcd5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcd5f: jne 0x6bcde7 */ if (!fZ) goto L_006bcde7;
L_006bcd65:; BB(0x006bcd65);
    /* 006bcd65: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6bcd6au); f_00694c6c();
    /* 006bcd6a: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006bcd70: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006bcd76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bcd77: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006bcd7a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcd7c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcd7e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bcd80: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006bcd87: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6bcd8cu); f_007c1160();
    /* 006bcd8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcd8e: je 0x6bcde7 */ if (fZ) goto L_006bcde7;
L_006bcd90:; BB(0x006bcd90);
    /* 006bcd90: call 0x71891c */ r_esp -= 4; W32(r_esp, 0x6bcd95u); f_0071891c();
    /* 006bcd95: mov esi, eax */ r_esi = r_eax;
    /* 006bcd97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bcd98: call 0x7187d4 */ r_esp -= 4; W32(r_esp, 0x6bcd9du); f_007187d4();
    /* 006bcd9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcd9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcda0: je 0x6bcdaf */ if (fZ) goto L_006bcdaf;
L_006bcda2:; BB(0x006bcda2);
    /* 006bcda2: mov dword ptr [ebp + 0x194], 0 */ W32((u32)(r_ebp+0x194u), 0x0u);
    /* 006bcdac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcdad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcdae: ret  */ FN_RET(0x006bcd42); r_esp += 4; return;
L_006bcdaf:; BB(0x006bcdaf);
    /* 006bcdaf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bcdb0: call 0x718854 */ r_esp -= 4; W32(r_esp, 0x6bcdb5u); f_00718854();
    /* 006bcdb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcdb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcdb7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcdb8: ret  */ FN_RET(0x006bcd42); r_esp += 4; return;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcd42); r_esp += 4; return;
}

void f_006bcdb9(void)
{
    FN_ENTER(0x006bcdb9);
    /* 006bcdb9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bcdbd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcdc2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bcdc6: jmp 0x6bcde7 */ goto L_006bcde7;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcdb9); r_esp += 4; return;
}

void f_006bcdc8(void)
{
    FN_ENTER(0x006bcdc8);
    /* 006bcdc8: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006bcdcc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcdd1: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006bcdd5: jmp 0x6bcde7 */ goto L_006bcde7;
L_006bcde7:; BB(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcdc8); r_esp += 4; return;
}

void f_006bcdd7(void)
{
    FN_ENTER(0x006bcdd7);
    /* 006bcdd7: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 006bcdda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bcddb: call 0x6b0c98 */ r_esp -= 4; W32(r_esp, 0x6bcde0u); f_006b0c98();
    /* 006bcde0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcde1: mov dword ptr [ebp + 0x194], eax */ W32((u32)(r_ebp+0x194u), r_eax);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcdd7); r_esp += 4; return;
}

void f_006bcde7(void)
{
    FN_ENTER(0x006bcde7);
    /* 006bcde7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcde8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcde9: ret  */ FN_RET(0x006bcde7); r_esp += 4; return;
}

void f_006bcdec(void) /* sub_6BCDEC */
{
    FN_ENTER(0x006bcdec);
    /* 006bcdec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bcded: mov ebp, esp */ r_ebp = r_esp;
    /* 006bcdef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bcdf1: push 0x8ec2ac */ { u32 v = 0x8ec2acu; r_esp -= 4; W32(r_esp, v); }
    /* 006bcdf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bcdfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bcdfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bce04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bce07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bce0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bce0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bce10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bce13: mov eax, dword ptr [0xa95aa8] */ r_eax = R32((u32)(0xa95aa8u));
    /* 006bce18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bce1a: je 0x6bce89 */ if (fZ) goto L_006bce89;
L_006bce1c:; BB(0x006bce1c);
    /* 006bce1c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006bce23: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006bce28: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bce2du); f_005caba4();
    /* 006bce2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bce2e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006bce31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bce33: je 0x6bce85 */ if (fZ) goto L_006bce85;
L_006bce35:; BB(0x006bce35);
    /* 006bce35: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006bce3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bce43: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bce46: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bce4c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bce4f: call 0x6bce9c */ r_esp -= 4; W32(r_esp, 0x6bce54u); f_006bce9c();
    /* 006bce54: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bce57: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006bce5e:; BB(0x006bce5e);
    /* 006bce5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bce65: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bce6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bce6d: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x6bce72u); f_008172d4();
    /* 006bce72: mov eax, ebx */ r_eax = r_ebx;
    /* 006bce74: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bce77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bce7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bce81: mov esp, ebp */ r_esp = r_ebp;
    /* 006bce83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bce84: ret  */ FN_RET(0x006bcdec); r_esp += 4; return;
L_006bce85:; BB(0x006bce85);
    /* 006bce85: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006bce87: jmp 0x6bce5e */ goto L_006bce5e;
L_006bce89:; BB(0x006bce89);
    /* 006bce89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bce8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bce8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bce95: mov esp, ebp */ r_esp = r_ebp;
    /* 006bce97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bce98: ret  */ FN_RET(0x006bcdec); r_esp += 4; return;
}

void f_006bce9c(void) /* sub_6BCE9C */
{
    FN_ENTER(0x006bce9c);
    /* 006bce9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bce9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bce9e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bce9f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bcea1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcea3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bcea5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bceaau); f_008193cc();
    /* 006bceaa: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006bceae: mov dword ptr [ebx], 0xb3aef8 */ W32((u32)(r_ebx), 0xb3aef8u);
    /* 006bceb4: lea edi, [ebx + 0x1c] */ r_edi = (u32)(r_ebx+0x1cu);
    /* 006bceb7: lea esi, [edx + 0x24] */ r_esi = (u32)(r_edx+0x24u);
    /* 006bceba: mov eax, dword ptr [0x9cea2c] */ r_eax = R32((u32)(0x9cea2cu));
    /* 006bcebf: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006bcec2: mov ecx, 0x178 */ r_ecx = 0x178u;
    /* 006bcec7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006bcec8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006bcecb: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006bcecd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcece: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bced1: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006bced3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006bced7: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 006bceda: mov esi, dword ptr [edx + eax*4] */ r_esi = R32((u32)(r_edx+r_eax*4));
    /* 006bcedd: mov dword ptr [0xa95aa0], ebx */ W32((u32)(0xa95aa0u), r_ebx);
    /* 006bcee3: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 006bcee6: mov dword ptr [ebx + 0x194], 0 */ W32((u32)(r_ebx+0x194u), 0x0u);
    /* 006bcef0: mov eax, ebx */ r_eax = r_ebx;
    /* 006bcef2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bcef3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bcef4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bcef5: ret 8 */ FN_RET(0x006bce9c); r_esp += 12; return;
}

void f_006bcef8(void) /* sub_6BCEF8 */
{
    FN_ENTER(0x006bcef8);
    /* 006bcef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bcef9: mov ebp, esp */ r_ebp = r_esp;
    /* 006bcefb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bcefd: push 0x8ec2d4 */ { u32 v = 0x8ec2d4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bcf08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bcf10: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bcf13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bcf16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bcf19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bcf1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bcf1f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf21: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006bcf28: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bcf2du); f_005caba4();
    /* 006bcf2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bcf2e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006bcf31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcf33: je 0x6bcf66 */ if (fZ) goto L_006bcf66;
L_006bcf35:; BB(0x006bcf35);
    /* 006bcf35: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006bcf3c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bcf43: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcf46: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bcf49: call 0x6bcf6c */ r_esp -= 4; W32(r_esp, 0x6bcf4eu); f_006bcf6c();
    /* 006bcf4e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bcf51: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006bcf58:; BB(0x006bcf58);
    /* 006bcf58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bcf5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bcf62: mov esp, ebp */ r_esp = r_ebp;
    /* 006bcf64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bcf65: ret  */ FN_RET(0x006bcef8); r_esp += 4; return;
L_006bcf66:; BB(0x006bcf66);
    /* 006bcf66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bcf68: jmp 0x6bcf58 */ goto L_006bcf58;
}

void f_006bcf6c(void) /* sub_6BCF6C */
{
    FN_ENTER(0x006bcf6c);
    /* 006bcf6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf6d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bcf6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf71: push 0x8ec30a */ { u32 v = 0x8ec30au; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bcf7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bcf7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bcf84: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bcf87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bcf8a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006bcf8d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006bcf90: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006bcf93: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcf96: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006bcf99: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bcf9eu); f_008193cc();
    /* 006bcf9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bcfa5: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bcfa8: mov dword ptr [edx], 0xb3af08 */ W32((u32)(r_edx), 0xb3af08u);
    /* 006bcfae: mov eax, dword ptr [0x9cea30] */ r_eax = R32((u32)(0x9cea30u));
    /* 006bcfb3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006bcfba: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcfbc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006bcfbf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bcfc4u); f_005caba4();
    /* 006bcfc4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bcfc7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bcfca: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006bcfcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bcfcf: je 0x6bd0ec */ if (fZ) goto L_006bd0ec;
L_006bcfd5:; BB(0x006bcfd5);
    /* 006bcfd5: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006bcfdc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006bcfe3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcfe9: mov ecx, eax */ r_ecx = r_eax;
    /* 006bcfeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcfed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcfef: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bcff1: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bcff4: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x6bcff9u); f_0078eba4();
    /* 006bcff9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006bd000:; BB(0x006bd000);
    /* 006bd000: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd003: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd006: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006bd009: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bd010: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd012: je 0x6bd066 */ if (fZ) goto L_006bd066;
L_006bd014:; BB(0x006bd014);
    /* 006bd014: push 0xd3 */ { u32 v = 0xd3u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd019: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd01eu); f_0073ec50();
    /* 006bd01e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd01f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd022: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd023: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006bd026: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x6bd02bu); f_0078ed84();
    /* 006bd02b: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd030: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd035u); f_0073ec50();
    /* 006bd035: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd036: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd039: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd03a: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006bd03d: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x6bd042u); f_00779df0();
    /* 006bd042: call 0x73ec80 */ r_esp -= 4; W32(r_esp, 0x6bd047u); f_0073ec80();
    /* 006bd047: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd04a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd04b: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006bd04e: call 0x78edb8 */ r_esp -= 4; W32(r_esp, 0x6bd053u); f_0078edb8();
    /* 006bd053: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd056: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006bd059: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x6bd05eu); f_0078ee74();
    /* 006bd05e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd060: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bd065u); f_00791748();
    /* 006bd065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006bd066:; BB(0x006bd066);
    /* 006bd066: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd068: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd06du); f_0073ec50();
    /* 006bd06d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd06f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd070: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6bd075u); f_00735708();
    /* 006bd075: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd078: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd07b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006bd07e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd080: je 0x6bd0a3 */ if (fZ) goto L_006bd0a3;
L_006bd082:; BB(0x006bd082);
    /* 006bd082: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd084: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bd089u); f_007930dc();
    /* 006bd089: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd08a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd08d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd08f: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd094: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006bd097: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd098: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6bd09du); f_00735c90();
    /* 006bd09d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd0a0: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
L_006bd0a3:; BB(0x006bd0a3);
    /* 006bd0a3: push 0x42a80000 */ { u32 v = 0x42a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd0a8: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd0aa: push 0x43dd0000 */ { u32 v = 0x43dd0000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd0af: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x6bd0b4u); f_007361d0();
    /* 006bd0b4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd0b7: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006bd0ba: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6bd0bfu); f_00736458();
    /* 006bd0bf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd0c2: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 006bd0c5: movzx ecx, word ptr [eax + 0x84] */ r_ecx = (u32)R16((u32)(r_eax+0x84u));
    /* 006bd0cc: or ecx, 0xffff0080 */ {  u32 a = r_ecx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd0d2: mov word ptr [eax + 0x84], cx */ W16((u32)(r_eax+0x84u), (u16)r_ecx);
    /* 006bd0d9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd0dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd0df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd0e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd0e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd0e9: ret 4 */ FN_RET(0x006bcf6c); r_esp += 8; return;
L_006bd0ec:; BB(0x006bd0ec);
    /* 006bd0ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bd0ee: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bd0f1: jmp 0x6bd000 */ goto L_006bd000;
}

