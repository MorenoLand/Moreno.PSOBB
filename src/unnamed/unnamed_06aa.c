#include "protos.h"

void f_006aa01c(void) /* sub_6AA01C */
{
    FN_ENTER(0x006aa01c);
    /* 006aa01c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa01d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006aa022: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6aa027u); f_006a9f11();
    /* 006aa027: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aa029: je 0x6aa03b */ if (fZ) goto L_006aa03b;
L_006aa02b:; BB(0x006aa02b);
    /* 006aa02b: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006aa030: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006aa034: mov dword ptr [edx*8 + 0xa94804], eax */ W32((u32)(r_edx*8+0xa94804u), r_eax);
L_006aa03b:; BB(0x006aa03b);
    /* 006aa03b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa03c: ret  */ FN_RET(0x006aa01c); r_esp += 4; return;
}

void f_006aa020(void)
{
    FN_ENTER(0x006aa020);
    /* 006aa020: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006aa022: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6aa027u); f_006a9f11();
    /* 006aa027: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aa029: je 0x6aa03b */ if (fZ) goto L_006aa03b;
L_006aa02b:; BB(0x006aa02b);
    /* 006aa02b: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006aa030: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006aa034: mov dword ptr [edx*8 + 0xa94804], eax */ W32((u32)(r_edx*8+0xa94804u), r_eax);
L_006aa03b:; BB(0x006aa03b);
    /* 006aa03b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa03c: ret  */ FN_RET(0x006aa020); r_esp += 4; return;
}

void f_006aa040(void) /* sub_6AA040 */
{
    FN_ENTER(0x006aa040);
    /* 006aa040: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa041: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006aa046: call 0x6a9f11 */ r_esp -= 4; W32(r_esp, 0x6aa04bu); f_006a9f11();
    /* 006aa04b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aa04d: je 0x6aa065 */ if (fZ) goto L_006aa065;
L_006aa04f:; BB(0x006aa04f);
    /* 006aa04f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006aa054: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006aa057: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006aa059: lea ecx, [edx + edx + 0xa94800] */ r_ecx = (u32)(r_edx+r_edx+0xa94800u);
    /* 006aa060: call 0x6aa068 */ r_esp -= 4; W32(r_esp, 0x6aa065u); f_006aa068();
L_006aa065:; BB(0x006aa065);
    /* 006aa065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa066: ret  */ FN_RET(0x006aa040); r_esp += 4; return;
}

void f_006aa068(void) /* sub_6AA068 */
{
    FN_ENTER(0x006aa068);
    /* 006aa068: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aa06b: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6aa070u); f_006bc76c();
    /* 006aa070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa071: ret  */ FN_RET(0x006aa068); r_esp += 4; return;
}

void f_006aa074(void)
{
    FN_ENTER(0x006aa074);
    /* 006aa074: mov dword ptr [0xa947f4], 0x3f800000 */ W32((u32)(0xa947f4u), 0x3f800000u);
    /* 006aa07e: mov dword ptr [0xa947f8], 0x41000000 */ W32((u32)(0xa947f8u), 0x41000000u);
    /* 006aa088: mov dword ptr [0xa947fc], 0x3fc00000 */ W32((u32)(0xa947fcu), 0x3fc00000u);
    /* 006aa092: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa097: push 0x6a9ed4 */ { u32 v = 0x6a9ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa09c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa09e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa0a0: push 0xa94800 */ { u32 v = 0xa94800u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa0a5: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6aa0aau); f_00858736();
    /* 006aa0aa: push 0x6aa0b8 */ { u32 v = 0x6aa0b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa0af: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x6aa0b4u); f_0085909d();
    /* 006aa0b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa0b5: ret  */ FN_RET(0x006aa074); r_esp += 4; return;
}

void f_006aa0cc(void) /* sub_6AA0CC */
{
    FN_ENTER(0x006aa0cc);
    /* 006aa0cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006aa0ce: mov dword ptr [0xa94800], eax */ W32((u32)(0xa94800u), r_eax);
    /* 006aa0d3: mov dword ptr [0xa94804], eax */ W32((u32)(0xa94804u), r_eax);
    /* 006aa0d8: mov dword ptr [0xa94808], eax */ W32((u32)(0xa94808u), r_eax);
    /* 006aa0dd: mov dword ptr [0xa9480c], eax */ W32((u32)(0xa9480cu), r_eax);
    /* 006aa0e2: mov dword ptr [0xa94810], eax */ W32((u32)(0xa94810u), r_eax);
    /* 006aa0e7: mov dword ptr [0xa94814], eax */ W32((u32)(0xa94814u), r_eax);
    /* 006aa0ec: mov dword ptr [0xa94818], eax */ W32((u32)(0xa94818u), r_eax);
    /* 006aa0f1: mov dword ptr [0xa9481c], eax */ W32((u32)(0xa9481cu), r_eax);
    /* 006aa0f6: ret  */ FN_RET(0x006aa0cc); r_esp += 4; return;
}

void f_006aa0f8(void) /* sub_6AA0F8 */
{
    FN_ENTER(0x006aa0f8);
    /* 006aa0f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa0f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa0fa: mov edi, ecx */ r_edi = r_ecx;
    /* 006aa0fc: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006aa100: mov eax, dword ptr [edi + 0x4e8] */ r_eax = R32((u32)(r_edi+0x4e8u));
    /* 006aa106: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006aa109: mov dword ptr [edi + 0x4e8], eax */ W32((u32)(r_edi+0x4e8u), r_eax);
    /* 006aa10f: mov edx, dword ptr [esi + 0x3f4] */ r_edx = R32((u32)(r_esi+0x3f4u));
    /* 006aa115: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006aa117: mov eax, dword ptr [esi + 0xeb0] */ r_eax = R32((u32)(r_esi+0xeb0u));
    /* 006aa11d: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006aa120: mov eax, dword ptr [esi + 0xeb4] */ r_eax = R32((u32)(r_esi+0xeb4u));
    /* 006aa126: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006aa129: mov ecx, esi */ r_ecx = r_esi;
    /* 006aa12b: call 0x694c60 */ r_esp -= 4; W32(r_esp, 0x6aa130u); f_00694c60();
    /* 006aa130: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006aa132: mov dword ptr [edi + 0x4ec], edx */ W32((u32)(r_edi+0x4ecu), r_edx);
    /* 006aa138: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006aa13b: mov dword ptr [edi + 0x4f0], edx */ W32((u32)(r_edi+0x4f0u), r_edx);
    /* 006aa141: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006aa144: mov dword ptr [edi + 0x4f4], eax */ W32((u32)(r_edi+0x4f4u), r_eax);
    /* 006aa14a: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aa14d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa14e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa14f: call 0x6aab4c */ r_esp -= 4; W32(r_esp, 0x6aa154u); f_006aab4c();
    /* 006aa154: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aa157: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aa158: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aa159: ret 4 */ FN_RET(0x006aa0f8); r_esp += 8; return;
}

void f_006aa15c(void) /* sub_6AA15C */
{
    FN_ENTER(0x006aa15c);
    /* 006aa15c: mov dword ptr [0xa94820], 0x3f800000 */ W32((u32)(0xa94820u), 0x3f800000u);
    /* 006aa166: mov dword ptr [0xa94824], 0x41000000 */ W32((u32)(0xa94824u), 0x41000000u);
    /* 006aa170: mov dword ptr [0xa94828], 0x3fc00000 */ W32((u32)(0xa94828u), 0x3fc00000u);
    /* 006aa17a: ret  */ FN_RET(0x006aa15c); r_esp += 4; return;
}

void f_006aa17c(void) /* sub_6AA17C */
{
    FN_ENTER(0x006aa17c);
    /* 006aa17c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa17d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa17e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aa17f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa180: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa181: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006aa183: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa185: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 006aa188: mov byte ptr [ebp + 4], al */ W8((u32)(r_ebp+0x4u), (u8)r_eax);
    /* 006aa18b: mov byte ptr [ebp + 5], al */ W8((u32)(r_ebp+0x5u), (u8)r_eax);
    /* 006aa18e: mov word ptr [ebp + 6], ax */ W16((u32)(r_ebp+0x6u), (u16)r_eax);
    /* 006aa192: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 006aa195: mov dword ptr [ebp + 0x4e8], eax */ W32((u32)(r_ebp+0x4e8u), r_eax);
    /* 006aa19b: lea eax, [ebp + 0x4ec] */ r_eax = (u32)(r_ebp+0x4ecu);
    /* 006aa1a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006aa1a3: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006aa1a5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006aa1a8: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006aa1ab: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006aa1ae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa1b0: mov byte ptr [ebp + 0xf], al */ W8((u32)(r_ebp+0xfu), (u8)r_eax);
    /* 006aa1b3: mov byte ptr [ebp + 0xe], al */ W8((u32)(r_ebp+0xeu), (u8)r_eax);
    /* 006aa1b6: mov byte ptr [ebp + 0xd], al */ W8((u32)(r_ebp+0xdu), (u8)r_eax);
    /* 006aa1b9: mov byte ptr [ebp + 0xc], al */ W8((u32)(r_ebp+0xcu), (u8)r_eax);
    /* 006aa1bc: lea edx, [ebp + 0x10] */ r_edx = (u32)(r_ebp+0x10u);
    /* 006aa1bf: lea ecx, [ebp + 0x18] */ r_ecx = (u32)(r_ebp+0x18u);
    /* 006aa1c2: lea eax, [ebp + 0x358] */ r_eax = (u32)(r_ebp+0x358u);
    /* 006aa1c8: mov ebx, eax */ r_ebx = r_eax;
    /* 006aa1ca: mov esi, edx */ r_esi = r_edx;
    /* 006aa1cc: mov ebp, ecx */ r_ebp = r_ecx;
L_006aa1ce:; BB(0x006aa1ce);
    /* 006aa1ce: mov byte ptr [esi + 1], 0xff */ W8((u32)(r_esi+0x1u), 0xffu);
    /* 006aa1d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa1d4: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006aa1d6: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006aa1d9: mov byte ptr [esi + 3], al */ W8((u32)(r_esi+0x3u), (u8)r_eax);
    /* 006aa1dc: mov byte ptr [esi + 2], al */ W8((u32)(r_esi+0x2u), (u8)r_eax);
    /* 006aa1df: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aa1e1: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6aa1e6u); f_005d6a3c();
    /* 006aa1e6: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aa1e9: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006aa1ec: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006aa1ee: ja 0x6aa1ce */ if ((!fC&&!fZ)) goto L_006aa1ce;
L_006aa1f0:; BB(0x006aa1f0);
    /* 006aa1f0: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006aa1f3: mov dword ptr [ebp + 0x368], 0 */ W32((u32)(r_ebp+0x368u), 0x0u);
    /* 006aa1fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa1ff: mov word ptr [ebp + 0x360], ax */ W16((u32)(r_ebp+0x360u), (u16)r_eax);
    /* 006aa206: mov dword ptr [ebp + 0x36c], 0 */ W32((u32)(r_ebp+0x36cu), 0x0u);
    /* 006aa210: mov word ptr [ebp + 0x35e], ax */ W16((u32)(r_ebp+0x35eu), (u16)r_eax);
    /* 006aa217: mov word ptr [ebp + 0x35c], ax */ W16((u32)(r_ebp+0x35cu), (u16)r_eax);
    /* 006aa21e: mov word ptr [ebp + 0x35a], ax */ W16((u32)(r_ebp+0x35au), (u16)r_eax);
    /* 006aa225: mov dword ptr [ebp + 0x3c8], 0 */ W32((u32)(r_ebp+0x3c8u), 0x0u);
    /* 006aa22f: mov word ptr [ebp + 0x358], ax */ W16((u32)(r_ebp+0x358u), (u16)r_eax);
    /* 006aa236: mov word ptr [ebp + 0x366], ax */ W16((u32)(r_ebp+0x366u), (u16)r_eax);
    /* 006aa23d: mov word ptr [ebp + 0x364], ax */ W16((u32)(r_ebp+0x364u), (u16)r_eax);
    /* 006aa244: mov dword ptr [ebp + 0x3c4], 0 */ W32((u32)(r_ebp+0x3c4u), 0x0u);
    /* 006aa24e: mov word ptr [ebp + 0x362], ax */ W16((u32)(r_ebp+0x362u), (u16)r_eax);
    /* 006aa255: mov dword ptr [ebp + 0x378], eax */ W32((u32)(r_ebp+0x378u), r_eax);
    /* 006aa25b: mov dword ptr [ebp + 0x374], eax */ W32((u32)(r_ebp+0x374u), r_eax);
    /* 006aa261: mov dword ptr [ebp + 0x370], eax */ W32((u32)(r_ebp+0x370u), r_eax);
    /* 006aa267: mov byte ptr [ebp + 0x37c], al */ W8((u32)(r_ebp+0x37cu), (u8)r_eax);
    /* 006aa26d: mov byte ptr [ebp + 0x37d], al */ W8((u32)(r_ebp+0x37du), (u8)r_eax);
    /* 006aa273: mov byte ptr [ebp + 0x37e], al */ W8((u32)(r_ebp+0x37eu), (u8)r_eax);
    /* 006aa279: mov byte ptr [ebp + 0x37f], al */ W8((u32)(r_ebp+0x37fu), (u8)r_eax);
    /* 006aa27f: mov byte ptr [ebp + 0x380], al */ W8((u32)(r_ebp+0x380u), (u8)r_eax);
    /* 006aa285: mov byte ptr [ebp + 0x381], al */ W8((u32)(r_ebp+0x381u), (u8)r_eax);
    /* 006aa28b: mov byte ptr [ebp + 0x382], al */ W8((u32)(r_ebp+0x382u), (u8)r_eax);
    /* 006aa291: mov byte ptr [ebp + 0x383], al */ W8((u32)(r_ebp+0x383u), (u8)r_eax);
    /* 006aa297: mov byte ptr [ebp + 0x384], al */ W8((u32)(r_ebp+0x384u), (u8)r_eax);
    /* 006aa29d: mov byte ptr [ebp + 0x385], al */ W8((u32)(r_ebp+0x385u), (u8)r_eax);
    /* 006aa2a3: mov byte ptr [ebp + 0x386], al */ W8((u32)(r_ebp+0x386u), (u8)r_eax);
    /* 006aa2a9: mov byte ptr [ebp + 0x387], al */ W8((u32)(r_ebp+0x387u), (u8)r_eax);
    /* 006aa2af: mov byte ptr [ebp + 0x388], al */ W8((u32)(r_ebp+0x388u), (u8)r_eax);
    /* 006aa2b5: mov byte ptr [ebp + 0x389], al */ W8((u32)(r_ebp+0x389u), (u8)r_eax);
    /* 006aa2bb: mov byte ptr [ebp + 0x38a], al */ W8((u32)(r_ebp+0x38au), (u8)r_eax);
    /* 006aa2c1: mov byte ptr [ebp + 0x38b], al */ W8((u32)(r_ebp+0x38bu), (u8)r_eax);
    /* 006aa2c7: mov byte ptr [ebp + 0x38c], al */ W8((u32)(r_ebp+0x38cu), (u8)r_eax);
    /* 006aa2cd: mov byte ptr [ebp + 0x38d], al */ W8((u32)(r_ebp+0x38du), (u8)r_eax);
    /* 006aa2d3: mov byte ptr [ebp + 0x38e], al */ W8((u32)(r_ebp+0x38eu), (u8)r_eax);
    /* 006aa2d9: mov byte ptr [ebp + 0x38f], al */ W8((u32)(r_ebp+0x38fu), (u8)r_eax);
    /* 006aa2df: mov byte ptr [ebp + 0x390], al */ W8((u32)(r_ebp+0x390u), (u8)r_eax);
    /* 006aa2e5: mov byte ptr [ebp + 0x391], al */ W8((u32)(r_ebp+0x391u), (u8)r_eax);
    /* 006aa2eb: mov byte ptr [ebp + 0x392], al */ W8((u32)(r_ebp+0x392u), (u8)r_eax);
    /* 006aa2f1: mov byte ptr [ebp + 0x393], al */ W8((u32)(r_ebp+0x393u), (u8)r_eax);
    /* 006aa2f7: mov byte ptr [ebp + 0x398], al */ W8((u32)(r_ebp+0x398u), (u8)r_eax);
    /* 006aa2fd: mov dword ptr [ebp + 0x394], eax */ W32((u32)(r_ebp+0x394u), r_eax);
    /* 006aa303: mov byte ptr [ebp + 0x399], al */ W8((u32)(r_ebp+0x399u), (u8)r_eax);
    /* 006aa309: mov byte ptr [ebp + 0x39a], al */ W8((u32)(r_ebp+0x39au), (u8)r_eax);
    /* 006aa30f: mov byte ptr [ebp + 0x39b], al */ W8((u32)(r_ebp+0x39bu), (u8)r_eax);
    /* 006aa315: mov byte ptr [ebp + 0x39c], al */ W8((u32)(r_ebp+0x39cu), (u8)r_eax);
    /* 006aa31b: mov byte ptr [ebp + 0x39d], al */ W8((u32)(r_ebp+0x39du), (u8)r_eax);
    /* 006aa321: mov byte ptr [ebp + 0x39e], al */ W8((u32)(r_ebp+0x39eu), (u8)r_eax);
    /* 006aa327: mov byte ptr [ebp + 0x39f], al */ W8((u32)(r_ebp+0x39fu), (u8)r_eax);
    /* 006aa32d: mov byte ptr [ebp + 0x3a0], al */ W8((u32)(r_ebp+0x3a0u), (u8)r_eax);
    /* 006aa333: mov byte ptr [ebp + 0x3a1], al */ W8((u32)(r_ebp+0x3a1u), (u8)r_eax);
    /* 006aa339: mov byte ptr [ebp + 0x3a2], al */ W8((u32)(r_ebp+0x3a2u), (u8)r_eax);
    /* 006aa33f: mov byte ptr [ebp + 0x3a3], al */ W8((u32)(r_ebp+0x3a3u), (u8)r_eax);
    /* 006aa345: mov byte ptr [ebp + 0x3a4], al */ W8((u32)(r_ebp+0x3a4u), (u8)r_eax);
    /* 006aa34b: mov byte ptr [ebp + 0x3a5], al */ W8((u32)(r_ebp+0x3a5u), (u8)r_eax);
    /* 006aa351: mov byte ptr [ebp + 0x3a6], al */ W8((u32)(r_ebp+0x3a6u), (u8)r_eax);
    /* 006aa357: mov byte ptr [ebp + 0x3a7], al */ W8((u32)(r_ebp+0x3a7u), (u8)r_eax);
    /* 006aa35d: mov dword ptr [ebp + 0x3a8], eax */ W32((u32)(r_ebp+0x3a8u), r_eax);
    /* 006aa363: mov byte ptr [ebp + 0x3ac], al */ W8((u32)(r_ebp+0x3acu), (u8)r_eax);
    /* 006aa369: mov byte ptr [ebp + 0x3ad], al */ W8((u32)(r_ebp+0x3adu), (u8)r_eax);
    /* 006aa36f: mov byte ptr [ebp + 0x3ae], al */ W8((u32)(r_ebp+0x3aeu), (u8)r_eax);
    /* 006aa375: mov byte ptr [ebp + 0x3af], al */ W8((u32)(r_ebp+0x3afu), (u8)r_eax);
    /* 006aa37b: mov dword ptr [ebp + 0x3b0], eax */ W32((u32)(r_ebp+0x3b0u), r_eax);
    /* 006aa381: mov word ptr [ebp + 0x3b4], ax */ W16((u32)(r_ebp+0x3b4u), (u16)r_eax);
    /* 006aa388: mov word ptr [ebp + 0x3b6], ax */ W16((u32)(r_ebp+0x3b6u), (u16)r_eax);
    /* 006aa38f: mov word ptr [ebp + 0x3b8], ax */ W16((u32)(r_ebp+0x3b8u), (u16)r_eax);
    /* 006aa396: mov word ptr [ebp + 0x3ba], ax */ W16((u32)(r_ebp+0x3bau), (u16)r_eax);
    /* 006aa39d: mov word ptr [ebp + 0x3bc], ax */ W16((u32)(r_ebp+0x3bcu), (u16)r_eax);
    /* 006aa3a4: mov word ptr [ebp + 0x3be], ax */ W16((u32)(r_ebp+0x3beu), (u16)r_eax);
    /* 006aa3ab: mov word ptr [ebp + 0x3c0], ax */ W16((u32)(r_ebp+0x3c0u), (u16)r_eax);
    /* 006aa3b2: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 006aa3b9: mov word ptr [ebp + 0x3cc], ax */ W16((u32)(r_ebp+0x3ccu), (u16)r_eax);
    /* 006aa3c0: mov word ptr [ebp + 0x3ce], ax */ W16((u32)(r_ebp+0x3ceu), (u16)r_eax);
    /* 006aa3c7: mov word ptr [ebp + 0x3d0], ax */ W16((u32)(r_ebp+0x3d0u), (u16)r_eax);
    /* 006aa3ce: mov word ptr [ebp + 0x3d2], ax */ W16((u32)(r_ebp+0x3d2u), (u16)r_eax);
    /* 006aa3d5: mov word ptr [ebp + 0x3d4], ax */ W16((u32)(r_ebp+0x3d4u), (u16)r_eax);
    /* 006aa3dc: mov word ptr [ebp + 0x3d6], ax */ W16((u32)(r_ebp+0x3d6u), (u16)r_eax);
    /* 006aa3e3: mov word ptr [ebp + 0x3d8], ax */ W16((u32)(r_ebp+0x3d8u), (u16)r_eax);
    /* 006aa3ea: mov word ptr [ebp + 0x3da], ax */ W16((u32)(r_ebp+0x3dau), (u16)r_eax);
    /* 006aa3f1: mov word ptr [ebp + 0x3dc], ax */ W16((u32)(r_ebp+0x3dcu), (u16)r_eax);
    /* 006aa3f8: mov word ptr [ebp + 0x3de], ax */ W16((u32)(r_ebp+0x3deu), (u16)r_eax);
    /* 006aa3ff: mov word ptr [ebp + 0x3e0], ax */ W16((u32)(r_ebp+0x3e0u), (u16)r_eax);
    /* 006aa406: mov word ptr [ebp + 0x3e2], ax */ W16((u32)(r_ebp+0x3e2u), (u16)r_eax);
    /* 006aa40d: mov word ptr [ebp + 0x3e4], ax */ W16((u32)(r_ebp+0x3e4u), (u16)r_eax);
    /* 006aa414: mov word ptr [ebp + 0x3e6], ax */ W16((u32)(r_ebp+0x3e6u), (u16)r_eax);
    /* 006aa41b: mov word ptr [ebp + 0x3e8], ax */ W16((u32)(r_ebp+0x3e8u), (u16)r_eax);
    /* 006aa422: mov word ptr [ebp + 0x3ea], ax */ W16((u32)(r_ebp+0x3eau), (u16)r_eax);
    /* 006aa429: lea ecx, [ebp + 0x3ec] */ r_ecx = (u32)(r_ebp+0x3ecu);
    /* 006aa42f: call 0x6abc14 */ r_esp -= 4; W32(r_esp, 0x6aa434u); f_006abc14();
    /* 006aa434: add ebp, 0x460 */ {  u32 a = r_ebp; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006aa43a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aa43c: call 0x6abc14 */ r_esp -= 4; W32(r_esp, 0x6aa441u); f_006abc14();
    /* 006aa441: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa442: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aa443: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aa444: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aa445: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aa446: ret  */ FN_RET(0x006aa17c); r_esp += 4; return;
}

void f_006aa448(void)
{
    FN_ENTER(0x006aa448);
    /* 006aa448: call 0x6aa450 */ r_esp -= 4; W32(r_esp, 0x6aa44du); f_006aa450();
    /* 006aa44d: ret  */ FN_RET(0x006aa448); r_esp += 4; return;
}

void f_006aa450(void) /* sub_6AA450 */
{
    FN_ENTER(0x006aa450);
    /* 006aa450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa451: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006aa456: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6aa45bu); f_006c1bcc();
    /* 006aa45b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa45c: call 0x6aa468 */ r_esp -= 4; W32(r_esp, 0x6aa461u); f_006aa468();
    /* 006aa461: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa462: ret  */ FN_RET(0x006aa450); r_esp += 4; return;
}

void f_006aa468(void) /* sub_6AA468 */
{
    FN_ENTER(0x006aa468);
    /* 006aa468: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa469: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aa46c: mov esi, eax */ r_esi = r_eax;
    /* 006aa46e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aa474: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aa479u); f_0068d5a8();
    /* 006aa479: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa47a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa47c: je 0x6aa48f */ if (fZ) goto L_006aa48f;
L_006aa47e:; BB(0x006aa47e);
    /* 006aa47e: mov edx, esi */ r_edx = r_esi;
    /* 006aa480: call 0x6aa4b0 */ r_esp -= 4; W32(r_esp, 0x6aa485u); f_006aa4b0();
    /* 006aa485: mov eax, 1 */ r_eax = 0x1u;
    /* 006aa48a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aa48d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aa48e: ret  */ FN_RET(0x006aa468); r_esp += 4; return;
L_006aa48f:; BB(0x006aa48f);
    /* 006aa48f: push 0x6aa448 */ { u32 v = 0x6aa448u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa494: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006aa49b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aa49c: call 0x697d60 */ r_esp -= 4; W32(r_esp, 0x6aa4a1u); f_00697d60();
    /* 006aa4a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa4a3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aa4a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aa4a7: ret  */ FN_RET(0x006aa468); r_esp += 4; return;
}

void f_006aa4b0(void) /* sub_6AA4B0 */
{
    FN_ENTER(0x006aa4b0);
    /* 006aa4b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa4b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa4b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aa4b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa4b4: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aa4ba: mov ebp, edx */ r_ebp = r_edx;
    /* 006aa4bc: mov ebx, eax */ r_ebx = r_eax;
    /* 006aa4be: mov esi, dword ptr [ebx + 0x33c] */ r_esi = R32((u32)(r_ebx+0x33cu));
    /* 006aa4c4: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006aa4ca: mov dword ptr [ebx + 0x33c], esi */ W32((u32)(r_ebx+0x33cu), r_esi);
    /* 006aa4d0: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 006aa4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aa4d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa4d6: call 0x68fa2c */ r_esp -= 4; W32(r_esp, 0x6aa4dbu); f_0068fa2c();
    /* 006aa4db: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006aa4df: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 006aa4e2: movsx edi, word ptr [ebx + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 006aa4e9: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006aa4ed: movzx edi, word ptr [ebx + 0x336] */ r_edi = (u32)R16((u32)(r_ebx+0x336u));
    /* 006aa4f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa4f6: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006aa4fa: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 006aa4fe: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006aa502: mov esi, edx */ r_esi = r_edx;
    /* 006aa504: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006aa506: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 006aa50a: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 006aa50e: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 006aa512: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 006aa516: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 006aa51a: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 006aa520: mov dword ptr [esp + 0x34], edi */ W32((u32)(r_esp+0x34u), r_edi);
    /* 006aa524: mov ebx, eax */ r_ebx = r_eax;
    /* 006aa526: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 006aa52a: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 006aa52e: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006aa532: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 006aa536: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 006aa53a: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 006aa53e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 006aa542: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 006aa546: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 006aa54a: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 006aa54e: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 006aa552: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 006aa556: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 006aa55a: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 006aa55e: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 006aa562: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 006aa566: mov dword ptr [esp + 0x78], edi */ W32((u32)(r_esp+0x78u), r_edi);
    /* 006aa56a: mov dword ptr [esp + 0x7c], edi */ W32((u32)(r_esp+0x7cu), r_edi);
    /* 006aa56e: mov dword ptr [esp + 0x80], edi */ W32((u32)(r_esp+0x80u), r_edi);
    /* 006aa575: mov dword ptr [esp + 0x84], edi */ W32((u32)(r_esp+0x84u), r_edi);
    /* 006aa57c: mov dword ptr [esp + 0x88], edi */ W32((u32)(r_esp+0x88u), r_edi);
    /* 006aa583: mov dword ptr [esp + 0x8c], edi */ W32((u32)(r_esp+0x8cu), r_edi);
    /* 006aa58a: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 006aa591: mov dword ptr [esp + 0x94], edi */ W32((u32)(r_esp+0x94u), r_edi);
    /* 006aa598: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006aa59c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006aa59e: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
L_006aa5a2:; BB(0x006aa5a2);
    /* 006aa5a2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa5a3: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006aa5a7: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6aa5acu); f_0069792c();
    /* 006aa5ac: mov ebp, eax */ r_ebp = r_eax;
    /* 006aa5ae: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa5b0: je 0x6aa5c6 */ if (fZ) goto L_006aa5c6;
L_006aa5b2:; BB(0x006aa5b2);
    /* 006aa5b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa5b4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 006aa5b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aa5b9: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x6aa5bcu); call_ind(t); }
    /* 006aa5bc: mov eax, esi */ r_eax = r_esi;
    /* 006aa5be: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aa5c1: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 006aa5c3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006aa5c6:; BB(0x006aa5c6);
    /* 006aa5c6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aa5c9: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aa5cc: jl 0x6aa5a2 */ if ((fS!=fO)) goto L_006aa5a2;
L_006aa5ce:; BB(0x006aa5ce);
    /* 006aa5ce: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006aa5d2: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006aa5d6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006aa5da: mov eax, ebx */ r_eax = r_ebx;
    /* 006aa5dc: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006aa5e0: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 006aa5e3: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006aa5e7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006aa5e9: mov ebp, eax */ r_ebp = r_eax;
L_006aa5eb:; BB(0x006aa5eb);
    /* 006aa5eb: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006aa5ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa5f0: je 0x6aa81c */ if (fZ) goto L_006aa81c;
L_006aa5f6:; BB(0x006aa5f6);
    /* 006aa5f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa5f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa5f8: call 0x6a6b00 */ r_esp -= 4; W32(r_esp, 0x6aa5fdu); f_006a6b00();
    /* 006aa5fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aa600: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006aa603:; BB(0x006aa603);
    /* 006aa603: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aa606: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aa609: cmp edi, 0x1e */ {  u32 a = r_edi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aa60c: jl 0x6aa5eb */ if ((fS!=fO)) goto L_006aa5eb;
L_006aa60e:; BB(0x006aa60e);
    /* 006aa60e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006aa612: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aa614: call 0x770bd8 */ r_esp -= 4; W32(r_esp, 0x6aa619u); f_00770bd8();
    /* 006aa619: mov byte ptr [ebp + 1], al */ W8((u32)(r_ebp+0x1u), (u8)r_eax);
    /* 006aa61c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aa61e: call 0x770c4c */ r_esp -= 4; W32(r_esp, 0x6aa623u); f_00770c4c();
    /* 006aa623: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa624: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 006aa627: movzx eax, byte ptr [ebx + 0x384] */ r_eax = (u32)R8((u32)(r_ebx+0x384u));
    /* 006aa62e: mov byte ptr [ebp + 0xe7], al */ W8((u32)(r_ebp+0xe7u), (u8)r_eax);
    /* 006aa634: movzx eax, byte ptr [ebx + 0x385] */ r_eax = (u32)R8((u32)(r_ebx+0x385u));
    /* 006aa63b: mov byte ptr [ebp + 0x103], al */ W8((u32)(r_ebp+0x103u), (u8)r_eax);
    /* 006aa641: movzx eax, byte ptr [ebx + 0x386] */ r_eax = (u32)R8((u32)(r_ebx+0x386u));
    /* 006aa648: mov byte ptr [ebp + 0x11f], al */ W8((u32)(r_ebp+0x11fu), (u8)r_eax);
    /* 006aa64e: movzx eax, byte ptr [ebx + 0x387] */ r_eax = (u32)R8((u32)(r_ebx+0x387u));
    /* 006aa655: mov byte ptr [ebp + 0x13b], al */ W8((u32)(r_ebp+0x13bu), (u8)r_eax);
    /* 006aa65b: movzx eax, byte ptr [ebx + 0x388] */ r_eax = (u32)R8((u32)(r_ebx+0x388u));
    /* 006aa662: mov byte ptr [ebp + 0x157], al */ W8((u32)(r_ebp+0x157u), (u8)r_eax);
    /* 006aa668: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x6aa66du); f_006ac458();
    /* 006aa66d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa66e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aa66f: lea esi, [ebp + 0x34c] */ r_esi = (u32)(r_ebp+0x34cu);
    /* 006aa675: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa676: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aa678: call 0x6948dc */ r_esp -= 4; W32(r_esp, 0x6aa67du); f_006948dc();
    /* 006aa67d: lea edi, [ebp + 0x370] */ r_edi = (u32)(r_ebp+0x370u);
    /* 006aa683: lea esi, [ebx + 0x930] */ r_esi = (u32)(r_ebx+0x930u);
    /* 006aa689: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006aa68b: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 006aa68d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006aa690: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006aa693: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006aa696: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006aa699: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006aa69c: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006aa69f: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006aa6a2: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006aa6a5: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006aa6a8: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 006aa6ab: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006aa6ae: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 006aa6b1: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006aa6b4: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006aa6b7: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006aa6ba: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006aa6bd: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006aa6c0: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006aa6c3: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006aa6c6: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006aa6c9: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 006aa6cc: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006aa6cf: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006aa6d2: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006aa6d5: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006aa6d8: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006aa6db: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006aa6de: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 006aa6e1: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006aa6e4: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006aa6e7: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006aa6ea: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 006aa6ed: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006aa6f0: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 006aa6f3: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006aa6f6: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 006aa6f9: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 006aa6fc: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006aa6ff: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 006aa702: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006aa705: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006aa708: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006aa70b: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 006aa70e: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006aa711: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006aa714: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 006aa717: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 006aa71a: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 006aa71d: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 006aa720: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 006aa723: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 006aa726: mov esi, dword ptr [esi + 0x6c] */ r_esi = R32((u32)(r_esi+0x6cu));
    /* 006aa729: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 006aa72c: mov dword ptr [edi + 0x6c], esi */ W32((u32)(r_edi+0x6cu), r_esi);
    /* 006aa72f: lea edi, [ebp + 0x3e0] */ r_edi = (u32)(r_ebp+0x3e0u);
    /* 006aa735: lea esi, [ebx + 0x538] */ r_esi = (u32)(r_ebx+0x538u);
    /* 006aa73b: mov ecx, 0xe8 */ r_ecx = 0xe8u;
    /* 006aa740: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa741: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006aa744: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006aa746: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa747: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006aa74a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006aa74c: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006aa750: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aa752: lea edi, [ebp + 6] */ r_edi = (u32)(r_ebp+0x6u);
    /* 006aa755: lea esi, [ebp + 0x4c8] */ r_esi = (u32)(r_ebp+0x4c8u);
    /* 006aa75b: mov ebp, eax */ r_ebp = r_eax;
L_006aa75d:; BB(0x006aa75d);
    /* 006aa75d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa75e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa75f: movzx edx, byte ptr [ebp + ebx + 0x4a8] */ r_edx = (u32)R8((u32)(r_ebp+r_ebx+0x4a8u));
    /* 006aa767: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa768: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x6aa76du); f_006ad238();
    /* 006aa76d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aa770: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aa773: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aa776: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006aa779: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aa77c: jl 0x6aa75d */ if ((fS!=fO)) goto L_006aa75d;
L_006aa77e:; BB(0x006aa77e);
    /* 006aa77e: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006aa782: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 006aa786: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006aa788:; BB(0x006aa788);
    /* 006aa788: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa789: mov ecx, edi */ r_ecx = r_edi;
    /* 006aa78b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6aa790u); f_0069792c();
    /* 006aa790: mov ecx, eax */ r_ecx = r_eax;
    /* 006aa792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa794: je 0x6aa79d */ if (fZ) goto L_006aa79d;
L_006aa796:; BB(0x006aa796);
    /* 006aa796: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006aa798: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006aa79a: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6aa79du); call_ind(t); }
L_006aa79d:; BB(0x006aa79d);
    /* 006aa79d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aa7a0: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aa7a3: jl 0x6aa788 */ if ((fS!=fO)) goto L_006aa788;
L_006aa7a5:; BB(0x006aa7a5);
    /* 006aa7a5: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 006aa7a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa7aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aa7ac: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x6aa7b1u); f_00770b58();
    /* 006aa7b1: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 006aa7b5: mov word ptr [ebx + 0x336], si */ W16((u32)(r_ebx+0x336u), (u16)r_esi);
    /* 006aa7bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aa7be: call 0x68d3e0 */ r_esp -= 4; W32(r_esp, 0x6aa7c3u); f_0068d3e0();
    /* 006aa7c3: mov byte ptr [ebp + 3], al */ W8((u32)(r_ebp+0x3u), (u8)r_eax);
    /* 006aa7c6: call 0x7c1638 */ r_esp -= 4; W32(r_esp, 0x6aa7cbu); f_007c1638();
    /* 006aa7cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa7cd: je 0x6aa7db */ if (fZ) goto L_006aa7db;
L_006aa7cf:; BB(0x006aa7cf);
    /* 006aa7cf: movzx eax, byte ptr [ebp + 7] */ r_eax = (u32)R8((u32)(r_ebp+0x7u));
    /* 006aa7d3: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006aa7d8: mov byte ptr [ebp + 7], al */ W8((u32)(r_ebp+0x7u), (u8)r_eax);
L_006aa7db:; BB(0x006aa7db);
    /* 006aa7db: mov eax, ebx */ r_eax = r_ebx;
    /* 006aa7dd: mov edx, ebp */ r_edx = r_ebp;
    /* 006aa7df: call 0x6aa830 */ r_esp -= 4; W32(r_esp, 0x6aa7e4u); f_006aa830();
    /* 006aa7e4: mov eax, ebx */ r_eax = r_ebx;
    /* 006aa7e6: mov edx, ebp */ r_edx = r_ebp;
    /* 006aa7e8: call 0x6aa8a8 */ r_esp -= 4; W32(r_esp, 0x6aa7edu); f_006aa8a8();
    /* 006aa7ed: mov eax, ebx */ r_eax = r_ebx;
    /* 006aa7ef: mov edx, ebp */ r_edx = r_ebp;
    /* 006aa7f1: call 0x6aa8c0 */ r_esp -= 4; W32(r_esp, 0x6aa7f6u); f_006aa8c0();
    /* 006aa7f6: mov eax, ebx */ r_eax = r_ebx;
    /* 006aa7f8: mov edx, ebp */ r_edx = r_ebp;
    /* 006aa7fa: call 0x6aa8d8 */ r_esp -= 4; W32(r_esp, 0x6aa7ffu); f_006aa8d8();
    /* 006aa7ff: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006aa805: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006aa80b: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006aa811: add esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aa817: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aa818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aa819: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aa81a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aa81b: ret  */ FN_RET(0x006aa4b0); r_esp += 4; return;
L_006aa81c:; BB(0x006aa81c);
    /* 006aa81c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa81d: call 0x6a439c */ r_esp -= 4; W32(r_esp, 0x6aa822u); f_006a439c();
    /* 006aa822: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa823: jmp 0x6aa603 */ goto L_006aa603;
}

void f_006aa830(void) /* sub_6AA830 */
{
    FN_ENTER(0x006aa830);
    /* 006aa830: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa831: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aa834: mov ebx, edx */ r_ebx = r_edx;
    /* 006aa836: mov edx, dword ptr [eax + 0x454] */ r_edx = R32((u32)(r_eax+0x454u));
    /* 006aa83c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa83e: je 0x6aa89a */ if (fZ) goto L_006aa89a;
L_006aa840:; BB(0x006aa840);
    /* 006aa840: mov byte ptr [ebx + 7], dl */ W8((u32)(r_ebx+0x7u), (u8)r_edx);
    /* 006aa843: mov eax, edx */ r_eax = r_edx;
    /* 006aa845: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006aa848: mov byte ptr [ebx + 0x23], al */ W8((u32)(r_ebx+0x23u), (u8)r_eax);
    /* 006aa84b: mov ecx, edx */ r_ecx = r_edx;
    /* 006aa84d: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006aa850: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006aa853: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aa854: mov byte ptr [ebx + 0x3f], cl */ W8((u32)(r_ebx+0x3fu), (u8)r_ecx);
    /* 006aa857: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006aa85a: mov byte ptr [ebx + 0x5b], dl */ W8((u32)(r_ebx+0x5bu), (u8)r_edx);
    /* 006aa85d: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6aa862u); f_0083ace8();
    /* 006aa862: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006aa866: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006aa86a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aa86b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa86c: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6aa871u); f_0083ad44();
    /* 006aa871: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aa874: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006aa878: mov byte ptr [ebx + 0x77], dl */ W8((u32)(r_ebx+0x77u), (u8)r_edx);
    /* 006aa87b: mov eax, edx */ r_eax = r_edx;
    /* 006aa87d: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006aa880: mov byte ptr [ebx + 0x93], al */ W8((u32)(r_ebx+0x93u), (u8)r_eax);
    /* 006aa886: mov ecx, edx */ r_ecx = r_edx;
    /* 006aa888: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006aa88b: mov byte ptr [ebx + 0xaf], cl */ W8((u32)(r_ebx+0xafu), (u8)r_ecx);
    /* 006aa891: shr edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006aa894: mov byte ptr [ebx + 0xcb], dl */ W8((u32)(r_ebx+0xcbu), (u8)r_edx);
L_006aa89a:; BB(0x006aa89a);
    /* 006aa89a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aa89d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aa89e: ret  */ FN_RET(0x006aa830); r_esp += 4; return;
}

void f_006aa8a8(void) /* sub_6AA8A8 */
{
    FN_ENTER(0x006aa8a8);
    /* 006aa8a8: movzx ecx, byte ptr [eax + 0x344] */ r_ecx = (u32)R8((u32)(r_eax+0x344u));
    /* 006aa8af: mov byte ptr [edx + 0x173], cl */ W8((u32)(r_edx+0x173u), (u8)r_ecx);
    /* 006aa8b5: ret  */ FN_RET(0x006aa8a8); r_esp += 4; return;
}

void f_006aa8c0(void) /* sub_6AA8C0 */
{
    FN_ENTER(0x006aa8c0);
    /* 006aa8c0: movzx ecx, byte ptr [eax + 0x345] */ r_ecx = (u32)R8((u32)(r_eax+0x345u));
    /* 006aa8c7: mov byte ptr [edx + 0x18f], cl */ W8((u32)(r_edx+0x18fu), (u8)r_ecx);
    /* 006aa8cd: ret  */ FN_RET(0x006aa8c0); r_esp += 4; return;
}

void f_006aa8d8(void) /* sub_6AA8D8 */
{
    FN_ENTER(0x006aa8d8);
    /* 006aa8d8: movzx ecx, byte ptr [eax + 0x346] */ r_ecx = (u32)R8((u32)(r_eax+0x346u));
    /* 006aa8df: mov byte ptr [edx + 0x1ab], cl */ W8((u32)(r_edx+0x1abu), (u8)r_ecx);
    /* 006aa8e5: ret  */ FN_RET(0x006aa8d8); r_esp += 4; return;
}

void f_006aa8e8(void) /* sub_6AA8E8 */
{
    FN_ENTER(0x006aa8e8);
    /* 006aa8e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa8e9: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006aa8ee: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x6aa8f3u); f_006c1bcc();
    /* 006aa8f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa8f4: call 0x6aa900 */ r_esp -= 4; W32(r_esp, 0x6aa8f9u); f_006aa900();
    /* 006aa8f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aa8fa: ret  */ FN_RET(0x006aa8e8); r_esp += 4; return;
}

void f_006aa8fc(void) /* sub_6AA8FC */
{
    FN_ENTER(0x006aa8fc);
    /* 006aa8fc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006aa900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa902: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aa903: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa904: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aa907: mov ebp, eax */ r_ebp = r_eax;
    /* 006aa909: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aa90f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aa914u); f_0068d5a8();
    /* 006aa914: mov ebx, eax */ r_ebx = r_eax;
    /* 006aa916: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aa919: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa91b: je 0x6aab42 */ if (fZ) goto L_006aab42;
L_006aa921:; BB(0x006aa921);
    /* 006aa921: mov esi, dword ptr [ebx + 0x33c] */ r_esi = R32((u32)(r_ebx+0x33cu));
    /* 006aa927: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006aa92d: mov dword ptr [ebx + 0x33c], esi */ W32((u32)(r_ebx+0x33cu), r_esi);
    /* 006aa933: lea edi, [ebp + 0x370] */ r_edi = (u32)(r_ebp+0x370u);
    /* 006aa939: lea esi, [ebx + 0x930] */ r_esi = (u32)(r_ebx+0x930u);
    /* 006aa93f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006aa941: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 006aa943: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006aa946: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006aa949: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006aa94c: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006aa94f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006aa952: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006aa955: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006aa958: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006aa95b: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006aa95e: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 006aa961: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006aa964: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 006aa967: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006aa96a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006aa96d: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006aa970: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006aa973: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006aa976: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006aa979: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006aa97c: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006aa97f: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 006aa982: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006aa985: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006aa988: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006aa98b: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006aa98e: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006aa991: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006aa994: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 006aa997: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006aa99a: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006aa99d: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006aa9a0: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 006aa9a3: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006aa9a6: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 006aa9a9: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006aa9ac: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 006aa9af: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 006aa9b2: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006aa9b5: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 006aa9b8: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006aa9bb: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006aa9be: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006aa9c1: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 006aa9c4: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006aa9c7: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006aa9ca: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 006aa9cd: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 006aa9d0: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 006aa9d3: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 006aa9d6: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 006aa9d9: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 006aa9dc: mov esi, dword ptr [esi + 0x6c] */ r_esi = R32((u32)(r_esi+0x6cu));
    /* 006aa9df: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 006aa9e2: mov dword ptr [edi + 0x6c], esi */ W32((u32)(r_edi+0x6cu), r_esi);
    /* 006aa9e5: lea edi, [ebp + 0x3c0] */ r_edi = (u32)(r_ebp+0x3c0u);
    /* 006aa9eb: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 006aa9ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa9f0: je 0x6aaa0a */ if (fZ) goto L_006aaa0a;
L_006aa9f2:; BB(0x006aa9f2);
    /* 006aa9f2: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa9f5: jne 0x6aa9ff */ if (!fZ) goto L_006aa9ff;
L_006aa9f7:; BB(0x006aa9f7);
    /* 006aa9f7: mov esi, 0x20 */ r_esi = 0x20u;
    /* 006aa9fc: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
L_006aa9ff:; BB(0x006aa9ff);
    /* 006aa9ff: movzx esi, word ptr [edi + 2] */ r_esi = (u32)R16((u32)(r_edi+0x2u));
    /* 006aaa03: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aaa06: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aaa08: jne 0x6aa9f2 */ if (!fZ) goto L_006aa9f2;
L_006aaa0a:; BB(0x006aaa0a);
    /* 006aaa0a: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 006aaa0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa10: call 0x68fa2c */ r_esp -= 4; W32(r_esp, 0x6aaa15u); f_0068fa2c();
    /* 006aaa15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa16: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 006aaa19: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006aaa1f: call 0x6a55f0 */ r_esp -= 4; W32(r_esp, 0x6aaa24u); f_006a55f0();
    /* 006aaa24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa25: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x6aaa2au); f_006ac458();
    /* 006aaa2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aaa2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa2c: lea esi, [ebp + 0x34c] */ r_esi = (u32)(r_ebp+0x34cu);
    /* 006aaa32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa35: call 0x6948dc */ r_esp -= 4; W32(r_esp, 0x6aaa3au); f_006948dc();
    /* 006aaa3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa3c: call 0x770bd8 */ r_esp -= 4; W32(r_esp, 0x6aaa41u); f_00770bd8();
    /* 006aaa41: mov byte ptr [ebp + 1], al */ W8((u32)(r_ebp+0x1u), (u8)r_eax);
    /* 006aaa44: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa46: call 0x770c4c */ r_esp -= 4; W32(r_esp, 0x6aaa4bu); f_00770c4c();
    /* 006aaa4b: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 006aaa4e: movzx eax, byte ptr [ebx + 0x384] */ r_eax = (u32)R8((u32)(r_ebx+0x384u));
    /* 006aaa55: mov byte ptr [ebp + 0xe7], al */ W8((u32)(r_ebp+0xe7u), (u8)r_eax);
    /* 006aaa5b: movzx eax, byte ptr [ebx + 0x385] */ r_eax = (u32)R8((u32)(r_ebx+0x385u));
    /* 006aaa62: mov byte ptr [ebp + 0x103], al */ W8((u32)(r_ebp+0x103u), (u8)r_eax);
    /* 006aaa68: movzx eax, byte ptr [ebx + 0x386] */ r_eax = (u32)R8((u32)(r_ebx+0x386u));
    /* 006aaa6f: mov byte ptr [ebp + 0x11f], al */ W8((u32)(r_ebp+0x11fu), (u8)r_eax);
    /* 006aaa75: movzx eax, byte ptr [ebx + 0x387] */ r_eax = (u32)R8((u32)(r_ebx+0x387u));
    /* 006aaa7c: mov byte ptr [ebp + 0x13b], al */ W8((u32)(r_ebp+0x13bu), (u8)r_eax);
    /* 006aaa82: movzx eax, byte ptr [ebx + 0x388] */ r_eax = (u32)R8((u32)(r_ebx+0x388u));
    /* 006aaa89: mov byte ptr [ebp + 0x157], al */ W8((u32)(r_ebp+0x157u), (u8)r_eax);
    /* 006aaa8f: lea edi, [ebp + 0x3e0] */ r_edi = (u32)(r_ebp+0x3e0u);
    /* 006aaa95: lea esi, [ebx + 0x538] */ r_esi = (u32)(r_ebx+0x538u);
    /* 006aaa9b: mov ecx, 0xe8 */ r_ecx = 0xe8u;
    /* 006aaaa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaaa1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006aaaa4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006aaaa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aaaa7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006aaaaa: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006aaaac: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006aaab0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aaab2: lea edi, [ebp + 6] */ r_edi = (u32)(r_ebp+0x6u);
    /* 006aaab5: lea esi, [ebp + 0x4c8] */ r_esi = (u32)(r_ebp+0x4c8u);
    /* 006aaabb: mov ebp, eax */ r_ebp = r_eax;
L_006aaabd:; BB(0x006aaabd);
    /* 006aaabd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaabe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaabf: movzx edx, byte ptr [ebp + ebx + 0x4a8] */ r_edx = (u32)R8((u32)(r_ebp+r_ebx+0x4a8u));
    /* 006aaac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaac8: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x6aaacdu); f_006ad238();
    /* 006aaacd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aaad0: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aaad3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aaad6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006aaad9: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aaadc: jl 0x6aaabd */ if ((fS!=fO)) goto L_006aaabd;
L_006aaade:; BB(0x006aaade);
    /* 006aaade: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006aaae2: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006aaae7: mov byte ptr [ebp + 3], al */ W8((u32)(r_ebp+0x3u), (u8)r_eax);
    /* 006aaaea: call 0x7c1638 */ r_esp -= 4; W32(r_esp, 0x6aaaefu); f_007c1638();
    /* 006aaaef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aaaf1: je 0x6aaaff */ if (fZ) goto L_006aaaff;
L_006aaaf3:; BB(0x006aaaf3);
    /* 006aaaf3: movzx eax, byte ptr [ebp + 7] */ r_eax = (u32)R8((u32)(r_ebp+0x7u));
    /* 006aaaf7: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006aaafc: mov byte ptr [ebp + 7], al */ W8((u32)(r_ebp+0x7u), (u8)r_eax);
L_006aaaff:; BB(0x006aaaff);
    /* 006aaaff: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab01: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab03: call 0x6aa830 */ r_esp -= 4; W32(r_esp, 0x6aab08u); f_006aa830();
    /* 006aab08: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab0a: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab0c: call 0x6aa8a8 */ r_esp -= 4; W32(r_esp, 0x6aab11u); f_006aa8a8();
    /* 006aab11: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab13: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab15: call 0x6aa8c0 */ r_esp -= 4; W32(r_esp, 0x6aab1au); f_006aa8c0();
    /* 006aab1a: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab1c: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab1e: call 0x6aa8d8 */ r_esp -= 4; W32(r_esp, 0x6aab23u); f_006aa8d8();
    /* 006aab23: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006aab29: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006aab2f: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006aab35: mov eax, 1 */ r_eax = 0x1u;
    /* 006aab3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aab3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aab3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aab3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aab40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aab41: ret  */ FN_RET(0x006aa8fc); r_esp += 4; return;
L_006aab42:; BB(0x006aab42);
    /* 006aab42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aab44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aab47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aab48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aab49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aab4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aab4b: ret  */ FN_RET(0x006aa8fc); r_esp += 4; return;
}

void f_006aa900(void) /* sub_6AA900 */
{
    FN_ENTER(0x006aa900);
    /* 006aa900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aa902: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aa903: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aa904: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aa907: mov ebp, eax */ r_ebp = r_eax;
    /* 006aa909: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aa90f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6aa914u); f_0068d5a8();
    /* 006aa914: mov ebx, eax */ r_ebx = r_eax;
    /* 006aa916: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aa919: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa91b: je 0x6aab42 */ if (fZ) goto L_006aab42;
L_006aa921:; BB(0x006aa921);
    /* 006aa921: mov esi, dword ptr [ebx + 0x33c] */ r_esi = R32((u32)(r_ebx+0x33cu));
    /* 006aa927: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006aa92d: mov dword ptr [ebx + 0x33c], esi */ W32((u32)(r_ebx+0x33cu), r_esi);
    /* 006aa933: lea edi, [ebp + 0x370] */ r_edi = (u32)(r_ebp+0x370u);
    /* 006aa939: lea esi, [ebx + 0x930] */ r_esi = (u32)(r_ebx+0x930u);
    /* 006aa93f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006aa941: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 006aa943: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006aa946: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006aa949: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006aa94c: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006aa94f: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006aa952: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006aa955: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006aa958: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006aa95b: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006aa95e: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 006aa961: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006aa964: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 006aa967: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006aa96a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006aa96d: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006aa970: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006aa973: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006aa976: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006aa979: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006aa97c: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006aa97f: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 006aa982: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006aa985: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006aa988: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006aa98b: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006aa98e: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006aa991: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006aa994: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 006aa997: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006aa99a: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006aa99d: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006aa9a0: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 006aa9a3: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006aa9a6: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 006aa9a9: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006aa9ac: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 006aa9af: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 006aa9b2: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006aa9b5: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 006aa9b8: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006aa9bb: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006aa9be: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006aa9c1: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 006aa9c4: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006aa9c7: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006aa9ca: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 006aa9cd: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 006aa9d0: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 006aa9d3: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 006aa9d6: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 006aa9d9: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 006aa9dc: mov esi, dword ptr [esi + 0x6c] */ r_esi = R32((u32)(r_esi+0x6cu));
    /* 006aa9df: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 006aa9e2: mov dword ptr [edi + 0x6c], esi */ W32((u32)(r_edi+0x6cu), r_esi);
    /* 006aa9e5: lea edi, [ebp + 0x3c0] */ r_edi = (u32)(r_ebp+0x3c0u);
    /* 006aa9eb: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 006aa9ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa9f0: je 0x6aaa0a */ if (fZ) goto L_006aaa0a;
L_006aa9f2:; BB(0x006aa9f2);
    /* 006aa9f2: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aa9f5: jne 0x6aa9ff */ if (!fZ) goto L_006aa9ff;
L_006aa9f7:; BB(0x006aa9f7);
    /* 006aa9f7: mov esi, 0x20 */ r_esi = 0x20u;
    /* 006aa9fc: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
L_006aa9ff:; BB(0x006aa9ff);
    /* 006aa9ff: movzx esi, word ptr [edi + 2] */ r_esi = (u32)R16((u32)(r_edi+0x2u));
    /* 006aaa03: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aaa06: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aaa08: jne 0x6aa9f2 */ if (!fZ) goto L_006aa9f2;
L_006aaa0a:; BB(0x006aaa0a);
    /* 006aaa0a: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 006aaa0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa10: call 0x68fa2c */ r_esp -= 4; W32(r_esp, 0x6aaa15u); f_0068fa2c();
    /* 006aaa15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa16: mov byte ptr [ebp], al */ W8((u32)(r_ebp), (u8)r_eax);
    /* 006aaa19: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006aaa1f: call 0x6a55f0 */ r_esp -= 4; W32(r_esp, 0x6aaa24u); f_006a55f0();
    /* 006aaa24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa25: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x6aaa2au); f_006ac458();
    /* 006aaa2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aaa2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa2c: lea esi, [ebp + 0x34c] */ r_esi = (u32)(r_ebp+0x34cu);
    /* 006aaa32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaa33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa35: call 0x6948dc */ r_esp -= 4; W32(r_esp, 0x6aaa3au); f_006948dc();
    /* 006aaa3a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa3c: call 0x770bd8 */ r_esp -= 4; W32(r_esp, 0x6aaa41u); f_00770bd8();
    /* 006aaa41: mov byte ptr [ebp + 1], al */ W8((u32)(r_ebp+0x1u), (u8)r_eax);
    /* 006aaa44: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006aaa46: call 0x770c4c */ r_esp -= 4; W32(r_esp, 0x6aaa4bu); f_00770c4c();
    /* 006aaa4b: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 006aaa4e: movzx eax, byte ptr [ebx + 0x384] */ r_eax = (u32)R8((u32)(r_ebx+0x384u));
    /* 006aaa55: mov byte ptr [ebp + 0xe7], al */ W8((u32)(r_ebp+0xe7u), (u8)r_eax);
    /* 006aaa5b: movzx eax, byte ptr [ebx + 0x385] */ r_eax = (u32)R8((u32)(r_ebx+0x385u));
    /* 006aaa62: mov byte ptr [ebp + 0x103], al */ W8((u32)(r_ebp+0x103u), (u8)r_eax);
    /* 006aaa68: movzx eax, byte ptr [ebx + 0x386] */ r_eax = (u32)R8((u32)(r_ebx+0x386u));
    /* 006aaa6f: mov byte ptr [ebp + 0x11f], al */ W8((u32)(r_ebp+0x11fu), (u8)r_eax);
    /* 006aaa75: movzx eax, byte ptr [ebx + 0x387] */ r_eax = (u32)R8((u32)(r_ebx+0x387u));
    /* 006aaa7c: mov byte ptr [ebp + 0x13b], al */ W8((u32)(r_ebp+0x13bu), (u8)r_eax);
    /* 006aaa82: movzx eax, byte ptr [ebx + 0x388] */ r_eax = (u32)R8((u32)(r_ebx+0x388u));
    /* 006aaa89: mov byte ptr [ebp + 0x157], al */ W8((u32)(r_ebp+0x157u), (u8)r_eax);
    /* 006aaa8f: lea edi, [ebp + 0x3e0] */ r_edi = (u32)(r_ebp+0x3e0u);
    /* 006aaa95: lea esi, [ebx + 0x538] */ r_esi = (u32)(r_ebx+0x538u);
    /* 006aaa9b: mov ecx, 0xe8 */ r_ecx = 0xe8u;
    /* 006aaaa0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaaa1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006aaaa4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006aaaa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aaaa7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006aaaaa: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006aaaac: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006aaab0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aaab2: lea edi, [ebp + 6] */ r_edi = (u32)(r_ebp+0x6u);
    /* 006aaab5: lea esi, [ebp + 0x4c8] */ r_esi = (u32)(r_ebp+0x4c8u);
    /* 006aaabb: mov ebp, eax */ r_ebp = r_eax;
L_006aaabd:; BB(0x006aaabd);
    /* 006aaabd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaabe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaabf: movzx edx, byte ptr [ebp + ebx + 0x4a8] */ r_edx = (u32)R8((u32)(r_ebp+r_ebx+0x4a8u));
    /* 006aaac7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaac8: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x6aaacdu); f_006ad238();
    /* 006aaacd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aaad0: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aaad3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aaad6: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006aaad9: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aaadc: jl 0x6aaabd */ if ((fS!=fO)) goto L_006aaabd;
L_006aaade:; BB(0x006aaade);
    /* 006aaade: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 006aaae2: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006aaae7: mov byte ptr [ebp + 3], al */ W8((u32)(r_ebp+0x3u), (u8)r_eax);
    /* 006aaaea: call 0x7c1638 */ r_esp -= 4; W32(r_esp, 0x6aaaefu); f_007c1638();
    /* 006aaaef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aaaf1: je 0x6aaaff */ if (fZ) goto L_006aaaff;
L_006aaaf3:; BB(0x006aaaf3);
    /* 006aaaf3: movzx eax, byte ptr [ebp + 7] */ r_eax = (u32)R8((u32)(r_ebp+0x7u));
    /* 006aaaf7: or eax, 0xffffff40 */ {  u32 a = r_eax; u32 b = 0xffffff40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006aaafc: mov byte ptr [ebp + 7], al */ W8((u32)(r_ebp+0x7u), (u8)r_eax);
L_006aaaff:; BB(0x006aaaff);
    /* 006aaaff: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab01: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab03: call 0x6aa830 */ r_esp -= 4; W32(r_esp, 0x6aab08u); f_006aa830();
    /* 006aab08: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab0a: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab0c: call 0x6aa8a8 */ r_esp -= 4; W32(r_esp, 0x6aab11u); f_006aa8a8();
    /* 006aab11: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab13: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab15: call 0x6aa8c0 */ r_esp -= 4; W32(r_esp, 0x6aab1au); f_006aa8c0();
    /* 006aab1a: mov eax, ebx */ r_eax = r_ebx;
    /* 006aab1c: mov edx, ebp */ r_edx = r_ebp;
    /* 006aab1e: call 0x6aa8d8 */ r_esp -= 4; W32(r_esp, 0x6aab23u); f_006aa8d8();
    /* 006aab23: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006aab29: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006aab2f: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 006aab35: mov eax, 1 */ r_eax = 0x1u;
    /* 006aab3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aab3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aab3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aab3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aab40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aab41: ret  */ FN_RET(0x006aa900); r_esp += 4; return;
L_006aab42:; BB(0x006aab42);
    /* 006aab42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aab44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aab47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aab48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aab49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aab4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aab4b: ret  */ FN_RET(0x006aa900); r_esp += 4; return;
}

void f_006aab4c(void) /* sub_6AAB4C */
{
    FN_ENTER(0x006aab4c);
    /* 006aab4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aab4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aab4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aab4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aab50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aab53: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 006aab57: mov esi, dword ptr [ebp + 0x33c] */ r_esi = R32((u32)(r_ebp+0x33cu));
    /* 006aab5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aab5f: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 006aab63: or esi, 0x80000 */ {  u32 a = r_esi; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 006aab69: mov dword ptr [ebp + 0x33c], esi */ W32((u32)(r_ebp+0x33cu), r_esi);
    /* 006aab6f: lea esi, [ebx + 4] */ r_esi = (u32)(r_ebx+0x4u);
    /* 006aab72: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aab73: call 0x68fa2c */ r_esp -= 4; W32(r_esp, 0x6aab78u); f_0068fa2c();
    /* 006aab78: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 006aab7a: movsx esi, word ptr [ebp + 0x334] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+0x334u));
    /* 006aab81: movzx edi, word ptr [ebp + 0x336] */ r_edi = (u32)R16((u32)(r_ebp+0x336u));
    /* 006aab88: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006aab8c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006aab8e: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006aab92: lea edi, [ebp + 0xdf8] */ r_edi = (u32)(r_ebp+0xdf8u);
    /* 006aab98: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_006aab9c:; BB(0x006aab9c);
    /* 006aab9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aab9d: mov ecx, edi */ r_ecx = r_edi;
    /* 006aab9f: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6aaba4u); f_0069792c();
    /* 006aaba4: mov ecx, eax */ r_ecx = r_eax;
    /* 006aaba6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aaba8: je 0x6aabb1 */ if (fZ) goto L_006aabb1;
L_006aabaa:; BB(0x006aabaa);
    /* 006aabaa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006aabac: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006aabae: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x6aabb1u); call_ind(t); }
L_006aabb1:; BB(0x006aabb1);
    /* 006aabb1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aabb4: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aabb7: jl 0x6aab9c */ if ((fS!=fO)) goto L_006aab9c;
L_006aabb9:; BB(0x006aabb9);
    /* 006aabb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aabbb: call 0x770bd8 */ r_esp -= 4; W32(r_esp, 0x6aabc0u); f_00770bd8();
    /* 006aabc0: mov byte ptr [ebx + 1], al */ W8((u32)(r_ebx+0x1u), (u8)r_eax);
    /* 006aabc3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aabc5: call 0x770c4c */ r_esp -= 4; W32(r_esp, 0x6aabcau); f_00770c4c();
    /* 006aabca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006aabcb: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 006aabce: movzx eax, byte ptr [ebp + 0x384] */ r_eax = (u32)R8((u32)(r_ebp+0x384u));
    /* 006aabd5: mov byte ptr [ebx + 0xe7], al */ W8((u32)(r_ebx+0xe7u), (u8)r_eax);
    /* 006aabdb: movzx eax, byte ptr [ebp + 0x385] */ r_eax = (u32)R8((u32)(r_ebp+0x385u));
    /* 006aabe2: mov byte ptr [ebx + 0x103], al */ W8((u32)(r_ebx+0x103u), (u8)r_eax);
    /* 006aabe8: movzx eax, byte ptr [ebp + 0x386] */ r_eax = (u32)R8((u32)(r_ebp+0x386u));
    /* 006aabef: mov byte ptr [ebx + 0x11f], al */ W8((u32)(r_ebx+0x11fu), (u8)r_eax);
    /* 006aabf5: movzx eax, byte ptr [ebp + 0x387] */ r_eax = (u32)R8((u32)(r_ebp+0x387u));
    /* 006aabfc: mov byte ptr [ebx + 0x13b], al */ W8((u32)(r_ebx+0x13bu), (u8)r_eax);
    /* 006aac02: movzx eax, byte ptr [ebp + 0x388] */ r_eax = (u32)R8((u32)(r_ebp+0x388u));
    /* 006aac09: mov byte ptr [ebx + 0x157], al */ W8((u32)(r_ebx+0x157u), (u8)r_eax);
    /* 006aac0f: mov esi, dword ptr [ebp + 0x2b4] */ r_esi = R32((u32)(r_ebp+0x2b4u));
    /* 006aac15: movzx edi, word ptr [esi] */ r_edi = (u32)R16((u32)(r_esi));
    /* 006aac18: mov word ptr [ebx + 0x34c], di */ W16((u32)(r_ebx+0x34cu), (u16)r_edi);
    /* 006aac1f: movzx edi, word ptr [esi + 2] */ r_edi = (u32)R16((u32)(r_esi+0x2u));
    /* 006aac23: mov word ptr [ebx + 0x34e], di */ W16((u32)(r_ebx+0x34eu), (u16)r_edi);
    /* 006aac2a: movzx edi, word ptr [esi + 4] */ r_edi = (u32)R16((u32)(r_esi+0x4u));
    /* 006aac2e: mov word ptr [ebx + 0x350], di */ W16((u32)(r_ebx+0x350u), (u16)r_edi);
    /* 006aac35: movzx edi, word ptr [esi + 6] */ r_edi = (u32)R16((u32)(r_esi+0x6u));
    /* 006aac39: mov word ptr [ebx + 0x352], di */ W16((u32)(r_ebx+0x352u), (u16)r_edi);
    /* 006aac40: movzx edi, word ptr [esi + 8] */ r_edi = (u32)R16((u32)(r_esi+0x8u));
    /* 006aac44: mov word ptr [ebx + 0x354], di */ W16((u32)(r_ebx+0x354u), (u16)r_edi);
    /* 006aac4b: movzx edi, word ptr [esi + 0xa] */ r_edi = (u32)R16((u32)(r_esi+0xau));
    /* 006aac4f: mov word ptr [ebx + 0x356], di */ W16((u32)(r_ebx+0x356u), (u16)r_edi);
    /* 006aac56: movzx edi, word ptr [esi + 0xc] */ r_edi = (u32)R16((u32)(r_esi+0xcu));
    /* 006aac5a: mov word ptr [ebx + 0x358], di */ W16((u32)(r_ebx+0x358u), (u16)r_edi);
    /* 006aac61: movzx edi, word ptr [esi + 0xe] */ r_edi = (u32)R16((u32)(r_esi+0xeu));
    /* 006aac65: mov word ptr [ebx + 0x35a], di */ W16((u32)(r_ebx+0x35au), (u16)r_edi);
    /* 006aac6c: mov edi, dword ptr [esi + 0x10] */ r_edi = R32((u32)(r_esi+0x10u));
    /* 006aac6f: mov dword ptr [ebx + 0x35c], edi */ W32((u32)(r_ebx+0x35cu), r_edi);
    /* 006aac75: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 006aac78: mov dword ptr [ebx + 0x360], edi */ W32((u32)(r_ebx+0x360u), r_edi);
    /* 006aac7e: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 006aac81: mov dword ptr [ebx + 0x364], edi */ W32((u32)(r_ebx+0x364u), r_edi);
    /* 006aac87: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 006aac8a: mov dword ptr [ebx + 0x368], edi */ W32((u32)(r_ebx+0x368u), r_edi);
    /* 006aac90: mov esi, dword ptr [esi + 0x20] */ r_esi = R32((u32)(r_esi+0x20u));
    /* 006aac93: mov dword ptr [ebx + 0x36c], esi */ W32((u32)(r_ebx+0x36cu), r_esi);
    /* 006aac99: call 0x6ac458 */ r_esp -= 4; W32(r_esp, 0x6aac9eu); f_006ac458();
    /* 006aac9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aac9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aaca0: lea esi, [ebx + 0x34c] */ r_esi = (u32)(r_ebx+0x34cu);
    /* 006aaca6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaca7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aaca9: call 0x6948dc */ r_esp -= 4; W32(r_esp, 0x6aacaeu); f_006948dc();
    /* 006aacae: lea edi, [ebx + 0x370] */ r_edi = (u32)(r_ebx+0x370u);
    /* 006aacb4: lea esi, [ebp + 0x930] */ r_esi = (u32)(r_ebp+0x930u);
    /* 006aacba: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006aacbc: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 006aacbe: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006aacc1: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 006aacc4: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 006aacc7: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 006aacca: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 006aaccd: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 006aacd0: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 006aacd3: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 006aacd6: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 006aacd9: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 006aacdc: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 006aacdf: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 006aace2: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006aace5: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 006aace8: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006aaceb: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006aacee: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 006aacf1: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 006aacf4: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 006aacf7: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 006aacfa: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 006aacfd: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 006aad00: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 006aad03: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006aad06: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006aad09: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 006aad0c: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 006aad0f: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 006aad12: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006aad15: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 006aad18: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 006aad1b: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 006aad1e: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 006aad21: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 006aad24: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 006aad27: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
    /* 006aad2a: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 006aad2d: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 006aad30: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 006aad33: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 006aad36: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006aad39: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 006aad3c: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 006aad3f: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006aad42: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006aad45: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 006aad48: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 006aad4b: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 006aad4e: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 006aad51: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 006aad54: mov eax, dword ptr [esi + 0x68] */ r_eax = R32((u32)(r_esi+0x68u));
    /* 006aad57: mov esi, dword ptr [esi + 0x6c] */ r_esi = R32((u32)(r_esi+0x6cu));
    /* 006aad5a: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 006aad5d: mov dword ptr [edi + 0x6c], esi */ W32((u32)(r_edi+0x6cu), r_esi);
    /* 006aad60: lea edi, [ebx + 0x3e0] */ r_edi = (u32)(r_ebx+0x3e0u);
    /* 006aad66: lea esi, [ebp + 0x538] */ r_esi = (u32)(r_ebp+0x538u);
    /* 006aad6c: mov ecx, 0xe8 */ r_ecx = 0xe8u;
    /* 006aad71: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006aad72: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006aad75: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 006aad77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aad78: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 006aad7b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 006aad7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aad7f: lea edi, [ebx + 6] */ r_edi = (u32)(r_ebx+0x6u);
    /* 006aad82: lea esi, [ebx + 0x4c8] */ r_esi = (u32)(r_ebx+0x4c8u);
    /* 006aad88: mov ebx, eax */ r_ebx = r_eax;
L_006aad8a:; BB(0x006aad8a);
    /* 006aad8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aad8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aad8c: movzx edx, byte ptr [ebx + ebp + 0x4a8] */ r_edx = (u32)R8((u32)(r_ebx+r_ebp+0x4a8u));
    /* 006aad94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aad95: call 0x6ad238 */ r_esp -= 4; W32(r_esp, 0x6aad9au); f_006ad238();
    /* 006aad9a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aad9d: add edi, 0x1c */ {  u32 a = r_edi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006aada0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aada3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006aada6: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aada9: jl 0x6aad8a */ if ((fS!=fO)) goto L_006aad8a;
L_006aadab:; BB(0x006aadab);
    /* 006aadab: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 006aadaf: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006aadb3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006aadb5:; BB(0x006aadb5);
    /* 006aadb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aadb6: mov ecx, edi */ r_ecx = r_edi;
    /* 006aadb8: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6aadbdu); f_0069792c();
    /* 006aadbd: mov ecx, eax */ r_ecx = r_eax;
    /* 006aadbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aadc1: je 0x6aadca */ if (fZ) goto L_006aadca;
L_006aadc3:; BB(0x006aadc3);
    /* 006aadc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006aadc5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006aadc7: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x6aadcau); call_ind(t); }
L_006aadca:; BB(0x006aadca);
    /* 006aadca: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006aadcd: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aadd0: jl 0x6aadb5 */ if ((fS!=fO)) goto L_006aadb5;
L_006aadd2:; BB(0x006aadd2);
    /* 006aadd2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006aadd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aadd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aadd9: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x6aaddeu); f_00770b58();
    /* 006aadde: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006aade2: mov word ptr [ebp + 0x336], si */ W16((u32)(r_ebp+0x336u), (u16)r_esi);
    /* 006aade9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006aadeb: call 0x68d3e0 */ r_esp -= 4; W32(r_esp, 0x6aadf0u); f_0068d3e0();
    /* 006aadf0: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 006aadf3: mov eax, ebp */ r_eax = r_ebp;
    /* 006aadf5: mov edx, ebx */ r_edx = r_ebx;
    /* 006aadf7: call 0x6aa830 */ r_esp -= 4; W32(r_esp, 0x6aadfcu); f_006aa830();
    /* 006aadfc: mov eax, ebp */ r_eax = r_ebp;
    /* 006aadfe: mov edx, ebx */ r_edx = r_ebx;
    /* 006aae00: call 0x6aa8a8 */ r_esp -= 4; W32(r_esp, 0x6aae05u); f_006aa8a8();
    /* 006aae05: mov eax, ebp */ r_eax = r_ebp;
    /* 006aae07: mov edx, ebx */ r_edx = r_ebx;
    /* 006aae09: call 0x6aa8c0 */ r_esp -= 4; W32(r_esp, 0x6aae0eu); f_006aa8c0();
    /* 006aae0e: mov eax, ebp */ r_eax = r_ebp;
    /* 006aae10: mov edx, ebx */ r_edx = r_ebx;
    /* 006aae12: call 0x6aa8d8 */ r_esp -= 4; W32(r_esp, 0x6aae17u); f_006aa8d8();
    /* 006aae17: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 006aae1d: and edx, 0xfff7ffff */ {  u32 a = r_edx; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006aae23: mov dword ptr [ebp + 0x33c], edx */ W32((u32)(r_ebp+0x33cu), r_edx);
    /* 006aae29: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aae2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aae2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006aae2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aae2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aae30: ret  */ FN_RET(0x006aab4c); r_esp += 4; return;
}

void f_006aae34(void) /* sub_6AAE34 */
{
    FN_ENTER(0x006aae34);
    /* 006aae34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aae35: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006aae39: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006aae3d: mov byte ptr [ebx], dl */ W8((u32)(r_ebx), (u8)r_edx);
    /* 006aae3f: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 006aae42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aae43: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aae47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aae48: call 0x6ab148 */ r_esp -= 4; W32(r_esp, 0x6aae4du); f_006ab148();
    /* 006aae4d: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006aae51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aae52: movsx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x1cu));
    /* 006aae57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aae58: call 0x6aae88 */ r_esp -= 4; W32(r_esp, 0x6aae5du); f_006aae88();
    /* 006aae5d: mov eax, 1 */ r_eax = 0x1u;
    /* 006aae62: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aae65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aae66: ret  */ FN_RET(0x006aae34); r_esp += 4; return;
}

void f_006aae68(void) /* sub_6AAE68 */
{
    FN_ENTER(0x006aae68);
    /* 006aae68: mov dword ptr [0xa9482c], 0x3f800000 */ W32((u32)(0xa9482cu), 0x3f800000u);
    /* 006aae72: mov dword ptr [0xa94830], 0x41000000 */ W32((u32)(0xa94830u), 0x41000000u);
    /* 006aae7c: mov dword ptr [0xa94834], 0x3fc00000 */ W32((u32)(0xa94834u), 0x3fc00000u);
    /* 006aae86: ret  */ FN_RET(0x006aae68); r_esp += 4; return;
}

void f_006aae88(void) /* sub_6AAE88 */
{
    FN_ENTER(0x006aae88);
    /* 006aae88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aae89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006aae8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aae8b: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006aae8e: movsx edi, byte ptr [esp + 0x20] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esp+0x20u));
    /* 006aae93: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 006aae97: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 006aae9b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006aae9d: jge 0x6aaea3 */ if ((fS==fO)) goto L_006aaea3;
L_006aae9f:; BB(0x006aae9f);
    /* 006aae9f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006aaea1: jmp 0x6aaeb3 */ goto L_006aaeb3;
L_006aaea3:; BB(0x006aaea3);
    /* 006aaea3: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6aaea8u); f_006931f8();
    /* 006aaea8: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006aaeaa: jle 0x6aaeb3 */ if ((fZ||fS!=fO)) goto L_006aaeb3;
L_006aaeac:; BB(0x006aaeac);
    /* 006aaeac: call 0x6931f8 */ r_esp -= 4; W32(r_esp, 0x6aaeb1u); f_006931f8();
    /* 006aaeb1: mov ebx, eax */ r_ebx = r_eax;
L_006aaeb3:; BB(0x006aaeb3);
    /* 006aaeb3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaeb4: call 0x6ac950 */ r_esp -= 4; W32(r_esp, 0x6aaeb9u); f_006ac950();
    /* 006aaeb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006aaeba: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006aaebd: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 006aaec1: movzx ecx, word ptr [eax + 2] */ r_ecx = (u32)R16((u32)(r_eax+0x2u));
    /* 006aaec5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006aaec7: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 006aaecc: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 006aaed0: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 006aaed5: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 006aaed9: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 006aaede: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006aaee2: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 006aaee7: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 006aaeeb: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 006aaef0: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 006aaef4: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 006aaef9: jne 0x6aafb2 */ if (!fZ) goto L_006aafb2;
L_006aaeff:; BB(0x006aaeff);
    /* 006aaeff: movzx edx, word ptr [esp] */ r_edx = (u32)R16((u32)(r_esp));
    /* 006aaf03: movzx ecx, word ptr [esp + 2] */ r_ecx = (u32)R16((u32)(r_esp+0x2u));
    /* 006aaf08: mov dword ptr [esi + 0x360], 0x41200000 */ W32((u32)(r_esi+0x360u), 0x41200000u);
    /* 006aaf12: mov word ptr [esi + 0x34c], dx */ W16((u32)(r_esi+0x34cu), (u16)r_edx);
    /* 006aaf19: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 006aaf1e: mov word ptr [esi + 0x34e], cx */ W16((u32)(r_esi+0x34eu), (u16)r_ecx);
    /* 006aaf25: mov word ptr [esi + 0x350], dx */ W16((u32)(r_esi+0x350u), (u16)r_edx);
    /* 006aaf2c: movzx edx, word ptr [esp + 6] */ r_edx = (u32)R16((u32)(r_esp+0x6u));
    /* 006aaf31: mov word ptr [esi + 0x352], dx */ W16((u32)(r_esi+0x352u), (u16)r_edx);
    /* 006aaf38: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006aaf3d: mov word ptr [esi + 0x354], dx */ W16((u32)(r_esi+0x354u), (u16)r_edx);
    /* 006aaf44: movzx edx, word ptr [esp + 0xa] */ r_edx = (u32)R16((u32)(r_esp+0xau));
    /* 006aaf49: mov word ptr [esi + 0x356], dx */ W16((u32)(r_esi+0x356u), (u16)r_edx);
    /* 006aaf50: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006aaf55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aaf56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aaf57: mov word ptr [esi + 0x358], dx */ W16((u32)(r_esi+0x358u), (u16)r_edx);
    /* 006aaf5e: mov edx, 0x28 */ r_edx = 0x28u;
    /* 006aaf63: mov word ptr [esi + 0x35a], dx */ W16((u32)(r_esi+0x35au), (u16)r_edx);
    /* 006aaf6a: mov dword ptr [esi + 0x364], ebx */ W32((u32)(r_esi+0x364u), r_ebx);
    /* 006aaf70: call 0x6ac5cc */ r_esp -= 4; W32(r_esp, 0x6aaf75u); f_006ac5cc();
    /* 006aaf75: mov dword ptr [esi + 0x36c], 0x12c */ W32((u32)(r_esi+0x36cu), 0x12cu);
    /* 006aaf7f: mov dword ptr [esi + 0x368], eax */ W32((u32)(r_esi+0x368u), r_eax);
    /* 006aaf85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006aaf87: mov byte ptr [esi + 1], al */ W8((u32)(r_esi+0x1u), (u8)r_eax);
    /* 006aaf8a: mov byte ptr [esi + 2], al */ W8((u32)(r_esi+0x2u), (u8)r_eax);
    /* 006aaf8d: mov byte ptr [esi + 0xe7], al */ W8((u32)(r_esi+0xe7u), (u8)r_eax);
    /* 006aaf93: mov byte ptr [esi + 0x103], al */ W8((u32)(r_esi+0x103u), (u8)r_eax);
    /* 006aaf99: mov byte ptr [esi + 0x11f], al */ W8((u32)(r_esi+0x11fu), (u8)r_eax);
    /* 006aaf9f: mov byte ptr [esi + 0x13b], al */ W8((u32)(r_esi+0x13bu), (u8)r_eax);
    /* 006aafa5: mov byte ptr [esi + 0x157], al */ W8((u32)(r_esi+0x157u), (u8)r_eax);
    /* 006aafab: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aafae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006aafaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006aafb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006aafb1: ret  */ FN_RET(0x006aae88); r_esp += 4; return;
L_006aafb2:; BB(0x006aafb2);
    /* 006aafb2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006aafb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aafb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aafb7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006aafb8: call 0x695730 */ r_esp -= 4; W32(r_esp, 0x6aafbdu); f_00695730();
    /* 006aafbd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006aafc0: jmp 0x6aaeff */ goto L_006aaeff;
}

void f_006aafc8(void) /* sub_6AAFC8 */
{
    FN_ENTER(0x006aafc8);
    /* 006aafc8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006aafcc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006aafce: movsx edx, byte ptr [eax + 0x3a1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x3a1u));
    /* 006aafd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006aafd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006aafd7: call 0x6aae88 */ r_esp -= 4; W32(r_esp, 0x6aafdcu); f_006aae88();
    /* 006aafdc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006aafdf: ret  */ FN_RET(0x006aafc8); r_esp += 4; return;
}

void f_006aafe0(void) /* sub_6AAFE0 */
{
    FN_ENTER(0x006aafe0);
    /* 006aafe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006aafe1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006aafe5: mov edx, dword ptr [ebx + 0x3a4] */ r_edx = R32((u32)(r_ebx+0x3a4u));
    /* 006aafeb: mov eax, 0xff */ r_eax = 0xffu;
    /* 006aaff0: mov byte ptr [ebx + 0x4c8], al */ W8((u32)(r_ebx+0x4c8u), (u8)r_eax);
    /* 006aaff6: mov byte ptr [ebx + 0x4c9], al */ W8((u32)(r_ebx+0x4c9u), (u8)r_eax);
    /* 006aaffc: mov byte ptr [ebx + 0x4ca], al */ W8((u32)(r_ebx+0x4cau), (u8)r_eax);
    /* 006ab002: mov byte ptr [ebx + 0x4cb], al */ W8((u32)(r_ebx+0x4cbu), (u8)r_eax);
    /* 006ab008: mov byte ptr [ebx + 0x4cc], al */ W8((u32)(r_ebx+0x4ccu), (u8)r_eax);
    /* 006ab00e: mov byte ptr [ebx + 0x4cd], al */ W8((u32)(r_ebx+0x4cdu), (u8)r_eax);
    /* 006ab014: mov byte ptr [ebx + 0x4ce], al */ W8((u32)(r_ebx+0x4ceu), (u8)r_eax);
    /* 006ab01a: mov byte ptr [ebx + 0x4cf], al */ W8((u32)(r_ebx+0x4cfu), (u8)r_eax);
    /* 006ab020: mov byte ptr [ebx + 0x4d0], al */ W8((u32)(r_ebx+0x4d0u), (u8)r_eax);
    /* 006ab026: mov byte ptr [ebx + 0x4d1], al */ W8((u32)(r_ebx+0x4d1u), (u8)r_eax);
    /* 006ab02c: mov byte ptr [ebx + 0x4d2], al */ W8((u32)(r_ebx+0x4d2u), (u8)r_eax);
    /* 006ab032: mov byte ptr [ebx + 0x4d3], al */ W8((u32)(r_ebx+0x4d3u), (u8)r_eax);
    /* 006ab038: mov byte ptr [ebx + 0x4d4], al */ W8((u32)(r_ebx+0x4d4u), (u8)r_eax);
    /* 006ab03e: mov byte ptr [ebx + 0x4d5], al */ W8((u32)(r_ebx+0x4d5u), (u8)r_eax);
    /* 006ab044: mov byte ptr [ebx + 0x4d6], al */ W8((u32)(r_ebx+0x4d6u), (u8)r_eax);
    /* 006ab04a: mov byte ptr [ebx + 0x4d7], al */ W8((u32)(r_ebx+0x4d7u), (u8)r_eax);
    /* 006ab050: mov byte ptr [ebx + 0x4d8], al */ W8((u32)(r_ebx+0x4d8u), (u8)r_eax);
    /* 006ab056: mov byte ptr [ebx + 0x4d9], al */ W8((u32)(r_ebx+0x4d9u), (u8)r_eax);
    /* 006ab05c: mov byte ptr [ebx + 0x4da], al */ W8((u32)(r_ebx+0x4dau), (u8)r_eax);
    /* 006ab062: mov byte ptr [ebx + 0x4db], al */ W8((u32)(r_ebx+0x4dbu), (u8)r_eax);
    /* 006ab068: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006ab06e: jne 0x6ab079 */ if (!fZ) goto L_006ab079;
L_006ab070:; BB(0x006ab070);
    /* 006ab070: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab071: call 0x6ab260 */ r_esp -= 4; W32(r_esp, 0x6ab076u); f_006ab260();
    /* 006ab076: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006ab077: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006ab078: ret  */ FN_RET(0x006aafe0); r_esp += 4; return;
L_006ab079:; BB(0x006ab079);
    /* 006ab079: movsx edx, byte ptr [ebx + 0x3a1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x3a1u));
    /* 006ab080: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006ab082: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006ab084: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006ab085: call 0x6ad0e4 */ r_esp -= 4; W32(r_esp, 0x6ab08au); f_006ad0e4();
    /* 006ab08a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006ab08d: mov byte ptr [ebx + 0x4c8], 0 */ W8((u32)(r_ebx+0x4c8u), 0x0u);
    /* 006ab094: jmp 0x6ab070 */ goto L_006ab070;
}

