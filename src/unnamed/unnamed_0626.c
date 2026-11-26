#include "protos.h"

void f_006260a4(void) /* sub_6260A4 */
{
    FN_ENTER(0x006260a4);
    /* 006260a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006260a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006260a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006260a9: call 0x6260c8 */ r_esp -= 4; W32(r_esp, 0x6260aeu); f_006260c8();
    /* 006260ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006260b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006260b4: jne 0x6260ba */ if (!fZ) goto L_006260ba;
L_006260b6:; BB(0x006260b6);
    /* 006260b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006260b7: ret 4 */ FN_RET(0x006260a4); r_esp += 8; return;
L_006260ba:; BB(0x006260ba);
    /* 006260ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006260bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6260c0u); f_005c2f74();
    /* 006260c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006260c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006260c2: ret 4 */ FN_RET(0x006260a4); r_esp += 8; return;
}

void f_006260c8(void) /* sub_6260C8 */
{
    FN_ENTER(0x006260c8);
    /* 006260c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006260c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006260cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006260cd: push 0x8e2a14 */ { u32 v = 0x8e2a14u; r_esp -= 4; W32(r_esp, v); }
    /* 006260d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006260d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006260d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006260e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006260e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006260e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006260e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006260ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006260ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006260f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006260f9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006260fc: mov dword ptr [eax], 0xb289e0 */ W32((u32)(r_eax), 0xb289e0u);
    /* 00626102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626103: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x626108u); f_007b4e84();
    /* 00626108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626109: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062610c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x626111u); f_007b9c8c();
    /* 00626111: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626118: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062611b: call 0x625600 */ r_esp -= 4; W32(r_esp, 0x626120u); f_00625600();
    /* 00626120: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626123: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062612a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062612c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062612d: ret  */ FN_RET(0x006260c8); r_esp += 4; return;
}

void f_00626130(void) /* sub_626130 */
{
    FN_ENTER(0x00626130);
    /* 00626130: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626131: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626132: mov eax, 1 */ r_eax = 0x1u;
    /* 00626137: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 0062613d: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00626143: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626145: mov ebx, eax */ r_ebx = r_eax;
    /* 00626147: mov esi, ecx */ r_esi = r_ecx;
L_00626149:; BB(0x00626149);
    /* 00626149: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0062614b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062614c: mov ecx, esi */ r_ecx = r_esi;
    /* 0062614e: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x626153u); f_007b52c4();
    /* 00626153: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00626156: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00626159: jl 0x626149 */ if ((fS!=fO)) goto L_00626149;
L_0062615b:; BB(0x0062615b);
    /* 0062615b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062615c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0062615d: ret  */ FN_RET(0x00626130); r_esp += 4; return;
}

void f_00626160(void) /* sub_626160 */
{
    FN_ENTER(0x00626160);
    /* 00626160: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626161: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 00626167: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626169: je 0x6261ab */ if (fZ) goto L_006261ab;
L_0062616b:; BB(0x0062616b);
    /* 0062616b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0062616e: mov eax, 1 */ r_eax = 0x1u;
    /* 00626173: mov ebx, eax */ r_ebx = r_eax;
    /* 00626175: jmp 0x62617d */ goto L_0062617d;
L_00626177:; BB(0x00626177);
    /* 00626177: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
L_0062617d:; BB(0x0062617d);
    /* 0062617d: push dword ptr [edx + ebx*4] */ { u32 v = R32((u32)(r_edx+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00626180: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x626185u); f_00800b5c();
    /* 00626185: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626186: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00626189: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0062618c: jl 0x626177 */ if ((fS!=fO)) goto L_00626177;
L_0062618e:; BB(0x0062618e);
    /* 0062618e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00626191: mov eax, dword ptr [0xa8ed3c] */ r_eax = R32((u32)(0xa8ed3cu));
    /* 00626196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626198: je 0x6261ab */ if (fZ) goto L_006261ab;
L_0062619a:; BB(0x0062619a);
    /* 0062619a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062619b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6261a0u); f_00857e98();
    /* 006261a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006261a1: mov dword ptr [0xa8ed3c], 0 */ W32((u32)(0xa8ed3cu), 0x0u);
L_006261ab:; BB(0x006261ab);
    /* 006261ab: mov ecx, dword ptr [0xa8ed40] */ r_ecx = R32((u32)(0xa8ed40u));
    /* 006261b1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006261b3: je 0x6261c8 */ if (fZ) goto L_006261c8;
L_006261b5:; BB(0x006261b5);
    /* 006261b5: je 0x6261be */ if (fZ) goto L_006261be;
L_006261b7:; BB(0x006261b7);
    /* 006261b7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006261b9: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6261beu); f_004066a8();
L_006261be:; BB(0x006261be);
    /* 006261be: mov dword ptr [0xa8ed40], 0 */ W32((u32)(0xa8ed40u), 0x0u);
L_006261c8:; BB(0x006261c8);
    /* 006261c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006261c9: ret  */ FN_RET(0x00626160); r_esp += 4; return;
}

void f_006261cc(void)
{
    FN_ENTER(0x006261cc);
    /* 006261cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006261cd: mov ebp, esp */ r_ebp = r_esp;
    /* 006261cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006261d1: push 0x8e2a3c */ { u32 v = 0x8e2a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006261d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006261dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006261dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006261e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006261e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006261ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006261ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006261f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006261f3: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006261f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006261ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x626204u); f_005caba4();
    /* 00626204: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626205: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00626208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062620a: je 0x626243 */ if (fZ) goto L_00626243;
L_0062620c:; BB(0x0062620c);
    /* 0062620c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00626213: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062621a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062621d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626223: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626226: call 0x626248 */ r_esp -= 4; W32(r_esp, 0x62622bu); f_00626248();
    /* 0062622b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062622e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626235:; BB(0x00626235);
    /* 00626235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626238: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062623f: mov esp, ebp */ r_esp = r_ebp;
    /* 00626241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626242: ret  */ FN_RET(0x006261cc); r_esp += 4; return;
L_00626243:; BB(0x00626243);
    /* 00626243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626245: jmp 0x626235 */ goto L_00626235;
}

void f_00626248(void) /* sub_626248 */
{
    FN_ENTER(0x00626248);
    /* 00626248: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626249: mov ebp, esp */ r_ebp = r_esp;
    /* 0062624b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062624d: push 0x8e2a58 */ { u32 v = 0x8e2a58u; r_esp -= 4; W32(r_esp, v); }
    /* 00626252: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626258: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626259: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626260: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626263: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626266: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00626269: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062626c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062626f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00626272: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626275: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00626278: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062627b: call 0x625658 */ r_esp -= 4; W32(r_esp, 0x626280u); f_00625658();
    /* 00626280: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626287: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062628a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062628d: mov dword ptr [ecx], 0xb289e0 */ W32((u32)(r_ecx), 0xb289e0u);
    /* 00626293: mov eax, dword ptr [0x9c59e0] */ r_eax = R32((u32)(0x9c59e0u));
    /* 00626298: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626299: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062629c: call dword ptr [0xb289f4] */ { u32 t = R32((u32)(0xb289f4u)); r_esp -= 4; W32(r_esp, 0x6262a2u); call_ind(t); }
    /* 006262a2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006262a5: mov eax, dword ptr [0xa8ed40] */ r_eax = R32((u32)(0xa8ed40u));
    /* 006262aa: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006262b0: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 006262b3: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006262b6: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 006262bc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006262be: jl 0x62639f */ if ((fS!=fO)) goto L_0062639f;
L_006262c4:; BB(0x006262c4);
    /* 006262c4: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006262c7: jge 0x6262d1 */ if ((fS==fO)) goto L_006262d1;
L_006262c9:; BB(0x006262c9);
    /* 006262c9: mov dword ptr [ecx + 0xd4], ebx */ W32((u32)(r_ecx+0xd4u), r_ebx);
    /* 006262cf: jmp 0x6262e0 */ goto L_006262e0;
L_006262d1:; BB(0x006262d1);
    /* 006262d1: mov dword ptr [ecx + 0xd4], 3 */ W32((u32)(r_ecx+0xd4u), 0x3u);
    /* 006262db: mov ebx, 3 */ r_ebx = 0x3u;
L_006262e0:; BB(0x006262e0);
    /* 006262e0: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 006262e6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006262e8: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 006262eb: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 006262ee: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 006262f4: push 0x9c5860 */ { u32 v = 0x9c5860u; r_esp -= 4; W32(r_esp, v); }
    /* 006262f9: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006262fc: mov dword ptr [ecx + 0xbc], esi */ W32((u32)(r_ecx+0xbcu), r_esi);
    /* 00626302: fild dword ptr [esi + 4] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4u)));
    /* 00626305: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00626308: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0062630b: fadd dword ptr [edi*4 + 0x931c28] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x931c28u));
    /* 00626312: fadd dword ptr [0x931c38] */ ST(0) = ST(0) + R_F32((u32)(0x931c38u));
    /* 00626318: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0062631e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x626323u); f_007b9a88();
    /* 00626323: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00626326: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62632bu); f_007b999c();
    /* 0062632b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062632c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062632f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x626334u); f_007b4f54();
    /* 00626334: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626337: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0062633d: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00626343: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00626348: jle 0x626356 */ if ((fZ||fS!=fO)) goto L_00626356;
L_0062634a:; BB(0x0062634a);
    /* 0062634a: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00626354: jmp 0x626364 */ goto L_00626364;
L_00626356:; BB(0x00626356);
    /* 00626356: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626358: jl 0x626393 */ if ((fS!=fO)) goto L_00626393;
L_0062635a:; BB(0x0062635a);
    /* 0062635a: mov dword ptr [edx + 0xc8], 2 */ W32((u32)(r_edx+0xc8u), 0x2u);
L_00626364:; BB(0x00626364);
    /* 00626364: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626367: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062636a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062636d: mov eax, edx */ r_eax = r_edx;
    /* 0062636f: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00626379: mov dword ptr [edx + 0xc4], 0x42200000 */ W32((u32)(r_edx+0xc4u), 0x42200000u);
    /* 00626383: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626386: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062638d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062638f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626390: ret 8 */ FN_RET(0x00626248); r_esp += 12; return;
L_00626393:; BB(0x00626393);
    /* 00626393: mov dword ptr [edx + 0xc8], 1 */ W32((u32)(r_edx+0xc8u), 0x1u);
    /* 0062639d: jmp 0x626364 */ goto L_00626364;
L_0062639f:; BB(0x0062639f);
    /* 0062639f: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 006263a9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006263ab: jmp 0x6262e0 */ goto L_006262e0;
}

void f_006263b0(void) /* sub_6263B0 */
{
    FN_ENTER(0x006263b0);
    /* 006263b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006263b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006263b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006263b5: push 0x8e2a80 */ { u32 v = 0x8e2a80u; r_esp -= 4; W32(r_esp, v); }
    /* 006263ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006263c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006263c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006263c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006263cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006263ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006263d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006263d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006263d7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006263dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006263e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6263e8u); f_008581c5();
    /* 006263e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006263e9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006263ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006263ee: je 0x626496 */ if (fZ) goto L_00626496;
L_006263f4:; BB(0x006263f4);
    /* 006263f4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006263fb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626402: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062640a: push 0x9c59d0 */ { u32 v = 0x9c59d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062640f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626411: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x626416u); f_005b7a84();
    /* 00626416: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626419: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626420:; BB(0x00626420);
    /* 00626420: mov dword ptr [0xa8ed40], eax */ W32((u32)(0xa8ed40u), r_eax);
    /* 00626425: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062642c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062642e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x626433u); f_008581c5();
    /* 00626433: mov edx, dword ptr [0xa8ed40] */ r_edx = R32((u32)(0xa8ed40u));
    /* 00626439: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062643f: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00626442: mov dword ptr [0xa8ed3c], eax */ W32((u32)(0xa8ed3cu), r_eax);
    /* 00626447: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00626449: push 0x931b74 */ { u32 v = 0x931b74u; r_esp -= 4; W32(r_esp, v); }
    /* 0062644e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626453u); f_008009dc();
    /* 00626453: push 0x931b8c */ { u32 v = 0x931b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00626458: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 0062645e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00626461: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626466u); f_008009dc();
    /* 00626466: push 0x931ba4 */ { u32 v = 0x931ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062646b: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 00626471: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00626474: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626479u); f_008009dc();
    /* 00626479: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062647c: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 00626482: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626485: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00626488: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062648b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626492: mov esp, ebp */ r_esp = r_ebp;
    /* 00626494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626495: ret  */ FN_RET(0x006263b0); r_esp += 4; return;
L_00626496:; BB(0x00626496);
    /* 00626496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626498: jmp 0x626420 */ goto L_00626420;
}

void f_0062645f(void)
{
    FN_ENTER(0x0062645f);
    goto L_0062645f;
L_00626409:; BB(0x00626409);
    /* 00626409: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062640a: push 0x9c59d0 */ { u32 v = 0x9c59d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0062640f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626411: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x626416u); f_005b7a84();
    /* 00626416: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626419: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00626420: mov dword ptr [0xa8ed40], eax */ W32((u32)(0xa8ed40u), r_eax);
    /* 00626425: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062642c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062642e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x626433u); f_008581c5();
    /* 00626433: mov edx, dword ptr [0xa8ed40] */ r_edx = R32((u32)(0xa8ed40u));
    /* 00626439: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062643f: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00626442: mov dword ptr [0xa8ed3c], eax */ W32((u32)(0xa8ed3cu), r_eax);
    /* 00626447: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00626449: push 0x931b74 */ { u32 v = 0x931b74u; r_esp -= 4; W32(r_esp, v); }
    /* 0062644e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626453u); f_008009dc();
    /* 00626453: push 0x931b8c */ { u32 v = 0x931b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00626458: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 0062645e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0062645f:; BB(0x0062645f);
    /* 0062645f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00626460: add al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fC = (r < a); }
    /* 00626461: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626466u); f_008009dc();
    /* 00626462: jbe 0x626409 */ if ((fC||fZ)) goto L_00626409;
L_00626464:; BB(0x00626464);
    /* 00626464: sbb eax, 0x1ba46800 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x1ba46800u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00626466: push 0x931ba4 */ { u32 v = 0x931ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 00626469: xchg ebx, eax */ { u32 x = r_ebx; u32 y = r_eax; r_ebx = y; r_eax = x; }
    /* 0062646a: add byte ptr [ebx - 0x5712c3eb], cl */ { u32 ad = (u32)(r_ebx+0xa8ed3c15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0062646b: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 00626470: add byte ptr [ecx + 0x63e80842], cl */ { u32 ad = (u32)(r_ecx+0x63e80842u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00626471: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00626474: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626479u); f_008009dc();
    /* 00626476: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00626477: sbb eax, 0x10c48300 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x10c48300u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 00626479: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062647c: mov edx, dword ptr [0xa8ed3c] */ r_edx = R32((u32)(0xa8ed3cu));
    /* 00626482: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626485: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00626488: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062648b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626492: mov esp, ebp */ r_esp = r_ebp;
    /* 00626494: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626495: ret  */ FN_RET(0x0062645f); r_esp += 4; return;
}

void f_0062649c(void) /* sub_62649C */
{
    FN_ENTER(0x0062649c);
    /* 0062649c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062649d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062649f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006264a1: call 0x6264c0 */ r_esp -= 4; W32(r_esp, 0x6264a6u); f_006264c0();
    /* 006264a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006264aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006264ac: jne 0x6264b2 */ if (!fZ) goto L_006264b2;
L_006264ae:; BB(0x006264ae);
    /* 006264ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006264af: ret 4 */ FN_RET(0x0062649c); r_esp += 8; return;
L_006264b2:; BB(0x006264b2);
    /* 006264b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006264b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6264b8u); f_005c2f74();
    /* 006264b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006264b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006264ba: ret 4 */ FN_RET(0x0062649c); r_esp += 8; return;
}

void f_006264c0(void) /* sub_6264C0 */
{
    FN_ENTER(0x006264c0);
    /* 006264c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006264c1: mov ebp, esp */ r_ebp = r_esp;
    /* 006264c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006264c5: push 0x8e2a9c */ { u32 v = 0x8e2a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 006264ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006264d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006264d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006264d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006264db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006264de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006264e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006264e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006264e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006264ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006264f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006264f4: mov dword ptr [eax], 0xb28ac0 */ W32((u32)(r_eax), 0xb28ac0u);
    /* 006264fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006264fb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x626500u); f_007b4e84();
    /* 00626500: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626501: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626504: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x626509u); f_007b9c8c();
    /* 00626509: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626510: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626513: call 0x625600 */ r_esp -= 4; W32(r_esp, 0x626518u); f_00625600();
    /* 00626518: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062651b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626522: mov esp, ebp */ r_esp = r_ebp;
    /* 00626524: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626525: ret  */ FN_RET(0x006264c0); r_esp += 4; return;
}

void f_00626528(void) /* sub_626528 */
{
    FN_ENTER(0x00626528);
    /* 00626528: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00626529: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062652a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062652c: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00626532: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00626538: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0062653a: mov ebx, eax */ r_ebx = r_eax;
    /* 0062653c: mov esi, ecx */ r_esi = r_ecx;
L_0062653e:; BB(0x0062653e);
    /* 0062653e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626540: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626541: mov ecx, esi */ r_ecx = r_esi;
    /* 00626543: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x626548u); f_007b52ec();
    /* 00626548: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062654b: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062654e: jl 0x62653e */ if ((fS!=fO)) goto L_0062653e;
L_00626550:; BB(0x00626550);
    /* 00626550: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626551: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626552: ret  */ FN_RET(0x00626528); r_esp += 4; return;
}

void f_00626546(void)
{
    FN_ENTER(0x00626546);
    goto L_00626546;
L_0062653e:; BB(0x0062653e);
    /* 0062653e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626540: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626541: mov ecx, esi */ r_ecx = r_esi;
    /* 00626543: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x626548u); f_007b52ec();
L_00626546:; BB(0x00626546);
    /* 00626546: sbb byte ptr [eax], al */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 00626548: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0062654b: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0062654e: jl 0x62653e */ if ((fS!=fO)) goto L_0062653e;
L_00626550:; BB(0x00626550);
    /* 00626550: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626551: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00626552: ret  */ FN_RET(0x00626546); r_esp += 4; return;
}

void f_00626554(void) /* sub_626554 */
{
    FN_ENTER(0x00626554);
    /* 00626554: mov eax, dword ptr [0xa8ed48] */ r_eax = R32((u32)(0xa8ed48u));
    /* 00626559: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0062655b: je 0x62659c */ if (fZ) goto L_0062659c;
L_0062655d:; BB(0x0062655d);
    /* 0062655d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626560: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x626565u); f_00800b5c();
    /* 00626565: mov eax, dword ptr [0xa8ed48] */ r_eax = R32((u32)(0xa8ed48u));
    /* 0062656a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062656d: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x626572u); f_00800b5c();
    /* 00626572: mov eax, dword ptr [0xa8ed48] */ r_eax = R32((u32)(0xa8ed48u));
    /* 00626577: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0062657a: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x62657fu); f_00800b5c();
    /* 0062657f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626582: mov eax, dword ptr [0xa8ed48] */ r_eax = R32((u32)(0xa8ed48u));
    /* 00626587: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626589: je 0x62659c */ if (fZ) goto L_0062659c;
L_0062658b:; BB(0x0062658b);
    /* 0062658b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0062658c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x626591u); f_00857e98();
    /* 00626591: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626592: mov dword ptr [0xa8ed48], 0 */ W32((u32)(0xa8ed48u), 0x0u);
L_0062659c:; BB(0x0062659c);
    /* 0062659c: mov ecx, dword ptr [0xa8ed4c] */ r_ecx = R32((u32)(0xa8ed4cu));
    /* 006265a2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006265a4: je 0x6265b9 */ if (fZ) goto L_006265b9;
L_006265a6:; BB(0x006265a6);
    /* 006265a6: je 0x6265af */ if (fZ) goto L_006265af;
L_006265a8:; BB(0x006265a8);
    /* 006265a8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006265aa: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6265afu); f_004066a8();
L_006265af:; BB(0x006265af);
    /* 006265af: mov dword ptr [0xa8ed4c], 0 */ W32((u32)(0xa8ed4cu), 0x0u);
L_006265b9:; BB(0x006265b9);
    /* 006265b9: ret  */ FN_RET(0x00626554); r_esp += 4; return;
}

void f_006265bc(void)
{
    FN_ENTER(0x006265bc);
    /* 006265bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006265bd: mov ebp, esp */ r_ebp = r_esp;
    /* 006265bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006265c1: push 0x8e2ac4 */ { u32 v = 0x8e2ac4u; r_esp -= 4; W32(r_esp, v); }
    /* 006265c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006265cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006265cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006265d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006265d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006265da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006265dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006265e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006265e3: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006265e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006265ef: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6265f4u); f_005caba4();
    /* 006265f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006265f5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006265f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006265fa: je 0x626633 */ if (fZ) goto L_00626633;
L_006265fc:; BB(0x006265fc);
    /* 006265fc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00626603: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0062660a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0062660d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626613: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626616: call 0x626638 */ r_esp -= 4; W32(r_esp, 0x62661bu); f_00626638();
    /* 0062661b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0062661e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626625:; BB(0x00626625);
    /* 00626625: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626628: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062662f: mov esp, ebp */ r_esp = r_ebp;
    /* 00626631: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626632: ret  */ FN_RET(0x006265bc); r_esp += 4; return;
L_00626633:; BB(0x00626633);
    /* 00626633: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626635: jmp 0x626625 */ goto L_00626625;
}

void f_00626638(void) /* sub_626638 */
{
    FN_ENTER(0x00626638);
    /* 00626638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626639: mov ebp, esp */ r_ebp = r_esp;
    /* 0062663b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0062663d: push 0x8e2ae0 */ { u32 v = 0x8e2ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626650: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626656: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00626659: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0062665c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0062665f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00626662: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626665: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00626668: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0062666b: call 0x625658 */ r_esp -= 4; W32(r_esp, 0x626670u); f_00625658();
    /* 00626670: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626677: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062667a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0062667d: mov dword ptr [ecx], 0xb28ac0 */ W32((u32)(r_ecx), 0xb28ac0u);
    /* 00626683: mov eax, dword ptr [0x9c5b80] */ r_eax = R32((u32)(0x9c5b80u));
    /* 00626688: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626689: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0062668c: call dword ptr [0xb28ad4] */ { u32 t = R32((u32)(0xb28ad4u)); r_esp -= 4; W32(r_esp, 0x626692u); call_ind(t); }
    /* 00626692: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626695: mov eax, dword ptr [0xa8ed4c] */ r_eax = R32((u32)(0xa8ed4cu));
    /* 0062669a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006266a0: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 006266a3: mov dword ptr [ecx + 0x34], ebx */ W32((u32)(r_ecx+0x34u), r_ebx);
    /* 006266a6: mov ebx, dword ptr [ecx + 0x88] */ r_ebx = R32((u32)(r_ecx+0x88u));
    /* 006266ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006266ae: jl 0x62678f */ if ((fS!=fO)) goto L_0062678f;
L_006266b4:; BB(0x006266b4);
    /* 006266b4: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006266b7: jge 0x6266c1 */ if ((fS==fO)) goto L_006266c1;
L_006266b9:; BB(0x006266b9);
    /* 006266b9: mov dword ptr [ecx + 0xd4], ebx */ W32((u32)(r_ecx+0xd4u), r_ebx);
    /* 006266bf: jmp 0x6266d0 */ goto L_006266d0;
L_006266c1:; BB(0x006266c1);
    /* 006266c1: mov dword ptr [ecx + 0xd4], 3 */ W32((u32)(r_ecx+0xd4u), 0x3u);
    /* 006266cb: mov ebx, 3 */ r_ebx = 0x3u;
L_006266d0:; BB(0x006266d0);
    /* 006266d0: mov edx, dword ptr [0xa8ed48] */ r_edx = R32((u32)(0xa8ed48u));
    /* 006266d6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006266d8: mov ebx, dword ptr [edx + ebx*4] */ r_ebx = R32((u32)(r_edx+r_ebx*4));
    /* 006266db: mov dword ptr [ecx + 0x24], ebx */ W32((u32)(r_ecx+0x24u), r_ebx);
    /* 006266de: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 006266e4: push 0x9c5a00 */ { u32 v = 0x9c5a00u; r_esp -= 4; W32(r_esp, v); }
    /* 006266e9: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006266ec: mov dword ptr [ecx + 0xbc], esi */ W32((u32)(r_ecx+0xbcu), r_esi);
    /* 006266f2: fild dword ptr [esi + 4] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4u)));
    /* 006266f5: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 006266f8: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006266fb: fadd dword ptr [edi*4 + 0x931c90] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x931c90u));
    /* 00626702: fadd dword ptr [0x931ca0] */ ST(0) = ST(0) + R_F32((u32)(0x931ca0u));
    /* 00626708: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0062670e: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x626713u); f_007b9a88();
    /* 00626713: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00626716: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x62671bu); f_007b999c();
    /* 0062671b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062671c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062671f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x626724u); f_007b4f54();
    /* 00626724: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626727: mov eax, dword ptr [edx + 0x84] */ r_eax = R32((u32)(r_edx+0x84u));
    /* 0062672d: mov dword ptr [edx + 0xcc], eax */ W32((u32)(r_edx+0xccu), r_eax);
    /* 00626733: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00626738: jle 0x626746 */ if ((fZ||fS!=fO)) goto L_00626746;
L_0062673a:; BB(0x0062673a);
    /* 0062673a: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 00626744: jmp 0x626754 */ goto L_00626754;
L_00626746:; BB(0x00626746);
    /* 00626746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626748: jl 0x626783 */ if ((fS!=fO)) goto L_00626783;
L_0062674a:; BB(0x0062674a);
    /* 0062674a: mov dword ptr [edx + 0xc8], 2 */ W32((u32)(r_edx+0xc8u), 0x2u);
L_00626754:; BB(0x00626754);
    /* 00626754: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626757: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0062675a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0062675d: mov eax, edx */ r_eax = r_edx;
    /* 0062675f: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00626769: mov dword ptr [edx + 0xc4], 0x42480000 */ W32((u32)(r_edx+0xc4u), 0x42480000u);
    /* 00626773: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626776: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062677d: mov esp, ebp */ r_esp = r_ebp;
    /* 0062677f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626780: ret 8 */ FN_RET(0x00626638); r_esp += 12; return;
L_00626783:; BB(0x00626783);
    /* 00626783: mov dword ptr [edx + 0xc8], 1 */ W32((u32)(r_edx+0xc8u), 0x1u);
    /* 0062678d: jmp 0x626754 */ goto L_00626754;
L_0062678f:; BB(0x0062678f);
    /* 0062678f: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 00626799: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0062679b: jmp 0x6266d0 */ goto L_006266d0;
}

void f_006267a0(void) /* sub_6267A0 */
{
    FN_ENTER(0x006267a0);
    /* 006267a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006267a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006267a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006267a5: push 0x8e2b08 */ { u32 v = 0x8e2b08u; r_esp -= 4; W32(r_esp, v); }
    /* 006267aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006267b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006267b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006267bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006267be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006267c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006267c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006267c7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006267cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006267d3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6267d8u); f_008581c5();
    /* 006267d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006267d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006267dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006267de: je 0x626886 */ if (fZ) goto L_00626886;
L_006267e4:; BB(0x006267e4);
    /* 006267e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006267eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006267f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006267f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006267f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006267fa: push 0x9c5b70 */ { u32 v = 0x9c5b70u; r_esp -= 4; W32(r_esp, v); }
    /* 006267ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626801: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x626806u); f_005b7a84();
    /* 00626806: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626809: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626810:; BB(0x00626810);
    /* 00626810: mov dword ptr [0xa8ed4c], eax */ W32((u32)(0xa8ed4cu), r_eax);
    /* 00626815: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0062681c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0062681e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x626823u); f_008581c5();
    /* 00626823: mov edx, dword ptr [0xa8ed4c] */ r_edx = R32((u32)(0xa8ed4cu));
    /* 00626829: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0062682f: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00626832: mov dword ptr [0xa8ed48], eax */ W32((u32)(0xa8ed48u), r_eax);
    /* 00626837: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00626839: push 0x931b74 */ { u32 v = 0x931b74u; r_esp -= 4; W32(r_esp, v); }
    /* 0062683e: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626843u); f_008009dc();
    /* 00626843: push 0x931b8c */ { u32 v = 0x931b8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00626848: mov edx, dword ptr [0xa8ed48] */ r_edx = R32((u32)(0xa8ed48u));
    /* 0062684e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00626851: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626856u); f_008009dc();
    /* 00626856: push 0x931ba4 */ { u32 v = 0x931ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 0062685b: mov edx, dword ptr [0xa8ed48] */ r_edx = R32((u32)(0xa8ed48u));
    /* 00626861: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00626864: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626869u); f_008009dc();
    /* 00626869: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0062686c: mov edx, dword ptr [0xa8ed48] */ r_edx = R32((u32)(0xa8ed48u));
    /* 00626872: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626875: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00626878: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0062687b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626882: mov esp, ebp */ r_esp = r_ebp;
    /* 00626884: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626885: ret  */ FN_RET(0x006267a0); r_esp += 4; return;
L_00626886:; BB(0x00626886);
    /* 00626886: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626888: jmp 0x626810 */ goto L_00626810;
}

void f_0062688c(void) /* sub_62688C */
{
    FN_ENTER(0x0062688c);
    /* 0062688c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0062688d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0062688f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00626891: call 0x6268b0 */ r_esp -= 4; W32(r_esp, 0x626896u); f_006268b0();
    /* 00626896: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0062689a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062689c: jne 0x6268a2 */ if (!fZ) goto L_006268a2;
L_0062689e:; BB(0x0062689e);
    /* 0062689e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0062689f: ret 4 */ FN_RET(0x0062688c); r_esp += 8; return;
L_006268a2:; BB(0x006268a2);
    /* 006268a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006268a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6268a8u); f_005c2f74();
    /* 006268a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006268a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006268aa: ret 4 */ FN_RET(0x0062688c); r_esp += 8; return;
}

void f_006268b0(void) /* sub_6268B0 */
{
    FN_ENTER(0x006268b0);
    /* 006268b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006268b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006268b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006268b5: push 0x8e2b24 */ { u32 v = 0x8e2b24u; r_esp -= 4; W32(r_esp, v); }
    /* 006268ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006268c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006268c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006268c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006268cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006268ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006268d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006268d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006268d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006268da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006268dd: mov dword ptr [ecx], 0xb28ba0 */ W32((u32)(r_ecx), 0xb28ba0u);
    /* 006268e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006268ea: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6268efu); f_007ba1f0();
    /* 006268ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006268f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006268f9: mov esp, ebp */ r_esp = r_ebp;
    /* 006268fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006268fc: ret  */ FN_RET(0x006268b0); r_esp += 4; return;
}

void f_00626900(void) /* sub_626900 */
{
    FN_ENTER(0x00626900);
    /* 00626900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626901: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00626903: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00626906: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00626908: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0062690d: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00626912: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x626915u); call_ind(t); }
    /* 00626915: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00626918: je 0x62691c */ if (fZ) goto L_0062691c;
L_0062691a:; BB(0x0062691a);
    /* 0062691a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062691b: ret  */ FN_RET(0x00626900); r_esp += 4; return;
L_0062691c:; BB(0x0062691c);
    /* 0062691c: mov ecx, dword ptr [0xa8ed54] */ r_ecx = R32((u32)(0xa8ed54u));
    /* 00626922: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x626927u); f_00829cc8();
    /* 00626927: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x62692cu); f_0082d7b0();
    /* 0062692c: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0062692f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x626934u); f_0082d838();
    /* 00626934: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00626937: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00626939: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x62693eu); f_0082d8bc();
    /* 0062693e: push dword ptr [ebp + 0x90] */ { u32 v = R32((u32)(r_ebp+0x90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626944: mov ecx, dword ptr [0xa8ed58] */ r_ecx = R32((u32)(0xa8ed58u));
    /* 0062694a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x62694fu); f_005b8610();
    /* 0062694f: mov ecx, eax */ r_ecx = r_eax;
    /* 00626951: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x626956u); f_00831758();
    /* 00626956: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x62695bu); f_0082da80();
    /* 0062695b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062695c: ret  */ FN_RET(0x00626900); r_esp += 4; return;
}

void f_00626960(void) /* sub_626960 */
{
    FN_ENTER(0x00626960);
    /* 00626960: mov ecx, dword ptr [0xa8ed54] */ r_ecx = R32((u32)(0xa8ed54u));
    /* 00626966: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626968: je 0x626985 */ if (fZ) goto L_00626985;
L_0062696a:; BB(0x0062696a);
    /* 0062696a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x62696fu); f_00829de0();
    /* 0062696f: push dword ptr [0xa8ed54] */ { u32 v = R32((u32)(0xa8ed54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626975: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x62697au); f_0082e960();
    /* 0062697a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0062697b: mov dword ptr [0xa8ed54], 0 */ W32((u32)(0xa8ed54u), 0x0u);
L_00626985:; BB(0x00626985);
    /* 00626985: mov ecx, dword ptr [0xa8ed58] */ r_ecx = R32((u32)(0xa8ed58u));
    /* 0062698b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062698d: je 0x6269a2 */ if (fZ) goto L_006269a2;
L_0062698f:; BB(0x0062698f);
    /* 0062698f: je 0x626998 */ if (fZ) goto L_00626998;
L_00626991:; BB(0x00626991);
    /* 00626991: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626993: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x626998u); f_004066a8();
L_00626998:; BB(0x00626998);
    /* 00626998: mov dword ptr [0xa8ed58], 0 */ W32((u32)(0xa8ed58u), 0x0u);
L_006269a2:; BB(0x006269a2);
    /* 006269a2: ret  */ FN_RET(0x00626960); r_esp += 4; return;
}

void f_006269a4(void)
{
    FN_ENTER(0x006269a4);
    /* 006269a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006269a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006269a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006269a9: push 0x8e2b4c */ { u32 v = 0x8e2b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006269ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006269b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006269b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006269bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006269bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006269c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006269c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006269c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006269cb: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 006269d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006269d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6269dcu); f_005caba4();
    /* 006269dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006269dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006269e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006269e2: je 0x626a1b */ if (fZ) goto L_00626a1b;
L_006269e4:; BB(0x006269e4);
    /* 006269e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006269eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006269f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006269f5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006269fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006269fe: call 0x626a20 */ r_esp -= 4; W32(r_esp, 0x626a03u); f_00626a20();
    /* 00626a03: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626a06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626a0d:; BB(0x00626a0d);
    /* 00626a0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626a10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626a17: mov esp, ebp */ r_esp = r_ebp;
    /* 00626a19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626a1a: ret  */ FN_RET(0x006269a4); r_esp += 4; return;
L_00626a1b:; BB(0x00626a1b);
    /* 00626a1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626a1d: jmp 0x626a0d */ goto L_00626a0d;
}

void f_00626a20(void) /* sub_626A20 */
{
    FN_ENTER(0x00626a20);
    /* 00626a20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626a21: mov ebp, esp */ r_ebp = r_esp;
    /* 00626a23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626a25: push 0x8e2b68 */ { u32 v = 0x8e2b68u; r_esp -= 4; W32(r_esp, v); }
    /* 00626a2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626a30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626a31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626a38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626a3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626a3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00626a41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00626a44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00626a47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00626a4a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626a4d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00626a50: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00626a53: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x626a58u); f_007ba278();
    /* 00626a58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626a5f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626a62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00626a65: mov dword ptr [ecx], 0xb28ba0 */ W32((u32)(r_ecx), 0xb28ba0u);
    /* 00626a6b: mov eax, dword ptr [0x9c5bbc] */ r_eax = R32((u32)(0x9c5bbcu));
    /* 00626a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00626a71: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00626a74: call dword ptr [0xb28bb4] */ { u32 t = R32((u32)(0xb28bb4u)); r_esp -= 4; W32(r_esp, 0x626a7au); call_ind(t); }
    /* 00626a7a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626a7d: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00626a83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00626a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00626a87: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00626a8c: jg 0x626a90 */ if ((!fZ&&fS==fO)) goto L_00626a90;
L_00626a8e:; BB(0x00626a8e);
    /* 00626a8e: mov eax, edx */ r_eax = r_edx;
L_00626a90:; BB(0x00626a90);
    /* 00626a90: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00626a93: jl 0x626a97 */ if ((fS!=fO)) goto L_00626a97;
L_00626a95:; BB(0x00626a95);
    /* 00626a95: mov eax, ecx */ r_eax = r_ecx;
L_00626a97:; BB(0x00626a97);
    /* 00626a97: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 00626a9d: mov eax, ebx */ r_eax = r_ebx;
    /* 00626a9f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00626aa2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626aa5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626aac: mov esp, ebp */ r_esp = r_ebp;
    /* 00626aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626aaf: ret 8 */ FN_RET(0x00626a20); r_esp += 12; return;
}

void f_00626ab4(void) /* sub_626AB4 */
{
    FN_ENTER(0x00626ab4);
    /* 00626ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626ab5: mov ebp, esp */ r_ebp = r_esp;
    /* 00626ab7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626ab9: push 0x8e2b90 */ { u32 v = 0x8e2b90u; r_esp -= 4; W32(r_esp, v); }
    /* 00626abe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626ac5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626acc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626acf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626ad2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626ad5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626ad8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626adb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00626ae0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00626ae7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x626aecu); f_008581c5();
    /* 00626aec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626aed: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00626af0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626af2: je 0x626b76 */ if (fZ) goto L_00626b76;
L_00626af8:; BB(0x00626af8);
    /* 00626af8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00626aff: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626b06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626b09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626b0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626b0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626b0e: push 0x9c5bac */ { u32 v = 0x9c5bacu; r_esp -= 4; W32(r_esp, v); }
    /* 00626b13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626b15: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x626b1au); f_005b7a84();
    /* 00626b1a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626b1d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626b24:; BB(0x00626b24);
    /* 00626b24: mov dword ptr [0xa8ed58], eax */ W32((u32)(0xa8ed58u), r_eax);
    /* 00626b29: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626b30: push 0x931d48 */ { u32 v = 0x931d48u; r_esp -= 4; W32(r_esp, v); }
    /* 00626b35: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x626b3au); f_008009dc();
    /* 00626b3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626b3b: mov ecx, dword ptr [0xa8ed58] */ r_ecx = R32((u32)(0xa8ed58u));
    /* 00626b41: mov dword ptr [0xa8ed54], eax */ W32((u32)(0xa8ed54u), r_eax);
    /* 00626b46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00626b48: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x626b4du); f_005b8610();
    /* 00626b4d: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00626b52: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00626b57: push dword ptr [0xa8ed54] */ { u32 v = R32((u32)(0xa8ed54u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626b5e: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00626b60: call 0x6086e8 */ r_esp -= 4; W32(r_esp, 0x626b65u); f_006086e8();
    /* 00626b65: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00626b68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626b6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626b72: mov esp, ebp */ r_esp = r_ebp;
    /* 00626b74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626b75: ret  */ FN_RET(0x00626ab4); r_esp += 4; return;
L_00626b76:; BB(0x00626b76);
    /* 00626b76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626b78: jmp 0x626b24 */ goto L_00626b24;
}

void f_00626b7c(void) /* sub_626B7C */
{
    FN_ENTER(0x00626b7c);
    /* 00626b7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00626b7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00626b81: call 0x626c14 */ r_esp -= 4; W32(r_esp, 0x626b86u); f_00626c14();
    /* 00626b86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00626b8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626b8c: jne 0x626b92 */ if (!fZ) goto L_00626b92;
L_00626b8e:; BB(0x00626b8e);
    /* 00626b8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626b8f: ret 4 */ FN_RET(0x00626b7c); r_esp += 8; return;
L_00626b92:; BB(0x00626b92);
    /* 00626b92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626b93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x626b98u); f_005c2f74();
    /* 00626b98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626b99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626b9a: ret 4 */ FN_RET(0x00626b7c); r_esp += 8; return;
}

void f_00626ba0(void) /* sub_626BA0 */
{
    FN_ENTER(0x00626ba0);
    /* 00626ba0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626ba1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00626ba3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00626ba5: call 0x626bc4 */ r_esp -= 4; W32(r_esp, 0x626baau); f_00626bc4();
    /* 00626baa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00626bae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626bb0: jne 0x626bb6 */ if (!fZ) goto L_00626bb6;
L_00626bb2:; BB(0x00626bb2);
    /* 00626bb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626bb3: ret 4 */ FN_RET(0x00626ba0); r_esp += 8; return;
L_00626bb6:; BB(0x00626bb6);
    /* 00626bb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626bb7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x626bbcu); f_005c2f74();
    /* 00626bbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626bbd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626bbe: ret 4 */ FN_RET(0x00626ba0); r_esp += 8; return;
}

void f_00626bc4(void) /* sub_626BC4 */
{
    FN_ENTER(0x00626bc4);
    /* 00626bc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626bc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00626bc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626bc9: push 0x8e2bac */ { u32 v = 0x8e2bacu; r_esp -= 4; W32(r_esp, v); }
    /* 00626bce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626bd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626bd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626bdc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626bdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626be2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626be5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626be8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626beb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00626bee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626bf1: mov dword ptr [ecx], 0xb28ee0 */ W32((u32)(r_ecx), 0xb28ee0u);
    /* 00626bf7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626bfe: call 0x626c14 */ r_esp -= 4; W32(r_esp, 0x626c03u); f_00626c14();
    /* 00626c03: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626c06: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626c0d: mov esp, ebp */ r_esp = r_ebp;
    /* 00626c0f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626c10: ret  */ FN_RET(0x00626bc4); r_esp += 4; return;
}

void f_00626c14(void) /* sub_626C14 */
{
    FN_ENTER(0x00626c14);
    /* 00626c14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626c15: mov ebp, esp */ r_ebp = r_esp;
    /* 00626c17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626c19: push 0x8e2bc8 */ { u32 v = 0x8e2bc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00626c1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626c24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626c25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626c2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626c2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626c32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626c35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626c38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626c3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00626c3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626c45: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626c48: mov dword ptr [eax], 0xb28d80 */ W32((u32)(r_eax), 0xb28d80u);
    /* 00626c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626c4f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x626c54u); f_007b4e84();
    /* 00626c54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626c55: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626c58: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x626c5du); f_007b9c8c();
    /* 00626c5d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626c64: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626c67: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x626c6cu); f_00770660();
    /* 00626c6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626c6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626c76: mov esp, ebp */ r_esp = r_ebp;
    /* 00626c78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626c79: ret  */ FN_RET(0x00626c14); r_esp += 4; return;
}

void f_00626c7c(void) /* sub_626C7C */
{
    FN_ENTER(0x00626c7c);
    /* 00626c7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626c7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00626c7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00626c81: call 0x626ca0 */ r_esp -= 4; W32(r_esp, 0x626c86u); f_00626ca0();
    /* 00626c86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00626c8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626c8c: jne 0x626c92 */ if (!fZ) goto L_00626c92;
L_00626c8e:; BB(0x00626c8e);
    /* 00626c8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626c8f: ret 4 */ FN_RET(0x00626c7c); r_esp += 8; return;
L_00626c92:; BB(0x00626c92);
    /* 00626c92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626c93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x626c98u); f_005c2f74();
    /* 00626c98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626c99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626c9a: ret 4 */ FN_RET(0x00626c7c); r_esp += 8; return;
}

void f_00626ca0(void) /* sub_626CA0 */
{
    FN_ENTER(0x00626ca0);
    /* 00626ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00626ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626ca5: push 0x8e2be4 */ { u32 v = 0x8e2be4u; r_esp -= 4; W32(r_esp, v); }
    /* 00626caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626cb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626cb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626cbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626cbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626cc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626cc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626cc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00626cca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626ccd: mov dword ptr [ecx], 0xb29040 */ W32((u32)(r_ecx), 0xb29040u);
    /* 00626cd3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626cda: call 0x626c14 */ r_esp -= 4; W32(r_esp, 0x626cdfu); f_00626c14();
    /* 00626cdf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626ce2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626ce9: mov esp, ebp */ r_esp = r_ebp;
    /* 00626ceb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626cec: ret  */ FN_RET(0x00626ca0); r_esp += 4; return;
}

void f_00626cf0(void) /* sub_626CF0 */
{
    FN_ENTER(0x00626cf0);
    /* 00626cf0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626cf1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00626cf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00626cf5: call 0x626d14 */ r_esp -= 4; W32(r_esp, 0x626cfau); f_00626d14();
    /* 00626cfa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00626cfe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626d00: jne 0x626d06 */ if (!fZ) goto L_00626d06;
L_00626d02:; BB(0x00626d02);
    /* 00626d02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626d03: ret 4 */ FN_RET(0x00626cf0); r_esp += 8; return;
L_00626d06:; BB(0x00626d06);
    /* 00626d06: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00626d07: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x626d0cu); f_005c2f74();
    /* 00626d0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626d0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00626d0e: ret 4 */ FN_RET(0x00626cf0); r_esp += 8; return;
}

void f_00626d14(void) /* sub_626D14 */
{
    FN_ENTER(0x00626d14);
    /* 00626d14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626d15: mov ebp, esp */ r_ebp = r_esp;
    /* 00626d17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626d19: push 0x8e2c00 */ { u32 v = 0x8e2c00u; r_esp -= 4; W32(r_esp, v); }
    /* 00626d1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626d2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626d2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626d32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626d35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626d38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626d3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00626d3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626d41: mov dword ptr [ecx], 0xb291a0 */ W32((u32)(r_ecx), 0xb291a0u);
    /* 00626d47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00626d4e: call 0x626c14 */ r_esp -= 4; W32(r_esp, 0x626d53u); f_00626c14();
    /* 00626d53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626d56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626d5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00626d5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626d60: ret  */ FN_RET(0x00626d14); r_esp += 4; return;
}

void f_00626d64(void) /* sub_626D64 */
{
    FN_ENTER(0x00626d64);
    /* 00626d64: fld dword ptr [0x931e98] */ FPUSH(R_F32((u32)(0x931e98u)));
    /* 00626d6a: ret 8 */ FN_RET(0x00626d64); r_esp += 12; return;
}

void f_00626d70(void) /* sub_626D70 */
{
    FN_ENTER(0x00626d70);
    /* 00626d70: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00626d75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d77: je 0x626daa */ if (fZ) goto L_00626daa;
L_00626d79:; BB(0x00626d79);
    /* 00626d79: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626d7c: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x626d81u); f_00800b5c();
    /* 00626d81: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00626d86: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00626d88: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x626d8du); f_00800b5c();
    /* 00626d8d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00626d90: mov eax, dword ptr [0xa8ed84] */ r_eax = R32((u32)(0xa8ed84u));
    /* 00626d95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626d97: je 0x626daa */ if (fZ) goto L_00626daa;
L_00626d99:; BB(0x00626d99);
    /* 00626d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626d9a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x626d9fu); f_00857e98();
    /* 00626d9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626da0: mov dword ptr [0xa8ed84], 0 */ W32((u32)(0xa8ed84u), 0x0u);
L_00626daa:; BB(0x00626daa);
    /* 00626daa: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00626db0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626db2: je 0x626dc7 */ if (fZ) goto L_00626dc7;
L_00626db4:; BB(0x00626db4);
    /* 00626db4: je 0x626dbd */ if (fZ) goto L_00626dbd;
L_00626db6:; BB(0x00626db6);
    /* 00626db6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00626db8: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x626dbdu); f_004066a8();
L_00626dbd:; BB(0x00626dbd);
    /* 00626dbd: mov dword ptr [0xa8ed80], 0 */ W32((u32)(0xa8ed80u), 0x0u);
L_00626dc7:; BB(0x00626dc7);
    /* 00626dc7: ret  */ FN_RET(0x00626d70); r_esp += 4; return;
}

void f_00626dc8(void)
{
    FN_ENTER(0x00626dc8);
    /* 00626dc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626dc9: mov ebp, esp */ r_ebp = r_esp;
    /* 00626dcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626dcd: push 0x8e2c5e */ { u32 v = 0x8e2c5eu; r_esp -= 4; W32(r_esp, v); }
    /* 00626dd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626dd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626de0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626de3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626de6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626de9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626dec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626def: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00626df2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626df4: je 0x626ebc */ if (fZ) goto L_00626ebc;
L_00626dfa:; BB(0x00626dfa);
    /* 00626dfa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00626dfd: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
    /* 00626e00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e02: je 0x626ecc */ if (fZ) goto L_00626ecc;
L_00626e08:; BB(0x00626e08);
    /* 00626e08: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e0b: jne 0x626e62 */ if (!fZ) goto L_00626e62;
L_00626e0d:; BB(0x00626e0d);
    /* 00626e0d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00626e14: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 00626e19: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x626e1eu); f_005caba4();
    /* 00626e1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626e1f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00626e22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e24: je 0x626f1d */ if (fZ) goto L_00626f1d;
L_00626e2a:; BB(0x00626e2a);
    /* 00626e2a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00626e31: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00626e38: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00626e3b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00626e3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626e3f: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626e45: call 0x6270f8 */ r_esp -= 4; W32(r_esp, 0x626e4au); f_006270f8();
    /* 00626e4a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00626e4d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00626e54: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626e57: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626e5e: mov esp, ebp */ r_esp = r_ebp;
    /* 00626e60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626e61: ret  */ FN_RET(0x00626dc8); r_esp += 4; return;
L_00626e62:; BB(0x00626e62);
    /* 00626e62: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e65: jne 0x626ebc */ if (!fZ) goto L_00626ebc;
L_00626e67:; BB(0x00626e67);
    /* 00626e67: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00626e6e: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 00626e73: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x626e78u); f_005caba4();
    /* 00626e78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626e79: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00626e7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626e7e: je 0x626f24 */ if (fZ) goto L_00626f24;
L_00626e84:; BB(0x00626e84);
    /* 00626e84: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00626e8b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626e92: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00626e95: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626e99: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626e9f: call 0x626f2c */ r_esp -= 4; W32(r_esp, 0x626ea4u); f_00626f2c();
    /* 00626ea4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00626ea7: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_00626eae:; BB(0x00626eae);
    /* 00626eae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626eb1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626eb8: mov esp, ebp */ r_esp = r_ebp;
    /* 00626eba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626ebb: ret  */ FN_RET(0x00626dc8); r_esp += 4; return;
L_00626ebc:; BB(0x00626ebc);
    /* 00626ebc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626ebe: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626ec1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626ec8: mov esp, ebp */ r_esp = r_ebp;
    /* 00626eca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626ecb: ret  */ FN_RET(0x00626dc8); r_esp += 4; return;
L_00626ecc:; BB(0x00626ecc);
    /* 00626ecc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00626ed3: push 0x368 */ { u32 v = 0x368u; r_esp -= 4; W32(r_esp, v); }
    /* 00626ed8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x626eddu); f_005caba4();
    /* 00626edd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00626ede: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00626ee1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00626ee3: je 0x626f28 */ if (fZ) goto L_00626f28;
L_00626ee5:; BB(0x00626ee5);
    /* 00626ee5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00626eec: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00626ef3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00626ef6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626ef9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626efa: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626f00: call 0x627160 */ r_esp -= 4; W32(r_esp, 0x626f05u); f_00627160();
    /* 00626f05: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626f08: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00626f0f:; BB(0x00626f0f);
    /* 00626f0f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626f12: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626f19: mov esp, ebp */ r_esp = r_ebp;
    /* 00626f1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626f1c: ret  */ FN_RET(0x00626dc8); r_esp += 4; return;
L_00626f1d:; BB(0x00626f1d);
    /* 00626f1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00626f1f: jmp 0x626e54 */ f_00626e54(); return;
L_00626f24:; BB(0x00626f24);
    /* 00626f24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626f26: jmp 0x626eae */ goto L_00626eae;
L_00626f28:; BB(0x00626f28);
    /* 00626f28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00626f2a: jmp 0x626f0f */ goto L_00626f0f;
}

void f_00626f2c(void) /* sub_626F2C */
{
    FN_ENTER(0x00626f2c);
    /* 00626f2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626f2d: mov ebp, esp */ r_ebp = r_esp;
    /* 00626f2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626f31: push 0x8e2c78 */ { u32 v = 0x8e2c78u; r_esp -= 4; W32(r_esp, v); }
    /* 00626f36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626f3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626f3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626f44: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626f47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626f4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00626f4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00626f50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00626f53: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00626f56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626f59: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00626f5c: call 0x626fa0 */ r_esp -= 4; W32(r_esp, 0x626f61u); f_00626fa0();
    /* 00626f61: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626f68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626f6b: mov dword ptr [ecx], 0xb291a0 */ W32((u32)(r_ecx), 0xb291a0u);
    /* 00626f71: mov eax, dword ptr [0x9c5c14] */ r_eax = R32((u32)(0x9c5c14u));
    /* 00626f76: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00626f79: call 0x627090 */ r_esp -= 4; W32(r_esp, 0x626f7eu); f_00627090();
    /* 00626f7e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00626f81: fld dword ptr [0x931e74] */ FPUSH(R_F32((u32)(0x931e74u)));
    /* 00626f87: fadd dword ptr [eax + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x70u));
    /* 00626f8a: fstp dword ptr [eax + 0x340] */ W_F32((u32)(r_eax+0x340u), ST(0)); FPOP();
    /* 00626f90: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00626f93: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00626f9a: mov esp, ebp */ r_esp = r_ebp;
    /* 00626f9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00626f9d: ret 8 */ FN_RET(0x00626f2c); r_esp += 12; return;
}

void f_00626fa0(void) /* sub_626FA0 */
{
    FN_ENTER(0x00626fa0);
    /* 00626fa0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00626fa1: mov ebp, esp */ r_ebp = r_esp;
    /* 00626fa3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00626fa5: push 0x8e2c94 */ { u32 v = 0x8e2c94u; r_esp -= 4; W32(r_esp, v); }
    /* 00626faa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00626fb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626fb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00626fb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00626fbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00626fbe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00626fc1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00626fc4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00626fc7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00626fca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626fcd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00626fd0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00626fd3: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x626fd8u); f_00770748();
    /* 00626fd8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00626fdf: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00626fe2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00626fe5: mov dword ptr [ecx], 0xb28d80 */ W32((u32)(r_ecx), 0xb28d80u);
    /* 00626feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00626fec: call dword ptr [0xb28d94] */ { u32 t = R32((u32)(0xb28d94u)); r_esp -= 4; W32(r_esp, 0x626ff2u); call_ind(t); }
    /* 00626ff2: push dword ptr [0xa8ed74] */ { u32 v = R32((u32)(0xa8ed74u)); r_esp -= 4; W32(r_esp, v); }
    /* 00626ff8: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00626ffe: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x627003u); f_005b8610();
    /* 00627003: push dword ptr [0xa8ed70] */ { u32 v = R32((u32)(0xa8ed70u)); r_esp -= 4; W32(r_esp, v); }
    /* 00627009: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062700c: mov ecx, dword ptr [0xa8ed80] */ r_ecx = R32((u32)(0xa8ed80u));
    /* 00627012: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00627015: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x62701au); f_005b8638();
    /* 0062701a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062701d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0062701f: mov dword ptr [ecx + 0xf8], eax */ W32((u32)(r_ecx+0xf8u), r_eax);
    /* 00627025: push 0x9c5c18 */ { u32 v = 0x9c5c18u; r_esp -= 4; W32(r_esp, v); }
    /* 0062702a: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x62702fu); f_007b9a88();
    /* 0062702f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00627032: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x627037u); f_007b999c();
    /* 00627037: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00627038: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062703b: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x627040u); f_007b4f54();
    /* 00627040: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627043: call 0x627070 */ r_esp -= 4; W32(r_esp, 0x627048u); f_00627070();
    /* 00627048: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0062704b: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 00627051: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00627054: or ecx, 0x1080 */ {  u32 a = r_ecx; u32 b = 0x1080u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0062705a: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0062705d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00627060: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00627063: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0062706a: mov esp, ebp */ r_esp = r_ebp;
    /* 0062706c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0062706d: ret 8 */ FN_RET(0x00626fa0); r_esp += 12; return;
}

