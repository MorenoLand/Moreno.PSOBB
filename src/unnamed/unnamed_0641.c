#include "protos.h"

void f_00641014(void) /* sub_641014 */
{
    FN_ENTER(0x00641014);
    /* 00641014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00641015: mov edi, ecx */ r_edi = r_ecx;
    /* 00641017: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 0064101a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064101c: je 0x64104b */ if (fZ) goto L_0064104b;
L_0064101e:; BB(0x0064101e);
    /* 0064101e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00641022: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00641027: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0064102b: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0064102e: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00641032: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00641038: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0064103c: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0064103f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x641044u); f_007127b0();
    /* 00641044: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
L_0064104b:; BB(0x0064104b);
    /* 0064104b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064104c: ret  */ FN_RET(0x00641014); r_esp += 4; return;
}

void f_00641050(void) /* sub_641050 */
{
    FN_ENTER(0x00641050);
    /* 00641050: mov dword ptr [0xa8f2c8], 0x3f800000 */ W32((u32)(0xa8f2c8u), 0x3f800000u);
    /* 0064105a: mov dword ptr [0xa8f2cc], 0x41000000 */ W32((u32)(0xa8f2ccu), 0x41000000u);
    /* 00641064: mov dword ptr [0xa8f2d0], 0x3fc00000 */ W32((u32)(0xa8f2d0u), 0x3fc00000u);
    /* 0064106e: ret  */ FN_RET(0x00641050); r_esp += 4; return;
}

void f_00641070(void) /* sub_641070 */
{
    FN_ENTER(0x00641070);
    /* 00641070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641071: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641074: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00641076: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00641079: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064107b: je 0x641089 */ if (fZ) goto L_00641089;
L_0064107d:; BB(0x0064107d);
    /* 0064107d: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x641082u); f_007127b0();
    /* 00641082: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_00641089:; BB(0x00641089);
    /* 00641089: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 0064108b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x641090u); f_0073ec50();
    /* 00641090: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641096: push 0x9c6da0 */ { u32 v = 0x9c6da0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064109b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064109c: call 0x714b7c */ r_esp -= 4; W32(r_esp, 0x6410a1u); f_00714b7c();
    /* 006410a1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006410a4: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 006410a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006410a9: je 0x641161 */ if (fZ) goto L_00641161;
L_006410af:; BB(0x006410af);
    /* 006410af: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 006410b6: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006410ba: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006410be: or edx, 0xffff0040 */ {  u32 a = r_edx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006410c4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006410c8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006410cb: mov word ptr [eax + 0x84], dx */ W16((u32)(r_eax+0x84u), (u16)r_edx);
    /* 006410d2: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006410d5: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006410dc: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006410e1: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006410e8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006410ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006410ec: lea eax, [ebx + 0x28] */ r_eax = (u32)(r_ebx+0x28u);
    /* 006410ef: mov ebx, eax */ r_ebx = r_eax;
    /* 006410f1: mov ebp, edx */ r_ebp = r_edx;
    /* 006410f3: mov esi, ecx */ r_esi = r_ecx;
L_006410f5:; BB(0x006410f5);
    /* 006410f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006410f6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6410fbu); f_0068d5a8();
    /* 006410fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006410fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006410fe: je 0x641166 */ if (fZ) goto L_00641166;
L_00641100:; BB(0x00641100);
    /* 00641100: mov ecx, eax */ r_ecx = r_eax;
    /* 00641102: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x641107u); f_006936b4();
    /* 00641107: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 0064110a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0064110c: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0064110e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00641110: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00641113: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641115: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00641119: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0064111d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0064111f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641121: lea edi, [edi + edx + 0x28] */ r_edi = (u32)(r_edi+r_edx+0x28u);
    /* 00641125: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641126: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00641127: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x64112cu); f_00857dec();
    /* 0064112c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0064112f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00641133: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00641137: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00641138: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064113a: mov word ptr [ecx + edx*8 + 0x56], ax */ W16((u32)(r_ecx+r_edx*8+0x56u), (u16)r_eax);
    /* 0064113f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00641140: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00641143: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x641148u); f_00714d34();
L_00641148:; BB(0x00641148);
    /* 00641148: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0064114b: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0064114e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00641151: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00641154: jl 0x6410f5 */ if ((fS!=fO)) goto L_006410f5;
L_00641156:; BB(0x00641156);
    /* 00641156: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0064115a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0064115e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00641161:; BB(0x00641161);
    /* 00641161: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00641164: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641165: ret  */ FN_RET(0x00641070); r_esp += 4; return;
L_00641166:; BB(0x00641166);
    /* 00641166: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0064116a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064116b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064116c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0064116e: mov word ptr [ebp + eax + 0x28], di */ W16((u32)(r_ebp+r_eax+0x28u), (u16)r_edi);
    /* 00641173: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00641176: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x64117bu); f_00714d34();
    /* 0064117b: jmp 0x641148 */ goto L_00641148;
}

void f_00641180(void) /* sub_641180 */
{
    FN_ENTER(0x00641180);
    /* 00641180: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641181: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00641183: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00641185: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x64118au); f_00641218();
    /* 0064118a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064118e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641190: jne 0x641196 */ if (!fZ) goto L_00641196;
L_00641192:; BB(0x00641192);
    /* 00641192: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641193: ret 4 */ FN_RET(0x00641180); r_esp += 8; return;
L_00641196:; BB(0x00641196);
    /* 00641196: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641197: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64119cu); f_005c2f74();
    /* 0064119c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064119d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064119e: ret 4 */ FN_RET(0x00641180); r_esp += 8; return;
}

void f_006411a4(void) /* sub_6411A4 */
{
    FN_ENTER(0x006411a4);
    /* 006411a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006411a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006411a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006411a9: call 0x6411c8 */ r_esp -= 4; W32(r_esp, 0x6411aeu); f_006411c8();
    /* 006411ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006411b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006411b4: jne 0x6411ba */ if (!fZ) goto L_006411ba;
L_006411b6:; BB(0x006411b6);
    /* 006411b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006411b7: ret 4 */ FN_RET(0x006411a4); r_esp += 8; return;
L_006411ba:; BB(0x006411ba);
    /* 006411ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006411bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6411c0u); f_005c2f74();
    /* 006411c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006411c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006411c2: ret 4 */ FN_RET(0x006411a4); r_esp += 8; return;
}

void f_006411c8(void) /* sub_6411C8 */
{
    FN_ENTER(0x006411c8);
    /* 006411c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006411c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006411cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006411cd: push 0x8e5358 */ { u32 v = 0x8e5358u; r_esp -= 4; W32(r_esp, v); }
    /* 006411d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006411d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006411d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006411e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006411e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006411e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006411e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006411ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006411ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006411f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006411f5: mov dword ptr [ecx], 0xb2ed98 */ W32((u32)(r_ecx), 0xb2ed98u);
    /* 006411fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00641202: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x641207u); f_00641218();
    /* 00641207: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064120a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641211: mov esp, ebp */ r_esp = r_ebp;
    /* 00641213: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641214: ret  */ FN_RET(0x006411c8); r_esp += 4; return;
}

void f_00641218(void) /* sub_641218 */
{
    FN_ENTER(0x00641218);
    /* 00641218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641219: mov ebp, esp */ r_ebp = r_esp;
    /* 0064121b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064121d: push 0x8e5374 */ { u32 v = 0x8e5374u; r_esp -= 4; W32(r_esp, v); }
    /* 00641222: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641228: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641229: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641230: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641233: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641236: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641239: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064123c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064123f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00641242: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641249: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064124c: mov dword ptr [eax], 0xb2ed68 */ W32((u32)(r_eax), 0xb2ed68u);
    /* 00641252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641253: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x641258u); f_007b4e84();
    /* 00641258: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641259: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064125c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x641261u); f_007b9c8c();
    /* 00641261: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00641268: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064126b: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x641270u); f_007b4aec();
    /* 00641270: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641273: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064127a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064127c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064127d: ret  */ FN_RET(0x00641218); r_esp += 4; return;
}

void f_00641280(void) /* sub_641280 */
{
    FN_ENTER(0x00641280);
    /* 00641280: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641281: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00641283: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00641285: call 0x6412a4 */ r_esp -= 4; W32(r_esp, 0x64128au); f_006412a4();
    /* 0064128a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064128e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641290: jne 0x641296 */ if (!fZ) goto L_00641296;
L_00641292:; BB(0x00641292);
    /* 00641292: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641293: ret 4 */ FN_RET(0x00641280); r_esp += 8; return;
L_00641296:; BB(0x00641296);
    /* 00641296: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641297: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64129cu); f_005c2f74();
    /* 0064129c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064129d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064129e: ret 4 */ FN_RET(0x00641280); r_esp += 8; return;
}

void f_006412a4(void) /* sub_6412A4 */
{
    FN_ENTER(0x006412a4);
    /* 006412a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006412a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006412a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006412a9: push 0x8e5390 */ { u32 v = 0x8e5390u; r_esp -= 4; W32(r_esp, v); }
    /* 006412ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006412b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006412b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006412bc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006412bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006412c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006412c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006412c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006412cb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006412ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006412d1: mov dword ptr [ecx], 0xb2edc8 */ W32((u32)(r_ecx), 0xb2edc8u);
    /* 006412d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006412de: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x6412e3u); f_00641218();
    /* 006412e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006412e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006412ed: mov esp, ebp */ r_esp = r_ebp;
    /* 006412ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006412f0: ret  */ FN_RET(0x006412a4); r_esp += 4; return;
}

void f_006412f4(void) /* sub_6412F4 */
{
    FN_ENTER(0x006412f4);
    /* 006412f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006412f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006412f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006412f9: call 0x641318 */ r_esp -= 4; W32(r_esp, 0x6412feu); f_00641318();
    /* 006412fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00641302: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641304: jne 0x64130a */ if (!fZ) goto L_0064130a;
L_00641306:; BB(0x00641306);
    /* 00641306: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641307: ret 4 */ FN_RET(0x006412f4); r_esp += 8; return;
L_0064130a:; BB(0x0064130a);
    /* 0064130a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064130b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x641310u); f_005c2f74();
    /* 00641310: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641311: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641312: ret 4 */ FN_RET(0x006412f4); r_esp += 8; return;
}

void f_00641318(void) /* sub_641318 */
{
    FN_ENTER(0x00641318);
    /* 00641318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641319: mov ebp, esp */ r_ebp = r_esp;
    /* 0064131b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064131d: push 0x8e53ac */ { u32 v = 0x8e53acu; r_esp -= 4; W32(r_esp, v); }
    /* 00641322: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641329: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641330: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641333: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641336: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641339: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064133c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064133f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00641342: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641345: mov dword ptr [ecx], 0xb2edf8 */ W32((u32)(r_ecx), 0xb2edf8u);
    /* 0064134b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00641352: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x641357u); f_00641218();
    /* 00641357: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064135a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641361: mov esp, ebp */ r_esp = r_ebp;
    /* 00641363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641364: ret  */ FN_RET(0x00641318); r_esp += 4; return;
}

void f_00641368(void) /* sub_641368 */
{
    FN_ENTER(0x00641368);
    /* 00641368: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641369: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064136b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0064136d: call 0x64138c */ r_esp -= 4; W32(r_esp, 0x641372u); f_0064138c();
    /* 00641372: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00641376: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641378: jne 0x64137e */ if (!fZ) goto L_0064137e;
L_0064137a:; BB(0x0064137a);
    /* 0064137a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064137b: ret 4 */ FN_RET(0x00641368); r_esp += 8; return;
L_0064137e:; BB(0x0064137e);
    /* 0064137e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064137f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x641384u); f_005c2f74();
    /* 00641384: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641385: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641386: ret 4 */ FN_RET(0x00641368); r_esp += 8; return;
}

void f_0064138c(void) /* sub_64138C */
{
    FN_ENTER(0x0064138c);
    /* 0064138c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064138d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064138f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641391: push 0x8e53c8 */ { u32 v = 0x8e53c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00641396: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064139c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064139d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006413a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006413a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006413aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006413ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006413b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006413b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006413b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006413b9: mov dword ptr [ecx], 0xb2ee28 */ W32((u32)(r_ecx), 0xb2ee28u);
    /* 006413bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006413c6: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x6413cbu); f_00641218();
    /* 006413cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006413ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006413d5: mov esp, ebp */ r_esp = r_ebp;
    /* 006413d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006413d8: ret  */ FN_RET(0x0064138c); r_esp += 4; return;
}

void f_006413dc(void) /* sub_6413DC */
{
    FN_ENTER(0x006413dc);
    /* 006413dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006413dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006413df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006413e1: call 0x641400 */ r_esp -= 4; W32(r_esp, 0x6413e6u); f_00641400();
    /* 006413e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006413ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006413ec: jne 0x6413f2 */ if (!fZ) goto L_006413f2;
L_006413ee:; BB(0x006413ee);
    /* 006413ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006413ef: ret 4 */ FN_RET(0x006413dc); r_esp += 8; return;
L_006413f2:; BB(0x006413f2);
    /* 006413f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006413f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6413f8u); f_005c2f74();
    /* 006413f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006413f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006413fa: ret 4 */ FN_RET(0x006413dc); r_esp += 8; return;
}

void f_00641400(void) /* sub_641400 */
{
    FN_ENTER(0x00641400);
    /* 00641400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641401: mov ebp, esp */ r_ebp = r_esp;
    /* 00641403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641405: push 0x8e53e4 */ { u32 v = 0x8e53e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064140a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641411: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641418: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064141b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064141e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641421: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00641424: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00641427: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064142a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064142d: mov dword ptr [ecx], 0xb2ee58 */ W32((u32)(r_ecx), 0xb2ee58u);
    /* 00641433: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064143a: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x64143fu); f_00641218();
    /* 0064143f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641442: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641449: mov esp, ebp */ r_esp = r_ebp;
    /* 0064144b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064144c: ret  */ FN_RET(0x00641400); r_esp += 4; return;
}

void f_00641450(void) /* sub_641450 */
{
    FN_ENTER(0x00641450);
    /* 00641450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641451: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00641453: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00641455: call 0x6414e8 */ r_esp -= 4; W32(r_esp, 0x64145au); f_006414e8();
    /* 0064145a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064145e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641460: jne 0x641466 */ if (!fZ) goto L_00641466;
L_00641462:; BB(0x00641462);
    /* 00641462: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641463: ret 4 */ FN_RET(0x00641450); r_esp += 8; return;
L_00641466:; BB(0x00641466);
    /* 00641466: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641467: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x64146cu); f_005c2f74();
    /* 0064146c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064146d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064146e: ret 4 */ FN_RET(0x00641450); r_esp += 8; return;
}

void f_00641474(void) /* sub_641474 */
{
    FN_ENTER(0x00641474);
    /* 00641474: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641475: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00641477: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00641479: call 0x641498 */ r_esp -= 4; W32(r_esp, 0x64147eu); f_00641498();
    /* 0064147e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00641482: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641484: jne 0x64148a */ if (!fZ) goto L_0064148a;
L_00641486:; BB(0x00641486);
    /* 00641486: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641487: ret 4 */ FN_RET(0x00641474); r_esp += 8; return;
L_0064148a:; BB(0x0064148a);
    /* 0064148a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064148b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x641490u); f_005c2f74();
    /* 00641490: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641491: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00641492: ret 4 */ FN_RET(0x00641474); r_esp += 8; return;
}

void f_00641498(void) /* sub_641498 */
{
    FN_ENTER(0x00641498);
    /* 00641498: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641499: mov ebp, esp */ r_ebp = r_esp;
    /* 0064149b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0064149d: push 0x8e5400 */ { u32 v = 0x8e5400u; r_esp -= 4; W32(r_esp, v); }
    /* 006414a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006414a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006414a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006414b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006414b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006414b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006414b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006414bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006414bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006414c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006414c5: mov dword ptr [ecx], 0xb2eeb8 */ W32((u32)(r_ecx), 0xb2eeb8u);
    /* 006414cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006414d2: call 0x6414e8 */ r_esp -= 4; W32(r_esp, 0x6414d7u); f_006414e8();
    /* 006414d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006414da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006414e1: mov esp, ebp */ r_esp = r_ebp;
    /* 006414e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006414e4: ret  */ FN_RET(0x00641498); r_esp += 4; return;
}

void f_006414e8(void) /* sub_6414E8 */
{
    FN_ENTER(0x006414e8);
    /* 006414e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006414e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006414eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006414ed: push 0x8e541c */ { u32 v = 0x8e541cu; r_esp -= 4; W32(r_esp, v); }
    /* 006414f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006414f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006414f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641500: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641503: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641506: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641509: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0064150c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064150f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00641512: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641515: mov dword ptr [ecx], 0xb2ee88 */ W32((u32)(r_ecx), 0xb2ee88u);
    /* 0064151b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00641522: call 0x641218 */ r_esp -= 4; W32(r_esp, 0x641527u); f_00641218();
    /* 00641527: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064152a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641531: mov esp, ebp */ r_esp = r_ebp;
    /* 00641533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641534: ret  */ FN_RET(0x006414e8); r_esp += 4; return;
}

void f_00641538(void) /* sub_641538 */
{
    FN_ENTER(0x00641538);
    /* 00641538: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 0064153e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641540: je 0x641555 */ if (fZ) goto L_00641555;
L_00641542:; BB(0x00641542);
    /* 00641542: je 0x64154b */ if (fZ) goto L_0064154b;
L_00641544:; BB(0x00641544);
    /* 00641544: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641546: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x64154bu); f_004066a8();
L_0064154b:; BB(0x0064154b);
    /* 0064154b: mov dword ptr [0xa8f2d8], 0 */ W32((u32)(0xa8f2d8u), 0x0u);
L_00641555:; BB(0x00641555);
    /* 00641555: mov ecx, dword ptr [0xa8f2d4] */ r_ecx = R32((u32)(0xa8f2d4u));
    /* 0064155b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064155d: je 0x641572 */ if (fZ) goto L_00641572;
L_0064155f:; BB(0x0064155f);
    /* 0064155f: je 0x641568 */ if (fZ) goto L_00641568;
L_00641561:; BB(0x00641561);
    /* 00641561: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641563: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x641568u); f_004066a8();
L_00641568:; BB(0x00641568);
    /* 00641568: mov dword ptr [0xa8f2d4], 0 */ W32((u32)(0xa8f2d4u), 0x0u);
L_00641572:; BB(0x00641572);
    /* 00641572: ret  */ FN_RET(0x00641538); r_esp += 4; return;
}

void f_00641574(void)
{
    FN_ENTER(0x00641574);
    /* 00641574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641575: mov ebp, esp */ r_ebp = r_esp;
    /* 00641577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641579: push 0x8e5444 */ { u32 v = 0x8e5444u; r_esp -= 4; W32(r_esp, v); }
    /* 0064157e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064158c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064158f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641592: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641595: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00641598: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064159b: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006415a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006415a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6415acu); f_005caba4();
    /* 006415ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006415ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006415b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006415b2: je 0x6415e5 */ if (fZ) goto L_006415e5;
L_006415b4:; BB(0x006415b4);
    /* 006415b4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006415bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006415c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006415c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006415c8: call 0x6415ec */ r_esp -= 4; W32(r_esp, 0x6415cdu); f_006415ec();
    /* 006415cd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006415d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006415d7:; BB(0x006415d7);
    /* 006415d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006415da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006415e1: mov esp, ebp */ r_esp = r_ebp;
    /* 006415e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006415e4: ret  */ FN_RET(0x00641574); r_esp += 4; return;
L_006415e5:; BB(0x006415e5);
    /* 006415e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006415e7: jmp 0x6415d7 */ goto L_006415d7;
}

void f_006415ec(void) /* sub_6415EC */
{
    FN_ENTER(0x006415ec);
    /* 006415ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006415ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006415ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006415f1: push 0x8e546e */ { u32 v = 0x8e546eu; r_esp -= 4; W32(r_esp, v); }
    /* 006415f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006415fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006415fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641604: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641607: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064160a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0064160d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00641610: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00641613: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641616: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064161c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0064161f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00641622: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00641625: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x64162au); f_007b4b48();
    /* 0064162a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641631: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641634: mov dword ptr [edx], 0xb2ed68 */ W32((u32)(r_edx), 0xb2ed68u);
    /* 0064163a: mov eax, dword ptr [0x9c6f5c] */ r_eax = R32((u32)(0x9c6f5cu));
    /* 0064163f: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641645: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641647: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064164a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x64164fu); f_005b8610();
    /* 0064164f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641652: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641658: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064165a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0064165d: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x641662u); f_005b8624();
    /* 00641662: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641665: mov dword ptr [edx + 0xac], 0x43c80000 */ W32((u32)(r_edx+0xacu), 0x43c80000u);
    /* 0064166f: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00641672: mov dword ptr [edx + 0xb0], 0x42200000 */ W32((u32)(r_edx+0xb0u), 0x42200000u);
    /* 0064167c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00641683: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641686: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641689: mov dword ptr [ecx], 0xb2ed98 */ W32((u32)(r_ecx), 0xb2ed98u);
    /* 0064168f: mov eax, dword ptr [0x9c6f60] */ r_eax = R32((u32)(0x9c6f60u));
    /* 00641694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641695: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00641698: call dword ptr [0xb2edac] */ { u32 t = R32((u32)(0xb2edacu)); r_esp -= 4; W32(r_esp, 0x64169eu); call_ind(t); }
    /* 0064169e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006416a1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006416a3: push 0x9c6dec */ { u32 v = 0x9c6decu; r_esp -= 4; W32(r_esp, v); }
    /* 006416a8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6416adu); f_007b9a88();
    /* 006416ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006416b0: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6416b5u); f_007b4f54();
    /* 006416b5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006416b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006416bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006416c2: mov esp, ebp */ r_esp = r_ebp;
    /* 006416c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006416c5: ret 4 */ FN_RET(0x006415ec); r_esp += 8; return;
}

void f_006416c8(void)
{
    FN_ENTER(0x006416c8);
    /* 006416c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006416c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006416cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006416cd: push 0x8e5494 */ { u32 v = 0x8e5494u; r_esp -= 4; W32(r_esp, v); }
    /* 006416d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006416d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006416d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006416e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006416e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006416e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006416e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006416ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006416ef: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006416f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006416fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x641700u); f_005caba4();
    /* 00641700: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641701: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00641704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641706: je 0x641739 */ if (fZ) goto L_00641739;
L_00641708:; BB(0x00641708);
    /* 00641708: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0064170f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641716: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641719: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064171c: call 0x641740 */ r_esp -= 4; W32(r_esp, 0x641721u); f_00641740();
    /* 00641721: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641724: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064172b:; BB(0x0064172b);
    /* 0064172b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064172e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641735: mov esp, ebp */ r_esp = r_ebp;
    /* 00641737: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641738: ret  */ FN_RET(0x006416c8); r_esp += 4; return;
L_00641739:; BB(0x00641739);
    /* 00641739: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064173b: jmp 0x64172b */ goto L_0064172b;
}

void f_00641740(void) /* sub_641740 */
{
    FN_ENTER(0x00641740);
    /* 00641740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641741: mov ebp, esp */ r_ebp = r_esp;
    /* 00641743: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641745: push 0x8e54be */ { u32 v = 0x8e54beu; r_esp -= 4; W32(r_esp, v); }
    /* 0064174a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641751: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641758: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064175b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064175e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00641761: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00641764: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00641767: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0064176a: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641770: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00641773: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00641776: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00641779: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x64177eu); f_007b4b48();
    /* 0064177e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641785: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641788: mov dword ptr [edx], 0xb2ed68 */ W32((u32)(r_edx), 0xb2ed68u);
    /* 0064178e: mov eax, dword ptr [0x9c6f5c] */ r_eax = R32((u32)(0x9c6f5cu));
    /* 00641793: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641799: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064179b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0064179e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6417a3u); f_005b8610();
    /* 006417a3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006417a6: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 006417ac: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006417ae: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006417b1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x6417b6u); f_005b8624();
    /* 006417b6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006417b9: mov dword ptr [edx + 0xac], 0x43c80000 */ W32((u32)(r_edx+0xacu), 0x43c80000u);
    /* 006417c3: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006417c6: mov dword ptr [edx + 0xb0], 0x42200000 */ W32((u32)(r_edx+0xb0u), 0x42200000u);
    /* 006417d0: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006417d7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006417da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006417dd: mov dword ptr [ecx], 0xb2edc8 */ W32((u32)(r_ecx), 0xb2edc8u);
    /* 006417e3: mov eax, dword ptr [0x9c6f64] */ r_eax = R32((u32)(0x9c6f64u));
    /* 006417e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006417e9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006417ec: call dword ptr [0xb2eddc] */ { u32 t = R32((u32)(0xb2eddcu)); r_esp -= 4; W32(r_esp, 0x6417f2u); call_ind(t); }
    /* 006417f2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006417f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006417f7: push 0x9c6e70 */ { u32 v = 0x9c6e70u; r_esp -= 4; W32(r_esp, v); }
    /* 006417fc: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x641801u); f_007b9a88();
    /* 00641801: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641804: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x641809u); f_007b4f54();
    /* 00641809: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064180c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0064180f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641816: mov esp, ebp */ r_esp = r_ebp;
    /* 00641818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641819: ret 4 */ FN_RET(0x00641740); r_esp += 8; return;
}

void f_0064181c(void)
{
    FN_ENTER(0x0064181c);
    /* 0064181c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0064181d: mov ebp, esp */ r_ebp = r_esp;
    /* 0064181f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641821: push 0x8e54e4 */ { u32 v = 0x8e54e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00641826: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0064182c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0064182d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641834: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641837: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064183a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0064183d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00641840: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00641843: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00641848: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0064184f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x641854u); f_005caba4();
    /* 00641854: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641855: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00641858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0064185a: je 0x64188d */ if (fZ) goto L_0064188d;
L_0064185c:; BB(0x0064185c);
    /* 0064185c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00641863: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0064186a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064186d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641870: call 0x641894 */ r_esp -= 4; W32(r_esp, 0x641875u); f_00641894();
    /* 00641875: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641878: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0064187f:; BB(0x0064187f);
    /* 0064187f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641882: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641889: mov esp, ebp */ r_esp = r_ebp;
    /* 0064188b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064188c: ret  */ FN_RET(0x0064181c); r_esp += 4; return;
L_0064188d:; BB(0x0064188d);
    /* 0064188d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064188f: jmp 0x64187f */ goto L_0064187f;
}

void f_00641894(void) /* sub_641894 */
{
    FN_ENTER(0x00641894);
    /* 00641894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641895: mov ebp, esp */ r_ebp = r_esp;
    /* 00641897: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641899: push 0x8e550e */ { u32 v = 0x8e550eu; r_esp -= 4; W32(r_esp, v); }
    /* 0064189e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006418a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006418a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006418ac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006418af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006418b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006418b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006418b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006418bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006418be: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006418c4: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006418c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006418ca: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006418cd: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6418d2u); f_007b4b48();
    /* 006418d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006418d9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006418dc: mov dword ptr [edx], 0xb2ed68 */ W32((u32)(r_edx), 0xb2ed68u);
    /* 006418e2: mov eax, dword ptr [0x9c6f5c] */ r_eax = R32((u32)(0x9c6f5cu));
    /* 006418e7: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 006418ed: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006418ef: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006418f2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6418f7u); f_005b8610();
    /* 006418f7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006418fa: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641900: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00641902: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00641905: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x64190au); f_005b8624();
    /* 0064190a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064190d: mov dword ptr [edx + 0xac], 0x43c80000 */ W32((u32)(r_edx+0xacu), 0x43c80000u);
    /* 00641917: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0064191a: mov dword ptr [edx + 0xb0], 0x42200000 */ W32((u32)(r_edx+0xb0u), 0x42200000u);
    /* 00641924: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0064192b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0064192e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641931: mov dword ptr [ecx], 0xb2edf8 */ W32((u32)(r_ecx), 0xb2edf8u);
    /* 00641937: mov eax, dword ptr [0x9c6f68] */ r_eax = R32((u32)(0x9c6f68u));
    /* 0064193c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064193d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00641940: call dword ptr [0xb2ee0c] */ { u32 t = R32((u32)(0xb2ee0cu)); r_esp -= 4; W32(r_esp, 0x641946u); call_ind(t); }
    /* 00641946: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641949: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0064194b: push 0x9c6e44 */ { u32 v = 0x9c6e44u; r_esp -= 4; W32(r_esp, v); }
    /* 00641950: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x641955u); f_007b9a88();
    /* 00641955: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641958: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x64195du); f_007b4f54();
    /* 0064195d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641960: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641963: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0064196a: mov esp, ebp */ r_esp = r_ebp;
    /* 0064196c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064196d: ret 4 */ FN_RET(0x00641894); r_esp += 8; return;
}

void f_00641970(void)
{
    FN_ENTER(0x00641970);
    /* 00641970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641971: mov ebp, esp */ r_ebp = r_esp;
    /* 00641973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641975: push 0x8e5534 */ { u32 v = 0x8e5534u; r_esp -= 4; W32(r_esp, v); }
    /* 0064197a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641981: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641988: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064198b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064198e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641991: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00641994: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00641997: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0064199c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006419a3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6419a8u); f_005caba4();
    /* 006419a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006419a9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006419ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006419ae: je 0x6419e1 */ if (fZ) goto L_006419e1;
L_006419b0:; BB(0x006419b0);
    /* 006419b0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006419b7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006419be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006419c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006419c4: call 0x6419e8 */ r_esp -= 4; W32(r_esp, 0x6419c9u); f_006419e8();
    /* 006419c9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006419cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006419d3:; BB(0x006419d3);
    /* 006419d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006419d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006419dd: mov esp, ebp */ r_esp = r_ebp;
    /* 006419df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006419e0: ret  */ FN_RET(0x00641970); r_esp += 4; return;
L_006419e1:; BB(0x006419e1);
    /* 006419e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006419e3: jmp 0x6419d3 */ goto L_006419d3;
}

void f_006419e8(void) /* sub_6419E8 */
{
    FN_ENTER(0x006419e8);
    /* 006419e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006419e9: mov ebp, esp */ r_ebp = r_esp;
    /* 006419eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006419ed: push 0x8e555e */ { u32 v = 0x8e555eu; r_esp -= 4; W32(r_esp, v); }
    /* 006419f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006419f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006419f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641a00: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641a03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641a06: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00641a09: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00641a0c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00641a0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641a12: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641a18: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00641a1b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00641a1e: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00641a21: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x641a26u); f_007b4b48();
    /* 00641a26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641a2d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641a30: mov dword ptr [edx], 0xb2ed68 */ W32((u32)(r_edx), 0xb2ed68u);
    /* 00641a36: mov eax, dword ptr [0x9c6f5c] */ r_eax = R32((u32)(0x9c6f5cu));
    /* 00641a3b: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641a41: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00641a43: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00641a46: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x641a4bu); f_005b8610();
    /* 00641a4b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641a4e: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641a54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00641a56: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00641a59: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x641a5eu); f_005b8624();
    /* 00641a5e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641a61: mov dword ptr [edx + 0xac], 0x43c80000 */ W32((u32)(r_edx+0xacu), 0x43c80000u);
    /* 00641a6b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00641a6e: mov dword ptr [edx + 0xb0], 0x42200000 */ W32((u32)(r_edx+0xb0u), 0x42200000u);
    /* 00641a78: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00641a7f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641a82: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641a85: mov dword ptr [ecx], 0xb2ee28 */ W32((u32)(r_ecx), 0xb2ee28u);
    /* 00641a8b: mov eax, dword ptr [0x9c6f6c] */ r_eax = R32((u32)(0x9c6f6cu));
    /* 00641a90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641a91: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00641a94: call dword ptr [0xb2ee3c] */ { u32 t = R32((u32)(0xb2ee3cu)); r_esp -= 4; W32(r_esp, 0x641a9au); call_ind(t); }
    /* 00641a9a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641a9d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641a9f: push 0x9c6ec8 */ { u32 v = 0x9c6ec8u; r_esp -= 4; W32(r_esp, v); }
    /* 00641aa4: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x641aa9u); f_007b9a88();
    /* 00641aa9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641aac: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x641ab1u); f_007b4f54();
    /* 00641ab1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641ab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641ab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641abe: mov esp, ebp */ r_esp = r_ebp;
    /* 00641ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641ac1: ret 4 */ FN_RET(0x006419e8); r_esp += 8; return;
}

void f_00641ac4(void)
{
    FN_ENTER(0x00641ac4);
    /* 00641ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641ac5: mov ebp, esp */ r_ebp = r_esp;
    /* 00641ac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641ac9: push 0x8e5584 */ { u32 v = 0x8e5584u; r_esp -= 4; W32(r_esp, v); }
    /* 00641ace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641ad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641adc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641adf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641ae2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00641ae5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00641ae8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00641aeb: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 00641af0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00641af7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x641afcu); f_005caba4();
    /* 00641afc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641afd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00641b00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641b02: je 0x641b35 */ if (fZ) goto L_00641b35;
L_00641b04:; BB(0x00641b04);
    /* 00641b04: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00641b0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641b12: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641b15: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641b18: call 0x641b3c */ r_esp -= 4; W32(r_esp, 0x641b1du); f_00641b3c();
    /* 00641b1d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641b20: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00641b27:; BB(0x00641b27);
    /* 00641b27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641b2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641b31: mov esp, ebp */ r_esp = r_ebp;
    /* 00641b33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641b34: ret  */ FN_RET(0x00641ac4); r_esp += 4; return;
L_00641b35:; BB(0x00641b35);
    /* 00641b35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641b37: jmp 0x641b27 */ goto L_00641b27;
}

void f_00641b3c(void) /* sub_641B3C */
{
    FN_ENTER(0x00641b3c);
    /* 00641b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00641b3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641b41: push 0x8e55ae */ { u32 v = 0x8e55aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00641b46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641b4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641b54: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641b57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641b5a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00641b5d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00641b60: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00641b63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641b66: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641b6c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00641b6f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00641b72: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00641b75: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x641b7au); f_007b4b48();
    /* 00641b7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641b81: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641b84: mov dword ptr [edx], 0xb2ed68 */ W32((u32)(r_edx), 0xb2ed68u);
    /* 00641b8a: mov eax, dword ptr [0x9c6f5c] */ r_eax = R32((u32)(0x9c6f5cu));
    /* 00641b8f: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641b95: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00641b97: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00641b9a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x641b9fu); f_005b8610();
    /* 00641b9f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641ba2: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641ba8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00641baa: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00641bad: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x641bb2u); f_005b8624();
    /* 00641bb2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641bb5: mov dword ptr [edx + 0xac], 0x43c80000 */ W32((u32)(r_edx+0xacu), 0x43c80000u);
    /* 00641bbf: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00641bc2: mov dword ptr [edx + 0xb0], 0x42200000 */ W32((u32)(r_edx+0xb0u), 0x42200000u);
    /* 00641bcc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00641bd3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641bd6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641bd9: mov dword ptr [ecx], 0xb2ee58 */ W32((u32)(r_ecx), 0xb2ee58u);
    /* 00641bdf: mov eax, dword ptr [0x9c6f70] */ r_eax = R32((u32)(0x9c6f70u));
    /* 00641be4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641be5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00641be8: call dword ptr [0xb2ee6c] */ { u32 t = R32((u32)(0xb2ee6cu)); r_esp -= 4; W32(r_esp, 0x641beeu); call_ind(t); }
    /* 00641bee: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641bf1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00641bf3: push 0x9c6e9c */ { u32 v = 0x9c6e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00641bf8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x641bfdu); f_007b9a88();
    /* 00641bfd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641c00: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x641c05u); f_007b4f54();
    /* 00641c05: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641c08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641c0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641c12: mov esp, ebp */ r_esp = r_ebp;
    /* 00641c14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641c15: ret 4 */ FN_RET(0x00641b3c); r_esp += 8; return;
}

void f_00641c18(void) /* sub_641C18 */
{
    FN_ENTER(0x00641c18);
    /* 00641c18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641c19: mov ebp, esp */ r_ebp = r_esp;
    /* 00641c1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641c1d: push 0x8e55c8 */ { u32 v = 0x8e55c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00641c22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641c28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641c29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641c30: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641c33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641c36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00641c39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00641c3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00641c3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00641c42: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641c48: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00641c4b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00641c4e: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x641c53u); f_007b4b48();
    /* 00641c53: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641c5a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641c5d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641c60: mov dword ptr [edx], 0xb2ed68 */ W32((u32)(r_edx), 0xb2ed68u);
    /* 00641c66: mov eax, dword ptr [0x9c6f5c] */ r_eax = R32((u32)(0x9c6f5cu));
    /* 00641c6b: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641c71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641c72: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00641c75: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x641c7au); f_005b8610();
    /* 00641c7a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641c7d: mov ecx, dword ptr [0xa8f2d8] */ r_ecx = R32((u32)(0xa8f2d8u));
    /* 00641c83: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00641c86: mov eax, ebx */ r_eax = r_ebx;
    /* 00641c88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641c89: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x641c8eu); f_005b8624();
    /* 00641c8e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641c91: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00641c94: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00641c97: mov eax, edx */ r_eax = r_edx;
    /* 00641c99: mov dword ptr [edx + 0xac], 0x43c80000 */ W32((u32)(r_edx+0xacu), 0x43c80000u);
    /* 00641ca3: mov dword ptr [edx + 0xb0], 0x42200000 */ W32((u32)(r_edx+0xb0u), 0x42200000u);
    /* 00641cad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641cb0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641cb7: mov esp, ebp */ r_esp = r_ebp;
    /* 00641cb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641cba: ret 4 */ FN_RET(0x00641c18); r_esp += 8; return;
}

void f_00641cc0(void) /* sub_641CC0 */
{
    FN_ENTER(0x00641cc0);
    /* 00641cc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00641cc1: mov ebp, esp */ r_ebp = r_esp;
    /* 00641cc3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00641cc5: push 0x8e55f0 */ { u32 v = 0x8e55f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00641cca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00641cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641cd1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00641cd8: sub esp, 0xe4 */ {  u32 a = r_esp; u32 b = 0xe4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00641cde: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00641ce1: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00641ce4: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00641ce7: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00641cea: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00641ced: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x641cf2u); f_004f7c84();
    /* 00641cf2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00641cf5: je 0x641d58 */ if (fZ) goto L_00641d58;
L_00641cf7:; BB(0x00641cf7);
    /* 00641cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00641cfa: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 00641d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641d02: je 0x641d32 */ if (fZ) goto L_00641d32;
L_00641d04:; BB(0x00641d04);
    /* 00641d04: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641d07: jne 0x641d25 */ if (!fZ) goto L_00641d25;
L_00641d09:; BB(0x00641d09);
    /* 00641d09: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00641d0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641d0d: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x641d12u); f_008113bc();
    /* 00641d12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641d13: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641d16: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00641d1a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641d1f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00641d23: jmp 0x641d58 */ goto L_00641d58;
L_00641d25:; BB(0x00641d25);
    /* 00641d25: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00641d28: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_00641d32:; BB(0x00641d32);
    /* 00641d32: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00641d35: mov eax, dword ptr [eax + 0xb8] */ r_eax = R32((u32)(r_eax+0xb8u));
    /* 00641d3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00641d3d: jl 0x641d58 */ if ((fS!=fO)) goto L_00641d58;
L_00641d3f:; BB(0x00641d3f);
    /* 00641d3f: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00641d44: jge 0x641d58 */ if ((fS==fO)) goto L_00641d58;
L_00641d46:; BB(0x00641d46);
    /* 00641d46: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00641d49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641d4a: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x641d4fu); f_00816eec();
    /* 00641d4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641d50: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00641d53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00641d56: je 0x641d6f */ if (fZ) goto L_00641d6f;
L_00641d58:; BB(0x00641d58);
    /* 00641d58: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00641d5b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00641d5e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00641d61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00641d64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00641d6b: mov esp, ebp */ r_esp = r_ebp;
    /* 00641d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00641d6e: ret  */ FN_RET(0x00641cc0); r_esp += 4; return;
L_00641d6f:; BB(0x00641d6f);
    /* 00641d6f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00641d72: mov dword ptr [eax + 0xb4], 1 */ W32((u32)(r_eax+0xb4u), 0x1u);
    /* 00641d7c: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 00641d7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00641d81: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d84: push 0x44c */ { u32 v = 0x44cu; r_esp -= 4; W32(r_esp, v); }
    /* 00641d89: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x641d8eu); f_00814298();
    /* 00641d8e: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00641d90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d91: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x641d96u); f_0050b510();
    /* 00641d96: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00641d98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00641d99: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x641d9eu); f_0050b510();
    /* 00641d9e: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00641da1: mov eax, 0x934cc0 */ r_eax = 0x934cc0u;
    /* 00641da6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00641da8: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00641dab: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00641dae: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00641db1: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00641db4: mov dword ptr [ebp - 0xf0], edx */ W32((u32)(r_ebp+0xffffff10u), r_edx);
    /* 00641dba: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00641dbd: mov dword ptr [ebp - 0xec], ecx */ W32((u32)(r_ebp+0xffffff14u), r_ecx);
    /* 00641dc3: mov dword ptr [ebp - 0xe8], ebx */ W32((u32)(r_ebp+0xffffff18u), r_ebx);
    /* 00641dc9: mov dword ptr [ebp - 0xe4], esi */ W32((u32)(r_ebp+0xffffff1cu), r_esi);
    /* 00641dcf: mov dword ptr [ebp - 0xe0], edi */ W32((u32)(r_ebp+0xffffff20u), r_edi);
    /* 00641dd5: mov dword ptr [ebp - 0xdc], edx */ W32((u32)(r_ebp+0xffffff24u), r_edx);
    /* 00641ddb: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00641dde: mov dword ptr [ebp - 0xd8], edx */ W32((u32)(r_ebp+0xffffff28u), r_edx);
    /* 00641de4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00641de7: mov dword ptr [ebp - 0xd4], edx */ W32((u32)(r_ebp+0xffffff2cu), r_edx);
    /* 00641ded: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00641df0: mov dword ptr [ebp - 0xd0], edx */ W32((u32)(r_ebp+0xffffff30u), r_edx);
    /* 00641df6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00641df9: mov dword ptr [ebp - 0xcc], edx */ W32((u32)(r_ebp+0xffffff34u), r_edx);
    /* 00641dff: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00641e02: mov dword ptr [ebp - 0xc8], edx */ W32((u32)(r_ebp+0xffffff38u), r_edx);
    /* 00641e08: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00641e0b: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 00641e11: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00641e14: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 00641e1a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00641e1d: mov dword ptr [ebp - 0xbc], edx */ W32((u32)(r_ebp+0xffffff44u), r_edx);
    /* 00641e23: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00641e26: mov dword ptr [ebp - 0xb8], edx */ W32((u32)(r_ebp+0xffffff48u), r_edx);
    /* 00641e2c: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00641e2f: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 00641e35: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00641e38: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 00641e3e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00641e41: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 00641e47: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 00641e4a: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00641e50: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00641e53: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 00641e59: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00641e5c: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 00641e62: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00641e65: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 00641e6b: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00641e6e: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 00641e74: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00641e77: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00641e7d: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00641e80: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 00641e86: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 00641e89: mov eax, dword ptr [eax + 0x68] */ r_eax = R32((u32)(r_eax+0x68u));
    /* 00641e8c: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 00641e92: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 00641e98: mov eax, 0x934c60 */ r_eax = 0x934c60u;
    /* 00641e9d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00641e9f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00641ea2: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 00641ea5: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00641ea8: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00641eab: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 00641eb1: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 00641eb4: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00641eb7: mov dword ptr [ebp - 0x7c], ebx */ W32((u32)(r_ebp+0xffffff84u), r_ebx);
    /* 00641eba: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 00641ebd: mov dword ptr [ebp - 0x74], edi */ W32((u32)(r_ebp+0xffffff8cu), r_edi);
    /* 00641ec0: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00641ec3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00641ec6: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 00641ec9: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00641ecc: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00641ecf: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00641ed2: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 00641ed5: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00641ed8: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 00641edb: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00641ede: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00641ee1: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00641ee4: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00641ee7: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00641eea: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00641eed: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 00641ef0: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 00641ef3: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00641ef6: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00641ef9: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00641efc: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 00641eff: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00641f02: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00641f05: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00641f08: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 00641f0b: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00641f0e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00641f11: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00641f14: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 00641f17: mov ebx, dword ptr [edx + 0x3c] */ r_ebx = R32((u32)(r_edx+0x3cu));
    /* 00641f1a: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 00641f1d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00641f1f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00641f22: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 00641f25: mov dword ptr [ebp - 0x70], ecx */ W32((u32)(r_ebp+0xffffff90u), r_ecx);
    /* 00641f28: mov dword ptr [ebp - 0x4c], ebx */ W32((u32)(r_ebp+0xffffffb4u), r_ebx);
    /* 00641f2b: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_00641f2e:; BB(0x00641f2e);
    /* 00641f2e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00641f31: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00641f34: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00641f36: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00641f39: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00641f3b: mov ebx, dword ptr [ebp + edi - 0xf0] */ r_ebx = R32((u32)(r_ebp+r_edi+0xffffff10u));
    /* 00641f42: mov esi, dword ptr [ebp + edi - 0xec] */ r_esi = R32((u32)(r_ebp+r_edi+0xffffff14u));
    /* 00641f49: mov ecx, dword ptr [ebp + edi - 0xe8] */ r_ecx = R32((u32)(r_ebp+r_edi+0xffffff18u));
    /* 00641f50: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 00641f53: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00641f56: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00641f59: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00641f5e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x641f63u); f_0082d990();
    /* 00641f63: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00641f66: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00641f69: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00641f6b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x641f70u); f_0082d8bc();
    /* 00641f70: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00641f73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641f74: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00641f77: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00641f79: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x641f7eu); f_0082eab8();
    /* 00641f7e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x641f83u); f_0082da80();
    /* 00641f83: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00641f86: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 00641f89: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 00641f8c: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00641f8f: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 00641f92: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 00641f95: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 00641f98: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00641f9b: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 00641f9e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x641fa3u); f_0082ebac();
    /* 00641fa3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00641fa6: mov ecx, dword ptr [0xa8f2d4] */ r_ecx = R32((u32)(0xa8f2d4u));
    /* 00641fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641fad: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x641fb2u); f_005b8610();
    /* 00641fb2: mov ecx, dword ptr [0xa8f2d4] */ r_ecx = R32((u32)(0xa8f2d4u));
    /* 00641fb8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00641fbb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00641fbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00641fbf: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x641fc4u); f_005b8624();
    /* 00641fc4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00641fcb: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00641fce: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 00641fd3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x641fd8u); f_005caba4();
    /* 00641fd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00641fd9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00641fdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00641fde: je 0x642009 */ if (fZ) goto L_00642009;
L_00641fe0:; BB(0x00641fe0);
    /* 00641fe0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00641fe7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00641fee: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 00641ff4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00641ff5: mov ecx, eax */ r_ecx = r_eax;
    /* 00641ff7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00641ffd: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x642002u); f_006441f4();
    /* 00642002: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00642009:; BB(0x00642009);
    /* 00642009: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00642010: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00642013: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00642016: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00642019: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0064201c: jl 0x641f2e */ if ((fS!=fO)) goto L_00641f2e;
L_00642022:; BB(0x00642022);
    /* 00642022: jmp 0x641d58 */ goto L_00641d58;
}

