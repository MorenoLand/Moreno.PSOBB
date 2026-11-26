#include "protos.h"

void f_00695044(void) /* sub_695044 */
{
    FN_ENTER(0x00695044);
    /* 00695044: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695045: mov edi, ecx */ r_edi = r_ecx;
    /* 00695047: mov ecx, edi */ r_ecx = r_edi;
    /* 00695049: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x69504eu); f_0068aa24();
    /* 0069504e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069504f: mov ecx, eax */ r_ecx = r_eax;
    /* 00695051: call 0x6ab3f0 */ r_esp -= 4; W32(r_esp, 0x695056u); f_006ab3f0();
    /* 00695056: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695057: ret  */ FN_RET(0x00695044); r_esp += 4; return;
}

void f_00695058(void) /* sub_695058 */
{
    FN_ENTER(0x00695058);
    /* 00695058: mov eax, dword ptr [ecx + 0x964] */ r_eax = R32((u32)(r_ecx+0x964u));
    /* 0069505e: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695060: jne 0x69507c */ if (!fZ) goto L_0069507c;
L_00695062:; BB(0x00695062);
    /* 00695062: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695064: je 0x695071 */ if (fZ) goto L_00695071;
L_00695066:; BB(0x00695066);
    /* 00695066: mov dword ptr [ecx + 0x3e4], 1 */ W32((u32)(r_ecx+0x3e4u), 0x1u);
    /* 00695070: ret  */ FN_RET(0x00695058); r_esp += 4; return;
L_00695071:; BB(0x00695071);
    /* 00695071: mov dword ptr [ecx + 0x3e4], 2 */ W32((u32)(r_ecx+0x3e4u), 0x2u);
    /* 0069507b: ret  */ FN_RET(0x00695058); r_esp += 4; return;
L_0069507c:; BB(0x0069507c);
    /* 0069507c: mov dword ptr [ecx + 0x3e4], 0 */ W32((u32)(r_ecx+0x3e4u), 0x0u);
    /* 00695086: ret  */ FN_RET(0x00695058); r_esp += 4; return;
}

void f_00695088(void) /* sub_695088 */
{
    FN_ENTER(0x00695088);
    /* 00695088: mov eax, dword ptr [ecx + 0x964] */ r_eax = R32((u32)(r_ecx+0x964u));
    /* 0069508e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695090: jne 0x6950ac */ if (!fZ) goto L_006950ac;
L_00695092:; BB(0x00695092);
    /* 00695092: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695094: jne 0x6950a1 */ if (!fZ) goto L_006950a1;
L_00695096:; BB(0x00695096);
    /* 00695096: mov dword ptr [ecx + 0x3e8], 0 */ W32((u32)(r_ecx+0x3e8u), 0x0u);
    /* 006950a0: ret  */ FN_RET(0x00695088); r_esp += 4; return;
L_006950a1:; BB(0x006950a1);
    /* 006950a1: mov dword ptr [ecx + 0x3e8], 1 */ W32((u32)(r_ecx+0x3e8u), 0x1u);
    /* 006950ab: ret  */ FN_RET(0x00695088); r_esp += 4; return;
L_006950ac:; BB(0x006950ac);
    /* 006950ac: mov dword ptr [ecx + 0x3e8], 2 */ W32((u32)(r_ecx+0x3e8u), 0x2u);
    /* 006950b6: ret  */ FN_RET(0x00695088); r_esp += 4; return;
}

void f_006950b8(void) /* sub_6950B8 */
{
    FN_ENTER(0x006950b8);
    /* 006950b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006950b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006950bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006950bd: push 0x8eb3a0 */ { u32 v = 0x8eb3a0u; r_esp -= 4; W32(r_esp, v); }
    /* 006950c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006950c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006950c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006950d0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006950d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006950d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006950d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006950dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006950df: mov eax, dword ptr [0xa94250] */ r_eax = R32((u32)(0xa94250u));
    /* 006950e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006950e6: je 0x695173 */ if (fZ) goto L_00695173;
L_006950ec:; BB(0x006950ec);
    /* 006950ec: mov eax, dword ptr [0xa9424c] */ r_eax = R32((u32)(0xa9424cu));
    /* 006950f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006950f3: je 0x695161 */ if (fZ) goto L_00695161;
L_006950f5:; BB(0x006950f5);
    /* 006950f5: mov eax, dword ptr [0xa942b4] */ r_eax = R32((u32)(0xa942b4u));
    /* 006950fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006950fc: je 0x69510c */ if (fZ) goto L_0069510c;
L_006950fe:; BB(0x006950fe);
    /* 006950fe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00695101: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00695108: mov esp, ebp */ r_esp = r_ebp;
    /* 0069510a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069510b: ret  */ FN_RET(0x006950b8); r_esp += 4; return;
L_0069510c:; BB(0x0069510c);
    /* 0069510c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00695113: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00695115: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x69511au); f_008581c5();
    /* 0069511a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0069511d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695120: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00695123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695125: je 0x69515a */ if (fZ) goto L_0069515a;
L_00695127:; BB(0x00695127);
    /* 00695127: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0069512e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00695135: push 0x67dfa8 */ { u32 v = 0x67dfa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0069513a: push 0x67df3c */ { u32 v = 0x67df3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0069513f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00695141: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00695143: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695144: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x695149u); f_00858736();
    /* 00695149: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00695150:; BB(0x00695150);
    /* 00695150: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00695153: mov dword ptr [0xa942b4], eax */ W32((u32)(0xa942b4u), r_eax);
    /* 00695158: jmp 0x6950fe */ goto L_006950fe;
L_0069515a:; BB(0x0069515a);
    /* 0069515a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069515c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0069515f: jmp 0x695150 */ goto L_00695150;
L_00695161:; BB(0x00695161);
    /* 00695161: push 0x6000 */ { u32 v = 0x6000u; r_esp -= 4; W32(r_esp, v); }
    /* 00695166: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x69516bu); f_008581c5();
    /* 0069516b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069516c: mov dword ptr [0xa9424c], eax */ W32((u32)(0xa9424cu), r_eax);
    /* 00695171: jmp 0x6950f5 */ goto L_006950f5;
L_00695173:; BB(0x00695173);
    /* 00695173: push 0xc000 */ { u32 v = 0xc000u; r_esp -= 4; W32(r_esp, v); }
    /* 00695178: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x69517du); f_008581c5();
    /* 0069517d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069517e: mov dword ptr [0xa94250], eax */ W32((u32)(0xa94250u), r_eax);
    /* 00695183: jmp 0x6950ec */ goto L_006950ec;
}

void f_00695188(void) /* sub_695188 */
{
    FN_ENTER(0x00695188);
    /* 00695188: mov ecx, dword ptr [ecx + 0x38c] */ r_ecx = R32((u32)(r_ecx+0x38cu));
    /* 0069518e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695190: je 0x69519d */ if (fZ) goto L_0069519d;
L_00695192:; BB(0x00695192);
    /* 00695192: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 00695197: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695198: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069519a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x69519du); call_ind(t); }
L_0069519d:; BB(0x0069519d);
    /* 0069519d: ret 4 */ FN_RET(0x00695188); r_esp += 8; return;
}

void f_006951a0(void) /* sub_6951A0 */
{
    FN_ENTER(0x006951a0);
    /* 006951a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006951a3: mov eax, dword ptr [ecx + 0x964] */ r_eax = R32((u32)(r_ecx+0x964u));
    /* 006951a9: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006951ab: je 0x6951c0 */ if (fZ) goto L_006951c0;
L_006951ad:; BB(0x006951ad);
    /* 006951ad: mov edx, 4 */ r_edx = 0x4u;
    /* 006951b2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006951b6: mov edx, 4 */ r_edx = 0x4u;
    /* 006951bb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006951be: jmp 0x6951d1 */ goto L_006951d1;
L_006951c0:; BB(0x006951c0);
    /* 006951c0: mov edx, 1 */ r_edx = 0x1u;
    /* 006951c5: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006951c9: mov edx, 1 */ r_edx = 0x1u;
    /* 006951ce: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_006951d1:; BB(0x006951d1);
    /* 006951d1: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006951d3: jne 0x6951e1 */ if (!fZ) goto L_006951e1;
L_006951d5:; BB(0x006951d5);
    /* 006951d5: mov eax, edx */ r_eax = r_edx;
    /* 006951d7: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 006951dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006951e0: ret  */ FN_RET(0x006951a0); r_esp += 4; return;
L_006951e1:; BB(0x006951e1);
    /* 006951e1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006951e5: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006951e8: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 006951ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006951f1: ret  */ FN_RET(0x006951a0); r_esp += 4; return;
}

void f_006951f4(void) /* sub_6951F4 */
{
    FN_ENTER(0x006951f4);
    /* 006951f4: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 006951f9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006951fc: jne 0x69520b */ if (!fZ) goto L_0069520b;
L_006951fe:; BB(0x006951fe);
    /* 006951fe: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x695203u); f_0078b1c4();
    /* 00695203: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00695206: je 0x69520e */ if (fZ) goto L_0069520e;
L_00695208:; BB(0x00695208);
    /* 00695208: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069520a: ret  */ FN_RET(0x006951f4); r_esp += 4; return;
L_0069520b:; BB(0x0069520b);
    /* 0069520b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069520d: ret  */ FN_RET(0x006951f4); r_esp += 4; return;
L_0069520e:; BB(0x0069520e);
    /* 0069520e: mov eax, 1 */ r_eax = 0x1u;
    /* 00695213: ret  */ FN_RET(0x006951f4); r_esp += 4; return;
}

void f_00695214(void) /* sub_695214 */
{
    FN_ENTER(0x00695214);
    /* 00695214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695215: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695216: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695218: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069521a: mov ebx, eax */ r_ebx = r_eax;
    /* 0069521c: mov esi, edx */ r_esi = r_edx;
L_0069521e:; BB(0x0069521e);
    /* 0069521e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00695222: lea ecx, [esi + 0xaae75c] */ r_ecx = (u32)(r_esi+0xaae75cu);
    /* 00695228: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x69522du); f_007c1160();
    /* 0069522d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069522f: jne 0x695249 */ if (!fZ) goto L_00695249;
L_00695231:; BB(0x00695231);
    /* 00695231: add esi, 0x50 */ {  u32 a = r_esi; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695234: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00695237: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069523a: jl 0x69521e */ if ((fS!=fO)) goto L_0069521e;
L_0069523c:; BB(0x0069523c);
    /* 0069523c: mov dword ptr [0xa94244], 0 */ W32((u32)(0xa94244u), 0x0u);
    /* 00695246: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695247: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695248: ret  */ FN_RET(0x00695214); r_esp += 4; return;
L_00695249:; BB(0x00695249);
    /* 00695249: mov eax, ebx */ r_eax = r_ebx;
    /* 0069524b: mov dword ptr [0xa94244], eax */ W32((u32)(0xa94244u), r_eax);
    /* 00695250: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695251: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695252: ret  */ FN_RET(0x00695214); r_esp += 4; return;
}

void f_00695254(void) /* sub_695254 */
{
    FN_ENTER(0x00695254);
    /* 00695254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695255: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695258: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0069525a: mov edx, dword ptr [ebp + 0x784] */ r_edx = R32((u32)(r_ebp+0x784u));
    /* 00695260: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00695263: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695265: jl 0x6952c1 */ if ((fS!=fO)) goto L_006952c1;
L_00695267:; BB(0x00695267);
    /* 00695267: mov dword ptr [ebp + 0x784], edx */ W32((u32)(r_ebp+0x784u), r_edx);
L_0069526d:; BB(0x0069526d);
    /* 0069526d: mov eax, dword ptr [ebp + edx*8 + 0x788] */ r_eax = R32((u32)(r_ebp+r_edx*8+0x788u));
    /* 00695274: mov edx, dword ptr [ebp + edx*8 + 0x78c] */ r_edx = R32((u32)(r_ebp+r_edx*8+0x78cu));
    /* 0069527b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0069527e: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00695281: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00695285: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00695289: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0069528c: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0069528e: lea eax, [ebp + 0x128] */ r_eax = (u32)(r_ebp+0x128u);
    /* 00695294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695295: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695296: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x69529bu); f_007806dc();
    /* 0069529b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069529e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006952a0: je 0x6952bc */ if (fZ) goto L_006952bc;
L_006952a2:; BB(0x006952a2);
    /* 006952a2: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006952a5: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 006952a7: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 006952aa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006952ad: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 006952b0: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 006952b3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006952b6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006952b9: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
L_006952bc:; BB(0x006952bc);
    /* 006952bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006952bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006952c0: ret  */ FN_RET(0x00695254); r_esp += 4; return;
L_006952c1:; BB(0x006952c1);
    /* 006952c1: mov dword ptr [ebp + 0x784], 0xf */ W32((u32)(r_ebp+0x784u), 0xfu);
    /* 006952cb: mov edx, 0xf */ r_edx = 0xfu;
    /* 006952d0: jmp 0x69526d */ goto L_0069526d;
}

void f_006952d4(void) /* sub_6952D4 */
{
    FN_ENTER(0x006952d4);
    /* 006952d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006952d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006952d7: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 006952da: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6952dfu); f_0082dcbc();
    /* 006952df: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 006952e2: fstp dword ptr [ebx + 0x410] */ W_F32((u32)(r_ebx+0x410u), ST(0)); FPOP();
    /* 006952e8: mov dword ptr [ebx + 0x414], 0 */ W32((u32)(r_ebx+0x414u), 0x0u);
    /* 006952f2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6952f7u); f_0082ddd8();
    /* 006952f7: fstp dword ptr [ebx + 0x418] */ W_F32((u32)(r_ebx+0x418u), ST(0)); FPOP();
    /* 006952fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006952ff: call 0x694f0c */ r_esp -= 4; W32(r_esp, 0x695304u); f_00694f0c();
    /* 00695304: mov ecx, dword ptr [ebx + 0x45c] */ r_ecx = R32((u32)(r_ebx+0x45cu));
    /* 0069530a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069530c: je 0x695313 */ if (fZ) goto L_00695313;
L_0069530e:; BB(0x0069530e);
    /* 0069530e: call 0x7a406c */ r_esp -= 4; W32(r_esp, 0x695313u); f_007a406c();
L_00695313:; BB(0x00695313);
    /* 00695313: call 0x807ed0 */ r_esp -= 4; W32(r_esp, 0x695318u); f_00807ed0();
    /* 00695318: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069531a: je 0x69533d */ if (fZ) goto L_0069533d;
L_0069531c:; BB(0x0069531c);
    /* 0069531c: mov eax, dword ptr [ebx + 0x36c] */ r_eax = R32((u32)(r_ebx+0x36cu));
    /* 00695322: mov edx, dword ptr [ebx + 0x374] */ r_edx = R32((u32)(r_ebx+0x374u));
    /* 00695328: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069532a: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069532c: je 0x69533d */ if (fZ) goto L_0069533d;
L_0069532e:; BB(0x0069532e);
    /* 0069532e: test dl, 0xc */ {  u32 a = (u8)r_edx; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695331: je 0x69533d */ if (fZ) goto L_0069533d;
L_00695333:; BB(0x00695333);
    /* 00695333: mov dword ptr [ebx + 0x370], 0x96 */ W32((u32)(r_ebx+0x370u), 0x96u);
L_0069533d:; BB(0x0069533d);
    /* 0069533d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069533e: ret  */ FN_RET(0x006952d4); r_esp += 4; return;
}

void f_00695340(void) /* sub_695340 */
{
    FN_ENTER(0x00695340);
    /* 00695340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695341: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695342: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695343: mov esi, ecx */ r_esi = r_ecx;
    /* 00695345: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695346: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 0069534c: call 0x6acc5c */ r_esp -= 4; W32(r_esp, 0x695351u); f_006acc5c();
    /* 00695351: mov ebx, eax */ r_ebx = r_eax;
    /* 00695353: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695354: call 0x6acc80 */ r_esp -= 4; W32(r_esp, 0x695359u); f_006acc80();
    /* 00695359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069535a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069535b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069535c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069535d: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00695361: call 0x69807c */ r_esp -= 4; W32(r_esp, 0x695366u); f_0069807c();
    /* 00695366: mov eax, 1 */ r_eax = 0x1u;
    /* 0069536b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069536e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069536f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695370: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695371: ret 4 */ FN_RET(0x00695340); r_esp += 8; return;
}

void f_00695374(void) /* sub_695374 */
{
    FN_ENTER(0x00695374);
    /* 00695374: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00695378: add ecx, 0x89c */ {  u32 a = r_ecx; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069537e: call 0x69872c */ r_esp -= 4; W32(r_esp, 0x695383u); f_0069872c();
    /* 00695383: ret 4 */ FN_RET(0x00695374); r_esp += 8; return;
}

void f_00695388(void) /* sub_695388 */
{
    FN_ENTER(0x00695388);
    /* 00695388: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695389: mov edi, ecx */ r_edi = r_ecx;
    /* 0069538b: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x695390u); f_00687c48();
    /* 00695390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695392: jne 0x6953a5 */ if (!fZ) goto L_006953a5;
L_00695394:; BB(0x00695394);
    /* 00695394: mov eax, dword ptr [edi + 0x964] */ r_eax = R32((u32)(r_edi+0x964u));
    /* 0069539a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069539c: je 0x6953a5 */ if (fZ) goto L_006953a5;
L_0069539e:; BB(0x0069539e);
    /* 0069539e: mov eax, 1 */ r_eax = 0x1u;
    /* 006953a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006953a4: ret  */ FN_RET(0x00695388); r_esp += 4; return;
L_006953a5:; BB(0x006953a5);
    /* 006953a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006953a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006953a8: ret  */ FN_RET(0x00695388); r_esp += 4; return;
}

void f_006953ac(void) /* sub_6953AC */
{
    FN_ENTER(0x006953ac);
    /* 006953ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006953ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006953af: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x6953b4u); f_00807d60();
    /* 006953b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006953b6: je 0x6953c1 */ if (fZ) goto L_006953c1;
L_006953b8:; BB(0x006953b8);
    /* 006953b8: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x6953bdu); f_00807db8();
    /* 006953bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006953bf: je 0x6953c5 */ if (fZ) goto L_006953c5;
L_006953c1:; BB(0x006953c1);
    /* 006953c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006953c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006953c4: ret  */ FN_RET(0x006953ac); r_esp += 4; return;
L_006953c5:; BB(0x006953c5);
    /* 006953c5: call 0x6951f4 */ r_esp -= 4; W32(r_esp, 0x6953cau); f_006951f4();
    /* 006953ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006953cc: je 0x6953dc */ if (fZ) goto L_006953dc;
L_006953ce:; BB(0x006953ce);
    /* 006953ce: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 006953d1: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006953d6: je 0x6953e6 */ if (fZ) goto L_006953e6;
L_006953d8:; BB(0x006953d8);
    /* 006953d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006953da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006953db: ret  */ FN_RET(0x006953ac); r_esp += 4; return;
L_006953dc:; BB(0x006953dc);
    /* 006953dc: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 006953e2: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006953e4: je 0x6953d8 */ if (fZ) goto L_006953d8;
L_006953e6:; BB(0x006953e6);
    /* 006953e6: mov eax, 1 */ r_eax = 0x1u;
    /* 006953eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006953ec: ret  */ FN_RET(0x006953ac); r_esp += 4; return;
}

void f_006953f0(void) /* sub_6953F0 */
{
    FN_ENTER(0x006953f0);
    /* 006953f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006953f1: mov edi, ecx */ r_edi = r_ecx;
    /* 006953f3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006953f5: mov ecx, edi */ r_ecx = r_edi;
    /* 006953f7: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x6953fau); call_ind(t); }
    /* 006953fa: movsx edx, byte ptr [edi + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x961u));
    /* 00695401: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695402: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695403: add edi, 0x89c */ {  u32 a = r_edi; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695409: mov ecx, edi */ r_ecx = r_edi;
    /* 0069540b: call 0x698748 */ r_esp -= 4; W32(r_esp, 0x695410u); f_00698748();
    /* 00695410: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695412: je 0x69541b */ if (fZ) goto L_0069541b;
L_00695414:; BB(0x00695414);
    /* 00695414: mov eax, 1 */ r_eax = 0x1u;
    /* 00695419: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069541a: ret  */ FN_RET(0x006953f0); r_esp += 4; return;
L_0069541b:; BB(0x0069541b);
    /* 0069541b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069541d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069541e: ret  */ FN_RET(0x006953f0); r_esp += 4; return;
}

void f_00695420(void) /* sub_695420 */
{
    FN_ENTER(0x00695420);
    /* 00695420: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695421: mov esi, ecx */ r_esi = r_ecx;
    /* 00695423: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00695425: mov ecx, esi */ r_ecx = r_esi;
    /* 00695427: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x69542au); call_ind(t); }
    /* 0069542a: movsx edx, byte ptr [esi + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00695431: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695432: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695433: add esi, 0x89c */ {  u32 a = r_esi; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695439: mov ecx, esi */ r_ecx = r_esi;
    /* 0069543b: call 0x69891c */ r_esp -= 4; W32(r_esp, 0x695440u); f_0069891c();
    /* 00695440: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695441: ret  */ FN_RET(0x00695420); r_esp += 4; return;
}

void f_00695444(void) /* sub_695444 */
{
    FN_ENTER(0x00695444);
    /* 00695444: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695445: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695446: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695447: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695448: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069544e: mov edi, ecx */ r_edi = r_ecx;
    /* 00695450: mov eax, 0xd */ r_eax = 0xdu;
    /* 00695455: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
L_00695459:; BB(0x00695459);
    /* 00695459: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 00695460: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 00695465: mov word ptr [edx], bp */ W16((u32)(r_edx), (u16)r_ebp);
    /* 00695468: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069546b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0069546e: jne 0x695459 */ if (!fZ) goto L_00695459;
L_00695470:; BB(0x00695470);
    /* 00695470: mov eax, dword ptr [0xaca348] */ r_eax = R32((u32)(0xaca348u));
    /* 00695475: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 00695479: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0069547c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0069547e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695480: je 0x6954fe */ if (fZ) goto L_006954fe;
L_00695482:; BB(0x00695482);
    /* 00695482: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00695485: cmp eax, dword ptr [0x9c8840] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9c8840u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069548b: jne 0x6954f7 */ if (!fZ) goto L_006954f7;
L_0069548d:; BB(0x0069548d);
    /* 0069548d: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 00695493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695495: jne 0x6954f7 */ if (!fZ) goto L_006954f7;
L_00695497:; BB(0x00695497);
    /* 00695497: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0069549b: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0069549f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006954a1: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 006954a4: mov ebx, eax */ r_ebx = r_eax;
    /* 006954a6: mov ebp, ecx */ r_ebp = r_ecx;
L_006954a8:; BB(0x006954a8);
    /* 006954a8: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006954ac: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006954ae: jne 0x6955fc */ if (!fZ) goto L_006955fc;
L_006954b4:; BB(0x006954b4);
    /* 006954b4: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006954b7: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006954ba: jl 0x6954a8 */ if ((fS!=fO)) goto L_006954a8;
L_006954bc:; BB(0x006954bc);
    /* 006954bc: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 006954c0: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 006954c4: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 006954c7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006954ca: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006954ce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006954d3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006954d7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006954db: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 006954df: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006954e2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006954e6: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 006954e9: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 006954ec: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006954ef: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006954f2:; BB(0x006954f2);
    /* 006954f2: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006954f5: jg 0x6954fe */ if ((!fZ&&fS==fO)) goto L_006954fe;
L_006954f7:; BB(0x006954f7);
    /* 006954f7: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006954fa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006954fc: jne 0x695482 */ if (!fZ) goto L_00695482;
L_006954fe:; BB(0x006954fe);
    /* 006954fe: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 00695509: mov dword ptr [esp + 0xa0], 0 */ W32((u32)(r_esp+0xa0u), 0x0u);
    /* 00695514: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 0069551f: mov dword ptr [esp + 0x98], 0 */ W32((u32)(r_esp+0x98u), 0x0u);
    /* 0069552a: mov byte ptr [esp + 0x90], 0x24 */ W8((u32)(r_esp+0x90u), 0x24u);
    /* 00695532: mov byte ptr [esp + 0x91], 5 */ W8((u32)(r_esp+0x91u), 0x5u);
    /* 0069553a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x69553fu); f_008587a5();
    /* 0069553f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00695543: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00695547: fdiv dword ptr [0x93c694] */ ST(0) = ST(0) / R_F32((u32)(0x93c694u));
    /* 0069554d: fmul dword ptr [0x93c690] */ ST(0) = ST(0) * R_F32((u32)(0x93c690u));
    /* 00695553: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00695557: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0069555b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0069555d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00695560: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00695564: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695569: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069556d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00695571: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00695575: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00695578: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0069557c: mov eax, dword ptr [esp + eax*8 + 0x2c] */ r_eax = R32((u32)(r_esp+r_eax*8+0x2cu));
    /* 00695580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695582: je 0x695596 */ if (fZ) goto L_00695596;
L_00695584:; BB(0x00695584);
    /* 00695584: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695586: je 0x695596 */ if (fZ) goto L_00695596;
L_00695588:; BB(0x00695588);
    /* 00695588: mov ebp, dword ptr [eax + 0x60] */ r_ebp = R32((u32)(r_eax+0x60u));
    /* 0069558b: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0069558e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00695591: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00695594: jmp 0x6955a2 */ goto L_006955a2;
L_00695596:; BB(0x00695596);
    /* 00695596: mov ebp, dword ptr [edi + 0x60] */ r_ebp = R32((u32)(r_edi+0x60u));
    /* 00695599: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0069559c: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0069559f: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
L_006955a2:; BB(0x006955a2);
    /* 006955a2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006955a4: je 0x6955bd */ if (fZ) goto L_006955bd;
L_006955a6:; BB(0x006955a6);
    /* 006955a6: movsx esi, word ptr [edi + 0x32c] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006955ad: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006955b0: jne 0x6955bd */ if (!fZ) goto L_006955bd;
L_006955b2:; BB(0x006955b2);
    /* 006955b2: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006955b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006955b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006955ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006955bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006955bc: ret  */ FN_RET(0x00695444); r_esp += 4; return;
L_006955bd:; BB(0x006955bd);
    /* 006955bd: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 006955c1: mov word ptr [esp + 0x92], si */ W16((u32)(r_esp+0x92u), (u16)r_esi);
    /* 006955c9: mov dword ptr [esp + 0x94], ebp */ W32((u32)(r_esp+0x94u), r_ebp);
    /* 006955d0: mov dword ptr [esp + 0x98], ecx */ W32((u32)(r_esp+0x98u), r_ecx);
    /* 006955d7: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 006955de: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 006955e5: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 006955ec: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6955f1u); f_008003e0();
    /* 006955f1: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006955f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006955f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006955f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006955fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006955fb: ret  */ FN_RET(0x00695444); r_esp += 4; return;
L_006955fc:; BB(0x006955fc);
    /* 006955fc: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695602: je 0x695649 */ if (fZ) goto L_00695649;
L_00695604:; BB(0x00695604);
    /* 00695604: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695606: jl 0x69560d */ if ((fS!=fO)) goto L_0069560d;
L_00695608:; BB(0x00695608);
    /* 00695608: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0069560b: jl 0x695611 */ if ((fS!=fO)) goto L_00695611;
L_0069560d:; BB(0x0069560d);
    /* 0069560d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069560f: jmp 0x695618 */ goto L_00695618;
L_00695611:; BB(0x00695611);
    /* 00695611: mov edx, dword ptr [ebp*4 + 0xa94254] */ r_edx = R32((u32)(r_ebp*4+0xa94254u));
L_00695618:; BB(0x00695618);
    /* 00695618: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069561a: je 0x6954b4 */ if (fZ) goto L_006954b4;
L_00695620:; BB(0x00695620);
    /* 00695620: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00695623: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695624: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695625: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x69562au); f_007a9180();
    /* 0069562a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069562d: fcomp dword ptr [0x93c68c] */ fx_compare(ST(0), R_F32((u32)(0x93c68cu))); FPOP();
    /* 00695633: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00695635: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00695636: jae 0x6954b4 */ if (!fC) goto L_006954b4;
L_0069563c:; BB(0x0069563c);
    /* 0069563c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00695640: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00695644: jmp 0x6954f2 */ goto L_006954f2;
L_00695649:; BB(0x00695649);
    /* 00695649: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069564b: jmp 0x695618 */ goto L_00695618;
}

void f_00695650(void) /* sub_695650 */
{
    FN_ENTER(0x00695650);
    /* 00695650: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695653: mov eax, dword ptr [0xaca348] */ r_eax = R32((u32)(0xaca348u));
    /* 00695658: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0069565b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069565d: je 0x6956b8 */ if (fZ) goto L_006956b8;
L_0069565f:; BB(0x0069565f);
    /* 0069565f: mov eax, dword ptr [0x9c8840] */ r_eax = R32((u32)(0x9c8840u));
    /* 00695664: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00695668: movzx edi, word ptr [esp + 0x3c] */ r_edi = (u32)R16((u32)(r_esp+0x3cu));
    /* 0069566d: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 00695671: mov ebp, eax */ r_ebp = r_eax;
L_00695673:; BB(0x00695673);
    /* 00695673: cmp ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695676: jne 0x6956a9 */ if (!fZ) goto L_006956a9;
L_00695678:; BB(0x00695678);
    /* 00695678: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0069567e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695680: jne 0x6956a9 */ if (!fZ) goto L_006956a9;
L_00695682:; BB(0x00695682);
    /* 00695682: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 00695685: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 00695689: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0069568e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695693: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00695697: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0069569b: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069569f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006956a3: cmp edi, dword ptr [esp + 0x28] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006956a7: je 0x6956be */ if (fZ) goto L_006956be;
L_006956a9:; BB(0x006956a9);
    /* 006956a9: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 006956ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006956ae: jne 0x695673 */ if (!fZ) goto L_00695673;
L_006956b0:; BB(0x006956b0);
    /* 006956b0: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 006956b4: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
L_006956b8:; BB(0x006956b8);
    /* 006956b8: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006956bb: ret 4 */ FN_RET(0x00695650); r_esp += 8; return;
L_006956be:; BB(0x006956be);
    /* 006956be: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 006956c2: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 006956c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006956c8: je 0x6956dc */ if (fZ) goto L_006956dc;
L_006956ca:; BB(0x006956ca);
    /* 006956ca: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006956d1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006956d4: jne 0x6956dc */ if (!fZ) goto L_006956dc;
L_006956d6:; BB(0x006956d6);
    /* 006956d6: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006956d9: ret 4 */ FN_RET(0x00695650); r_esp += 8; return;
L_006956dc:; BB(0x006956dc);
    /* 006956dc: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006956e0: mov byte ptr [esp], 0x3f */ W8((u32)(r_esp), 0x3fu);
    /* 006956e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006956e6: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006956eb: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 006956f0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006956f5: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 006956fa: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 006956ff: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 00695702: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 00695707: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0069570c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069570f: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00695712: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00695716: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00695719: mov edx, dword ptr [edx + 0x40] */ r_edx = R32((u32)(r_edx+0x40u));
    /* 0069571c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00695720: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00695724: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x695729u); f_008003e0();
    /* 00695729: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069572c: ret 4 */ FN_RET(0x00695650); r_esp += 8; return;
}

void f_00695730(void) /* sub_695730 */
{
    FN_ENTER(0x00695730);
    /* 00695730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695731: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695732: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695733: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695734: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695735: movsx edi, byte ptr [esp + 0x18] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+0x18u));
    /* 0069573a: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0069573e: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00695742: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695744: jge 0x69574a */ if ((fS==fO)) goto L_0069574a;
L_00695746:; BB(0x00695746);
    /* 00695746: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00695748: jmp 0x695757 */ goto L_00695757;
L_0069574a:; BB(0x0069574a);
    /* 0069574a: cmp ebp, 0xc7 */ {  u32 a = r_ebp; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695750: jle 0x695757 */ if ((fZ||fS!=fO)) goto L_00695757;
L_00695752:; BB(0x00695752);
    /* 00695752: mov ebp, 0xc7 */ r_ebp = 0xc7u;
L_00695757:; BB(0x00695757);
    /* 00695757: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695758: call 0x6ac950 */ r_esp -= 4; W32(r_esp, 0x69575du); f_006ac950();
    /* 0069575d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069575f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695760: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00695763: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00695766: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 0069576a: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 0069576e: movzx ebx, word ptr [eax + 4] */ r_ebx = (u32)R16((u32)(r_eax+0x4u));
    /* 00695772: mov word ptr [esi + 4], bx */ W16((u32)(r_esi+0x4u), (u16)r_ebx);
    /* 00695776: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 0069577a: mov word ptr [esi + 6], dx */ W16((u32)(r_esi+0x6u), (u16)r_edx);
    /* 0069577e: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00695782: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 00695786: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 0069578a: mov word ptr [esi + 0xa], dx */ W16((u32)(r_esi+0xau), (u16)r_edx);
    /* 0069578e: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 00695792: mov word ptr [esi + 0xc], ax */ W16((u32)(r_esi+0xcu), (u16)r_eax);
    /* 00695796: call 0x6ac570 */ r_esp -= 4; W32(r_esp, 0x69579bu); f_006ac570();
    /* 0069579b: mov ebx, eax */ r_ebx = r_eax;
    /* 0069579d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006957a0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006957a2: je 0x6958c1 */ if (fZ) goto L_006958c1;
L_006957a8:; BB(0x006957a8);
    /* 006957a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006957a9: call 0x6ac470 */ r_esp -= 4; W32(r_esp, 0x6957aeu); f_006ac470();
    /* 006957ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006957af: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006957b1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006957b3: jle 0x6958c1 */ if ((fZ||fS!=fO)) goto L_006958c1;
L_006957b9:; BB(0x006957b9);
    /* 006957b9: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006957bc:; BB(0x006957bc);
    /* 006957bc: movsx ebp, word ptr [eax] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 006957bf: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 006957c2: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006957c5: movzx edi, byte ptr [ebx] */ r_edi = (u32)R8((u32)(r_ebx));
    /* 006957c8: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006957ca: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 006957cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006957cf: jl 0x695924 */ if ((fS!=fO)) goto L_00695924;
L_006957d5:; BB(0x006957d5);
    /* 006957d5: mov edi, ecx */ r_edi = r_ecx;
    /* 006957d7: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006957d9: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 006957dc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006957de: jle 0x69591c */ if ((fZ||fS!=fO)) goto L_0069591c;
L_006957e4:; BB(0x006957e4);
    /* 006957e4: mov word ptr [esi], bp */ W16((u32)(r_esi), (u16)r_ebp);
L_006957e7:; BB(0x006957e7);
    /* 006957e7: movzx edi, byte ptr [ebx + 1] */ r_edi = (u32)R8((u32)(r_ebx+0x1u));
    /* 006957eb: movsx ebp, word ptr [eax + 2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 006957ef: movzx ecx, word ptr [esi + 2] */ r_ecx = (u32)R16((u32)(r_esi+0x2u));
    /* 006957f3: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006957f5: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 006957f8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006957fa: jl 0x695911 */ if ((fS!=fO)) goto L_00695911;
L_00695800:; BB(0x00695800);
    /* 00695800: mov edi, ecx */ r_edi = r_ecx;
    /* 00695802: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695804: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00695807: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695809: jle 0x695908 */ if ((fZ||fS!=fO)) goto L_00695908;
L_0069580f:; BB(0x0069580f);
    /* 0069580f: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
L_00695813:; BB(0x00695813);
    /* 00695813: movzx edi, byte ptr [ebx + 2] */ r_edi = (u32)R8((u32)(r_ebx+0x2u));
    /* 00695817: movsx ebp, word ptr [eax + 4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 0069581b: movzx ecx, word ptr [esi + 4] */ r_ecx = (u32)R16((u32)(r_esi+0x4u));
    /* 0069581f: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695821: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 00695824: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695826: jl 0x6958fd */ if ((fS!=fO)) goto L_006958fd;
L_0069582c:; BB(0x0069582c);
    /* 0069582c: mov edi, ecx */ r_edi = r_ecx;
    /* 0069582e: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695830: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00695833: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695835: jle 0x6958f4 */ if ((fZ||fS!=fO)) goto L_006958f4;
L_0069583b:; BB(0x0069583b);
    /* 0069583b: mov word ptr [esi + 4], bp */ W16((u32)(r_esi+0x4u), (u16)r_ebp);
L_0069583f:; BB(0x0069583f);
    /* 0069583f: movzx edi, byte ptr [ebx + 3] */ r_edi = (u32)R8((u32)(r_ebx+0x3u));
    /* 00695843: movsx ebp, word ptr [eax + 6] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00695847: movzx ecx, word ptr [esi + 6] */ r_ecx = (u32)R16((u32)(r_esi+0x6u));
    /* 0069584b: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069584d: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 00695850: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00695852: jl 0x6958e9 */ if ((fS!=fO)) goto L_006958e9;
L_00695858:; BB(0x00695858);
    /* 00695858: mov edi, ecx */ r_edi = r_ecx;
    /* 0069585a: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0069585c: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0069585f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695861: jle 0x6958e3 */ if ((fZ||fS!=fO)) goto L_006958e3;
L_00695867:; BB(0x00695867);
    /* 00695867: mov word ptr [esi + 6], bp */ W16((u32)(r_esi+0x6u), (u16)r_ebp);
L_0069586b:; BB(0x0069586b);
    /* 0069586b: movzx edi, byte ptr [ebx + 4] */ r_edi = (u32)R8((u32)(r_ebx+0x4u));
    /* 0069586f: movsx ebp, word ptr [eax + 8] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00695873: movzx ecx, word ptr [esi + 8] */ r_ecx = (u32)R16((u32)(r_esi+0x8u));
    /* 00695877: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695879: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 0069587c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069587e: jl 0x6958db */ if ((fS!=fO)) goto L_006958db;
L_00695880:; BB(0x00695880);
    /* 00695880: mov edi, ecx */ r_edi = r_ecx;
    /* 00695882: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00695884: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00695887: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695889: jle 0x6958d5 */ if ((fZ||fS!=fO)) goto L_006958d5;
L_0069588b:; BB(0x0069588b);
    /* 0069588b: mov word ptr [esi + 8], bp */ W16((u32)(r_esi+0x8u), (u16)r_ebp);
L_0069588f:; BB(0x0069588f);
    /* 0069588f: movzx edi, byte ptr [ebx + 5] */ r_edi = (u32)R8((u32)(r_ebx+0x5u));
    /* 00695893: movsx ebp, word ptr [eax + 0xa] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 00695897: movzx ecx, word ptr [esi + 0xa] */ r_ecx = (u32)R16((u32)(r_esi+0xau));
    /* 0069589b: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0069589d: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 006958a0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006958a2: jl 0x6958cd */ if ((fS!=fO)) goto L_006958cd;
L_006958a4:; BB(0x006958a4);
    /* 006958a4: mov edi, ecx */ r_edi = r_ecx;
    /* 006958a6: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006958a8: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 006958ab: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006958ad: jle 0x6958c7 */ if ((fZ||fS!=fO)) goto L_006958c7;
L_006958af:; BB(0x006958af);
    /* 006958af: mov word ptr [esi + 0xa], bp */ W16((u32)(r_esi+0xau), (u16)r_ebp);
L_006958b3:; BB(0x006958b3);
    /* 006958b3: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006958b6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006958b9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006958bb: jl 0x6957bc */ if ((fS!=fO)) goto L_006957bc;
L_006958c1:; BB(0x006958c1);
    /* 006958c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006958c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006958c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006958c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006958c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006958c6: ret  */ FN_RET(0x00695730); r_esp += 4; return;
L_006958c7:; BB(0x006958c7);
    /* 006958c7: mov word ptr [esi + 0xa], cx */ W16((u32)(r_esi+0xau), (u16)r_ecx);
    /* 006958cb: jmp 0x6958b3 */ goto L_006958b3;
L_006958cd:; BB(0x006958cd);
    /* 006958cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006958cf: mov word ptr [esi + 0xa], cx */ W16((u32)(r_esi+0xau), (u16)r_ecx);
    /* 006958d3: jmp 0x6958b3 */ goto L_006958b3;
L_006958d5:; BB(0x006958d5);
    /* 006958d5: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
    /* 006958d9: jmp 0x69588f */ goto L_0069588f;
L_006958db:; BB(0x006958db);
    /* 006958db: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006958dd: mov word ptr [esi + 8], cx */ W16((u32)(r_esi+0x8u), (u16)r_ecx);
    /* 006958e1: jmp 0x69588f */ goto L_0069588f;
L_006958e3:; BB(0x006958e3);
    /* 006958e3: mov word ptr [esi + 6], cx */ W16((u32)(r_esi+0x6u), (u16)r_ecx);
    /* 006958e7: jmp 0x69586b */ goto L_0069586b;
L_006958e9:; BB(0x006958e9);
    /* 006958e9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006958eb: mov word ptr [esi + 6], cx */ W16((u32)(r_esi+0x6u), (u16)r_ecx);
    /* 006958ef: jmp 0x69586b */ goto L_0069586b;
L_006958f4:; BB(0x006958f4);
    /* 006958f4: mov word ptr [esi + 4], cx */ W16((u32)(r_esi+0x4u), (u16)r_ecx);
    /* 006958f8: jmp 0x69583f */ goto L_0069583f;
L_006958fd:; BB(0x006958fd);
    /* 006958fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006958ff: mov word ptr [esi + 4], cx */ W16((u32)(r_esi+0x4u), (u16)r_ecx);
    /* 00695903: jmp 0x69583f */ goto L_0069583f;
L_00695908:; BB(0x00695908);
    /* 00695908: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 0069590c: jmp 0x695813 */ goto L_00695813;
L_00695911:; BB(0x00695911);
    /* 00695911: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00695913: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 00695917: jmp 0x695813 */ goto L_00695813;
L_0069591c:; BB(0x0069591c);
    /* 0069591c: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 0069591f: jmp 0x6957e7 */ goto L_006957e7;
L_00695924:; BB(0x00695924);
    /* 00695924: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00695926: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 00695929: jmp 0x6957e7 */ goto L_006957e7;
}

void f_00695930(void) /* sub_695930 */
{
    FN_ENTER(0x00695930);
    /* 00695930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695931: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695934: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00695938: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069593a: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0069593f: mov byte ptr [esp + 4], 0x83 */ W8((u32)(r_esp+0x4u), 0x83u);
    /* 00695944: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 00695949: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0069594e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00695950: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00695954: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00695957: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0069595b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0069595f: call 0x6a9ea4 */ r_esp -= 4; W32(r_esp, 0x695964u); f_006a9ea4();
    /* 00695964: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695966: je 0x6959bb */ if (fZ) goto L_006959bb;
L_00695968:; BB(0x00695968);
    /* 00695968: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069596d: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x695972u); f_0068d5ac();
    /* 00695972: mov edi, eax */ r_edi = r_eax;
    /* 00695974: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695976: je 0x6959bb */ if (fZ) goto L_006959bb;
L_00695978:; BB(0x00695978);
    /* 00695978: movsx ecx, word ptr [esp + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0069597d: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 00695982: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695983: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695984: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695985: call 0x62f830 */ r_esp -= 4; W32(r_esp, 0x69598au); f_0062f830();
    /* 0069598a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069598d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069598f: je 0x6959bb */ if (fZ) goto L_006959bb;
L_00695991:; BB(0x00695991);
    /* 00695991: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00695996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695997: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00695999: lea ecx, [edi + 0x89c] */ r_ecx = (u32)(r_edi+0x89cu);
    /* 0069599f: call 0x698954 */ r_esp -= 4; W32(r_esp, 0x6959a4u); f_00698954();
    /* 006959a4: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006959ab: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006959ae: jne 0x6959bb */ if (!fZ) goto L_006959bb;
L_006959b0:; BB(0x006959b0);
    /* 006959b0: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006959b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006959b5: call 0x7191d0 */ r_esp -= 4; W32(r_esp, 0x6959bau); f_007191d0();
    /* 006959ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006959bb:; BB(0x006959bb);
    /* 006959bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006959be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006959bf: ret  */ FN_RET(0x00695930); r_esp += 4; return;
}

void f_006959c0(void) /* sub_6959C0 */
{
    FN_ENTER(0x006959c0);
    /* 006959c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006959c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006959c2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006959c5: mov edi, ecx */ r_edi = r_ecx;
    /* 006959c7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006959c9: je 0x6959e1 */ if (fZ) goto L_006959e1;
L_006959cb:; BB(0x006959cb);
    /* 006959cb: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006959d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006959d5: jne 0x6959e1 */ if (!fZ) goto L_006959e1;
L_006959d7:; BB(0x006959d7);
    /* 006959d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006959d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006959dc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006959dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006959de: ret 4 */ FN_RET(0x006959c0); r_esp += 8; return;
L_006959e1:; BB(0x006959e1);
    /* 006959e1: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006959e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006959e6: call 0x719200 */ r_esp -= 4; W32(r_esp, 0x6959ebu); f_00719200();
    /* 006959eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006959ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006959ee: jne 0x6959fa */ if (!fZ) goto L_006959fa;
L_006959f0:; BB(0x006959f0);
    /* 006959f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006959f2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006959f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006959f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006959f7: ret 4 */ FN_RET(0x006959c0); r_esp += 8; return;
L_006959fa:; BB(0x006959fa);
    /* 006959fa: mov ecx, edi */ r_ecx = r_edi;
    /* 006959fc: call 0x6953ac */ r_esp -= 4; W32(r_esp, 0x695a01u); f_006953ac();
    /* 00695a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695a03: jne 0x695a0f */ if (!fZ) goto L_00695a0f;
L_00695a05:; BB(0x00695a05);
    /* 00695a05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695a07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00695a0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695a0c: ret 4 */ FN_RET(0x006959c0); r_esp += 8; return;
L_00695a0f:; BB(0x00695a0f);
    /* 00695a0f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00695a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695a14: lea esi, [edi + 0x89c] */ r_esi = (u32)(r_edi+0x89cu);
    /* 00695a1a: mov ecx, esi */ r_ecx = r_esi;
    /* 00695a1c: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x695a21u); f_00698984();
    /* 00695a21: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00695a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695a26: jg 0x695a32 */ if ((!fZ&&fS==fO)) goto L_00695a32;
L_00695a28:; BB(0x00695a28);
    /* 00695a28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695a2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00695a2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695a2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695a2f: ret 4 */ FN_RET(0x006959c0); r_esp += 8; return;
L_00695a32:; BB(0x00695a32);
    /* 00695a32: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00695a36: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00695a3a: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00695a3f: mov ecx, esi */ r_ecx = r_esi;
    /* 00695a41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695a43: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00695a48: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00695a4c: mov word ptr [esp + 4], di */ W16((u32)(r_esp+0x4u), (u16)r_edi);
    /* 00695a51: mov byte ptr [esp], 0x83 */ W8((u32)(r_esp), 0x83u);
    /* 00695a55: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00695a5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695a5b: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x695a60u); f_00698984();
    /* 00695a60: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00695a63: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00695a66: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00695a6b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x695a70u); f_008003e0();
    /* 00695a70: mov eax, 1 */ r_eax = 0x1u;
    /* 00695a75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00695a78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695a79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695a7a: ret 4 */ FN_RET(0x006959c0); r_esp += 8; return;
}

void f_00695a80(void) /* sub_695A80 */
{
    FN_ENTER(0x00695a80);
    /* 00695a80: call 0x6950b8 */ r_esp -= 4; W32(r_esp, 0x695a85u); f_006950b8();
    /* 00695a85: mov dword ptr [0xa942bc], 1 */ W32((u32)(0xa942bcu), 0x1u);
    /* 00695a8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695a91: mov dword ptr [0xa942c0], eax */ W32((u32)(0xa942c0u), r_eax);
    /* 00695a96: mov dword ptr [0xa942b8], eax */ W32((u32)(0xa942b8u), r_eax);
    /* 00695a9b: mov dword ptr [0xa94284], eax */ W32((u32)(0xa94284u), r_eax);
    /* 00695aa0: call 0x6a7af4 */ r_esp -= 4; W32(r_esp, 0x695aa5u); f_006a7af4();
    /* 00695aa5: call 0x6a796c */ r_esp -= 4; W32(r_esp, 0x695aaau); f_006a796c();
    /* 00695aaa: call 0x6a7abc */ r_esp -= 4; W32(r_esp, 0x695aafu); f_006a7abc();
    /* 00695aaf: call 0x6a7a84 */ r_esp -= 4; W32(r_esp, 0x695ab4u); f_006a7a84();
    /* 00695ab4: call 0x6a7a18 */ r_esp -= 4; W32(r_esp, 0x695ab9u); f_006a7a18();
    /* 00695ab9: call 0x7a41d0 */ r_esp -= 4; W32(r_esp, 0x695abeu); f_007a41d0();
    /* 00695abe: call 0x6970e8 */ r_esp -= 4; W32(r_esp, 0x695ac3u); f_006970e8();
    /* 00695ac3: call 0x6aa0cc */ r_esp -= 4; W32(r_esp, 0x695ac8u); f_006aa0cc();
    /* 00695ac8: mov dword ptr [0xa94248], 0 */ W32((u32)(0xa94248u), 0x0u);
    /* 00695ad2: ret  */ FN_RET(0x00695a80); r_esp += 4; return;
}

void f_00695ad4(void) /* sub_695AD4 */
{
    FN_ENTER(0x00695ad4);
    /* 00695ad4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695ad5: mov edi, ecx */ r_edi = r_ecx;
    /* 00695ad7: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00695adb: movzx edx, byte ptr [ecx + 7] */ r_edx = (u32)R8((u32)(r_ecx+0x7u));
    /* 00695adf: movzx eax, byte ptr [ecx + 0x23] */ r_eax = (u32)R8((u32)(r_ecx+0x23u));
    /* 00695ae3: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00695ae6: and eax, 0xff00 */ {  u32 a = r_eax; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00695aeb: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00695aed: movzx eax, byte ptr [ecx + 0x3f] */ r_eax = (u32)R8((u32)(r_ecx+0x3fu));
    /* 00695af1: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00695af4: and eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00695af9: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00695afb: movzx eax, byte ptr [ecx + 0x5b] */ r_eax = (u32)R8((u32)(r_ecx+0x5bu));
    /* 00695aff: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00695b02: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00695b04: mov dword ptr [edi + 0x454], edx */ W32((u32)(r_edi+0x454u), r_edx);
    /* 00695b0a: movzx eax, byte ptr [ecx + 0x77] */ r_eax = (u32)R8((u32)(r_ecx+0x77u));
    /* 00695b0e: movzx edx, byte ptr [ecx + 0x93] */ r_edx = (u32)R8((u32)(r_ecx+0x93u));
    /* 00695b15: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00695b18: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00695b1e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695b20: movzx edx, byte ptr [ecx + 0xaf] */ r_edx = (u32)R8((u32)(r_ecx+0xafu));
    /* 00695b27: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00695b2a: and edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00695b30: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695b32: movzx edx, byte ptr [ecx + 0xcb] */ r_edx = (u32)R8((u32)(r_ecx+0xcbu));
    /* 00695b39: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00695b3c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695b3e: mov dword ptr [edi + 0x458], eax */ W32((u32)(r_edi+0x458u), r_eax);
    /* 00695b44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695b45: ret 4 */ FN_RET(0x00695ad4); r_esp += 8; return;
}

void f_00695b48(void) /* sub_695B48 */
{
    FN_ENTER(0x00695b48);
    /* 00695b48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695b49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695b4a: mov edi, ecx */ r_edi = r_ecx;
    /* 00695b4c: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00695b50: movzx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)R16((u32)(r_edi+0x2bcu));
    /* 00695b57: movzx edx, word ptr [edi + 0x2be] */ r_edx = (u32)R16((u32)(r_edi+0x2beu));
    /* 00695b5e: mov word ptr [edi + 0x334], ax */ W16((u32)(r_edi+0x334u), (u16)r_eax);
    /* 00695b65: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00695b6c: mov word ptr [edi + 0x336], dx */ W16((u32)(r_edi+0x336u), (u16)r_edx);
    /* 00695b73: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695b76: jne 0x695b92 */ if (!fZ) goto L_00695b92;
L_00695b78:; BB(0x00695b78);
    /* 00695b78: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x695b7du); f_0068be84();
    /* 00695b7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695b7f: jne 0x695b92 */ if (!fZ) goto L_00695b92;
L_00695b81:; BB(0x00695b81);
    /* 00695b81: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 00695b86: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695b89: je 0x695b92 */ if (fZ) goto L_00695b92;
L_00695b8b:; BB(0x00695b8b);
    /* 00695b8b: mov ecx, edi */ r_ecx = r_edi;
    /* 00695b8d: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x695b92u); f_00692804();
L_00695b92:; BB(0x00695b92);
    /* 00695b92: mov eax, dword ptr [edi + 0x964] */ r_eax = R32((u32)(r_edi+0x964u));
    /* 00695b98: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00695b9a: je 0x695bad */ if (fZ) goto L_00695bad;
L_00695b9c:; BB(0x00695b9c);
    /* 00695b9c: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00695ba2: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00695ba7: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
L_00695bad:; BB(0x00695bad);
    /* 00695bad: mov ecx, edi */ r_ecx = r_edi;
    /* 00695baf: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x695bb4u); f_00695388();
    /* 00695bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695bb6: jne 0x695c04 */ if (!fZ) goto L_00695c04;
L_00695bb8:; BB(0x00695bb8);
    /* 00695bb8: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x695bbdu); f_00793228();
    /* 00695bbd: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00695bc1: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00695bc4: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 00695bca: mov word ptr [edi + 0x688], dx */ W16((u32)(r_edi+0x688u), (u16)r_edx);
    /* 00695bd1: mov ecx, edi */ r_ecx = r_edi;
    /* 00695bd3: call 0x691a98 */ r_esp -= 4; W32(r_esp, 0x695bd8u); f_00691a98();
    /* 00695bd8: movzx eax, byte ptr [ebp + 0x173] */ r_eax = (u32)R8((u32)(r_ebp+0x173u));
    /* 00695bdf: mov byte ptr [edi + 0x344], al */ W8((u32)(r_edi+0x344u), (u8)r_eax);
    /* 00695be5: movzx edx, byte ptr [ebp + 0x18f] */ r_edx = (u32)R8((u32)(r_ebp+0x18fu));
    /* 00695bec: mov byte ptr [edi + 0x345], dl */ W8((u32)(r_edi+0x345u), (u8)r_edx);
    /* 00695bf2: movzx eax, byte ptr [ebp + 0x1ab] */ r_eax = (u32)R8((u32)(r_ebp+0x1abu));
    /* 00695bf9: mov byte ptr [edi + 0x346], al */ W8((u32)(r_edi+0x346u), (u8)r_eax);
    /* 00695bff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695c00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695c01: ret 4 */ FN_RET(0x00695b48); r_esp += 8; return;
L_00695c04:; BB(0x00695c04);
    /* 00695c04: mov ecx, edi */ r_ecx = r_edi;
    /* 00695c06: call 0x695420 */ r_esp -= 4; W32(r_esp, 0x695c0bu); f_00695420();
    /* 00695c0b: jmp 0x695bb8 */ goto L_00695bb8;
}

void f_00695c10(void) /* sub_695C10 */
{
    FN_ENTER(0x00695c10);
    /* 00695c10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695c11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695c12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695c13: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695c16: mov esi, ecx */ r_esi = r_ecx;
    /* 00695c18: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00695c1c: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 00695c1f: lea edi, [eax + 4] */ r_edi = (u32)(r_eax+0x4u);
    /* 00695c22: mov ecx, esi */ r_ecx = r_esi;
    /* 00695c24: call 0x68600c */ r_esp -= 4; W32(r_esp, 0x695c29u); f_0068600c();
    /* 00695c29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00695c2b: mov ecx, esi */ r_ecx = r_esi;
    /* 00695c2d: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x695c32u); f_00687d30();
    /* 00695c32: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00695c39: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695c3c: jne 0x695c4b */ if (!fZ) goto L_00695c4b;
L_00695c3e:; BB(0x00695c3e);
    /* 00695c3e: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x695c43u); f_0068be84();
    /* 00695c43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695c45: jne 0x695d22 */ if (!fZ) goto L_00695d22;
L_00695c4b:; BB(0x00695c4b);
    /* 00695c4b: mov eax, dword ptr [0xa94248] */ r_eax = R32((u32)(0xa94248u));
    /* 00695c50: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00695c52: jne 0x695c94 */ if (!fZ) goto L_00695c94;
L_00695c54:; BB(0x00695c54);
    /* 00695c54: mov ecx, edi */ r_ecx = r_edi;
    /* 00695c56: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695c58: je 0x695c94 */ if (fZ) goto L_00695c94;
L_00695c5a:; BB(0x00695c5a);
    /* 00695c5a: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00695c5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695c60: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695c62: jle 0x695c94 */ if ((fZ||fS!=fO)) goto L_00695c94;
L_00695c64:; BB(0x00695c64);
    /* 00695c64: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00695c68: mov edi, edx */ r_edi = r_edx;
    /* 00695c6a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00695c6d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00695c71: mov esi, eax */ r_esi = r_eax;
    /* 00695c73: mov ebp, ecx */ r_ebp = r_ecx;
L_00695c75:; BB(0x00695c75);
    /* 00695c75: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695c76: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x695c7bu); f_005e3aac();
    /* 00695c7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00695c7c: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00695c7f: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00695c82: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695c85: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695c87: jl 0x695c75 */ if ((fS!=fO)) goto L_00695c75;
L_00695c89:; BB(0x00695c89);
    /* 00695c89: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00695c8d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00695c90: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_00695c94:; BB(0x00695c94);
    /* 00695c94: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695c96: je 0x695d22 */ if (fZ) goto L_00695d22;
L_00695c9c:; BB(0x00695c9c);
    /* 00695c9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00695c9e: mov ecx, esi */ r_ecx = r_esi;
    /* 00695ca0: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x695ca5u); f_00687d30();
    /* 00695ca5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695ca7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695ca9: jle 0x695d10 */ if ((fZ||fS!=fO)) goto L_00695d10;
L_00695cab:; BB(0x00695cab);
    /* 00695cab: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00695caf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00695cb2: mov esi, eax */ r_esi = r_eax;
L_00695cb4:; BB(0x00695cb4);
    /* 00695cb4: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 00695cb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695cb8: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x695cbdu); f_005c3a80();
    /* 00695cbd: mov ebx, eax */ r_ebx = r_eax;
    /* 00695cbf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695cc2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695cc4: je 0x695cff */ if (fZ) goto L_00695cff;
L_00695cc6:; BB(0x00695cc6);
    /* 00695cc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695cc7: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00695ccb: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x695cd0u); f_00687904();
    /* 00695cd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695cd2: je 0x695cff */ if (fZ) goto L_00695cff;
L_00695cd4:; BB(0x00695cd4);
    /* 00695cd4: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00695cd7: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00695cda: je 0x695cff */ if (fZ) goto L_00695cff;
L_00695cdc:; BB(0x00695cdc);
    /* 00695cdc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00695cde: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00695ce0: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x695ce3u); call_ind(t); }
    /* 00695ce3: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00695ce7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00695cea: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 00695cf0: mov edx, eax */ r_edx = r_eax;
    /* 00695cf2: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00695cf5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695cf6: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x695cfbu); f_0069792c();
    /* 00695cfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695cfd: je 0x695d3e */ if (fZ) goto L_00695d3e;
L_00695cff:; BB(0x00695cff);
    /* 00695cff: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00695d03: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00695d06: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00695d09: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695d0b: jl 0x695cb4 */ if ((fS!=fO)) goto L_00695cb4;
L_00695d0d:; BB(0x00695d0d);
    /* 00695d0d: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00695d10:; BB(0x00695d10);
    /* 00695d10: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x695d15u); f_00807d60();
    /* 00695d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695d17: jne 0x695d22 */ if (!fZ) goto L_00695d22;
L_00695d19:; BB(0x00695d19);
    /* 00695d19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00695d1b: mov ecx, esi */ r_ecx = r_esi;
    /* 00695d1d: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x695d22u); f_00687d30();
L_00695d22:; BB(0x00695d22);
    /* 00695d22: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00695d26: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00695d29: add eax, dword ptr [0xa9424c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9424cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00695d2f: mov dword ptr [esi + 0xebc], eax */ W32((u32)(r_esi+0xebcu), r_eax);
    /* 00695d35: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00695d38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695d39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695d3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695d3b: ret 4 */ FN_RET(0x00695c10); r_esp += 8; return;
L_00695d3e:; BB(0x00695d3e);
    /* 00695d3e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00695d40: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00695d42: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x695d45u); call_ind(t); }
    /* 00695d45: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00695d49: mov edx, eax */ r_edx = r_eax;
    /* 00695d4b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00695d4e: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00695d51: mov dword ptr [eax + edx*4 + 0xdf8], ebx */ W32((u32)(r_eax+r_edx*4+0xdf8u), r_ebx);
    /* 00695d58: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00695d5e: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00695d64: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
    /* 00695d6a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00695d6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00695d6e: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x695d71u); call_ind(t); }
    /* 00695d71: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00695d74: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00695d7a: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00695d80: mov dword ptr [ecx + 0x33c], edx */ W32((u32)(r_ecx+0x33cu), r_edx);
    /* 00695d86: jmp 0x695cff */ goto L_00695cff;
}

void f_00695d8c(void) /* sub_695D8C */
{
    FN_ENTER(0x00695d8c);
    /* 00695d8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695d8d: mov edi, ecx */ r_edi = r_ecx;
    /* 00695d8f: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 00695d96: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00695d99: jne 0x695da9 */ if (!fZ) goto L_00695da9;
L_00695d9b:; BB(0x00695d9b);
    /* 00695d9b: mov ecx, edi */ r_ecx = r_edi;
    /* 00695d9d: call 0x688c58 */ r_esp -= 4; W32(r_esp, 0x695da2u); f_00688c58();
    /* 00695da2: mov ecx, edi */ r_ecx = r_edi;
    /* 00695da4: call 0x688c68 */ r_esp -= 4; W32(r_esp, 0x695da9u); f_00688c68();
L_00695da9:; BB(0x00695da9);
    /* 00695da9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695daa: ret  */ FN_RET(0x00695d8c); r_esp += 4; return;
}

void f_00695dac(void) /* sub_695DAC */
{
    FN_ENTER(0x00695dac);
    /* 00695dac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00695dad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00695dae: mov eax, ecx */ r_eax = r_ecx;
    /* 00695db0: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00695db4: lea edi, [eax + 0x538] */ r_edi = (u32)(r_eax+0x538u);
    /* 00695dba: mov ecx, 0xe8 */ r_ecx = 0xe8u;
    /* 00695dbf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00695dc0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00695dc3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00695dc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00695dc6: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00695dc9: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00695dcb: mov ecx, eax */ r_ecx = r_eax;
    /* 00695dcd: call 0x695dd8 */ r_esp -= 4; W32(r_esp, 0x695dd2u); f_00695dd8();
    /* 00695dd2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00695dd3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00695dd4: ret 4 */ FN_RET(0x00695dac); r_esp += 8; return;
}

void f_00695dd8(void) /* sub_695DD8 */
{
    FN_ENTER(0x00695dd8);
    /* 00695dd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00695dd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00695ddb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00695ddd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00695ddf: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x695de4u); f_006893f0();
    /* 00695de4: mov byte ptr [eax + 4], 1 */ W8((u32)(r_eax+0x4u), 0x1u);
    /* 00695de8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00695dea: mov byte ptr [eax + 5], dl */ W8((u32)(r_eax+0x5u), (u8)r_edx);
    /* 00695ded: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00695def: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695df0: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x695df5u); f_006893f0();
    /* 00695df5: mov byte ptr [eax + 0x3c], 1 */ W8((u32)(r_eax+0x3cu), 0x1u);
    /* 00695df9: mov byte ptr [eax + 0x3d], 0 */ W8((u32)(r_eax+0x3du), 0x0u);
    /* 00695dfd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00695dfe: ret  */ FN_RET(0x00695dd8); r_esp += 4; return;
}

void f_00695e00(void) /* sub_695E00 */
{
    FN_ENTER(0x00695e00);
    /* 00695e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00695e03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00695e05: push 0x8eb3e2 */ { u32 v = 0x8eb3e2u; r_esp -= 4; W32(r_esp, v); }
    /* 00695e0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00695e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695e11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00695e18: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00695e1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00695e1e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00695e21: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00695e24: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00695e27: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00695e2a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x695e2fu); f_006dc358();
    /* 00695e2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695e32: jne 0x695e43 */ if (!fZ) goto L_00695e43;
L_00695e34:; BB(0x00695e34);
    /* 00695e34: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00695e37: mov edx, dword ptr [eax + 0x45c] */ r_edx = R32((u32)(r_eax+0x45cu));
    /* 00695e3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695e3f: je 0x695e72 */ if (fZ) goto L_00695e72;
L_00695e41:; BB(0x00695e41);
    /* 00695e41: jmp 0x695e64 */ goto L_00695e64;
L_00695e43:; BB(0x00695e43);
    /* 00695e43: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00695e46: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00695e4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695e50: je 0x695e57 */ if (fZ) goto L_00695e57;
L_00695e52:; BB(0x00695e52);
    /* 00695e52: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00695e55: jne 0x695e64 */ if (!fZ) goto L_00695e64;
L_00695e57:; BB(0x00695e57);
    /* 00695e57: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00695e5a: mov edx, dword ptr [eax + 0x45c] */ r_edx = R32((u32)(r_eax+0x45cu));
    /* 00695e60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695e62: je 0x695eca */ if (fZ) goto L_00695eca;
L_00695e64:; BB(0x00695e64);
    /* 00695e64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00695e67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00695e6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00695e70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00695e71: ret  */ FN_RET(0x00695e00); r_esp += 4; return;
L_00695e72:; BB(0x00695e72);
    /* 00695e72: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00695e79: push 0x10bc */ { u32 v = 0x10bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00695e7e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x695e83u); f_005caba4();
    /* 00695e83: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00695e86: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695e89: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00695e8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695e8e: je 0x695ec3 */ if (fZ) goto L_00695ec3;
L_00695e90:; BB(0x00695e90);
    /* 00695e90: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00695e97: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00695e9e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00695ea1: mov ecx, eax */ r_ecx = r_eax;
    /* 00695ea3: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00695ea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695ea8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695ea9: call 0x7a37dc */ r_esp -= 4; W32(r_esp, 0x695eaeu); f_007a37dc();
    /* 00695eae: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00695eb5:; BB(0x00695eb5);
    /* 00695eb5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00695eb8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00695ebb: mov dword ptr [edx + 0x45c], eax */ W32((u32)(r_edx+0x45cu), r_eax);
    /* 00695ec1: jmp 0x695e64 */ goto L_00695e64;
L_00695ec3:; BB(0x00695ec3);
    /* 00695ec3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695ec5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00695ec8: jmp 0x695eb5 */ goto L_00695eb5;
L_00695eca:; BB(0x00695eca);
    /* 00695eca: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00695ed1: push 0x10bc */ { u32 v = 0x10bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00695ed6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x695edbu); f_005caba4();
    /* 00695edb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00695ede: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00695ee1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00695ee4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695ee6: je 0x695f1e */ if (fZ) goto L_00695f1e;
L_00695ee8:; BB(0x00695ee8);
    /* 00695ee8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00695eef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00695ef6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00695ef9: mov ecx, eax */ r_ecx = r_eax;
    /* 00695efb: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00695eff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695f00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00695f01: call 0x7a37dc */ r_esp -= 4; W32(r_esp, 0x695f06u); f_007a37dc();
    /* 00695f06: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00695f0d:; BB(0x00695f0d);
    /* 00695f0d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00695f10: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00695f13: mov dword ptr [edx + 0x45c], eax */ W32((u32)(r_edx+0x45cu), r_eax);
    /* 00695f19: jmp 0x695e64 */ goto L_00695e64;
L_00695f1e:; BB(0x00695f1e);
    /* 00695f1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00695f20: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00695f23: jmp 0x695f0d */ goto L_00695f0d;
}

void f_00695f28(void) /* sub_695F28 */
{
    FN_ENTER(0x00695f28);
    /* 00695f28: movsx edx, word ptr [ecx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00695f2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00695f31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00695f33: mov dword ptr [ecx + 0x758], 0 */ W32((u32)(r_ecx+0x758u), 0x0u);
    /* 00695f3d: mov dword ptr [ecx + 0x75c], 0 */ W32((u32)(r_ecx+0x75cu), 0x0u);
    /* 00695f47: mov dword ptr [ecx + 0x760], 0 */ W32((u32)(r_ecx+0x760u), 0x0u);
    /* 00695f51: mov dword ptr [ecx + 0x764], 0x40a00000 */ W32((u32)(r_ecx+0x764u), 0x40a00000u);
    /* 00695f5b: mov dword ptr [ecx + 0x768], 0x40a00000 */ W32((u32)(r_ecx+0x768u), 0x40a00000u);
    /* 00695f65: mov dword ptr [ecx + 0x76c], 0 */ W32((u32)(r_ecx+0x76cu), 0x0u);
    /* 00695f6f: jle 0x695fce */ if ((fZ||fS!=fO)) goto L_00695fce;
L_00695f71:; BB(0x00695f71);
    /* 00695f71: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00695f74: jle 0x695fae */ if ((fZ||fS!=fO)) goto L_00695fae;
L_00695f76:; BB(0x00695f76);
    /* 00695f76: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695f79: jne 0x695f9d */ if (!fZ) goto L_00695f9d;
L_00695f7b:; BB(0x00695f7b);
    /* 00695f7b: mov edx, dword ptr [ecx + 0x8fc] */ r_edx = R32((u32)(r_ecx+0x8fcu));
    /* 00695f81: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695f83: jne 0x695f91 */ if (!fZ) goto L_00695f91;
L_00695f85:; BB(0x00695f85);
    /* 00695f85: mov dword ptr [ecx + 0x770], 0x604b */ W32((u32)(r_ecx+0x770u), 0x604bu);
    /* 00695f8f: jmp 0x695fce */ goto L_00695fce;
L_00695f91:; BB(0x00695f91);
    /* 00695f91: mov dword ptr [ecx + 0x770], 0x6043 */ W32((u32)(r_ecx+0x770u), 0x6043u);
    /* 00695f9b: jmp 0x695fce */ goto L_00695fce;
L_00695f9d:; BB(0x00695f9d);
    /* 00695f9d: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695fa0: jne 0x695fce */ if (!fZ) goto L_00695fce;
L_00695fa2:; BB(0x00695fa2);
    /* 00695fa2: mov dword ptr [ecx + 0x770], 0x16043 */ W32((u32)(r_ecx+0x770u), 0x16043u);
    /* 00695fac: jmp 0x695fce */ goto L_00695fce;
L_00695fae:; BB(0x00695fae);
    /* 00695fae: mov edx, dword ptr [ecx + 0x8fc] */ r_edx = R32((u32)(r_ecx+0x8fcu));
    /* 00695fb4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00695fb6: jne 0x695fc4 */ if (!fZ) goto L_00695fc4;
L_00695fb8:; BB(0x00695fb8);
    /* 00695fb8: mov dword ptr [ecx + 0x770], 0x200b */ W32((u32)(r_ecx+0x770u), 0x200bu);
    /* 00695fc2: jmp 0x695fce */ goto L_00695fce;
L_00695fc4:; BB(0x00695fc4);
    /* 00695fc4: mov dword ptr [ecx + 0x770], 0x2003 */ W32((u32)(r_ecx+0x770u), 0x2003u);
L_00695fce:; BB(0x00695fce);
    /* 00695fce: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 00695fd1: mov dword ptr [ecx + 0x774], edx */ W32((u32)(r_ecx+0x774u), r_edx);
    /* 00695fd7: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00695fda: mov dword ptr [ecx + 0x778], edx */ W32((u32)(r_ecx+0x778u), r_edx);
    /* 00695fe0: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00695fe3: mov dword ptr [ecx + 0x77c], edx */ W32((u32)(r_ecx+0x77cu), r_edx);
    /* 00695fe9: mov dword ptr [ecx + 0x780], eax */ W32((u32)(r_ecx+0x780u), r_eax);
    /* 00695fef: lea eax, [ecx + 0x758] */ r_eax = (u32)(r_ecx+0x758u);
    /* 00695ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00695ff6: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x695ffbu); f_007b9ccc();
    /* 00695ffb: ret  */ FN_RET(0x00695f28); r_esp += 4; return;
}

void f_00695ffc(void) /* sub_695FFC */
{
    FN_ENTER(0x00695ffc);
    /* 00695ffc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00695ffd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00695fff: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00696003: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00696006: add eax, dword ptr [0xa94250] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa94250u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069600c: mov dword ptr [ebp + 0xe0], eax */ W32((u32)(r_ebp+0xe0u), r_eax);
    /* 00696012: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00696014: call 0x6875a0 */ r_esp -= 4; W32(r_esp, 0x696019u); f_006875a0();
    /* 00696019: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0069601d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069601e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00696020: call 0x695188 */ r_esp -= 4; W32(r_esp, 0x696025u); f_00695188();
    /* 00696025: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00696027: call 0x687610 */ r_esp -= 4; W32(r_esp, 0x69602cu); f_00687610();
    /* 0069602c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069602e: call 0x6876b0 */ r_esp -= 4; W32(r_esp, 0x696033u); f_006876b0();
    /* 00696033: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00696034: ret  */ FN_RET(0x00695ffc); r_esp += 4; return;
}

