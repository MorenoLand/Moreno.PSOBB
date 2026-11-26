#include "protos.h"

void f_0062f050(void) /* sub_62F050 */
{
    FN_ENTER(0x0062f050);
    /* 0062f050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f051: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f055: push 0x8e3618 */ { u32 v = 0x8e3618u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f05a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062f060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062f068: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f06b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062f06e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062f071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062f074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062f077: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062f07a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062f07d: mov dword ptr [ecx], 0xb2a76c */ W32((u32)(r_ecx), 0xb2a76cu);
    /* 0062f083: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062f08a: call 0x62eecc */ r_esp -= 4; W32(r_esp, 0x62f08fu); f_0062eecc();
    /* 0062f08f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f092: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062f099: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f09b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f09c: ret  */ FN_RET(0x0062f050); r_esp += 4; return;
}

void f_0062f0a0(void) /* sub_62F0A0 */
{
    FN_ENTER(0x0062f0a0);
    /* 0062f0a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062f0a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062f0a5: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0062f0aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0ab: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062f0af: call 0x62ee14 */ r_esp -= 4; W32(r_esp, 0x62f0b4u); f_0062ee14();
    /* 0062f0b4: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0062f0b9: mov dword ptr [ebx], 0xb2a76c */ W32((u32)(r_ebx), 0xb2a76cu);
    /* 0062f0bf: mov edx, dword ptr [0x9c6064] */ r_edx = R32((u32)(0x9c6064u));
    /* 0062f0c5: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0062f0c8: mov word ptr [ebx + 0xac], ax */ W16((u32)(r_ebx+0xacu), (u16)r_eax);
    /* 0062f0cf: mov eax, ebx */ r_eax = r_ebx;
    /* 0062f0d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f0d2: ret 0xc */ FN_RET(0x0062f0a0); r_esp += 16; return;
}

void f_0062f0d8(void) /* sub_62F0D8 */
{
    FN_ENTER(0x0062f0d8);
    /* 0062f0d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f0db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0dd: push 0x8e3640 */ { u32 v = 0x8e3640u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062f0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f0e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062f0f0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f0f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062f0f6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0062f0f9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0062f0fc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0062f0ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0062f102: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0062f109: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f10e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62f113u); f_005caba4();
    /* 0062f113: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062f116: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f119: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0062f11c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f11e: je 0x62f198 */ if (fZ) goto L_0062f198;
L_0062f120:; BB(0x0062f120);
    /* 0062f120: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0062f127: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0062f12e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f131: movzx edx, word ptr [0xa9c4f4] */ r_edx = (u32)R16((u32)(0xa9c4f4u));
    /* 0062f138: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f13a: movzx eax, word ptr [ebx + 0x2dc] */ r_eax = (u32)R16((u32)(r_ebx+0x2dcu));
    /* 0062f141: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f142: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f143: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f144: call 0x62f0a0 */ r_esp -= 4; W32(r_esp, 0x62f149u); f_0062f0a0();
    /* 0062f149: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0062f150:; BB(0x0062f150);
    /* 0062f150: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062f153: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f155: je 0x62f181 */ if (fZ) goto L_0062f181;
L_0062f157:; BB(0x0062f157);
    /* 0062f157: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f15a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062f15d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0062f160: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0062f163: mov ebx, dword ptr [eax + 0x54] */ r_ebx = R32((u32)(r_eax+0x54u));
    /* 0062f166: mov dword ptr [edx + 0x54], ebx */ W32((u32)(r_edx+0x54u), r_ebx);
    /* 0062f169: mov esi, dword ptr [eax + 0x58] */ r_esi = R32((u32)(r_eax+0x58u));
    /* 0062f16c: mov dword ptr [edx + 0x58], esi */ W32((u32)(r_edx+0x58u), r_esi);
    /* 0062f16f: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 0062f172: mov dword ptr [edx + 0x38], edi */ W32((u32)(r_edx+0x38u), r_edi);
    /* 0062f175: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0062f178: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0062f17b: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0062f17e: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
L_0062f181:; BB(0x0062f181);
    /* 0062f181: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062f184: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062f187: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062f18a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f18d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062f194: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f196: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f197: ret  */ FN_RET(0x0062f0d8); r_esp += 4; return;
L_0062f198:; BB(0x0062f198);
    /* 0062f198: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f19a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062f19d: jmp 0x62f150 */ goto L_0062f150;
}

void f_0062f1a0(void) /* sub_62F1A0 */
{
    FN_ENTER(0x0062f1a0);
    /* 0062f1a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1a1: mov edi, ecx */ r_edi = r_ecx;
    /* 0062f1a3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f1a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1a9: je 0x62f1d3 */ if (fZ) goto L_0062f1d3;
L_0062f1ab:; BB(0x0062f1ab);
    /* 0062f1ab: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x62f1b0u); f_00687c48();
    /* 0062f1b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1b2: je 0x62f1d3 */ if (fZ) goto L_0062f1d3;
L_0062f1b4:; BB(0x0062f1b4);
    /* 0062f1b4: movzx eax, word ptr [edi + 0x2dc] */ r_eax = (u32)R16((u32)(r_edi+0x2dcu));
    /* 0062f1bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1bc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62f1c1u); f_0068d5a8();
    /* 0062f1c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f1c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1c4: je 0x62f1d3 */ if (fZ) goto L_0062f1d3;
L_0062f1c6:; BB(0x0062f1c6);
    /* 0062f1c6: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f1c8: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x62f1cdu); f_006936b4();
    /* 0062f1cd: mov edi, eax */ r_edi = r_eax;
    /* 0062f1cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f1d1: jne 0x62f1d9 */ if (!fZ) goto L_0062f1d9;
L_0062f1d3:; BB(0x0062f1d3);
    /* 0062f1d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f1d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f1d6: ret 4 */ FN_RET(0x0062f1a0); r_esp += 8; return;
L_0062f1d9:; BB(0x0062f1d9);
    /* 0062f1d9: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x62f1deu); f_00816d30();
    /* 0062f1de: push 0x932cf0 */ { u32 v = 0x932cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1e3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x62f1e8u); f_00816cb8();
    /* 0062f1e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1e9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x62f1eeu); f_00816cb8();
    /* 0062f1ee: push 0x932cf8 */ { u32 v = 0x932cf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1f3: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x62f1f8u); f_00816cb8();
    /* 0062f1f8: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f1fd: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f202: call 0x718300 */ r_esp -= 4; W32(r_esp, 0x62f207u); f_00718300();
    /* 0062f207: mov eax, 1 */ r_eax = 0x1u;
    /* 0062f20c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f20f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f210: ret 4 */ FN_RET(0x0062f1a0); r_esp += 8; return;
}

void f_0062f214(void) /* sub_62F214 */
{
    FN_ENTER(0x0062f214);
    /* 0062f214: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f215: movzx eax, word ptr [ecx + 0x2dc] */ r_eax = (u32)R16((u32)(r_ecx+0x2dcu));
    /* 0062f21c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0062f21e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f21f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62f224u); f_0068d5a8();
    /* 0062f224: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f227: je 0x62f232 */ if (fZ) goto L_0062f232;
L_0062f229:; BB(0x0062f229);
    /* 0062f229: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f22b: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x62f230u); f_006936b4();
    /* 0062f230: mov esi, eax */ r_esi = r_eax;
L_0062f232:; BB(0x0062f232);
    /* 0062f232: mov eax, esi */ r_eax = r_esi;
    /* 0062f234: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f235: ret  */ FN_RET(0x0062f214); r_esp += 4; return;
}

void f_0062f238(void) /* sub_62F238 */
{
    FN_ENTER(0x0062f238);
    /* 0062f238: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f239: mov edi, ecx */ r_edi = r_ecx;
    /* 0062f23b: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0062f242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f244: jl 0x62f29a */ if ((fS!=fO)) goto L_0062f29a;
L_0062f246:; BB(0x0062f246);
    /* 0062f246: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f249: jg 0x62f280 */ if ((!fZ&&fS==fO)) goto L_0062f280;
L_0062f24b:; BB(0x0062f24b);
    /* 0062f24b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f24f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f251: je 0x62f285 */ if (fZ) goto L_0062f285;
L_0062f253:; BB(0x0062f253);
    /* 0062f253: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062f257: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0062f25a: cmp edx, dword ptr [0x9c605c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f260: jne 0x62f285 */ if (!fZ) goto L_0062f285;
L_0062f262:; BB(0x0062f262);
    /* 0062f262: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f264: call 0x630054 */ r_esp -= 4; W32(r_esp, 0x62f269u); f_00630054();
    /* 0062f269: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 0062f26f: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f272: jle 0x62f29a */ if ((fZ||fS!=fO)) goto L_0062f29a;
L_0062f274:; BB(0x0062f274);
    /* 0062f274: mov dword ptr [edi + 0x88], 0xf */ W32((u32)(r_edi+0x88u), 0xfu);
    /* 0062f27e: jmp 0x62f29a */ goto L_0062f29a;
L_0062f280:; BB(0x0062f280);
    /* 0062f280: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f283: jne 0x62f29a */ if (!fZ) goto L_0062f29a;
L_0062f285:; BB(0x0062f285);
    /* 0062f285: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f287: mov eax, 4 */ r_eax = 0x4u;
    /* 0062f28c: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0062f293: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f295: call 0x62f3b8 */ r_esp -= 4; W32(r_esp, 0x62f29au); f_0062f3b8();
L_0062f29a:; BB(0x0062f29a);
    /* 0062f29a: fld dword ptr [0x932b84] */ FPUSH(R_F32((u32)(0x932b84u)));
    /* 0062f2a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f2a1: ret 8 */ FN_RET(0x0062f238); r_esp += 12; return;
}

void f_0062f2a0(void)
{
    FN_ENTER(0x0062f2a0);
    /* 0062f2a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f2a1: ret 8 */ FN_RET(0x0062f2a0); r_esp += 12; return;
}

void f_0062f2a4(void) /* sub_62F2A4 */
{
    FN_ENTER(0x0062f2a4);
    /* 0062f2a4: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62f2a9u); f_00770738();
    /* 0062f2a9: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f2ad: je 0x62f2b7 */ if (fZ) goto L_0062f2b7;
L_0062f2af:; BB(0x0062f2af);
    /* 0062f2af: mov eax, 1 */ r_eax = 0x1u;
    /* 0062f2b4: ret 0x10 */ FN_RET(0x0062f2a4); r_esp += 20; return;
L_0062f2b7:; BB(0x0062f2b7);
    /* 0062f2b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f2b9: ret 0x10 */ FN_RET(0x0062f2a4); r_esp += 20; return;
}

void f_0062f2bc(void) /* sub_62F2BC */
{
    FN_ENTER(0x0062f2bc);
    /* 0062f2bc: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62f2c1u); f_00770738();
    /* 0062f2c1: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f2c5: je 0x62f2cf */ if (fZ) goto L_0062f2cf;
L_0062f2c7:; BB(0x0062f2c7);
    /* 0062f2c7: mov eax, 1 */ r_eax = 0x1u;
    /* 0062f2cc: ret 8 */ FN_RET(0x0062f2bc); r_esp += 12; return;
L_0062f2cf:; BB(0x0062f2cf);
    /* 0062f2cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f2d1: ret 8 */ FN_RET(0x0062f2bc); r_esp += 12; return;
}

void f_0062f2d4(void) /* sub_62F2D4 */
{
    FN_ENTER(0x0062f2d4);
    /* 0062f2d4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f2d7: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0062f2db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f2dd: jne 0x62f2e3 */ if (!fZ) goto L_0062f2e3;
L_0062f2df:; BB(0x0062f2df);
    /* 0062f2df: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f2e2: ret  */ FN_RET(0x0062f2d4); r_esp += 4; return;
L_0062f2e3:; BB(0x0062f2e3);
    /* 0062f2e3: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0062f2e9: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062f2ef: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f2f4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f2f6: jge 0x62f33a */ if ((fS==fO)) goto L_0062f33a;
L_0062f2f8:; BB(0x0062f2f8);
    /* 0062f2f8: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0062f2fc: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0062f300: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0062f303:; BB(0x0062f303);
    /* 0062f303: mov ebx, dword ptr [edx*4 + 0xaad720] */ r_ebx = R32((u32)(r_edx*4+0xaad720u));
    /* 0062f30a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f30c: je 0x62f328 */ if (fZ) goto L_0062f328;
L_0062f30e:; BB(0x0062f30e);
    /* 0062f30e: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0062f311: cmp esi, dword ptr [0x9c605c] */ {  u32 a = r_esi; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f317: jne 0x62f328 */ if (!fZ) goto L_0062f328;
L_0062f319:; BB(0x0062f319);
    /* 0062f319: movzx esi, word ptr [ebx + 0x386] */ r_esi = (u32)R16((u32)(r_ebx+0x386u));
    /* 0062f320: movzx edi, word ptr [ecx + 4] */ r_edi = (u32)R16((u32)(r_ecx+0x4u));
    /* 0062f324: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f326: je 0x62f33e */ if (fZ) goto L_0062f33e;
L_0062f328:; BB(0x0062f328);
    /* 0062f328: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062f32b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f32d: jl 0x62f303 */ if ((fS!=fO)) goto L_0062f303;
L_0062f32f:; BB(0x0062f32f);
    /* 0062f32f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0062f333: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0062f337: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0062f33a:; BB(0x0062f33a);
    /* 0062f33a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f33d: ret  */ FN_RET(0x0062f2d4); r_esp += 4; return;
L_0062f33e:; BB(0x0062f33e);
    /* 0062f33e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0062f342: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0062f345: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 0062f349: mov eax, ebx */ r_eax = r_ebx;
    /* 0062f34b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f34d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0062f351: je 0x62f381 */ if (fZ) goto L_0062f381;
L_0062f353:; BB(0x0062f353);
    /* 0062f353: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f356: jne 0x62f36a */ if (!fZ) goto L_0062f36a;
L_0062f358:; BB(0x0062f358);
    /* 0062f358: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0062f35f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f361: jl 0x62f39b */ if ((fS!=fO)) goto L_0062f39b;
L_0062f363:; BB(0x0062f363);
    /* 0062f363: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f366: jg 0x62f39b */ if ((!fZ&&fS==fO)) goto L_0062f39b;
L_0062f368:; BB(0x0062f368);
    /* 0062f368: jmp 0x62f39f */ goto L_0062f39f;
L_0062f36a:; BB(0x0062f36a);
    /* 0062f36a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f36d: jne 0x62f39b */ if (!fZ) goto L_0062f39b;
L_0062f36f:; BB(0x0062f36f);
    /* 0062f36f: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0062f376: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f378: jl 0x62f39b */ if ((fS!=fO)) goto L_0062f39b;
L_0062f37a:; BB(0x0062f37a);
    /* 0062f37a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f37d: jg 0x62f39b */ if ((!fZ&&fS==fO)) goto L_0062f39b;
L_0062f37f:; BB(0x0062f37f);
    /* 0062f37f: jmp 0x62f3a8 */ goto L_0062f3a8;
L_0062f381:; BB(0x0062f381);
    /* 0062f381: movsx edx, word ptr [eax + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0062f388: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f38a: jl 0x62f39b */ if ((fS!=fO)) goto L_0062f39b;
L_0062f38c:; BB(0x0062f38c);
    /* 0062f38c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f38f: jg 0x62f39b */ if ((!fZ&&fS==fO)) goto L_0062f39b;
L_0062f391:; BB(0x0062f391);
    /* 0062f391: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0062f393: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f395: call dword ptr [edx + 0x160] */ { u32 t = R32((u32)(r_edx+0x160u)); r_esp -= 4; W32(r_esp, 0x62f39bu); call_ind(t); }
L_0062f39b:; BB(0x0062f39b);
    /* 0062f39b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f39e: ret  */ FN_RET(0x0062f2d4); r_esp += 4; return;
L_0062f39f:; BB(0x0062f39f);
    /* 0062f39f: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f3a1: call 0x630054 */ r_esp -= 4; W32(r_esp, 0x62f3a6u); f_00630054();
    /* 0062f3a6: jmp 0x62f39b */ goto L_0062f39b;
L_0062f3a8:; BB(0x0062f3a8);
    /* 0062f3a8: mov edx, 4 */ r_edx = 0x4u;
    /* 0062f3ad: mov word ptr [eax + 0x32e], dx */ W16((u32)(r_eax+0x32eu), (u16)r_edx);
    /* 0062f3b4: jmp 0x62f39b */ goto L_0062f39b;
}

void f_0062f3b8(void) /* sub_62F3B8 */
{
    FN_ENTER(0x0062f3b8);
    /* 0062f3b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f3bb: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0062f3c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f3c2: jl 0x62f3c9 */ if ((fS!=fO)) goto L_0062f3c9;
L_0062f3c4:; BB(0x0062f3c4);
    /* 0062f3c4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f3c7: jl 0x62f3cf */ if ((fS!=fO)) goto L_0062f3cf;
L_0062f3c9:; BB(0x0062f3c9);
    /* 0062f3c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f3cc: ret 4 */ FN_RET(0x0062f3b8); r_esp += 8; return;
L_0062f3cf:; BB(0x0062f3cf);
    /* 0062f3cf: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0062f3d3: movzx ecx, word ptr [ecx + 0x386] */ r_ecx = (u32)R16((u32)(r_ecx+0x386u));
    /* 0062f3da: mov byte ptr [esp], 0x80 */ W8((u32)(r_esp), 0x80u);
    /* 0062f3de: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 0062f3e3: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0062f3e8: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 0062f3ed: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0062f3f2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0062f3f5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x62f3fau); f_008003e0();
    /* 0062f3fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f3fd: ret 4 */ FN_RET(0x0062f3b8); r_esp += 8; return;
}

void f_0062f400(void) /* sub_62F400 */
{
    FN_ENTER(0x0062f400);
    /* 0062f400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f401: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f402: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f403: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f404: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f405: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0062f407: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f409: call 0x62e404 */ r_esp -= 4; W32(r_esp, 0x62f40eu); f_0062e404();
    /* 0062f40e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0062f415: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f417: je 0x62f75a */ if (fZ) goto L_0062f75a;
L_0062f41d:; BB(0x0062f41d);
    /* 0062f41d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f420: je 0x62f75a */ if (fZ) goto L_0062f75a;
L_0062f426:; BB(0x0062f426);
    /* 0062f426: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f429: jne 0x62f45a */ if (!fZ) goto L_0062f45a;
L_0062f42b:; BB(0x0062f42b);
    /* 0062f42b: mov edx, dword ptr [ebp + 0x88] */ r_edx = R32((u32)(r_ebp+0x88u));
    /* 0062f431: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0062f434: mov dword ptr [ebp + 0x88], eax */ W32((u32)(r_ebp+0x88u), r_eax);
    /* 0062f43a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f43c: jl 0x62f7ab */ if ((fS!=fO)) goto L_0062f7ab;
L_0062f442:; BB(0x0062f442);
    /* 0062f442: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f444: call 0x62e3e0 */ r_esp -= 4; W32(r_esp, 0x62f449u); f_0062e3e0();
    /* 0062f449: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f44b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f44c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x62f451u); f_006946a8();
    /* 0062f451: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062f454: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f455: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f456: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f457: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f458: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f459: ret  */ FN_RET(0x0062f400); r_esp += 4; return;
L_0062f45a:; BB(0x0062f45a);
    /* 0062f45a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f45d: jne 0x62f7a5 */ if (!fZ) goto L_0062f7a5;
L_0062f463:; BB(0x0062f463);
    /* 0062f463: movzx eax, word ptr [ebp + 0x2dc] */ r_eax = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0062f46a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f46b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62f470u); f_0068d5a8();
    /* 0062f470: mov edx, eax */ r_edx = r_eax;
    /* 0062f472: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f475: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f477: jne 0x62f47b */ if (!fZ) goto L_0062f47b;
L_0062f479:; BB(0x0062f479);
    /* 0062f479: mov edx, ebp */ r_edx = r_ebp;
L_0062f47b:; BB(0x0062f47b);
    /* 0062f47b: mov ecx, dword ptr [0xaae16c] */ r_ecx = R32((u32)(0xaae16cu));
    /* 0062f481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062f483: mov ebx, eax */ r_ebx = r_eax;
    /* 0062f485: mov eax, ecx */ r_eax = r_ecx;
    /* 0062f487: mov esi, edx */ r_esi = r_edx;
L_0062f489:; BB(0x0062f489);
    /* 0062f489: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f48b: jge 0x62f729 */ if ((fS==fO)) goto L_0062f729;
L_0062f491:; BB(0x0062f491);
    /* 0062f491: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0062f498: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f49a: je 0x62f721 */ if (fZ) goto L_0062f721;
L_0062f4a0:; BB(0x0062f4a0);
    /* 0062f4a0: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f4a2: je 0x62f721 */ if (fZ) goto L_0062f721;
L_0062f4a8:; BB(0x0062f4a8);
    /* 0062f4a8: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0062f4ab: test edx, 0x4000800 */ {  u32 a = r_edx; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f4b1: jne 0x62f721 */ if (!fZ) goto L_0062f721;
L_0062f4b7:; BB(0x0062f4b7);
    /* 0062f4b7: movsx ecx, word ptr [ebp + 0x2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2eu));
    /* 0062f4bb: cmp cx, word ptr [edi + 0x2e] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edi+0x2eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062f4bf: je 0x62f4d3 */ if (fZ) goto L_0062f4d3;
L_0062f4c1:; BB(0x0062f4c1);
    /* 0062f4c1: movsx edx, word ptr [edi + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 0062f4c5: cmp dx, word ptr [ebp + 0x28] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebp+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0062f4c9: je 0x62f4d3 */ if (fZ) goto L_0062f4d3;
L_0062f4cb:; BB(0x0062f4cb);
    /* 0062f4cb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f4cd: jne 0x62f721 */ if (!fZ) goto L_0062f721;
L_0062f4d3:; BB(0x0062f4d3);
    /* 0062f4d3: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0062f4d7: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f4dd: je 0x62f721 */ if (fZ) goto L_0062f721;
L_0062f4e3:; BB(0x0062f4e3);
    /* 0062f4e3: movzx ecx, word ptr [ebp + 0x2dc] */ r_ecx = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0062f4ea: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f4ec: je 0x62f7c5 */ if (fZ) goto L_0062f7c5;
L_0062f4f2:; BB(0x0062f4f2);
    /* 0062f4f2: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f4f8: jl 0x62f632 */ if ((fS!=fO)) goto L_0062f632;
L_0062f4fe:; BB(0x0062f4fe);
    /* 0062f4fe: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f504: jge 0x62f5c5 */ if ((fS==fO)) goto L_0062f5c5;
L_0062f50a:; BB(0x0062f50a);
    /* 0062f50a: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0062f50d: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0062f510: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f511: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f512: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62f517u); f_007a9180();
    /* 0062f517: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f51a: fld dword ptr [ebp + 0x358] */ FPUSH(R_F32((u32)(r_ebp+0x358u)));
    /* 0062f520: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062f522: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062f524: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062f526: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062f527: ja 0x62f533 */ if ((!fC&&!fZ)) goto L_0062f533;
L_0062f529:; BB(0x0062f529);
    /* 0062f529: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f52e: jmp 0x62f721 */ goto L_0062f721;
L_0062f533:; BB(0x0062f533);
    /* 0062f533: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f534: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f536: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62f53bu); f_007706b0();
    /* 0062f53b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f53d: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62f542u); f_00770738();
    /* 0062f542: mov edi, eax */ r_edi = r_eax;
    /* 0062f544: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f546: je 0x62f5bb */ if (fZ) goto L_0062f5bb;
L_0062f548:; BB(0x0062f548);
    /* 0062f548: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f549: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062f54b: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f54d: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x62f550u); call_ind(t); }
    /* 0062f550: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f552: je 0x62f5b1 */ if (fZ) goto L_0062f5b1;
L_0062f554:; BB(0x0062f554);
    /* 0062f554: mov eax, dword ptr [ebp + 0x35c] */ r_eax = R32((u32)(r_ebp+0x35cu));
    /* 0062f55a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f55d: jne 0x62f579 */ if (!fZ) goto L_0062f579;
L_0062f55f:; BB(0x0062f55f);
    /* 0062f55f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f561: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062f563: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f565: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x62f56bu); call_ind(t); }
    /* 0062f56b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f56d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0062f56f: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f571: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x62f577u); call_ind(t); }
    /* 0062f577: jmp 0x62f598 */ goto L_0062f598;
L_0062f579:; BB(0x0062f579);
    /* 0062f579: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0062f57b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0062f580: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f581: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f584: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f586: push dword ptr [ebp + 0x360] */ { u32 v = R32((u32)(r_ebp+0x360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062f58c: push dword ptr [ebp + 0x35c] */ { u32 v = R32((u32)(r_ebp+0x35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062f592: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f593: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x62f596u); call_ind(t); }
    /* 0062f596: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0062f598:; BB(0x0062f598);
    /* 0062f598: movzx eax, word ptr [ebp + 0x2dc] */ r_eax = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0062f59f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f5a0: mov ecx, edi */ r_ecx = r_edi;
    /* 0062f5a2: call 0x77327c */ r_esp -= 4; W32(r_esp, 0x62f5a7u); f_0077327c();
    /* 0062f5a7: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f5ac: jmp 0x62f721 */ goto L_0062f721;
L_0062f5b1:; BB(0x0062f5b1);
    /* 0062f5b1: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f5b6: jmp 0x62f721 */ goto L_0062f721;
L_0062f5bb:; BB(0x0062f5bb);
    /* 0062f5bb: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f5c0: jmp 0x62f721 */ goto L_0062f721;
L_0062f5c5:; BB(0x0062f5c5);
    /* 0062f5c5: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0062f5c8: cmp edx, dword ptr [0x9c605c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f5ce: jne 0x62f5d7 */ if (!fZ) goto L_0062f5d7;
L_0062f5d0:; BB(0x0062f5d0);
    /* 0062f5d0: mov edx, 1 */ r_edx = 0x1u;
    /* 0062f5d5: jmp 0x62f5d9 */ goto L_0062f5d9;
L_0062f5d7:; BB(0x0062f5d7);
    /* 0062f5d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0062f5d9:; BB(0x0062f5d9);
    /* 0062f5d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f5db: je 0x62f721 */ if (fZ) goto L_0062f721;
L_0062f5e1:; BB(0x0062f5e1);
    /* 0062f5e1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0062f5e4: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0062f5e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f5e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f5e9: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62f5eeu); f_007a9180();
    /* 0062f5ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f5f1: fld dword ptr [ebp + 0x358] */ FPUSH(R_F32((u32)(r_ebp+0x358u)));
    /* 0062f5f7: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062f5f9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062f5fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062f5fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062f5fe: ja 0x62f60a */ if ((!fC&&!fZ)) goto L_0062f60a;
L_0062f600:; BB(0x0062f600);
    /* 0062f600: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f605: jmp 0x62f721 */ goto L_0062f721;
L_0062f60a:; BB(0x0062f60a);
    /* 0062f60a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f60b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f60d: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62f612u); f_007706b0();
    /* 0062f612: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f614: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62f619u); f_00770738();
    /* 0062f619: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f61e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f61f: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0062f621: mov ecx, eax */ r_ecx = r_eax;
    /* 0062f623: call dword ptr [edi + 0x5c] */ { u32 t = R32((u32)(r_edi+0x5cu)); r_esp -= 4; W32(r_esp, 0x62f626u); call_ind(t); }
    /* 0062f626: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062f628: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f62d: jmp 0x62f721 */ goto L_0062f721;
L_0062f632:; BB(0x0062f632);
    /* 0062f632: mov edx, dword ptr [0xa942c0] */ r_edx = R32((u32)(0xa942c0u));
    /* 0062f638: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f63b: je 0x62f64b */ if (fZ) goto L_0062f64b;
L_0062f63d:; BB(0x0062f63d);
    /* 0062f63d: mov edx, dword ptr [edi + 0x8fc] */ r_edx = R32((u32)(r_edi+0x8fcu));
    /* 0062f643: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f645: je 0x62f721 */ if (fZ) goto L_0062f721;
L_0062f64b:; BB(0x0062f64b);
    /* 0062f64b: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0062f651: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f657: jne 0x62f721 */ if (!fZ) goto L_0062f721;
L_0062f65d:; BB(0x0062f65d);
    /* 0062f65d: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0062f660: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0062f663: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f664: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f665: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62f66au); f_007a9180();
    /* 0062f66a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f66d: fld dword ptr [ebp + 0x358] */ FPUSH(R_F32((u32)(r_ebp+0x358u)));
    /* 0062f673: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062f675: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062f677: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062f679: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062f67a: ja 0x62f686 */ if ((!fC&&!fZ)) goto L_0062f686;
L_0062f67c:; BB(0x0062f67c);
    /* 0062f67c: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f681: jmp 0x62f721 */ goto L_0062f721;
L_0062f686:; BB(0x0062f686);
    /* 0062f686: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0062f68d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f690: jne 0x62f699 */ if (!fZ) goto L_0062f699;
L_0062f692:; BB(0x0062f692);
    /* 0062f692: mov eax, 1 */ r_eax = 0x1u;
    /* 0062f697: jmp 0x62f69b */ goto L_0062f69b;
L_0062f699:; BB(0x0062f699);
    /* 0062f699: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0062f69b:; BB(0x0062f69b);
    /* 0062f69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f69d: jne 0x62f6fc */ if (!fZ) goto L_0062f6fc;
L_0062f69f:; BB(0x0062f69f);
    /* 0062f69f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f6a2: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62f6a7u); f_007706b0();
    /* 0062f6a7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f6a9: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x62f6aeu); f_00770738();
    /* 0062f6ae: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0062f6b1: mov eax, dword ptr [ebp + 0x35c] */ r_eax = R32((u32)(r_ebp+0x35cu));
    /* 0062f6b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f6ba: jne 0x62f6cb */ if (!fZ) goto L_0062f6cb;
L_0062f6bc:; BB(0x0062f6bc);
    /* 0062f6bc: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0062f6bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6c1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0062f6c3: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x62f6c9u); call_ind(t); }
    /* 0062f6c9: jmp 0x62f6eb */ goto L_0062f6eb;
L_0062f6cb:; BB(0x0062f6cb);
    /* 0062f6cb: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0062f6ce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0062f6d0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0062f6d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6d9: push dword ptr [ebp + 0x360] */ { u32 v = R32((u32)(r_ebp+0x360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062f6df: push dword ptr [ebp + 0x35c] */ { u32 v = R32((u32)(r_ebp+0x35cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062f6e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6e6: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x62f6e9u); call_ind(t); }
    /* 0062f6e9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0062f6eb:; BB(0x0062f6eb);
    /* 0062f6eb: movzx eax, word ptr [ebp + 0x2dc] */ r_eax = (u32)R16((u32)(r_ebp+0x2dcu));
    /* 0062f6f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f6f3: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0062f6f7: call 0x77327c */ r_esp -= 4; W32(r_esp, 0x62f6fcu); f_0077327c();
L_0062f6fc:; BB(0x0062f6fc);
    /* 0062f6fc: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 0062f702: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f705: jne 0x62f70e */ if (!fZ) goto L_0062f70e;
L_0062f707:; BB(0x0062f707);
    /* 0062f707: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0062f70c: jmp 0x62f721 */ goto L_0062f721;
L_0062f70e:; BB(0x0062f70e);
    /* 0062f70e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f70f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f711: call 0x62f1a0 */ r_esp -= 4; W32(r_esp, 0x62f716u); f_0062f1a0();
    /* 0062f716: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0062f71c: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
L_0062f721:; BB(0x0062f721);
    /* 0062f721: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062f724: jmp 0x62f489 */ goto L_0062f489;
L_0062f729:; BB(0x0062f729);
    /* 0062f729: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f72b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f72d: mov eax, 5 */ r_eax = 0x5u;
    /* 0062f732: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0062f739: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f73b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x62f740u); f_007b52ec();
    /* 0062f740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f742: call 0x62e9e0 */ r_esp -= 4; W32(r_esp, 0x62f747u); f_0062e9e0();
    /* 0062f747: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0062f74b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f750: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0062f754: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f755: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f756: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f757: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f758: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f759: ret  */ FN_RET(0x0062f400); r_esp += 4; return;
L_0062f75a:; BB(0x0062f75a);
    /* 0062f75a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f75c: call 0x62fdf8 */ r_esp -= 4; W32(r_esp, 0x62f761u); f_0062fdf8();
    /* 0062f761: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f764: je 0x62f7d9 */ if (fZ) goto L_0062f7d9;
L_0062f766:; BB(0x0062f766);
    /* 0062f766: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 0062f76c: mov eax, dword ptr [ebp + 0x340] */ r_eax = R32((u32)(r_ebp+0x340u));
    /* 0062f772: mov dword ptr [ebp + 0x300], edx */ W32((u32)(r_ebp+0x300u), r_edx);
    /* 0062f778: mov dword ptr [ebp + 0x304], eax */ W32((u32)(r_ebp+0x304u), r_eax);
    /* 0062f77e: mov eax, dword ptr [ebp + 0x344] */ r_eax = R32((u32)(r_ebp+0x344u));
    /* 0062f784: mov dword ptr [ebp + 0x308], eax */ W32((u32)(r_ebp+0x308u), r_eax);
    /* 0062f78a: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0062f790: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0062f793: mov edx, dword ptr [ebp + 0x340] */ r_edx = R32((u32)(r_ebp+0x340u));
    /* 0062f799: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0062f79c: mov ecx, dword ptr [ebp + 0x344] */ r_ecx = R32((u32)(r_ebp+0x344u));
    /* 0062f7a2: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
L_0062f7a5:; BB(0x0062f7a5);
    /* 0062f7a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f7a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062f7a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f7a8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062f7a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0062f7aa: ret  */ FN_RET(0x0062f400); r_esp += 4; return;
L_0062f7ab:; BB(0x0062f7ab);
    /* 0062f7ab: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7ad: mov eax, 4 */ r_eax = 0x4u;
    /* 0062f7b2: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0062f7b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f7bb: call 0x62f3b8 */ r_esp -= 4; W32(r_esp, 0x62f7c0u); f_0062f3b8();
    /* 0062f7c0: jmp 0x62f442 */ goto L_0062f442;
L_0062f7c5:; BB(0x0062f7c5);
    /* 0062f7c5: mov ecx, dword ptr [0xa8ef94] */ r_ecx = R32((u32)(0xa8ef94u));
    /* 0062f7cb: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f7ce: je 0x62f4f2 */ if (fZ) goto L_0062f4f2;
L_0062f7d4:; BB(0x0062f7d4);
    /* 0062f7d4: jmp 0x62f721 */ goto L_0062f721;
L_0062f7d9:; BB(0x0062f7d9);
    /* 0062f7d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0062f7db: call 0x630054 */ r_esp -= 4; W32(r_esp, 0x62f7e0u); f_00630054();
    /* 0062f7e0: jmp 0x62f766 */ goto L_0062f766;
}

void f_0062f7e4(void) /* sub_62F7E4 */
{
    FN_ENTER(0x0062f7e4);
    /* 0062f7e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0062f7e5: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062f7eb: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f7f1: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 0062f7f7: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f7f9: jge 0x62f82c */ if ((fS==fO)) goto L_0062f82c;
L_0062f7fb:; BB(0x0062f7fb);
    /* 0062f7fb: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0062f7fe:; BB(0x0062f7fe);
    /* 0062f7fe: mov eax, dword ptr [ecx*4 + 0xaad720] */ r_eax = R32((u32)(r_ecx*4+0xaad720u));
    /* 0062f805: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f807: je 0x62f822 */ if (fZ) goto L_0062f822;
L_0062f809:; BB(0x0062f809);
    /* 0062f809: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 0062f80c: cmp ebx, dword ptr [0x9c605c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0x9c605cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f812: jne 0x62f822 */ if (!fZ) goto L_0062f822;
L_0062f814:; BB(0x0062f814);
    /* 0062f814: movzx ebx, word ptr [eax + 8] */ r_ebx = (u32)R16((u32)(r_eax+0x8u));
    /* 0062f818: or ebx, 0xffff0001 */ {  u32 a = r_ebx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0062f81e: mov word ptr [eax + 8], bx */ W16((u32)(r_eax+0x8u), (u16)r_ebx);
L_0062f822:; BB(0x0062f822);
    /* 0062f822: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062f825: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062f827: jl 0x62f7fe */ if ((fS!=fO)) goto L_0062f7fe;
L_0062f829:; BB(0x0062f829);
    /* 0062f829: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0062f82c:; BB(0x0062f82c);
    /* 0062f82c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f82d: ret  */ FN_RET(0x0062f7e4); r_esp += 4; return;
}

void f_0062f830(void) /* sub_62F830 */
{
    FN_ENTER(0x0062f830);
    /* 0062f830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f831: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f833: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f835: push 0x8e3668 */ { u32 v = 0x8e3668u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f83a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062f840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f841: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062f848: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f84b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062f84e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0062f851: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062f854: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062f857: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0062f85c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f85f: je 0x62f871 */ if (fZ) goto L_0062f871;
L_0062f861:; BB(0x0062f861);
    /* 0062f861: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f863: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f866: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062f86d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f86f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f870: ret  */ FN_RET(0x0062f830); r_esp += 4; return;
L_0062f871:; BB(0x0062f871);
    /* 0062f871: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f876: je 0x62f861 */ if (fZ) goto L_0062f861;
L_0062f878:; BB(0x0062f878);
    /* 0062f878: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f87b: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0062f87f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f884: je 0x62f861 */ if (fZ) goto L_0062f861;
L_0062f886:; BB(0x0062f886);
    /* 0062f886: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f88b: jge 0x62f861 */ if ((fS==fO)) goto L_0062f861;
L_0062f88d:; BB(0x0062f88d);
    /* 0062f88d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f88e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62f893u); f_0068d5a8();
    /* 0062f893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f894: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f896: je 0x62f861 */ if (fZ) goto L_0062f861;
L_0062f898:; BB(0x0062f898);
    /* 0062f898: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 0062f89e: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f8a4: jne 0x62f861 */ if (!fZ) goto L_0062f861;
L_0062f8a6:; BB(0x0062f8a6);
    /* 0062f8a6: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0062f8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f8ac: jl 0x62f861 */ if ((fS!=fO)) goto L_0062f861;
L_0062f8ae:; BB(0x0062f8ae);
    /* 0062f8ae: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0062f8b2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f8b5: jge 0x62f861 */ if ((fS==fO)) goto L_0062f861;
L_0062f8b7:; BB(0x0062f8b7);
    /* 0062f8b7: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0062f8bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0062f8bd: jl 0x62f861 */ if ((fS!=fO)) goto L_0062f861;
L_0062f8bf:; BB(0x0062f8bf);
    /* 0062f8bf: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0062f8c3: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062f8c6: jg 0x62f861 */ if ((!fZ&&fS==fO)) goto L_0062f861;
L_0062f8c8:; BB(0x0062f8c8);
    /* 0062f8c8: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x62f8cdu); f_00807db8();
    /* 0062f8cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f8d0: je 0x62f8db */ if (fZ) goto L_0062f8db;
L_0062f8d2:; BB(0x0062f8d2);
    /* 0062f8d2: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x62f8d7u); f_00807d60();
    /* 0062f8d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f8d9: jne 0x62f8eb */ if (!fZ) goto L_0062f8eb;
L_0062f8db:; BB(0x0062f8db);
    /* 0062f8db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f8dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f8e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062f8e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f8e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f8ea: ret  */ FN_RET(0x0062f830); r_esp += 4; return;
L_0062f8eb:; BB(0x0062f8eb);
    /* 0062f8eb: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0062f8f2: push 0x38c */ { u32 v = 0x38cu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f8f7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x62f8fcu); f_005caba4();
    /* 0062f8fc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062f8ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062f902: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0062f905: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062f907: je 0x62f948 */ if (fZ) goto L_0062f948;
L_0062f909:; BB(0x0062f909);
    /* 0062f909: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0062f910: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062f917: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 0062f91b: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0062f91f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0062f922: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f926: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f927: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062f928: call 0x62f9b8 */ r_esp -= 4; W32(r_esp, 0x62f92du); f_0062f9b8();
    /* 0062f92d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0062f934:; BB(0x0062f934);
    /* 0062f934: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062f937: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062f93a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f93d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062f944: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f946: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f947: ret  */ FN_RET(0x0062f830); r_esp += 4; return;
L_0062f948:; BB(0x0062f948);
    /* 0062f948: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062f94a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062f94d: jmp 0x62f934 */ goto L_0062f934;
}

void f_0062f950(void) /* sub_62F950 */
{
    FN_ENTER(0x0062f950);
    /* 0062f950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f951: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f955: push 0x8e3684 */ { u32 v = 0x8e3684u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062f960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f961: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062f968: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f96b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062f96e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0062f971: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0062f974: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0062f977: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0062f97a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062f981: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062f984: mov dword ptr [eax], 0xb2a5c0 */ W32((u32)(r_eax), 0xb2a5c0u);
    /* 0062f98a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f98b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x62f990u); f_007b4e84();
    /* 0062f990: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062f991: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062f994: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x62f999u); f_007b9c8c();
    /* 0062f999: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062f9a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062f9a3: call 0x62ee7c */ r_esp -= 4; W32(r_esp, 0x62f9a8u); f_0062ee7c();
    /* 0062f9a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062f9ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062f9b2: mov esp, ebp */ r_esp = r_ebp;
    /* 0062f9b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062f9b5: ret  */ FN_RET(0x0062f950); r_esp += 4; return;
}

void f_0062f9b8(void) /* sub_62F9B8 */
{
    FN_ENTER(0x0062f9b8);
    /* 0062f9b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0062f9bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9bd: push 0x8e36a0 */ { u32 v = 0x8e36a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0062f9c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062f9c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0062f9d0: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062f9d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0062f9d6: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0062f9d9: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0062f9dc: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0062f9df: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0062f9e2: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062f9e8: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0062f9ec: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0062f9ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062f9f2: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 0062f9f6: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0062f9f9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0062f9fc: call 0x62ed74 */ r_esp -= 4; W32(r_esp, 0x62fa01u); f_0062ed74();
    /* 0062fa01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062fa08: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fa0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062fa0e: mov dword ptr [ecx], 0xb2a5c0 */ W32((u32)(r_ecx), 0xb2a5c0u);
    /* 0062fa14: mov eax, dword ptr [0x9c605c] */ r_eax = R32((u32)(0x9c605cu));
    /* 0062fa19: mov dword ptr [ecx + 0x388], 0 */ W32((u32)(r_ecx+0x388u), 0x0u);
    /* 0062fa23: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062fa26: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa28: je 0x62fa39 */ if (fZ) goto L_0062fa39;
L_0062fa2a:; BB(0x0062fa2a);
    /* 0062fa2a: mov eax, edx */ r_eax = r_edx;
    /* 0062fa2c: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0062fa30: mov word ptr [ecx + 0x2dc], dx */ W16((u32)(r_ecx+0x2dcu), (u16)r_edx);
    /* 0062fa37: jmp 0x62fa4a */ goto L_0062fa4a;
L_0062fa39:; BB(0x0062fa39);
    /* 0062fa39: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0062fa3e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062fa43: mov word ptr [ecx + 0x2dc], ax */ W16((u32)(r_ecx+0x2dcu), (u16)r_eax);
L_0062fa4a:; BB(0x0062fa4a);
    /* 0062fa4a: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa50: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0062fa55: je 0x62fa6a */ if (fZ) goto L_0062fa6a;
L_0062fa57:; BB(0x0062fa57);
    /* 0062fa57: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fa5d: jge 0x62fa6a */ if ((fS==fO)) goto L_0062fa6a;
L_0062fa5f:; BB(0x0062fa5f);
    /* 0062fa5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fa60: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x62fa65u); f_0068d5a8();
    /* 0062fa65: mov ebx, eax */ r_ebx = r_eax;
    /* 0062fa67: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0062fa6a:; BB(0x0062fa6a);
    /* 0062fa6a: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x62fa6fu); f_00807ac0();
    /* 0062fa6f: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 0062fa75: mov edx, dword ptr [0x9f9860] */ r_edx = R32((u32)(0x9f9860u));
    /* 0062fa7b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fa7e: je 0x62faab */ if (fZ) goto L_0062faab;
L_0062fa80:; BB(0x0062fa80);
    /* 0062fa80: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fa83: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0062fa87: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062fa8c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_0062fa90:; BB(0x0062fa90);
    /* 0062fa90: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062fa93: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062fa96: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062fa99: mov eax, edx */ r_eax = r_edx;
    /* 0062fa9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062fa9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062faa5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062faa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062faa8: ret 0xc */ FN_RET(0x0062f9b8); r_esp += 16; return;
L_0062faab:; BB(0x0062faab);
    /* 0062faab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062faae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fab0: je 0x62fa80 */ if (fZ) goto L_0062fa80;
L_0062fab2:; BB(0x0062fab2);
    /* 0062fab2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fab4: je 0x62fa80 */ if (fZ) goto L_0062fa80;
L_0062fab6:; BB(0x0062fab6);
    /* 0062fab6: cmp esi, dword ptr [ebx + 0x3f0] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fabc: jne 0x62fa80 */ if (!fZ) goto L_0062fa80;
L_0062fabe:; BB(0x0062fabe);
    /* 0062fabe: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x62fac3u); f_00807d60();
    /* 0062fac3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fac6: jne 0x62fa80 */ if (!fZ) goto L_0062fa80;
L_0062fac8:; BB(0x0062fac8);
    /* 0062fac8: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x62facdu); f_00807db8();
    /* 0062facd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062facf: jne 0x62fa80 */ if (!fZ) goto L_0062fa80;
L_0062fad1:; BB(0x0062fad1);
    /* 0062fad1: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062fad4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fad6: je 0x62fb28 */ if (fZ) goto L_0062fb28;
L_0062fad8:; BB(0x0062fad8);
    /* 0062fad8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fadb: je 0x62fbb2 */ if (fZ) goto L_0062fbb2;
L_0062fae1:; BB(0x0062fae1);
    /* 0062fae1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fae4: jne 0x62fb02 */ if (!fZ) goto L_0062fb02;
L_0062fae6:; BB(0x0062fae6);
    /* 0062fae6: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fae9: mov dword ptr [ecx + 0x35c], 0x11 */ W32((u32)(r_ecx+0x35cu), 0x11u);
    /* 0062faf3: mov dword ptr [ecx + 0x360], 0 */ W32((u32)(r_ecx+0x360u), 0x0u);
    /* 0062fafd: jmp 0x62fbc9 */ goto L_0062fbc9;
L_0062fb02:; BB(0x0062fb02);
    /* 0062fb02: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fb05: jne 0x62fb23 */ if (!fZ) goto L_0062fb23;
L_0062fb07:; BB(0x0062fb07);
    /* 0062fb07: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fb0a: mov dword ptr [ecx + 0x35c], 0x12 */ W32((u32)(r_ecx+0x35cu), 0x12u);
    /* 0062fb14: mov dword ptr [ecx + 0x360], 0 */ W32((u32)(r_ecx+0x360u), 0x0u);
    /* 0062fb1e: jmp 0x62fbc9 */ goto L_0062fbc9;
L_0062fb23:; BB(0x0062fb23);
    /* 0062fb23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0062fb25: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0062fb28:; BB(0x0062fb28);
    /* 0062fb28: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fb2b: mov dword ptr [edx + 0x35c], 1 */ W32((u32)(r_edx+0x35cu), 0x1u);
    /* 0062fb35: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0062fb3a: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x62fb3fu); f_006a8eb0();
    /* 0062fb3f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062fb42: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fb45: jne 0x62fb55 */ if (!fZ) goto L_0062fb55;
L_0062fb47:; BB(0x0062fb47);
    /* 0062fb47: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fb4a: fld dword ptr [0xa8ef90] */ FPUSH(R_F32((u32)(0xa8ef90u)));
    /* 0062fb50: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0062fb53: jmp 0x62fb94 */ goto L_0062fb94;
L_0062fb55:; BB(0x0062fb55);
    /* 0062fb55: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x62fb5au); f_00807ac0();
    /* 0062fb5a: fld dword ptr [eax*4 + 0xa8eec0] */ FPUSH(R_F32((u32)(r_eax*4+0xa8eec0u)));
    /* 0062fb61: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0062fb63: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 0062fb66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062fb68: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x62fb6bu); call_ind(t); }
    /* 0062fb6b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fb6e: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0062fb71: fmul dword ptr [0x932ba0] */ ST(0) = ST(0) * R_F32((u32)(0x932ba0u));
    /* 0062fb77: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0062fb7a: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0062fb7d: fmul dword ptr [0x932b68] */ ST(0) = ST(0) * R_F32((u32)(0x932b68u));
    /* 0062fb83: fadd dword ptr [0x932b6c] */ ST(0) = ST(0) + R_F32((u32)(0x932b6cu));
    /* 0062fb89: fmul dword ptr [0x932b70] */ ST(0) = ST(0) * R_F32((u32)(0x932b70u));
    /* 0062fb8f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0062fb91: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0062fb94:; BB(0x0062fb94);
    /* 0062fb94: fld dword ptr [0x932b74] */ FPUSH(R_F32((u32)(0x932b74u)));
    /* 0062fb9a: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0062fb9d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0062fb9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062fba1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062fba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0062fba4: ja 0x62fba8 */ if ((!fC&&!fZ)) goto L_0062fba8;
L_0062fba6:; BB(0x0062fba6);
    /* 0062fba6: fst st(1) */ ST(1) = ST(0);
L_0062fba8:; BB(0x0062fba8);
    /* 0062fba8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0062fbaa: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 0062fbb0: jmp 0x62fbc9 */ goto L_0062fbc9;
L_0062fbb2:; BB(0x0062fbb2);
    /* 0062fbb2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fbb5: mov dword ptr [ecx + 0x35c], 2 */ W32((u32)(r_ecx+0x35cu), 0x2u);
    /* 0062fbbf: mov dword ptr [ecx + 0x360], 0 */ W32((u32)(r_ecx+0x360u), 0x0u);
L_0062fbc9:; BB(0x0062fbc9);
    /* 0062fbc9: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062fbcc: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062fbcf: movzx eax, word ptr [ecx + 0x2dc] */ r_eax = (u32)R16((u32)(r_ecx+0x2dcu));
    /* 0062fbd6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0062fbd9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062fbdb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062fbdd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0062fbe0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062fbe2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0062fbe4: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062fbe6: lea esi, [ebx + ebx*4] */ r_esi = (u32)(r_ebx+r_ebx*4);
    /* 0062fbe9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062fbeb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0062fbed: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062fbef: mov word ptr [ecx + 0x386], di */ W16((u32)(r_ecx+0x386u), (u16)r_edi);
    /* 0062fbf6: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0062fbf9: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 0062fbfc: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 0062fbff: mov dword ptr [ecx + 0x3c], ebx */ W32((u32)(r_ecx+0x3cu), r_ebx);
    /* 0062fc02: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0062fc05: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0062fc08: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 0062fc0b: mov dword ptr [ecx + 0x54], ebx */ W32((u32)(r_ecx+0x54u), r_ebx);
    /* 0062fc0e: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 0062fc11: mov dword ptr [ecx + 0x33c], edx */ W32((u32)(r_ecx+0x33cu), r_edx);
    /* 0062fc17: mov dword ptr [ecx + 0x340], ebx */ W32((u32)(r_ecx+0x340u), r_ebx);
    /* 0062fc1d: mov dword ptr [ecx + 0x344], eax */ W32((u32)(r_ecx+0x344u), r_eax);
    /* 0062fc23: mov dword ptr [ecx + 0x2a4], edx */ W32((u32)(r_ecx+0x2a4u), r_edx);
    /* 0062fc29: mov dword ptr [ecx + 0x2a8], ebx */ W32((u32)(r_ecx+0x2a8u), r_ebx);
    /* 0062fc2f: mov dword ptr [ecx + 0x2ac], eax */ W32((u32)(r_ecx+0x2acu), r_eax);
    /* 0062fc35: mov dword ptr [ecx + 0x298], edx */ W32((u32)(r_ecx+0x298u), r_edx);
    /* 0062fc3b: mov dword ptr [ecx + 0x29c], ebx */ W32((u32)(r_ecx+0x29cu), r_ebx);
    /* 0062fc41: mov dword ptr [ecx + 0x2a0], eax */ W32((u32)(r_ecx+0x2a0u), r_eax);
    /* 0062fc47: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 0062fc4a: mov dword ptr [ecx + 0x48], ebx */ W32((u32)(r_ecx+0x48u), r_ebx);
    /* 0062fc4d: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 0062fc50: call 0x77a1f4 */ r_esp -= 4; W32(r_esp, 0x62fc55u); f_0077a1f4();
    /* 0062fc55: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fc58: call 0x62f0d8 */ r_esp -= 4; W32(r_esp, 0x62fc5du); f_0062f0d8();
    /* 0062fc5d: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fc60: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062fc63: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0062fc66: mov dword ptr [eax + 0x378], edx */ W32((u32)(r_eax+0x378u), r_edx);
    /* 0062fc6c: movzx ecx, word ptr [ebx + 0x2e] */ r_ecx = (u32)R16((u32)(r_ebx+0x2eu));
    /* 0062fc70: mov edx, dword ptr [eax + 0x35c] */ r_edx = R32((u32)(r_eax+0x35cu));
    /* 0062fc76: mov word ptr [eax + 0x2e], cx */ W16((u32)(r_eax+0x2eu), (u16)r_ecx);
    /* 0062fc7a: movzx esi, word ptr [ebx + 0x28] */ r_esi = (u32)R16((u32)(r_ebx+0x28u));
    /* 0062fc7e: mov word ptr [eax + 0x28], si */ W16((u32)(r_eax+0x28u), (u16)r_esi);
    /* 0062fc82: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0062fc85: ja 0x62fce4 */ if ((!fC&&!fZ)) goto L_0062fce4;
L_0062fc87:; BB(0x0062fc87);
    /* 0062fc87: mov edx, dword ptr [edx*4 + 0x932a40] */ r_edx = R32((u32)(r_edx*4+0x932a40u));
    /* 0062fc8e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0062fce4:; BB(0x0062fce4);
    /* 0062fce4: mov dword ptr [eax + 0x35c], 1 */ W32((u32)(r_eax+0x35cu), 0x1u);
    /* 0062fcee: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fcf4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcf6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fcfbu); f_005b8610();
    /* 0062fcfb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fcfe: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd04: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd06: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062fd09: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fd0eu); f_005b8624();
    /* 0062fd0e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd11: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd19: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062fd1c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fd21u); f_005b8610();
    /* 0062fd21: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd24: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd2c: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 0062fd32: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fd37u); f_005b8624();
    /* 0062fd37: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd3a: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0062fd40: mov dword ptr [ecx + 0x354], 0x42480000 */ W32((u32)(r_ecx+0x354u), 0x42480000u);
    /* 0062fd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fd4c: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062fd53: mov dword ptr [ecx + 0x358], 0x42480000 */ W32((u32)(r_ecx+0x358u), 0x42480000u);
    /* 0062fd5d: mov dword ptr [ecx + 0x84], 0x96 */ W32((u32)(r_ecx+0x84u), 0x96u);
    /* 0062fd67: mov dword ptr [ecx + 0x88], 0x1e */ W32((u32)(r_ecx+0x88u), 0x1eu);
    /* 0062fd71: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0062fd77: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd7a: je 0x62fdba */ if (fZ) goto L_0062fdba;
L_0062fd7c:; BB(0x0062fd7c);
    /* 0062fd7c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0062fd7f: mov dword ptr [ecx + 0x34c], 0 */ W32((u32)(r_ecx+0x34cu), 0x0u);
    /* 0062fd89: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062fd8e: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062fd94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd96: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 0062fd9d: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fda2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0062fda5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62fdaau); f_007b9a88();
    /* 0062fdaa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdad: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62fdb2u); f_007b4f54();
    /* 0062fdb2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdb5: jmp 0x62fa90 */ goto L_0062fa90;
L_0062fdba:; BB(0x0062fdba);
    /* 0062fdba: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0062fdbf: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x62fdc4u); f_006a8eb0();
    /* 0062fdc4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdc7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062fdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fdcc: jne 0x62fd7c */ if (!fZ) goto L_0062fd7c;
L_0062fdce:; BB(0x0062fdce);
    /* 0062fdce: mov dword ptr [ecx + 0x84], 0x3c */ W32((u32)(r_ecx+0x84u), 0x3cu);
    /* 0062fdd8: mov dword ptr [ecx + 0x358], 0x42a00000 */ W32((u32)(r_ecx+0x358u), 0x42a00000u);
    /* 0062fde2: mov dword ptr [0xa8ef94], 0 */ W32((u32)(0xa8ef94u), 0x0u);
    /* 0062fdec: mov dword ptr [0x9c6094], 1 */ W32((u32)(0x9c6094u), 0x1u);
    /* 0062fdf6: jmp 0x62fd7c */ goto L_0062fd7c;
}

void f_0062fc90(void)
{
    FN_ENTER(0x0062fc90);
    goto L_0062fc90;
L_0062fa90:; BB(0x0062fa90);
    /* 0062fa90: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062fa93: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062fa96: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062fa99: mov eax, edx */ r_eax = r_edx;
    /* 0062fa9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062fa9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062faa5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062faa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062faa8: ret 0xc */ FN_RET(0x0062fc90); r_esp += 16; return;
L_0062fc90:; BB(0x0062fc90);
    /* 0062fc90: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fc96: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fc98: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fc9du); f_005b8610();
    /* 0062fc9d: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fca0: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fca6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fca8: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062fcab: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fcb0u); f_005b8624();
    /* 0062fcb0: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fcb3: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fcb9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcbb: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062fcbe: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fcc3u); f_005b8610();
    /* 0062fcc3: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fcc6: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fccc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcce: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 0062fcd4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fcd9u); f_005b8624();
    /* 0062fcd9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fcdc: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0062fce2: jmp 0x62fd40 */ goto L_0062fd40;
L_0062fd40:; BB(0x0062fd40);
    /* 0062fd40: mov dword ptr [ecx + 0x354], 0x42480000 */ W32((u32)(r_ecx+0x354u), 0x42480000u);
    /* 0062fd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fd4c: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062fd53: mov dword ptr [ecx + 0x358], 0x42480000 */ W32((u32)(r_ecx+0x358u), 0x42480000u);
    /* 0062fd5d: mov dword ptr [ecx + 0x84], 0x96 */ W32((u32)(r_ecx+0x84u), 0x96u);
    /* 0062fd67: mov dword ptr [ecx + 0x88], 0x1e */ W32((u32)(r_ecx+0x88u), 0x1eu);
    /* 0062fd71: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0062fd77: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd7a: je 0x62fdba */ if (fZ) goto L_0062fdba;
L_0062fd7c:; BB(0x0062fd7c);
    /* 0062fd7c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0062fd7f: mov dword ptr [ecx + 0x34c], 0 */ W32((u32)(r_ecx+0x34cu), 0x0u);
    /* 0062fd89: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062fd8e: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062fd94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd96: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 0062fd9d: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fda2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0062fda5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62fdaau); f_007b9a88();
    /* 0062fdaa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdad: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62fdb2u); f_007b4f54();
    /* 0062fdb2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdb5: jmp 0x62fa90 */ goto L_0062fa90;
L_0062fdba:; BB(0x0062fdba);
    /* 0062fdba: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0062fdbf: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x62fdc4u); f_006a8eb0();
    /* 0062fdc4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdc7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062fdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fdcc: jne 0x62fd7c */ if (!fZ) goto L_0062fd7c;
L_0062fdce:; BB(0x0062fdce);
    /* 0062fdce: mov dword ptr [ecx + 0x84], 0x3c */ W32((u32)(r_ecx+0x84u), 0x3cu);
    /* 0062fdd8: mov dword ptr [ecx + 0x358], 0x42a00000 */ W32((u32)(r_ecx+0x358u), 0x42a00000u);
    /* 0062fde2: mov dword ptr [0xa8ef94], 0 */ W32((u32)(0xa8ef94u), 0x0u);
    /* 0062fdec: mov dword ptr [0x9c6094], 1 */ W32((u32)(0x9c6094u), 0x1u);
    /* 0062fdf6: jmp 0x62fd7c */ goto L_0062fd7c;
}

void f_0062fce4(void)
{
    FN_ENTER(0x0062fce4);
    goto L_0062fce4;
L_0062fa90:; BB(0x0062fa90);
    /* 0062fa90: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062fa93: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062fa96: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062fa99: mov eax, edx */ r_eax = r_edx;
    /* 0062fa9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062fa9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062faa5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062faa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062faa8: ret 0xc */ FN_RET(0x0062fce4); r_esp += 16; return;
L_0062fce4:; BB(0x0062fce4);
    /* 0062fce4: mov dword ptr [eax + 0x35c], 1 */ W32((u32)(r_eax+0x35cu), 0x1u);
    /* 0062fcee: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fcf4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcf6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fcfbu); f_005b8610();
    /* 0062fcfb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fcfe: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd04: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd06: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062fd09: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fd0eu); f_005b8624();
    /* 0062fd0e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd11: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd19: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062fd1c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fd21u); f_005b8610();
    /* 0062fd21: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd24: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd2c: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 0062fd32: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fd37u); f_005b8624();
    /* 0062fd37: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd3a: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0062fd40: mov dword ptr [ecx + 0x354], 0x42480000 */ W32((u32)(r_ecx+0x354u), 0x42480000u);
    /* 0062fd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fd4c: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062fd53: mov dword ptr [ecx + 0x358], 0x42480000 */ W32((u32)(r_ecx+0x358u), 0x42480000u);
    /* 0062fd5d: mov dword ptr [ecx + 0x84], 0x96 */ W32((u32)(r_ecx+0x84u), 0x96u);
    /* 0062fd67: mov dword ptr [ecx + 0x88], 0x1e */ W32((u32)(r_ecx+0x88u), 0x1eu);
    /* 0062fd71: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0062fd77: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd7a: je 0x62fdba */ if (fZ) goto L_0062fdba;
L_0062fd7c:; BB(0x0062fd7c);
    /* 0062fd7c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0062fd7f: mov dword ptr [ecx + 0x34c], 0 */ W32((u32)(r_ecx+0x34cu), 0x0u);
    /* 0062fd89: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062fd8e: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062fd94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd96: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 0062fd9d: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fda2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0062fda5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62fdaau); f_007b9a88();
    /* 0062fdaa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdad: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62fdb2u); f_007b4f54();
    /* 0062fdb2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdb5: jmp 0x62fa90 */ goto L_0062fa90;
L_0062fdba:; BB(0x0062fdba);
    /* 0062fdba: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0062fdbf: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x62fdc4u); f_006a8eb0();
    /* 0062fdc4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdc7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062fdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fdcc: jne 0x62fd7c */ if (!fZ) goto L_0062fd7c;
L_0062fdce:; BB(0x0062fdce);
    /* 0062fdce: mov dword ptr [ecx + 0x84], 0x3c */ W32((u32)(r_ecx+0x84u), 0x3cu);
    /* 0062fdd8: mov dword ptr [ecx + 0x358], 0x42a00000 */ W32((u32)(r_ecx+0x358u), 0x42a00000u);
    /* 0062fde2: mov dword ptr [0xa8ef94], 0 */ W32((u32)(0xa8ef94u), 0x0u);
    /* 0062fdec: mov dword ptr [0x9c6094], 1 */ W32((u32)(0x9c6094u), 0x1u);
    /* 0062fdf6: jmp 0x62fd7c */ goto L_0062fd7c;
}

void f_0062fcee(void)
{
    FN_ENTER(0x0062fcee);
    goto L_0062fcee;
L_0062fa90:; BB(0x0062fa90);
    /* 0062fa90: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0062fa93: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0062fa96: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062fa99: mov eax, edx */ r_eax = r_edx;
    /* 0062fa9b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062fa9e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062faa5: mov esp, ebp */ r_esp = r_ebp;
    /* 0062faa7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062faa8: ret 0xc */ FN_RET(0x0062fcee); r_esp += 16; return;
L_0062fcee:; BB(0x0062fcee);
    /* 0062fcee: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fcf4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fcf6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fcfbu); f_005b8610();
    /* 0062fcfb: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fcfe: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd04: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd06: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0062fd09: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fd0eu); f_005b8624();
    /* 0062fd0e: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd11: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd19: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0062fd1c: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62fd21u); f_005b8610();
    /* 0062fd21: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd24: mov ecx, dword ptr [0xa8ef98] */ r_ecx = R32((u32)(0xa8ef98u));
    /* 0062fd2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd2c: mov dword ptr [edx + 0x37c], eax */ W32((u32)(r_edx+0x37cu), r_eax);
    /* 0062fd32: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x62fd37u); f_005b8624();
    /* 0062fd37: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fd3a: mov dword ptr [ecx + 0x380], eax */ W32((u32)(r_ecx+0x380u), r_eax);
    /* 0062fd40: mov dword ptr [ecx + 0x354], 0x42480000 */ W32((u32)(r_ecx+0x354u), 0x42480000u);
    /* 0062fd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fd4c: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0062fd53: mov dword ptr [ecx + 0x358], 0x42480000 */ W32((u32)(r_ecx+0x358u), 0x42480000u);
    /* 0062fd5d: mov dword ptr [ecx + 0x84], 0x96 */ W32((u32)(r_ecx+0x84u), 0x96u);
    /* 0062fd67: mov dword ptr [ecx + 0x88], 0x1e */ W32((u32)(r_ecx+0x88u), 0x1eu);
    /* 0062fd71: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 0062fd77: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fd7a: je 0x62fdba */ if (fZ) goto L_0062fdba;
L_0062fd7c:; BB(0x0062fd7c);
    /* 0062fd7c: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0062fd7f: mov dword ptr [ecx + 0x34c], 0 */ W32((u32)(r_ecx+0x34cu), 0x0u);
    /* 0062fd89: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062fd8e: or edx, 0x60000000 */ {  u32 a = r_edx; u32 b = 0x60000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0062fd94: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fd96: mov word ptr [ecx + 0x364], ax */ W16((u32)(r_ecx+0x364u), (u16)r_eax);
    /* 0062fd9d: push 0x9c6068 */ { u32 v = 0x9c6068u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fda2: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0062fda5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62fdaau); f_007b9a88();
    /* 0062fdaa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdad: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x62fdb2u); f_007b4f54();
    /* 0062fdb2: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdb5: jmp 0x62fa90 */ goto L_0062fa90;
L_0062fdba:; BB(0x0062fdba);
    /* 0062fdba: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0062fdbf: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x62fdc4u); f_006a8eb0();
    /* 0062fdc4: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0062fdc7: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062fdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fdcc: jne 0x62fd7c */ if (!fZ) goto L_0062fd7c;
L_0062fdce:; BB(0x0062fdce);
    /* 0062fdce: mov dword ptr [ecx + 0x84], 0x3c */ W32((u32)(r_ecx+0x84u), 0x3cu);
    /* 0062fdd8: mov dword ptr [ecx + 0x358], 0x42a00000 */ W32((u32)(r_ecx+0x358u), 0x42a00000u);
    /* 0062fde2: mov dword ptr [0xa8ef94], 0 */ W32((u32)(0xa8ef94u), 0x0u);
    /* 0062fdec: mov dword ptr [0x9c6094], 1 */ W32((u32)(0x9c6094u), 0x1u);
    /* 0062fdf6: jmp 0x62fd7c */ goto L_0062fd7c;
}

void f_0062fdf8(void) /* sub_62FDF8 */
{
    FN_ENTER(0x0062fdf8);
    /* 0062fdf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062fdf9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0062fdfc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062fdfe: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0062fe03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062fe05: mov word ptr [ebx + 0x364], ax */ W16((u32)(r_ebx+0x364u), (u16)r_eax);
    /* 0062fe0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062fe0e: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62fe13u); f_007706b0();
    /* 0062fe13: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 0062fe19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062fe1b: jle 0x62fe2d */ if ((fZ||fS!=fO)) goto L_0062fe2d;
L_0062fe1d:; BB(0x0062fe1d);
    /* 0062fe1d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0062fe20: mov dword ptr [ebx + 0x84], eax */ W32((u32)(r_ebx+0x84u), r_eax);
    /* 0062fe26: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fe28: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062fe2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062fe2c: ret  */ FN_RET(0x0062fdf8); r_esp += 4; return;
L_0062fe2d:; BB(0x0062fe2d);
    /* 0062fe2d: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062fe33: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fe39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062fe3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0062fe3d: jle 0x62ff3e */ if ((fZ||fS!=fO)) goto L_0062ff3e;
L_0062fe43:; BB(0x0062fe43);
    /* 0062fe43: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0062fe47: mov esi, ebx */ r_esi = r_ebx;
    /* 0062fe49: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0062fe4d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0062fe50: mov edi, eax */ r_edi = r_eax;
L_0062fe52:; BB(0x0062fe52);
    /* 0062fe52: mov ebp, dword ptr [edi*4 + 0xaad720] */ r_ebp = R32((u32)(r_edi*4+0xaad720u));
    /* 0062fe59: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe5b: je 0x62ff28 */ if (fZ) goto L_0062ff28;
L_0062fe61:; BB(0x0062fe61);
    /* 0062fe61: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe63: je 0x62ff28 */ if (fZ) goto L_0062ff28;
L_0062fe69:; BB(0x0062fe69);
    /* 0062fe69: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0062fe6c: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe71: jne 0x62ff28 */ if (!fZ) goto L_0062ff28;
L_0062fe77:; BB(0x0062fe77);
    /* 0062fe77: movzx ebx, word ptr [ebp + 0x1c] */ r_ebx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0062fe7b: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe81: je 0x62ff28 */ if (fZ) goto L_0062ff28;
L_0062fe87:; BB(0x0062fe87);
    /* 0062fe87: movzx eax, word ptr [esi + 0x2dc] */ r_eax = (u32)R16((u32)(r_esi+0x2dcu));
    /* 0062fe8e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062fe90: je 0x62ff99 */ if (fZ) goto L_0062ff99;
L_0062fe96:; BB(0x0062fe96);
    /* 0062fe96: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fe9c: jl 0x62fee1 */ if ((fS!=fO)) goto L_0062fee1;
L_0062fe9e:; BB(0x0062fe9e);
    /* 0062fe9e: cmp ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062fea4: jl 0x62feb4 */ if ((fS!=fO)) goto L_0062feb4;
L_0062fea6:; BB(0x0062fea6);
    /* 0062fea6: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062feac: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062feb2: jmp 0x62ff28 */ goto L_0062ff28;
L_0062feb4:; BB(0x0062feb4);
    /* 0062feb4: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0062feb7: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0062feba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062febb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062febc: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62fec1u); f_007a9180();
    /* 0062fec1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062fec4: fld dword ptr [esi + 0x354] */ FPUSH(R_F32((u32)(r_esi+0x354u)));
    /* 0062feca: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062fecc: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062fece: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062fed0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062fed1: ja 0x62ff45 */ if ((!fC&&!fZ)) goto L_0062ff45;
L_0062fed3:; BB(0x0062fed3);
    /* 0062fed3: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062fed9: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fedf: jmp 0x62ff28 */ goto L_0062ff28;
L_0062fee1:; BB(0x0062fee1);
    /* 0062fee1: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 0062fee7: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062feed: je 0x62fefd */ if (fZ) goto L_0062fefd;
L_0062feef:; BB(0x0062feef);
    /* 0062feef: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062fef5: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062fefb: jmp 0x62ff28 */ goto L_0062ff28;
L_0062fefd:; BB(0x0062fefd);
    /* 0062fefd: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0062ff00: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0062ff03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff05: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x62ff0au); f_007a9180();
    /* 0062ff0a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0062ff0d: fld dword ptr [esi + 0x354] */ FPUSH(R_F32((u32)(r_esi+0x354u)));
    /* 0062ff13: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0062ff15: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0062ff17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0062ff19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0062ff1a: ja 0x62ff6f */ if ((!fC&&!fZ)) goto L_0062ff6f;
L_0062ff1c:; BB(0x0062ff1c);
    /* 0062ff1c: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062ff22: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0062ff28:; BB(0x0062ff28);
    /* 0062ff28: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062ff2b: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ff2d: jl 0x62fe52 */ if ((fS!=fO)) goto L_0062fe52;
L_0062ff33:; BB(0x0062ff33);
    /* 0062ff33: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062ff37: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0062ff3b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0062ff3e:; BB(0x0062ff3e);
    /* 0062ff3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062ff40: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ff43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ff44: ret  */ FN_RET(0x0062fdf8); r_esp += 4; return;
L_0062ff45:; BB(0x0062ff45);
    /* 0062ff45: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0062ff49: mov eax, ebx */ r_eax = r_ebx;
    /* 0062ff4b: mov ebx, esi */ r_ebx = r_esi;
    /* 0062ff4d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062ff51: mov edx, ebp */ r_edx = r_ebp;
    /* 0062ff53: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0062ff56: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff57: mov word ptr [ebx + 0x364], ax */ W16((u32)(r_ebx+0x364u), (u16)r_eax);
    /* 0062ff5e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062ff60: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62ff65u); f_007706b0();
    /* 0062ff65: mov eax, 1 */ r_eax = 0x1u;
    /* 0062ff6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ff6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ff6e: ret  */ FN_RET(0x0062fdf8); r_esp += 4; return;
L_0062ff6f:; BB(0x0062ff6f);
    /* 0062ff6f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0062ff73: mov eax, ebx */ r_eax = r_ebx;
    /* 0062ff75: mov ebx, esi */ r_ebx = r_esi;
    /* 0062ff77: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0062ff7b: mov edx, ebp */ r_edx = r_ebp;
    /* 0062ff7d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0062ff80: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0062ff81: mov word ptr [ebx + 0x364], ax */ W16((u32)(r_ebx+0x364u), (u16)r_eax);
    /* 0062ff88: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0062ff8a: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x62ff8fu); f_007706b0();
    /* 0062ff8f: mov eax, 1 */ r_eax = 0x1u;
    /* 0062ff94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062ff97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062ff98: ret  */ FN_RET(0x0062fdf8); r_esp += 4; return;
L_0062ff99:; BB(0x0062ff99);
    /* 0062ff99: mov eax, dword ptr [0xa8ef94] */ r_eax = R32((u32)(0xa8ef94u));
    /* 0062ff9e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ffa1: je 0x62fe96 */ if (fZ) goto L_0062fe96;
L_0062ffa7:; BB(0x0062ffa7);
    /* 0062ffa7: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0062ffac: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x62ffb1u); f_006a8eb0();
    /* 0062ffb1: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0062ffb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062ffb6: je 0x62fe96 */ if (fZ) goto L_0062fe96;
L_0062ffbc:; BB(0x0062ffbc);
    /* 0062ffbc: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 0062ffc2: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0062ffc8: jmp 0x62ff28 */ goto L_0062ff28;
}

void f_0062ffd0(void) /* sub_62FFD0 */
{
    FN_ENTER(0x0062ffd0);
    /* 0062ffd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffd1: mov edi, ecx */ r_edi = r_ecx;
    /* 0062ffd3: mov eax, dword ptr [edi + 0x35c] */ r_eax = R32((u32)(r_edi+0x35cu));
    /* 0062ffd9: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ffdc: jl 0x630004 */ if ((fS!=fO)) goto L_00630004;
L_0062ffde:; BB(0x0062ffde);
    /* 0062ffde: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062ffe1: jg 0x63002f */ if ((!fZ&&fS==fO)) goto L_0063002f;
L_0062ffe3:; BB(0x0062ffe3);
    /* 0062ffe3: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffe8: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0062ffee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062ffef: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x62fff4u); f_0050b510();
    /* 0062fff4: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0062fff9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0062fffa: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x62ffffu); f_0050b510();
    /* 0062ffff: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00630002: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630003: ret  */ FN_RET(0x0062ffd0); r_esp += 4; return;
L_00630004:; BB(0x00630004);
    /* 00630004: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00630007: jl 0x63002f */ if ((fS!=fO)) goto L_0063002f;
L_00630009:; BB(0x00630009);
    /* 00630009: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063000c: jg 0x63002f */ if ((!fZ&&fS==fO)) goto L_0063002f;
L_0063000e:; BB(0x0063000e);
    /* 0063000e: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 00630013: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00630019: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063001a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63001fu); f_0050b510();
    /* 0063001f: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 00630024: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630025: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63002au); f_0050b510();
    /* 0063002a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063002d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063002e: ret  */ FN_RET(0x0062ffd0); r_esp += 4; return;
L_0063002f:; BB(0x0063002f);
    /* 0063002f: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00630031: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00630037: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00630038: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x63003du); f_0050b510();
    /* 0063003d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00630040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00630042: je 0x630052 */ if (fZ) goto L_00630052;
L_00630044:; BB(0x00630044);
    /* 00630044: mov dword ptr [eax + 0x44], 0x3fa00000 */ W32((u32)(r_eax+0x44u), 0x3fa00000u);
    /* 0063004b: mov dword ptr [eax + 0x48], 0x3fa00000 */ W32((u32)(r_eax+0x48u), 0x3fa00000u);
L_00630052:; BB(0x00630052);
    /* 00630052: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00630053: ret  */ FN_RET(0x0062ffd0); r_esp += 4; return;
}

