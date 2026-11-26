#include "protos.h"

void f_0072c0d0(void) /* sub_72C0D0 */
{
    FN_ENTER(0x0072c0d0);
    /* 0072c0d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c0d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c0d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c0d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c0d4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072c0d6: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072c0da: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0072c0e1: call 0x5c5114 */ r_esp -= 4; W32(r_esp, 0x72c0e6u); f_005c5114();
    /* 0072c0e6: mov ebp, eax */ r_ebp = r_eax;
    /* 0072c0e8: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072c0ec: movzx esi, byte ptr [ecx + 0xf2] */ r_esi = (u32)R8((u32)(r_ecx+0xf2u));
    /* 0072c0f3: movzx edi, byte ptr [ecx + 0xf3] */ r_edi = (u32)R8((u32)(r_ecx+0xf3u));
    /* 0072c0fa: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x72c0ffu); f_005c443c();
    /* 0072c0ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c100: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c101: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072c103: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c104: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c105: call 0x72b9d0 */ r_esp -= 4; W32(r_esp, 0x72c10au); f_0072b9d0();
    /* 0072c10a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072c10e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0072c110: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x72c113u); call_ind(t); }
    /* 0072c113: mov edi, eax */ r_edi = r_eax;
    /* 0072c115: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 0072c118: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c11a: je 0x72c136 */ if (fZ) goto L_0072c136;
L_0072c11c:; BB(0x0072c11c);
    /* 0072c11c: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c120: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c123: je 0x72c136 */ if (fZ) goto L_0072c136;
L_0072c125:; BB(0x0072c125);
    /* 0072c125: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072c12b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c12c: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0072c130: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c135u); f_00857e98();
    /* 0072c135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c136:; BB(0x0072c136);
    /* 0072c136: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c138: je 0x72c21d */ if (fZ) goto L_0072c21d;
L_0072c13e:; BB(0x0072c13e);
    /* 0072c13e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c13f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c144u); f_00858009();
    /* 0072c144: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0072c147: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0072c14b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c14c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c151u); f_008581c5();
    /* 0072c151: mov ebp, eax */ r_ebp = r_eax;
    /* 0072c153: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c155: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c156: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c15bu); f_00857dec();
    /* 0072c15b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c15e: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c162: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072c168: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
L_0072c16c:; BB(0x0072c16c);
    /* 0072c16c: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 0072c171: mov dword ptr [ebx + 0x20], ebp */ W32((u32)(r_ebx+0x20u), r_ebp);
    /* 0072c174: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072c177: jle 0x72c1a1 */ if ((fZ||fS!=fO)) goto L_0072c1a1;
L_0072c179:; BB(0x0072c179);
    /* 0072c179: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072c17d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c17e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072c180: call 0x72bee0 */ r_esp -= 4; W32(r_esp, 0x72c185u); f_0072bee0();
    /* 0072c185: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0072c189: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c18d: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0072c190: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c196: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0072c19a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c19b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c19c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c19d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c19e: ret 0xc */ FN_RET(0x0072c0d0); r_esp += 16; return;
L_0072c1a1:; BB(0x0072c1a1);
    /* 0072c1a1: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72c1a6u); f_00816d30();
    /* 0072c1a6: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072c1aa: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72c1afu); f_00815f24();
    /* 0072c1af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c1b0: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0072c1b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c1b5: je 0x72c1cf */ if (fZ) goto L_0072c1cf;
L_0072c1b7:; BB(0x0072c1b7);
    /* 0072c1b7: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c1bb: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c1bd: je 0x72c1cf */ if (fZ) goto L_0072c1cf;
L_0072c1bf:; BB(0x0072c1bf);
    /* 0072c1bf: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072c1c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c1c5: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072c1c9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c1ceu); f_00857e98();
    /* 0072c1ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c1cf:; BB(0x0072c1cf);
    /* 0072c1cf: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072c1d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c1d6: je 0x72c216 */ if (fZ) goto L_0072c216;
L_0072c1d8:; BB(0x0072c1d8);
    /* 0072c1d8: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c1dd: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c1e2u); f_00858009();
    /* 0072c1e2: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c1e5: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072c1e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c1ea: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c1efu); f_008581c5();
    /* 0072c1ef: mov esi, eax */ r_esi = r_eax;
    /* 0072c1f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c1f2: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c1f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c1f8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c1fdu); f_00857dec();
    /* 0072c1fd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c200: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c204: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072c20a: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
L_0072c20e:; BB(0x0072c20e);
    /* 0072c20e: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 0072c211: jmp 0x72c179 */ goto L_0072c179;
L_0072c216:; BB(0x0072c216);
    /* 0072c216: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 0072c21b: jmp 0x72c20e */ goto L_0072c20e;
L_0072c21d:; BB(0x0072c21d);
    /* 0072c21d: mov ebp, edi */ r_ebp = r_edi;
    /* 0072c21f: jmp 0x72c16c */ goto L_0072c16c;
}

void f_0072c224(void) /* sub_72C224 */
{
    FN_ENTER(0x0072c224);
    /* 0072c224: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c225: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c226: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c227: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c228: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072c22a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072c22e: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0072c235: call 0x5c5114 */ r_esp -= 4; W32(r_esp, 0x72c23au); f_005c5114();
    /* 0072c23a: mov ebp, eax */ r_ebp = r_eax;
    /* 0072c23c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072c240: movzx esi, byte ptr [ecx + 0xf2] */ r_esi = (u32)R8((u32)(r_ecx+0xf2u));
    /* 0072c247: movzx edi, byte ptr [ecx + 0xf3] */ r_edi = (u32)R8((u32)(r_ecx+0xf3u));
    /* 0072c24e: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x72c253u); f_005c443c();
    /* 0072c253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c254: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c255: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072c257: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c259: call 0x72b9d0 */ r_esp -= 4; W32(r_esp, 0x72c25eu); f_0072b9d0();
    /* 0072c25e: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0072c262: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0072c264: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x72c267u); call_ind(t); }
    /* 0072c267: mov edi, eax */ r_edi = r_eax;
    /* 0072c269: mov ebp, dword ptr [ebx + 0x20] */ r_ebp = R32((u32)(r_ebx+0x20u));
    /* 0072c26c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c26e: je 0x72c28a */ if (fZ) goto L_0072c28a;
L_0072c270:; BB(0x0072c270);
    /* 0072c270: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c274: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c277: je 0x72c28a */ if (fZ) goto L_0072c28a;
L_0072c279:; BB(0x0072c279);
    /* 0072c279: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072c27f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c280: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0072c284: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c289u); f_00857e98();
    /* 0072c289: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c28a:; BB(0x0072c28a);
    /* 0072c28a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c28c: je 0x72c362 */ if (fZ) goto L_0072c362;
L_0072c292:; BB(0x0072c292);
    /* 0072c292: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c293: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c298u); f_00858009();
    /* 0072c298: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0072c29b: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0072c29f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c2a0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c2a5u); f_008581c5();
    /* 0072c2a5: mov ebp, eax */ r_ebp = r_eax;
    /* 0072c2a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c2a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c2a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c2aa: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c2afu); f_00857dec();
    /* 0072c2af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c2b2: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c2b6: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072c2bc: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
L_0072c2c0:; BB(0x0072c2c0);
    /* 0072c2c0: mov dword ptr [ebx + 0x20], ebp */ W32((u32)(r_ebx+0x20u), r_ebp);
    /* 0072c2c3: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72c2c8u); f_00816d30();
    /* 0072c2c8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072c2cc: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72c2d1u); f_00815f24();
    /* 0072c2d1: push 0x970dc0 */ { u32 v = 0x970dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c2d6: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72c2dbu); f_00816cb8();
    /* 0072c2db: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c2de: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0072c2e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c2e3: je 0x72c2fd */ if (fZ) goto L_0072c2fd;
L_0072c2e5:; BB(0x0072c2e5);
    /* 0072c2e5: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c2e9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c2eb: je 0x72c2fd */ if (fZ) goto L_0072c2fd;
L_0072c2ed:; BB(0x0072c2ed);
    /* 0072c2ed: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072c2f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c2f3: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072c2f7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c2fcu); f_00857e98();
    /* 0072c2fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c2fd:; BB(0x0072c2fd);
    /* 0072c2fd: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072c302: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c304: je 0x72c357 */ if (fZ) goto L_0072c357;
L_0072c306:; BB(0x0072c306);
    /* 0072c306: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c30b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c310u); f_00858009();
    /* 0072c310: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c313: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072c317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c318: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c31du); f_008581c5();
    /* 0072c31d: mov esi, eax */ r_esi = r_eax;
    /* 0072c31f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c320: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c325: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c326: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c32bu); f_00857dec();
    /* 0072c32b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c32e: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c332: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c335:; BB(0x0072c335);
    /* 0072c335: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0072c339: mov dword ptr [ebx + 0x30], 0xffffffff */ W32((u32)(r_ebx+0x30u), 0xffffffffu);
    /* 0072c340: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 0072c343: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0072c346: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c34c: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0072c350: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c352: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c353: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c354: ret 0xc */ FN_RET(0x0072c224); r_esp += 16; return;
L_0072c357:; BB(0x0072c357);
    /* 0072c357: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c35b: mov esi, 0xac9d80 */ r_esi = 0xac9d80u;
    /* 0072c360: jmp 0x72c335 */ goto L_0072c335;
L_0072c362:; BB(0x0072c362);
    /* 0072c362: mov ebp, edi */ r_ebp = r_edi;
    /* 0072c364: jmp 0x72c2c0 */ goto L_0072c2c0;
}

void f_0072c36c(void) /* sub_72C36C */
{
    FN_ENTER(0x0072c36c);
    /* 0072c36c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c36d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c36e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c36f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c370: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c371: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072c373: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0072c377: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0072c37e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072c380: call 0x5c5114 */ r_esp -= 4; W32(r_esp, 0x72c385u); f_005c5114();
    /* 0072c385: mov edi, eax */ r_edi = r_eax;
    /* 0072c387: movzx esi, byte ptr [ebx + 0xf2] */ r_esi = (u32)R8((u32)(r_ebx+0xf2u));
    /* 0072c38e: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 0072c395: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072c398: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072c39a: call 0x5c443c */ r_esp -= 4; W32(r_esp, 0x72c39fu); f_005c443c();
    /* 0072c39f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3a0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072c3a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072c3a7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3a9: call 0x72b9d0 */ r_esp -= 4; W32(r_esp, 0x72c3aeu); f_0072b9d0();
    /* 0072c3ae: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0072c3b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072c3b2: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x72c3b5u); call_ind(t); }
    /* 0072c3b5: mov edi, eax */ r_edi = r_eax;
    /* 0072c3b7: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 0072c3ba: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c3bc: je 0x72c3d8 */ if (fZ) goto L_0072c3d8;
L_0072c3be:; BB(0x0072c3be);
    /* 0072c3be: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c3c2: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c3c5: je 0x72c3d8 */ if (fZ) goto L_0072c3d8;
L_0072c3c7:; BB(0x0072c3c7);
    /* 0072c3c7: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072c3cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3ce: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0072c3d2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c3d7u); f_00857e98();
    /* 0072c3d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c3d8:; BB(0x0072c3d8);
    /* 0072c3d8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c3da: je 0x72c46b */ if (fZ) goto L_0072c46b;
L_0072c3e0:; BB(0x0072c3e0);
    /* 0072c3e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3e1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c3e6u); f_00858009();
    /* 0072c3e6: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0072c3e9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072c3ed: lea esi, [eax + eax + 2] */ r_esi = (u32)(r_eax+r_eax+0x2u);
    /* 0072c3f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3f2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c3f7u); f_008581c5();
    /* 0072c3f7: mov esi, eax */ r_esi = r_eax;
    /* 0072c3f9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072c3fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c3ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c400: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c405u); f_00857dec();
    /* 0072c405: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c408: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c40c: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072c412: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
L_0072c416:; BB(0x0072c416);
    /* 0072c416: mov dword ptr [ebp + 0x20], esi */ W32((u32)(r_ebp+0x20u), r_esi);
    /* 0072c419: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 0072c420: movzx eax, byte ptr [ebx + 0xf3] */ r_eax = (u32)R8((u32)(r_ebx+0xf3u));
    /* 0072c427: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c428: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c429: call 0x5c502c */ r_esp -= 4; W32(r_esp, 0x72c42eu); f_005c502c();
    /* 0072c42e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c433: je 0x72c440 */ if (fZ) goto L_0072c440;
L_0072c435:; BB(0x0072c435);
    /* 0072c435: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072c439: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072c43b: call 0x72bd30 */ r_esp -= 4; W32(r_esp, 0x72c440u); f_0072bd30();
L_0072c440:; BB(0x0072c440);
    /* 0072c440: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c441: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072c443: call 0x72bee0 */ r_esp -= 4; W32(r_esp, 0x72c448u); f_0072bee0();
    /* 0072c448: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0072c44c: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072c44f: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c453: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0072c456: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0072c459: or ebx, 0xffff0045 */ {  u32 a = r_ebx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c45f: mov word ptr [ebp + 4], bx */ W16((u32)(r_ebp+0x4u), (u16)r_ebx);
    /* 0072c463: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c464: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c465: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c466: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c467: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c468: ret 0xc */ FN_RET(0x0072c36c); r_esp += 16; return;
L_0072c46b:; BB(0x0072c46b);
    /* 0072c46b: mov esi, edi */ r_esi = r_edi;
    /* 0072c46d: jmp 0x72c416 */ goto L_0072c416;
}

void f_0072c470(void) /* sub_72C470 */
{
    FN_ENTER(0x0072c470);
    /* 0072c470: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c471: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c472: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c473: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c474: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c475: mov edi, ecx */ r_edi = r_ecx;
    /* 0072c477: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0072c47c: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 0072c480: mov dword ptr [edi + 8], 0xc1900000 */ W32((u32)(r_edi+0x8u), 0xc1900000u);
    /* 0072c487: mov ebp, eax */ r_ebp = r_eax;
    /* 0072c489: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c48c: jne 0x72c493 */ if (!fZ) goto L_0072c493;
L_0072c48e:; BB(0x0072c48e);
    /* 0072c48e: mov eax, 0x16 */ r_eax = 0x16u;
L_0072c493:; BB(0x0072c493);
    /* 0072c493: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0072c496: mov byte ptr [edi + 0x1d], 0x36 */ W8((u32)(r_edi+0x1du), 0x36u);
    /* 0072c49a: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0072c49d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0072c4a2: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0072c4a5: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0072c4a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c4aa: je 0x72c4c4 */ if (fZ) goto L_0072c4c4;
L_0072c4ac:; BB(0x0072c4ac);
    /* 0072c4ac: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c4b0: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c4b2: je 0x72c4c4 */ if (fZ) goto L_0072c4c4;
L_0072c4b4:; BB(0x0072c4b4);
    /* 0072c4b4: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072c4b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c4ba: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072c4be: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c4c3u); f_00857e98();
    /* 0072c4c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c4c4:; BB(0x0072c4c4);
    /* 0072c4c4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c4c6: je 0x72c53f */ if (fZ) goto L_0072c53f;
L_0072c4c8:; BB(0x0072c4c8);
    /* 0072c4c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c4c9: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c4ceu); f_00858009();
    /* 0072c4ce: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0072c4d1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072c4d5: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072c4d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c4da: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c4dfu); f_008581c5();
    /* 0072c4df: mov ebx, eax */ r_ebx = r_eax;
    /* 0072c4e1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072c4e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c4e6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c4e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c4e8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c4edu); f_00857dec();
    /* 0072c4ed: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c4f0: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c4f4: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c4f7:; BB(0x0072c4f7);
    /* 0072c4f7: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0072c4fb: mov dword ptr [edi + 0x34], 0xffffffff */ W32((u32)(r_edi+0x34u), 0xffffffffu);
    /* 0072c502: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072c505: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072c508: or edx, 0x145 */ {  u32 a = r_edx; u32 b = 0x145u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072c50e: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072c511: je 0x72c526 */ if (fZ) goto L_0072c526;
L_0072c513:; BB(0x0072c513);
    /* 0072c513: mov dword ptr [edi + 0x30], 0xffffffff */ W32((u32)(r_edi+0x30u), 0xffffffffu);
    /* 0072c51a: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c51e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c51f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c520: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c521: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c522: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c523: ret 0xc */ FN_RET(0x0072c470); r_esp += 16; return;
L_0072c526:; BB(0x0072c526);
    /* 0072c526: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072c52d: or edx, 0xffff0080 */ {  u32 a = r_edx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c533: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c537: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c538: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c53a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c53b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c53c: ret 0xc */ FN_RET(0x0072c470); r_esp += 16; return;
L_0072c53f:; BB(0x0072c53f);
    /* 0072c53f: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c543: mov ebx, esi */ r_ebx = r_esi;
    /* 0072c545: jmp 0x72c4f7 */ goto L_0072c4f7;
}

void f_0072c548(void) /* sub_72C548 */
{
    FN_ENTER(0x0072c548);
    /* 0072c548: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c549: mov edi, ecx */ r_edi = r_ecx;
    /* 0072c54b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072c54f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c551: je 0x72c55a */ if (fZ) goto L_0072c55a;
L_0072c553:; BB(0x0072c553);
    /* 0072c553: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0072c558: jmp 0x72c55f */ goto L_0072c55f;
L_0072c55a:; BB(0x0072c55a);
    /* 0072c55a: mov eax, 0x15 */ r_eax = 0x15u;
L_0072c55f:; BB(0x0072c55f);
    /* 0072c55f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072c563: mov ecx, edi */ r_ecx = r_edi;
    /* 0072c565: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072c569: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c56a: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x72c56fu); f_0072c57c();
    /* 0072c56f: mov dword ptr [edi + 8], 0xc1900000 */ W32((u32)(r_edi+0x8u), 0xc1900000u);
    /* 0072c576: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c577: ret 0xc */ FN_RET(0x0072c548); r_esp += 16; return;
}

void f_0072c57c(void) /* sub_72C57C */
{
    FN_ENTER(0x0072c57c);
    /* 0072c57c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c57d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c57e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c57f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c580: mov esi, ecx */ r_esi = r_ecx;
    /* 0072c582: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 0072c587: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0072c58b: mov dword ptr [esi + 8], 0xc1900000 */ W32((u32)(r_esi+0x8u), 0xc1900000u);
    /* 0072c592: mov byte ptr [esi + 0x1d], al */ W8((u32)(r_esi+0x1du), (u8)r_eax);
    /* 0072c595: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072c59a: mov byte ptr [esi + 0x1c], 0x36 */ W8((u32)(r_esi+0x1cu), 0x36u);
    /* 0072c59e: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0072c5a1: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 0072c5a4: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0072c5a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c5a9: je 0x72c5c3 */ if (fZ) goto L_0072c5c3;
L_0072c5ab:; BB(0x0072c5ab);
    /* 0072c5ab: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072c5af: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c5b1: je 0x72c5c3 */ if (fZ) goto L_0072c5c3;
L_0072c5b3:; BB(0x0072c5b3);
    /* 0072c5b3: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072c5b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c5b9: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 0072c5bd: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c5c2u); f_00857e98();
    /* 0072c5c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c5c3:; BB(0x0072c5c3);
    /* 0072c5c3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c5c5: je 0x72c614 */ if (fZ) goto L_0072c614;
L_0072c5c7:; BB(0x0072c5c7);
    /* 0072c5c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c5c8: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c5cdu); f_00858009();
    /* 0072c5cd: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c5d0: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072c5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c5d5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c5dau); f_008581c5();
    /* 0072c5da: mov ebx, eax */ r_ebx = r_eax;
    /* 0072c5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c5dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c5de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c5df: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c5e4u); f_00857dec();
    /* 0072c5e4: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c5e7: movzx ebp, word ptr [esi + 4] */ r_ebp = (u32)R16((u32)(r_esi+0x4u));
    /* 0072c5eb: or ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
L_0072c5ee:; BB(0x0072c5ee);
    /* 0072c5ee: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0072c5f2: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 0072c5f5: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0072c5fa: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0072c5fd: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0072c600: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 0072c603: or ebp, 0xffff0045 */ {  u32 a = r_ebp; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c609: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
    /* 0072c60d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c60e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c60f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c610: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c611: ret 0xc */ FN_RET(0x0072c57c); r_esp += 16; return;
L_0072c614:; BB(0x0072c614);
    /* 0072c614: movzx ebp, word ptr [esi + 4] */ r_ebp = (u32)R16((u32)(r_esi+0x4u));
    /* 0072c618: mov ebx, edi */ r_ebx = r_edi;
    /* 0072c61a: jmp 0x72c5ee */ goto L_0072c5ee;
}

void f_0072c61c(void) /* sub_72C61C */
{
    FN_ENTER(0x0072c61c);
    /* 0072c61c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c61d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c61e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c61f: mov esi, ecx */ r_esi = r_ecx;
    /* 0072c621: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 0072c628: mov byte ptr [esi + 0x1c], 0x36 */ W8((u32)(r_esi+0x1cu), 0x36u);
    /* 0072c62c: mov byte ptr [esi + 0x1d], 9 */ W8((u32)(r_esi+0x1du), 0x9u);
    /* 0072c630: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72c635u); f_00816d30();
    /* 0072c635: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072c639: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72c63eu); f_00815f24();
    /* 0072c63e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c63f: call 0x7930f0 */ r_esp -= 4; W32(r_esp, 0x72c644u); f_007930f0();
    /* 0072c644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c645: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72c64au); f_00816cb8();
    /* 0072c64a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c64b: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0072c64e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c650: je 0x72c66a */ if (fZ) goto L_0072c66a;
L_0072c652:; BB(0x0072c652);
    /* 0072c652: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072c656: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c658: je 0x72c66a */ if (fZ) goto L_0072c66a;
L_0072c65a:; BB(0x0072c65a);
    /* 0072c65a: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072c65f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c660: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 0072c664: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c669u); f_00857e98();
    /* 0072c669: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c66a:; BB(0x0072c66a);
    /* 0072c66a: mov eax, 0xac9d80 */ r_eax = 0xac9d80u;
    /* 0072c66f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c671: je 0x72c6c3 */ if (fZ) goto L_0072c6c3;
L_0072c673:; BB(0x0072c673);
    /* 0072c673: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c678: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c67du); f_00858009();
    /* 0072c67d: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c680: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072c684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c685: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c68au); f_008581c5();
    /* 0072c68a: mov ebx, eax */ r_ebx = r_eax;
    /* 0072c68c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c68d: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c692: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c693: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c698u); f_00857dec();
    /* 0072c698: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c69b: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072c69f: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c6a2:; BB(0x0072c6a2);
    /* 0072c6a2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072c6a6: mov dword ptr [esi + 0x34], 0xffffffff */ W32((u32)(r_esi+0x34u), 0xffffffffu);
    /* 0072c6ad: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 0072c6b0: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 0072c6b3: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c6b9: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 0072c6bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c6be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c6bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c6c0: ret 8 */ FN_RET(0x0072c61c); r_esp += 12; return;
L_0072c6c3:; BB(0x0072c6c3);
    /* 0072c6c3: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072c6c7: mov ebx, 0xac9d80 */ r_ebx = 0xac9d80u;
    /* 0072c6cc: jmp 0x72c6a2 */ goto L_0072c6a2;
}

void f_0072c6d0(void) /* sub_72C6D0 */
{
    FN_ENTER(0x0072c6d0);
    /* 0072c6d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c6d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c6d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c6d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c6d4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072c6d6: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 0072c6db: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0072c6e0: movzx esi, byte ptr [esp + 0x1c] */ r_esi = (u32)R8((u32)(r_esp+0x1cu));
    /* 0072c6e5: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0072c6e9: mov byte ptr [ebx + 0x1c], dl */ W8((u32)(r_ebx+0x1cu), (u8)r_edx);
    /* 0072c6ec: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0072c6ef: mov byte ptr [ebx + 0x1d], al */ W8((u32)(r_ebx+0x1du), (u8)r_eax);
    /* 0072c6f2: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 0072c6f9: mov dword ptr [ebx + 0x28], esi */ W32((u32)(r_ebx+0x28u), r_esi);
    /* 0072c6fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c6fe: mov dword ptr [ebx + 0x2c], 0xffffffff */ W32((u32)(r_ebx+0x2cu), 0xffffffffu);
    /* 0072c705: je 0x72c71f */ if (fZ) goto L_0072c71f;
L_0072c707:; BB(0x0072c707);
    /* 0072c707: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c70b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c70d: je 0x72c71f */ if (fZ) goto L_0072c71f;
L_0072c70f:; BB(0x0072c70f);
    /* 0072c70f: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072c714: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c715: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072c719: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c71eu); f_00857e98();
    /* 0072c71e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c71f:; BB(0x0072c71f);
    /* 0072c71f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c721: je 0x72c76c */ if (fZ) goto L_0072c76c;
L_0072c723:; BB(0x0072c723);
    /* 0072c723: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c724: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c729u); f_00858009();
    /* 0072c729: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072c72c: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072c730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c731: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c736u); f_008581c5();
    /* 0072c736: mov esi, eax */ r_esi = r_eax;
    /* 0072c738: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c739: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c73a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c73b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c740u); f_00857dec();
    /* 0072c740: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c743: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c747: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c74a:; BB(0x0072c74a);
    /* 0072c74a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0072c74e: mov dword ptr [ebx + 0x30], 0xffffffff */ W32((u32)(r_ebx+0x30u), 0xffffffffu);
    /* 0072c755: mov dword ptr [ebx + 0x20], esi */ W32((u32)(r_ebx+0x20u), r_esi);
    /* 0072c758: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0072c75b: or edx, 0xffff0245 */ {  u32 a = r_edx; u32 b = 0xffff0245u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c761: mov word ptr [ebx + 4], dx */ W16((u32)(r_ebx+0x4u), (u16)r_edx);
    /* 0072c765: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c767: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c768: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c769: ret 0x14 */ FN_RET(0x0072c6d0); r_esp += 24; return;
L_0072c76c:; BB(0x0072c76c);
    /* 0072c76c: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072c770: mov esi, ebp */ r_esi = r_ebp;
    /* 0072c772: jmp 0x72c74a */ goto L_0072c74a;
}

void f_0072c774(void) /* sub_72C774 */
{
    FN_ENTER(0x0072c774);
    /* 0072c774: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c775: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c776: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c777: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c778: mov edi, ecx */ r_edi = r_ecx;
    /* 0072c77a: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072c77f: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0072c782: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 0072c789: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0072c78e: mov byte ptr [edi + 0x1d], al */ W8((u32)(r_edi+0x1du), (u8)r_eax);
    /* 0072c791: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72c796u); f_0079317c();
    /* 0072c796: mov esi, eax */ r_esi = r_eax;
    /* 0072c798: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c79b: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 0072c79e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c7a0: je 0x72c7bc */ if (fZ) goto L_0072c7bc;
L_0072c7a2:; BB(0x0072c7a2);
    /* 0072c7a2: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c7a6: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c7a9: je 0x72c7bc */ if (fZ) goto L_0072c7bc;
L_0072c7ab:; BB(0x0072c7ab);
    /* 0072c7ab: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072c7b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c7b2: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c7b6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c7bbu); f_00857e98();
    /* 0072c7bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c7bc:; BB(0x0072c7bc);
    /* 0072c7bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c7be: je 0x72c809 */ if (fZ) goto L_0072c809;
L_0072c7c0:; BB(0x0072c7c0);
    /* 0072c7c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c7c1: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c7c6u); f_00858009();
    /* 0072c7c6: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c7c9: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0072c7cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c7ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c7d3u); f_008581c5();
    /* 0072c7d3: mov ebx, eax */ r_ebx = r_eax;
    /* 0072c7d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c7d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c7d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c7d8: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c7ddu); f_00857dec();
    /* 0072c7dd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c7e0: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c7e4: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c7e7:; BB(0x0072c7e7);
    /* 0072c7e7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072c7eb: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072c7f2: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072c7f5: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072c7f8: or edx, 0xffff00c5 */ {  u32 a = r_edx; u32 b = 0xffff00c5u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c7fe: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c802: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c804: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c805: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c806: ret 4 */ FN_RET(0x0072c774); r_esp += 8; return;
L_0072c809:; BB(0x0072c809);
    /* 0072c809: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c80d: mov ebx, esi */ r_ebx = r_esi;
    /* 0072c80f: jmp 0x72c7e7 */ goto L_0072c7e7;
}

void f_0072c814(void) /* sub_72C814 */
{
    FN_ENTER(0x0072c814);
    /* 0072c814: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c815: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c816: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c817: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c818: mov edi, ecx */ r_edi = r_ecx;
    /* 0072c81a: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072c81f: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0072c822: mov dword ptr [edi + 8], 0xc1900000 */ W32((u32)(r_edi+0x8u), 0xc1900000u);
    /* 0072c829: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072c82e: mov byte ptr [edi + 0x1d], al */ W8((u32)(r_edi+0x1du), (u8)r_eax);
    /* 0072c831: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72c836u); f_0079317c();
    /* 0072c836: mov esi, eax */ r_esi = r_eax;
    /* 0072c838: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c83b: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 0072c83e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c840: je 0x72c85c */ if (fZ) goto L_0072c85c;
L_0072c842:; BB(0x0072c842);
    /* 0072c842: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c846: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c849: je 0x72c85c */ if (fZ) goto L_0072c85c;
L_0072c84b:; BB(0x0072c84b);
    /* 0072c84b: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072c851: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c852: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c856: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c85bu); f_00857e98();
    /* 0072c85b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c85c:; BB(0x0072c85c);
    /* 0072c85c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c85e: je 0x72c8a9 */ if (fZ) goto L_0072c8a9;
L_0072c860:; BB(0x0072c860);
    /* 0072c860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c861: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c866u); f_00858009();
    /* 0072c866: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c869: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0072c86d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c86e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c873u); f_008581c5();
    /* 0072c873: mov ebx, eax */ r_ebx = r_eax;
    /* 0072c875: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c876: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c877: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c878: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c87du); f_00857dec();
    /* 0072c87d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c880: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c884: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c887:; BB(0x0072c887);
    /* 0072c887: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072c88b: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072c892: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072c895: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072c898: or edx, 0xffff00c5 */ {  u32 a = r_edx; u32 b = 0xffff00c5u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c89e: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c8a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c8a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c8a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072c8a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072c8a6: ret 4 */ FN_RET(0x0072c814); r_esp += 8; return;
L_0072c8a9:; BB(0x0072c8a9);
    /* 0072c8a9: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c8ad: mov ebx, esi */ r_ebx = r_esi;
    /* 0072c8af: jmp 0x72c887 */ goto L_0072c887;
}

void f_0072c8b4(void) /* sub_72C8B4 */
{
    FN_ENTER(0x0072c8b4);
    /* 0072c8b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c8b5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072c8b7: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072c8bc: mov byte ptr [ebp + 0x1c], al */ W8((u32)(r_ebp+0x1cu), (u8)r_eax);
    /* 0072c8bf: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 0072c8c6: mov byte ptr [ebp + 0x1d], al */ W8((u32)(r_ebp+0x1du), (u8)r_eax);
    /* 0072c8c9: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0072c8cc: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072c8d1: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 0072c8d4: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 0072c8d7: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0072c8da: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 0072c8dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c8df: je 0x72c92a */ if (fZ) goto L_0072c92a;
L_0072c8e1:; BB(0x0072c8e1);
    /* 0072c8e1: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c8e5: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c8e8: jne 0x72c91d */ if (!fZ) goto L_0072c91d;
L_0072c8ea:; BB(0x0072c8ea);
    /* 0072c8ea: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0072c8ed: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 0072c8f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c8f6: je 0x72c8fd */ if (fZ) goto L_0072c8fd;
L_0072c8f8:; BB(0x0072c8f8);
    /* 0072c8f8: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c8fb: jne 0x72c910 */ if (!fZ) goto L_0072c910;
L_0072c8fd:; BB(0x0072c8fd);
    /* 0072c8fd: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 0072c904: and edx, 0xe402 */ {  u32 a = r_edx; u32 b = 0xe402u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c90a: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 0072c90e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072c90f: ret  */ FN_RET(0x0072c8b4); r_esp += 4; return;
L_0072c910:; BB(0x0072c910);
    /* 0072c910: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c911: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c916u); f_00857e98();
    /* 0072c916: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c917: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c91b: jmp 0x72c8fd */ goto L_0072c8fd;
L_0072c91d:; BB(0x0072c91d);
    /* 0072c91d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072c91e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c923u); f_00857e98();
    /* 0072c923: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072c924: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c928: jmp 0x72c8ea */ goto L_0072c8ea;
L_0072c92a:; BB(0x0072c92a);
    /* 0072c92a: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072c92e: jmp 0x72c8ea */ goto L_0072c8ea;
}

void f_0072c930(void) /* sub_72C930 */
{
    FN_ENTER(0x0072c930);
    /* 0072c930: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 0072c934: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072c937: je 0x72c93a */ if (fZ) goto L_0072c93a;
L_0072c939:; BB(0x0072c939);
    /* 0072c939: ret  */ FN_RET(0x0072c930); r_esp += 4; return;
L_0072c93a:; BB(0x0072c93a);
    /* 0072c93a: mov byte ptr [ecx + 0x1d], 0x14 */ W8((u32)(r_ecx+0x1du), 0x14u);
    /* 0072c93e: ret  */ FN_RET(0x0072c930); r_esp += 4; return;
}

void f_0072c940(void) /* sub_72C940 */
{
    FN_ENTER(0x0072c940);
    /* 0072c940: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 0072c944: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0072c947: je 0x72c94a */ if (fZ) goto L_0072c94a;
L_0072c949:; BB(0x0072c949);
    /* 0072c949: ret  */ FN_RET(0x0072c940); r_esp += 4; return;
L_0072c94a:; BB(0x0072c94a);
    /* 0072c94a: mov byte ptr [ecx + 0x1d], 0x15 */ W8((u32)(r_ecx+0x1du), 0x15u);
    /* 0072c94e: ret  */ FN_RET(0x0072c940); r_esp += 4; return;
}

void f_0072c950(void) /* sub_72C950 */
{
    FN_ENTER(0x0072c950);
    /* 0072c950: mov dword ptr [0xa9a828], 0x3f800000 */ W32((u32)(0xa9a828u), 0x3f800000u);
    /* 0072c95a: mov dword ptr [0xa9a82c], 0x41000000 */ W32((u32)(0xa9a82cu), 0x41000000u);
    /* 0072c964: mov dword ptr [0xa9a830], 0x3fc00000 */ W32((u32)(0xa9a830u), 0x3fc00000u);
    /* 0072c96e: ret  */ FN_RET(0x0072c950); r_esp += 4; return;
}

void f_0072c970(void) /* sub_72C970 */
{
    FN_ENTER(0x0072c970);
    /* 0072c970: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c971: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c972: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c973: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c974: mov edi, ecx */ r_edi = r_ecx;
    /* 0072c976: mov eax, 0x36 */ r_eax = 0x36u;
    /* 0072c97b: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0072c97e: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 0072c985: push 0xef */ { u32 v = 0xefu; r_esp -= 4; W32(r_esp, v); }
    /* 0072c98a: mov byte ptr [edi + 0x1d], al */ W8((u32)(r_edi+0x1du), (u8)r_eax);
    /* 0072c98d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72c992u); f_0079317c();
    /* 0072c992: mov esi, eax */ r_esi = r_eax;
    /* 0072c994: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c997: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 0072c99a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c99c: je 0x72c9b8 */ if (fZ) goto L_0072c9b8;
L_0072c99e:; BB(0x0072c99e);
    /* 0072c99e: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c9a2: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072c9a5: je 0x72c9b8 */ if (fZ) goto L_0072c9b8;
L_0072c9a7:; BB(0x0072c9a7);
    /* 0072c9a7: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072c9ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c9ae: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c9b2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72c9b7u); f_00857e98();
    /* 0072c9b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072c9b8:; BB(0x0072c9b8);
    /* 0072c9b8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072c9ba: je 0x72ca05 */ if (fZ) goto L_0072ca05;
L_0072c9bc:; BB(0x0072c9bc);
    /* 0072c9bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c9bd: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72c9c2u); f_00858009();
    /* 0072c9c2: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 0072c9c5: lea edx, [eax + eax + 2] */ r_edx = (u32)(r_eax+r_eax+0x2u);
    /* 0072c9c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c9ca: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72c9cfu); f_008581c5();
    /* 0072c9cf: mov ebx, eax */ r_ebx = r_eax;
    /* 0072c9d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072c9d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072c9d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072c9d4: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72c9d9u); f_00857dec();
    /* 0072c9d9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072c9dc: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072c9e0: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072c9e3:; BB(0x0072c9e3);
    /* 0072c9e3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0072c9e7: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072c9ee: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072c9f1: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072c9f4: or edx, 0xffff00c5 */ {  u32 a = r_edx; u32 b = 0xffff00c5u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072c9fa: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072c9fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072c9ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ca00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ca01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072ca02: ret 4 */ FN_RET(0x0072c970); r_esp += 8; return;
L_0072ca05:; BB(0x0072ca05);
    /* 0072ca05: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072ca09: mov ebx, esi */ r_ebx = r_esi;
    /* 0072ca0b: jmp 0x72c9e3 */ goto L_0072c9e3;
}

void f_0072ca10(void) /* sub_72CA10 */
{
    FN_ENTER(0x0072ca10);
    /* 0072ca10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca15: mov edi, ecx */ r_edi = r_ecx;
    /* 0072ca17: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0072ca1a: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0072ca1e: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0072ca22: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 0072ca29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ca2b: mov byte ptr [edi + 0x1c], 0x36 */ W8((u32)(r_edi+0x1cu), 0x36u);
    /* 0072ca2f: mov byte ptr [edi + 0x1d], 0x28 */ W8((u32)(r_edi+0x1du), 0x28u);
    /* 0072ca33: je 0x72ca4d */ if (fZ) goto L_0072ca4d;
L_0072ca35:; BB(0x0072ca35);
    /* 0072ca35: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072ca39: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ca3b: je 0x72ca4d */ if (fZ) goto L_0072ca4d;
L_0072ca3d:; BB(0x0072ca3d);
    /* 0072ca3d: and eax, 0xfff7 */ {  u32 a = r_eax; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072ca42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca43: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072ca47: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72ca4cu); f_00857e98();
    /* 0072ca4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072ca4d:; BB(0x0072ca4d);
    /* 0072ca4d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ca4f: je 0x72cb20 */ if (fZ) goto L_0072cb20;
L_0072ca55:; BB(0x0072ca55);
    /* 0072ca55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca56: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72ca5bu); f_00858009();
    /* 0072ca5b: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0072ca5e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0072ca62: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072ca66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca67: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72ca6cu); f_008581c5();
    /* 0072ca6c: mov ebx, eax */ r_ebx = r_eax;
    /* 0072ca6e: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072ca72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca75: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72ca7au); f_00857dec();
    /* 0072ca7a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072ca7d: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072ca81: or edx, 0xffff0008 */ {  u32 a = r_edx; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072ca87: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
L_0072ca8b:; BB(0x0072ca8b);
    /* 0072ca8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ca8c: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 0072ca8f: mov ecx, edi */ r_ecx = r_edi;
    /* 0072ca91: call 0x72bd44 */ r_esp -= 4; W32(r_esp, 0x72ca96u); f_0072bd44();
    /* 0072ca96: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0072ca9a: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072ca9d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ca9f: jg 0x72cac3 */ if ((!fZ&&fS==fO)) goto L_0072cac3;
L_0072caa1:; BB(0x0072caa1);
    /* 0072caa1: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072caa5: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072caac: mov ebx, 0xff909090 */ r_ebx = 0xff909090u;
    /* 0072cab1: or eax, 0xffff00c5 */ {  u32 a = r_eax; u32 b = 0xffff00c5u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072cab6: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072cabd: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 0072cac1: jmp 0x72cb15 */ goto L_0072cb15;
L_0072cac3:; BB(0x0072cac3);
    /* 0072cac3: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x72cac8u); f_00807d60();
    /* 0072cac8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072caca: je 0x72caf5 */ if (fZ) goto L_0072caf5;
L_0072cacc:; BB(0x0072cacc);
    /* 0072cacc: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x72cad1u); f_00807db8();
    /* 0072cad1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cad3: jne 0x72caf5 */ if (!fZ) goto L_0072caf5;
L_0072cad5:; BB(0x0072cad5);
    /* 0072cad5: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 0072cad9: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0072cade: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0072cae3: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0072cae6: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0072cae9: or edx, 0xffff0045 */ {  u32 a = r_edx; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072caef: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 0072caf3: jmp 0x72cb15 */ goto L_0072cb15;
L_0072caf5:; BB(0x0072caf5);
    /* 0072caf5: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072caf9: mov dword ptr [edi + 0x30], 0xff909090 */ W32((u32)(r_edi+0x30u), 0xff909090u);
    /* 0072cb00: mov ebx, 0xff909090 */ r_ebx = 0xff909090u;
    /* 0072cb05: or eax, 0xffff0045 */ {  u32 a = r_eax; u32 b = 0xffff0045u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072cb0a: mov dword ptr [edi + 0x2c], 0xffaaaaaa */ W32((u32)(r_edi+0x2cu), 0xffaaaaaau);
    /* 0072cb11: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
L_0072cb15:; BB(0x0072cb15);
    /* 0072cb15: mov dword ptr [edi + 0x34], ebx */ W32((u32)(r_edi+0x34u), r_ebx);
    /* 0072cb18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072cb19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cb1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072cb1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072cb1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072cb1d: ret 0xc */ FN_RET(0x0072ca10); r_esp += 16; return;
L_0072cb20:; BB(0x0072cb20);
    /* 0072cb20: mov ebx, esi */ r_ebx = r_esi;
    /* 0072cb22: jmp 0x72ca8b */ goto L_0072ca8b;
}

void f_0072caff(void)
{
    FN_ENTER(0x0072caff);
}

void f_0072cb28(void) /* sub_72CB28 */
{
    FN_ENTER(0x0072cb28);
    /* 0072cb28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072cb2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072cb2d: call 0x72cb4c */ r_esp -= 4; W32(r_esp, 0x72cb32u); f_0072cb4c();
    /* 0072cb32: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072cb36: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072cb38: jne 0x72cb3e */ if (!fZ) goto L_0072cb3e;
L_0072cb3a:; BB(0x0072cb3a);
    /* 0072cb3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cb3b: ret 4 */ FN_RET(0x0072cb28); r_esp += 8; return;
L_0072cb3e:; BB(0x0072cb3e);
    /* 0072cb3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb3f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72cb44u); f_00857e98();
    /* 0072cb44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072cb45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cb46: ret 4 */ FN_RET(0x0072cb28); r_esp += 8; return;
}

void f_0072cb4c(void) /* sub_72CB4C */
{
    FN_ENTER(0x0072cb4c);
    /* 0072cb4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0072cb4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb51: push 0x8f12c0 */ { u32 v = 0x8f12c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072cb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072cb64: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072cb67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072cb6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072cb6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072cb70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072cb73: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072cb76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072cb79: mov dword ptr [ecx], 0xb40338 */ W32((u32)(r_ecx), 0xb40338u);
    /* 0072cb7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072cb86: call 0x72aca4 */ r_esp -= 4; W32(r_esp, 0x72cb8bu); f_0072aca4();
    /* 0072cb8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072cb8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072cb95: mov esp, ebp */ r_esp = r_ebp;
    /* 0072cb97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072cb98: ret  */ FN_RET(0x0072cb4c); r_esp += 4; return;
}

void f_0072cb9c(void) /* sub_72CB9C */
{
    FN_ENTER(0x0072cb9c);
    /* 0072cb9c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cb9e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072cba0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0072cba4: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0072cba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cbaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072cbac: call 0x72ad30 */ r_esp -= 4; W32(r_esp, 0x72cbb1u); f_0072ad30();
    /* 0072cbb1: mov dword ptr [ebx], 0xb40338 */ W32((u32)(r_ebx), 0xb40338u);
    /* 0072cbb7: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0072cbba: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0072cbbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0072cbc0: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0072cbc3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0072cbc6: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0072cbc9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0072cbcc: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
    /* 0072cbd0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0072cbd3: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0072cbd6: mov ebp, dword ptr [ebp + 0x18] */ r_ebp = R32((u32)(r_ebp+0x18u));
    /* 0072cbd9: mov dword ptr [ebx + 0x20], ebp */ W32((u32)(r_ebx+0x20u), r_ebp);
    /* 0072cbdc: mov eax, ebx */ r_eax = r_ebx;
    /* 0072cbde: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cbdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072cbe0: ret 8 */ FN_RET(0x0072cb9c); r_esp += 12; return;
}

void f_0072cbe4(void) /* sub_72CBE4 */
{
    FN_ENTER(0x0072cbe4);
    /* 0072cbe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cbe5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cbe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072cbe7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cbe8: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072cbeb: mov edi, ecx */ r_edi = r_ecx;
    /* 0072cbed: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0072cbf0: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0072cbf3: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0072cbf7: fild dword ptr [ebp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x30u)));
    /* 0072cbfa: fld dword ptr [0x970dec] */ FPUSH(R_F32((u32)(0x970decu)));
    /* 0072cc00: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 0072cc03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072cc05: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 0072cc07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072cc09: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0072cc0b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0072cc0d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072cc11: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072cc13: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0072cc17: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072cc19: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072cc1b: fmul dword ptr [0x970de8] */ ST(0) = ST(0) * R_F32((u32)(0x970de8u));
    /* 0072cc21: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072cc23: fmul dword ptr [0x970de4] */ ST(0) = ST(0) * R_F32((u32)(0x970de4u));
    /* 0072cc29: fcomp dword ptr [0x970de0] */ fx_compare(ST(0), R_F32((u32)(0x970de0u))); FPOP();
    /* 0072cc2f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072cc31: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072cc32: jbe 0x72cdc4 */ if ((fC||fZ)) goto L_0072cdc4;
L_0072cc38:; BB(0x0072cc38);
    /* 0072cc38: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 0072cc3c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072cc3e: je 0x72cc47 */ if (fZ) goto L_0072cc47;
L_0072cc40:; BB(0x0072cc40);
    /* 0072cc40: mov esi, 1 */ r_esi = 0x1u;
    /* 0072cc45: jmp 0x72cc49 */ goto L_0072cc49;
L_0072cc47:; BB(0x0072cc47);
    /* 0072cc47: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0072cc49:; BB(0x0072cc49);
    /* 0072cc49: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0072cc4d: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0072cc50: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0072cc54: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 0072cc57: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 0072cc5a: fld dword ptr [0x970dd8] */ FPUSH(R_F32((u32)(0x970dd8u)));
    /* 0072cc60: fmul dword ptr [edi + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x18u));
    /* 0072cc63: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0072cc66: fdivr dword ptr [0x970ddc] */ ST(0) = R_F32((u32)(0x970ddcu)) / ST(0);
    /* 0072cc6c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072cc6e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0072cc72: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0072cc76: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0072cc7a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cc7c: jne 0x72cc88 */ if (!fZ) goto L_0072cc88;
L_0072cc7e:; BB(0x0072cc7e);
    /* 0072cc7e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072cc80: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x72cc85u); f_007ac174();
    /* 0072cc85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072cc86: jmp 0x72ccac */ goto L_0072ccac;
L_0072cc88:; BB(0x0072cc88);
    /* 0072cc88: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cc8b: jne 0x72ccac */ if (!fZ) goto L_0072ccac;
L_0072cc8d:; BB(0x0072cc8d);
    /* 0072cc8d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072cc92: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72cc97u); f_0082bb30();
    /* 0072cc97: mov ecx, dword ptr [0xa9cd48] */ r_ecx = R32((u32)(0xa9cd48u));
    /* 0072cc9d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72cca2u); f_00829cc8();
    /* 0072cca2: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0072cca5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0072cca7: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72ccacu); f_0082bb60();
L_0072ccac:; BB(0x0072ccac);
    /* 0072ccac: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
L_0072ccb0:; BB(0x0072ccb0);
    /* 0072ccb0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072ccb5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0072ccb7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ccb9: jge 0x72ccbd */ if ((fS==fO)) goto L_0072ccbd;
L_0072ccbb:; BB(0x0072ccbb);
    /* 0072ccbb: mov ebx, edi */ r_ebx = r_edi;
L_0072ccbd:; BB(0x0072ccbd);
    /* 0072ccbd: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072ccbf: mov eax, ebx */ r_eax = r_ebx;
    /* 0072ccc1: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0072ccc4: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072ccc7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072ccc9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0072cccc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ccce: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ccd0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ccd2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0072ccd4: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ccd6: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ccd9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072ccdc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ccde: jne 0x72cd2c */ if (!fZ) goto L_0072cd2c;
L_0072cce0:; BB(0x0072cce0);
    /* 0072cce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cce1: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x72cce6u); f_008443b4();
    /* 0072cce6: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0072ccea: lea edi, [esp + 4] */ r_edi = (u32)(r_esp+0x4u);
    /* 0072ccee: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072ccf1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072ccf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ccf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ccf6: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x72ccfbu); f_007ac1a0();
    /* 0072ccfb: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0072ccff: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0072cd03: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0072cd07: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0072cd0a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0072cd0e: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0072cd12: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072cd14: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 0072cd18: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0072cd1c: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0072cd20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd22: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x72cd27u); f_007ac200();
    /* 0072cd27: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072cd2a: jmp 0x72cd6e */ goto L_0072cd6e;
L_0072cd2c:; BB(0x0072cd2c);
    /* 0072cd2c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cd2f: jne 0x72cd6e */ if (!fZ) goto L_0072cd6e;
L_0072cd31:; BB(0x0072cd31);
    /* 0072cd31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd32: call 0x789240 */ r_esp -= 4; W32(r_esp, 0x72cd37u); f_00789240();
    /* 0072cd37: mov edi, eax */ r_edi = r_eax;
    /* 0072cd39: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd3a: call 0x789044 */ r_esp -= 4; W32(r_esp, 0x72cd3fu); f_00789044();
    /* 0072cd3f: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0072cd43: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0072cd47: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072cd4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072cd4e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0072cd52: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0072cd56: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072cd58: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0072cd5c: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0072cd60: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072cd64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd66: call 0x7893a4 */ r_esp -= 4; W32(r_esp, 0x72cd6bu); f_007893a4();
    /* 0072cd6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072cd6e:; BB(0x0072cd6e);
    /* 0072cd6e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0072cd71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0072cd74: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72cd79u); f_0071ba34();
    /* 0072cd79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cd7b: je 0x72cd8e */ if (fZ) goto L_0072cd8e;
L_0072cd7d:; BB(0x0072cd7d);
    /* 0072cd7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cd7e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0072cd82: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072cd85: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0072cd89: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72cd8eu); f_0082b440();
L_0072cd8e:; BB(0x0072cd8e);
    /* 0072cd8e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072cd93: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072cd95: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0072cd98: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0072cd9a: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072cd9d: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072cd9f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072cda1: jg 0x72ccb0 */ if ((!fZ&&fS==fO)) goto L_0072ccb0;
L_0072cda7:; BB(0x0072cda7);
    /* 0072cda7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cda9: jne 0x72cdba */ if (!fZ) goto L_0072cdba;
L_0072cdab:; BB(0x0072cdab);
    /* 0072cdab: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x72cdb0u); f_007ac198();
    /* 0072cdb0: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072cdb3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cdb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072cdb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072cdb6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072cdb7: ret 4 */ FN_RET(0x0072cbe4); r_esp += 8; return;
L_0072cdba:; BB(0x0072cdba);
    /* 0072cdba: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072cdbd: jne 0x72cdc4 */ if (!fZ) goto L_0072cdc4;
L_0072cdbf:; BB(0x0072cdbf);
    /* 0072cdbf: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72cdc4u); f_004ac444();
L_0072cdc4:; BB(0x0072cdc4);
    /* 0072cdc4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072cdc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cdc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072cdc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072cdca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072cdcb: ret 4 */ FN_RET(0x0072cbe4); r_esp += 8; return;
}

void f_0072cdd0(void) /* sub_72CDD0 */
{
    FN_ENTER(0x0072cdd0);
    /* 0072cdd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cdd1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072cdd4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072cdd6: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 0072cdd9: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072cddd: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072cddf: je 0x72ce2f */ if (fZ) goto L_0072ce2f;
L_0072cde1:; BB(0x0072cde1);
    /* 0072cde1: fld dword ptr [0x970dcc] */ FPUSH(R_F32((u32)(0x970dccu)));
    /* 0072cde7: fld dword ptr [0x970dcc] */ FPUSH(R_F32((u32)(0x970dccu)));
    /* 0072cded: mov dword ptr [ebx + 0x14], 0x41500000 */ W32((u32)(r_ebx+0x14u), 0x41500000u);
    /* 0072cdf4: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072cdf9: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072cdfb: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0072cdfe: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072ce01: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072ce03: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ce05: jle 0x72ceaf */ if ((fZ||fS!=fO)) goto L_0072ceaf;
L_0072ce0b:; BB(0x0072ce0b);
    /* 0072ce0b: mov ecx, edx */ r_ecx = r_edx;
    /* 0072ce0d: jmp 0x72ce11 */ goto L_0072ce11;
L_0072ce0f:; BB(0x0072ce0f);
    /* 0072ce0f: fadd st(1) */ ST(0) = ST(0) + ST(1);
L_0072ce11:; BB(0x0072ce11);
    /* 0072ce11: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072ce16: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072ce18: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0072ce1b: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0072ce1d: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072ce20: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0072ce22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ce24: jg 0x72ce0f */ if ((!fZ&&fS==fO)) goto L_0072ce0f;
L_0072ce26:; BB(0x0072ce26);
    /* 0072ce26: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072ce28: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072ce2a: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072ce2d: jmp 0x72ceaa */ goto L_0072ceaa;
L_0072ce2f:; BB(0x0072ce2f);
    /* 0072ce2f: mov dword ptr [ebx + 0x14], 0x41600000 */ W32((u32)(r_ebx+0x14u), 0x41600000u);
    /* 0072ce36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ce38: jle 0x72cebd */ if ((fZ||fS!=fO)) goto L_0072cebd;
L_0072ce3e:; BB(0x0072ce3e);
    /* 0072ce3e: mov dword ptr [ebx + 0x10], 0 */ W32((u32)(r_ebx+0x10u), 0x0u);
    /* 0072ce45: jle 0x72ceaa */ if ((fZ||fS!=fO)) goto L_0072ceaa;
L_0072ce47:; BB(0x0072ce47);
    /* 0072ce47: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0072ce4b: mov esi, ebx */ r_esi = r_ebx;
    /* 0072ce4d: mov ebx, ecx */ r_ebx = r_ecx;
L_0072ce4f:; BB(0x0072ce4f);
    /* 0072ce4f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072ce54: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072ce56: mov eax, ebx */ r_eax = r_ebx;
    /* 0072ce58: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0072ce5b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072ce5e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0072ce60: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0072ce63: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ce65: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ce67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ce69: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0072ce6b: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ce6d: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ce70: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0072ce73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ce74: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x72ce79u); f_008443b4();
    /* 0072ce79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ce7a: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x72ce7fu); f_007ac24c();
    /* 0072ce7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072ce82: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072ce85: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072ce88: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0072ce8b: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 0072ce8e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0072ce93: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072ce95: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 0072ce98: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0072ce9b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0072ce9e: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0072cea0: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072cea2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072cea4: jg 0x72ce4f */ if ((!fZ&&fS==fO)) goto L_0072ce4f;
L_0072cea6:; BB(0x0072cea6);
    /* 0072cea6: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_0072ceaa:; BB(0x0072ceaa);
    /* 0072ceaa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072cead: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ceae: ret  */ FN_RET(0x0072cdd0); r_esp += 4; return;
L_0072ceaf:; BB(0x0072ceaf);
    /* 0072ceaf: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072ceb1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072ceb3: mov eax, 0x41200000 */ r_eax = 0x41200000u;
    /* 0072ceb8: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 0072cebb: jmp 0x72ceaa */ goto L_0072ceaa;
L_0072cebd:; BB(0x0072cebd);
    /* 0072cebd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0072cebf: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x72cec4u); f_008443b4();
    /* 0072cec4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cec5: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x72cecau); f_007ac24c();
    /* 0072ceca: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0072cecd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072ced1: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0072ced5: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0072ced8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072cedb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cedc: ret  */ FN_RET(0x0072cdd0); r_esp += 4; return;
}

void f_0072cee0(void) /* sub_72CEE0 */
{
    FN_ENTER(0x0072cee0);
    /* 0072cee0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cee1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072cee3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072cee5: call 0x72cf04 */ r_esp -= 4; W32(r_esp, 0x72ceeau); f_0072cf04();
    /* 0072ceea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072ceee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072cef0: jne 0x72cef6 */ if (!fZ) goto L_0072cef6;
L_0072cef2:; BB(0x0072cef2);
    /* 0072cef2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cef3: ret 4 */ FN_RET(0x0072cee0); r_esp += 8; return;
L_0072cef6:; BB(0x0072cef6);
    /* 0072cef6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072cef7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72cefcu); f_00857e98();
    /* 0072cefc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072cefd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072cefe: ret 4 */ FN_RET(0x0072cee0); r_esp += 8; return;
}

void f_0072cf04(void) /* sub_72CF04 */
{
    FN_ENTER(0x0072cf04);
    /* 0072cf04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf05: mov ebp, esp */ r_ebp = r_esp;
    /* 0072cf07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf09: push 0x8f12dc */ { u32 v = 0x8f12dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072cf14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072cf1c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072cf1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072cf22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072cf25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072cf28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072cf2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072cf2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072cf31: mov dword ptr [ecx], 0xb40370 */ W32((u32)(r_ecx), 0xb40370u);
    /* 0072cf37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072cf3e: call 0x72cb4c */ r_esp -= 4; W32(r_esp, 0x72cf43u); f_0072cb4c();
    /* 0072cf43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072cf46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072cf4d: mov esp, ebp */ r_esp = r_ebp;
    /* 0072cf4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072cf50: ret  */ FN_RET(0x0072cf04); r_esp += 4; return;
}

void f_0072cf54(void) /* sub_72CF54 */
{
    FN_ENTER(0x0072cf54);
    /* 0072cf54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf55: mov edi, ecx */ r_edi = r_ecx;
    /* 0072cf57: mov ecx, edi */ r_ecx = r_edi;
    /* 0072cf59: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 0072cf5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf5f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072cf63: call 0x72cb9c */ r_esp -= 4; W32(r_esp, 0x72cf68u); f_0072cb9c();
    /* 0072cf68: fild dword ptr [edi + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x20u)));
    /* 0072cf6b: fst dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0));
    /* 0072cf6e: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 0072cf71: mov dword ptr [edi], 0xb40370 */ W32((u32)(r_edi), 0xb40370u);
    /* 0072cf77: mov eax, edi */ r_eax = r_edi;
    /* 0072cf79: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 0072cf80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072cf81: ret 8 */ FN_RET(0x0072cf54); r_esp += 12; return;
}

void f_0072cf84(void) /* sub_72CF84 */
{
    FN_ENTER(0x0072cf84);
    /* 0072cf84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cf85: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072cf88: mov esi, ecx */ r_esi = r_ecx;
    /* 0072cf8a: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0072cf8d: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0072cf90: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072cf92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072cf94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072cf95: je 0x72d013 */ if (fZ) goto L_0072d013;
L_0072cf97:; BB(0x0072cf97);
    /* 0072cf97: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072cf9b: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072cf9d: jne 0x72cff4 */ if (!fZ) goto L_0072cff4;
L_0072cf9f:; BB(0x0072cf9f);
    /* 0072cf9f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0072cfa1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cfa2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072cfa5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x72cfaau); f_0082e900();
    /* 0072cfaa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072cfae: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072cfb1: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x72cfb6u); f_0082e900();
    /* 0072cfb6: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0072cfba: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0072cfbc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072cfbe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072cfbf: jae 0x72cfcc */ if (!fC) goto L_0072cfcc;
L_0072cfc1:; BB(0x0072cfc1);
    /* 0072cfc1: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0072cfc4: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0072cfc7: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0072cfca: jmp 0x72cfd5 */ goto L_0072cfd5;
L_0072cfcc:; BB(0x0072cfcc);
    /* 0072cfcc: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0072cfcf: fadd dword ptr [esi + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2cu));
    /* 0072cfd2: fst dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0));
L_0072cfd5:; BB(0x0072cfd5);
    /* 0072cfd5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0072cfd8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0072cfdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072cfe1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0072cfe5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0072cfe9: fistp dword ptr [esi + 0x20] */ W32((u32)(r_esi+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0072cfec: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0072cfef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072cff2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072cff3: ret  */ FN_RET(0x0072cf84); r_esp += 4; return;
L_0072cff4:; BB(0x0072cff4);
    /* 0072cff4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072cff6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072cff8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072cffa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cffb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072cffd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072cffe: push 0x41a */ { u32 v = 0x41au; r_esp -= 4; W32(r_esp, v); }
    /* 0072d003: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x72d008u); f_008144b0();
    /* 0072d008: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072d00b: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0072d00e: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0072d011: jmp 0x72cf9f */ goto L_0072cf9f;
L_0072d013:; BB(0x0072d013);
    /* 0072d013: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0072d015: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072d017: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072d01a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072d01b: ret  */ FN_RET(0x0072cf84); r_esp += 4; return;
}

