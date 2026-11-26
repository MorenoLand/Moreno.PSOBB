#include "protos.h"

void f_0076c014(void) /* sub_76C014 */
{
    FN_ENTER(0x0076c014);
    /* 0076c014: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c015: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076c016: mov edx, ecx */ r_edx = r_ecx;
    /* 0076c018: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076c01a: mov ebx, eax */ r_ebx = r_eax;
    /* 0076c01c: mov esi, edx */ r_esi = r_edx;
L_0076c01e:; BB(0x0076c01e);
    /* 0076c01e: mov ecx, dword ptr [esi + 0xfb4] */ r_ecx = R32((u32)(r_esi+0xfb4u));
    /* 0076c024: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 0076c027: call 0x7654f4 */ r_esp -= 4; W32(r_esp, 0x76c02cu); f_007654f4();
    /* 0076c02c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076c02f: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076c032: jl 0x76c01e */ if ((fS!=fO)) goto L_0076c01e;
L_0076c034:; BB(0x0076c034);
    /* 0076c034: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076c035: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c036: ret  */ FN_RET(0x0076c014); r_esp += 4; return;
}

void f_0076c038(void) /* sub_76C038 */
{
    FN_ENTER(0x0076c038);
    /* 0076c038: mov eax, dword ptr [0xa9b078] */ r_eax = R32((u32)(0xa9b078u));
    /* 0076c03d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c03f: jne 0x76c058 */ if (!fZ) goto L_0076c058;
L_0076c041:; BB(0x0076c041);
    /* 0076c041: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0076c044: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0076c047: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0076c04a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c04d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c050: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c053: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0076c056: jmp 0x76c077 */ goto L_0076c077;
L_0076c058:; BB(0x0076c058);
    /* 0076c058: jle 0x76c096 */ if ((fZ||fS!=fO)) goto L_0076c096;
L_0076c05a:; BB(0x0076c05a);
    /* 0076c05a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076c05d: jg 0x76c096 */ if ((!fZ&&fS==fO)) goto L_0076c096;
L_0076c05f:; BB(0x0076c05f);
    /* 0076c05f: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0076c062: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0076c065: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0076c068: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c06b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c06e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c071: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0076c074: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
L_0076c077:; BB(0x0076c077);
    /* 0076c077: lea eax, [ecx + 0x3d4] */ r_eax = (u32)(r_ecx+0x3d4u);
    /* 0076c07d: add ecx, 0x414 */ {  u32 a = r_ecx; u32 b = 0x414u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0076c083:; BB(0x0076c083);
    /* 0076c083: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0076c085: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0076c088: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0076c08b: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0076c08e: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076c091: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076c093: ja 0x76c083 */ if ((!fC&&!fZ)) goto L_0076c083;
L_0076c095:; BB(0x0076c095);
    /* 0076c095: ret  */ FN_RET(0x0076c038); r_esp += 4; return;
L_0076c096:; BB(0x0076c096);
    /* 0076c096: ret  */ FN_RET(0x0076c038); r_esp += 4; return;
}

void f_0076c098(void) /* sub_76C098 */
{
    FN_ENTER(0x0076c098);
    /* 0076c098: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0076c09c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076c0a0: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0076c0a3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0076c0a7: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0076c0aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c0ac: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0076c0af: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0076c0b2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0076c0b7: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0076c0ba: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0076c0bd: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0076c0c0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0076c0c3: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0076c0c6: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0076c0c9: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0076c0cc: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0076c0cf: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0076c0d2: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0076c0d5: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0076c0d8: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0076c0db: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0076c0de: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 0076c0e1: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 0076c0e4: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0076c0e7: mov dword ptr [ecx + 0x54], eax */ W32((u32)(r_ecx+0x54u), r_eax);
    /* 0076c0ea: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0076c0ee: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0076c0f1: ret 0x10 */ FN_RET(0x0076c098); r_esp += 20; return;
}

void f_0076c0f4(void) /* sub_76C0F4 */
{
    FN_ENTER(0x0076c0f4);
    /* 0076c0f4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c0f7: mov edx, ecx */ r_edx = r_ecx;
    /* 0076c0f9: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0076c0fc: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0076c0ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076c101: jl 0x76c13c */ if ((fS!=fO)) goto L_0076c13c;
L_0076c103:; BB(0x0076c103);
    /* 0076c103: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076c106: jg 0x76c13c */ if ((!fZ&&fS==fO)) goto L_0076c13c;
L_0076c108:; BB(0x0076c108);
    /* 0076c108: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0076c10b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076c10d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076c10f: jle 0x76c13c */ if ((fZ||fS!=fO)) goto L_0076c13c;
L_0076c111:; BB(0x0076c111);
    /* 0076c111: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0076c115: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076c117: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0076c11a: mov esi, edx */ r_esi = r_edx;
L_0076c11c:; BB(0x0076c11c);
    /* 0076c11c: mov edx, dword ptr [esi + ebx*4 + 0x14] */ r_edx = R32((u32)(r_esi+r_ebx*4+0x14u));
    /* 0076c120: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076c122: jl 0x76c12e */ if ((fS!=fO)) goto L_0076c12e;
L_0076c124:; BB(0x0076c124);
    /* 0076c124: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076c125: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x76c12au); f_008148d4();
    /* 0076c12a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c12b: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
L_0076c12e:; BB(0x0076c12e);
    /* 0076c12e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076c131: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076c133: jl 0x76c11c */ if ((fS!=fO)) goto L_0076c11c;
L_0076c135:; BB(0x0076c135);
    /* 0076c135: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0076c139: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0076c13c:; BB(0x0076c13c);
    /* 0076c13c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c13f: ret  */ FN_RET(0x0076c0f4); r_esp += 4; return;
}

void f_0076c140(void) /* sub_76C140 */
{
    FN_ENTER(0x0076c140);
    /* 0076c140: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0076c143: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0076c146: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c148: jl 0x76c15e */ if ((fS!=fO)) goto L_0076c15e;
L_0076c14a:; BB(0x0076c14a);
    /* 0076c14a: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076c14d: jg 0x76c15e */ if ((!fZ&&fS==fO)) goto L_0076c15e;
L_0076c14f:; BB(0x0076c14f);
    /* 0076c14f: mov eax, dword ptr [ecx + eax*4 + 0x14] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x14u));
    /* 0076c153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c155: jl 0x76c15e */ if ((fS!=fO)) goto L_0076c15e;
L_0076c157:; BB(0x0076c157);
    /* 0076c157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c158: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x76c15du); f_008148d4();
    /* 0076c15d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0076c15e:; BB(0x0076c15e);
    /* 0076c15e: ret  */ FN_RET(0x0076c140); r_esp += 4; return;
}

void f_0076c160(void) /* sub_76C160 */
{
    FN_ENTER(0x0076c160);
    /* 0076c160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076c161: mov ebp, esp */ r_ebp = r_esp;
    /* 0076c163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076c165: push 0x8f3d58 */ { u32 v = 0x8f3d58u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c16a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076c170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076c178: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c17b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076c17e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0076c181: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0076c184: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0076c187: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0076c18a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0076c18d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076c194: mov eax, ecx */ r_eax = r_ecx;
    /* 0076c196: mov dword ptr [eax], 0xb43ab8 */ W32((u32)(r_eax), 0xb43ab8u);
    /* 0076c19c: mov eax, dword ptr [eax + 0xac] */ r_eax = R32((u32)(r_eax+0xacu));
    /* 0076c1a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c1a4: je 0x76c29c */ if (fZ) goto L_0076c29c;
L_0076c1aa:; BB(0x0076c1aa);
    /* 0076c1aa: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0076c1ad: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c1af: je 0x76c1d1 */ if (fZ) goto L_0076c1d1;
L_0076c1b1:; BB(0x0076c1b1);
    /* 0076c1b1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076c1b5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c1ba: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076c1be: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0076c1c4: mov dword ptr [edx + 0x10], 0 */ W32((u32)(r_edx+0x10u), 0x0u);
    /* 0076c1cb: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
L_0076c1d1:; BB(0x0076c1d1);
    /* 0076c1d1: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
    /* 0076c1d4: mov edx, dword ptr [ecx - 4] */ r_edx = R32((u32)(r_ecx+0xfffffffcu));
    /* 0076c1d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c1d9: je 0x76c201 */ if (fZ) goto L_0076c201;
L_0076c1db:; BB(0x0076c1db);
    /* 0076c1db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c1de: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076c1e2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c1e7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076c1eb: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0076c1f1: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0076c1f8: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0076c1fe: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
L_0076c201:; BB(0x0076c201);
    /* 0076c201: mov edx, dword ptr [ecx - 8] */ r_edx = R32((u32)(r_ecx+0xfffffff8u));
    /* 0076c204: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c206: je 0x76c22e */ if (fZ) goto L_0076c22e;
L_0076c208:; BB(0x0076c208);
    /* 0076c208: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c20b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076c20f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c214: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076c218: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0076c21e: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0076c225: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0076c22b: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
L_0076c22e:; BB(0x0076c22e);
    /* 0076c22e: mov edx, dword ptr [ecx - 0xc] */ r_edx = R32((u32)(r_ecx+0xfffffff4u));
    /* 0076c231: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c233: je 0x76c25b */ if (fZ) goto L_0076c25b;
L_0076c235:; BB(0x0076c235);
    /* 0076c235: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c238: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076c23c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c241: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076c245: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0076c24b: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0076c252: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0076c258: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
L_0076c25b:; BB(0x0076c25b);
    /* 0076c25b: mov edx, dword ptr [ecx - 0x10] */ r_edx = R32((u32)(r_ecx+0xfffffff0u));
    /* 0076c25e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c260: je 0x76c284 */ if (fZ) goto L_0076c284;
L_0076c262:; BB(0x0076c262);
    /* 0076c262: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c265: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0076c269: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c26e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0076c272: mov edx, dword ptr [ecx + 0xac] */ r_edx = R32((u32)(r_ecx+0xacu));
    /* 0076c278: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0076c27e: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
L_0076c284:; BB(0x0076c284);
    /* 0076c284: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c286: je 0x76c29c */ if (fZ) goto L_0076c29c;
L_0076c288:; BB(0x0076c288);
    /* 0076c288: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c289: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76c28eu); f_00857e98();
    /* 0076c28e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c28f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c292: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
L_0076c29c:; BB(0x0076c29c);
    /* 0076c29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c29f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c2a0: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x76c2a5u); f_007b4e84();
    /* 0076c2a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c2a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c2a9: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x76c2aeu); f_007b9c8c();
    /* 0076c2ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076c2b5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c2b8: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x76c2bdu); f_007b4aec();
    /* 0076c2bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0076c2c0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c2c2: jne 0x76c2d4 */ if (!fZ) goto L_0076c2d4;
L_0076c2c4:; BB(0x0076c2c4);
    /* 0076c2c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076c2c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076c2ce: mov esp, ebp */ r_esp = r_ebp;
    /* 0076c2d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076c2d1: ret 4 */ FN_RET(0x0076c160); r_esp += 8; return;
L_0076c2d4:; BB(0x0076c2d4);
    /* 0076c2d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c2d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c2d8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76c2ddu); f_005c2f74();
    /* 0076c2dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c2de: jmp 0x76c2c4 */ goto L_0076c2c4;
}

void f_0076c2e0(void) /* sub_76C2E0 */
{
    FN_ENTER(0x0076c2e0);
    /* 0076c2e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c2e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c2e2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c2e5: mov esi, ecx */ r_esi = r_ecx;
    /* 0076c2e7: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 0076c2ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076c2ef: jle 0x76c30f */ if ((fZ||fS!=fO)) goto L_0076c30f;
L_0076c2f1:; BB(0x0076c2f1);
    /* 0076c2f1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0076c2f4: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 0076c2fa: je 0x76c302 */ if (fZ) goto L_0076c302;
L_0076c2fc:; BB(0x0076c2fc);
    /* 0076c2fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c2ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c300: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076c301: ret  */ FN_RET(0x0076c2e0); r_esp += 4; return;
L_0076c302:; BB(0x0076c302);
    /* 0076c302: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c304: call 0x76c974 */ r_esp -= 4; W32(r_esp, 0x76c309u); f_0076c974();
    /* 0076c309: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c30c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c30d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076c30e: ret  */ FN_RET(0x0076c2e0); r_esp += 4; return;
L_0076c30f:; BB(0x0076c30f);
    /* 0076c30f: mov edx, dword ptr [esi + 0xb4] */ r_edx = R32((u32)(r_esi+0xb4u));
    /* 0076c315: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0076c318: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 0076c31e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076c320: jle 0x76c47a */ if ((fZ||fS!=fO)) goto L_0076c47a;
L_0076c326:; BB(0x0076c326);
    /* 0076c326: fld dword ptr [0x977948] */ FPUSH(R_F32((u32)(0x977948u)));
    /* 0076c32c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0076c32f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0076c332: fmul dword ptr [0x97794c] */ ST(0) = ST(0) * R_F32((u32)(0x97794cu));
    /* 0076c338: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076c33a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076c33c: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076c342: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c344: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076c345: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076c347: jb 0x76c34b */ if (fC) goto L_0076c34b;
L_0076c349:; BB(0x0076c349);
    /* 0076c349: fst st(1) */ ST(1) = ST(0);
L_0076c34b:; BB(0x0076c34b);
    /* 0076c34b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076c34d: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0076c353: call 0x76c490 */ r_esp -= 4; W32(r_esp, 0x76c358u); f_0076c490();
    /* 0076c358: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c35a: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0076c35d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c35e: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c360: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76c365u); f_007b4c58();
    /* 0076c365: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c367: call 0x76c4ec */ r_esp -= 4; W32(r_esp, 0x76c36cu); f_0076c4ec();
    /* 0076c36c: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
    /* 0076c372: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c374: je 0x76c474 */ if (fZ) goto L_0076c474;
L_0076c37a:; BB(0x0076c37a);
    /* 0076c37a: mov eax, dword ptr [0xa9b0a8] */ r_eax = R32((u32)(0xa9b0a8u));
    /* 0076c37f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c381: je 0x76c474 */ if (fZ) goto L_0076c474;
L_0076c387:; BB(0x0076c387);
    /* 0076c387: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0076c389: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c38b: je 0x76c3b6 */ if (fZ) goto L_0076c3b6;
L_0076c38d:; BB(0x0076c38d);
    /* 0076c38d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0076c38f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c391: je 0x76c3b6 */ if (fZ) goto L_0076c3b6;
L_0076c393:; BB(0x0076c393);
    /* 0076c393: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0076c396: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0076c399: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0076c39c: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0076c39f: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0076c3a2: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0076c3a5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076c3a7: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0076c3aa: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0076c3ad: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0076c3b0: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
L_0076c3b6:; BB(0x0076c3b6);
    /* 0076c3b6: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0076c3b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c3bb: je 0x76c3e7 */ if (fZ) goto L_0076c3e7;
L_0076c3bd:; BB(0x0076c3bd);
    /* 0076c3bd: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0076c3c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c3c2: je 0x76c3e7 */ if (fZ) goto L_0076c3e7;
L_0076c3c4:; BB(0x0076c3c4);
    /* 0076c3c4: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0076c3c7: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0076c3ca: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0076c3cd: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0076c3d0: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0076c3d3: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0076c3d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076c3d8: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0076c3db: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0076c3de: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0076c3e1: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
L_0076c3e7:; BB(0x0076c3e7);
    /* 0076c3e7: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 0076c3ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c3ec: je 0x76c418 */ if (fZ) goto L_0076c418;
L_0076c3ee:; BB(0x0076c3ee);
    /* 0076c3ee: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0076c3f1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c3f3: je 0x76c418 */ if (fZ) goto L_0076c418;
L_0076c3f5:; BB(0x0076c3f5);
    /* 0076c3f5: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0076c3f8: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0076c3fb: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0076c3fe: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0076c401: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0076c404: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0076c407: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076c409: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0076c40c: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0076c40f: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0076c412: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
L_0076c418:; BB(0x0076c418);
    /* 0076c418: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0076c41b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c41d: je 0x76c449 */ if (fZ) goto L_0076c449;
L_0076c41f:; BB(0x0076c41f);
    /* 0076c41f: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0076c422: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c424: je 0x76c449 */ if (fZ) goto L_0076c449;
L_0076c426:; BB(0x0076c426);
    /* 0076c426: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0076c429: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0076c42c: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0076c42f: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0076c432: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0076c435: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0076c438: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076c43a: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 0076c43d: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0076c440: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0076c443: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
L_0076c449:; BB(0x0076c449);
    /* 0076c449: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0076c44c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c44e: je 0x76c474 */ if (fZ) goto L_0076c474;
L_0076c450:; BB(0x0076c450);
    /* 0076c450: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0076c453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c455: je 0x76c474 */ if (fZ) goto L_0076c474;
L_0076c457:; BB(0x0076c457);
    /* 0076c457: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0076c45a: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0076c45d: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0076c460: fadd dword ptr [esi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3cu));
    /* 0076c463: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 0076c466: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0076c469: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0076c46b: fstp dword ptr [edx + 0x38] */ W_F32((u32)(r_edx+0x38u), ST(0)); FPOP();
    /* 0076c46e: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 0076c471: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
L_0076c474:; BB(0x0076c474);
    /* 0076c474: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c477: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c478: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076c479: ret  */ FN_RET(0x0076c2e0); r_esp += 4; return;
L_0076c47a:; BB(0x0076c47a);
    /* 0076c47a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0076c47e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c483: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0076c487: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c48a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c48b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076c48c: ret  */ FN_RET(0x0076c2e0); r_esp += 4; return;
}

void f_0076c490(void) /* sub_76C490 */
{
    FN_ENTER(0x0076c490);
    /* 0076c490: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c491: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c494: mov esi, ecx */ r_esi = r_ecx;
    /* 0076c496: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0076c49a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0076c4a2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0076c4a6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076c4ab: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0076c4b2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76c4b7u); f_0082d990();
    /* 0076c4b7: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0076c4ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076c4bc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76c4c1u); f_0082d8bc();
    /* 0076c4c1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076c4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c4c5: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0076c4c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076c4cb: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x76c4d0u); f_0082eab8();
    /* 0076c4d0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76c4d5u); f_0082da80();
    /* 0076c4d5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0076c4d8: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0076c4db: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c4dd: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x76c4e2u); f_0082ebac();
    /* 0076c4e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c4e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c4e6: ret 4 */ FN_RET(0x0076c490); r_esp += 8; return;
}

void f_0076c4ec(void) /* sub_76C4EC */
{
    FN_ENTER(0x0076c4ec);
    /* 0076c4ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c4ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076c4ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076c4ef: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076c4f1: mov esi, dword ptr [0xa9b07c] */ r_esi = R32((u32)(0xa9b07cu));
    /* 0076c4f7: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0076c4fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076c4fc: call 0x76c548 */ r_esp -= 4; W32(r_esp, 0x76c501u); f_0076c548();
    /* 0076c501: fld dword ptr [0xa9b0a4] */ FPUSH(R_F32((u32)(0xa9b0a4u)));
    /* 0076c507: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0076c509: fmul dword ptr [0x97793c] */ ST(0) = ST(0) * R_F32((u32)(0x97793cu));
    /* 0076c50f: fld dword ptr [ebp + 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xb0u)));
    /* 0076c515: fmul dword ptr [0x977940] */ ST(0) = ST(0) * R_F32((u32)(0x977940u));
    /* 0076c51b: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076c51e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076c520: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0076c524: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0076c528: mov dword ptr [esp], 2 */ W32((u32)(r_esp), 0x2u);
    /* 0076c52f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0076c533: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c535: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0076c53d: call 0x76a788 */ r_esp -= 4; W32(r_esp, 0x76c542u); f_0076a788();
    /* 0076c542: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076c543: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076c544: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c545: ret  */ FN_RET(0x0076c4ec); r_esp += 4; return;
}

void f_0076c548(void) /* sub_76C548 */
{
    FN_ENTER(0x0076c548);
    /* 0076c548: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c54b: mov eax, ecx */ r_eax = r_ecx;
    /* 0076c54d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0076c550: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 0076c556: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0076c559: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 0076c55f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0076c563: mov edx, dword ptr [eax + 0xc4] */ r_edx = R32((u32)(r_eax+0xc4u));
    /* 0076c569: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076c56c: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0076c570: mov edx, eax */ r_edx = r_eax;
    /* 0076c572: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x76c577u); f_0082f9c4();
    /* 0076c577: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076c57a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0076c57c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0076c580: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0076c582: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0076c584: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c585: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0076c588: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x76c58du); f_0082dc9c();
    /* 0076c58d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c590: ret  */ FN_RET(0x0076c548); r_esp += 4; return;
}

void f_0076c594(void) /* sub_76C594 */
{
    FN_ENTER(0x0076c594);
    /* 0076c594: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c595: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c596: mov esi, ecx */ r_esi = r_ecx;
    /* 0076c598: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 0076c59e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c5a0: jle 0x76c5a5 */ if ((fZ||fS!=fO)) goto L_0076c5a5;
L_0076c5a2:; BB(0x0076c5a2);
    /* 0076c5a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c5a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c5a4: ret  */ FN_RET(0x0076c594); r_esp += 4; return;
L_0076c5a5:; BB(0x0076c5a5);
    /* 0076c5a5: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c5a7: call 0x76c548 */ r_esp -= 4; W32(r_esp, 0x76c5acu); f_0076c548();
    /* 0076c5ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0076c5af: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076c5b2: fmul dword ptr [0xa9b0a4] */ ST(0) = ST(0) * R_F32((u32)(0xa9b0a4u));
    /* 0076c5b8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0076c5bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0076c5c0: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0076c5c5: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076c5c8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0076c5cd: lea edx, [esi + 0xc8] */ r_edx = (u32)(r_esi+0xc8u);
    /* 0076c5d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076c5d4: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x76c5d9u); f_0082d710();
    /* 0076c5d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c5da: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76c5dfu); f_0082d7b0();
    /* 0076c5df: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0076c5e2: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76c5e7u); f_0082d838();
    /* 0076c5e7: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0076c5ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076c5ec: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76c5f1u); f_0082d8bc();
    /* 0076c5f1: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076c5f4: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0076c5f8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0076c5fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076c5fd: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0076c605: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0076c60d: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x76c612u); f_0082fa0c();
    /* 0076c612: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0076c615: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76c61au); f_00829cc8();
    /* 0076c61a: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076c61d: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x76c622u); f_0082e1e8();
    /* 0076c622: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c623: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76c628u); f_0082da80();
    /* 0076c628: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c62d: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x76c632u); f_0082d710();
    /* 0076c632: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0076c637: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0076c63c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076c63f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076c640: ret  */ FN_RET(0x0076c594); r_esp += 4; return;
}

void f_0076c644(void) /* sub_76C644 */
{
    FN_ENTER(0x0076c644);
    /* 0076c644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076c645: mov ebp, esp */ r_ebp = r_esp;
    /* 0076c647: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076c649: push 0x8f3d74 */ { u32 v = 0x8f3d74u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c64e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076c654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c655: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076c65c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c65f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076c662: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076c665: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076c668: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076c66b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076c66e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076c671: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x76c676u); f_007b4b48();
    /* 0076c676: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076c67d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c680: mov dword ptr [eax], 0xb43ab8 */ W32((u32)(r_eax), 0xb43ab8u);
    /* 0076c686: mov ecx, dword ptr [0xa9b0ac] */ r_ecx = R32((u32)(0xa9b0acu));
    /* 0076c68c: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 0076c696: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076c698: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 0076c69e: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 0076c6a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076c6a5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76c6aau); f_005b8610();
    /* 0076c6aa: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c6ad: mov ecx, dword ptr [0xa9b0ac] */ r_ecx = R32((u32)(0xa9b0acu));
    /* 0076c6b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c6b5: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0076c6b8: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x76c6bdu); f_005b8624();
    /* 0076c6bd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c6c0: mov dword ptr [ecx + 0xb0], 0x41200000 */ W32((u32)(r_ecx+0xb0u), 0x41200000u);
    /* 0076c6ca: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0076c6cd: mov dword ptr [ecx + 0xb4], 0x14 */ W32((u32)(r_ecx+0xb4u), 0x14u);
    /* 0076c6d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c6d9: mov dword ptr [ecx + 0xc8], 0x3f800000 */ W32((u32)(r_ecx+0xc8u), 0x3f800000u);
    /* 0076c6e3: mov dword ptr [ecx + 0xcc], 0x3f800000 */ W32((u32)(r_ecx+0xccu), 0x3f800000u);
    /* 0076c6ed: mov dword ptr [ecx + 0xd0], 0x3f800000 */ W32((u32)(r_ecx+0xd0u), 0x3f800000u);
    /* 0076c6f7: mov dword ptr [ecx + 0xd4], 0x3f800000 */ W32((u32)(r_ecx+0xd4u), 0x3f800000u);
    /* 0076c701: push 0x9f76bc */ { u32 v = 0x9f76bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076c706: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x76c70bu); f_007b9a88();
    /* 0076c70b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c70e: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x76c713u); f_007b4f54();
    /* 0076c713: mov esi, dword ptr [0xa9b068] */ r_esi = R32((u32)(0xa9b068u));
    /* 0076c719: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c71b: je 0x76c759 */ if (fZ) goto L_0076c759;
L_0076c71d:; BB(0x0076c71d);
    /* 0076c71d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c71f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76c724u); f_008581c5();
    /* 0076c724: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c725: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c728: mov dword ptr [edx + 0xac], eax */ W32((u32)(r_edx+0xacu), r_eax);
    /* 0076c72e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0076c730:; BB(0x0076c730);
    /* 0076c730: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076c732: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c733: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c734: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c736: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c738: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0076c73a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076c73b: call 0x661448 */ r_esp -= 4; W32(r_esp, 0x76c740u); f_00661448();
    /* 0076c740: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c743: mov edi, dword ptr [edx + 0xac] */ r_edi = R32((u32)(r_edx+0xacu));
    /* 0076c749: mov dword ptr [edi + ebx*4], eax */ W32((u32)(r_edi+r_ebx*4), r_eax);
    /* 0076c74c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076c74f: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076c752: jge 0x76c788 */ if ((fS==fO)) goto L_0076c788;
L_0076c754:; BB(0x0076c754);
    /* 0076c754: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c757: jmp 0x76c730 */ goto L_0076c730;
L_0076c759:; BB(0x0076c759);
    /* 0076c759: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c75c: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
L_0076c766:; BB(0x0076c766);
    /* 0076c766: mov edx, dword ptr [0x9f76b8] */ r_edx = R32((u32)(0x9f76b8u));
    /* 0076c76c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076c76f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076c772: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c775: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0076c778: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076c77b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076c782: mov esp, ebp */ r_esp = r_ebp;
    /* 0076c784: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076c785: ret 4 */ FN_RET(0x0076c644); r_esp += 8; return;
L_0076c788:; BB(0x0076c788);
    /* 0076c788: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c78b: jmp 0x76c766 */ goto L_0076c766;
}

void f_0076c790(void) /* sub_76C790 */
{
    FN_ENTER(0x0076c790);
    /* 0076c790: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076c794: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0076c79a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c79c: jle 0x76c7a1 */ if ((fZ||fS!=fO)) goto L_0076c7a1;
L_0076c79e:; BB(0x0076c79e);
    /* 0076c79e: ret 4 */ FN_RET(0x0076c790); r_esp += 8; return;
L_0076c7a1:; BB(0x0076c7a1);
    /* 0076c7a1: call 0x76c974 */ r_esp -= 4; W32(r_esp, 0x76c7a6u); f_0076c974();
    /* 0076c7a6: ret 4 */ FN_RET(0x0076c790); r_esp += 8; return;
}

void f_0076c7ac(void) /* sub_76C7AC */
{
    FN_ENTER(0x0076c7ac);
    /* 0076c7ac: mov eax, dword ptr [0xa9b0a8] */ r_eax = R32((u32)(0xa9b0a8u));
    /* 0076c7b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c7b3: je 0x76c7c6 */ if (fZ) goto L_0076c7c6;
L_0076c7b5:; BB(0x0076c7b5);
    /* 0076c7b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c7b6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x76c7bbu); f_00857e98();
    /* 0076c7bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c7bc: mov dword ptr [0xa9b0a8], 0 */ W32((u32)(0xa9b0a8u), 0x0u);
L_0076c7c6:; BB(0x0076c7c6);
    /* 0076c7c6: mov ecx, dword ptr [0xa9b0ac] */ r_ecx = R32((u32)(0xa9b0acu));
    /* 0076c7cc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c7ce: je 0x76c7e3 */ if (fZ) goto L_0076c7e3;
L_0076c7d0:; BB(0x0076c7d0);
    /* 0076c7d0: je 0x76c7d9 */ if (fZ) goto L_0076c7d9;
L_0076c7d2:; BB(0x0076c7d2);
    /* 0076c7d2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c7d4: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76c7d9u); f_004066a8();
L_0076c7d9:; BB(0x0076c7d9);
    /* 0076c7d9: mov dword ptr [0xa9b0ac], 0 */ W32((u32)(0xa9b0acu), 0x0u);
L_0076c7e3:; BB(0x0076c7e3);
    /* 0076c7e3: ret  */ FN_RET(0x0076c7ac); r_esp += 4; return;
}

void f_0076c7e4(void) /* sub_76C7E4 */
{
    FN_ENTER(0x0076c7e4);
    /* 0076c7e4: mov dword ptr [0xa9b0a4], 0x3b8efa33 */ W32((u32)(0xa9b0a4u), 0x3b8efa33u);
    /* 0076c7ee: mov dword ptr [0x9f76c8], 0x41200000 */ W32((u32)(0x9f76c8u), 0x41200000u);
    /* 0076c7f8: mov dword ptr [0x9f76cc], 0x42f00000 */ W32((u32)(0x9f76ccu), 0x42f00000u);
    /* 0076c802: ret  */ FN_RET(0x0076c7e4); r_esp += 4; return;
}

void f_0076c804(void) /* sub_76C804 */
{
    FN_ENTER(0x0076c804);
    /* 0076c804: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076c805: mov ebp, esp */ r_ebp = r_esp;
    /* 0076c807: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076c809: push 0x8f3d9c */ { u32 v = 0x8f3d9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076c80e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076c814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c815: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076c81c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c81f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076c822: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076c825: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076c828: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076c82b: mov ecx, dword ptr [0xa9b0ac] */ r_ecx = R32((u32)(0xa9b0acu));
    /* 0076c831: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c833: je 0x76c919 */ if (fZ) goto L_0076c919;
L_0076c839:; BB(0x0076c839);
    /* 0076c839: mov eax, dword ptr [0xa9b0a8] */ r_eax = R32((u32)(0xa9b0a8u));
    /* 0076c83e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c840: je 0x76c856 */ if (fZ) goto L_0076c856;
L_0076c842:; BB(0x0076c842);
    /* 0076c842: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076c845: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076c848: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076c84b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076c852: mov esp, ebp */ r_esp = r_ebp;
    /* 0076c854: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076c855: ret  */ FN_RET(0x0076c804); r_esp += 4; return;
L_0076c856:; BB(0x0076c856);
    /* 0076c856: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c858: je 0x76c842 */ if (fZ) goto L_0076c842;
L_0076c85a:; BB(0x0076c85a);
    /* 0076c85a: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0076c860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c862: je 0x76c842 */ if (fZ) goto L_0076c842;
L_0076c864:; BB(0x0076c864);
    /* 0076c864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c866: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76c86bu); f_005b8610();
    /* 0076c86b: mov ebx, eax */ r_ebx = r_eax;
    /* 0076c86d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c86f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76c874u); f_008581c5();
    /* 0076c874: mov esi, eax */ r_esi = r_eax;
    /* 0076c876: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076c879: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0076c87c: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0076c87f: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0076c882: mov dword ptr [0xa9b0a8], esi */ W32((u32)(0xa9b0a8u), r_esi);
    /* 0076c888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c88a: je 0x76c900 */ if (fZ) goto L_0076c900;
L_0076c88c:; BB(0x0076c88c);
    /* 0076c88c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0076c88e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
L_0076c891:; BB(0x0076c891);
    /* 0076c891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c893: je 0x76c8f1 */ if (fZ) goto L_0076c8f1;
L_0076c895:; BB(0x0076c895);
    /* 0076c895: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c89b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0076c89e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
L_0076c8a1:; BB(0x0076c8a1);
    /* 0076c8a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c8a3: je 0x76c8e2 */ if (fZ) goto L_0076c8e2;
L_0076c8a5:; BB(0x0076c8a5);
    /* 0076c8a5: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c8ab: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0076c8ae: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
L_0076c8b1:; BB(0x0076c8b1);
    /* 0076c8b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c8b3: je 0x76c8d3 */ if (fZ) goto L_0076c8d3;
L_0076c8b5:; BB(0x0076c8b5);
    /* 0076c8b5: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c8bb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0076c8be: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
L_0076c8c1:; BB(0x0076c8c1);
    /* 0076c8c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076c8c3: je 0x76c908 */ if (fZ) goto L_0076c908;
L_0076c8c5:; BB(0x0076c8c5);
    /* 0076c8c5: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c8cb: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0076c8ce: jmp 0x76c842 */ goto L_0076c842;
L_0076c8d3:; BB(0x0076c8d3);
    /* 0076c8d3: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c8d9: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 0076c8e0: jmp 0x76c8c1 */ goto L_0076c8c1;
L_0076c8e2:; BB(0x0076c8e2);
    /* 0076c8e2: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c8e8: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0076c8ef: jmp 0x76c8b1 */ goto L_0076c8b1;
L_0076c8f1:; BB(0x0076c8f1);
    /* 0076c8f1: mov edx, dword ptr [0xa9b0a8] */ r_edx = R32((u32)(0xa9b0a8u));
    /* 0076c8f7: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 0076c8fe: jmp 0x76c8a1 */ goto L_0076c8a1;
L_0076c900:; BB(0x0076c900);
    /* 0076c900: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 0076c906: jmp 0x76c891 */ goto L_0076c891;
L_0076c908:; BB(0x0076c908);
    /* 0076c908: mov eax, dword ptr [0xa9b0a8] */ r_eax = R32((u32)(0xa9b0a8u));
    /* 0076c90d: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0076c914: jmp 0x76c842 */ goto L_0076c842;
L_0076c919:; BB(0x0076c919);
    /* 0076c919: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076c920: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c925: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76c92au); f_008581c5();
    /* 0076c92a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076c92b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076c92e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076c930: je 0x76c970 */ if (fZ) goto L_0076c970;
L_0076c932:; BB(0x0076c932);
    /* 0076c932: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076c939: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076c940: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076c945: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c948: push 0x9f76a8 */ { u32 v = 0x9f76a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c94d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c94f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x76c954u); f_005b7a84();
    /* 0076c954: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076c957: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076c95e:; BB(0x0076c95e);
    /* 0076c95e: mov dword ptr [0xa9b0ac], ecx */ W32((u32)(0xa9b0acu), r_ecx);
    /* 0076c964: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076c96b: jmp 0x76c839 */ goto L_0076c839;
L_0076c970:; BB(0x0076c970);
    /* 0076c970: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076c972: jmp 0x76c95e */ goto L_0076c95e;
}

void f_0076c974(void) /* sub_76C974 */
{
    FN_ENTER(0x0076c974);
    /* 0076c974: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076c975: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076c976: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076c979: mov esi, ecx */ r_esi = r_ecx;
    /* 0076c97b: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 0076c981: lea ebp, [esi + 0xbc] */ r_ebp = (u32)(r_esi+0xbcu);
    /* 0076c987: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076c988: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c98a: call 0x767c98 */ r_esp -= 4; W32(r_esp, 0x76c98fu); f_00767c98();
    /* 0076c98f: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 0076c995: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076c998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c999: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c99b: call 0x767c98 */ r_esp -= 4; W32(r_esp, 0x76c9a0u); f_00767c98();
    /* 0076c9a0: fld dword ptr [0x977920] */ FPUSH(R_F32((u32)(0x977920u)));
    /* 0076c9a6: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0076c9aa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0076c9ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076c9b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076c9b3: mov ecx, esi */ r_ecx = r_esi;
    /* 0076c9b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076c9b6: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76c9bbu); f_007b4c58();
    /* 0076c9bb: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0076c9be: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0076c9c1: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0076c9c4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076c9c8: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0076c9cb: mov edx, ebp */ r_edx = r_ebp;
    /* 0076c9cd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076c9d1: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0076c9d4: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x76c9d9u); f_0082f9c4();
    /* 0076c9d9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0076c9db: mov dword ptr [esi + 0x64], ebp */ W32((u32)(r_esi+0x64u), r_ebp);
    /* 0076c9de: mov dword ptr [esi + 0x5c], ebp */ W32((u32)(r_esi+0x5cu), r_ebp);
    /* 0076c9e1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0076c9e4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0076c9e8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0076c9ea: fmul qword ptr [0x977918] */ ST(0) = ST(0) * R_F64((u32)(0x977918u));
    /* 0076c9f0: fdiv qword ptr [0x977910] */ ST(0) = ST(0) / R_F64((u32)(0x977910u));
    /* 0076c9f6: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0076c9fa: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0076c9ff: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076ca04: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0076ca08: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0076ca0c: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0076ca0f: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0076ca13: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ca16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ca17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ca18: ret  */ FN_RET(0x0076c974); r_esp += 4; return;
}

void f_0076ca1c(void) /* sub_76CA1C */
{
    FN_ENTER(0x0076ca1c);
    /* 0076ca1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ca1d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076ca1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076ca21: call 0x76ca40 */ r_esp -= 4; W32(r_esp, 0x76ca26u); f_0076ca40();
    /* 0076ca26: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076ca2a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ca2c: jne 0x76ca32 */ if (!fZ) goto L_0076ca32;
L_0076ca2e:; BB(0x0076ca2e);
    /* 0076ca2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ca2f: ret 4 */ FN_RET(0x0076ca1c); r_esp += 8; return;
L_0076ca32:; BB(0x0076ca32);
    /* 0076ca32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ca33: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76ca38u); f_005c2f74();
    /* 0076ca38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076ca39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ca3a: ret 4 */ FN_RET(0x0076ca1c); r_esp += 8; return;
}

void f_0076ca40(void) /* sub_76CA40 */
{
    FN_ENTER(0x0076ca40);
    /* 0076ca40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ca41: mov ebp, esp */ r_ebp = r_esp;
    /* 0076ca43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076ca45: push 0x8f3db8 */ { u32 v = 0x8f3db8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ca4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076ca50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ca51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076ca58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076ca5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076ca5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076ca61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076ca64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076ca67: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076ca6a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076ca6d: mov dword ptr [ecx], 0xb43b60 */ W32((u32)(r_ecx), 0xb43b60u);
    /* 0076ca73: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076ca7a: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x76ca7fu); f_00765570();
    /* 0076ca7f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076ca82: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076ca89: mov esp, ebp */ r_esp = r_ebp;
    /* 0076ca8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ca8c: ret  */ FN_RET(0x0076ca40); r_esp += 4; return;
}

void f_0076ca90(void) /* sub_76CA90 */
{
    FN_ENTER(0x0076ca90);
    /* 0076ca90: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076ca96: lea eax, [edx - 0x17] */ r_eax = (u32)(r_edx+0xffffffe9u);
    /* 0076ca99: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0076ca9c: ja 0x76cb91 */ if ((!fC&&!fZ)) goto L_0076cb91;
L_0076caa2:; BB(0x0076caa2);
    /* 0076caa2: mov eax, dword ptr [eax*4 + 0x977980] */ r_eax = R32((u32)(r_eax*4+0x977980u));
    /* 0076caa9: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076ca90); r_esp += 4; return;
}

void f_0076caab(void)
{
    FN_ENTER(0x0076caab);
    /* 0076caab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076caad: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0076caaf: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cab4u); f_00765834();
    /* 0076cab4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cab7: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cabd: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076caab); r_esp += 4; return;
}

void f_0076cac2(void)
{
    FN_ENTER(0x0076cac2);
    /* 0076cac2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cac4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cac6: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cacbu); f_00765834();
    /* 0076cacb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cace: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cad4: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cac2); r_esp += 4; return;
}

void f_0076cad9(void)
{
    FN_ENTER(0x0076cad9);
    /* 0076cad9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cadb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cadd: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cae2u); f_00765834();
    /* 0076cae2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cae5: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076caeb: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cad9); r_esp += 4; return;
}

void f_0076caf0(void)
{
    FN_ENTER(0x0076caf0);
    /* 0076caf0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076caf2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0076caf4: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76caf9u); f_00765834();
    /* 0076caf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cafc: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb02: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076caf0); r_esp += 4; return;
}

void f_0076cb07(void)
{
    FN_ENTER(0x0076cb07);
    /* 0076cb07: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb09: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb0b: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb10u); f_00765834();
    /* 0076cb10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb13: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb19: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb07); r_esp += 4; return;
}

void f_0076cb1b(void)
{
    FN_ENTER(0x0076cb1b);
    /* 0076cb1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb1d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb1f: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb24u); f_00765834();
    /* 0076cb24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb27: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb2d: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb1b); r_esp += 4; return;
}

void f_0076cb2f(void)
{
    FN_ENTER(0x0076cb2f);
    /* 0076cb2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb31: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb33: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb38u); f_00765834();
    /* 0076cb38: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb3b: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb41: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb2f); r_esp += 4; return;
}

void f_0076cb43(void)
{
    FN_ENTER(0x0076cb43);
    /* 0076cb43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb47: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb4cu); f_00765834();
    /* 0076cb4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb4f: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb55: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb43); r_esp += 4; return;
}

void f_0076cb57(void)
{
    FN_ENTER(0x0076cb57);
    /* 0076cb57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb59: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb5b: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb60u); f_00765834();
    /* 0076cb60: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb63: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb69: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb57); r_esp += 4; return;
}

void f_0076cb6b(void)
{
    FN_ENTER(0x0076cb6b);
    /* 0076cb6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb6d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb6f: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb74u); f_00765834();
    /* 0076cb74: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb77: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb7d: jmp 0x76cb91 */ goto L_0076cb91;
L_0076cb91:; BB(0x0076cb91);
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb6b); r_esp += 4; return;
}

void f_0076cb7f(void)
{
    FN_ENTER(0x0076cb7f);
    /* 0076cb7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076cb81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb83: call 0x765834 */ r_esp -= 4; W32(r_esp, 0x76cb88u); f_00765834();
    /* 0076cb88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cb8b: mov edx, dword ptr [0xa9afe8] */ r_edx = R32((u32)(0xa9afe8u));
    /* 0076cb91: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076cb94: mov dword ptr [0xa9afe8], edx */ W32((u32)(0xa9afe8u), r_edx);
    /* 0076cb9a: ret  */ FN_RET(0x0076cb7f); r_esp += 4; return;
}

void f_0076cb9c(void) /* sub_76CB9C */
{
    FN_ENTER(0x0076cb9c);
    /* 0076cb9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076cb9d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076cb9f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cba1: push 0x8f3dd4 */ { u32 v = 0x8f3dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cba6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076cbac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cbad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076cbb4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076cbb7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076cbba: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0076cbbd: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0076cbc0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0076cbc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0076cbc6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076cbc9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0076cbcc: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0076cbcf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076cbd2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0076cbd5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0076cbd8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076cbdb: call 0x765a14 */ r_esp -= 4; W32(r_esp, 0x76cbe0u); f_00765a14();
    /* 0076cbe0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076cbe7: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076cbea: mov dword ptr [ebx], 0xb43b60 */ W32((u32)(r_ebx), 0xb43b60u);
    /* 0076cbf0: mov eax, dword ptr [0x9f76e8] */ r_eax = R32((u32)(0x9f76e8u));
    /* 0076cbf5: mov ecx, dword ptr [0xa9b0c4] */ r_ecx = R32((u32)(0xa9b0c4u));
    /* 0076cbfb: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0076cbfe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076cc00: je 0x76ccb8 */ if (fZ) goto L_0076ccb8;
L_0076cc06:; BB(0x0076cc06);
    /* 0076cc06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cc08: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76cc0du); f_005b8610();
    /* 0076cc0d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076cc10: mov ecx, dword ptr [0xa9b0c4] */ r_ecx = R32((u32)(0xa9b0c4u));
    /* 0076cc16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cc18: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0076cc1b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x76cc20u); f_005b8624();
    /* 0076cc20: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076cc23: mov ecx, dword ptr [0xa9b0c4] */ r_ecx = R32((u32)(0xa9b0c4u));
    /* 0076cc29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cc2b: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0076cc2e: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x76cc33u); f_005b8638();
    /* 0076cc33: push 0x9f770c */ { u32 v = 0x9f770cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cc38: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076cc3b: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0076cc3e: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 0076cc45: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0076cc48: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0076cc4b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076cc4e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cc50: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076cc53: fadd dword ptr [edx*4 + 0x9779b0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9779b0u));
    /* 0076cc5a: fadd dword ptr [0x977a0c] */ ST(0) = ST(0) + R_F32((u32)(0x977a0cu));
    /* 0076cc60: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 0076cc63: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0076cc65: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0076cc68: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0076cc6b: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 0076cc6e: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0076cc71: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076cc74: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 0076cc7b: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 0076cc7e: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 0076cc81: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 0076cc84: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 0076cc8b: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 0076cc8e: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 0076cc91: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076cc94: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0076cc97: call 0x765638 */ r_esp -= 4; W32(r_esp, 0x76cc9cu); f_00765638();
    /* 0076cc9c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076cc9f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076cca2: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076cca5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076cca8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076ccab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076ccb2: mov esp, ebp */ r_esp = r_ebp;
    /* 0076ccb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ccb5: ret 0x10 */ FN_RET(0x0076cb9c); r_esp += 20; return;
L_0076ccb8:; BB(0x0076ccb8);
    /* 0076ccb8: movzx edx, word ptr [ebx + 8] */ r_edx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0076ccbc: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ccc2: mov word ptr [ebx + 8], dx */ W16((u32)(r_ebx+0x8u), (u16)r_edx);
    /* 0076ccc6: mov eax, ebx */ r_eax = r_ebx;
    /* 0076ccc8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076cccb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076ccce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076ccd5: mov esp, ebp */ r_esp = r_ebp;
    /* 0076ccd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ccd8: ret 0x10 */ FN_RET(0x0076cb9c); r_esp += 20; return;
}

void f_0076ccdc(void) /* sub_76CCDC */
{
    FN_ENTER(0x0076ccdc);
    /* 0076ccdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ccdd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ccde: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ccdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076cce0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076cce3: mov edi, ecx */ r_edi = r_ecx;
    /* 0076cce5: mov ecx, edi */ r_ecx = r_edi;
    /* 0076cce7: call 0x765a40 */ r_esp -= 4; W32(r_esp, 0x76ccecu); f_00765a40();
    /* 0076ccec: fld dword ptr [0x977a08] */ FPUSH(R_F32((u32)(0x977a08u)));
    /* 0076ccf2: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0076ccf5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0076ccf7: fld dword ptr [edi + 0x34] */ FPUSH(R_F32((u32)(r_edi+0x34u)));
    /* 0076ccfa: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076ccfc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076ccfe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076ccff: jae 0x76cd08 */ if (!fC) goto L_0076cd08;
L_0076cd01:; BB(0x0076cd01);
    /* 0076cd01: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0076cd03: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 0076cd06: jmp 0x76cd0d */ goto L_0076cd0d;
L_0076cd08:; BB(0x0076cd08);
    /* 0076cd08: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076cd0a: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
L_0076cd0d:; BB(0x0076cd0d);
    /* 0076cd0d: fld dword ptr [0x9779f8] */ FPUSH(R_F32((u32)(0x9779f8u)));
    /* 0076cd13: fadd dword ptr [edi + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x58u));
    /* 0076cd16: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076cd18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076cd1a: mov esi, dword ptr [edi + 0x5c] */ r_esi = R32((u32)(r_edi+0x5cu));
    /* 0076cd1d: mov ecx, dword ptr [edi + 0x54] */ r_ecx = R32((u32)(r_edi+0x54u));
    /* 0076cd20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076cd21: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0076cd24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076cd26: jb 0x76cd2a */ if (fC) goto L_0076cd2a;
L_0076cd28:; BB(0x0076cd28);
    /* 0076cd28: fst st(1) */ ST(1) = ST(0);
L_0076cd2a:; BB(0x0076cd2a);
    /* 0076cd2a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076cd2c: fstp dword ptr [edi + 0x58] */ W_F32((u32)(r_edi+0x58u), ST(0)); FPOP();
    /* 0076cd2f: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076cd31: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x76cd36u); f_0082dcbc();
    /* 0076cd36: fld dword ptr [ebp + esi*8 + 0x9779c0] */ FPUSH(R_F32((u32)(r_ebp+r_esi*8+0x9779c0u)));
    /* 0076cd3d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0076cd3f: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0076cd42: fild dword ptr [edi + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x54u)));
    /* 0076cd45: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 0076cd4c: fmul dword ptr [ebp + esi*8 + 0x9779bc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+r_esi*8+0x9779bcu));
    /* 0076cd53: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 0076cd56: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0076cd5b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x76cd60u); f_0082d990();
    /* 0076cd60: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 0076cd63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076cd65: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76cd6au); f_0082d8bc();
    /* 0076cd6a: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0076cd6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076cd6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076cd70: mov edx, ebx */ r_edx = r_ebx;
    /* 0076cd72: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x76cd77u); f_0082eab8();
    /* 0076cd77: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76cd7cu); f_0082da80();
    /* 0076cd7c: lea edx, [edi + 0x44] */ r_edx = (u32)(r_edi+0x44u);
    /* 0076cd7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076cd81: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x76cd86u); f_0082ebac();
    /* 0076cd86: mov eax, dword ptr [ebp + esi*8 + 0x9779b8] */ r_eax = R32((u32)(r_ebp+r_esi*8+0x9779b8u));
    /* 0076cd8d: fld dword ptr [0x977a00] */ FPUSH(R_F32((u32)(0x977a00u)));
    /* 0076cd93: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0076cd96: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 0076cd99: add dword ptr [edi + 0x54], eax */ { u32 ad = (u32)(r_edi+0x54u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0076cd9c: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cda1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076cda2: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x76cda7u); f_00780630();
    /* 0076cda7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cdaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076cdac: je 0x76ce32 */ if (fZ) goto L_0076ce32;
L_0076cdb2:; BB(0x0076cdb2);
    /* 0076cdb2: mov ecx, dword ptr [0xa9b07c] */ r_ecx = R32((u32)(0xa9b07cu));
    /* 0076cdb8: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0076cdbb: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0076cdbe: fld dword ptr [edi + 0x58] */ FPUSH(R_F32((u32)(r_edi+0x58u)));
    /* 0076cdc1: fmul dword ptr [0x9779f4] */ ST(0) = ST(0) * R_F32((u32)(0x9779f4u));
    /* 0076cdc7: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0076cdcb: mov dword ptr [edi + 0x3c], ebp */ W32((u32)(r_edi+0x3cu), r_ebp);
    /* 0076cdce: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cdd1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0076cdd5: mov dword ptr [esp], 5 */ W32((u32)(r_esp), 0x5u);
    /* 0076cddc: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0076cde0: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0076cde8: call 0x76a724 */ r_esp -= 4; W32(r_esp, 0x76cdedu); f_0076a724();
    /* 0076cded: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0076cdf1: fdiv dword ptr [0x9779fc] */ ST(0) = ST(0) / R_F32((u32)(0x9779fcu));
    /* 0076cdf7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0076cdfb: mov eax, 1 */ r_eax = 0x1u;
    /* 0076ce00: mov dword ptr [esp + 4], 0xffffffff */ W32((u32)(r_esp+0x4u), 0xffffffffu);
    /* 0076ce08: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0076ce0b: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0076ce10: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0076ce15: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x76ce1au); f_0080575c();
    /* 0076ce1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076ce1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce20: push 0x6fa */ { u32 v = 0x6fau; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce25: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x76ce2au); f_008144b0();
    /* 0076ce2a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ce2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ce2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ce2f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ce30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076ce31: ret  */ FN_RET(0x0076ccdc); r_esp += 4; return;
L_0076ce32:; BB(0x0076ce32);
    /* 0076ce32: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0076ce36: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076ce3b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0076ce3f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076ce42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ce43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076ce44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ce45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076ce46: ret  */ FN_RET(0x0076ccdc); r_esp += 4; return;
}

void f_0076ce48(void) /* sub_76CE48 */
{
    FN_ENTER(0x0076ce48);
    /* 0076ce48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce49: mov esi, ecx */ r_esi = r_ecx;
    /* 0076ce4b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76ce50u); f_0082d7b0();
    /* 0076ce50: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0076ce53: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76ce58u); f_0082d838();
    /* 0076ce58: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 0076ce5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076ce5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce60: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x76ce65u); f_0082fa0c();
    /* 0076ce65: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0076ce68: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76ce6du); f_00829cc8();
    /* 0076ce6d: push 0x76ca90 */ { u32 v = 0x76ca90u; r_esp -= 4; W32(r_esp, v); }
    /* 0076ce72: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ce74: call 0x7657c8 */ r_esp -= 4; W32(r_esp, 0x76ce79u); f_007657c8();
    /* 0076ce79: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ce7c: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ce7f: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076ce82: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x76ce87u); f_00830a28();
    /* 0076ce87: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076ce8a: mov ecx, esi */ r_ecx = r_esi;
    /* 0076ce8c: call 0x7657e4 */ r_esp -= 4; W32(r_esp, 0x76ce91u); f_007657e4();
    /* 0076ce91: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76ce96u); f_0082da80();
    /* 0076ce96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076ce97: ret  */ FN_RET(0x0076ce48); r_esp += 4; return;
}

void f_0076ce98(void) /* sub_76CE98 */
{
    FN_ENTER(0x0076ce98);
    /* 0076ce98: mov ecx, dword ptr [0xa9b0c4] */ r_ecx = R32((u32)(0xa9b0c4u));
    /* 0076ce9e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076cea0: je 0x76ceb5 */ if (fZ) goto L_0076ceb5;
L_0076cea2:; BB(0x0076cea2);
    /* 0076cea2: je 0x76ceab */ if (fZ) goto L_0076ceab;
L_0076cea4:; BB(0x0076cea4);
    /* 0076cea4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cea6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76ceabu); f_004066a8();
L_0076ceab:; BB(0x0076ceab);
    /* 0076ceab: mov dword ptr [0xa9b0c4], 0 */ W32((u32)(0xa9b0c4u), 0x0u);
L_0076ceb5:; BB(0x0076ceb5);
    /* 0076ceb5: ret  */ FN_RET(0x0076ce98); r_esp += 4; return;
}

void f_0076ceb8(void) /* sub_76CEB8 */
{
    FN_ENTER(0x0076ceb8);
    /* 0076ceb8: mov dword ptr [0xa9b0b8], 0x3f800000 */ W32((u32)(0xa9b0b8u), 0x3f800000u);
    /* 0076cec2: mov dword ptr [0xa9b0bc], 0x41000000 */ W32((u32)(0xa9b0bcu), 0x41000000u);
    /* 0076cecc: mov dword ptr [0xa9b0c0], 0x3fc00000 */ W32((u32)(0xa9b0c0u), 0x3fc00000u);
    /* 0076ced6: ret  */ FN_RET(0x0076ceb8); r_esp += 4; return;
}

void f_0076ced8(void) /* sub_76CED8 */
{
    FN_ENTER(0x0076ced8);
    /* 0076ced8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076ced9: mov ebp, esp */ r_ebp = r_esp;
    /* 0076cedb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cedd: push 0x8f3dfc */ { u32 v = 0x8f3dfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cee2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076cee8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cee9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076cef0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076cef3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076cef6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076cef9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076cefc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076ceff: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf04: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076cf0b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76cf10u); f_008581c5();
    /* 0076cf10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076cf11: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076cf14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076cf16: je 0x76cfb9 */ if (fZ) goto L_0076cfb9;
L_0076cf1c:; BB(0x0076cf1c);
    /* 0076cf1c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076cf23: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076cf2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076cf2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076cf2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf32: push 0x9f76fc */ { u32 v = 0x9f76fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf37: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf39: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x76cf3eu); f_005b7a84();
    /* 0076cf3e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076cf41: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076cf48:; BB(0x0076cf48);
    /* 0076cf48: mov dword ptr [0xa9b0c4], edx */ W32((u32)(0xa9b0c4u), r_edx);
    /* 0076cf4e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076cf55: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076cf57: je 0x76cf7b */ if (fZ) goto L_0076cf7b;
L_0076cf59:; BB(0x0076cf59);
    /* 0076cf59: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0076cf5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076cf61: je 0x76cf7b */ if (fZ) goto L_0076cf7b;
L_0076cf63:; BB(0x0076cf63);
    /* 0076cf63: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 0076cf69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076cf6b: je 0x76cf7b */ if (fZ) goto L_0076cf7b;
L_0076cf6d:; BB(0x0076cf6d);
    /* 0076cf6d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076cf70: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076cf77: mov esp, ebp */ r_esp = r_ebp;
    /* 0076cf79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076cf7a: ret  */ FN_RET(0x0076ced8); r_esp += 4; return;
L_0076cf7b:; BB(0x0076cf7b);
    /* 0076cf7b: push dword ptr [0x9f76fc] */ { u32 v = R32((u32)(0x9f76fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076cf81: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf86: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76cf8bu); f_0061cdb0();
    /* 0076cf8b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076cf8e: mov ecx, dword ptr [0xa9b0c4] */ r_ecx = R32((u32)(0xa9b0c4u));
    /* 0076cf94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076cf96: je 0x76cfab */ if (fZ) goto L_0076cfab;
L_0076cf98:; BB(0x0076cf98);
    /* 0076cf98: je 0x76cfa1 */ if (fZ) goto L_0076cfa1;
L_0076cf9a:; BB(0x0076cf9a);
    /* 0076cf9a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076cf9c: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76cfa1u); f_004066a8();
L_0076cfa1:; BB(0x0076cfa1);
    /* 0076cfa1: mov dword ptr [0xa9b0c4], 0 */ W32((u32)(0xa9b0c4u), 0x0u);
L_0076cfab:; BB(0x0076cfab);
    /* 0076cfab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076cfae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076cfb5: mov esp, ebp */ r_esp = r_ebp;
    /* 0076cfb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076cfb8: ret  */ FN_RET(0x0076ced8); r_esp += 4; return;
L_0076cfb9:; BB(0x0076cfb9);
    /* 0076cfb9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076cfbb: jmp 0x76cf48 */ goto L_0076cf48;
}

void f_0076cfc0(void) /* sub_76CFC0 */
{
    FN_ENTER(0x0076cfc0);
    /* 0076cfc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076cfc1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076cfc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076cfc5: call 0x76cfe4 */ r_esp -= 4; W32(r_esp, 0x76cfcau); f_0076cfe4();
    /* 0076cfca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076cfce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076cfd0: jne 0x76cfd6 */ if (!fZ) goto L_0076cfd6;
L_0076cfd2:; BB(0x0076cfd2);
    /* 0076cfd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076cfd3: ret 4 */ FN_RET(0x0076cfc0); r_esp += 8; return;
L_0076cfd6:; BB(0x0076cfd6);
    /* 0076cfd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076cfd7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76cfdcu); f_005c2f74();
    /* 0076cfdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076cfdd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076cfde: ret 4 */ FN_RET(0x0076cfc0); r_esp += 8; return;
}

void f_0076cfe4(void) /* sub_76CFE4 */
{
    FN_ENTER(0x0076cfe4);
    /* 0076cfe4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076cfe5: mov ebp, esp */ r_ebp = r_esp;
    /* 0076cfe7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cfe9: push 0x8f3e3c */ { u32 v = 0x8f3e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076cfee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076cff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076cff5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076cffc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076cfff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076d002: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076d005: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076d008: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076d00b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076d00e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076d015: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d018: push dword ptr [eax + 0x3bc] */ { u32 v = R32((u32)(r_eax+0x3bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d01e: mov dword ptr [eax], 0xb43ca0 */ W32((u32)(r_eax), 0xb43ca0u);
    /* 0076d024: call 0x76f37c */ r_esp -= 4; W32(r_esp, 0x76d029u); f_0076f37c();
    /* 0076d029: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d02a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d02d: mov ecx, dword ptr [eax + 0x410] */ r_ecx = R32((u32)(r_eax+0x410u));
    /* 0076d033: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d035: je 0x76d04c */ if (fZ) goto L_0076d04c;
L_0076d037:; BB(0x0076d037);
    /* 0076d037: je 0x76d042 */ if (fZ) goto L_0076d042;
L_0076d039:; BB(0x0076d039);
    /* 0076d039: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d03b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076d03d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x76d03fu); call_ind(t); }
    /* 0076d03f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0076d042:; BB(0x0076d042);
    /* 0076d042: mov dword ptr [eax + 0x410], 0 */ W32((u32)(r_eax+0x410u), 0x0u);
L_0076d04c:; BB(0x0076d04c);
    /* 0076d04c: mov ecx, dword ptr [eax + 0x414] */ r_ecx = R32((u32)(r_eax+0x414u));
    /* 0076d052: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d054: je 0x76d06c */ if (fZ) goto L_0076d06c;
L_0076d056:; BB(0x0076d056);
    /* 0076d056: je 0x76d062 */ if (fZ) goto L_0076d062;
L_0076d058:; BB(0x0076d058);
    /* 0076d058: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d05a: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x76d05fu); f_00418aa8();
    /* 0076d05f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0076d062:; BB(0x0076d062);
    /* 0076d062: mov dword ptr [eax + 0x414], 0 */ W32((u32)(r_eax+0x414u), 0x0u);
L_0076d06c:; BB(0x0076d06c);
    /* 0076d06c: mov ecx, eax */ r_ecx = r_eax;
    /* 0076d06e: call 0x76f108 */ r_esp -= 4; W32(r_esp, 0x76d073u); f_0076f108();
    /* 0076d073: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d076: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x76d07bu); f_007b4e84();
    /* 0076d07b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d07c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d07f: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x76d084u); f_007b9c8c();
    /* 0076d084: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0076d08b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d08e: add ecx, 0x398 */ {  u32 a = r_ecx; u32 b = 0x398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076d094: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x76d099u); f_005770ec();
    /* 0076d099: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076d0a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d0a3: call 0x51f54c */ r_esp -= 4; W32(r_esp, 0x76d0a8u); f_0051f54c();
    /* 0076d0a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076d0ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076d0b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0076d0b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d0b5: ret  */ FN_RET(0x0076cfe4); r_esp += 4; return;
}

