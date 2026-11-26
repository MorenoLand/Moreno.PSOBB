#include "protos.h"

void f_0068f029(void)
{
    FN_ENTER(0x0068f029);
    goto L_0068f029;
L_0068efb7:; BB(0x0068efb7);
    /* 0068efb7: cmp byte ptr [ebx + 0x54893850], cl */ {  u32 a = R8((u32)(r_ebx+0x54893850u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;   }
L_0068efb8:; BB(0x0068efb8);
    /* 0068efb8: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0068efbb: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0068efbd: and al, 0x3c */ {  u32 a = (u8)r_eax; u32 b = 0x3cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068efbf: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0068efc2: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0068efc6: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0068efc9: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0068efcd: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0068efd0: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0068efd4: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0068efd7: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0068efdb: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0068efde: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0068efe2: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0068efe5: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0068efe9: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0068efec: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0068eff0: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0068eff3: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0068eff7: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0068effa: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0068effe: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0068f001: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0068f005: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 0068f008: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0068f00c: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0068f00f: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0068f013: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 0068f016: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0068f01a: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 0068f01d: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0068f021: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 0068f024: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0068f028: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
L_0068f029:; BB(0x0068f029);
    /* 0068f029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f02a: js 0x68efb7 */ if (fS) goto L_0068efb7;
    /* 0068f02b: mov eax, dword ptr [eax + 0x7c] */ r_eax = R32((u32)(r_eax+0x7cu));
L_0068f02c:; BB(0x0068f02c);
    /* 0068f02c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0068f02d: jl 0x68efb8 */ if ((fS!=fO)) goto L_0068efb8;
    /* 0068f02e: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
L_0068f02f:; BB(0x0068f02f);
    /* 0068f02f: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f030: and al, 0x7c */ {  u32 a = (u8)r_eax; u32 b = 0x7cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0068f032: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 0068f039: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f03d: call 0x6a9994 */ r_esp -= 4; W32(r_esp, 0x68f042u); f_006a9994();
    /* 0068f042: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f044: je 0x68f06f */ if (fZ) goto L_0068f06f;
L_0068f046:; BB(0x0068f046);
    /* 0068f046: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f04b: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f050u); f_0068d5ac();
    /* 0068f050: mov ebx, eax */ r_ebx = r_eax;
    /* 0068f052: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f054: je 0x68f06f */ if (fZ) goto L_0068f06f;
L_0068f056:; BB(0x0068f056);
    /* 0068f056: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x68f05bu); f_0068be84();
    /* 0068f05b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f05d: jne 0x68f06f */ if (!fZ) goto L_0068f06f;
L_0068f05f:; BB(0x0068f05f);
    /* 0068f05f: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0068f063: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f067: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f068: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f06a: call 0x68f078 */ r_esp -= 4; W32(r_esp, 0x68f06fu); f_0068f078();
L_0068f06f:; BB(0x0068f06f);
    /* 0068f06f: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f075: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f076: ret  */ FN_RET(0x0068f029); r_esp += 4; return;
}

void f_0068f078(void) /* sub_68F078 */
{
    FN_ENTER(0x0068f078);
    /* 0068f078: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f07c: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f080: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f081: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 0068f087: call 0x6a67f4 */ r_esp -= 4; W32(r_esp, 0x68f08cu); f_006a67f4();
    /* 0068f08c: ret 8 */ FN_RET(0x0068f078); r_esp += 12; return;
}

void f_0068f090(void) /* sub_68F090 */
{
    FN_ENTER(0x0068f090);
    /* 0068f090: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f091: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f092: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f095: mov edi, ecx */ r_edi = r_ecx;
    /* 0068f097: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0068f09b: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f09d: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f0a2u); f_0068fb8c();
    /* 0068f0a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0a4: jne 0x68f10e */ if (!fZ) goto L_0068f10e;
L_0068f0a6:; BB(0x0068f0a6);
    /* 0068f0a6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0a8: je 0x68f0be */ if (fZ) goto L_0068f0be;
L_0068f0aa:; BB(0x0068f0aa);
    /* 0068f0aa: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0068f0b1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f0b4: jne 0x68f0be */ if (!fZ) goto L_0068f0be;
L_0068f0b6:; BB(0x0068f0b6);
    /* 0068f0b6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f0b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f0ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f0bb: ret 0xc */ FN_RET(0x0068f090); r_esp += 16; return;
L_0068f0be:; BB(0x0068f0be);
    /* 0068f0be: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0068f0c2: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0068f0c6: mov byte ptr [esp], 0x2a */ W8((u32)(r_esp), 0x2au);
    /* 0068f0ca: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 0068f0cf: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068f0d4: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0068f0d8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068f0dc: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0068f0e1: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 0068f0e6: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0068f0eb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068f0ee: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068f0f0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068f0f4: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0068f0f7: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 0068f0fa: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068f0fe: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 0068f102: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68f107u); f_008003e0();
    /* 0068f107: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f109: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68f10eu); f_0068dd44();
L_0068f10e:; BB(0x0068f10e);
    /* 0068f10e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f111: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f112: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f113: ret 0xc */ FN_RET(0x0068f090); r_esp += 16; return;
}

void f_0068f118(void) /* sub_68F118 */
{
    FN_ENTER(0x0068f118);
    /* 0068f118: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f119: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f11c: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0068f120: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068f122: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0068f127: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 0068f12f: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 0068f134: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0068f13c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0068f144: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068f14c: mov byte ptr [esp + 4], 0x2a */ W8((u32)(r_esp+0x4u), 0x2au);
    /* 0068f151: mov byte ptr [esp + 5], 6 */ W8((u32)(r_esp+0x5u), 0x6u);
    /* 0068f156: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f158: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068f15c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f160: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068f163: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068f167: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068f16a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068f16e: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068f171: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068f175: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0068f178: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068f17c: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0068f17f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0068f183: call 0x6a99bc */ r_esp -= 4; W32(r_esp, 0x68f188u); f_006a99bc();
    /* 0068f188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f18a: je 0x68f1c8 */ if (fZ) goto L_0068f1c8;
L_0068f18c:; BB(0x0068f18c);
    /* 0068f18c: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f191: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f196u); f_0068d5ac();
    /* 0068f196: mov ebp, eax */ r_ebp = r_eax;
    /* 0068f198: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f19a: je 0x68f1c8 */ if (fZ) goto L_0068f1c8;
L_0068f19c:; BB(0x0068f19c);
    /* 0068f19c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f19e: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f1a3u); f_0068fb8c();
    /* 0068f1a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f1a5: jne 0x68f1c8 */ if (!fZ) goto L_0068f1c8;
L_0068f1a7:; BB(0x0068f1a7);
    /* 0068f1a7: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 0068f1ac: movsx edx, word ptr [esp + 0xa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0xau));
    /* 0068f1b1: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0068f1b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1b8: mov ecx, dword ptr [ebp + 0xdf4] */ r_ecx = R32((u32)(r_ebp+0xdf4u));
    /* 0068f1be: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f1c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1c3: call 0x6a6930 */ r_esp -= 4; W32(r_esp, 0x68f1c8u); f_006a6930();
L_0068f1c8:; BB(0x0068f1c8);
    /* 0068f1c8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f1cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f1cc: ret  */ FN_RET(0x0068f118); r_esp += 4; return;
}

void f_0068f1d0(void) /* sub_68F1D0 */
{
    FN_ENTER(0x0068f1d0);
    /* 0068f1d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1d2: mov esi, ecx */ r_esi = r_ecx;
    /* 0068f1d4: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0068f1d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1d9: mov ecx, esi */ r_ecx = r_esi;
    /* 0068f1db: call 0x687c98 */ r_esp -= 4; W32(r_esp, 0x68f1e0u); f_00687c98();
    /* 0068f1e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f1e2: jne 0x68f1ee */ if (!fZ) goto L_0068f1ee;
L_0068f1e4:; BB(0x0068f1e4);
    /* 0068f1e4: mov eax, 1 */ r_eax = 0x1u;
    /* 0068f1e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f1ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f1eb: ret 0xc */ FN_RET(0x0068f1d0); r_esp += 16; return;
L_0068f1ee:; BB(0x0068f1ee);
    /* 0068f1ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f1f0: call 0x5d29b0 */ r_esp -= 4; W32(r_esp, 0x68f1f5u); f_005d29b0();
    /* 0068f1f5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0068f1f8: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0068f1fb: mov ecx, esi */ r_ecx = r_esi;
    /* 0068f1fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f1fe: call 0x7772bc */ r_esp -= 4; W32(r_esp, 0x68f203u); f_007772bc();
    /* 0068f203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f205: je 0x68f224 */ if (fZ) goto L_0068f224;
L_0068f207:; BB(0x0068f207);
    /* 0068f207: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f20b: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f20f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068f213: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f215: call 0x6d7fe4 */ r_esp -= 4; W32(r_esp, 0x68f21au); f_006d7fe4();
    /* 0068f21a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f21c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f21f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f220: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f221: ret 0xc */ FN_RET(0x0068f1d0); r_esp += 16; return;
L_0068f224:; BB(0x0068f224);
    /* 0068f224: mov eax, 2 */ r_eax = 0x2u;
    /* 0068f229: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f22a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f22b: ret 0xc */ FN_RET(0x0068f1d0); r_esp += 16; return;
}

void f_0068f230(void) /* sub_68F230 */
{
    FN_ENTER(0x0068f230);
    /* 0068f230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f231: mov esi, ecx */ r_esi = r_ecx;
    /* 0068f233: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 0068f239: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0068f23c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0068f240: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f242: cmp edx, 0xf423f */ {  u32 a = r_edx; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068f248: jle 0x68f250 */ if ((fZ||fS!=fO)) goto L_0068f250;
L_0068f24a:; BB(0x0068f24a);
    /* 0068f24a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f24c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f24d: ret 0xc */ FN_RET(0x0068f230); r_esp += 16; return;
L_0068f250:; BB(0x0068f250);
    /* 0068f250: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f251: mov ecx, esi */ r_ecx = r_esi;
    /* 0068f253: call 0x770d30 */ r_esp -= 4; W32(r_esp, 0x68f258u); f_00770d30();
    /* 0068f258: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f25c: mov ecx, esi */ r_ecx = r_esi;
    /* 0068f25e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f262: call 0x68f270 */ r_esp -= 4; W32(r_esp, 0x68f267u); f_0068f270();
    /* 0068f267: mov eax, 1 */ r_eax = 0x1u;
    /* 0068f26c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f26d: ret 0xc */ FN_RET(0x0068f230); r_esp += 16; return;
}

void f_0068f270(void) /* sub_68F270 */
{
    FN_ENTER(0x0068f270);
    /* 0068f270: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f271: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f274: mov edi, ecx */ r_edi = r_ecx;
    /* 0068f276: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f278: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f27du); f_0068fb8c();
    /* 0068f27d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f27f: jne 0x68f2c2 */ if (!fZ) goto L_0068f2c2;
L_0068f281:; BB(0x0068f281);
    /* 0068f281: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f283: je 0x68f298 */ if (fZ) goto L_0068f298;
L_0068f285:; BB(0x0068f285);
    /* 0068f285: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0068f28c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f28f: jne 0x68f298 */ if (!fZ) goto L_0068f298;
L_0068f291:; BB(0x0068f291);
    /* 0068f291: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f294: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f295: ret 8 */ FN_RET(0x0068f270); r_esp += 12; return;
L_0068f298:; BB(0x0068f298);
    /* 0068f298: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0068f29c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0068f2a0: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0068f2a4: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068f2a9: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068f2ad: mov byte ptr [esp], 0xc0 */ W8((u32)(r_esp), 0xc0u);
    /* 0068f2b1: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068f2b6: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0068f2ba: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068f2bd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68f2c2u); f_008003e0();
L_0068f2c2:; BB(0x0068f2c2);
    /* 0068f2c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f2c5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f2c6: ret 8 */ FN_RET(0x0068f270); r_esp += 12; return;
}

void f_0068f2cc(void) /* sub_68F2CC */
{
    FN_ENTER(0x0068f2cc);
    /* 0068f2cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f2cd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f2d0: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0068f2d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f2d6: mov byte ptr [esp + 4], 0xc0 */ W8((u32)(r_esp+0x4u), 0xc0u);
    /* 0068f2db: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0068f2e0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068f2e4: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0068f2e9: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 0068f2f1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0068f2f4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068f2f8: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0068f2fb: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068f2ff: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f303: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f306: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068f30a: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68f30fu); f_006a9e70();
    /* 0068f30f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f311: je 0x68f33d */ if (fZ) goto L_0068f33d;
L_0068f313:; BB(0x0068f313);
    /* 0068f313: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f318: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f31du); f_0068d5ac();
    /* 0068f31d: mov ebp, eax */ r_ebp = r_eax;
    /* 0068f31f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f321: je 0x68f33d */ if (fZ) goto L_0068f33d;
L_0068f323:; BB(0x0068f323);
    /* 0068f323: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f325: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f32au); f_0068fb8c();
    /* 0068f32a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f32c: jne 0x68f33d */ if (!fZ) goto L_0068f33d;
L_0068f32e:; BB(0x0068f32e);
    /* 0068f32e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f332: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f334: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068f338: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x68f33du); f_0068ed94();
L_0068f33d:; BB(0x0068f33d);
    /* 0068f33d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f340: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f341: ret  */ FN_RET(0x0068f2cc); r_esp += 4; return;
}

void f_0068f344(void) /* sub_68F344 */
{
    FN_ENTER(0x0068f344);
    /* 0068f344: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f345: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f348: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068f34a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f34c: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f351u); f_0068fb8c();
    /* 0068f351: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f353: jne 0x68f3c3 */ if (!fZ) goto L_0068f3c3;
L_0068f355:; BB(0x0068f355);
    /* 0068f355: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f357: je 0x68f36c */ if (fZ) goto L_0068f36c;
L_0068f359:; BB(0x0068f359);
    /* 0068f359: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0068f360: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f363: jne 0x68f36c */ if (!fZ) goto L_0068f36c;
L_0068f365:; BB(0x0068f365);
    /* 0068f365: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f368: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f369: ret 8 */ FN_RET(0x0068f344); r_esp += 12; return;
L_0068f36c:; BB(0x0068f36c);
    /* 0068f36c: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 0068f370: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0068f375: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0068f37a: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0068f37f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068f384: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f386: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f38a: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0068f38f: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 0068f393: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0068f397: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068f39b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068f39f: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0068f3a3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068f3a6: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x68f3abu); f_00800518();
    /* 0068f3ab: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068f3af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f3b0: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0068f3b4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f3b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f3b7: call 0x68ed94 */ r_esp -= 4; W32(r_esp, 0x68f3bcu); f_0068ed94();
    /* 0068f3bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068f3be: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x68f3c3u); f_0068dd44();
L_0068f3c3:; BB(0x0068f3c3);
    /* 0068f3c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f3c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f3c7: ret 8 */ FN_RET(0x0068f344); r_esp += 12; return;
}

void f_0068f3cc(void) /* sub_68F3CC */
{
    FN_ENTER(0x0068f3cc);
    /* 0068f3cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f3cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f3ce: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f3d1: mov edi, ecx */ r_edi = r_ecx;
    /* 0068f3d3: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0068f3d7: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f3d9: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f3deu); f_0068fb8c();
    /* 0068f3de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f3e0: jne 0x68f46c */ if (!fZ) goto L_0068f46c;
L_0068f3e6:; BB(0x0068f3e6);
    /* 0068f3e6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068f3e9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f3ec: je 0x68f474 */ if (fZ) goto L_0068f474;
L_0068f3f2:; BB(0x0068f3f2);
    /* 0068f3f2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f3f4: je 0x68f40a */ if (fZ) goto L_0068f40a;
L_0068f3f6:; BB(0x0068f3f6);
    /* 0068f3f6: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0068f3fd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f400: jne 0x68f40a */ if (!fZ) goto L_0068f40a;
L_0068f402:; BB(0x0068f402);
    /* 0068f402: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f406: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f407: ret 4 */ FN_RET(0x0068f3cc); r_esp += 8; return;
L_0068f40a:; BB(0x0068f40a);
    /* 0068f40a: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0068f40e: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 0068f411: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0068f414: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f416: mov byte ptr [esp + 0x19], al */ W8((u32)(r_esp+0x19u), (u8)r_eax);
    /* 0068f41a: mov byte ptr [esp], 0x2b */ W8((u32)(r_esp), 0x2bu);
    /* 0068f41e: mov byte ptr [esp + 0x1a], al */ W8((u32)(r_esp+0x1au), (u8)r_eax);
    /* 0068f422: mov byte ptr [esp + 0x18], 2 */ W8((u32)(r_esp+0x18u), 0x2u);
    /* 0068f427: mov byte ptr [esp + 0x1b], al */ W8((u32)(r_esp+0x1bu), (u8)r_eax);
    /* 0068f42b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0068f42e: mov byte ptr [esp + 1], 7 */ W8((u32)(r_esp+0x1u), 0x7u);
    /* 0068f433: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0068f438: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0068f43c: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068f440: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068f444: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f448: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0068f44b: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 0068f44e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068f452: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 0068f456: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f45bu); f_0061cdb0();
    /* 0068f45b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f45f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f464u); f_0061cdb0();
    /* 0068f464: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068f467: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68f46cu); f_008003e0();
L_0068f46c:; BB(0x0068f46c);
    /* 0068f46c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f46f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f470: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f471: ret 4 */ FN_RET(0x0068f3cc); r_esp += 8; return;
L_0068f474:; BB(0x0068f474);
    /* 0068f474: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0068f47b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f47c: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x68f481u); f_005e3aac();
    /* 0068f481: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f482: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0068f485: jmp 0x68f3f2 */ goto L_0068f3f2;
}

void f_0068f48c(void) /* sub_68F48C */
{
    FN_ENTER(0x0068f48c);
    /* 0068f48c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f48d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f48e: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f491: mov esi, ecx */ r_esi = r_ecx;
    /* 0068f493: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0068f497: mov ecx, esi */ r_ecx = r_esi;
    /* 0068f499: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f49eu); f_0068fb8c();
    /* 0068f49e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f4a0: jne 0x68f4be */ if (!fZ) goto L_0068f4be;
L_0068f4a2:; BB(0x0068f4a2);
    /* 0068f4a2: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0068f4a5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f4a8: je 0x68f55d */ if (fZ) goto L_0068f55d;
L_0068f4ae:; BB(0x0068f4ae);
    /* 0068f4ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f4b0: je 0x68f4c6 */ if (fZ) goto L_0068f4c6;
L_0068f4b2:; BB(0x0068f4b2);
    /* 0068f4b2: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0068f4b9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f4bc: jne 0x68f4c6 */ if (!fZ) goto L_0068f4c6;
L_0068f4be:; BB(0x0068f4be);
    /* 0068f4be: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f4c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f4c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f4c3: ret 4 */ FN_RET(0x0068f48c); r_esp += 8; return;
L_0068f4c6:; BB(0x0068f4c6);
    /* 0068f4c6: mov byte ptr [esp + 4], 0xba */ W8((u32)(r_esp+0x4u), 0xbau);
    /* 0068f4cb: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0068f4d0: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0068f4d5: mov byte ptr [esp + 5], 2 */ W8((u32)(r_esp+0x5u), 0x2u);
    /* 0068f4da: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f4de: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f4e2: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x68f4e7u); f_00800518();
    /* 0068f4e7: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0068f4eb: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0068f4ed: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0068f4f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f4f2: mov byte ptr [esp + 0x25], al */ W8((u32)(r_esp+0x25u), (u8)r_eax);
    /* 0068f4f6: mov byte ptr [esp + 0xc], 0x2b */ W8((u32)(r_esp+0xcu), 0x2bu);
    /* 0068f4fb: mov byte ptr [esp + 0x26], al */ W8((u32)(r_esp+0x26u), (u8)r_eax);
    /* 0068f4ff: mov byte ptr [esp + 0x24], 2 */ W8((u32)(r_esp+0x24u), 0x2u);
    /* 0068f504: mov byte ptr [esp + 0x27], al */ W8((u32)(r_esp+0x27u), (u8)r_eax);
    /* 0068f508: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0068f50b: mov byte ptr [esp + 0xd], 7 */ W8((u32)(r_esp+0xdu), 0x7u);
    /* 0068f510: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0068f515: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0068f519: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0068f51d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0068f521: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0068f525: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0068f528: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0068f52b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0068f52f: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0068f533: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f538u); f_0061cdb0();
    /* 0068f538: mov dword ptr [0xaaecf0], 1 */ W32((u32)(0xaaecf0u), 0x1u);
    /* 0068f542: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0068f546: call 0x68f578 */ r_esp -= 4; W32(r_esp, 0x68f54bu); f_0068f578();
    /* 0068f54b: mov dword ptr [0xaaecf0], 0 */ W32((u32)(0xaaecf0u), 0x0u);
    /* 0068f555: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f558: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f559: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f55a: ret 4 */ FN_RET(0x0068f48c); r_esp += 8; return;
L_0068f55d:; BB(0x0068f55d);
    /* 0068f55d: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0068f564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f565: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x68f56au); f_005e3aac();
    /* 0068f56a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f56b: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0068f56e: jmp 0x68f4ae */ goto L_0068f4ae;
}

void f_0068f574(void)
{
    FN_ENTER(0x0068f574);
    /* 0068f574: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0068f578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f579: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f57a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f57b: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f57e: mov byte ptr [esp + 4], 0x2b */ W8((u32)(r_esp+0x4u), 0x2bu);
    /* 0068f583: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068f585: mov byte ptr [esp + 0x1c], 2 */ W8((u32)(r_esp+0x1cu), 0x2u);
    /* 0068f58a: mov byte ptr [esp + 0x1d], dl */ W8((u32)(r_esp+0x1du), (u8)r_edx);
    /* 0068f58e: mov byte ptr [esp + 0x1e], dl */ W8((u32)(r_esp+0x1eu), (u8)r_edx);
    /* 0068f592: mov byte ptr [esp + 0x1f], dl */ W8((u32)(r_esp+0x1fu), (u8)r_edx);
    /* 0068f596: mov byte ptr [esp + 5], 7 */ W8((u32)(r_esp+0x5u), 0x7u);
    /* 0068f59b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f59d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068f5a1: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0068f5a5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068f5a8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068f5ac: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068f5af: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068f5b3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068f5b6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068f5ba: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0068f5bd: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068f5c1: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0068f5c4: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068f5c8: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0068f5cb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0068f5cf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f5d4u); f_0061cdb0();
    /* 0068f5d4: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f5d8: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68f5ddu); f_006a9e70();
    /* 0068f5dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5df: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f5e1:; BB(0x0068f5e1);
    /* 0068f5e1: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f5e6: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f5ebu); f_0068d5ac();
    /* 0068f5eb: mov edi, eax */ r_edi = r_eax;
    /* 0068f5ed: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5ef: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f5f1:; BB(0x0068f5f1);
    /* 0068f5f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f5f3: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f5f8u); f_0068fb8c();
    /* 0068f5f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5fa: jne 0x68f656 */ if (!fZ) goto L_0068f656;
L_0068f5fc:; BB(0x0068f5fc);
    /* 0068f5fc: movzx edx, byte ptr [esp + 5] */ r_edx = (u32)R8((u32)(r_esp+0x5u));
    /* 0068f601: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f603: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f605: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f608: jne 0x68f619 */ if (!fZ) goto L_0068f619;
L_0068f60a:; BB(0x0068f60a);
    /* 0068f60a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f60c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0068f610: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f612: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x68f617u); f_00779df0();
    /* 0068f617: jmp 0x68f629 */ goto L_0068f629;
L_0068f619:; BB(0x0068f619);
    /* 0068f619: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f61b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0068f61f: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0068f624: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x68f629u); f_00779df0();
L_0068f629:; BB(0x0068f629);
    /* 0068f629: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0068f62d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f632u); f_0061cdb0();
    /* 0068f632: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0068f636: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f637: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x68f63cu); f_005c3a80();
    /* 0068f63c: mov ebx, eax */ r_ebx = r_eax;
    /* 0068f63e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f641: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f643: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f645:; BB(0x0068f645);
    /* 0068f645: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f646: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f648: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x68f64du); f_00687904();
    /* 0068f64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f64f: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f651:; BB(0x0068f651);
    /* 0068f651: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f654: je 0x68f65d */ if (fZ) goto L_0068f65d;
L_0068f656:; BB(0x0068f656);
    /* 0068f656: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f659: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f65a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f65b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f65c: ret  */ FN_RET(0x0068f574); r_esp += 4; return;
L_0068f65d:; BB(0x0068f65d);
    /* 0068f65d: movsx edx, byte ptr [esp + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x1du));
    /* 0068f662: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f664: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f666:; BB(0x0068f666);
    /* 0068f666: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f668: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f66a: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f66du); call_ind(t); }
    /* 0068f66d: lea ecx, [edi + 0xdf8] */ r_ecx = (u32)(r_edi+0xdf8u);
    /* 0068f673: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068f676: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f677: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68f67cu); f_0069792c();
    /* 0068f67c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f67e: jne 0x68f656 */ if (!fZ) goto L_0068f656;
L_0068f680:; BB(0x0068f680);
    /* 0068f680: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f682: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f684: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f687u); call_ind(t); }
    /* 0068f687: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068f68a: mov dword ptr [edi + edx*4 + 0xdf8], ebx */ W32((u32)(r_edi+r_edx*4+0xdf8u), r_ebx);
    /* 0068f691: mov ebp, dword ptr [edi + 0x33c] */ r_ebp = R32((u32)(r_edi+0x33cu));
    /* 0068f697: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f699: or ebp, 0x20000 */ {  u32 a = r_ebp; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f69f: mov dword ptr [edi + 0x33c], ebp */ W32((u32)(r_edi+0x33cu), r_ebp);
    /* 0068f6a5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f6a7: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x68f6aau); call_ind(t); }
    /* 0068f6aa: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0068f6b0: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068f6b6: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 0068f6bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f6bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f6c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f6c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f6c2: ret  */ FN_RET(0x0068f574); r_esp += 4; return;
}

void f_0068f578(void) /* sub_68F578 */
{
    FN_ENTER(0x0068f578);
    /* 0068f578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f579: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f57a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f57b: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f57e: mov byte ptr [esp + 4], 0x2b */ W8((u32)(r_esp+0x4u), 0x2bu);
    /* 0068f583: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068f585: mov byte ptr [esp + 0x1c], 2 */ W8((u32)(r_esp+0x1cu), 0x2u);
    /* 0068f58a: mov byte ptr [esp + 0x1d], dl */ W8((u32)(r_esp+0x1du), (u8)r_edx);
    /* 0068f58e: mov byte ptr [esp + 0x1e], dl */ W8((u32)(r_esp+0x1eu), (u8)r_edx);
    /* 0068f592: mov byte ptr [esp + 0x1f], dl */ W8((u32)(r_esp+0x1fu), (u8)r_edx);
    /* 0068f596: mov byte ptr [esp + 5], 7 */ W8((u32)(r_esp+0x5u), 0x7u);
    /* 0068f59b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068f59d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068f5a1: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0068f5a5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068f5a8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068f5ac: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0068f5af: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068f5b3: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0068f5b6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068f5ba: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0068f5bd: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068f5c1: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0068f5c4: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068f5c8: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 0068f5cb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0068f5cf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f5d4u); f_0061cdb0();
    /* 0068f5d4: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068f5d8: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68f5ddu); f_006a9e70();
    /* 0068f5dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5df: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f5e1:; BB(0x0068f5e1);
    /* 0068f5e1: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f5e6: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f5ebu); f_0068d5ac();
    /* 0068f5eb: mov edi, eax */ r_edi = r_eax;
    /* 0068f5ed: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5ef: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f5f1:; BB(0x0068f5f1);
    /* 0068f5f1: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f5f3: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f5f8u); f_0068fb8c();
    /* 0068f5f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f5fa: jne 0x68f656 */ if (!fZ) goto L_0068f656;
L_0068f5fc:; BB(0x0068f5fc);
    /* 0068f5fc: movzx edx, byte ptr [esp + 5] */ r_edx = (u32)R8((u32)(r_esp+0x5u));
    /* 0068f601: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f603: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068f605: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f608: jne 0x68f619 */ if (!fZ) goto L_0068f619;
L_0068f60a:; BB(0x0068f60a);
    /* 0068f60a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f60c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0068f610: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f612: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x68f617u); f_00779df0();
    /* 0068f617: jmp 0x68f629 */ goto L_0068f629;
L_0068f619:; BB(0x0068f619);
    /* 0068f619: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f61b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0068f61f: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0068f624: call 0x779df0 */ r_esp -= 4; W32(r_esp, 0x68f629u); f_00779df0();
L_0068f629:; BB(0x0068f629);
    /* 0068f629: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0068f62d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f632u); f_0061cdb0();
    /* 0068f632: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0068f636: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f637: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x68f63cu); f_005c3a80();
    /* 0068f63c: mov ebx, eax */ r_ebx = r_eax;
    /* 0068f63e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f641: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f643: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f645:; BB(0x0068f645);
    /* 0068f645: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f646: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f648: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x68f64du); f_00687904();
    /* 0068f64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f64f: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f651:; BB(0x0068f651);
    /* 0068f651: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f654: je 0x68f65d */ if (fZ) goto L_0068f65d;
L_0068f656:; BB(0x0068f656);
    /* 0068f656: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f659: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f65a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f65b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f65c: ret  */ FN_RET(0x0068f578); r_esp += 4; return;
L_0068f65d:; BB(0x0068f65d);
    /* 0068f65d: movsx edx, byte ptr [esp + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x1du));
    /* 0068f662: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f664: je 0x68f656 */ if (fZ) goto L_0068f656;
L_0068f666:; BB(0x0068f666);
    /* 0068f666: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f668: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f66a: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f66du); call_ind(t); }
    /* 0068f66d: lea ecx, [edi + 0xdf8] */ r_ecx = (u32)(r_edi+0xdf8u);
    /* 0068f673: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068f676: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f677: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68f67cu); f_0069792c();
    /* 0068f67c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f67e: jne 0x68f656 */ if (!fZ) goto L_0068f656;
L_0068f680:; BB(0x0068f680);
    /* 0068f680: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f682: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f684: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f687u); call_ind(t); }
    /* 0068f687: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068f68a: mov dword ptr [edi + edx*4 + 0xdf8], ebx */ W32((u32)(r_edi+r_edx*4+0xdf8u), r_ebx);
    /* 0068f691: mov ebp, dword ptr [edi + 0x33c] */ r_ebp = R32((u32)(r_edi+0x33cu));
    /* 0068f697: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f699: or ebp, 0x20000 */ {  u32 a = r_ebp; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f69f: mov dword ptr [edi + 0x33c], ebp */ W32((u32)(r_edi+0x33cu), r_ebp);
    /* 0068f6a5: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f6a7: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x68f6aau); call_ind(t); }
    /* 0068f6aa: mov edx, dword ptr [edi + 0x33c] */ r_edx = R32((u32)(r_edi+0x33cu));
    /* 0068f6b0: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068f6b6: mov dword ptr [edi + 0x33c], edx */ W32((u32)(r_edi+0x33cu), r_edx);
    /* 0068f6bc: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f6bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f6c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f6c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f6c2: ret  */ FN_RET(0x0068f578); r_esp += 4; return;
}

void f_0068f6c4(void) /* sub_68F6C4 */
{
    FN_ENTER(0x0068f6c4);
    /* 0068f6c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f6c5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f6c8: mov edi, ecx */ r_edi = r_ecx;
    /* 0068f6ca: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f6cc: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f6d1u); f_0068fb8c();
    /* 0068f6d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f6d3: jne 0x68f744 */ if (!fZ) goto L_0068f744;
L_0068f6d5:; BB(0x0068f6d5);
    /* 0068f6d5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f6d7: je 0x68f6ec */ if (fZ) goto L_0068f6ec;
L_0068f6d9:; BB(0x0068f6d9);
    /* 0068f6d9: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0068f6e0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f6e3: jne 0x68f6ec */ if (!fZ) goto L_0068f6ec;
L_0068f6e5:; BB(0x0068f6e5);
    /* 0068f6e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f6e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f6e9: ret 0xc */ FN_RET(0x0068f6c4); r_esp += 16; return;
L_0068f6ec:; BB(0x0068f6ec);
    /* 0068f6ec: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0068f6f0: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 0068f6f4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0068f6f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f6fb: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0068f700: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0068f705: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 0068f70a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068f70e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f712: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 0068f716: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0068f71a: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0068f71f: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0068f722: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068f726: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068f72a: mov byte ptr [esp + 0xc], 1 */ W8((u32)(r_esp+0xcu), 0x1u);
    /* 0068f72f: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0068f734: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0068f738: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0068f73c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068f73f: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x68f744u); f_00800518();
L_0068f744:; BB(0x0068f744);
    /* 0068f744: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f747: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f748: ret 0xc */ FN_RET(0x0068f6c4); r_esp += 16; return;
}

void f_0068f6e0(void)
{
    FN_ENTER(0x0068f6e0);
    /* 0068f6e0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f6e3: jne 0x68f6ec */ if (!fZ) goto L_0068f6ec;
L_0068f6e5:; BB(0x0068f6e5);
    /* 0068f6e5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f6e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f6e9: ret 0xc */ FN_RET(0x0068f6e0); r_esp += 16; return;
L_0068f6ec:; BB(0x0068f6ec);
    /* 0068f6ec: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0068f6f0: mov byte ptr [esp], 0xbd */ W8((u32)(r_esp), 0xbdu);
    /* 0068f6f4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0068f6f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f6fb: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 0068f700: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 0068f705: mov word ptr [esp + 2], di */ W16((u32)(r_esp+0x2u), (u16)r_edi);
    /* 0068f70a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068f70e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f712: mov byte ptr [esp + 0xc], al */ W8((u32)(r_esp+0xcu), (u8)r_eax);
    /* 0068f716: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0068f71a: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0068f71f: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 0068f722: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0068f726: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0068f72a: mov byte ptr [esp + 0xc], 1 */ W8((u32)(r_esp+0xcu), 0x1u);
    /* 0068f72f: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0068f734: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0068f738: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 0068f73c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068f73f: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x68f744u); f_00800518();
    /* 0068f744: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f747: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f748: ret 0xc */ FN_RET(0x0068f6e0); r_esp += 16; return;
}

void f_0068f74c(void) /* sub_68F74C */
{
    FN_ENTER(0x0068f74c);
    /* 0068f74c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f74d: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f750: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0068f754: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068f756: mov byte ptr [esp + 4], 0xbe */ W8((u32)(r_esp+0x4u), 0xbeu);
    /* 0068f75b: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0068f760: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0068f765: mov byte ptr [esp + 5], 7 */ W8((u32)(r_esp+0x5u), 0x7u);
    /* 0068f76a: mov byte ptr [esp + 0x1c], dl */ W8((u32)(r_esp+0x1cu), (u8)r_edx);
    /* 0068f76e: mov byte ptr [esp + 0x1d], dl */ W8((u32)(r_esp+0x1du), (u8)r_edx);
    /* 0068f772: mov byte ptr [esp + 0x1e], dl */ W8((u32)(r_esp+0x1eu), (u8)r_edx);
    /* 0068f776: mov byte ptr [esp + 0x1f], dl */ W8((u32)(r_esp+0x1fu), (u8)r_edx);
    /* 0068f77a: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0068f77c: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068f780: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0068f784: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0068f787: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f78b: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0068f78e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068f792: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0068f795: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068f799: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0068f79c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0068f7a0: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0068f7a3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0068f7a7: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0068f7aa: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0068f7ae: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x68f7b3u); f_0061cdb0();
    /* 0068f7b3: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068f7b8: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x68f7bdu); f_0068d5ac();
    /* 0068f7bd: mov edi, eax */ r_edi = r_eax;
    /* 0068f7bf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f7c1: je 0x68f7ea */ if (fZ) goto L_0068f7ea;
L_0068f7c3:; BB(0x0068f7c3);
    /* 0068f7c3: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f7c5: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x68f7cau); f_0068fb8c();
    /* 0068f7ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f7cc: je 0x68f7d3 */ if (fZ) goto L_0068f7d3;
L_0068f7ce:; BB(0x0068f7ce);
    /* 0068f7ce: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f7d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f7d2: ret  */ FN_RET(0x0068f74c); r_esp += 4; return;
L_0068f7d3:; BB(0x0068f7d3);
    /* 0068f7d3: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0068f7d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7d8: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x68f7ddu); f_005c3a80();
    /* 0068f7dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f7de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f7e0: je 0x68f7ea */ if (fZ) goto L_0068f7ea;
L_0068f7e2:; BB(0x0068f7e2);
    /* 0068f7e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7e3: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f7e5: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x68f7eau); f_00687904();
L_0068f7ea:; BB(0x0068f7ea);
    /* 0068f7ea: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f7ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f7ee: ret  */ FN_RET(0x0068f74c); r_esp += 4; return;
}

void f_0068f7f0(void) /* sub_68F7F0 */
{
    FN_ENTER(0x0068f7f0);
    /* 0068f7f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7f3: mov edi, ecx */ r_edi = r_ecx;
    /* 0068f7f5: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0068f7f9: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 0068f7fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f7fd: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x68f802u); f_005c3a80();
    /* 0068f802: mov ebx, eax */ r_ebx = r_eax;
    /* 0068f804: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f807: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f809: je 0x68f839 */ if (fZ) goto L_0068f839;
L_0068f80b:; BB(0x0068f80b);
    /* 0068f80b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f80c: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f80e: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x68f813u); f_00687904();
    /* 0068f813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f815: je 0x68f839 */ if (fZ) goto L_0068f839;
L_0068f817:; BB(0x0068f817);
    /* 0068f817: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0068f81a: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f81d: je 0x68f839 */ if (fZ) goto L_0068f839;
L_0068f81f:; BB(0x0068f81f);
    /* 0068f81f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f821: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f823: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f826u); call_ind(t); }
    /* 0068f826: lea ecx, [edi + 0xdf8] */ r_ecx = (u32)(r_edi+0xdf8u);
    /* 0068f82c: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068f82f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f830: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68f835u); f_0069792c();
    /* 0068f835: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f837: je 0x68f83f */ if (fZ) goto L_0068f83f;
L_0068f839:; BB(0x0068f839);
    /* 0068f839: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f83a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f83b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f83c: ret 4 */ FN_RET(0x0068f7f0); r_esp += 8; return;
L_0068f83f:; BB(0x0068f83f);
    /* 0068f83f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f841: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f843: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f846u); call_ind(t); }
    /* 0068f846: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0068f849: mov dword ptr [edi + edx*4 + 0xdf8], ebx */ W32((u32)(r_edi+r_edx*4+0xdf8u), r_ebx);
    /* 0068f850: mov esi, dword ptr [edi + 0x33c] */ r_esi = R32((u32)(r_edi+0x33cu));
    /* 0068f856: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f858: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0068f85e: mov dword ptr [edi + 0x33c], esi */ W32((u32)(r_edi+0x33cu), r_esi);
    /* 0068f864: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f866: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x68f869u); call_ind(t); }
    /* 0068f869: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0068f86f: and eax, 0xfffdffff */ {  u32 a = r_eax; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068f874: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 0068f87a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f87b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068f87c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f87d: ret 4 */ FN_RET(0x0068f7f0); r_esp += 8; return;
}

void f_0068f880(void) /* sub_68F880 */
{
    FN_ENTER(0x0068f880);
    /* 0068f880: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f881: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068f882: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f883: sub esp, 0x35c */ {  u32 a = r_esp; u32 b = 0x35cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068f889: mov edi, ecx */ r_edi = r_ecx;
    /* 0068f88b: mov eax, dword ptr [edi + 0xdf4] */ r_eax = R32((u32)(r_edi+0xdf4u));
    /* 0068f891: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f893: je 0x68f9d8 */ if (fZ) goto L_0068f9d8;
L_0068f899:; BB(0x0068f899);
    /* 0068f899: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0068f8a1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0068f8a3:; BB(0x0068f8a3);
    /* 0068f8a3: mov byte ptr [esp + ebx + 0x15], 0xff */ W8((u32)(r_esp+r_ebx+0x15u), 0xffu);
    /* 0068f8a8: lea ecx, [esp + ebx + 0x1c] */ r_ecx = (u32)(r_esp+r_ebx+0x1cu);
    /* 0068f8ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f8ae: mov byte ptr [esp + ebx + 0x14], al */ W8((u32)(r_esp+r_ebx+0x14u), (u8)r_eax);
    /* 0068f8b2: mov dword ptr [esp + ebx + 0x18], eax */ W32((u32)(r_esp+r_ebx+0x18u), r_eax);
    /* 0068f8b6: mov byte ptr [esp + ebx + 0x17], al */ W8((u32)(r_esp+r_ebx+0x17u), (u8)r_eax);
    /* 0068f8ba: mov byte ptr [esp + ebx + 0x16], al */ W8((u32)(r_esp+r_ebx+0x16u), (u8)r_eax);
    /* 0068f8be: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68f8c3u); f_005d6a3c();
    /* 0068f8c3: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0068f8c6: cmp ebx, 0x348 */ {  u32 a = r_ebx; u32 b = 0x348u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068f8cc: jl 0x68f8a3 */ if ((fS!=fO)) goto L_0068f8a3;
L_0068f8ce:; BB(0x0068f8ce);
    /* 0068f8ce: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0068f8d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068f8d3: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f8d5: call 0x68fa2c */ r_esp -= 4; W32(r_esp, 0x68f8dau); f_0068fa2c();
    /* 0068f8da: mov ecx, dword ptr [edi + 0xdf4] */ r_ecx = R32((u32)(r_edi+0xdf4u));
    /* 0068f8e0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0068f8e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068f8e5: call 0x6a4f94 */ r_esp -= 4; W32(r_esp, 0x68f8eau); f_006a4f94();
    /* 0068f8ea: mov edx, dword ptr [edi + 0xdf4] */ r_edx = R32((u32)(r_edi+0xdf4u));
    /* 0068f8f0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0068f8f4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0068f8f9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0068f8fd: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f8ff: mov dword ptr [edi + 0xdf4], 0 */ W32((u32)(r_edi+0xdf4u), 0x0u);
    /* 0068f909: call 0x68600c */ r_esp -= 4; W32(r_esp, 0x68f90eu); f_0068600c();
    /* 0068f90e: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0068f912: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0068f916: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0068f91a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f91c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068f91e: jle 0x68f94c */ if ((fZ||fS!=fO)) goto L_0068f94c;
L_0068f920:; BB(0x0068f920);
    /* 0068f920: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0068f923: mov edi, edx */ r_edi = r_edx;
    /* 0068f925: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0068f929: mov esi, ebx */ r_esi = r_ebx;
    /* 0068f92b: mov ebx, eax */ r_ebx = r_eax;
L_0068f92d:; BB(0x0068f92d);
    /* 0068f92d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f92e: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x68f933u); f_005e3aac();
    /* 0068f933: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068f934: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0068f937: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068f93a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f93d: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068f93f: jl 0x68f92d */ if ((fS!=fO)) goto L_0068f92d;
L_0068f941:; BB(0x0068f941);
    /* 0068f941: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0068f944: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0068f948: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_0068f94c:; BB(0x0068f94c);
    /* 0068f94c: lea ebp, [esp + 0x14] */ r_ebp = (u32)(r_esp+0x14u);
    /* 0068f950: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f952: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f954: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x68f959u); f_00687d30();
    /* 0068f959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068f95b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0068f95d: jle 0x68f9c6 */ if ((fZ||fS!=fO)) goto L_0068f9c6;
L_0068f95f:; BB(0x0068f95f);
    /* 0068f95f: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0068f963: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0068f966: mov edi, ebp */ r_edi = r_ebp;
    /* 0068f968: mov ebp, eax */ r_ebp = r_eax;
L_0068f96a:; BB(0x0068f96a);
    /* 0068f96a: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 0068f96d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f96e: call 0x5c3a80 */ r_esp -= 4; W32(r_esp, 0x68f973u); f_005c3a80();
    /* 0068f973: mov ebx, eax */ r_ebx = r_eax;
    /* 0068f975: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0068f978: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f97a: je 0x68f9b5 */ if (fZ) goto L_0068f9b5;
L_0068f97c:; BB(0x0068f97c);
    /* 0068f97c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f97d: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0068f981: call 0x687904 */ r_esp -= 4; W32(r_esp, 0x68f986u); f_00687904();
    /* 0068f986: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f988: je 0x68f9b5 */ if (fZ) goto L_0068f9b5;
L_0068f98a:; BB(0x0068f98a);
    /* 0068f98a: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0068f98d: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068f990: je 0x68f9b5 */ if (fZ) goto L_0068f9b5;
L_0068f992:; BB(0x0068f992);
    /* 0068f992: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f994: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f996: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f999u); call_ind(t); }
    /* 0068f999: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f99d: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0068f9a0: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 0068f9a6: mov edx, eax */ r_edx = r_eax;
    /* 0068f9a8: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0068f9ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068f9ac: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x68f9b1u); f_0069792c();
    /* 0068f9b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f9b3: je 0x68f9e2 */ if (fZ) goto L_0068f9e2;
L_0068f9b5:; BB(0x0068f9b5);
    /* 0068f9b5: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0068f9b9: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0068f9bc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0068f9bf: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0068f9c1: jl 0x68f96a */ if ((fS!=fO)) goto L_0068f96a;
L_0068f9c3:; BB(0x0068f9c3);
    /* 0068f9c3: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0068f9c6:; BB(0x0068f9c6);
    /* 0068f9c6: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x68f9cbu); f_00807d60();
    /* 0068f9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068f9cd: jne 0x68f9d8 */ if (!fZ) goto L_0068f9d8;
L_0068f9cf:; BB(0x0068f9cf);
    /* 0068f9cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0068f9d1: mov ecx, edi */ r_ecx = r_edi;
    /* 0068f9d3: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x68f9d8u); f_00687d30();
L_0068f9d8:; BB(0x0068f9d8);
    /* 0068f9d8: add esp, 0x35c */ {  u32 a = r_esp; u32 b = 0x35cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068f9de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068f9df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068f9e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068f9e1: ret  */ FN_RET(0x0068f880); r_esp += 4; return;
L_0068f9e2:; BB(0x0068f9e2);
    /* 0068f9e2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068f9e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068f9e6: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x68f9e9u); call_ind(t); }
    /* 0068f9e9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0068f9ed: mov edx, eax */ r_edx = r_eax;
    /* 0068f9ef: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0068f9f2: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 0068f9f5: mov dword ptr [eax + edx*4 + 0xdf8], ebx */ W32((u32)(r_eax+r_edx*4+0xdf8u), r_ebx);
    /* 0068f9fc: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 0068fa02: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0068fa08: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
    /* 0068fa0e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0068fa10: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068fa12: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x68fa15u); call_ind(t); }
    /* 0068fa15: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0068fa18: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 0068fa1e: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0068fa24: mov dword ptr [ecx + 0x33c], edx */ W32((u32)(r_ecx+0x33cu), r_edx);
    /* 0068fa2a: jmp 0x68f9b5 */ goto L_0068f9b5;
}

void f_0068fa2c(void) /* sub_68FA2C */
{
    FN_ENTER(0x0068fa2c);
    /* 0068fa2c: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 0068fa32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fa34: je 0x68fa42 */ if (fZ) goto L_0068fa42;
L_0068fa36:; BB(0x0068fa36);
    /* 0068fa36: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068fa3a: call 0x6a5340 */ r_esp -= 4; W32(r_esp, 0x68fa3fu); f_006a5340();
    /* 0068fa3f: ret 4 */ FN_RET(0x0068fa2c); r_esp += 8; return;
L_0068fa42:; BB(0x0068fa42);
    /* 0068fa42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fa44: ret 4 */ FN_RET(0x0068fa2c); r_esp += 8; return;
}

void f_0068fa48(void) /* sub_68FA48 */
{
    FN_ENTER(0x0068fa48);
    /* 0068fa48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa49: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fa4c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068fa4e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068fa51: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68fa56u); f_005d6a3c();
    /* 0068fa56: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0068fa5b: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 0068fa60: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0068fa66: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 0068fa69: movzx eax, byte ptr [esp + 0x24] */ r_eax = (u32)R8((u32)(r_esp+0x24u));
    /* 0068fa6e: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0068fa72: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 0068fa76: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068fa79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fa7a: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x68fa7fu); f_006a4e50();
    /* 0068fa7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fa81: je 0x68fa9b */ if (fZ) goto L_0068fa9b;
L_0068fa83:; BB(0x0068fa83);
    /* 0068fa83: mov ecx, eax */ r_ecx = r_eax;
    /* 0068fa85: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68fa8au); f_006a60dc();
    /* 0068fa8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fa8c: je 0x68fa9b */ if (fZ) goto L_0068fa9b;
L_0068fa8e:; BB(0x0068fa8e);
    /* 0068fa8e: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 0068fa94: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068fa97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068fa98: ret 0xc */ FN_RET(0x0068fa48); r_esp += 16; return;
L_0068fa9b:; BB(0x0068fa9b);
    /* 0068fa9b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0068faa0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068faa3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068faa4: ret 0xc */ FN_RET(0x0068fa48); r_esp += 16; return;
}

void f_0068faa8(void) /* sub_68FAA8 */
{
    FN_ENTER(0x0068faa8);
    /* 0068faa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068faa9: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068faac: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068faae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068fab1: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68fab6u); f_005d6a3c();
    /* 0068fab6: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0068fabb: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 0068fac0: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0068fac6: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 0068fac9: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0068facd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068fad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fad1: call 0x6a4a28 */ r_esp -= 4; W32(r_esp, 0x68fad6u); f_006a4a28();
    /* 0068fad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fad8: je 0x68faf2 */ if (fZ) goto L_0068faf2;
L_0068fada:; BB(0x0068fada);
    /* 0068fada: mov ecx, eax */ r_ecx = r_eax;
    /* 0068fadc: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68fae1u); f_006a60dc();
    /* 0068fae1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fae3: je 0x68faf2 */ if (fZ) goto L_0068faf2;
L_0068fae5:; BB(0x0068fae5);
    /* 0068fae5: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 0068faeb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068faee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068faef: ret 8 */ FN_RET(0x0068faa8); r_esp += 12; return;
L_0068faf2:; BB(0x0068faf2);
    /* 0068faf2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0068faf7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068fafa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068fafb: ret 8 */ FN_RET(0x0068faa8); r_esp += 12; return;
}

void f_0068fb00(void) /* sub_68FB00 */
{
    FN_ENTER(0x0068fb00);
    /* 0068fb00: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0068fb06: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068fb08: jne 0x68fb37 */ if (!fZ) goto L_0068fb37;
L_0068fb0a:; BB(0x0068fb0a);
    /* 0068fb0a: mov edx, dword ptr [ecx + 0x328] */ r_edx = R32((u32)(r_ecx+0x328u));
    /* 0068fb10: test edx, 0x43001e */ {  u32 a = r_edx; u32 b = 0x43001eu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fb16: je 0x68fb37 */ if (fZ) goto L_0068fb37;
L_0068fb18:; BB(0x0068fb18);
    /* 0068fb18: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0068fb1b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068fb1e: jne 0x68fb37 */ if (!fZ) goto L_0068fb37;
L_0068fb20:; BB(0x0068fb20);
    /* 0068fb20: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0068fb22: je 0x68fb2b */ if (fZ) goto L_0068fb2b;
L_0068fb24:; BB(0x0068fb24);
    /* 0068fb24: mov eax, 1 */ r_eax = 0x1u;
    /* 0068fb29: jmp 0x68fb2d */ goto L_0068fb2d;
L_0068fb2b:; BB(0x0068fb2b);
    /* 0068fb2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0068fb2d:; BB(0x0068fb2d);
    /* 0068fb2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fb2f: jne 0x68fb37 */ if (!fZ) goto L_0068fb37;
L_0068fb31:; BB(0x0068fb31);
    /* 0068fb31: mov eax, 1 */ r_eax = 0x1u;
    /* 0068fb36: ret  */ FN_RET(0x0068fb00); r_esp += 4; return;
L_0068fb37:; BB(0x0068fb37);
    /* 0068fb37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fb39: ret  */ FN_RET(0x0068fb00); r_esp += 4; return;
}

void f_0068fb3c(void) /* sub_68FB3C */
{
    FN_ENTER(0x0068fb3c);
    /* 0068fb3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb3d: movsx ebx, word ptr [ecx + 0x32c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0068fb44: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068fb47: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0068fb4b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0068fb4f: jne 0x68fb6c */ if (!fZ) goto L_0068fb6c;
L_0068fb51:; BB(0x0068fb51);
    /* 0068fb51: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068fb54: je 0x68fb6c */ if (fZ) goto L_0068fb6c;
L_0068fb56:; BB(0x0068fb56);
    /* 0068fb56: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068fb59: je 0x68fb6c */ if (fZ) goto L_0068fb6c;
L_0068fb5b:; BB(0x0068fb5b);
    /* 0068fb5b: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 0068fb61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fb63: je 0x68fb6c */ if (fZ) goto L_0068fb6c;
L_0068fb65:; BB(0x0068fb65);
    /* 0068fb65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb67: call 0x6a6a08 */ r_esp -= 4; W32(r_esp, 0x68fb6cu); f_006a6a08();
L_0068fb6c:; BB(0x0068fb6c);
    /* 0068fb6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068fb6d: ret 8 */ FN_RET(0x0068fb3c); r_esp += 12; return;
}

void f_0068fb70(void) /* sub_68FB70 */
{
    FN_ENTER(0x0068fb70);
    /* 0068fb70: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0068fb77: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0068fb7a: jne 0x68fb8b */ if (!fZ) goto L_0068fb8b;
L_0068fb7c:; BB(0x0068fb7c);
    /* 0068fb7c: mov ecx, dword ptr [ecx + 0xdf4] */ r_ecx = R32((u32)(r_ecx+0xdf4u));
    /* 0068fb82: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fb84: je 0x68fb8b */ if (fZ) goto L_0068fb8b;
L_0068fb86:; BB(0x0068fb86);
    /* 0068fb86: call 0x6a60f4 */ r_esp -= 4; W32(r_esp, 0x68fb8bu); f_006a60f4();
L_0068fb8b:; BB(0x0068fb8b);
    /* 0068fb8b: ret  */ FN_RET(0x0068fb70); r_esp += 4; return;
}

void f_0068fb8c(void) /* sub_68FB8C */
{
    FN_ENTER(0x0068fb8c);
    /* 0068fb8c: push dword ptr [ecx + 0x3ec] */ { u32 v = R32((u32)(r_ecx+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0068fb92: call 0x8076d4 */ r_esp -= 4; W32(r_esp, 0x68fb97u); f_008076d4();
    /* 0068fb97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0068fb98: ret  */ FN_RET(0x0068fb8c); r_esp += 4; return;
}

void f_0068fb9c(void) /* sub_68FB9C */
{
    FN_ENTER(0x0068fb9c);
    /* 0068fb9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fb9d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fba0: mov esi, ecx */ r_esi = r_ecx;
    /* 0068fba2: mov eax, dword ptr [esi + 0xdf4] */ r_eax = R32((u32)(r_esi+0xdf4u));
    /* 0068fba8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fbaa: jne 0x68fbb5 */ if (!fZ) goto L_0068fbb5;
L_0068fbac:; BB(0x0068fbac);
    /* 0068fbac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068fbae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068fbb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068fbb2: ret 0x10 */ FN_RET(0x0068fb9c); r_esp += 20; return;
L_0068fbb5:; BB(0x0068fbb5);
    /* 0068fbb5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068fbb8: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x68fbbdu); f_005d6a3c();
    /* 0068fbbd: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 0068fbc2: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 0068fbc7: mov ecx, dword ptr [esi + 0xdf4] */ r_ecx = R32((u32)(r_esi+0xdf4u));
    /* 0068fbcd: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 0068fbd0: movzx eax, byte ptr [esp + 0x24] */ r_eax = (u32)R8((u32)(r_esp+0x24u));
    /* 0068fbd5: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 0068fbd9: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 0068fbdd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0068fbe0: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0068fbe4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fbe5: call 0x6a4b74 */ r_esp -= 4; W32(r_esp, 0x68fbeau); f_006a4b74();
    /* 0068fbea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068fbed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068fbee: ret 0x10 */ FN_RET(0x0068fb9c); r_esp += 20; return;
}

void f_0068fbf4(void) /* sub_68FBF4 */
{
    FN_ENTER(0x0068fbf4);
    /* 0068fbf4: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068fbfa: mov byte ptr [esp + 8], 0xc4 */ W8((u32)(r_esp+0x8u), 0xc4u);
    /* 0068fbff: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0068fc04: mov byte ptr [esp + 9], 0x1f */ W8((u32)(r_esp+0x9u), 0x1fu);
    /* 0068fc09: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0068fc0e: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0068fc13: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068fc17: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0068fc1b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0068fc1f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0068fc23: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0068fc27: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0068fc2b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0068fc2f: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0068fc33: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0068fc37: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0068fc3b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0068fc3f: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0068fc43: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0068fc47: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0068fc4b: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0068fc4f: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0068fc53: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0068fc57: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0068fc5b: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0068fc5f: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 0068fc63: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0068fc67: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0068fc6b: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0068fc6f: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0068fc73: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 0068fc77: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0068fc7b: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0068fc7f: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0068fc83: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 0068fc87: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0068fc8e: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0068fc92: mov edx, dword ptr [ecx + 0xdf4] */ r_edx = R32((u32)(r_ecx+0xdf4u));
    /* 0068fc98: mov edx, dword ptr [edx + 0x1c4] */ r_edx = R32((u32)(r_edx+0x1c4u));
    /* 0068fc9e: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0068fca1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fca3: je 0x68fd02 */ if (fZ) goto L_0068fd02;
L_0068fca5:; BB(0x0068fca5);
    /* 0068fca5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0068fca9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068fcab: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0068fcae: mov esi, eax */ r_esi = r_eax;
L_0068fcb0:; BB(0x0068fcb0);
    /* 0068fcb0: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0068fcb3: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fcb9: jne 0x68fcd1 */ if (!fZ) goto L_0068fcd1;
L_0068fcbb:; BB(0x0068fcbb);
    /* 0068fcbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068fcbd: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x68fcc2u); f_008173b4();
    /* 0068fcc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fcc4: je 0x68fccd */ if (fZ) goto L_0068fccd;
L_0068fcc6:; BB(0x0068fcc6);
    /* 0068fcc6: mov edx, 1 */ r_edx = 0x1u;
    /* 0068fccb: jmp 0x68fcd3 */ goto L_0068fcd3;
L_0068fccd:; BB(0x0068fccd);
    /* 0068fccd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068fccf: jmp 0x68fcd3 */ goto L_0068fcd3;
L_0068fcd1:; BB(0x0068fcd1);
    /* 0068fcd1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0068fcd3:; BB(0x0068fcd3);
    /* 0068fcd3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fcd5: je 0x68fcf4 */ if (fZ) goto L_0068fcf4;
L_0068fcd7:; BB(0x0068fcd7);
    /* 0068fcd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068fcd9: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x68fcdeu); f_006a60dc();
    /* 0068fcde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fce0: je 0x68fcf4 */ if (fZ) goto L_0068fcf4;
L_0068fce2:; BB(0x0068fce2);
    /* 0068fce2: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 0068fce8: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fceb: je 0x68fcf4 */ if (fZ) goto L_0068fcf4;
L_0068fced:; BB(0x0068fced);
    /* 0068fced: mov eax, esi */ r_eax = r_esi;
    /* 0068fcef: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0068fcf2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_0068fcf4:; BB(0x0068fcf4);
    /* 0068fcf4: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 0068fcf7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fcf9: jne 0x68fcb0 */ if (!fZ) goto L_0068fcb0;
L_0068fcfb:; BB(0x0068fcfb);
    /* 0068fcfb: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0068fcff: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0068fd02:; BB(0x0068fd02);
    /* 0068fd02: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0068fd06: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68fd0bu); f_008003e0();
    /* 0068fd0b: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068fd11: ret  */ FN_RET(0x0068fbf4); r_esp += 4; return;
}

void f_0068fd14(void) /* sub_68FD14 */
{
    FN_ENTER(0x0068fd14);
    /* 0068fd14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd17: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0068fd19: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd1b: movzx esi, word ptr [ebp + 0x390] */ r_esi = (u32)R16((u32)(r_ebp+0x390u));
    /* 0068fd22: lea edi, [ebp + 0x394] */ r_edi = (u32)(r_ebp+0x394u);
    /* 0068fd28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd29: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fd2b: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68fd30u); f_006a350c();
    /* 0068fd30: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd33: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fd35: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68fd3au); f_006a350c();
    /* 0068fd3a: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd3d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fd3f: call 0x6a350c */ r_esp -= 4; W32(r_esp, 0x68fd44u); f_006a350c();
    /* 0068fd44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0068fd46: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x68fd4bu); f_006877b0();
    /* 0068fd4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fd4d: je 0x68fd64 */ if (fZ) goto L_0068fd64;
L_0068fd4f:; BB(0x0068fd4f);
    /* 0068fd4f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0068fd52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0068fd54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd57: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd5c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x68fd61u); f_00814298();
    /* 0068fd61: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0068fd64:; BB(0x0068fd64);
    /* 0068fd64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0068fd65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068fd66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fd67: ret  */ FN_RET(0x0068fd14); r_esp += 4; return;
}

void f_0068fd68(void) /* sub_68FD68 */
{
    FN_ENTER(0x0068fd68);
    /* 0068fd68: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0068fd6c: call 0x68fd74 */ r_esp -= 4; W32(r_esp, 0x68fd71u); f_0068fd74();
    /* 0068fd71: ret  */ FN_RET(0x0068fd68); r_esp += 4; return;
}

void f_0068fd74(void) /* sub_68FD74 */
{
    FN_ENTER(0x0068fd74);
    /* 0068fd74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fd75: mov esi, ecx */ r_esi = r_ecx;
    /* 0068fd77: mov ecx, esi */ r_ecx = r_esi;
    /* 0068fd79: call 0x68fda4 */ r_esp -= 4; W32(r_esp, 0x68fd7eu); f_0068fda4();
    /* 0068fd7e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0068fd80: mov ecx, esi */ r_ecx = r_esi;
    /* 0068fd82: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x68fd88u); call_ind(t); }
    /* 0068fd88: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0068fd8b: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 0068fd91: and eax, 0xfffff1ff */ {  u32 a = r_eax; u32 b = 0xfffff1ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068fd96: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0068fd99: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fd9c: mov dword ptr [esi + 0x33c], edx */ W32((u32)(r_esi+0x33cu), r_edx);
    /* 0068fda2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0068fda3: ret  */ FN_RET(0x0068fd74); r_esp += 4; return;
}

void f_0068fda4(void) /* sub_68FDA4 */
{
    FN_ENTER(0x0068fda4);
    /* 0068fda4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fda5: mov edi, ecx */ r_edi = r_ecx;
    /* 0068fda7: movsx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 0068fdae: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fdb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fdb1: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x68fdb6u); f_00770b58();
    /* 0068fdb6: movzx eax, word ptr [edi + 0x2be] */ r_eax = (u32)R16((u32)(r_edi+0x2beu));
    /* 0068fdbd: mov word ptr [edi + 0x336], ax */ W16((u32)(r_edi+0x336u), (u16)r_eax);
    /* 0068fdc4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fdc5: ret  */ FN_RET(0x0068fda4); r_esp += 4; return;
}

void f_0068fdc8(void) /* sub_68FDC8 */
{
    FN_ENTER(0x0068fdc8);
    /* 0068fdc8: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0068fdcb: and eax, 0xfffff7ff */ {  u32 a = r_eax; u32 b = 0xfffff7ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0068fdd0: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0068fdd3: call 0x68fddc */ r_esp -= 4; W32(r_esp, 0x68fdd8u); f_0068fddc();
    /* 0068fdd8: ret  */ FN_RET(0x0068fdc8); r_esp += 4; return;
}

void f_0068fddc(void) /* sub_68FDDC */
{
    FN_ENTER(0x0068fddc);
    /* 0068fddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068fddd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068fddf: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 0068fde4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fde7: je 0x68fe09 */ if (fZ) goto L_0068fe09;
L_0068fde9:; BB(0x0068fde9);
    /* 0068fde9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068fdeb: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68fdf0u); f_0068a3fc();
    /* 0068fdf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fdf2: je 0x68fe09 */ if (fZ) goto L_0068fe09;
L_0068fdf4:; BB(0x0068fdf4);
    /* 0068fdf4: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x68fdf9u); f_00687c48();
    /* 0068fdf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fdfb: jne 0x68fe09 */ if (!fZ) goto L_0068fe09;
L_0068fdfd:; BB(0x0068fdfd);
    /* 0068fdfd: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 0068fe04: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fe07: jne 0x68fe28 */ if (!fZ) goto L_0068fe28;
L_0068fe09:; BB(0x0068fe09);
    /* 0068fe09: movsx eax, word ptr [ebx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0068fe10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe11: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068fe13: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x68fe18u); f_00770b58();
    /* 0068fe18: movzx eax, word ptr [ebx + 0x2be] */ r_eax = (u32)R16((u32)(r_ebx+0x2beu));
    /* 0068fe1f: mov word ptr [ebx + 0x336], ax */ W16((u32)(r_ebx+0x336u), (u16)r_eax);
    /* 0068fe26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068fe27: ret  */ FN_RET(0x0068fddc); r_esp += 4; return;
L_0068fe28:; BB(0x0068fe28);
    /* 0068fe28: movsx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2bcu));
    /* 0068fe2f: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 0068fe31: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0068fe34: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0068fe36: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0068fe38: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0068fe3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068fe3e: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x68fe43u); f_00770b58();
    /* 0068fe43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068fe44: ret  */ FN_RET(0x0068fddc); r_esp += 4; return;
}

void f_0068fe48(void) /* sub_68FE48 */
{
    FN_ENTER(0x0068fe48);
    /* 0068fe48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe49: mov edi, ecx */ r_edi = r_ecx;
    /* 0068fe4b: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe4d: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68fe52u); f_0068a3fc();
    /* 0068fe52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fe54: je 0x68fe61 */ if (fZ) goto L_0068fe61;
L_0068fe56:; BB(0x0068fe56);
    /* 0068fe56: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe58: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68fe5du); f_00689b44();
    /* 0068fe5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fe5f: je 0x68fe65 */ if (fZ) goto L_0068fe65;
L_0068fe61:; BB(0x0068fe61);
    /* 0068fe61: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fe63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fe64: ret  */ FN_RET(0x0068fe48); r_esp += 4; return;
L_0068fe65:; BB(0x0068fe65);
    /* 0068fe65: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe67: call 0x777bc8 */ r_esp -= 4; W32(r_esp, 0x68fe6cu); f_00777bc8();
    /* 0068fe6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fe6d: ret  */ FN_RET(0x0068fe48); r_esp += 4; return;
}

void f_0068fe70(void) /* sub_68FE70 */
{
    FN_ENTER(0x0068fe70);
    /* 0068fe70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe71: mov edi, ecx */ r_edi = r_ecx;
    /* 0068fe73: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe75: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68fe7au); f_0068a3fc();
    /* 0068fe7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fe7c: je 0x68fe89 */ if (fZ) goto L_0068fe89;
L_0068fe7e:; BB(0x0068fe7e);
    /* 0068fe7e: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe80: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68fe85u); f_00689b44();
    /* 0068fe85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fe87: je 0x68fe8d */ if (fZ) goto L_0068fe8d;
L_0068fe89:; BB(0x0068fe89);
    /* 0068fe89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fe8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fe8c: ret  */ FN_RET(0x0068fe70); r_esp += 4; return;
L_0068fe8d:; BB(0x0068fe8d);
    /* 0068fe8d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe8f: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x68fe94u); f_00777d10();
    /* 0068fe94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fe95: ret  */ FN_RET(0x0068fe70); r_esp += 4; return;
}

void f_0068fe98(void) /* sub_68FE98 */
{
    FN_ENTER(0x0068fe98);
    /* 0068fe98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fe99: mov edi, ecx */ r_edi = r_ecx;
    /* 0068fe9b: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fe9d: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68fea2u); f_0068a3fc();
    /* 0068fea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fea4: je 0x68feb1 */ if (fZ) goto L_0068feb1;
L_0068fea6:; BB(0x0068fea6);
    /* 0068fea6: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fea8: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68feadu); f_00689b44();
    /* 0068fead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068feaf: je 0x68feb5 */ if (fZ) goto L_0068feb5;
L_0068feb1:; BB(0x0068feb1);
    /* 0068feb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068feb3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068feb4: ret  */ FN_RET(0x0068fe98); r_esp += 4; return;
L_0068feb5:; BB(0x0068feb5);
    /* 0068feb5: mov ecx, edi */ r_ecx = r_edi;
    /* 0068feb7: call 0x777f00 */ r_esp -= 4; W32(r_esp, 0x68febcu); f_00777f00();
    /* 0068febc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068febd: ret  */ FN_RET(0x0068fe98); r_esp += 4; return;
}

void f_0068fec0(void) /* sub_68FEC0 */
{
    FN_ENTER(0x0068fec0);
    /* 0068fec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fec1: mov edi, ecx */ r_edi = r_ecx;
    /* 0068fec3: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fec5: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68fecau); f_0068a3fc();
    /* 0068feca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fecc: je 0x68fed9 */ if (fZ) goto L_0068fed9;
L_0068fece:; BB(0x0068fece);
    /* 0068fece: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fed0: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68fed5u); f_00689b44();
    /* 0068fed5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fed7: je 0x68fedd */ if (fZ) goto L_0068fedd;
L_0068fed9:; BB(0x0068fed9);
    /* 0068fed9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068fedb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fedc: ret  */ FN_RET(0x0068fec0); r_esp += 4; return;
L_0068fedd:; BB(0x0068fedd);
    /* 0068fedd: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fedf: call 0x777fd4 */ r_esp -= 4; W32(r_esp, 0x68fee4u); f_00777fd4();
    /* 0068fee4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068fee5: ret  */ FN_RET(0x0068fec0); r_esp += 4; return;
}

void f_0068fee8(void) /* sub_68FEE8 */
{
    FN_ENTER(0x0068fee8);
    /* 0068fee8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068fee9: mov edi, ecx */ r_edi = r_ecx;
    /* 0068feeb: mov ecx, edi */ r_ecx = r_edi;
    /* 0068feed: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68fef2u); f_0068a3fc();
    /* 0068fef2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fef4: je 0x68ff01 */ if (fZ) goto L_0068ff01;
L_0068fef6:; BB(0x0068fef6);
    /* 0068fef6: mov ecx, edi */ r_ecx = r_edi;
    /* 0068fef8: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68fefdu); f_00689b44();
    /* 0068fefd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068feff: je 0x68ff05 */ if (fZ) goto L_0068ff05;
L_0068ff01:; BB(0x0068ff01);
    /* 0068ff01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ff03: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ff04: ret  */ FN_RET(0x0068fee8); r_esp += 4; return;
L_0068ff05:; BB(0x0068ff05);
    /* 0068ff05: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ff07: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x68ff0cu); f_007780a8();
    /* 0068ff0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ff0d: ret  */ FN_RET(0x0068fee8); r_esp += 4; return;
}

void f_0068ff10(void) /* sub_68FF10 */
{
    FN_ENTER(0x0068ff10);
    /* 0068ff10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff11: mov edi, ecx */ r_edi = r_ecx;
    /* 0068ff13: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ff15: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68ff1au); f_0068a3fc();
    /* 0068ff1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff1c: je 0x68ff29 */ if (fZ) goto L_0068ff29;
L_0068ff1e:; BB(0x0068ff1e);
    /* 0068ff1e: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ff20: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x68ff25u); f_00689b44();
    /* 0068ff25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff27: je 0x68ff2d */ if (fZ) goto L_0068ff2d;
L_0068ff29:; BB(0x0068ff29);
    /* 0068ff29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ff2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ff2c: ret  */ FN_RET(0x0068ff10); r_esp += 4; return;
L_0068ff2d:; BB(0x0068ff2d);
    /* 0068ff2d: mov ecx, edi */ r_ecx = r_edi;
    /* 0068ff2f: call 0x77818c */ r_esp -= 4; W32(r_esp, 0x68ff34u); f_0077818c();
    /* 0068ff34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0068ff35: ret  */ FN_RET(0x0068ff10); r_esp += 4; return;
}

void f_0068ff38(void) /* sub_68FF38 */
{
    FN_ENTER(0x0068ff38);
    /* 0068ff38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068ff3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ff3d: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68ff42u); f_0068a3fc();
    /* 0068ff42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff44: jne 0x68ff4a */ if (!fZ) goto L_0068ff4a;
L_0068ff46:; BB(0x0068ff46);
    /* 0068ff46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ff48: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ff49: ret  */ FN_RET(0x0068ff38); r_esp += 4; return;
L_0068ff4a:; BB(0x0068ff4a);
    /* 0068ff4a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ff4c: call 0x7782b4 */ r_esp -= 4; W32(r_esp, 0x68ff51u); f_007782b4();
    /* 0068ff51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ff52: ret  */ FN_RET(0x0068ff38); r_esp += 4; return;
}

void f_0068ff54(void) /* sub_68FF54 */
{
    FN_ENTER(0x0068ff54);
    /* 0068ff54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0068ff55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0068ff57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ff59: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x68ff5eu); f_0068a3fc();
    /* 0068ff5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff60: jne 0x68ff66 */ if (!fZ) goto L_0068ff66;
L_0068ff62:; BB(0x0068ff62);
    /* 0068ff62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0068ff64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ff65: ret  */ FN_RET(0x0068ff54); r_esp += 4; return;
L_0068ff66:; BB(0x0068ff66);
    /* 0068ff66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0068ff68: call 0x778580 */ r_esp -= 4; W32(r_esp, 0x68ff6du); f_00778580();
    /* 0068ff6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0068ff6e: ret  */ FN_RET(0x0068ff54); r_esp += 4; return;
}

void f_0068ff70(void) /* sub_68FF70 */
{
    FN_ENTER(0x0068ff70);
    /* 0068ff70: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ff73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff75: je 0x68ff89 */ if (fZ) goto L_0068ff89;
L_0068ff77:; BB(0x0068ff77);
    /* 0068ff77: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0068ff7e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068ff81: jne 0x68ff89 */ if (!fZ) goto L_0068ff89;
L_0068ff83:; BB(0x0068ff83);
    /* 0068ff83: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ff86: ret 8 */ FN_RET(0x0068ff70); r_esp += 12; return;
L_0068ff89:; BB(0x0068ff89);
    /* 0068ff89: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0068ff8d: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0068ff91: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0068ff95: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0068ff9a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0068ff9e: mov byte ptr [esp], 0xc */ W8((u32)(r_esp), 0xcu);
    /* 0068ffa2: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0068ffa7: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0068ffab: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0068ffae: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x68ffb3u); f_008003e0();
    /* 0068ffb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0068ffb6: ret 8 */ FN_RET(0x0068ff70); r_esp += 12; return;
}

void f_0068ffbc(void) /* sub_68FFBC */
{
    FN_ENTER(0x0068ffbc);
    /* 0068ffbc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0068ffbf: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0068ffc3: mov byte ptr [esp + 4], 0x2e */ W8((u32)(r_esp+0x4u), 0x2eu);
    /* 0068ffc8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0068ffca: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0068ffcf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068ffd3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0068ffd7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0068ffd9: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0068ffdd: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0068ffe0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0068ffe4: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0068ffe8: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0068ffeb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0068ffef: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x68fff4u); f_006a9e70();
    /* 0068fff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0068fff6: je 0x690014 */ if (fZ) goto L_00690014;
L_0068fff8:; BB(0x0068fff8);
    /* 0068fff8: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0068fffd: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x690002u); f_0068d5ac();
    /* 00690002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690004: je 0x690014 */ if (fZ) goto L_00690014;
L_00690006:; BB(0x00690006);
    /* 00690006: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00690009: and edx, dword ptr [esp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069000d: or edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00690011: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
L_00690014:; BB(0x00690014);
    /* 00690014: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00690017: ret  */ FN_RET(0x0068ffbc); r_esp += 4; return;
}

