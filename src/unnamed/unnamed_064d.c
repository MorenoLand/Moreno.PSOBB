#include "protos.h"

void f_0064d010(void) /* sub_64D010 */
{
    FN_ENTER(0x0064d010);
    /* 0064d010: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d011: mov eax, 4 */ r_eax = 0x4u;
    /* 0064d016: mov ebx, eax */ r_ebx = r_eax;
L_0064d018:; BB(0x0064d018);
    /* 0064d018: mov ecx, dword ptr [ebx + 0xa8f568] */ r_ecx = R32((u32)(r_ebx+0xa8f568u));
    /* 0064d01e: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0064d021: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d023: je 0x64d037 */ if (fZ) goto L_0064d037;
L_0064d025:; BB(0x0064d025);
    /* 0064d025: je 0x64d02d */ if (fZ) goto L_0064d02d;
L_0064d027:; BB(0x0064d027);
    /* 0064d027: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d029: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d02b: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x64d02du); call_ind(t); }
L_0064d02d:; BB(0x0064d02d);
    /* 0064d02d: mov dword ptr [ebx + 0xa8f56c], 0 */ W32((u32)(r_ebx+0xa8f56cu), 0x0u);
L_0064d037:; BB(0x0064d037);
    /* 0064d037: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064d039: jge 0x64d018 */ if ((fS==fO)) goto L_0064d018;
L_0064d03b:; BB(0x0064d03b);
    /* 0064d03b: mov ecx, dword ptr [0xa8f578] */ r_ecx = R32((u32)(0xa8f578u));
    /* 0064d041: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d043: je 0x64d060 */ if (fZ) goto L_0064d060;
L_0064d045:; BB(0x0064d045);
    /* 0064d045: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x64d04au); f_00829de0();
    /* 0064d04a: push dword ptr [0xa8f578] */ { u32 v = R32((u32)(0xa8f578u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d050: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x64d055u); f_0082e960();
    /* 0064d055: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d056: mov dword ptr [0xa8f578], 0 */ W32((u32)(0xa8f578u), 0x0u);
L_0064d060:; BB(0x0064d060);
    /* 0064d060: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d068: je 0x64d07d */ if (fZ) goto L_0064d07d;
L_0064d06a:; BB(0x0064d06a);
    /* 0064d06a: je 0x64d073 */ if (fZ) goto L_0064d073;
L_0064d06c:; BB(0x0064d06c);
    /* 0064d06c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d06e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x64d073u); f_004066a8();
L_0064d073:; BB(0x0064d073);
    /* 0064d073: mov dword ptr [0xa8f57c], 0 */ W32((u32)(0xa8f57cu), 0x0u);
L_0064d07d:; BB(0x0064d07d);
    /* 0064d07d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d07e: ret  */ FN_RET(0x0064d010); r_esp += 4; return;
}

void f_0064d080(void)
{
    FN_ENTER(0x0064d080);
    /* 0064d080: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d081: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d083: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d085: push 0x8e62d0 */ { u32 v = 0x8e62d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d08a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d090: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d091: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d098: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d09b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d09e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d0a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d0a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d0a7: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d0ac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064d0b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64d0b8u); f_005caba4();
    /* 0064d0b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d0b9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064d0bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d0be: je 0x64d0f7 */ if (fZ) goto L_0064d0f7;
L_0064d0c0:; BB(0x0064d0c0);
    /* 0064d0c0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064d0c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d0ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d0d1: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d0d7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d0da: call 0x64d0fc */ r_esp -= 4; W32(r_esp, 0x64d0dfu); f_0064d0fc();
    /* 0064d0df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d0e2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064d0e9:; BB(0x0064d0e9);
    /* 0064d0e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d0ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d0f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d0f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d0f6: ret  */ FN_RET(0x0064d080); r_esp += 4; return;
L_0064d0f7:; BB(0x0064d0f7);
    /* 0064d0f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d0f9: jmp 0x64d0e9 */ goto L_0064d0e9;
}

void f_0064d0fc(void) /* sub_64D0FC */
{
    FN_ENTER(0x0064d0fc);
    /* 0064d0fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d0fd: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d0ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d101: push 0x8e62ec */ { u32 v = 0x8e62ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d10c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d10d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d114: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d11a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d11d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d123: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d126: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d129: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d12c: call 0x65fe18 */ r_esp -= 4; W32(r_esp, 0x64d131u); f_0065fe18();
    /* 0064d131: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d138: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d13b: mov dword ptr [eax], 0xb304c8 */ W32((u32)(r_eax), 0xb304c8u);
    /* 0064d141: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d143: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0064d148: mov edx, dword ptr [0x9c7358] */ r_edx = R32((u32)(0x9c7358u));
    /* 0064d14e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0064d151: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0064d157: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064d159: jg 0x64d15d */ if ((!fZ&&fS==fO)) goto L_0064d15d;
L_0064d15b:; BB(0x0064d15b);
    /* 0064d15b: mov edx, ecx */ r_edx = r_ecx;
L_0064d15d:; BB(0x0064d15d);
    /* 0064d15d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d160: jl 0x64d164 */ if ((fS!=fO)) goto L_0064d164;
L_0064d162:; BB(0x0064d162);
    /* 0064d162: mov edx, ebx */ r_edx = r_ebx;
L_0064d164:; BB(0x0064d164);
    /* 0064d164: mov dword ptr [eax + 0x88], edx */ W32((u32)(r_eax+0x88u), r_edx);
    /* 0064d16a: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d170: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d172: je 0x64d1ef */ if (fZ) goto L_0064d1ef;
L_0064d174:; BB(0x0064d174);
    /* 0064d174: movsx eax, word ptr [edx*2 + 0x936610] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx*2+0x936610u));
    /* 0064d17c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d17d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d182u); f_005b8610();
    /* 0064d182: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d185: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d187: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0064d18d: mov eax, dword ptr [ecx + 0x88] */ r_eax = R32((u32)(r_ecx+0x88u));
    /* 0064d193: movzx edx, word ptr [eax*2 + 0x936610] */ r_edx = (u32)R16((u32)(r_eax*2+0x936610u));
    /* 0064d19b: push 0x9c735c */ { u32 v = 0x9c735cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d1a0: mov ebx, dword ptr [edx*4 + 0xa8f568] */ r_ebx = R32((u32)(r_edx*4+0xa8f568u));
    /* 0064d1a7: mov dword ptr [ecx + 0xc4], ebx */ W32((u32)(r_ecx+0xc4u), r_ebx);
    /* 0064d1ad: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64d1b2u); f_007b9a88();
    /* 0064d1b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d1b5: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0064d1b8: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064d1bd: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0064d1c0: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64d1c5u); f_007b4f54();
    /* 0064d1c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d1c8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064d1cb: mov dword ptr [eax + 0x98], 3 */ W32((u32)(r_eax+0x98u), 0x3u);
    /* 0064d1d5: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 0064d1df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d1e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d1e9: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d1eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d1ec: ret 8 */ FN_RET(0x0064d0fc); r_esp += 12; return;
L_0064d1ef:; BB(0x0064d1ef);
    /* 0064d1ef: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064d1f2: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0064d1f6: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d1fc: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0064d200: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d203: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d20a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d20c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d20d: ret 8 */ FN_RET(0x0064d0fc); r_esp += 12; return;
}

void f_0064d210(void) /* sub_64D210 */
{
    FN_ENTER(0x0064d210);
    /* 0064d210: mov dword ptr [0xa8f55c], 0x3f800000 */ W32((u32)(0xa8f55cu), 0x3f800000u);
    /* 0064d21a: mov dword ptr [0xa8f560], 0x41000000 */ W32((u32)(0xa8f560u), 0x41000000u);
    /* 0064d224: mov dword ptr [0xa8f564], 0x3fc00000 */ W32((u32)(0xa8f564u), 0x3fc00000u);
    /* 0064d22e: ret  */ FN_RET(0x0064d210); r_esp += 4; return;
}

void f_0064d230(void) /* sub_64D230 */
{
    FN_ENTER(0x0064d230);
    /* 0064d230: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d231: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d233: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d235: push 0x8e632e */ { u32 v = 0x8e632eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d23a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d241: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d248: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d24b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d24e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d251: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d254: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d257: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x64d25cu); f_00807ac0();
    /* 0064d25c: lea edx, [eax - 0x17] */ r_edx = (u32)(r_eax+0xffffffe9u);
    /* 0064d25f: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0064d262: ja 0x64d2dc */ if ((!fC&&!fZ)) goto L_0064d2dc;
L_0064d264:; BB(0x0064d264);
    /* 0064d264: mov eax, dword ptr [eax*4 + 0x936570] */ r_eax = R32((u32)(r_eax*4+0x936570u));
    /* 0064d26b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0064d2dc:; BB(0x0064d2dc);
    /* 0064d2dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064d2e3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2e8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64d2edu); f_008581c5();
    /* 0064d2ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d2ee: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064d2f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d2f3: je 0x64d3c0 */ if (fZ) goto L_0064d3c0;
L_0064d2f9:; BB(0x0064d2f9);
    /* 0064d2f9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064d300: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d307: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d30a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d30c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d30d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d30f: push 0x9c732c */ { u32 v = 0x9c732cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d314: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d316: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64d31bu); f_005b7a84();
    /* 0064d31b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d31e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064d325:; BB(0x0064d325);
    /* 0064d325: mov dword ptr [0xa8f57c], eax */ W32((u32)(0xa8f57cu), r_eax);
    /* 0064d32a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d331: push 0x936690 */ { u32 v = 0x936690u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d336: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64d33bu); f_008009dc();
    /* 0064d33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d33c: mov dword ptr [0xa8f578], eax */ W32((u32)(0xa8f578u), r_eax);
    /* 0064d341: mov eax, 1 */ r_eax = 0x1u;
    /* 0064d346: mov word ptr [0xa8f574], ax */ W16((u32)(0xa8f574u), (u16)r_eax);
    /* 0064d34c: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d352: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d354: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d356: mov dword ptr [0xa8f568], eax */ W32((u32)(0xa8f568u), r_eax);
    /* 0064d35b: mov dword ptr [0xa8f56c], eax */ W32((u32)(0xa8f56cu), r_eax);
    /* 0064d360: mov dword ptr [0xa8f570], eax */ W32((u32)(0xa8f570u), r_eax);
    /* 0064d365: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d36au); f_005b8610();
    /* 0064d36a: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064d371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d372: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d375: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d377: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x64d37cu); f_0066f3d4();
    /* 0064d37c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d37f: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d385: mov dword ptr [0xa8f568], eax */ W32((u32)(0xa8f568u), r_eax);
    /* 0064d38a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d38c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d391u); f_005b8610();
    /* 0064d391: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064d398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d399: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d39c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d39e: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x64d3a3u); f_0066f3d4();
    /* 0064d3a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064d3a6: mov dword ptr [0xa8f56c], eax */ W32((u32)(0xa8f56cu), r_eax);
    /* 0064d3ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d3ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d3b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d3b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d3b8: ret  */ FN_RET(0x0064d230); r_esp += 4; return;
L_0064d3c0:; BB(0x0064d3c0);
    /* 0064d3c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d3c2: jmp 0x64d325 */ goto L_0064d325;
}

void f_0064d26d(void)
{
    FN_ENTER(0x0064d26d);
    /* 0064d26d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064d274: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d279: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64d27eu); f_008581c5();
    /* 0064d27e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d27f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064d282: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d284: je 0x64d3b9 */ if (fZ) goto L_0064d3b9;
L_0064d28a:; BB(0x0064d28a);
    /* 0064d28a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064d291: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d298: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064d29b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d29d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d29e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2a0: push 0x9c7348 */ { u32 v = 0x9c7348u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2a5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2a7: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64d2acu); f_005b7a84();
    /* 0064d2ac: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064d2af: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064d2b6:; BB(0x0064d2b6);
    /* 0064d2b6: mov dword ptr [0xa8f57c], eax */ W32((u32)(0xa8f57cu), r_eax);
    /* 0064d2bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d2c2: push 0x936678 */ { u32 v = 0x936678u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2c7: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64d2ccu); f_008009dc();
    /* 0064d2cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d2cd: mov dword ptr [0xa8f578], eax */ W32((u32)(0xa8f578u), r_eax);
    /* 0064d2d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d2d4: mov word ptr [0xa8f574], ax */ W16((u32)(0xa8f574u), (u16)r_eax);
    /* 0064d2da: jmp 0x64d34c */ goto L_0064d34c;
L_0064d34c:; BB(0x0064d34c);
    /* 0064d34c: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d352: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d354: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d356: mov dword ptr [0xa8f568], eax */ W32((u32)(0xa8f568u), r_eax);
    /* 0064d35b: mov dword ptr [0xa8f56c], eax */ W32((u32)(0xa8f56cu), r_eax);
    /* 0064d360: mov dword ptr [0xa8f570], eax */ W32((u32)(0xa8f570u), r_eax);
    /* 0064d365: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d36au); f_005b8610();
    /* 0064d36a: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064d371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d372: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d375: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d377: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x64d37cu); f_0066f3d4();
    /* 0064d37c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d37f: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d385: mov dword ptr [0xa8f568], eax */ W32((u32)(0xa8f568u), r_eax);
    /* 0064d38a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d38c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d391u); f_005b8610();
    /* 0064d391: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064d398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d399: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d39c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d39e: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x64d3a3u); f_0066f3d4();
    /* 0064d3a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064d3a6: mov dword ptr [0xa8f56c], eax */ W32((u32)(0xa8f56cu), r_eax);
    /* 0064d3ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d3ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d3b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d3b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d3b8: ret  */ FN_RET(0x0064d26d); r_esp += 4; return;
L_0064d3b9:; BB(0x0064d3b9);
    /* 0064d3b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d3bb: jmp 0x64d2b6 */ goto L_0064d2b6;
}

void f_0064d2dc(void)
{
    FN_ENTER(0x0064d2dc);
    /* 0064d2dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064d2e3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d2e8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64d2edu); f_008581c5();
    /* 0064d2ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d2ee: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064d2f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d2f3: je 0x64d3c0 */ if (fZ) goto L_0064d3c0;
L_0064d2f9:; BB(0x0064d2f9);
    /* 0064d2f9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064d300: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d307: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d30a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d30c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d30d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d30e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d30f: push 0x9c732c */ { u32 v = 0x9c732cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d314: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d316: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x64d31bu); f_005b7a84();
    /* 0064d31b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d31e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064d325:; BB(0x0064d325);
    /* 0064d325: mov dword ptr [0xa8f57c], eax */ W32((u32)(0xa8f57cu), r_eax);
    /* 0064d32a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d331: push 0x936690 */ { u32 v = 0x936690u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d336: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x64d33bu); f_008009dc();
    /* 0064d33b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d33c: mov dword ptr [0xa8f578], eax */ W32((u32)(0xa8f578u), r_eax);
    /* 0064d341: mov eax, 1 */ r_eax = 0x1u;
    /* 0064d346: mov word ptr [0xa8f574], ax */ W16((u32)(0xa8f574u), (u16)r_eax);
    /* 0064d34c: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d352: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d354: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d356: mov dword ptr [0xa8f568], eax */ W32((u32)(0xa8f568u), r_eax);
    /* 0064d35b: mov dword ptr [0xa8f56c], eax */ W32((u32)(0xa8f56cu), r_eax);
    /* 0064d360: mov dword ptr [0xa8f570], eax */ W32((u32)(0xa8f570u), r_eax);
    /* 0064d365: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d36au); f_005b8610();
    /* 0064d36a: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064d371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d372: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d375: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d377: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x64d37cu); f_0066f3d4();
    /* 0064d37c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d37f: mov ecx, dword ptr [0xa8f57c] */ r_ecx = R32((u32)(0xa8f57cu));
    /* 0064d385: mov dword ptr [0xa8f568], eax */ W32((u32)(0xa8f568u), r_eax);
    /* 0064d38a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d38c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64d391u); f_005b8610();
    /* 0064d391: movzx edx, word ptr [0xa8f574] */ r_edx = (u32)R16((u32)(0xa8f574u));
    /* 0064d398: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d399: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d39c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d39e: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x64d3a3u); f_0066f3d4();
    /* 0064d3a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064d3a6: mov dword ptr [0xa8f56c], eax */ W32((u32)(0xa8f56cu), r_eax);
    /* 0064d3ab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d3ae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d3b5: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d3b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d3b8: ret  */ FN_RET(0x0064d2dc); r_esp += 4; return;
L_0064d3c0:; BB(0x0064d3c0);
    /* 0064d3c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064d3c2: jmp 0x64d325 */ goto L_0064d325;
}

void f_0064d3c8(void) /* sub_64D3C8 */
{
    FN_ENTER(0x0064d3c8);
    /* 0064d3c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d3cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064d3cd: call 0x64d3ec */ r_esp -= 4; W32(r_esp, 0x64d3d2u); f_0064d3ec();
    /* 0064d3d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d3d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d3d8: jne 0x64d3de */ if (!fZ) goto L_0064d3de;
L_0064d3da:; BB(0x0064d3da);
    /* 0064d3da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d3db: ret 4 */ FN_RET(0x0064d3c8); r_esp += 8; return;
L_0064d3de:; BB(0x0064d3de);
    /* 0064d3de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64d3e4u); f_005c2f74();
    /* 0064d3e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d3e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d3e6: ret 4 */ FN_RET(0x0064d3c8); r_esp += 8; return;
}

void f_0064d3ec(void) /* sub_64D3EC */
{
    FN_ENTER(0x0064d3ec);
    /* 0064d3ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d3ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3f1: push 0x8e6356 */ { u32 v = 0x8e6356u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d3fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d3fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d404: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d407: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d40a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d40d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d410: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d413: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d416: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d41d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d420: mov dword ptr [eax], 0xb30a60 */ W32((u32)(r_eax), 0xb30a60u);
    /* 0064d426: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d427: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64d42cu); f_007b4e84();
    /* 0064d42c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d42d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d430: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64d435u); f_007b9c8c();
    /* 0064d435: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d438: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 0064d43e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064d441: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d448: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d44b: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d451: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x64d456u); f_006111bc();
    /* 0064d456: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d45d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d460: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64d465u); f_00770660();
    /* 0064d465: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d468: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d46f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d472: ret  */ FN_RET(0x0064d3ec); r_esp += 4; return;
}

void f_0064d474(void) /* sub_64D474 */
{
    FN_ENTER(0x0064d474);
    /* 0064d474: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d475: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d477: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064d479: call 0x64d498 */ r_esp -= 4; W32(r_esp, 0x64d47eu); f_0064d498();
    /* 0064d47e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d482: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d484: jne 0x64d48a */ if (!fZ) goto L_0064d48a;
L_0064d486:; BB(0x0064d486);
    /* 0064d486: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d487: ret 4 */ FN_RET(0x0064d474); r_esp += 8; return;
L_0064d48a:; BB(0x0064d48a);
    /* 0064d48a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d48b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64d490u); f_005c2f74();
    /* 0064d490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d491: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d492: ret 4 */ FN_RET(0x0064d474); r_esp += 8; return;
}

void f_0064d498(void) /* sub_64D498 */
{
    FN_ENTER(0x0064d498);
    /* 0064d498: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d499: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d49b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d49d: push 0x8e637e */ { u32 v = 0x8e637eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d4a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d4b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d4b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d4b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d4b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d4bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d4bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d4c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d4c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d4cc: mov dword ptr [eax], 0xb30bc0 */ W32((u32)(r_eax), 0xb30bc0u);
    /* 0064d4d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d4d3: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64d4d8u); f_007b4e84();
    /* 0064d4d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d4d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d4dc: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64d4e1u); f_007b9c8c();
    /* 0064d4e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d4e4: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 0064d4ea: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064d4ed: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d4f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d4f7: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d4fd: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x64d502u); f_006111bc();
    /* 0064d502: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d509: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d50c: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64d511u); f_00770660();
    /* 0064d511: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d514: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d51b: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d51d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d51e: ret  */ FN_RET(0x0064d498); r_esp += 4; return;
}

void f_0064d520(void) /* sub_64D520 */
{
    FN_ENTER(0x0064d520);
    /* 0064d520: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d521: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d523: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064d525: call 0x64d544 */ r_esp -= 4; W32(r_esp, 0x64d52au); f_0064d544();
    /* 0064d52a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d52e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d530: jne 0x64d536 */ if (!fZ) goto L_0064d536;
L_0064d532:; BB(0x0064d532);
    /* 0064d532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d533: ret 4 */ FN_RET(0x0064d520); r_esp += 8; return;
L_0064d536:; BB(0x0064d536);
    /* 0064d536: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d537: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64d53cu); f_005c2f74();
    /* 0064d53c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d53d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d53e: ret 4 */ FN_RET(0x0064d520); r_esp += 8; return;
}

void f_0064d544(void) /* sub_64D544 */
{
    FN_ENTER(0x0064d544);
    /* 0064d544: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d545: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d547: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d549: push 0x8e63a6 */ { u32 v = 0x8e63a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d54e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d555: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d55c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d55f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d562: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d565: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d568: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d56b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d56e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d575: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d578: mov dword ptr [eax], 0xb30d20 */ W32((u32)(r_eax), 0xb30d20u);
    /* 0064d57e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d57f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64d584u); f_007b4e84();
    /* 0064d584: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d585: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d588: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64d58du); f_007b9c8c();
    /* 0064d58d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d590: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 0064d596: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064d599: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d5a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d5a3: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d5a9: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x64d5aeu); f_006111bc();
    /* 0064d5ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d5b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d5b8: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64d5bdu); f_00770660();
    /* 0064d5bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d5c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d5c7: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d5c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d5ca: ret  */ FN_RET(0x0064d544); r_esp += 4; return;
}

void f_0064d5cc(void) /* sub_64D5CC */
{
    FN_ENTER(0x0064d5cc);
    /* 0064d5cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d5cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064d5d1: call 0x64d5f0 */ r_esp -= 4; W32(r_esp, 0x64d5d6u); f_0064d5f0();
    /* 0064d5d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d5da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d5dc: jne 0x64d5e2 */ if (!fZ) goto L_0064d5e2;
L_0064d5de:; BB(0x0064d5de);
    /* 0064d5de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d5df: ret 4 */ FN_RET(0x0064d5cc); r_esp += 8; return;
L_0064d5e2:; BB(0x0064d5e2);
    /* 0064d5e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64d5e8u); f_005c2f74();
    /* 0064d5e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d5e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d5ea: ret 4 */ FN_RET(0x0064d5cc); r_esp += 8; return;
}

void f_0064d5f0(void) /* sub_64D5F0 */
{
    FN_ENTER(0x0064d5f0);
    /* 0064d5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d5f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5f5: push 0x8e63ce */ { u32 v = 0x8e63ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d5fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d601: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d608: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d60b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d60e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d611: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d614: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d617: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d61a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d621: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d624: mov dword ptr [eax], 0xb30e80 */ W32((u32)(r_eax), 0xb30e80u);
    /* 0064d62a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d62b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64d630u); f_007b4e84();
    /* 0064d630: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d631: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d634: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64d639u); f_007b9c8c();
    /* 0064d639: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d63c: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 0064d642: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064d645: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d64c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d64f: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d655: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x64d65au); f_006111bc();
    /* 0064d65a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d661: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d664: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64d669u); f_00770660();
    /* 0064d669: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d66c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d673: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d675: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d676: ret  */ FN_RET(0x0064d5f0); r_esp += 4; return;
}

void f_0064d678(void) /* sub_64D678 */
{
    FN_ENTER(0x0064d678);
    /* 0064d678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d679: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d67b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064d67d: call 0x64d69c */ r_esp -= 4; W32(r_esp, 0x64d682u); f_0064d69c();
    /* 0064d682: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d686: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d688: jne 0x64d68e */ if (!fZ) goto L_0064d68e;
L_0064d68a:; BB(0x0064d68a);
    /* 0064d68a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d68b: ret 4 */ FN_RET(0x0064d678); r_esp += 8; return;
L_0064d68e:; BB(0x0064d68e);
    /* 0064d68e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d68f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64d694u); f_005c2f74();
    /* 0064d694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d695: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d696: ret 4 */ FN_RET(0x0064d678); r_esp += 8; return;
}

void f_0064d69c(void) /* sub_64D69C */
{
    FN_ENTER(0x0064d69c);
    /* 0064d69c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d69d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064d69f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d6a1: push 0x8e63f6 */ { u32 v = 0x8e63f6u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d6a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064d6ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d6ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064d6b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d6b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064d6ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064d6bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064d6c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064d6c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064d6c6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064d6cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d6d0: mov dword ptr [eax], 0xb30900 */ W32((u32)(r_eax), 0xb30900u);
    /* 0064d6d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d6d7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x64d6dcu); f_007b4e84();
    /* 0064d6dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064d6dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d6e0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x64d6e5u); f_007b9c8c();
    /* 0064d6e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d6e8: mov dword ptr [eax], 0xb25c20 */ W32((u32)(r_eax), 0xb25c20u);
    /* 0064d6ee: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0064d6f1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064d6f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d6fb: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064d701: call 0x6111bc */ r_esp -= 4; W32(r_esp, 0x64d706u); f_006111bc();
    /* 0064d706: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064d70d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064d710: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x64d715u); f_00770660();
    /* 0064d715: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064d718: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064d71f: mov esp, ebp */ r_esp = r_ebp;
    /* 0064d721: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d722: ret  */ FN_RET(0x0064d69c); r_esp += 4; return;
}

void f_0064d724(void) /* sub_64D724 */
{
    FN_ENTER(0x0064d724);
    /* 0064d724: mov ecx, dword ptr [0xa8f600] */ r_ecx = R32((u32)(0xa8f600u));
    /* 0064d72a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d72c: je 0x64d752 */ if (fZ) goto L_0064d752;
L_0064d72e:; BB(0x0064d72e);
    /* 0064d72e: mov eax, dword ptr [0xa8f5fc] */ r_eax = R32((u32)(0xa8f5fcu));
    /* 0064d733: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d735: je 0x64d748 */ if (fZ) goto L_0064d748;
L_0064d737:; BB(0x0064d737);
    /* 0064d737: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x64d73cu); f_00829de0();
    /* 0064d73c: push dword ptr [0xa8f600] */ { u32 v = R32((u32)(0xa8f600u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d742: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x64d747u); f_0082e960();
    /* 0064d747: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064d748:; BB(0x0064d748);
    /* 0064d748: mov dword ptr [0xa8f600], 0 */ W32((u32)(0xa8f600u), 0x0u);
L_0064d752:; BB(0x0064d752);
    /* 0064d752: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064d758: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d75a: je 0x64d76f */ if (fZ) goto L_0064d76f;
L_0064d75c:; BB(0x0064d75c);
    /* 0064d75c: je 0x64d765 */ if (fZ) goto L_0064d765;
L_0064d75e:; BB(0x0064d75e);
    /* 0064d75e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d760: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x64d765u); f_004066a8();
L_0064d765:; BB(0x0064d765);
    /* 0064d765: mov dword ptr [0xa8f604], 0 */ W32((u32)(0xa8f604u), 0x0u);
L_0064d76f:; BB(0x0064d76f);
    /* 0064d76f: ret  */ FN_RET(0x0064d724); r_esp += 4; return;
}

void f_0064d770(void) /* sub_64D770 */
{
    FN_ENTER(0x0064d770);
    /* 0064d770: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d776: jne 0x64d7a3 */ if (!fZ) goto L_0064d7a3;
L_0064d778:; BB(0x0064d778);
    /* 0064d778: mov edx, dword ptr [0xa8f5f4] */ r_edx = R32((u32)(0xa8f5f4u));
    /* 0064d77e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d780: je 0x64d7a3 */ if (fZ) goto L_0064d7a3;
L_0064d782:; BB(0x0064d782);
    /* 0064d782: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0064d787: cmp eax, dword ptr [0xa8f5f0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f5f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064d78d: je 0x64d7a3 */ if (fZ) goto L_0064d7a3;
L_0064d78f:; BB(0x0064d78f);
    /* 0064d78f: mov dword ptr [0xa8f5f0], eax */ W32((u32)(0xa8f5f0u), r_eax);
    /* 0064d794: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d796: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d798: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d79a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d79b: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x64d7a0u); f_0081a2b0();
    /* 0064d7a0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064d7a3:; BB(0x0064d7a3);
    /* 0064d7a3: ret  */ FN_RET(0x0064d770); r_esp += 4; return;
}

void f_0064d7a4(void) /* sub_64D7A4 */
{
    FN_ENTER(0x0064d7a4);
    /* 0064d7a4: mov ecx, dword ptr [0xa8f5d8] */ r_ecx = R32((u32)(0xa8f5d8u));
    /* 0064d7aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d7ac: je 0x64d7d2 */ if (fZ) goto L_0064d7d2;
L_0064d7ae:; BB(0x0064d7ae);
    /* 0064d7ae: mov eax, dword ptr [0xa8f5d4] */ r_eax = R32((u32)(0xa8f5d4u));
    /* 0064d7b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d7b5: je 0x64d7c8 */ if (fZ) goto L_0064d7c8;
L_0064d7b7:; BB(0x0064d7b7);
    /* 0064d7b7: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x64d7bcu); f_00829de0();
    /* 0064d7bc: push dword ptr [0xa8f5d8] */ { u32 v = R32((u32)(0xa8f5d8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d7c2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x64d7c7u); f_0082e960();
    /* 0064d7c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064d7c8:; BB(0x0064d7c8);
    /* 0064d7c8: mov dword ptr [0xa8f5d8], 0 */ W32((u32)(0xa8f5d8u), 0x0u);
L_0064d7d2:; BB(0x0064d7d2);
    /* 0064d7d2: mov ecx, dword ptr [0xa8f5dc] */ r_ecx = R32((u32)(0xa8f5dcu));
    /* 0064d7d8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d7da: je 0x64d7ef */ if (fZ) goto L_0064d7ef;
L_0064d7dc:; BB(0x0064d7dc);
    /* 0064d7dc: je 0x64d7e5 */ if (fZ) goto L_0064d7e5;
L_0064d7de:; BB(0x0064d7de);
    /* 0064d7de: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d7e0: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x64d7e5u); f_004066a8();
L_0064d7e5:; BB(0x0064d7e5);
    /* 0064d7e5: mov dword ptr [0xa8f5dc], 0 */ W32((u32)(0xa8f5dcu), 0x0u);
L_0064d7ef:; BB(0x0064d7ef);
    /* 0064d7ef: ret  */ FN_RET(0x0064d7a4); r_esp += 4; return;
}

void f_0064d7f0(void) /* sub_64D7F0 */
{
    FN_ENTER(0x0064d7f0);
    /* 0064d7f0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d7f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d7f6: jne 0x64d823 */ if (!fZ) goto L_0064d823;
L_0064d7f8:; BB(0x0064d7f8);
    /* 0064d7f8: mov edx, dword ptr [0xa8f5cc] */ r_edx = R32((u32)(0xa8f5ccu));
    /* 0064d7fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d800: je 0x64d823 */ if (fZ) goto L_0064d823;
L_0064d802:; BB(0x0064d802);
    /* 0064d802: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0064d807: cmp eax, dword ptr [0xa8f5c8] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8f5c8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064d80d: je 0x64d823 */ if (fZ) goto L_0064d823;
L_0064d80f:; BB(0x0064d80f);
    /* 0064d80f: mov dword ptr [0xa8f5c8], eax */ W32((u32)(0xa8f5c8u), r_eax);
    /* 0064d814: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d816: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d818: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d81a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d81b: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x64d820u); f_0081a2b0();
    /* 0064d820: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064d823:; BB(0x0064d823);
    /* 0064d823: ret  */ FN_RET(0x0064d7f0); r_esp += 4; return;
}

void f_0064d824(void) /* sub_64D824 */
{
    FN_ENTER(0x0064d824);
    /* 0064d824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d825: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d827: lea ecx, [ebx + 0x348] */ r_ecx = (u32)(r_ebx+0x348u);
    /* 0064d82d: call 0x61132c */ r_esp -= 4; W32(r_esp, 0x64d832u); f_0061132c();
    /* 0064d832: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0064d834: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064d836: call dword ptr [eax + 0x148] */ { u32 t = R32((u32)(r_eax+0x148u)); r_esp -= 4; W32(r_esp, 0x64d83cu); call_ind(t); }
    /* 0064d83c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d83d: ret  */ FN_RET(0x0064d824); r_esp += 4; return;
}

void f_0064d840(void) /* sub_64D840 */
{
    FN_ENTER(0x0064d840);
    /* 0064d840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064d841: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064d842: mov edi, ecx */ r_edi = r_ecx;
    /* 0064d844: push dword ptr [edi + 0x340] */ { u32 v = R32((u32)(r_edi+0x340u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d84a: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064d850: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0064d852: mov ecx, edi */ r_ecx = r_edi;
    /* 0064d854: mov dword ptr [edi + 0x36c], 0 */ W32((u32)(r_edi+0x36cu), 0x0u);
    /* 0064d85e: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x64d861u); call_ind(t); }
    /* 0064d861: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064d864: je 0x64d869 */ if (fZ) goto L_0064d869;
L_0064d866:; BB(0x0064d866);
    /* 0064d866: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064d867: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064d868: ret  */ FN_RET(0x0064d840); r_esp += 4; return;
L_0064d869:; BB(0x0064d869);
    /* 0064d869: mov dword ptr [edi + 0x36c], 1 */ W32((u32)(r_edi+0x36cu), 0x1u);
    /* 0064d873: lea esi, [edi + 0x348] */ r_esi = (u32)(r_edi+0x348u);
    /* 0064d879: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0064d87c: mov ecx, esi */ r_ecx = r_esi;
    /* 0064d87e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d87f: call 0x6113a0 */ r_esp -= 4; W32(r_esp, 0x64d884u); f_006113a0();
    /* 0064d884: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064d887: jne 0x64d866 */ if (!fZ) goto L_0064d866;
L_0064d889:; BB(0x0064d889);
    /* 0064d889: mov ecx, esi */ r_ecx = r_esi;
    /* 0064d88b: call 0x611374 */ r_esp -= 4; W32(r_esp, 0x64d890u); f_00611374();
    /* 0064d890: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d893: je 0x64d8a2 */ if (fZ) goto L_0064d8a2;
L_0064d895:; BB(0x0064d895);
    /* 0064d895: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0064d897: mov ecx, edi */ r_ecx = r_edi;
    /* 0064d899: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x64d89fu); call_ind(t); }
    /* 0064d89f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064d8a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064d8a1: ret  */ FN_RET(0x0064d840); r_esp += 4; return;
L_0064d8a2:; BB(0x0064d8a2);
    /* 0064d8a2: mov eax, dword ptr [edi + 0x348] */ r_eax = R32((u32)(r_edi+0x348u));
    /* 0064d8a8: mov ecx, esi */ r_ecx = r_esi;
    /* 0064d8aa: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x64d8adu); call_ind(t); }
    /* 0064d8ad: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0064d8af: mov ecx, edi */ r_ecx = r_edi;
    /* 0064d8b1: call dword ptr [eax + 0x14c] */ { u32 t = R32((u32)(r_eax+0x14cu)); r_esp -= 4; W32(r_esp, 0x64d8b7u); call_ind(t); }
    /* 0064d8b7: mov eax, dword ptr [edi + 0x348] */ r_eax = R32((u32)(r_edi+0x348u));
    /* 0064d8bd: mov ecx, esi */ r_ecx = r_esi;
    /* 0064d8bf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x64d8c2u); call_ind(t); }
    /* 0064d8c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064d8c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064d8c4: ret  */ FN_RET(0x0064d840); r_esp += 4; return;
}

void f_0064d8c8(void) /* sub_64D8C8 */
{
    FN_ENTER(0x0064d8c8);
    /* 0064d8c8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0064d8cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d8d1: jne 0x64d8e8 */ if (!fZ) goto L_0064d8e8;
L_0064d8d3:; BB(0x0064d8d3);
    /* 0064d8d3: mov eax, dword ptr [ecx + 0x36c] */ r_eax = R32((u32)(r_ecx+0x36cu));
    /* 0064d8d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d8db: je 0x64d8e8 */ if (fZ) goto L_0064d8e8;
L_0064d8dd:; BB(0x0064d8dd);
    /* 0064d8dd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8df: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8e0: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x64d8e5u); f_006946a8();
    /* 0064d8e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064d8e8:; BB(0x0064d8e8);
    /* 0064d8e8: ret  */ FN_RET(0x0064d8c8); r_esp += 4; return;
}

void f_0064d8ec(void) /* sub_64D8EC */
{
    FN_ENTER(0x0064d8ec);
    /* 0064d8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d8ed: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d8f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0064d8f2: fld dword ptr [ebp + 0x68] */ FPUSH(R_F32((u32)(r_ebp+0x68u)));
    /* 0064d8f5: fcomp dword ptr [0x93680c] */ fx_compare(ST(0), R_F32((u32)(0x93680cu))); FPOP();
    /* 0064d8fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064d8fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064d8fe: jbe 0x64d911 */ if ((fC||fZ)) goto L_0064d911;
L_0064d900:; BB(0x0064d900);
    /* 0064d900: mov dword ptr [ebp + 0x368], 1 */ W32((u32)(r_ebp+0x368u), 0x1u);
    /* 0064d90a: mov eax, 1 */ r_eax = 0x1u;
    /* 0064d90f: jmp 0x64d91d */ goto L_0064d91d;
L_0064d911:; BB(0x0064d911);
    /* 0064d911: mov dword ptr [ebp + 0x368], 0 */ W32((u32)(r_ebp+0x368u), 0x0u);
    /* 0064d91b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0064d91d:; BB(0x0064d91d);
    /* 0064d91d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d91f: je 0x64d938 */ if (fZ) goto L_0064d938;
L_0064d921:; BB(0x0064d921);
    /* 0064d921: push 0x936b40 */ { u32 v = 0x936b40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d926: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d92b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64d930u); f_0061cdb0();
    /* 0064d930: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d933: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064d936: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d937: ret  */ FN_RET(0x0064d8ec); r_esp += 4; return;
L_0064d938:; BB(0x0064d938);
    /* 0064d938: push 0x936b50 */ { u32 v = 0x936b50u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d93d: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064d942: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x64d947u); f_0061cdb0();
    /* 0064d947: mov eax, dword ptr [ebp + 0x84] */ r_eax = R32((u32)(r_ebp+0x84u));
    /* 0064d94d: mov edx, dword ptr [ebp + 0x88] */ r_edx = R32((u32)(r_ebp+0x88u));
    /* 0064d953: mov ecx, dword ptr [ebp + 0x8c] */ r_ecx = R32((u32)(r_ebp+0x8cu));
    /* 0064d959: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0064d95d: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0064d961: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 0064d965: lea ebp, [esp + 8] */ r_ebp = (u32)(r_esp+0x8u);
    /* 0064d969: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064d96a: call 0x83ddc4 */ r_esp -= 4; W32(r_esp, 0x64d96fu); f_0083ddc4();
    /* 0064d96f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064d972: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064d975: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064d976: ret  */ FN_RET(0x0064d8ec); r_esp += 4; return;
}

void f_0064d978(void) /* sub_64D978 */
{
    FN_ENTER(0x0064d978);
    /* 0064d978: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d979: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064d97b: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0064d97e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064d983: lea eax, [eax + 0x38] */ r_eax = (u32)(r_eax+0x38u);
    /* 0064d986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064d987: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x64d98cu); f_0078ea2c();
    /* 0064d98c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0064d98f: fcomp dword ptr [ebx + 0x344] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x344u))); FPOP();
    /* 0064d995: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064d997: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064d998: jae 0x64d9a3 */ if (!fC) goto L_0064d9a3;
L_0064d99a:; BB(0x0064d99a);
    /* 0064d99a: mov eax, 1 */ r_eax = 0x1u;
    /* 0064d99f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d9a0: ret 8 */ FN_RET(0x0064d978); r_esp += 12; return;
L_0064d9a3:; BB(0x0064d9a3);
    /* 0064d9a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064d9a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064d9a6: ret 8 */ FN_RET(0x0064d978); r_esp += 12; return;
}

void f_0064d9ac(void) /* sub_64D9AC */
{
    FN_ENTER(0x0064d9ac);
    /* 0064d9ac: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064d9b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d9b2: je 0x64d9cd */ if (fZ) goto L_0064d9cd;
L_0064d9b4:; BB(0x0064d9b4);
    /* 0064d9b4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d9b7: je 0x64d9cd */ if (fZ) goto L_0064d9cd;
L_0064d9b9:; BB(0x0064d9b9);
    /* 0064d9b9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d9bc: je 0x64d9cd */ if (fZ) goto L_0064d9cd;
L_0064d9be:; BB(0x0064d9be);
    /* 0064d9be: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d9c1: je 0x64d9cd */ if (fZ) goto L_0064d9cd;
L_0064d9c3:; BB(0x0064d9c3);
    /* 0064d9c3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d9c6: je 0x64d9cd */ if (fZ) goto L_0064d9cd;
L_0064d9c8:; BB(0x0064d9c8);
    /* 0064d9c8: cmp eax, 0x13 */ {  u32 a = r_eax; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064d9cb: jne 0x64d9db */ if (!fZ) goto L_0064d9db;
L_0064d9cd:; BB(0x0064d9cd);
    /* 0064d9cd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9d4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0064d9d6: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x64d9d9u); call_ind(t); }
    /* 0064d9d9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0064d9db:; BB(0x0064d9db);
    /* 0064d9db: fld dword ptr [0x936804] */ FPUSH(R_F32((u32)(0x936804u)));
    /* 0064d9e1: ret 0x18 */ FN_RET(0x0064d9ac); r_esp += 28; return;
}

void f_0064d9e4(void) /* sub_64D9E4 */
{
    FN_ENTER(0x0064d9e4);
    /* 0064d9e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064d9e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064d9e8: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0064d9ec: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064d9f1: jl 0x64da85 */ if ((fS!=fO)) goto L_0064da85;
L_0064d9f7:; BB(0x0064d9f7);
    /* 0064d9f7: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0064d9fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064d9ff: je 0x64da85 */ if (fZ) goto L_0064da85;
L_0064da05:; BB(0x0064da05);
    /* 0064da05: je 0x64da92 */ if (fZ) goto L_0064da92;
L_0064da0b:; BB(0x0064da0b);
    /* 0064da0b: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064da0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064da11: jl 0x64da42 */ if ((fS!=fO)) goto L_0064da42;
L_0064da13:; BB(0x0064da13);
    /* 0064da13: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064da19: jg 0x64da42 */ if ((!fZ&&fS==fO)) goto L_0064da42;
L_0064da1b:; BB(0x0064da1b);
    /* 0064da1b: mov esi, dword ptr [0xab02bc] */ r_esi = R32((u32)(0xab02bcu));
    /* 0064da21: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0064da25: movzx eax, word ptr [esi + edx*4] */ r_eax = (u32)R16((u32)(r_esi+r_edx*4));
    /* 0064da29: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0064da2d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0064da31: movzx edx, word ptr [esi + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_esi+r_edx*4+0x2u));
    /* 0064da36: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0064da3b: mov edx, 1 */ r_edx = 0x1u;
    /* 0064da40: jmp 0x64da44 */ goto L_0064da44;
L_0064da42:; BB(0x0064da42);
    /* 0064da42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0064da44:; BB(0x0064da44);
    /* 0064da44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064da46: je 0x64da85 */ if (fZ) goto L_0064da85;
L_0064da48:; BB(0x0064da48);
    /* 0064da48: mov edx, 1 */ r_edx = 0x1u;
    /* 0064da4d: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 0064da51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064da53: je 0x64da7c */ if (fZ) goto L_0064da7c;
L_0064da55:; BB(0x0064da55);
    /* 0064da55: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0064da59: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0064da5b: jl 0x64da7c */ if ((fS!=fO)) goto L_0064da7c;
L_0064da5d:; BB(0x0064da5d);
    /* 0064da5d: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064da63: jg 0x64da7c */ if ((!fZ&&fS==fO)) goto L_0064da7c;
L_0064da65:; BB(0x0064da65);
    /* 0064da65: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 0064da6a: movzx esi, word ptr [esp] */ r_esi = (u32)R16((u32)(r_esp));
    /* 0064da6e: mov word ptr [eax + edx*4], si */ W16((u32)(r_eax+r_edx*4), (u16)r_esi);
    /* 0064da72: movzx esi, word ptr [esp + 2] */ r_esi = (u32)R16((u32)(r_esp+0x2u));
    /* 0064da77: mov word ptr [eax + edx*4 + 2], si */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_esi);
L_0064da7c:; BB(0x0064da7c);
    /* 0064da7c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0064da7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064da80: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x64da85u); f_007b5038();
L_0064da85:; BB(0x0064da85);
    /* 0064da85: fld dword ptr [0x936800] */ FPUSH(R_F32((u32)(0x936800u)));
    /* 0064da8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064da8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064da8f: ret 8 */ FN_RET(0x0064d9e4); r_esp += 12; return;
L_0064da92:; BB(0x0064da92);
    /* 0064da92: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064da94: jmp 0x64da44 */ goto L_0064da44;
}

void f_0064da98(void) /* sub_64DA98 */
{
    FN_ENTER(0x0064da98);
    /* 0064da98: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064da9b: mov eax, ecx */ r_eax = r_ecx;
    /* 0064da9d: mov edx, dword ptr [0xa8f604] */ r_edx = R32((u32)(0xa8f604u));
    /* 0064daa3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064daa5: je 0x64dac0 */ if (fZ) goto L_0064dac0;
L_0064daa7:; BB(0x0064daa7);
    /* 0064daa7: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0064daae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dab0: jne 0x64dac0 */ if (!fZ) goto L_0064dac0;
L_0064dab2:; BB(0x0064dab2);
    /* 0064dab2: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0064dab5: lea ecx, [eax + 0x5c] */ r_ecx = (u32)(r_eax+0x5cu);
    /* 0064dab8: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 0064dabb: call 0x64dad0 */ r_esp -= 4; W32(r_esp, 0x64dac0u); f_0064dad0();
L_0064dac0:; BB(0x0064dac0);
    /* 0064dac0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0064dac3: ret  */ FN_RET(0x0064da98); r_esp += 4; return;
}

void f_0064dad0(void) /* sub_64DAD0 */
{
    FN_ENTER(0x0064dad0);
    /* 0064dad0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064dad1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064dad2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064dad3: mov edi, ecx */ r_edi = r_ecx;
    /* 0064dad5: mov esi, edx */ r_esi = r_edx;
    /* 0064dad7: mov ebp, eax */ r_ebp = r_eax;
    /* 0064dad9: mov ecx, dword ptr [0xa8f600] */ r_ecx = R32((u32)(0xa8f600u));
    /* 0064dadf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x64dae4u); f_00829cc8();
    /* 0064dae4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x64dae9u); f_0082d7b0();
    /* 0064dae9: mov ecx, esi */ r_ecx = r_esi;
    /* 0064daeb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64daf0u); f_0082d838();
    /* 0064daf0: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0064daf3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064daf5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x64dafau); f_0082d8bc();
    /* 0064dafa: mov edx, dword ptr [0xa8f5fc] */ r_edx = R32((u32)(0xa8f5fcu));
    /* 0064db00: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064db02: jne 0x64db50 */ if (!fZ) goto L_0064db50;
L_0064db04:; BB(0x0064db04);
    /* 0064db04: mov edx, dword ptr [0xa8f5e8] */ r_edx = R32((u32)(0xa8f5e8u));
    /* 0064db0a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064db0c: je 0x64db16 */ if (fZ) goto L_0064db16;
L_0064db0e:; BB(0x0064db0e);
    /* 0064db0e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064db10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db11: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64db13u); call_ind(t); }
    /* 0064db13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0064db16:; BB(0x0064db16);
    /* 0064db16: push dword ptr [0xa8f5ec] */ { u32 v = R32((u32)(0xa8f5ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064db1c: mov dword ptr [0xa8f5f8], 0 */ W32((u32)(0xa8f5f8u), 0x0u);
    /* 0064db26: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x64db2bu); f_0082e8e4();
    /* 0064db2b: mov esi, eax */ r_esi = r_eax;
    /* 0064db2d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db2e: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x64db33u); f_0082e760();
    /* 0064db33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064db34: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x64db39u); f_0082e8e4();
    /* 0064db39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064db3c: mov edx, dword ptr [0xa8f5e8] */ r_edx = R32((u32)(0xa8f5e8u));
    /* 0064db42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064db44: je 0x64db6d */ if (fZ) goto L_0064db6d;
L_0064db46:; BB(0x0064db46);
    /* 0064db46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064db48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db49: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x64db4bu); call_ind(t); }
    /* 0064db4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064db4e: jmp 0x64db6d */ goto L_0064db6d;
L_0064db50:; BB(0x0064db50);
    /* 0064db50: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 0064db55: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 0064db5a: push 0x3f59999a */ { u32 v = 0x3f59999au; r_esp -= 4; W32(r_esp, v); }
    /* 0064db5f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064db61: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x64db66u); f_0082fa0c();
    /* 0064db66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db67: call 0x805cc4 */ r_esp -= 4; W32(r_esp, 0x64db6cu); f_00805cc4();
    /* 0064db6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0064db6d:; BB(0x0064db6d);
    /* 0064db6d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x64db72u); f_0082da80();
    /* 0064db72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064db73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0064db74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064db75: ret  */ FN_RET(0x0064dad0); r_esp += 4; return;
}

void f_0064db78(void) /* sub_64DB78 */
{
    FN_ENTER(0x0064db78);
    /* 0064db78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064db79: mov ebp, esp */ r_ebp = r_esp;
    /* 0064db7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064db7d: push 0x8e6436 */ { u32 v = 0x8e6436u; r_esp -= 4; W32(r_esp, v); }
    /* 0064db82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064db88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064db89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064db90: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064db96: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064db99: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064db9c: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064db9f: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064dba2: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0064dba9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0064dbac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064dbaf: je 0x64ddf7 */ if (fZ) goto L_0064ddf7;
L_0064dbb5:; BB(0x0064dbb5);
    /* 0064dbb5: mov eax, dword ptr [0xa8f60c] */ r_eax = R32((u32)(0xa8f60cu));
    /* 0064dbba: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064dbbc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064dbbf: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064dbc2: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064dbc5: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064dbc8: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0064dbce: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064dbd1: mov dword ptr [ebp - 0xc0], ecx */ W32((u32)(r_ebp+0xffffff40u), r_ecx);
    /* 0064dbd7: mov dword ptr [ebp - 0xbc], ebx */ W32((u32)(r_ebp+0xffffff44u), r_ebx);
    /* 0064dbdd: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0064dbe3: mov dword ptr [ebp - 0xb4], edi */ W32((u32)(r_ebp+0xffffff4cu), r_edi);
    /* 0064dbe9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0064dbef: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064dbf2: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 0064dbf8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064dbfb: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 0064dc01: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064dc04: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0064dc0a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064dc0d: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0064dc13: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064dc16: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 0064dc1c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064dc1f: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0064dc25: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064dc28: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 0064dc2e: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064dc31: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0064dc37: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064dc3a: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0064dc40: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064dc43: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0064dc49: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064dc4c: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0064dc52: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064dc55: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064dc58: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0064dc5b: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0064dc5e: mov eax, dword ptr [0xa8f608] */ r_eax = R32((u32)(0xa8f608u));
    /* 0064dc63: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0064dc65: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0064dc68: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 0064dc6b: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0064dc6e: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0064dc71: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0064dc74: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0064dc77: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0064dc7a: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0064dc7d: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0064dc80: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064dc83: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0064dc86: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0064dc89: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0064dc8c: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0064dc8f: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0064dc92: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0064dc95: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0064dc98: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0064dc9b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0064dc9e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0064dca1: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0064dca4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0064dca7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0064dcaa: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0064dcad: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0064dcb0: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0064dcb3: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0064dcb6: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0064dcb9: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0064dcbc: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0064dcbf: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0064dcc2: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0064dcc5: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0064dcc8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0064dccb: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0064dcce: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0064dcd1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0064dcd4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064dcd7: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064dcdd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dcdf: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0064dce2: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0064dce8: mov esi, dword ptr [edx + 0x3c] */ r_esi = R32((u32)(r_edx+0x3cu));
    /* 0064dceb: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 0064dcf1: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0064dcf4: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 0064dcfa: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0064dd00: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64dd05u); f_005b8610();
    /* 0064dd05: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064dd08: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064dd0e: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0064dd11: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0064dd14: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0064dd17: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0064dd1d: mov eax, dword ptr [0xa8f600] */ r_eax = R32((u32)(0xa8f600u));
    /* 0064dd22: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0064dd25: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0064dd28: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0064dd2b: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0064dd2e: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0064dd31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd33: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64dd38u); f_005b8610();
    /* 0064dd38: mov edx, ebx */ r_edx = r_ebx;
    /* 0064dd3a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0064dd3d: mov eax, dword ptr [0xa8f600] */ r_eax = R32((u32)(0xa8f600u));
    /* 0064dd42: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0064dd45: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0064dd48: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd4a: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd4d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64dd52u); f_0050b7a4();
    /* 0064dd52: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd54: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd57: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x64dd5cu); f_0050b7a4();
    /* 0064dd5c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0064dd63: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd68: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64dd6du); f_005caba4();
    /* 0064dd6d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064dd70: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064dd73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064dd75: je 0x64dda1 */ if (fZ) goto L_0064dda1;
L_0064dd77:; BB(0x0064dd77);
    /* 0064dd77: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0064dd7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064dd85: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064dd88: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0064dd8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dd8f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064dd95: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64dd9au); f_006441f4();
    /* 0064dd9a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0064dda1:; BB(0x0064dda1);
    /* 0064dda1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064dda8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064ddaf: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddb4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64ddb9u); f_005caba4();
    /* 0064ddb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064ddba: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0064ddbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064ddbf: je 0x64dde8 */ if (fZ) goto L_0064dde8;
L_0064ddc1:; BB(0x0064ddc1);
    /* 0064ddc1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064ddc8: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064ddcf: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0064ddd2: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0064ddd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064ddd6: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064dddc: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x64dde1u); f_006441f4();
    /* 0064dde1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064dde8:; BB(0x0064dde8);
    /* 0064dde8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064ddef: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064ddf2: call 0x64de10 */ r_esp -= 4; W32(r_esp, 0x64ddf7u); f_0064de10();
L_0064ddf7:; BB(0x0064ddf7);
    /* 0064ddf7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064ddfa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064ddfd: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064de00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064de03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064de0a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064de0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064de0d: ret  */ FN_RET(0x0064db78); r_esp += 4; return;
}

void f_0064de10(void) /* sub_64DE10 */
{
    FN_ENTER(0x0064de10);
    /* 0064de10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064de11: mov edi, ecx */ r_edi = r_ecx;
    /* 0064de13: call 0x807e78 */ r_esp -= 4; W32(r_esp, 0x64de18u); f_00807e78();
    /* 0064de18: mov edx, dword ptr [eax*4 + 0x9366c0] */ r_edx = R32((u32)(r_eax*4+0x9366c0u));
    /* 0064de1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064de21: je 0x64de34 */ if (fZ) goto L_0064de34;
L_0064de23:; BB(0x0064de23);
    /* 0064de23: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064de26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064de28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064de29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064de2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064de2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064de2c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x64de31u); f_00814298();
    /* 0064de31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0064de34:; BB(0x0064de34);
    /* 0064de34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064de35: ret  */ FN_RET(0x0064de10); r_esp += 4; return;
}

void f_0064de38(void)
{
    FN_ENTER(0x0064de38);
    /* 0064de38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064de39: mov ebp, esp */ r_ebp = r_esp;
    /* 0064de3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064de3d: push 0x8e645c */ { u32 v = 0x8e645cu; r_esp -= 4; W32(r_esp, v); }
    /* 0064de42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064de48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064de49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064de50: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064de53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064de56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064de59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064de5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064de5f: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 0064de64: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064de6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x64de70u); f_005caba4();
    /* 0064de70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064de71: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0064de74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064de76: je 0x64deaf */ if (fZ) goto L_0064deaf;
L_0064de78:; BB(0x0064de78);
    /* 0064de78: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064de7f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064de86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064de89: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064de8f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064de92: call 0x64deb4 */ r_esp -= 4; W32(r_esp, 0x64de97u); f_0064deb4();
    /* 0064de97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064de9a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064dea1:; BB(0x0064dea1);
    /* 0064dea1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064dea4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064deab: mov esp, ebp */ r_esp = r_ebp;
    /* 0064dead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064deae: ret  */ FN_RET(0x0064de38); r_esp += 4; return;
L_0064deaf:; BB(0x0064deaf);
    /* 0064deaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064deb1: jmp 0x64dea1 */ goto L_0064dea1;
}

void f_0064deb4(void) /* sub_64DEB4 */
{
    FN_ENTER(0x0064deb4);
    /* 0064deb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064deb5: mov ebp, esp */ r_ebp = r_esp;
    /* 0064deb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064deb9: push 0x8e6478 */ { u32 v = 0x8e6478u; r_esp -= 4; W32(r_esp, v); }
    /* 0064debe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064dec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064dec5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064decc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064decf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064ded2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064ded5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064ded8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064dedb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064dede: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064dee1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064dee4: call 0x64df84 */ r_esp -= 4; W32(r_esp, 0x64dee9u); f_0064df84();
    /* 0064dee9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064def0: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064def3: mov dword ptr [edx], 0xb30a60 */ W32((u32)(r_edx), 0xb30a60u);
    /* 0064def9: mov eax, dword ptr [0x9c7798] */ r_eax = R32((u32)(0x9c7798u));
    /* 0064defe: mov ecx, dword ptr [0xa8f604] */ r_ecx = R32((u32)(0xa8f604u));
    /* 0064df04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064df06: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064df09: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64df0eu); f_005b8610();
    /* 0064df0e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064df11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064df13: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0064df16: push 0x9c77ac */ { u32 v = 0x9c77acu; r_esp -= 4; W32(r_esp, v); }
    /* 0064df1b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x64df20u); f_007b9a88();
    /* 0064df20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064df23: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64df28u); f_007b4f54();
    /* 0064df28: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064df2b: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0064df2e: mov ecx, dword ptr [edi + 0x3c] */ r_ecx = R32((u32)(r_edi+0x3cu));
    /* 0064df31: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0064df34: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0064df37: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064df3a: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0064df3d: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0064df40: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0064df43: mov esi, dword ptr [edx + 0x38] */ r_esi = R32((u32)(r_edx+0x38u));
    /* 0064df46: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 0064df49: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0064df4c: mov dword ptr [edx + 0x300], esi */ W32((u32)(r_edx+0x300u), r_esi);
    /* 0064df52: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064df55: mov dword ptr [edx + 0x304], ebx */ W32((u32)(r_edx+0x304u), r_ebx);
    /* 0064df5b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064df5e: mov dword ptr [edx + 0x308], eax */ W32((u32)(r_edx+0x308u), r_eax);
    /* 0064df64: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064df67: fld dword ptr [eax + 0x78] */ FPUSH(R_F32((u32)(r_eax+0x78u)));
    /* 0064df6a: fadd dword ptr [0x9c77b0] */ ST(0) = ST(0) + R_F32((u32)(0x9c77b0u));
    /* 0064df70: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0064df73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064df76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064df7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0064df7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064df80: ret 8 */ FN_RET(0x0064deb4); r_esp += 12; return;
}

void f_0064df84(void) /* sub_64DF84 */
{
    FN_ENTER(0x0064df84);
    /* 0064df84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064df85: mov ebp, esp */ r_ebp = r_esp;
    /* 0064df87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064df89: push 0x8e64a8 */ { u32 v = 0x8e64a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0064df8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064df94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064df95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064df9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064df9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064dfa2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064dfa5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0064dfa8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0064dfab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0064dfae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064dfb1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0064dfb4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0064dfb7: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x64dfbcu); f_00770748();
    /* 0064dfbc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064dfc3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064dfc6: mov dword ptr [ecx], 0xb25c20 */ W32((u32)(r_ecx), 0xb25c20u);
    /* 0064dfcc: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064dfd2: call 0x61120c */ r_esp -= 4; W32(r_esp, 0x64dfd7u); f_0061120c();
    /* 0064dfd7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064dfde: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064dfe1: mov eax, dword ptr [0x9c7794] */ r_eax = R32((u32)(0x9c7794u));
    /* 0064dfe6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0064dfe9: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0064dfeb: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0064dfee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064dfef: call dword ptr [ebx + 0x14] */ { u32 t = R32((u32)(r_ebx+0x14u)); r_esp -= 4; W32(r_esp, 0x64dff2u); call_ind(t); }
    /* 0064dff2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064dff5: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 0064dff8: fcomp dword ptr [0x9367f0] */ fx_compare(ST(0), R_F32((u32)(0x9367f0u))); FPOP();
    /* 0064dffe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064e000: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064e001: mov dword ptr [ecx + 0x33c], 0x43c80000 */ W32((u32)(r_ecx+0x33cu), 0x43c80000u);
    /* 0064e00b: mov dword ptr [ecx + 0x340], 0x41200000 */ W32((u32)(r_ecx+0x340u), 0x41200000u);
    /* 0064e015: mov dword ptr [ecx + 0x344], 0x43c80000 */ W32((u32)(r_ecx+0x344u), 0x43c80000u);
    /* 0064e01f: jbe 0x64e02d */ if ((fC||fZ)) goto L_0064e02d;
L_0064e021:; BB(0x0064e021);
    /* 0064e021: mov dword ptr [ecx + 0x368], 1 */ W32((u32)(r_ecx+0x368u), 0x1u);
    /* 0064e02b: jmp 0x64e037 */ goto L_0064e037;
L_0064e02d:; BB(0x0064e02d);
    /* 0064e02d: mov dword ptr [ecx + 0x368], 0 */ W32((u32)(r_ecx+0x368u), 0x0u);
L_0064e037:; BB(0x0064e037);
    /* 0064e037: add ecx, 0x348 */ {  u32 a = r_ecx; u32 b = 0x348u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0064e03d: call 0x611408 */ r_esp -= 4; W32(r_esp, 0x64e042u); f_00611408();
    /* 0064e042: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064e045: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0064e048: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0064e04b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0064e04d: mov dword ptr [eax + 0x364], 0x43960000 */ W32((u32)(r_eax+0x364u), 0x43960000u);
    /* 0064e057: or ecx, 0x60000000 */ {  u32 a = r_ecx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064e05d: mov dword ptr [eax + 0x36c], edx */ W32((u32)(r_eax+0x36cu), r_edx);
    /* 0064e063: mov word ptr [eax + 0x32e], dx */ W16((u32)(r_eax+0x32eu), (u16)r_edx);
    /* 0064e06a: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 0064e06d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064e070: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064e077: mov esp, ebp */ r_esp = r_ebp;
    /* 0064e079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064e07a: ret 8 */ FN_RET(0x0064df84); r_esp += 12; return;
}

