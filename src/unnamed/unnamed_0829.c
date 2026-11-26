#include "protos.h"

void f_008290f4(void) /* sub_8290F4 */
{
    FN_ENTER(0x008290f4);
    /* 008290f4: cmp eax, 0x700 */ {  u32 a = r_eax; u32 b = 0x700u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008290f9: jae 0x829103 */ if (!fC) goto L_00829103;
L_008290fb:; BB(0x008290fb);
    /* 008290fb: mov eax, dword ptr [eax*4 + 0xa13b20] */ r_eax = R32((u32)(r_eax*4+0xa13b20u));
    /* 00829102: ret  */ FN_RET(0x008290f4); r_esp += 4; return;
L_00829103:; BB(0x00829103);
    /* 00829103: mov eax, dword ptr [0xa13b20] */ r_eax = R32((u32)(0xa13b20u));
    /* 00829108: ret  */ FN_RET(0x008290f4); r_esp += 4; return;
}

void f_00829110(void) /* sub_829110 */
{
    FN_ENTER(0x00829110);
    /* 00829110: mov edx, dword ptr [0xacb3a8] */ r_edx = R32((u32)(0xacb3a8u));
    /* 00829116: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829118: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082911a: mov ecx, dword ptr [edx + eax*8 + 0x1c] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x1cu));
    /* 0082911e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829120: je 0x829128 */ if (fZ) goto L_00829128;
L_00829122:; BB(0x00829122);
    /* 00829122: mov eax, 1 */ r_eax = 0x1u;
    /* 00829127: ret  */ FN_RET(0x00829110); r_esp += 4; return;
L_00829128:; BB(0x00829128);
    /* 00829128: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082912a: ret  */ FN_RET(0x00829110); r_esp += 4; return;
}

void f_00829130(void) /* sub_829130 */
{
    FN_ENTER(0x00829130);
    /* 00829130: mov edx, eax */ r_edx = r_eax;
    /* 00829132: and edx, 0xf000000 */ {  u32 a = r_edx; u32 b = 0xf000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00829138: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fZ = (r == 0); } }
    /* 0082913b: je 0x829142 */ if (fZ) goto L_00829142;
L_0082913d:; BB(0x0082913d);
    /* 0082913d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829140: jne 0x829157 */ if (!fZ) goto L_00829157;
L_00829142:; BB(0x00829142);
    /* 00829142: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00829147: test eax, 0xffff8000 */ {  u32 a = r_eax; u32 b = 0xffff8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082914c: je 0x829155 */ if (fZ) goto L_00829155;
L_0082914e:; BB(0x0082914e);
    /* 0082914e: mov edx, 0xa */ r_edx = 0xau;
    /* 00829153: jmp 0x829157 */ goto L_00829157;
L_00829155:; BB(0x00829155);
    /* 00829155: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00829157:; BB(0x00829157);
    /* 00829157: mov eax, edx */ r_eax = r_edx;
    /* 00829159: ret  */ FN_RET(0x00829130); r_esp += 4; return;
}

void f_00829164(void) /* sub_829164 */
{
    FN_ENTER(0x00829164);
    /* 00829164: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00829165: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829166: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00829167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829168: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0082916b: mov ebp, edx */ r_ebp = r_edx;
    /* 0082916d: mov ebx, eax */ r_ebx = r_eax;
    /* 0082916f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829171: mov esi, dword ptr [0xacb3a8] */ r_esi = R32((u32)(0xacb3a8u));
    /* 00829177: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829179: mov ecx, dword ptr [esi + ebx*8 + 8] */ r_ecx = R32((u32)(r_esi+r_ebx*8+0x8u));
    /* 0082917d: mov edi, dword ptr [esi + ebx*8 + 4] */ r_edi = R32((u32)(r_esi+r_ebx*8+0x4u));
    /* 00829181: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00829185: call 0x83e134 */ r_esp -= 4; W32(r_esp, 0x82918au); f_0083e134();
    /* 0082918a: mov esi, eax */ r_esi = r_eax;
    /* 0082918c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082918e: je 0x829234 */ if (fZ) goto L_00829234;
L_00829194:; BB(0x00829194);
    /* 00829194: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00829196: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00829199: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0082919d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008291a1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008291a5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008291a9: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008291ad: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 008291b1: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008291b5: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 008291b9: mov dword ptr [esp], 0x24 */ W32((u32)(r_esp), 0x24u);
    /* 008291c0: call 0x483750 */ r_esp -= 4; W32(r_esp, 0x8291c5u); f_00483750();
    /* 008291c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008291c7: je 0x8291d8 */ if (fZ) goto L_008291d8;
L_008291c9:; BB(0x008291c9);
    /* 008291c9: mov dword ptr [esp + 4], 0x8180 */ W32((u32)(r_esp+0x4u), 0x8180u);
    /* 008291d1: mov edx, 0x8180 */ r_edx = 0x8180u;
    /* 008291d6: jmp 0x8291e5 */ goto L_008291e5;
L_008291d8:; BB(0x008291d8);
    /* 008291d8: mov dword ptr [esp + 4], 0x180 */ W32((u32)(r_esp+0x4u), 0x180u);
    /* 008291e0: mov edx, 0x180 */ r_edx = 0x180u;
L_008291e5:; BB(0x008291e5);
    /* 008291e5: mov eax, dword ptr [0xacb3a8] */ r_eax = R32((u32)(0xacb3a8u));
    /* 008291ea: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 008291ee: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008291f2: mov ebx, dword ptr [eax + ebx*8] */ r_ebx = R32((u32)(r_eax+r_ebx*8));
    /* 008291f5: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008291f8: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008291fc: je 0x8292c8 */ if (fZ) goto L_008292c8;
L_00829202:; BB(0x00829202);
    /* 00829202: call 0x483758 */ r_esp -= 4; W32(r_esp, 0x829207u); f_00483758();
    /* 00829207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829209: je 0x829216 */ if (fZ) goto L_00829216;
L_0082920b:; BB(0x0082920b);
    /* 0082920b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0082920f: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00829212: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00829216:; BB(0x00829216);
    /* 00829216: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 00829219: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0082921d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082921f: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00829223: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00829225: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829226: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00829227: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829228: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829229: call dword ptr [ebp + 0xc] */ { u32 t = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, 0x82922cu); call_ind(t); }
    /* 0082922c: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00829230: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829232: jne 0x82923e */ if (!fZ) goto L_0082923e;
L_00829234:; BB(0x00829234);
    /* 00829234: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00829236: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829239: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082923a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082923b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082923c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082923d: ret  */ FN_RET(0x00829164); r_esp += 4; return;
L_0082923e:; BB(0x0082923e);
    /* 0082923e: lea esi, [esp + 0x30] */ r_esi = (u32)(r_esp+0x30u);
    /* 00829242: lea ebp, [esp + 0x2c] */ r_ebp = (u32)(r_esp+0x2cu);
    /* 00829246: lea ebx, [esp + 0x28] */ r_ebx = (u32)(r_esp+0x28u);
    /* 0082924a: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0082924c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082924e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082924f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829250: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00829251: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829252: lea ebx, [esp + 0x44] */ r_ebx = (u32)(r_esp+0x44u);
    /* 00829256: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829257: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0082925b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0082925c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082925d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082925e: call dword ptr [ecx + 0x2c] */ { u32 t = R32((u32)(r_ecx+0x2cu)); r_esp -= 4; W32(r_esp, 0x829261u); call_ind(t); }
    /* 00829261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00829263: jl 0x8292b9 */ if ((fS!=fO)) goto L_008292b9;
L_00829265:; BB(0x00829265);
    /* 00829265: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00829269: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082926a: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082926e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x829273u); f_0086b6b8();
    /* 00829273: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00829276: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0082927a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0082927c: jbe 0x829296 */ if ((fC||fZ)) goto L_00829296;
L_0082927e:; BB(0x0082927e);
    /* 0082927e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00829282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829283: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00829286: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082928a: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x82928fu); f_0086b6b8();
    /* 0082928f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00829292: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
L_00829296:; BB(0x00829296);
    /* 00829296: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0082929a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082929b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0082929d: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008292a1: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008292a5: push dword ptr [esp + 0x40] */ { u32 v = R32((u32)(r_esp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 008292a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008292aa: call dword ptr [ecx + 0x4c] */ { u32 t = R32((u32)(r_ecx+0x4cu)); r_esp -= 4; W32(r_esp, 0x8292adu); call_ind(t); }
    /* 008292ad: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008292b1: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008292b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008292b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008292b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008292b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008292b8: ret  */ FN_RET(0x00829164); r_esp += 4; return;
L_008292b9:; BB(0x008292b9);
    /* 008292b9: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008292bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008292be: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008292c0: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x8292c3u); call_ind(t); }
    /* 008292c3: jmp 0x829234 */ goto L_00829234;
L_008292c8:; BB(0x008292c8);
    /* 008292c8: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008292cb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008292cf: call 0x483758 */ r_esp -= 4; W32(r_esp, 0x8292d4u); f_00483758();
    /* 008292d4: jmp 0x829202 */ goto L_00829202;
}

void f_008292dc(void) /* sub_8292DC */
{
    FN_ENTER(0x008292dc);
    /* 008292dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008292dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008292de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008292df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008292e0: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008292e3: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 008292e7: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x8292ecu); f_00483740();
    /* 008292ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008292ee: je 0x829301 */ if (fZ) goto L_00829301;
L_008292f0:; BB(0x008292f0);
    /* 008292f0: mov eax, dword ptr [0xacb38c] */ r_eax = R32((u32)(0xacb38cu));
    /* 008292f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008292f7: jne 0x829301 */ if (!fZ) goto L_00829301;
L_008292f9:; BB(0x008292f9);
    /* 008292f9: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 008292fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008292ff: jne 0x82930e */ if (!fZ) goto L_0082930e;
L_00829301:; BB(0x00829301);
    /* 00829301: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00829306: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829309: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082930a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082930b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082930c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082930d: ret  */ FN_RET(0x008292dc); r_esp += 4; return;
L_0082930e:; BB(0x0082930e);
    /* 0082930e: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00829312: call 0x8290f4 */ r_esp -= 4; W32(r_esp, 0x829317u); f_008290f4();
    /* 00829317: mov edi, dword ptr [0xacb388] */ r_edi = R32((u32)(0xacb388u));
    /* 0082931d: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00829321: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00829325: mov ebp, eax */ r_ebp = r_eax;
    /* 00829327: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00829329: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
L_0082932d:; BB(0x0082932d);
    /* 0082932d: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 00829330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829332: je 0x829346 */ if (fZ) goto L_00829346;
L_00829334:; BB(0x00829334);
    /* 00829334: cmp esi, dword ptr [edi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829337: jne 0x829346 */ if (!fZ) goto L_00829346;
L_00829339:; BB(0x00829339);
    /* 00829339: cmp eax, dword ptr [edi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082933c: jne 0x829346 */ if (!fZ) goto L_00829346;
L_0082933e:; BB(0x0082933e);
    /* 0082933e: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00829341: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829344: jne 0x829369 */ if (!fZ) goto L_00829369;
L_00829346:; BB(0x00829346);
    /* 00829346: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829349: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082934c: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0082934f: jl 0x82932d */ if ((fS!=fO)) goto L_0082932d;
L_00829351:; BB(0x00829351);
    /* 00829351: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00829355: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_0082935a:; BB(0x0082935a);
    /* 0082935a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082935d: je 0x8293bc */ if (fZ) goto L_008293bc;
L_0082935f:; BB(0x0082935f);
    /* 0082935f: mov eax, ebx */ r_eax = r_ebx;
    /* 00829361: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829364: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00829365: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00829366: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829367: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00829368: ret  */ FN_RET(0x008292dc); r_esp += 4; return;
L_00829369:; BB(0x00829369);
    /* 00829369: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0082936d: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00829371: mov dword ptr [edi + 0x20], 5 */ W32((u32)(r_edi+0x20u), 0x5u);
    /* 00829378: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0082937a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082937b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082937c: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x82937fu); call_ind(t); }
    /* 0082937f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829381: je 0x82935a */ if (fZ) goto L_0082935a;
L_00829383:; BB(0x00829383);
    /* 00829383: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 00829386: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829388: je 0x82935a */ if (fZ) goto L_0082935a;
L_0082938a:; BB(0x0082938a);
    /* 0082938a: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0082938d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082938f: je 0x82935a */ if (fZ) goto L_0082935a;
L_00829391:; BB(0x00829391);
    /* 00829391: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00829393: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00829396: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00829399: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082939c: fchs  */ ST(0) = -ST(0);
    /* 0082939e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008293a2: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 008293aa: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008293ad: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008293af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008293b3: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008293b7: call dword ptr [edi + 0x4c] */ { u32 t = R32((u32)(r_edi+0x4cu)); r_esp -= 4; W32(r_esp, 0x8293bau); call_ind(t); }
    /* 008293ba: jmp 0x82935a */ goto L_0082935a;
L_008293bc:; BB(0x008293bc);
    /* 008293bc: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 008293c0: call 0x829110 */ r_esp -= 4; W32(r_esp, 0x8293c5u); f_00829110();
    /* 008293c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008293c7: je 0x829668 */ if (fZ) goto L_00829668;
L_008293cd:; BB(0x008293cd);
    /* 008293cd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008293cf: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008293d3: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 008293d9: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
L_008293dd:; BB(0x008293dd);
    /* 008293dd: lea edi, [ecx + ecx*8] */ r_edi = (u32)(r_ecx+r_ecx*8);
    /* 008293e0: mov edi, dword ptr [edx + edi*8 + 0x10] */ r_edi = R32((u32)(r_edx+r_edi*8+0x10u));
    /* 008293e4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008293e6: je 0x829685 */ if (fZ) goto L_00829685;
L_008293ec:; BB(0x008293ec);
    /* 008293ec: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008293ef: lea edi, [ecx + ecx*8] */ r_edi = (u32)(r_ecx+r_ecx*8);
    /* 008293f2: mov edi, dword ptr [edx + edi*8 + 0x10] */ r_edi = R32((u32)(r_edx+r_edi*8+0x10u));
    /* 008293f6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008293f8: je 0x829697 */ if (fZ) goto L_00829697;
L_008293fe:; BB(0x008293fe);
    /* 008293fe: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829401: lea edi, [ecx + ecx*8] */ r_edi = (u32)(r_ecx+r_ecx*8);
    /* 00829404: mov edi, dword ptr [edx + edi*8 + 0x10] */ r_edi = R32((u32)(r_edx+r_edi*8+0x10u));
    /* 00829408: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082940a: je 0x82968e */ if (fZ) goto L_0082968e;
L_00829410:; BB(0x00829410);
    /* 00829410: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829413: lea edi, [ecx + ecx*8] */ r_edi = (u32)(r_ecx+r_ecx*8);
    /* 00829416: mov edi, dword ptr [edx + edi*8 + 0x10] */ r_edi = R32((u32)(r_edx+r_edi*8+0x10u));
    /* 0082941a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082941c: je 0x82967c */ if (fZ) goto L_0082967c;
L_00829422:; BB(0x00829422);
    /* 00829422: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829425: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00829428: jb 0x8293dd */ if (fC) goto L_008293dd;
L_0082942a:; BB(0x0082942a);
    /* 0082942a: mov edx, 0x40 */ r_edx = 0x40u;
    /* 0082942f: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
L_00829433:; BB(0x00829433);
    /* 00829433: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00829437: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082943a: jae 0x829672 */ if (!fC) goto L_00829672;
L_00829440:; BB(0x00829440);
    /* 00829440: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829442: jne 0x829451 */ if (!fZ) goto L_00829451;
L_00829444:; BB(0x00829444);
    /* 00829444: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00829446: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0082944a: mov esi, 0xacb39c */ r_esi = 0xacb39cu;
    /* 0082944f: jmp 0x82945c */ goto L_0082945c;
L_00829451:; BB(0x00829451);
    /* 00829451: mov eax, ebp */ r_eax = r_ebp;
    /* 00829453: call 0x829130 */ r_esp -= 4; W32(r_esp, 0x829458u); f_00829130();
    /* 00829458: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
L_0082945c:; BB(0x0082945c);
    /* 0082945c: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 00829460: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00829464: call 0x829164 */ r_esp -= 4; W32(r_esp, 0x829469u); f_00829164();
    /* 00829469: mov edi, eax */ r_edi = r_eax;
    /* 0082946b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082946d: je 0x829668 */ if (fZ) goto L_00829668;
L_00829473:; BB(0x00829473);
    /* 00829473: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00829477: mov ebx, dword ptr [0xacb3a8] */ r_ebx = R32((u32)(0xacb3a8u));
    /* 0082947d: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00829485: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00829488: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0082948c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082948e: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00829492: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00829495: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829497: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829499: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082949b: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0082949f: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 008294a3: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008294a6: jne 0x82950a */ if (!fZ) goto L_0082950a;
L_008294a8:; BB(0x008294a8);
    /* 008294a8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 008294ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008294ad: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008294af: push 0x99f84c */ { u32 v = 0x99f84cu; r_esp -= 4; W32(r_esp, v); }
    /* 008294b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008294b5: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8294b7u); call_ind(t); }
    /* 008294b7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008294bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008294bd: je 0x82950a */ if (fZ) goto L_0082950a;
L_008294bf:; BB(0x008294bf);
    /* 008294bf: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 008294c1: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008294c4: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 008294c7: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008294ca: fchs  */ ST(0) = -ST(0);
    /* 008294cc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008294d0: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 008294d8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 008294db: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008294dd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008294e1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008294e5: call dword ptr [ebx + 0x4c] */ { u32 t = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, 0x8294e8u); call_ind(t); }
    /* 008294e8: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008294ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008294ee: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008294f0: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 008294f5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008294f6: call dword ptr [ecx + 0x44] */ { u32 t = R32((u32)(r_ecx+0x44u)); r_esp -= 4; W32(r_esp, 0x8294f9u); call_ind(t); }
    /* 008294f9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008294fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008294ff: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00829501: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00829506: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829507: call dword ptr [ecx + 0x40] */ { u32 t = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, 0x82950au); call_ind(t); }
L_0082950a:; BB(0x0082950a);
    /* 0082950a: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0082950e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00829513: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 00829517: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0082951b: mov edx, dword ptr [ebx + edx*8 + 0xc] */ r_edx = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 0082951f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00829521: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00829525: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00829528: je 0x829566 */ if (fZ) goto L_00829566;
L_0082952a:; BB(0x0082952a);
    /* 0082952a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0082952c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082952d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082952e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082952f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829530: call dword ptr [0x8f8124] */ { u32 t = R32((u32)(0x8f8124u)); r_esp -= 4; W32(r_esp, 0x829536u); call_ind(t); }
    /* 00829536: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0082953a: mov edx, eax */ r_edx = r_eax;
    /* 0082953c: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082953f: je 0x829566 */ if (fZ) goto L_00829566;
L_00829541:; BB(0x00829541);
    /* 00829541: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00829545: mov ecx, dword ptr [ebx + edx*8] */ r_ecx = R32((u32)(r_ebx+r_edx*8));
    /* 00829548: movzx eax, word ptr [ecx + 0xc] */ r_eax = (u32)R16((u32)(r_ecx+0xcu));
    /* 0082954c: mov ecx, dword ptr [ebx + edx*8 + 0x10] */ r_ecx = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00829550: add ecx, dword ptr [ebx + edx*8 + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+r_edx*8+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829554: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00829557: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0082955b: mov eax, edi */ r_eax = r_edi;
    /* 0082955d: call 0x8296ac */ r_esp -= 4; W32(r_esp, 0x829562u); f_008296ac();
    /* 00829562: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
L_00829566:; BB(0x00829566);
    /* 00829566: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0082956a: mov ebx, dword ptr [0xacb388] */ r_ebx = R32((u32)(0xacb388u));
    /* 00829570: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00829574: lea ecx, [edx + edx*8] */ r_ecx = (u32)(r_edx+r_edx*8);
    /* 00829577: test ebp, 0x80000000 */ {  u32 a = r_ebp; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082957d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 00829581: jne 0x82958a */ if (!fZ) goto L_0082958a;
L_00829583:; BB(0x00829583);
    /* 00829583: mov edx, 0xfffffe0c */ r_edx = 0xfffffe0cu;
    /* 00829588: jmp 0x8295d7 */ goto L_008295d7;
L_0082958a:; BB(0x0082958a);
    /* 0082958a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x82958fu); f_008587a5();
    /* 0082958f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00829593: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00829597: fdiv dword ptr [0x989f9c] */ ST(0) = ST(0) / R_F32((u32)(0x989f9cu));
    /* 0082959d: fadd dword ptr [0x989fa0] */ ST(0) = ST(0) + R_F32((u32)(0x989fa0u));
    /* 008295a3: fmul qword ptr [0x989f48] */ ST(0) = ST(0) * R_F64((u32)(0x989f48u));
    /* 008295a9: fadd qword ptr [0x989f50] */ ST(0) = ST(0) + R_F64((u32)(0x989f50u));
    /* 008295af: fmul qword ptr [0x989f40] */ ST(0) = ST(0) * R_F64((u32)(0x989f40u));
    /* 008295b5: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 008295b9: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008295be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008295c3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008295c7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008295cb: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 008295cf: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008295d3: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
L_008295d7:; BB(0x008295d7);
    /* 008295d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008295d9: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 008295dd: mov dword ptr [ecx + ebx*8 + 0x34], edx */ W32((u32)(r_ecx+r_ebx*8+0x34u), r_edx);
    /* 008295e1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008295e3: push 0xffffd8f0 */ { u32 v = 0xffffd8f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008295e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008295e9: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8295ecu); call_ind(t); }
    /* 008295ec: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008295ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008295f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008295f1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008295f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008295f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008295f4: call dword ptr [ecx + 0x30] */ { u32 t = R32((u32)(r_ecx+0x30u)); r_esp -= 4; W32(r_esp, 0x8295f7u); call_ind(t); }
    /* 008295f7: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 008295fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008295fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008295fd: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008295ff: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x829602u); call_ind(t); }
    /* 00829602: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00829606: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00829608: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082960c: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00829610: mov dword ptr [edx + ecx*8 + 0x10], edi */ W32((u32)(r_edx+r_ecx*8+0x10u), r_edi);
    /* 00829614: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00829618: mov dword ptr [edx + ecx*8 + 0x20], 5 */ W32((u32)(r_edx+r_ecx*8+0x20u), 0x5u);
    /* 00829620: mov dword ptr [edx + ecx*8 + 0x14], ebx */ W32((u32)(r_edx+r_ecx*8+0x14u), r_ebx);
    /* 00829624: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 00829628: mov dword ptr [edx + ecx*8 + 0x18], edi */ W32((u32)(r_edx+r_ecx*8+0x18u), r_edi);
    /* 0082962c: mov dword ptr [edx + ecx*8 + 0x1c], ebx */ W32((u32)(r_edx+r_ecx*8+0x1cu), r_ebx);
    /* 00829630: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 00829634: mov dword ptr [edx + ecx*8 + 4], ebx */ W32((u32)(r_edx+r_ecx*8+0x4u), r_ebx);
    /* 00829638: mov ebx, dword ptr [esp + 0x64] */ r_ebx = R32((u32)(r_esp+0x64u));
    /* 0082963c: mov dword ptr [edx + ecx*8 + 8], ebx */ W32((u32)(r_edx+r_ecx*8+0x8u), r_ebx);
    /* 00829640: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 00829644: mov dword ptr [edx + ecx*8 + 0xc], ebp */ W32((u32)(r_edx+r_ecx*8+0xcu), r_ebp);
    /* 00829648: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 0082964c: mov dword ptr [edx + ecx*8 + 0x28], esi */ W32((u32)(r_edx+r_ecx*8+0x28u), r_esi);
    /* 00829650: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00829654: mov dword ptr [edx + ecx*8 + 0x24], eax */ W32((u32)(r_edx+r_ecx*8+0x24u), r_eax);
    /* 00829658: mov eax, dword ptr [edx + ecx*8 + 0x34] */ r_eax = R32((u32)(r_edx+r_ecx*8+0x34u));
    /* 0082965c: mov dword ptr [edx + ecx*8 + 0x2c], ebp */ W32((u32)(r_edx+r_ecx*8+0x2cu), r_ebp);
    /* 00829660: mov dword ptr [edx + ecx*8 + 0x30], esi */ W32((u32)(r_edx+r_ecx*8+0x30u), r_esi);
    /* 00829664: mov dword ptr [edx + ecx*8 + 0x38], eax */ W32((u32)(r_edx+r_ecx*8+0x38u), r_eax);
L_00829668:; BB(0x00829668);
    /* 00829668: mov eax, ebx */ r_eax = r_ebx;
    /* 0082966a: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082966d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0082966e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082966f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829670: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00829671: ret  */ FN_RET(0x008292dc); r_esp += 4; return;
L_00829672:; BB(0x00829672);
    /* 00829672: mov eax, ebx */ r_eax = r_ebx;
    /* 00829674: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829677: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00829678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00829679: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082967a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082967b: ret  */ FN_RET(0x008292dc); r_esp += 4; return;
L_0082967c:; BB(0x0082967c);
    /* 0082967c: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00829680: jmp 0x829433 */ goto L_00829433;
L_00829685:; BB(0x00829685);
    /* 00829685: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00829689: jmp 0x829433 */ goto L_00829433;
L_0082968e:; BB(0x0082968e);
    /* 0082968e: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 00829692: jmp 0x829433 */ goto L_00829433;
L_00829697:; BB(0x00829697);
    /* 00829697: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0082969b: jmp 0x829433 */ goto L_00829433;
}

void f_008296ac(void) /* sub_8296AC */
{
    FN_ENTER(0x008296ac);
    /* 008296ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008296ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008296ae: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008296b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008296b3: mov ebx, edx */ r_ebx = r_edx;
    /* 008296b5: mov edx, eax */ r_edx = r_eax;
    /* 008296b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008296b9: je 0x8296fa */ if (fZ) goto L_008296fa;
L_008296bb:; BB(0x008296bb);
    /* 008296bb: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008296be: je 0x8296fa */ if (fZ) goto L_008296fa;
L_008296c0:; BB(0x008296c0);
    /* 008296c0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008296c2: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008296c9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008296cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008296cd: push 0x99f83c */ { u32 v = 0x99f83cu; r_esp -= 4; W32(r_esp, v); }
    /* 008296d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008296d3: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8296d5u); call_ind(t); }
    /* 008296d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008296d7: jl 0x8296fa */ if ((fS!=fO)) goto L_008296fa;
L_008296d9:; BB(0x008296d9);
    /* 008296d9: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008296dc: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008296e0: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008296e4: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008296e6: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 008296ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008296eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008296ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008296ee: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8296f1u); call_ind(t); }
    /* 008296f1: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008296f4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008296f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008296f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008296f9: ret  */ FN_RET(0x008296ac); r_esp += 4; return;
L_008296fa:; BB(0x008296fa);
    /* 008296fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008296fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008296ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00829700: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00829701: ret  */ FN_RET(0x008296ac); r_esp += 4; return;
}

void f_00829704(void) /* sub_829704 */
{
    FN_ENTER(0x00829704);
    /* 00829704: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829705: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00829706: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00829709: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x82970eu); f_00483740();
    /* 0082970e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829710: jne 0x829718 */ if (!fZ) goto L_00829718;
L_00829712:; BB(0x00829712);
    /* 00829712: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00829716: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829717: ret  */ FN_RET(0x00829704); r_esp += 4; return;
L_00829718:; BB(0x00829718);
    /* 00829718: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0082971c: call 0x829844 */ r_esp -= 4; W32(r_esp, 0x829721u); f_00829844();
    /* 00829721: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829724: je 0x829837 */ if (fZ) goto L_00829837;
L_0082972a:; BB(0x0082972a);
    /* 0082972a: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 0082972e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00829730: jle 0x829837 */ if ((fZ||fS!=fO)) goto L_00829837;
L_00829736:; BB(0x00829736);
    /* 00829736: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082973b: jne 0x82977f */ if (!fZ) goto L_0082977f;
L_0082973d:; BB(0x0082973d);
    /* 0082973d: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00829741: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00829745: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00829749: fdiv dword ptr [0x989f94] */ ST(0) = ST(0) / R_F32((u32)(0x989f94u));
    /* 0082974f: fadd dword ptr [0x989f98] */ ST(0) = ST(0) + R_F32((u32)(0x989f98u));
    /* 00829755: fmul dword ptr [0x989f90] */ ST(0) = ST(0) * R_F32((u32)(0x989f90u));
    /* 0082975b: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0082975f: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00829764: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00829769: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0082976d: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00829771: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00829775: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00829779: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0082977d: jmp 0x8297e0 */ goto L_008297e0;
L_0082977f:; BB(0x0082977f);
    /* 0082977f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x829784u); f_008587a5();
    /* 00829784: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00829788: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0082978c: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00829790: fdiv dword ptr [0x989f94] */ ST(0) = ST(0) / R_F32((u32)(0x989f94u));
    /* 00829796: fadd qword ptr [0x989f38] */ ST(0) = ST(0) + R_F64((u32)(0x989f38u));
    /* 0082979c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 008297a0: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 008297a4: fdiv dword ptr [0x989f88] */ ST(0) = ST(0) / R_F32((u32)(0x989f88u));
    /* 008297aa: fadd dword ptr [0x989f8c] */ ST(0) = ST(0) + R_F32((u32)(0x989f8cu));
    /* 008297b0: fmul qword ptr [0x989f30] */ ST(0) = ST(0) * R_F64((u32)(0x989f30u));
    /* 008297b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008297b8: fmul qword ptr [0x989f28] */ ST(0) = ST(0) * R_F64((u32)(0x989f28u));
    /* 008297be: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 008297c2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 008297c7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008297cc: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008297d0: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 008297d4: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 008297d8: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 008297dc: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
L_008297e0:; BB(0x008297e0);
    /* 008297e0: mov ecx, dword ptr [0xacb388] */ r_ecx = R32((u32)(0xacb388u));
    /* 008297e6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008297ea: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 008297ee: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 008297f1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008297f3: je 0x82982f */ if (fZ) goto L_0082982f;
L_008297f5:; BB(0x008297f5);
    /* 008297f5: fild dword ptr [ecx + eax*8 + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_eax*8+0x34u)));
    /* 008297f9: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 008297fd: mov esi, dword ptr [ecx + eax*8 + 0x34] */ r_esi = R32((u32)(r_ecx+r_eax*8+0x34u));
    /* 00829801: fstp dword ptr [ecx + eax*8 + 0x40] */ W_F32((u32)(r_ecx+r_eax*8+0x40u), ST(0)); FPOP();
    /* 00829805: mov dword ptr [ecx + eax*8 + 0x38], edx */ W32((u32)(r_ecx+r_eax*8+0x38u), r_edx);
    /* 00829809: mov dword ptr [ecx + eax*8 + 0x3c], ebp */ W32((u32)(r_ecx+r_eax*8+0x3cu), r_ebp);
    /* 0082980d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0082980f: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00829813: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00829817: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0082981b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0082981f: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00829823: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00829825: fstp dword ptr [ecx + eax*8 + 0x44] */ W_F32((u32)(r_ecx+r_eax*8+0x44u), ST(0)); FPOP();
    /* 00829829: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082982c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082982d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082982e: ret  */ FN_RET(0x00829704); r_esp += 4; return;
L_0082982f:; BB(0x0082982f);
    /* 0082982f: mov dword ptr [ecx + eax*8 + 0x38], edx */ W32((u32)(r_ecx+r_eax*8+0x38u), r_edx);
    /* 00829833: mov dword ptr [ecx + eax*8 + 0x34], edx */ W32((u32)(r_ecx+r_eax*8+0x34u), r_edx);
L_00829837:; BB(0x00829837);
    /* 00829837: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082983a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082983b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082983c: ret  */ FN_RET(0x00829704); r_esp += 4; return;
}

void f_00829844(void) /* sub_829844 */
{
    FN_ENTER(0x00829844);
    /* 00829844: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829845: mov esi, eax */ r_esi = r_eax;
    /* 00829847: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x82984cu); f_00483740();
    /* 0082984c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082984e: je 0x829867 */ if (fZ) goto L_00829867;
L_00829850:; BB(0x00829850);
    /* 00829850: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 00829856: lea ecx, [esi + esi*8] */ r_ecx = (u32)(r_esi+r_esi*8);
    /* 00829859: mov eax, dword ptr [edx + ecx*8 + 0x10] */ r_eax = R32((u32)(r_edx+r_ecx*8+0x10u));
    /* 0082985d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082985f: je 0x829867 */ if (fZ) goto L_00829867;
L_00829861:; BB(0x00829861);
    /* 00829861: mov eax, dword ptr [edx + ecx*8 + 0xc] */ r_eax = R32((u32)(r_edx+r_ecx*8+0xcu));
    /* 00829865: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829866: ret  */ FN_RET(0x00829844); r_esp += 4; return;
L_00829867:; BB(0x00829867);
    /* 00829867: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0082986c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0082986d: ret  */ FN_RET(0x00829844); r_esp += 4; return;
}

void f_00829870(void) /* sub_829870 */
{
    FN_ENTER(0x00829870);
    /* 00829870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00829871: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00829872: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829873: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00829877: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0082987b: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x829880u); f_00483740();
    /* 00829880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829882: je 0x829927 */ if (fZ) goto L_00829927;
L_00829888:; BB(0x00829888);
    /* 00829888: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082988a: je 0x829927 */ if (fZ) goto L_00829927;
L_00829890:; BB(0x00829890);
    /* 00829890: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829892: je 0x829927 */ if (fZ) goto L_00829927;
L_00829898:; BB(0x00829898);
    /* 00829898: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0082989a: mov dword ptr [0xacb39c], eax */ W32((u32)(0xacb39cu), r_eax);
    /* 0082989f: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 008298a2: mov dword ptr [0xacb3a0], edx */ W32((u32)(0xacb3a0u), r_edx);
    /* 008298a8: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 008298ab: mov dword ptr [0xacb3a4], ecx */ W32((u32)(0xacb3a4u), r_ecx);
    /* 008298b1: call 0x83e13c */ r_esp -= 4; W32(r_esp, 0x8298b6u); f_0083e13c();
    /* 008298b6: mov ebx, eax */ r_ebx = r_eax;
    /* 008298b8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008298ba: je 0x829927 */ if (fZ) goto L_00829927;
L_008298bc:; BB(0x008298bc);
    /* 008298bc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008298be: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008298c0: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 008298c3: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 008298c6: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008298c9: fchs  */ ST(0) = -ST(0);
    /* 008298cb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008298cf: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 008298d7: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008298da: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008298de: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008298e2: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x8298e5u); call_ind(t); }
    /* 008298e5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008298e7: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 008298ea: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008298ed: add esp, -0x20 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008298f0: fchs  */ ST(0) = -ST(0);
    /* 008298f2: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008298f6: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 008298fe: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00829901: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00829904: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00829908: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0082990c: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 00829914: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0082991c: mov dword ptr [esp + 0x1c], 1 */ W32((u32)(r_esp+0x1cu), 0x1u);
    /* 00829924: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x829927u); call_ind(t); }
L_00829927:; BB(0x00829927);
    /* 00829927: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00829928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00829929: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0082992a: ret  */ FN_RET(0x00829870); r_esp += 4; return;
}

void f_0082992c(void) /* sub_82992C */
{
    FN_ENTER(0x0082992c);
    /* 0082992c: mov eax, 0xacb39c */ r_eax = 0xacb39cu;
    /* 00829931: ret  */ FN_RET(0x0082992c); r_esp += 4; return;
}

void f_00829934(void) /* sub_829934 */
{
    FN_ENTER(0x00829934);
    /* 00829934: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x829939u); f_00483740();
    /* 00829939: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082993b: jne 0x82993e */ if (!fZ) goto L_0082993e;
L_0082993d:; BB(0x0082993d);
    /* 0082993d: ret  */ FN_RET(0x00829934); r_esp += 4; return;
L_0082993e:; BB(0x0082993e);
    /* 0082993e: mov dword ptr [0xacb38c], 5 */ W32((u32)(0xacb38cu), 0x5u);
    /* 00829948: ret  */ FN_RET(0x00829934); r_esp += 4; return;
}

void f_0082994c(void) /* sub_82994C */
{
    FN_ENTER(0x0082994c);
    /* 0082994c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082994d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082994e: call 0x83e134 */ r_esp -= 4; W32(r_esp, 0x829953u); f_0083e134();
    /* 00829953: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 0082995a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082995c: je 0x82997f */ if (fZ) goto L_0082997f;
L_0082995e:; BB(0x0082995e);
    /* 0082995e: call 0x83e13c */ r_esp -= 4; W32(r_esp, 0x829963u); f_0083e13c();
    /* 00829963: mov esi, eax */ r_esi = r_eax;
    /* 00829965: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829967: je 0x82997f */ if (fZ) goto L_0082997f;
L_00829969:; BB(0x00829969);
    /* 00829969: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0082996c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082996d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082996e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00829970: call dword ptr [ecx + 0x20] */ { u32 t = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, 0x829973u); call_ind(t); }
    /* 00829973: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00829975: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00829979: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0082997b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0082997c: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x82997fu); call_ind(t); }
L_0082997f:; BB(0x0082997f);
    /* 0082997f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00829982: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829983: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829984: ret  */ FN_RET(0x0082994c); r_esp += 4; return;
}

void f_00829988(void) /* sub_829988 */
{
    FN_ENTER(0x00829988);
    /* 00829988: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00829989: mov edi, eax */ r_edi = r_eax;
    /* 0082998b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082998d: je 0x8299ff */ if (fZ) goto L_008299ff;
L_0082998f:; BB(0x0082998f);
    /* 0082998f: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 00829992: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829994: je 0x8299a3 */ if (fZ) goto L_008299a3;
L_00829996:; BB(0x00829996);
    /* 00829996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829997: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00829999: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x82999cu); call_ind(t); }
    /* 0082999c: mov dword ptr [edi + 0x18], 0 */ W32((u32)(r_edi+0x18u), 0x0u);
L_008299a3:; BB(0x008299a3);
    /* 008299a3: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 008299a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008299a8: je 0x8299b7 */ if (fZ) goto L_008299b7;
L_008299aa:; BB(0x008299aa);
    /* 008299aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008299ab: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008299ad: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8299b0u); call_ind(t); }
    /* 008299b0: mov dword ptr [edi + 0x14], 0 */ W32((u32)(r_edi+0x14u), 0x0u);
L_008299b7:; BB(0x008299b7);
    /* 008299b7: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 008299ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008299bc: je 0x8299cb */ if (fZ) goto L_008299cb;
L_008299be:; BB(0x008299be);
    /* 008299be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008299bf: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008299c1: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8299c4u); call_ind(t); }
    /* 008299c4: mov dword ptr [edi + 0x10], 0 */ W32((u32)(r_edi+0x10u), 0x0u);
L_008299cb:; BB(0x008299cb);
    /* 008299cb: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 008299ce: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008299d1: je 0x8299e1 */ if (fZ) goto L_008299e1;
L_008299d3:; BB(0x008299d3);
    /* 008299d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008299d4: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8299dau); call_ind(t); }
    /* 008299da: mov dword ptr [edi + 0x1c], 0xffffffff */ W32((u32)(r_edi+0x1cu), 0xffffffffu);
L_008299e1:; BB(0x008299e1);
    /* 008299e1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008299e6: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 008299e9: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 008299ec: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008299ee: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 008299f0: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 008299f3: mov dword ptr [edi + 0x24], ecx */ W32((u32)(r_edi+0x24u), r_ecx);
    /* 008299f6: mov dword ptr [edi + 0x28], ecx */ W32((u32)(r_edi+0x28u), r_ecx);
    /* 008299f9: mov dword ptr [edi + 0x34], ecx */ W32((u32)(r_edi+0x34u), r_ecx);
    /* 008299fc: mov dword ptr [edi + 0x38], ecx */ W32((u32)(r_edi+0x38u), r_ecx);
L_008299ff:; BB(0x008299ff);
    /* 008299ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00829a00: ret  */ FN_RET(0x00829988); r_esp += 4; return;
}

void f_00829a04(void) /* sub_829A04 */
{
    FN_ENTER(0x00829a04);
    /* 00829a04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829a05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829a06: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00829a09: call 0x829ad0 */ r_esp -= 4; W32(r_esp, 0x829a0eu); f_00829ad0();
    /* 00829a0e: push 0x98a0f8 */ { u32 v = 0x98a0f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00829a13: call 0x83c43c */ r_esp -= 4; W32(r_esp, 0x829a18u); f_0083c43c();
    /* 00829a18: push dword ptr [0xa2157c] */ { u32 v = R32((u32)(0xa2157cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00829a1e: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x829a23u); f_005b9554();
    /* 00829a23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00829a26: mov dword ptr [0xacb394], eax */ W32((u32)(0xacb394u), r_eax);
    /* 00829a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829a2d: je 0x829ac0 */ if (fZ) goto L_00829ac0;
L_00829a33:; BB(0x00829a33);
    /* 00829a33: mov esi, dword ptr [0xa2147c] */ r_esi = R32((u32)(0xa2147cu));
    /* 00829a39: mov ebx, dword ptr [0xa215fc] */ r_ebx = R32((u32)(0xa215fcu));
    /* 00829a3f: mov edx, dword ptr [0xa214fc] */ r_edx = R32((u32)(0xa214fcu));
    /* 00829a45: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829a47: je 0x829ac0 */ if (fZ) goto L_00829ac0;
L_00829a49:; BB(0x00829a49);
    /* 00829a49: mov ecx, dword ptr [0xacb3a8] */ r_ecx = R32((u32)(0xacb3a8u));
    /* 00829a4f: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00829a53: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00829a57: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00829a5b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00829a5e:; BB(0x00829a5e);
    /* 00829a5e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 00829a62: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00829a64: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 00829a67: lea eax, [ebp + edi] */ r_eax = (u32)(r_ebp+r_edi);
    /* 00829a6b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829a6d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829a6f: mov dword ptr [ecx + edx*8 + 0x1c], eax */ W32((u32)(r_ecx+r_edx*8+0x1cu), r_eax);
    /* 00829a73: mov dword ptr [ecx + edx*8], eax */ W32((u32)(r_ecx+r_edx*8), r_eax);
    /* 00829a76: lea ebp, [ebp + edi + 0x20] */ r_ebp = (u32)(r_ebp+r_edi+0x20u);
    /* 00829a7a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00829a7d: mov ecx, dword ptr [0xacb3a8] */ r_ecx = R32((u32)(0xacb3a8u));
    /* 00829a83: mov dword ptr [ecx + edx*8 + 4], ebp */ W32((u32)(r_ecx+r_edx*8+0x4u), r_ebp);
    /* 00829a87: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 00829a8a: mov dword ptr [ecx + edx*8 + 8], eax */ W32((u32)(r_ecx+r_edx*8+0x8u), r_eax);
    /* 00829a8e: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 00829a92: mov dword ptr [ecx + edx*8 + 0xc], eax */ W32((u32)(r_ecx+r_edx*8+0xcu), r_eax);
    /* 00829a96: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00829a99: mov dword ptr [ecx + edx*8 + 0x10], eax */ W32((u32)(r_ecx+r_edx*8+0x10u), r_eax);
    /* 00829a9d: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00829aa0: sub eax, dword ptr [ebx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00829aa3: mov dword ptr [ecx + edx*8 + 0x14], eax */ W32((u32)(r_ecx+r_edx*8+0x14u), r_eax);
    /* 00829aa7: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829aaa: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00829aae: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829ab1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00829ab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829ab7: jne 0x829a5e */ if (!fZ) goto L_00829a5e;
L_00829ab9:; BB(0x00829ab9);
    /* 00829ab9: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00829abd: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00829ac0:; BB(0x00829ac0);
    /* 00829ac0: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 00829ac5: call 0x83c43c */ r_esp -= 4; W32(r_esp, 0x829acau); f_0083c43c();
    /* 00829aca: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829acd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00829ace: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829acf: ret  */ FN_RET(0x00829a04); r_esp += 4; return;
}

void f_00829ad0(void) /* sub_829AD0 */
{
    FN_ENTER(0x00829ad0);
    /* 00829ad0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829ad1: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x829ad6u); f_00483740();
    /* 00829ad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829ad8: jne 0x829adc */ if (!fZ) goto L_00829adc;
L_00829ada:; BB(0x00829ada);
    /* 00829ada: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829adb: ret  */ FN_RET(0x00829ad0); r_esp += 4; return;
L_00829adc:; BB(0x00829adc);
    /* 00829adc: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00829adf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00829ae1: mov ebx, eax */ r_ebx = r_eax;
L_00829ae3:; BB(0x00829ae3);
    /* 00829ae3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829ae4: call 0x829af8 */ r_esp -= 4; W32(r_esp, 0x829ae9u); f_00829af8();
    /* 00829ae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829aea: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829aed: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829af0: jl 0x829ae3 */ if ((fS!=fO)) goto L_00829ae3;
L_00829af2:; BB(0x00829af2);
    /* 00829af2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00829af5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829af6: ret  */ FN_RET(0x00829ad0); r_esp += 4; return;
}

void f_00829af8(void) /* sub_829AF8 */
{
    FN_ENTER(0x00829af8);
    /* 00829af8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829af9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829afa: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00829afe: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x829b03u); f_00483740();
    /* 00829b03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829b05: je 0x829b76 */ if (fZ) goto L_00829b76;
L_00829b07:; BB(0x00829b07);
    /* 00829b07: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829b09: jl 0x829b76 */ if ((fS!=fO)) goto L_00829b76;
L_00829b0b:; BB(0x00829b0b);
    /* 00829b0b: mov eax, dword ptr [0xacb388] */ r_eax = R32((u32)(0xacb388u));
    /* 00829b10: lea ecx, [esi + esi*8] */ r_ecx = (u32)(r_esi+r_esi*8);
    /* 00829b13: mov edx, dword ptr [eax + ecx*8 + 0xc] */ r_edx = R32((u32)(r_eax+r_ecx*8+0xcu));
    /* 00829b17: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00829b1a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00829b1c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00829b1e: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829b21: je 0x829b76 */ if (fZ) goto L_00829b76;
L_00829b23:; BB(0x00829b23);
    /* 00829b23: mov edx, dword ptr [eax + ecx*8 + 0x10] */ r_edx = R32((u32)(r_eax+r_ecx*8+0x10u));
    /* 00829b27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829b29: je 0x829b76 */ if (fZ) goto L_00829b76;
L_00829b2b:; BB(0x00829b2b);
    /* 00829b2b: mov eax, dword ptr [eax + ecx*8 + 8] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 00829b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00829b31: jle 0x829b3a */ if ((fZ||fS!=fO)) goto L_00829b3a;
L_00829b33:; BB(0x00829b33);
    /* 00829b33: cmp eax, 0x92 */ {  u32 a = r_eax; u32 b = 0x92u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829b38: jle 0x829b76 */ if ((fZ||fS!=fO)) goto L_00829b76;
L_00829b3a:; BB(0x00829b3a);
    /* 00829b3a: cmp eax, 0x94 */ {  u32 a = r_eax; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00829b3f: jl 0x829b48 */ if ((fS!=fO)) goto L_00829b48;
L_00829b41:; BB(0x00829b41);
    /* 00829b41: cmp eax, 0xa1 */ {  u32 a = r_eax; u32 b = 0xa1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829b46: jle 0x829b76 */ if ((fZ||fS!=fO)) goto L_00829b76;
L_00829b48:; BB(0x00829b48);
    /* 00829b48: cmp eax, 0xa8 */ {  u32 a = r_eax; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00829b4d: jl 0x829b56 */ if ((fS!=fO)) goto L_00829b56;
L_00829b4f:; BB(0x00829b4f);
    /* 00829b4f: cmp eax, 0xb8 */ {  u32 a = r_eax; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829b54: jle 0x829b76 */ if ((fZ||fS!=fO)) goto L_00829b76;
L_00829b56:; BB(0x00829b56);
    /* 00829b56: cmp eax, 0x56f */ {  u32 a = r_eax; u32 b = 0x56fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00829b5b: jl 0x829b64 */ if ((fS!=fO)) goto L_00829b64;
L_00829b5d:; BB(0x00829b5d);
    /* 00829b5d: cmp eax, 0x58f */ {  u32 a = r_eax; u32 b = 0x58fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00829b62: jle 0x829b76 */ if ((fZ||fS!=fO)) goto L_00829b76;
L_00829b64:; BB(0x00829b64);
    /* 00829b64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00829b65: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00829b67: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x829b6au); call_ind(t); }
    /* 00829b6a: mov eax, dword ptr [0xacb388] */ r_eax = R32((u32)(0xacb388u));
    /* 00829b6f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829b71: call 0x829988 */ r_esp -= 4; W32(r_esp, 0x829b76u); f_00829988();
L_00829b76:; BB(0x00829b76);
    /* 00829b76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829b77: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829b78: ret  */ FN_RET(0x00829af8); r_esp += 4; return;
}

void f_00829b7c(void) /* sub_829B7C */
{
    FN_ENTER(0x00829b7c);
    /* 00829b7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829b7d: call 0x483740 */ r_esp -= 4; W32(r_esp, 0x829b82u); f_00483740();
    /* 00829b82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829b84: jne 0x829b88 */ if (!fZ) goto L_00829b88;
L_00829b86:; BB(0x00829b86);
    /* 00829b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829b87: ret  */ FN_RET(0x00829b7c); r_esp += 4; return;
L_00829b88:; BB(0x00829b88);
    /* 00829b88: push 0xe000 */ { u32 v = 0xe000u; r_esp -= 4; W32(r_esp, v); }
    /* 00829b8d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x829b92u); f_008581c5();
    /* 00829b92: push 0xe000 */ { u32 v = 0xe000u; r_esp -= 4; W32(r_esp, v); }
    /* 00829b97: mov dword ptr [0xacb3a8], eax */ W32((u32)(0xacb3a8u), r_eax);
    /* 00829b9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00829b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00829b9f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x829ba4u); f_0086b5cc();
    /* 00829ba4: mov dword ptr [0xacb398], 0xffffffff */ W32((u32)(0xacb398u), 0xffffffffu);
    /* 00829bae: push 0x1200 */ { u32 v = 0x1200u; r_esp -= 4; W32(r_esp, v); }
    /* 00829bb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00829bb5: mov dword ptr [0xacb39c], 0 */ W32((u32)(0xacb39cu), 0x0u);
    /* 00829bbf: mov dword ptr [0xacb394], eax */ W32((u32)(0xacb394u), r_eax);
    /* 00829bc4: mov dword ptr [0xacb390], eax */ W32((u32)(0xacb390u), r_eax);
    /* 00829bc9: mov dword ptr [0xacb3a0], 0 */ W32((u32)(0xacb3a0u), 0x0u);
    /* 00829bd3: mov dword ptr [0xacb38c], eax */ W32((u32)(0xacb38cu), r_eax);
    /* 00829bd8: mov dword ptr [0xacb3a4], 0 */ W32((u32)(0xacb3a4u), 0x0u);
    /* 00829be2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x829be7u); f_008581c5();
    /* 00829be7: mov edx, eax */ r_edx = r_eax;
    /* 00829be9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00829bec: mov dword ptr [0xacb388], edx */ W32((u32)(0xacb388u), r_edx);
    /* 00829bf2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00829bf5: lea eax, [edx + 0x1200] */ r_eax = (u32)(r_edx+0x1200u);
L_00829bfb:; BB(0x00829bfb);
    /* 00829bfb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00829bfd: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 00829bff: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00829c04: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00829c07: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 00829c0a: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 00829c0d: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 00829c10: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00829c13: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00829c16: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 00829c19: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 00829c1c: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 00829c1f: mov dword ptr [edx + 0x38], ebx */ W32((u32)(r_edx+0x38u), r_ebx);
    /* 00829c22: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829c25: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00829c27: ja 0x829bfb */ if ((!fC&&!fZ)) goto L_00829bfb;
L_00829c29:; BB(0x00829c29);
    /* 00829c29: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00829c2c: call 0x829c8c */ r_esp -= 4; W32(r_esp, 0x829c31u); f_00829c8c();
    /* 00829c31: call 0x829a04 */ r_esp -= 4; W32(r_esp, 0x829c36u); f_00829a04();
    /* 00829c36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829c37: ret  */ FN_RET(0x00829b7c); r_esp += 4; return;
}

void f_00829c38(void) /* sub_829C38 */
{
    FN_ENTER(0x00829c38);
    /* 00829c38: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00829c3b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00829c3f: call 0x8290f4 */ r_esp -= 4; W32(r_esp, 0x829c44u); f_008290f4();
    /* 00829c44: test eax, 0x10000000 */ {  u32 a = r_eax; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829c49: jne 0x829c88 */ if (!fZ) goto L_00829c88;
L_00829c4b:; BB(0x00829c4b);
    /* 00829c4b: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00829c4f: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00829c53: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00829c57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00829c59: mov ebx, eax */ r_ebx = r_eax;
L_00829c5b:; BB(0x00829c5b);
    /* 00829c5b: mov edx, dword ptr [0xacb388] */ r_edx = R32((u32)(0xacb388u));
    /* 00829c61: mov ecx, dword ptr [ebx + edx + 0x10] */ r_ecx = R32((u32)(r_ebx+r_edx+0x10u));
    /* 00829c65: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829c68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829c6a: je 0x829c78 */ if (fZ) goto L_00829c78;
L_00829c6c:; BB(0x00829c6c);
    /* 00829c6c: cmp esi, dword ptr [ebx + edx - 0x40] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_edx+0xffffffc0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829c70: jne 0x829c78 */ if (!fZ) goto L_00829c78;
L_00829c72:; BB(0x00829c72);
    /* 00829c72: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00829c73: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00829c75: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x829c78u); call_ind(t); }
L_00829c78:; BB(0x00829c78);
    /* 00829c78: cmp ebx, 0x1200 */ {  u32 a = r_ebx; u32 b = 0x1200u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00829c7e: jl 0x829c5b */ if ((fS!=fO)) goto L_00829c5b;
L_00829c80:; BB(0x00829c80);
    /* 00829c80: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00829c84: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_00829c88:; BB(0x00829c88);
    /* 00829c88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829c8b: ret  */ FN_RET(0x00829c38); r_esp += 4; return;
}

void f_00829c8c(void) /* sub_829C8C */
{
    FN_ENTER(0x00829c8c);
    /* 00829c8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829c8d: call 0x83e134 */ r_esp -= 4; W32(r_esp, 0x829c92u); f_0083e134();
    /* 00829c92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829c94: je 0x829cbb */ if (fZ) goto L_00829cbb;
L_00829c96:; BB(0x00829c96);
    /* 00829c96: call 0x83e13c */ r_esp -= 4; W32(r_esp, 0x829c9bu); f_0083e13c();
    /* 00829c9b: mov esi, eax */ r_esi = r_eax;
    /* 00829c9d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829c9f: je 0x829cbb */ if (fZ) goto L_00829cbb;
L_00829ca1:; BB(0x00829ca1);
    /* 00829ca1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00829ca3: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00829ca8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00829caa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829cab: call dword ptr [edx + 0x2c] */ { u32 t = R32((u32)(r_edx+0x2cu)); r_esp -= 4; W32(r_esp, 0x829caeu); call_ind(t); }
    /* 00829cae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00829cb0: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00829cb5: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00829cb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829cb8: call dword ptr [edx + 0x3c] */ { u32 t = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, 0x829cbbu); call_ind(t); }
L_00829cbb:; BB(0x00829cbb);
    /* 00829cbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00829cbc: ret  */ FN_RET(0x00829c8c); r_esp += 4; return;
}

void f_00829cc0(void) /* sub_829CC0 */
{
    FN_ENTER(0x00829cc0);
    /* 00829cc0: mov eax, dword ptr [0xaf0388] */ r_eax = R32((u32)(0xaf0388u));
    /* 00829cc5: ret  */ FN_RET(0x00829cc0); r_esp += 4; return;
}

void f_00829cc8(void) /* sub_829CC8 */
{
    FN_ENTER(0x00829cc8);
    /* 00829cc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00829cc9: mov eax, ecx */ r_eax = r_ecx;
    /* 00829ccb: mov dword ptr [0xaf0388], eax */ W32((u32)(0xaf0388u), r_eax);
    /* 00829cd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829cd2: je 0x829d5d */ if (fZ) goto L_00829d5d;
L_00829cd8:; BB(0x00829cd8);
    /* 00829cd8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00829cda: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00829cdd: mov ecx, 0xacb3c0 */ r_ecx = 0xacb3c0u;
    /* 00829ce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829ce4: je 0x829d4c */ if (fZ) goto L_00829d4c;
L_00829ce6:; BB(0x00829ce6);
    /* 00829ce6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00829ce9: jb 0x829d2e */ if (fC) goto L_00829d2e;
L_00829ceb:; BB(0x00829ceb);
    /* 00829ceb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00829cee:; BB(0x00829cee);
    /* 00829cee: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00829cf1: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00829cf4: mov ebx, dword ptr [ebx + 0x20] */ r_ebx = R32((u32)(r_ebx+0x20u));
    /* 00829cf7: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00829cf9: mov ebx, dword ptr [edx + 0x14] */ r_ebx = R32((u32)(r_edx+0x14u));
    /* 00829cfc: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00829cff: mov ebx, dword ptr [ebx + 0x20] */ r_ebx = R32((u32)(r_ebx+0x20u));
    /* 00829d02: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 00829d05: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 00829d08: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00829d0b: mov ebx, dword ptr [ebx + 0x20] */ r_ebx = R32((u32)(r_ebx+0x20u));
    /* 00829d0e: mov dword ptr [ecx + 8], ebx */ W32((u32)(r_ecx+0x8u), r_ebx);
    /* 00829d11: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00829d14: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00829d17: mov ebx, dword ptr [ebx + 0x20] */ r_ebx = R32((u32)(r_ebx+0x20u));
    /* 00829d1a: mov dword ptr [ecx + 0xc], ebx */ W32((u32)(r_ecx+0xcu), r_ebx);
    /* 00829d1d: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829d20: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829d23: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829d26: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00829d29: jae 0x829cee */ if (!fC) goto L_00829cee;
L_00829d2b:; BB(0x00829d2b);
    /* 00829d2b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00829d2e:; BB(0x00829d2e);
    /* 00829d2e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00829d31:; BB(0x00829d31);
    /* 00829d31: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00829d34: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 00829d37: mov ebx, dword ptr [ebx + 0x20] */ r_ebx = R32((u32)(r_ebx+0x20u));
    /* 00829d3a: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 00829d3c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829d3f: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829d42: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829d45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829d47: jne 0x829d31 */ if (!fZ) goto L_00829d31;
L_00829d49:; BB(0x00829d49);
    /* 00829d49: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00829d4c:; BB(0x00829d4c);
    /* 00829d4c: mov ecx, 0xacb3c0 */ r_ecx = 0xacb3c0u;
    /* 00829d51: call 0x8399d4 */ r_esp -= 4; W32(r_esp, 0x829d56u); f_008399d4();
L_00829d56:; BB(0x00829d56);
    /* 00829d56: mov eax, 1 */ r_eax = 0x1u;
    /* 00829d5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829d5c: ret  */ FN_RET(0x00829cc8); r_esp += 4; return;
L_00829d5d:; BB(0x00829d5d);
    /* 00829d5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00829d5f: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x829d64u); f_00839a28();
    /* 00829d64: jmp 0x829d56 */ goto L_00829d56;
}

void f_00829d68(void) /* sub_829D68 */
{
    FN_ENTER(0x00829d68);
    /* 00829d68: mov eax, ecx */ r_eax = r_ecx;
    /* 00829d6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00829d6c: mov edx, eax */ r_edx = r_eax;
    /* 00829d6e: call 0x839838 */ r_esp -= 4; W32(r_esp, 0x829d73u); f_00839838();
    /* 00829d73: mov eax, 1 */ r_eax = 0x1u;
    /* 00829d78: ret  */ FN_RET(0x00829d68); r_esp += 4; return;
}

void f_00829d7c(void) /* sub_829D7C */
{
    FN_ENTER(0x00829d7c);
    /* 00829d7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00829d7d: mov edi, dword ptr [0xaf0388] */ r_edi = R32((u32)(0xaf0388u));
    /* 00829d83: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829d85: je 0x829da4 */ if (fZ) goto L_00829da4;
L_00829d87:; BB(0x00829d87);
    /* 00829d87: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 00829d89: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829d8b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829d8d: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00829d90: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00829d92: mov eax, dword ptr [eax + edi + 8] */ r_eax = R32((u32)(r_eax+r_edi+0x8u));
    /* 00829d96: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00829d99: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00829d9c: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00829d9f: call 0x839a24 */ r_esp -= 4; W32(r_esp, 0x829da4u); f_00839a24();
L_00829da4:; BB(0x00829da4);
    /* 00829da4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00829da5: ret  */ FN_RET(0x00829d7c); r_esp += 4; return;
}

void f_00829da8(void) /* sub_829DA8 */
{
    FN_ENTER(0x00829da8);
    /* 00829da8: mov edx, dword ptr [0xacb9c4] */ r_edx = R32((u32)(0xacb9c4u));
    /* 00829dae: mov eax, dword ptr [0xacb9c0] */ r_eax = R32((u32)(0xacb9c0u));
    /* 00829db3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829db5: je 0x829dc3 */ if (fZ) goto L_00829dc3;
L_00829db7:; BB(0x00829db7);
    /* 00829db7: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829db9: je 0x829dc6 */ if (fZ) goto L_00829dc6;
L_00829dbb:; BB(0x00829dbb);
    /* 00829dbb: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00829dbe: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00829dc1: jne 0x829db7 */ if (!fZ) goto L_00829db7;
L_00829dc3:; BB(0x00829dc3);
    /* 00829dc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00829dc5: ret  */ FN_RET(0x00829da8); r_esp += 4; return;
L_00829dc6:; BB(0x00829dc6);
    /* 00829dc6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 00829dc9: mov dword ptr [0xacb3c0], eax */ W32((u32)(0xacb3c0u), r_eax);
    /* 00829dce: mov ecx, 0xacb3c0 */ r_ecx = 0xacb3c0u;
    /* 00829dd3: call 0x8399d4 */ r_esp -= 4; W32(r_esp, 0x829dd8u); f_008399d4();
    /* 00829dd8: mov eax, 1 */ r_eax = 0x1u;
    /* 00829ddd: ret  */ FN_RET(0x00829da8); r_esp += 4; return;
}

void f_00829de0(void) /* sub_829DE0 */
{
    FN_ENTER(0x00829de0);
    /* 00829de0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00829de1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00829de4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00829de6: cmp ebx, dword ptr [0xaf0388] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0388u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829dec: je 0x829e5c */ if (fZ) goto L_00829e5c;
L_00829dee:; BB(0x00829dee);
    /* 00829dee: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00829df0: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00829df3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829df5: je 0x829e52 */ if (fZ) goto L_00829e52;
L_00829df7:; BB(0x00829df7);
    /* 00829df7: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00829dfb: mov ebx, eax */ r_ebx = r_eax;
    /* 00829dfd: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00829e00: mov esi, edx */ r_esi = r_edx;
L_00829e02:; BB(0x00829e02);
    /* 00829e02: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00829e05: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00829e08: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829e0a: je 0x829e3c */ if (fZ) goto L_00829e3c;
L_00829e0c:; BB(0x00829e0c);
    /* 00829e0c: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829e0f: mov dword ptr [edi + 0x10], ecx */ W32((u32)(r_edi+0x10u), r_ecx);
    /* 00829e12: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00829e15: add dword ptr [ecx + 0x2c], -1 */ { u32 ad = (u32)(r_ecx+0x2cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00829e19: mov ecx, dword ptr [edi + 0x10] */ r_ecx = R32((u32)(r_edi+0x10u));
    /* 00829e1c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829e1e: jne 0x829e3c */ if (!fZ) goto L_00829e3c;
L_00829e20:; BB(0x00829e20);
    /* 00829e20: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00829e23: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00829e26: call 0x839654 */ r_esp -= 4; W32(r_esp, 0x829e2bu); f_00839654();
    /* 00829e2b: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00829e2e: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x829e33u); f_0082ac20();
    /* 00829e33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00829e34: call 0x82ac48 */ r_esp -= 4; W32(r_esp, 0x829e39u); f_0082ac48();
    /* 00829e39: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00829e3c:; BB(0x00829e3c);
    /* 00829e3c: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 00829e43: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00829e46: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00829e49: jne 0x829e02 */ if (!fZ) goto L_00829e02;
L_00829e4b:; BB(0x00829e4b);
    /* 00829e4b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00829e4f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00829e52:; BB(0x00829e52);
    /* 00829e52: mov eax, 1 */ r_eax = 0x1u;
    /* 00829e57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00829e5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00829e5b: ret  */ FN_RET(0x00829de0); r_esp += 4; return;
L_00829e5c:; BB(0x00829e5c);
    /* 00829e5c: mov dword ptr [0xaf0388], 0 */ W32((u32)(0xaf0388u), 0x0u);
    /* 00829e66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00829e68: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x829e6du); f_00839a28();
    /* 00829e6d: jmp 0x829dee */ goto L_00829dee;
}

void f_00829e74(void) /* sub_829E74 */
{
    FN_ENTER(0x00829e74);
    /* 00829e74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00829e75: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00829e7b: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00829e7e: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00829e80: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00829e82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829e84: je 0x82a313 */ if (fZ) goto L_0082a313;
L_00829e8a:; BB(0x00829e8a);
    /* 00829e8a: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00829e8e: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00829e92: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00829e96: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00829e98: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00829e9c: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
L_00829ea0:; BB(0x00829ea0);
    /* 00829ea0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00829ea3: mov edx, 0xffffffef */ r_edx = 0xffffffefu;
    /* 00829ea8: mov esi, eax */ r_esi = r_eax;
    /* 00829eaa: and esi, 0x800000 */ {  u32 a = r_esi; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00829eb0: je 0x829eb5 */ if (fZ) goto L_00829eb5;
L_00829eb2:; BB(0x00829eb2);
    /* 00829eb2: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
L_00829eb5:; BB(0x00829eb5);
    /* 00829eb5: test eax, 0x48000000 */ {  u32 a = r_eax; u32 b = 0x48000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829eba: je 0x82a08d */ if (fZ) goto L_0082a08d;
L_00829ec0:; BB(0x00829ec0);
    /* 00829ec0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00829ec2: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00829ec8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829eca: je 0x829edc */ if (fZ) goto L_00829edc;
L_00829ecc:; BB(0x00829ecc);
    /* 00829ecc: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00829ed0: call 0x82a3e0 */ r_esp -= 4; W32(r_esp, 0x829ed5u); f_0082a3e0();
    /* 00829ed5: mov esi, eax */ r_esi = r_eax;
    /* 00829ed7: jmp 0x82a2f2 */ goto L_0082a2f2;
L_00829edc:; BB(0x00829edc);
    /* 00829edc: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00829ede: lea eax, [esp + 0x168] */ r_eax = (u32)(r_esp+0x168u);
    /* 00829ee5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00829ee6: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x829eebu); f_0082ac20();
    /* 00829eeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00829eec: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00829eef: mov dword ptr [esp + 0x168], eax */ W32((u32)(r_esp+0x168u), r_eax);
    /* 00829ef6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00829ef8: mov dword ptr [esp + 0x16c], edx */ W32((u32)(r_esp+0x16cu), r_edx);
    /* 00829eff: mov dword ptr [esp + 0x170], edx */ W32((u32)(r_esp+0x170u), r_edx);
    /* 00829f06: mov edx, dword ptr [0xacb9c8] */ r_edx = R32((u32)(0xacb9c8u));
    /* 00829f0c: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 00829f0f: mov ecx, edx */ r_ecx = r_edx;
    /* 00829f11: mov dword ptr [esp + 0x174], esi */ W32((u32)(r_esp+0x174u), r_esi);
    /* 00829f18: mov esi, dword ptr [0xacb9cc] */ r_esi = R32((u32)(0xacb9ccu));
    /* 00829f1e: movzx eax, word ptr [edi + 0x14] */ r_eax = (u32)R16((u32)(r_edi+0x14u));
    /* 00829f22: mov dword ptr [esp + 0x178], eax */ W32((u32)(r_esp+0x178u), r_eax);
    /* 00829f29: movzx eax, word ptr [edi + 0x16] */ r_eax = (u32)R16((u32)(r_edi+0x16u));
    /* 00829f2d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f2f: mov dword ptr [esp + 0x17c], eax */ W32((u32)(r_esp+0x17cu), r_eax);
    /* 00829f36: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 00829f39: mov dword ptr [esp + 0x180], eax */ W32((u32)(r_esp+0x180u), r_eax);
    /* 00829f40: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00829f43: mov dword ptr [esp + 0x184], eax */ W32((u32)(r_esp+0x184u), r_eax);
    /* 00829f4a: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00829f4d: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00829f51: je 0x829f72 */ if (fZ) goto L_00829f72;
L_00829f53:; BB(0x00829f53);
    /* 00829f53: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00829f57:; BB(0x00829f57);
    /* 00829f57: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 00829f5a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f5c: je 0x829f66 */ if (fZ) goto L_00829f66;
L_00829f5e:; BB(0x00829f5e);
    /* 00829f5e: cmp eax, dword ptr [ebx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f60: je 0x82a33b */ if (fZ) goto L_0082a33b;
L_00829f66:; BB(0x00829f66);
    /* 00829f66: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00829f69: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00829f6c: jne 0x829f57 */ if (!fZ) goto L_00829f57;
L_00829f6e:; BB(0x00829f6e);
    /* 00829f6e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00829f72:; BB(0x00829f72);
    /* 00829f72: mov ecx, dword ptr [0xacb9c4] */ r_ecx = R32((u32)(0xacb9c4u));
    /* 00829f78: mov eax, dword ptr [0xacb9c0] */ r_eax = R32((u32)(0xacb9c0u));
    /* 00829f7d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00829f7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f81: je 0x829fbd */ if (fZ) goto L_00829fbd;
L_00829f83:; BB(0x00829f83);
    /* 00829f83: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_00829f87:; BB(0x00829f87);
    /* 00829f87: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00829f89: cmp ebx, -0x11 */ {  u32 a = r_ebx; u32 b = 0xffffffefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829f8c: je 0x82a330 */ if (fZ) goto L_0082a330;
L_00829f92:; BB(0x00829f92);
    /* 00829f92: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829f95: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00829f98: jne 0x829f87 */ if (!fZ) goto L_00829f87;
L_00829f9a:; BB(0x00829f9a);
    /* 00829f9a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_00829f9e:; BB(0x00829f9e);
    /* 00829f9e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fa0: je 0x829fbd */ if (fZ) goto L_00829fbd;
L_00829fa2:; BB(0x00829fa2);
    /* 00829fa2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fa4: je 0x829fbd */ if (fZ) goto L_00829fbd;
L_00829fa6:; BB(0x00829fa6);
    /* 00829fa6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
L_00829faa:; BB(0x00829faa);
    /* 00829faa: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00829fad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829faf: je 0x82a320 */ if (fZ) goto L_0082a320;
L_00829fb5:; BB(0x00829fb5);
    /* 00829fb5: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00829fb8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00829fbb: jne 0x829faa */ if (!fZ) goto L_00829faa;
L_00829fbd:; BB(0x00829fbd);
    /* 00829fbd: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00829fbf:; BB(0x00829fbf);
    /* 00829fbf: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fc1: je 0x82a2f2 */ if (fZ) goto L_0082a2f2;
L_00829fc7:; BB(0x00829fc7);
    /* 00829fc7: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00829fca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00829fcc: jne 0x82a07b */ if (!fZ) goto L_0082a07b;
L_00829fd2:; BB(0x00829fd2);
    /* 00829fd2: mov eax, dword ptr [esp + 0x168] */ r_eax = R32((u32)(r_esp+0x168u));
    /* 00829fd9: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00829fdc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00829fde: mov eax, dword ptr [esp + 0x16c] */ r_eax = R32((u32)(r_esp+0x16cu));
    /* 00829fe5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00829fe8: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00829feb: mov eax, dword ptr [esp + 0x170] */ r_eax = R32((u32)(r_esp+0x170u));
    /* 00829ff2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00829ff5: mov eax, dword ptr [esp + 0x174] */ r_eax = R32((u32)(r_esp+0x174u));
    /* 00829ffc: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00829fff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a001: mov eax, dword ptr [esp + 0x178] */ r_eax = R32((u32)(r_esp+0x178u));
    /* 0082a008: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0082a00b: mov eax, dword ptr [esp + 0x17c] */ r_eax = R32((u32)(r_esp+0x17cu));
    /* 0082a012: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0082a015: mov eax, dword ptr [esp + 0x180] */ r_eax = R32((u32)(r_esp+0x180u));
    /* 0082a01c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0082a01f: mov eax, dword ptr [esp + 0x184] */ r_eax = R32((u32)(r_esp+0x184u));
    /* 0082a026: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0082a029: mov eax, dword ptr [esp + 0x188] */ r_eax = R32((u32)(r_esp+0x188u));
    /* 0082a030: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a033: mov eax, dword ptr [esp + 0x18c] */ r_eax = R32((u32)(r_esp+0x18cu));
    /* 0082a03a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0082a03d: mov eax, dword ptr [esp + 0x190] */ r_eax = R32((u32)(r_esp+0x190u));
    /* 0082a044: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0082a047: mov eax, dword ptr [esp + 0x194] */ r_eax = R32((u32)(r_esp+0x194u));
    /* 0082a04e: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0082a051: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0082a055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a056: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0082a059: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0082a05b: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a05e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a05f: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a062: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a065: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a068: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a06b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082a06d: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a072u); f_0083913c();
    /* 0082a072: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a075: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a078: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
L_0082a07b:; BB(0x0082a07b);
    /* 0082a07b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a07e: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0082a081: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a084: add dword ptr [edx + 0x2c], 1 */ { u32 ad = (u32)(r_edx+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0082a088: jmp 0x82a2f2 */ goto L_0082a2f2;
L_0082a08d:; BB(0x0082a08d);
    /* 0082a08d: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0082a08f: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0082a093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0082a095: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0082a097: mov ecx, edi */ r_ecx = r_edi;
    /* 0082a099: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a09b: je 0x82a0a9 */ if (fZ) goto L_0082a0a9;
L_0082a09d:; BB(0x0082a09d);
    /* 0082a09d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a0a0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0082a0a3: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0082a0a5: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a0a7: jne 0x82a09d */ if (!fZ) goto L_0082a09d;
L_0082a0a9:; BB(0x0082a0a9);
    /* 0082a0a9: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0082a0ad: lea esi, [esp + 0x30] */ r_esi = (u32)(r_esp+0x30u);
    /* 0082a0b1: lea edi, [eax + edx - 4] */ r_edi = (u32)(r_eax+r_edx+0xfffffffcu);
L_0082a0b5:; BB(0x0082a0b5);
    /* 0082a0b5: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a0b7: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a0ba: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a0bc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a0bf: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a0c1: jne 0x82a0b5 */ if (!fZ) goto L_0082a0b5;
L_0082a0c3:; BB(0x0082a0c3);
    /* 0082a0c3: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0082a0c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a0c8: call 0x8cab7c */ r_esp -= 4; W32(r_esp, 0x82a0cdu); f_008cab7c();
    /* 0082a0cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0082a0ce: movsx eax, byte ptr [esp + 0x30] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x30u));
    /* 0082a0d3: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a0d6: je 0x82a370 */ if (fZ) goto L_0082a370;
L_0082a0dc:; BB(0x0082a0dc);
    /* 0082a0dc: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0082a0e0: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
L_0082a0e4:; BB(0x0082a0e4);
    /* 0082a0e4: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a0e6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a0e9: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a0eb: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a0ee: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a0f0: jne 0x82a0e4 */ if (!fZ) goto L_0082a0e4;
L_0082a0f2:; BB(0x0082a0f2);
    /* 0082a0f2: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 0082a0f6: mov edx, 0x98a148 */ r_edx = 0x98a148u;
    /* 0082a0fb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0082a100: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082a102: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0082a104: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0082a107:; BB(0x0082a107);
    /* 0082a107: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0082a109: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a10c: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0082a10e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a111: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a113: jne 0x82a107 */ if (!fZ) goto L_0082a107;
L_0082a115:; BB(0x0082a115);
    /* 0082a115: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 0082a119: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a11a: call 0x844a30 */ r_esp -= 4; W32(r_esp, 0x82a11fu); f_00844a30();
    /* 0082a11f: mov edi, eax */ r_edi = r_eax;
    /* 0082a121: lea edx, [esp + 0x13c] */ r_edx = (u32)(r_esp+0x13cu);
    /* 0082a128: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a129: call 0x82ac20 */ r_esp -= 4; W32(r_esp, 0x82a12eu); f_0082ac20();
    /* 0082a12e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082a131: mov ecx, dword ptr [0xacb9cc] */ r_ecx = R32((u32)(0xacb9ccu));
    /* 0082a137: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a13a: mov dword ptr [esp + 0x138], edx */ W32((u32)(r_esp+0x138u), r_edx);
    /* 0082a141: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082a143: mov dword ptr [esp + 0x13c], esi */ W32((u32)(r_esp+0x13cu), r_esi);
    /* 0082a14a: mov dword ptr [esp + 0x140], esi */ W32((u32)(r_esp+0x140u), r_esi);
    /* 0082a151: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0082a154: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a156: mov dword ptr [esp + 0x144], edx */ W32((u32)(r_esp+0x144u), r_edx);
    /* 0082a15d: movzx edx, word ptr [edi + 0x14] */ r_edx = (u32)R16((u32)(r_edi+0x14u));
    /* 0082a161: mov dword ptr [esp + 0x148], edx */ W32((u32)(r_esp+0x148u), r_edx);
    /* 0082a168: movzx edx, word ptr [edi + 0x16] */ r_edx = (u32)R16((u32)(r_edi+0x16u));
    /* 0082a16c: mov dword ptr [esp + 0x14c], edx */ W32((u32)(r_esp+0x14cu), r_edx);
    /* 0082a173: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 0082a176: mov dword ptr [esp + 0x150], edx */ W32((u32)(r_esp+0x150u), r_edx);
    /* 0082a17d: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0082a180: mov dword ptr [esp + 0x154], edx */ W32((u32)(r_esp+0x154u), r_edx);
    /* 0082a187: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0082a18a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0082a18e: mov edx, dword ptr [0xacb9c8] */ r_edx = R32((u32)(0xacb9c8u));
    /* 0082a194: mov eax, edx */ r_eax = r_edx;
    /* 0082a196: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a198: je 0x82a1c5 */ if (fZ) goto L_0082a1c5;
L_0082a19a:; BB(0x0082a19a);
    /* 0082a19a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0082a19e: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0082a1a2: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0082a1a6:; BB(0x0082a1a6);
    /* 0082a1a6: mov ebx, dword ptr [esi + 0xc] */ r_ebx = R32((u32)(r_esi+0xcu));
    /* 0082a1a9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1ab: je 0x82a1b5 */ if (fZ) goto L_0082a1b5;
L_0082a1ad:; BB(0x0082a1ad);
    /* 0082a1ad: cmp ebp, dword ptr [ebx] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1af: je 0x82a363 */ if (fZ) goto L_0082a363;
L_0082a1b5:; BB(0x0082a1b5);
    /* 0082a1b5: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a1b8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082a1bb: jne 0x82a1a6 */ if (!fZ) goto L_0082a1a6;
L_0082a1bd:; BB(0x0082a1bd);
    /* 0082a1bd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a1c1: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0082a1c5:; BB(0x0082a1c5);
    /* 0082a1c5: mov eax, dword ptr [0xacb9c4] */ r_eax = R32((u32)(0xacb9c4u));
    /* 0082a1ca: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0082a1ce: mov eax, dword ptr [0xacb9c0] */ r_eax = R32((u32)(0xacb9c0u));
    /* 0082a1d3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0082a1d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1d7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0082a1db: je 0x82a220 */ if (fZ) goto L_0082a220;
L_0082a1dd:; BB(0x0082a1dd);
    /* 0082a1dd: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0082a1e1: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0082a1e5: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
L_0082a1e9:; BB(0x0082a1e9);
    /* 0082a1e9: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 0082a1ec: cmp ebx, -0x11 */ {  u32 a = r_ebx; u32 b = 0xffffffefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a1ef: je 0x82a34e */ if (fZ) goto L_0082a34e;
L_0082a1f5:; BB(0x0082a1f5);
    /* 0082a1f5: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082a1f8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0082a1fb: jne 0x82a1e9 */ if (!fZ) goto L_0082a1e9;
L_0082a1fd:; BB(0x0082a1fd);
    /* 0082a1fd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a201: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0082a205:; BB(0x0082a205);
    /* 0082a205: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a207: je 0x82a220 */ if (fZ) goto L_0082a220;
L_0082a209:; BB(0x0082a209);
    /* 0082a209: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a20b: je 0x82a220 */ if (fZ) goto L_0082a220;
L_0082a20d:; BB(0x0082a20d);
    /* 0082a20d: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0082a210: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a212: je 0x82a344 */ if (fZ) goto L_0082a344;
L_0082a218:; BB(0x0082a218);
    /* 0082a218: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a21b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0082a21e: jne 0x82a20d */ if (!fZ) goto L_0082a20d;
L_0082a220:; BB(0x0082a220);
    /* 0082a220: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0082a222:; BB(0x0082a222);
    /* 0082a222: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a224: je 0x82a2eb */ if (fZ) goto L_0082a2eb;
L_0082a22a:; BB(0x0082a22a);
    /* 0082a22a: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0082a22d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a22f: jne 0x82a2de */ if (!fZ) goto L_0082a2de;
L_0082a235:; BB(0x0082a235);
    /* 0082a235: mov eax, dword ptr [esp + 0x138] */ r_eax = R32((u32)(r_esp+0x138u));
    /* 0082a23c: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a23f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0082a241: mov eax, dword ptr [esp + 0x13c] */ r_eax = R32((u32)(r_esp+0x13cu));
    /* 0082a248: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0082a24b: lea ecx, [edi + 0x40] */ r_ecx = (u32)(r_edi+0x40u);
    /* 0082a24e: mov eax, dword ptr [esp + 0x140] */ r_eax = R32((u32)(r_esp+0x140u));
    /* 0082a255: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0082a258: mov eax, dword ptr [esp + 0x144] */ r_eax = R32((u32)(r_esp+0x144u));
    /* 0082a25f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0082a262: mov eax, dword ptr [esp + 0x148] */ r_eax = R32((u32)(r_esp+0x148u));
    /* 0082a269: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0082a26c: mov eax, dword ptr [esp + 0x14c] */ r_eax = R32((u32)(r_esp+0x14cu));
    /* 0082a273: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0082a276: mov eax, dword ptr [esp + 0x150] */ r_eax = R32((u32)(r_esp+0x150u));
    /* 0082a27d: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0082a280: mov eax, dword ptr [esp + 0x154] */ r_eax = R32((u32)(r_esp+0x154u));
    /* 0082a287: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0082a28a: mov eax, dword ptr [esp + 0x158] */ r_eax = R32((u32)(r_esp+0x158u));
    /* 0082a291: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a294: mov eax, dword ptr [esp + 0x15c] */ r_eax = R32((u32)(r_esp+0x15cu));
    /* 0082a29b: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0082a29e: mov eax, dword ptr [esp + 0x160] */ r_eax = R32((u32)(r_esp+0x160u));
    /* 0082a2a5: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0082a2a8: mov eax, dword ptr [esp + 0x164] */ r_eax = R32((u32)(r_esp+0x164u));
    /* 0082a2af: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0082a2b2: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a2b5: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0082a2b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2ba: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2be: push dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2c1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0082a2c3: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2c6: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2c9: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0082a2cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2ce: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0082a2d0: call 0x83913c */ r_esp -= 4; W32(r_esp, 0x82a2d5u); f_0083913c();
    /* 0082a2d5: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a2d8: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0082a2db: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
L_0082a2de:; BB(0x0082a2de);
    /* 0082a2de: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a2e1: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0082a2e4: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0082a2e7: add dword ptr [edx + 0x2c], 1 */ { u32 ad = (u32)(r_edx+0x2cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0082a2eb:; BB(0x0082a2eb);
    /* 0082a2eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0082a2ec: call 0x844ac4 */ r_esp -= 4; W32(r_esp, 0x82a2f1u); f_00844ac4();
    /* 0082a2f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0082a2f2:; BB(0x0082a2f2);
    /* 0082a2f2: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0082a2f6: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0082a2f9: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0082a2fc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0082a2ff: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0082a301: jb 0x829ea0 */ if (fC) goto L_00829ea0;
L_0082a307:; BB(0x0082a307);
    /* 0082a307: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0082a30b: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0082a30f: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_0082a313:; BB(0x0082a313);
    /* 0082a313: mov eax, 1 */ r_eax = 0x1u;
    /* 0082a318: add esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0082a31e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0082a31f: ret  */ FN_RET(0x00829e74); r_esp += 4; return;
L_0082a320:; BB(0x0082a320);
    /* 0082a320: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 0082a324: mov eax, ecx */ r_eax = r_ecx;
    /* 0082a326: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 0082a329: mov esi, eax */ r_esi = r_eax;
    /* 0082a32b: jmp 0x829fbf */ goto L_00829fbf;
L_0082a330:; BB(0x0082a330);
    /* 0082a330: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a334: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a336: jmp 0x829f9e */ goto L_00829f9e;
L_0082a33b:; BB(0x0082a33b);
    /* 0082a33b: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a33f: jmp 0x829fbf */ goto L_00829fbf;
L_0082a344:; BB(0x0082a344);
    /* 0082a344: mov dword ptr [ecx + 0xc], esi */ W32((u32)(r_ecx+0xcu), r_esi);
    /* 0082a347: mov esi, ecx */ r_esi = r_ecx;
    /* 0082a349: jmp 0x82a222 */ goto L_0082a222;
L_0082a34e:; BB(0x0082a34e);
    /* 0082a34e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a352: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0082a356: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a35a: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0082a35e: jmp 0x82a205 */ goto L_0082a205;
L_0082a363:; BB(0x0082a363);
    /* 0082a363: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0082a367: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0082a36b: jmp 0x82a222 */ goto L_0082a222;
L_0082a370:; BB(0x0082a370);
    /* 0082a370: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0082a374: push 0x98a148 */ { u32 v = 0x98a148u; r_esp -= 4; W32(r_esp, v); }
    /* 0082a379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0082a37a: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x82a37fu); f_008599e3();
    /* 0082a37f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0082a382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0082a384: je 0x82a3c4 */ if (fZ) goto L_0082a3c4;
L_0082a386:; BB(0x0082a386);
    /* 0082a386: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0082a38a: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
L_0082a38e:; BB(0x0082a38e);
    /* 0082a38e: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a390: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a393: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a395: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a398: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a39a: jne 0x82a38e */ if (!fZ) goto L_0082a38e;
L_0082a39c:; BB(0x0082a39c);
    /* 0082a39c: lea edi, [esp + 0x38] */ r_edi = (u32)(r_esp+0x38u);
    /* 0082a3a0: mov edx, 0x98a148 */ r_edx = 0x98a148u;
    /* 0082a3a5: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0082a3aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0082a3ac: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 0082a3ae: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0082a3b1:; BB(0x0082a3b1);
    /* 0082a3b1: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0082a3b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0082a3b6: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 0082a3b8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a3bb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a3bd: jne 0x82a3b1 */ if (!fZ) goto L_0082a3b1;
L_0082a3bf:; BB(0x0082a3bf);
    /* 0082a3bf: jmp 0x82a115 */ goto L_0082a115;
L_0082a3c4:; BB(0x0082a3c4);
    /* 0082a3c4: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0082a3c8: lea esi, [esp + 0x38] */ r_esi = (u32)(r_esp+0x38u);
L_0082a3cc:; BB(0x0082a3cc);
    /* 0082a3cc: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0082a3ce: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0082a3d1: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0082a3d3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0082a3d6: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0082a3d8: jne 0x82a3cc */ if (!fZ) goto L_0082a3cc;
L_0082a3da:; BB(0x0082a3da);
    /* 0082a3da: jmp 0x82a115 */ goto L_0082a115;
}

